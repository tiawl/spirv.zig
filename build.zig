const std = @import("std");
const toolbox = @import("toolbox");

const Paths = struct {
    __tmp: []const u8,
    __spirv: []const u8,
    __spirv_tools: []const u8,
    __spirv_tools_in: []const u8,
    __source: []const u8,
    __build: []const u8,

    fn getTmp(self: @This()) []const u8 {
        return self.__tmp;
    }

    fn getSpirv(self: @This()) []const u8 {
        return self.__spirv;
    }

    fn getSpirvTools(self: @This()) []const u8 {
        return self.__spirv_tools;
    }

    fn getSpirvToolsIn(self: @This()) []const u8 {
        return self.__spirv_tools_in;
    }

    fn getSource(self: @This()) []const u8 {
        return self.__source;
    }

    fn getBuild(self: @This()) []const u8 {
        return self.__build;
    }

    fn init() !@This() {
        const tmp_path = try toolbox.instance().buildRootJoin(&.{
            "tmp",
        });

        const spirvtools_path = try toolbox.instance().buildRootJoin(&.{
            "spirv-tools",
        });

        return .{
            .__tmp = tmp_path,
            .__spirv_tools = spirvtools_path,
            .__spirv = try toolbox.instance().buildRootJoin(&.{
                "spirv",
            }),
            .__spirv_tools_in = toolbox.instance().pathJoin(&.{
                spirvtools_path, "spirv-tools",
            }),
            .__source = toolbox.instance().pathJoin(&.{
                spirvtools_path, "source",
            }),
            .__build = toolbox.instance().pathJoin(&.{
                tmp_path, "build",
            }),
        };
    }
};

fn update_headers(path: *const Paths) !void {
    try toolbox.instance().clone(.spirv, path.getTmp());

    const tmp_include_path = toolbox.instance().pathJoin(&.{
        path.getTmp(), "include",
    });
    var tmp_include_dir = try std.fs.openDirAbsolute(tmp_include_path, .{
        .iterate = true,
    });
    defer tmp_include_dir.close();

    var walker = try tmp_include_dir.walk(toolbox.instance().getBuilder().allocator);
    defer walker.deinit();

    while (try walker.next()) |*entry| {
        const dest = try toolbox.instance().buildRootJoin(&.{
            entry.path,
        });
        switch (entry.kind) {
            .file => {
                if (toolbox.isHeader(entry.basename)) {
                    try toolbox.instance().copy(toolbox.instance().pathJoin(&.{
                        tmp_include_path, entry.path,
                    }), dest);
                }
            },
            .directory => try toolbox.instance().make(dest),
            else => return error.UnexpectedEntryKind,
        }
    }

    try std.fs.deleteTreeAbsolute(path.getTmp());
}

fn update_sources(path: *const Paths) !void {
    var src_path: []const u8 = undefined;
    var dest_path: []const u8 = undefined;
    var src_dir: std.fs.Dir = undefined;
    var walker: std.fs.Dir.Walker = undefined;

    for ([_]struct {
        src: []const u8,
        dest: []const u8,
    }{
        .{ .src = toolbox.instance().pathJoin(&.{
            "include", "spirv-tools",
        }), .dest = "spirv-tools" },
        .{
            .src = "source",
            .dest = "source",
        },
    }) |dir_name| {
        src_path = toolbox.instance().pathJoin(&.{
            path.getTmp(), dir_name.src,
        });
        dest_path = toolbox.instance().pathJoin(&.{
            path.getSpirvTools(), dir_name.dest,
        });

        try toolbox.instance().make(dest_path);

        src_dir = try std.fs.openDirAbsolute(src_path, .{
            .iterate = true,
        });
        defer src_dir.close();

        walker = try src_dir.walk(toolbox.instance().getBuilder().allocator);
        defer walker.deinit();

        while (try walker.next()) |*entry| {
            const dest = toolbox.instance().pathJoin(&.{
                dest_path, entry.path,
            });
            switch (entry.kind) {
                .file => try toolbox.instance().copy(toolbox.instance().pathJoin(&.{
                    src_path, entry.path,
                }), dest),
                .directory => try toolbox.instance().make(dest),
                else => return error.UnexpectedEntryKind,
            }
        }
    }
}

fn wait_20_secs() void {
    std.time.sleep(std.time.ns_per_s * 20);
}

fn update_generated(path: *const Paths) !void {
    var build_dir = try std.fs.openDirAbsolute(path.getBuild(), .{
        .iterate = true,
    });
    defer build_dir.close();

    var it = build_dir.iterate();
    while (try it.next()) |*entry| {
        switch (entry.kind) {
            .file => {
                if (std.mem.endsWith(u8, entry.name, ".inc")) {
                    try toolbox.instance().copy(toolbox.instance().pathJoin(&.{
                        path.getBuild(), entry.name,
                    }), toolbox.instance().pathJoin(&.{
                        path.getSpirvToolsIn(), entry.name,
                    }));
                }
            },
            else => {},
        }
    }
}

fn update(path: *const Paths) !void {
    std.fs.deleteTreeAbsolute(path.getTmp()) catch |err| {
        switch (err) {
            error.FileNotFound => {},
            else => return err,
        }
    };

    for ([_][]const u8{
        path.getSpirv(), path.getSpirvTools(),
    }) |dest_path| {
        try std.fs.deleteTreeAbsolute(dest_path);
        try toolbox.instance().make(dest_path);
    }

    try update_headers(path);

    try toolbox.instance().clone(.@"spirv-tools", path.getTmp());
    try toolbox.instance().run(.{
        .argv = &[_][]const u8{
            "python3", toolbox.instance().pathJoin(&.{
                "utils", "git-sync-deps",
            }),
        },
        .cwd = path.getTmp(),
    });

    try toolbox.instance().make(path.getBuild());

    try toolbox.instance().run(.{
        .argv = &[_][]const u8{
            "cmake", "..",
        },
        .cwd = path.getBuild(),
    });
    try toolbox.instance().run(.{
        .argv = &[_][]const u8{
            "make",
        },
        .cwd = path.getBuild(),
        .wait = wait_20_secs,
    });

    try update_sources(path);
    try update_generated(path);

    try std.fs.deleteTreeAbsolute(path.getTmp());

    var source_dir = try std.fs.openDirAbsolute(path.getSource(), .{
        .iterate = true,
    });
    defer source_dir.close();

    var walker = try source_dir.walk(toolbox.instance().getBuilder().allocator);
    defer walker.deinit();

    while (try walker.next()) |*entry| {
        switch (entry.kind) {
            .file => {
                if (std.fs.path.dirname(entry.path)) |dirname| {
                    if (!std.mem.eql(u8, "opt", dirname) and !std.mem.eql(u8, "val", dirname) and !std.mem.eql(u8, "util", dirname)) {
                        try std.fs.deleteFileAbsolute(toolbox.instance().pathJoin(&.{
                            path.getSource(), entry.path,
                        }));
                    }
                }
            },
            else => {},
        }
    }

    try toolbox.instance().clean(&.{
        "spirv", "spirv-tools",
    }, &.{
        ".inc",
    });
}

const FromZon = toolbox.Repositories(.{
    .toolbox,
});

const DuringExec = toolbox.Repositories(.{
    .spirv, .@"spirv-tools",
});

pub fn build(builder: *std.Build) !void {
    const target = builder.standardTargetOptions(.{});
    const optimize = builder.standardOptimizeOption(.{});

    try toolbox.init(FromZon, DuringExec, builder, optimize, .spirv_zig, "0xc01cda876afcbb", &.{
        "spirv", "spirv-tools",
    }, .{
        .toolbox = .{
            .name = "tiawl/toolbox",
            .host = .github,
            .ref = .tag,
        },
    }, .{
        .spirv = .{
            .name = "KhronosGroup/SPIRV-Headers",
            .host = .github,
            .ref = .commit,
        },
        .@"spirv-tools" = .{
            .name = "KhronosGroup/SPIRV-Tools",
            .host = .github,
            .ref = .commit,
        },
    });
    defer toolbox.deinit();

    const path = try Paths.init();

    if (toolbox.instance().getUpdate()) try update(&path);

    const lib = builder.addStaticLibrary(.{
        .name = "spirv",
        .root_source_file = builder.addWriteFiles().add("empty.c", ""),
        .target = target,
        .optimize = optimize,
    });

    for ([_][]const u8{
        ".", "spirv", "spirv-tools",
        builder.pathJoin(&.{
            "spirv-tools", "spirv-tools",
        }),
        builder.pathJoin(&.{
            "spirv", "unified1",
        }),
    }) |include| {
        toolbox.instance().addInclude(lib, include);
    }

    toolbox.instance().addHeader(lib, path.getSpirv(), "spirv", &.{
        ".h", ".hpp", ".hpp11",
    });
    toolbox.instance().addHeader(lib, path.getSpirvToolsIn(), "spirv-tools", &.{
        ".h", ".hpp", ".hpp11",
    });

    lib.linkLibCpp();

    var source_dir = try std.fs.openDirAbsolute(path.getSource(), .{
        .iterate = true,
    });
    defer source_dir.close();

    var walker = try source_dir.walk(builder.allocator);
    defer walker.deinit();

    while (try walker.next()) |*entry| {
        switch (entry.kind) {
            .file => {
                if (toolbox.isCppSource(entry.basename)) {
                    try toolbox.instance().addSource(lib, path.getSource(), entry.path, &.{});
                }
            },
            else => {},
        }
    }

    builder.installArtifact(lib);
}
