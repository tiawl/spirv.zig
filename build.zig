const std = @import("std");
const build_zig_zon = @import("build.zig.zon");
const toolbox = @import("toolbox");
const VerboseBuilder = toolbox.VerboseBuilder;

fn updateSpirvHeaders(pkg_builder: *VerboseBuilder) !void {
    const spirv_headers_dep = pkg_builder.verboseDependency("SPIRV-Headers");
    var spirv_headers_builder = VerboseBuilder.initFromDependency(spirv_headers_dep);

    while (try spirv_headers_builder.walk(&.{"include"})) |entry| {
        switch (entry.kind) {
            .file => {
                if (toolbox.isCOrCpp11Header(entry.basename)) {
                    try pkg_builder.copy(&.{entry.path}, &spirv_headers_builder, &.{ "include", entry.path });
                }
            },
            .directory => try pkg_builder.make(&.{entry.path}),
            else => {},
        }
    }
}

fn updateMimalloc(pkg_builder: *VerboseBuilder) !void {
    const mimalloc_dep = pkg_builder.verboseDependency("mimalloc");
    var mimalloc_builder = VerboseBuilder.initFromDependency(mimalloc_dep);

    try pkg_builder.make(&.{ "mimalloc", "include" });
    while (try mimalloc_builder.walk(&.{"include"})) |entry| {
        switch (entry.kind) {
            .file => {
                if (toolbox.isCHeader(entry.basename)) {
                    try pkg_builder.copy(&.{ "mimalloc", "include", entry.path }, &mimalloc_builder, &.{ "include", entry.path });
                }
            },
            .directory => try pkg_builder.make(&.{ "mimalloc", "include", entry.path }),
            else => {},
        }
    }

    try pkg_builder.make(&.{ "mimalloc", "src" });
    while (try mimalloc_builder.walk(&.{"src"})) |entry| {
        switch (entry.kind) {
            .file => {
                if (toolbox.isCFile(entry.basename)) {
                    try pkg_builder.copy(&.{ "mimalloc", "src", entry.path }, &mimalloc_builder, &.{ "src", entry.path });
                }
            },
            .directory => try pkg_builder.make(&.{ "mimalloc", "src", entry.path }),
            else => {},
        }
    }
}

fn updateSpirvTools(pkg_builder: *VerboseBuilder) !void {
    const spirv_tools_dep = pkg_builder.verboseDependency("SPIRV-Tools");
    var spirv_tools_builder = VerboseBuilder.initFromDependency(spirv_tools_dep);

    _ = try spirv_tools_builder.run(&.{ "python3", pkg_builder.resolve(&.{ "utils", "git-sync-deps" }) }, spirv_tools_builder.ptrCwd().*);
    try spirv_tools_builder.make(&.{"build"});
    const build_dir = try spirv_tools_builder.openDir(&.{"build"});
    defer spirv_tools_builder.closeDir(build_dir);
    _ = try spirv_tools_builder.run(&.{ "cmake", ".." }, build_dir);
    const build_source_dir = try spirv_tools_builder.openDir(&.{ "build", "source" });
    defer spirv_tools_builder.closeDir(build_source_dir);
    _ = try spirv_tools_builder.run(&.{ "python3", pkg_builder.resolve(&.{ "..", "..", "utils", "update_build_version.py" }), pkg_builder.resolve(&.{ "..", "..", "CHANGES" }), pkg_builder.resolve(&.{ "..", "build-version.inc" }) }, build_source_dir);
    _ = try spirv_tools_builder.run(&.{ "python3", pkg_builder.resolve(&.{ "..", "..", "utils", "ggt.py" }), pkg_builder.fmt("--core-tables-body-output={s}", .{pkg_builder.resolve(&.{ "..", "core_tables_body.inc" })}), pkg_builder.fmt("--core-tables-header-output={s}", .{pkg_builder.resolve(&.{ "..", "core_tables_header.inc" })}), pkg_builder.fmt("--spirv-core-grammar={s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "spirv.core.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.glsl.std.450.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.opencl.std.100.grammar.json" })}), pkg_builder.fmt("--extinst=CLDEBUG100_,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.opencl.debuginfo.100.grammar.json" })}), pkg_builder.fmt("--extinst=SHDEBUG100_,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.nonsemantic.shader.debuginfo.100.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.spv-amd-shader-explicit-vertex-parameter.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.spv-amd-shader-trinary-minmax.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.spv-amd-gcn-shader.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.spv-amd-shader-ballot.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.debuginfo.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.nonsemantic.clspvreflection.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.nonsemantic.vkspreflection.grammar.json" })}), pkg_builder.fmt("--extinst=TOSA_,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.tosa.001000.1.grammar.json" })}), pkg_builder.fmt("--extinst=,{s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "unified1", "extinst.arm.motion-engine.100.grammar.json" })}) }, build_source_dir);
    _ = try spirv_tools_builder.run(&.{ "python3", pkg_builder.resolve(&.{ "..", "..", "utils", "generate_registry_tables.py" }), pkg_builder.fmt("--xml={s}", .{pkg_builder.resolve(&.{ "..", "..", "external", "spirv-headers", "include", "spirv", "spir-v.xml" })}), pkg_builder.fmt("--generator-output={s}", .{pkg_builder.resolve(&.{ "..", "generators.inc" })}) }, build_source_dir);

    try pkg_builder.make(&.{ "spirv-tools", "spirv-tools" });
    while (try spirv_tools_builder.walk(&.{"include"})) |entry| {
        switch (entry.kind) {
            .file => try pkg_builder.copy(&.{ "spirv-tools", entry.path }, &spirv_tools_builder, &.{ "include", entry.path }),
            .directory => try pkg_builder.make(&.{ "spirv-tools", entry.path }),
            else => {},
        }
    }

    try pkg_builder.make(&.{ "spirv-tools", "source" });
    while (try spirv_tools_builder.walk(&.{"source"})) |entry| {
        switch (entry.kind) {
            .file => {
                if (toolbox.isCOrCppFile(entry.basename)) {
                    if (std.fs.path.dirname(entry.path)) |dirname| {
                        var it = std.fs.path.componentIterator(dirname);
                        if (std.mem.eql(u8, it.first().?.name, "opt") or std.mem.eql(u8, it.first().?.name, "val") or std.mem.eql(u8, it.first().?.name, "util")) {
                            try pkg_builder.copy(&.{ "spirv-tools", "source", entry.path }, &spirv_tools_builder, &.{ "source", entry.path });
                        }
                    } else {
                        try pkg_builder.copy(&.{ "spirv-tools", "source", entry.path }, &spirv_tools_builder, &.{ "source", entry.path });
                    }
                }
            },
            .directory => try pkg_builder.make(&.{ "spirv-tools", "source", entry.path }),
            else => {},
        }
    }

    while (try spirv_tools_builder.iterate(&.{"build"})) |entry| {
        switch (entry.kind) {
            .file => if (toolbox.isIncludeFile(entry.name)) try pkg_builder.copy(&.{ "spirv-tools", "spirv-tools", entry.name }, &spirv_tools_builder, &.{ "build", entry.name }),
            else => {},
        }
    }
}

fn updateFn(pkg_builder: *VerboseBuilder) !void {
    for ([_][]const u8{ "spirv", "spirv-tools", "mimalloc" }) |dir| {
        try pkg_builder.remove(&.{dir});
        try pkg_builder.make(&.{dir});
    }

    try updateSpirvHeaders(pkg_builder);
    try updateMimalloc(pkg_builder);
    try updateSpirvTools(pkg_builder);
}

fn buildFn(pkg_builder: *VerboseBuilder) !void {
    const lib = pkg_builder.addLibrary("spirv");

    while (try pkg_builder.walk(&.{"spirv"})) |*entry| {
        if (toolbox.isCOrCpp11Header(entry.basename)) pkg_builder.installHeader(lib, &.{ "spirv", entry.path }, &.{ "spirv", entry.path });
    }

    while (try pkg_builder.walk(&.{ "spirv-tools", "spirv-tools" })) |*entry| {
        if (toolbox.isCOrCpp11Header(entry.basename)) pkg_builder.installHeader(lib, &.{ "spirv-tools", "spirv-tools", entry.path }, &.{ "spirv-tools", entry.path });
    }

    while (try pkg_builder.walk(&.{ "mimalloc", "include" })) |*entry| {
        if (toolbox.isCOrCpp11Header(entry.basename)) pkg_builder.installHeader(lib, &.{ "mimalloc", "include", entry.path }, &.{entry.path});
    }

    pkg_builder.linkLibCpp(lib);

    pkg_builder.addInclude(lib, &.{"."});
    pkg_builder.addInclude(lib, &.{"spirv"});
    pkg_builder.addInclude(lib, &.{ "spirv", "unified1" });
    pkg_builder.addInclude(lib, &.{"mimalloc"});
    pkg_builder.addInclude(lib, &.{ "mimalloc", "src" });
    pkg_builder.addInclude(lib, &.{ "mimalloc", "include" });
    pkg_builder.addInclude(lib, &.{"spirv-tools"});
    pkg_builder.addInclude(lib, &.{ "spirv-tools", "spirv-tools" });

    while (try pkg_builder.walk(&.{ "spirv-tools", "source" })) |*entry| {
        if (toolbox.isCppSource(entry.basename)) pkg_builder.addCSource(lib, &.{ "spirv-tools", "source", entry.path }, &.{});
    }

    pkg_builder.addCSource(lib, &.{ "mimalloc", "src", "static.c" }, &.{"-Wno-date-time"});

    pkg_builder.installArtifact(lib);
}

pub fn build(builder: *std.Build) !void {
    var pkg_builder = try VerboseBuilder.init(builder, @tagName(build_zig_zon.name), buildFn, updateFn);

    try pkg_builder.fetch(@TypeOf(build_zig_zon.dependencies), build_zig_zon.dependencies, pkg_builder.ptrCwd());
    try pkg_builder.update();
    try pkg_builder.build();
}
