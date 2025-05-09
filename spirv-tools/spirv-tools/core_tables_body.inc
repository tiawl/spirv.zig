// Returns the name of an extension, as an index into kStrings
IndexRange ExtensionToIndexRange(Extension extension) {
  switch(extension) {
    case Extension::kSPV_AMDX_shader_enqueue: return IR(0, 24);
    case Extension::kSPV_AMD_gcn_shader: return IR(24, 19);
    case Extension::kSPV_AMD_gpu_shader_half_float: return IR(43, 30);
    case Extension::kSPV_AMD_gpu_shader_half_float_fetch: return IR(73, 36);
    case Extension::kSPV_AMD_gpu_shader_int16: return IR(109, 25);
    case Extension::kSPV_AMD_shader_ballot: return IR(134, 22);
    case Extension::kSPV_AMD_shader_early_and_late_fragment_tests: return IR(156, 45);
    case Extension::kSPV_AMD_shader_explicit_vertex_parameter: return IR(201, 41);
    case Extension::kSPV_AMD_shader_fragment_mask: return IR(242, 29);
    case Extension::kSPV_AMD_shader_image_load_store_lod: return IR(271, 36);
    case Extension::kSPV_AMD_shader_trinary_minmax: return IR(307, 30);
    case Extension::kSPV_AMD_texture_gather_bias_lod: return IR(337, 32);
    case Extension::kSPV_ARM_cooperative_matrix_layouts: return IR(369, 35);
    case Extension::kSPV_ARM_core_builtins: return IR(404, 22);
    case Extension::kSPV_EXT_arithmetic_fence: return IR(426, 25);
    case Extension::kSPV_EXT_demote_to_helper_invocation: return IR(451, 36);
    case Extension::kSPV_EXT_descriptor_indexing: return IR(487, 28);
    case Extension::kSPV_EXT_fragment_fully_covered: return IR(515, 31);
    case Extension::kSPV_EXT_fragment_invocation_density: return IR(546, 36);
    case Extension::kSPV_EXT_fragment_shader_interlock: return IR(582, 34);
    case Extension::kSPV_EXT_mesh_shader: return IR(616, 20);
    case Extension::kSPV_EXT_opacity_micromap: return IR(636, 25);
    case Extension::kSPV_EXT_optnone: return IR(661, 16);
    case Extension::kSPV_EXT_physical_storage_buffer: return IR(677, 32);
    case Extension::kSPV_EXT_relaxed_printf_string_address_space: return IR(709, 44);
    case Extension::kSPV_EXT_replicated_composites: return IR(753, 30);
    case Extension::kSPV_EXT_shader_atomic_float16_add: return IR(783, 34);
    case Extension::kSPV_EXT_shader_atomic_float_add: return IR(817, 32);
    case Extension::kSPV_EXT_shader_atomic_float_min_max: return IR(849, 36);
    case Extension::kSPV_EXT_shader_image_int64: return IR(885, 27);
    case Extension::kSPV_EXT_shader_stencil_export: return IR(912, 30);
    case Extension::kSPV_EXT_shader_tile_image: return IR(942, 26);
    case Extension::kSPV_EXT_shader_viewport_index_layer: return IR(968, 36);
    case Extension::kSPV_GOOGLE_decorate_string: return IR(1004, 27);
    case Extension::kSPV_GOOGLE_hlsl_functionality1: return IR(1031, 31);
    case Extension::kSPV_GOOGLE_user_type: return IR(1062, 21);
    case Extension::kSPV_INTEL_2d_block_io: return IR(1083, 22);
    case Extension::kSPV_INTEL_arbitrary_precision_fixed_point: return IR(1105, 42);
    case Extension::kSPV_INTEL_arbitrary_precision_floating_point: return IR(1147, 45);
    case Extension::kSPV_INTEL_arbitrary_precision_integers: return IR(1192, 39);
    case Extension::kSPV_INTEL_bfloat16_conversion: return IR(1231, 30);
    case Extension::kSPV_INTEL_blocking_pipes: return IR(1261, 25);
    case Extension::kSPV_INTEL_cache_controls: return IR(1286, 25);
    case Extension::kSPV_INTEL_debug_module: return IR(1311, 23);
    case Extension::kSPV_INTEL_device_side_avc_motion_estimation: return IR(1334, 44);
    case Extension::kSPV_INTEL_float_controls2: return IR(1378, 26);
    case Extension::kSPV_INTEL_fp_fast_math_mode: return IR(1404, 28);
    case Extension::kSPV_INTEL_fp_max_error: return IR(1432, 23);
    case Extension::kSPV_INTEL_fpga_argument_interfaces: return IR(1455, 35);
    case Extension::kSPV_INTEL_fpga_buffer_location: return IR(1490, 31);
    case Extension::kSPV_INTEL_fpga_cluster_attributes: return IR(1521, 34);
    case Extension::kSPV_INTEL_fpga_dsp_control: return IR(1555, 27);
    case Extension::kSPV_INTEL_fpga_invocation_pipelining_attributes: return IR(1582, 48);
    case Extension::kSPV_INTEL_fpga_latency_control: return IR(1630, 31);
    case Extension::kSPV_INTEL_fpga_loop_controls: return IR(1661, 29);
    case Extension::kSPV_INTEL_fpga_memory_accesses: return IR(1690, 31);
    case Extension::kSPV_INTEL_fpga_memory_attributes: return IR(1721, 33);
    case Extension::kSPV_INTEL_fpga_reg: return IR(1754, 19);
    case Extension::kSPV_INTEL_function_pointers: return IR(1773, 28);
    case Extension::kSPV_INTEL_global_variable_fpga_decorations: return IR(1801, 43);
    case Extension::kSPV_INTEL_global_variable_host_access: return IR(1844, 38);
    case Extension::kSPV_INTEL_inline_assembly: return IR(1882, 26);
    case Extension::kSPV_INTEL_io_pipes: return IR(1908, 19);
    case Extension::kSPV_INTEL_kernel_attributes: return IR(1927, 28);
    case Extension::kSPV_INTEL_long_composites: return IR(1955, 26);
    case Extension::kSPV_INTEL_loop_fuse: return IR(1981, 20);
    case Extension::kSPV_INTEL_masked_gather_scatter: return IR(2001, 32);
    case Extension::kSPV_INTEL_maximum_registers: return IR(2033, 28);
    case Extension::kSPV_INTEL_media_block_io: return IR(2061, 25);
    case Extension::kSPV_INTEL_memory_access_aliasing: return IR(2086, 33);
    case Extension::kSPV_INTEL_optnone: return IR(2119, 18);
    case Extension::kSPV_INTEL_runtime_aligned: return IR(2137, 26);
    case Extension::kSPV_INTEL_shader_integer_functions2: return IR(2163, 36);
    case Extension::kSPV_INTEL_split_barrier: return IR(2199, 24);
    case Extension::kSPV_INTEL_subgroup_buffer_prefetch: return IR(2223, 35);
    case Extension::kSPV_INTEL_subgroup_matrix_multiply_accumulate: return IR(2258, 46);
    case Extension::kSPV_INTEL_subgroups: return IR(2304, 20);
    case Extension::kSPV_INTEL_task_sequence: return IR(2324, 24);
    case Extension::kSPV_INTEL_tensor_float32_conversion: return IR(2348, 36);
    case Extension::kSPV_INTEL_ternary_bitwise_function: return IR(2384, 35);
    case Extension::kSPV_INTEL_unstructured_loop_controls: return IR(2419, 37);
    case Extension::kSPV_INTEL_usm_storage_classes: return IR(2456, 30);
    case Extension::kSPV_INTEL_variable_length_array: return IR(2486, 32);
    case Extension::kSPV_INTEL_vector_compute: return IR(2518, 25);
    case Extension::kSPV_KHR_16bit_storage: return IR(2543, 22);
    case Extension::kSPV_KHR_8bit_storage: return IR(2565, 21);
    case Extension::kSPV_KHR_bfloat16: return IR(2586, 17);
    case Extension::kSPV_KHR_bit_instructions: return IR(2603, 25);
    case Extension::kSPV_KHR_compute_shader_derivatives: return IR(2628, 35);
    case Extension::kSPV_KHR_cooperative_matrix: return IR(2663, 27);
    case Extension::kSPV_KHR_device_group: return IR(2690, 21);
    case Extension::kSPV_KHR_expect_assume: return IR(2711, 22);
    case Extension::kSPV_KHR_float_controls: return IR(2733, 23);
    case Extension::kSPV_KHR_float_controls2: return IR(2756, 24);
    case Extension::kSPV_KHR_fragment_shader_barycentric: return IR(2780, 36);
    case Extension::kSPV_KHR_fragment_shading_rate: return IR(2816, 30);
    case Extension::kSPV_KHR_integer_dot_product: return IR(2846, 28);
    case Extension::kSPV_KHR_linkonce_odr: return IR(2874, 21);
    case Extension::kSPV_KHR_maximal_reconvergence: return IR(2895, 30);
    case Extension::kSPV_KHR_multiview: return IR(2925, 18);
    case Extension::kSPV_KHR_no_integer_wrap_decoration: return IR(2943, 35);
    case Extension::kSPV_KHR_non_semantic_info: return IR(2978, 26);
    case Extension::kSPV_KHR_physical_storage_buffer: return IR(3004, 32);
    case Extension::kSPV_KHR_post_depth_coverage: return IR(3036, 28);
    case Extension::kSPV_KHR_quad_control: return IR(3064, 21);
    case Extension::kSPV_KHR_ray_cull_mask: return IR(3085, 22);
    case Extension::kSPV_KHR_ray_query: return IR(3107, 18);
    case Extension::kSPV_KHR_ray_tracing: return IR(3125, 20);
    case Extension::kSPV_KHR_ray_tracing_position_fetch: return IR(3145, 35);
    case Extension::kSPV_KHR_relaxed_extended_instruction: return IR(3180, 37);
    case Extension::kSPV_KHR_shader_atomic_counter_ops: return IR(3217, 34);
    case Extension::kSPV_KHR_shader_ballot: return IR(3251, 22);
    case Extension::kSPV_KHR_shader_clock: return IR(3273, 21);
    case Extension::kSPV_KHR_shader_draw_parameters: return IR(3294, 31);
    case Extension::kSPV_KHR_storage_buffer_storage_class: return IR(3325, 37);
    case Extension::kSPV_KHR_subgroup_rotate: return IR(3362, 24);
    case Extension::kSPV_KHR_subgroup_uniform_control_flow: return IR(3386, 38);
    case Extension::kSPV_KHR_subgroup_vote: return IR(3424, 22);
    case Extension::kSPV_KHR_terminate_invocation: return IR(3446, 29);
    case Extension::kSPV_KHR_uniform_group_instructions: return IR(3475, 35);
    case Extension::kSPV_KHR_untyped_pointers: return IR(3510, 25);
    case Extension::kSPV_KHR_variable_pointers: return IR(3535, 26);
    case Extension::kSPV_KHR_vulkan_memory_model: return IR(3561, 28);
    case Extension::kSPV_KHR_workgroup_memory_explicit_layout: return IR(3589, 41);
    case Extension::kSPV_NVX_multiview_per_view_attributes: return IR(3630, 38);
    case Extension::kSPV_NV_bindless_texture: return IR(3668, 24);
    case Extension::kSPV_NV_cluster_acceleration_structure: return IR(3692, 38);
    case Extension::kSPV_NV_compute_shader_derivatives: return IR(3730, 34);
    case Extension::kSPV_NV_cooperative_matrix: return IR(3764, 26);
    case Extension::kSPV_NV_cooperative_matrix2: return IR(3790, 27);
    case Extension::kSPV_NV_cooperative_vector: return IR(3817, 26);
    case Extension::kSPV_NV_displacement_micromap: return IR(3843, 29);
    case Extension::kSPV_NV_fragment_shader_barycentric: return IR(3872, 35);
    case Extension::kSPV_NV_geometry_shader_passthrough: return IR(3907, 35);
    case Extension::kSPV_NV_linear_swept_spheres: return IR(3942, 28);
    case Extension::kSPV_NV_mesh_shader: return IR(3970, 19);
    case Extension::kSPV_NV_raw_access_chains: return IR(3989, 25);
    case Extension::kSPV_NV_ray_tracing: return IR(4014, 19);
    case Extension::kSPV_NV_ray_tracing_motion_blur: return IR(4033, 31);
    case Extension::kSPV_NV_sample_mask_override_coverage: return IR(4064, 37);
    case Extension::kSPV_NV_shader_atomic_fp16_vector: return IR(4101, 33);
    case Extension::kSPV_NV_shader_image_footprint: return IR(4134, 30);
    case Extension::kSPV_NV_shader_invocation_reorder: return IR(4164, 33);
    case Extension::kSPV_NV_shader_sm_builtins: return IR(4197, 26);
    case Extension::kSPV_NV_shader_subgroup_partitioned: return IR(4223, 35);
    case Extension::kSPV_NV_shading_rate: return IR(4258, 20);
    case Extension::kSPV_NV_stereo_view_rendering: return IR(4278, 29);
    case Extension::kSPV_NV_tensor_addressing: return IR(4307, 25);
    case Extension::kSPV_NV_viewport_array2: return IR(4332, 23);
    case Extension::kSPV_QCOM_image_processing: return IR(4355, 26);
    case Extension::kSPV_QCOM_image_processing2: return IR(4381, 27);
    case Extension::kSPV_QCOM_tile_shading: return IR(4408, 22);
    case Extension::kSPV_VALIDATOR_ignore_type_decl_unique: return IR(4430, 38);
    default: break;
  }
  return {};
}

// Extension names and values, ordered by name
// The fields in order are:
//   name, indexing into kStrings
//   enum value
static const std::array<NameValue,153> kExtensionNames{{
    {IR(0, 24), static_cast<uint32_t>(kSPV_AMDX_shader_enqueue)},
    {IR(24, 19), static_cast<uint32_t>(kSPV_AMD_gcn_shader)},
    {IR(43, 30), static_cast<uint32_t>(kSPV_AMD_gpu_shader_half_float)},
    {IR(73, 36), static_cast<uint32_t>(kSPV_AMD_gpu_shader_half_float_fetch)},
    {IR(109, 25), static_cast<uint32_t>(kSPV_AMD_gpu_shader_int16)},
    {IR(134, 22), static_cast<uint32_t>(kSPV_AMD_shader_ballot)},
    {IR(156, 45), static_cast<uint32_t>(kSPV_AMD_shader_early_and_late_fragment_tests)},
    {IR(201, 41), static_cast<uint32_t>(kSPV_AMD_shader_explicit_vertex_parameter)},
    {IR(242, 29), static_cast<uint32_t>(kSPV_AMD_shader_fragment_mask)},
    {IR(271, 36), static_cast<uint32_t>(kSPV_AMD_shader_image_load_store_lod)},
    {IR(307, 30), static_cast<uint32_t>(kSPV_AMD_shader_trinary_minmax)},
    {IR(337, 32), static_cast<uint32_t>(kSPV_AMD_texture_gather_bias_lod)},
    {IR(369, 35), static_cast<uint32_t>(kSPV_ARM_cooperative_matrix_layouts)},
    {IR(404, 22), static_cast<uint32_t>(kSPV_ARM_core_builtins)},
    {IR(426, 25), static_cast<uint32_t>(kSPV_EXT_arithmetic_fence)},
    {IR(451, 36), static_cast<uint32_t>(kSPV_EXT_demote_to_helper_invocation)},
    {IR(487, 28), static_cast<uint32_t>(kSPV_EXT_descriptor_indexing)},
    {IR(515, 31), static_cast<uint32_t>(kSPV_EXT_fragment_fully_covered)},
    {IR(546, 36), static_cast<uint32_t>(kSPV_EXT_fragment_invocation_density)},
    {IR(582, 34), static_cast<uint32_t>(kSPV_EXT_fragment_shader_interlock)},
    {IR(616, 20), static_cast<uint32_t>(kSPV_EXT_mesh_shader)},
    {IR(636, 25), static_cast<uint32_t>(kSPV_EXT_opacity_micromap)},
    {IR(661, 16), static_cast<uint32_t>(kSPV_EXT_optnone)},
    {IR(677, 32), static_cast<uint32_t>(kSPV_EXT_physical_storage_buffer)},
    {IR(709, 44), static_cast<uint32_t>(kSPV_EXT_relaxed_printf_string_address_space)},
    {IR(753, 30), static_cast<uint32_t>(kSPV_EXT_replicated_composites)},
    {IR(783, 34), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float16_add)},
    {IR(817, 32), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float_add)},
    {IR(849, 36), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float_min_max)},
    {IR(885, 27), static_cast<uint32_t>(kSPV_EXT_shader_image_int64)},
    {IR(912, 30), static_cast<uint32_t>(kSPV_EXT_shader_stencil_export)},
    {IR(942, 26), static_cast<uint32_t>(kSPV_EXT_shader_tile_image)},
    {IR(968, 36), static_cast<uint32_t>(kSPV_EXT_shader_viewport_index_layer)},
    {IR(1004, 27), static_cast<uint32_t>(kSPV_GOOGLE_decorate_string)},
    {IR(1031, 31), static_cast<uint32_t>(kSPV_GOOGLE_hlsl_functionality1)},
    {IR(1062, 21), static_cast<uint32_t>(kSPV_GOOGLE_user_type)},
    {IR(1083, 22), static_cast<uint32_t>(kSPV_INTEL_2d_block_io)},
    {IR(1105, 42), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_fixed_point)},
    {IR(1147, 45), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_floating_point)},
    {IR(1192, 39), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_integers)},
    {IR(1231, 30), static_cast<uint32_t>(kSPV_INTEL_bfloat16_conversion)},
    {IR(1261, 25), static_cast<uint32_t>(kSPV_INTEL_blocking_pipes)},
    {IR(1286, 25), static_cast<uint32_t>(kSPV_INTEL_cache_controls)},
    {IR(1311, 23), static_cast<uint32_t>(kSPV_INTEL_debug_module)},
    {IR(1334, 44), static_cast<uint32_t>(kSPV_INTEL_device_side_avc_motion_estimation)},
    {IR(1378, 26), static_cast<uint32_t>(kSPV_INTEL_float_controls2)},
    {IR(1404, 28), static_cast<uint32_t>(kSPV_INTEL_fp_fast_math_mode)},
    {IR(1432, 23), static_cast<uint32_t>(kSPV_INTEL_fp_max_error)},
    {IR(1455, 35), static_cast<uint32_t>(kSPV_INTEL_fpga_argument_interfaces)},
    {IR(1490, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_buffer_location)},
    {IR(1521, 34), static_cast<uint32_t>(kSPV_INTEL_fpga_cluster_attributes)},
    {IR(1555, 27), static_cast<uint32_t>(kSPV_INTEL_fpga_dsp_control)},
    {IR(1582, 48), static_cast<uint32_t>(kSPV_INTEL_fpga_invocation_pipelining_attributes)},
    {IR(1630, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_latency_control)},
    {IR(1661, 29), static_cast<uint32_t>(kSPV_INTEL_fpga_loop_controls)},
    {IR(1690, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_memory_accesses)},
    {IR(1721, 33), static_cast<uint32_t>(kSPV_INTEL_fpga_memory_attributes)},
    {IR(1754, 19), static_cast<uint32_t>(kSPV_INTEL_fpga_reg)},
    {IR(1773, 28), static_cast<uint32_t>(kSPV_INTEL_function_pointers)},
    {IR(1801, 43), static_cast<uint32_t>(kSPV_INTEL_global_variable_fpga_decorations)},
    {IR(1844, 38), static_cast<uint32_t>(kSPV_INTEL_global_variable_host_access)},
    {IR(1882, 26), static_cast<uint32_t>(kSPV_INTEL_inline_assembly)},
    {IR(1908, 19), static_cast<uint32_t>(kSPV_INTEL_io_pipes)},
    {IR(1927, 28), static_cast<uint32_t>(kSPV_INTEL_kernel_attributes)},
    {IR(1955, 26), static_cast<uint32_t>(kSPV_INTEL_long_composites)},
    {IR(1981, 20), static_cast<uint32_t>(kSPV_INTEL_loop_fuse)},
    {IR(2001, 32), static_cast<uint32_t>(kSPV_INTEL_masked_gather_scatter)},
    {IR(2033, 28), static_cast<uint32_t>(kSPV_INTEL_maximum_registers)},
    {IR(2061, 25), static_cast<uint32_t>(kSPV_INTEL_media_block_io)},
    {IR(2086, 33), static_cast<uint32_t>(kSPV_INTEL_memory_access_aliasing)},
    {IR(2119, 18), static_cast<uint32_t>(kSPV_INTEL_optnone)},
    {IR(2137, 26), static_cast<uint32_t>(kSPV_INTEL_runtime_aligned)},
    {IR(2163, 36), static_cast<uint32_t>(kSPV_INTEL_shader_integer_functions2)},
    {IR(2199, 24), static_cast<uint32_t>(kSPV_INTEL_split_barrier)},
    {IR(2223, 35), static_cast<uint32_t>(kSPV_INTEL_subgroup_buffer_prefetch)},
    {IR(2258, 46), static_cast<uint32_t>(kSPV_INTEL_subgroup_matrix_multiply_accumulate)},
    {IR(2304, 20), static_cast<uint32_t>(kSPV_INTEL_subgroups)},
    {IR(2324, 24), static_cast<uint32_t>(kSPV_INTEL_task_sequence)},
    {IR(2348, 36), static_cast<uint32_t>(kSPV_INTEL_tensor_float32_conversion)},
    {IR(2384, 35), static_cast<uint32_t>(kSPV_INTEL_ternary_bitwise_function)},
    {IR(2419, 37), static_cast<uint32_t>(kSPV_INTEL_unstructured_loop_controls)},
    {IR(2456, 30), static_cast<uint32_t>(kSPV_INTEL_usm_storage_classes)},
    {IR(2486, 32), static_cast<uint32_t>(kSPV_INTEL_variable_length_array)},
    {IR(2518, 25), static_cast<uint32_t>(kSPV_INTEL_vector_compute)},
    {IR(2543, 22), static_cast<uint32_t>(kSPV_KHR_16bit_storage)},
    {IR(2565, 21), static_cast<uint32_t>(kSPV_KHR_8bit_storage)},
    {IR(2586, 17), static_cast<uint32_t>(kSPV_KHR_bfloat16)},
    {IR(2603, 25), static_cast<uint32_t>(kSPV_KHR_bit_instructions)},
    {IR(2628, 35), static_cast<uint32_t>(kSPV_KHR_compute_shader_derivatives)},
    {IR(2663, 27), static_cast<uint32_t>(kSPV_KHR_cooperative_matrix)},
    {IR(2690, 21), static_cast<uint32_t>(kSPV_KHR_device_group)},
    {IR(2711, 22), static_cast<uint32_t>(kSPV_KHR_expect_assume)},
    {IR(2733, 23), static_cast<uint32_t>(kSPV_KHR_float_controls)},
    {IR(2756, 24), static_cast<uint32_t>(kSPV_KHR_float_controls2)},
    {IR(2780, 36), static_cast<uint32_t>(kSPV_KHR_fragment_shader_barycentric)},
    {IR(2816, 30), static_cast<uint32_t>(kSPV_KHR_fragment_shading_rate)},
    {IR(2846, 28), static_cast<uint32_t>(kSPV_KHR_integer_dot_product)},
    {IR(2874, 21), static_cast<uint32_t>(kSPV_KHR_linkonce_odr)},
    {IR(2895, 30), static_cast<uint32_t>(kSPV_KHR_maximal_reconvergence)},
    {IR(2925, 18), static_cast<uint32_t>(kSPV_KHR_multiview)},
    {IR(2943, 35), static_cast<uint32_t>(kSPV_KHR_no_integer_wrap_decoration)},
    {IR(2978, 26), static_cast<uint32_t>(kSPV_KHR_non_semantic_info)},
    {IR(3004, 32), static_cast<uint32_t>(kSPV_KHR_physical_storage_buffer)},
    {IR(3036, 28), static_cast<uint32_t>(kSPV_KHR_post_depth_coverage)},
    {IR(3064, 21), static_cast<uint32_t>(kSPV_KHR_quad_control)},
    {IR(3085, 22), static_cast<uint32_t>(kSPV_KHR_ray_cull_mask)},
    {IR(3107, 18), static_cast<uint32_t>(kSPV_KHR_ray_query)},
    {IR(3125, 20), static_cast<uint32_t>(kSPV_KHR_ray_tracing)},
    {IR(3145, 35), static_cast<uint32_t>(kSPV_KHR_ray_tracing_position_fetch)},
    {IR(3180, 37), static_cast<uint32_t>(kSPV_KHR_relaxed_extended_instruction)},
    {IR(3217, 34), static_cast<uint32_t>(kSPV_KHR_shader_atomic_counter_ops)},
    {IR(3251, 22), static_cast<uint32_t>(kSPV_KHR_shader_ballot)},
    {IR(3273, 21), static_cast<uint32_t>(kSPV_KHR_shader_clock)},
    {IR(3294, 31), static_cast<uint32_t>(kSPV_KHR_shader_draw_parameters)},
    {IR(3325, 37), static_cast<uint32_t>(kSPV_KHR_storage_buffer_storage_class)},
    {IR(3362, 24), static_cast<uint32_t>(kSPV_KHR_subgroup_rotate)},
    {IR(3386, 38), static_cast<uint32_t>(kSPV_KHR_subgroup_uniform_control_flow)},
    {IR(3424, 22), static_cast<uint32_t>(kSPV_KHR_subgroup_vote)},
    {IR(3446, 29), static_cast<uint32_t>(kSPV_KHR_terminate_invocation)},
    {IR(3475, 35), static_cast<uint32_t>(kSPV_KHR_uniform_group_instructions)},
    {IR(3510, 25), static_cast<uint32_t>(kSPV_KHR_untyped_pointers)},
    {IR(3535, 26), static_cast<uint32_t>(kSPV_KHR_variable_pointers)},
    {IR(3561, 28), static_cast<uint32_t>(kSPV_KHR_vulkan_memory_model)},
    {IR(3589, 41), static_cast<uint32_t>(kSPV_KHR_workgroup_memory_explicit_layout)},
    {IR(3630, 38), static_cast<uint32_t>(kSPV_NVX_multiview_per_view_attributes)},
    {IR(3668, 24), static_cast<uint32_t>(kSPV_NV_bindless_texture)},
    {IR(3692, 38), static_cast<uint32_t>(kSPV_NV_cluster_acceleration_structure)},
    {IR(3730, 34), static_cast<uint32_t>(kSPV_NV_compute_shader_derivatives)},
    {IR(3764, 26), static_cast<uint32_t>(kSPV_NV_cooperative_matrix)},
    {IR(3790, 27), static_cast<uint32_t>(kSPV_NV_cooperative_matrix2)},
    {IR(3817, 26), static_cast<uint32_t>(kSPV_NV_cooperative_vector)},
    {IR(3843, 29), static_cast<uint32_t>(kSPV_NV_displacement_micromap)},
    {IR(3872, 35), static_cast<uint32_t>(kSPV_NV_fragment_shader_barycentric)},
    {IR(3907, 35), static_cast<uint32_t>(kSPV_NV_geometry_shader_passthrough)},
    {IR(3942, 28), static_cast<uint32_t>(kSPV_NV_linear_swept_spheres)},
    {IR(3970, 19), static_cast<uint32_t>(kSPV_NV_mesh_shader)},
    {IR(3989, 25), static_cast<uint32_t>(kSPV_NV_raw_access_chains)},
    {IR(4014, 19), static_cast<uint32_t>(kSPV_NV_ray_tracing)},
    {IR(4033, 31), static_cast<uint32_t>(kSPV_NV_ray_tracing_motion_blur)},
    {IR(4064, 37), static_cast<uint32_t>(kSPV_NV_sample_mask_override_coverage)},
    {IR(4101, 33), static_cast<uint32_t>(kSPV_NV_shader_atomic_fp16_vector)},
    {IR(4134, 30), static_cast<uint32_t>(kSPV_NV_shader_image_footprint)},
    {IR(4164, 33), static_cast<uint32_t>(kSPV_NV_shader_invocation_reorder)},
    {IR(4197, 26), static_cast<uint32_t>(kSPV_NV_shader_sm_builtins)},
    {IR(4223, 35), static_cast<uint32_t>(kSPV_NV_shader_subgroup_partitioned)},
    {IR(4258, 20), static_cast<uint32_t>(kSPV_NV_shading_rate)},
    {IR(4278, 29), static_cast<uint32_t>(kSPV_NV_stereo_view_rendering)},
    {IR(4307, 25), static_cast<uint32_t>(kSPV_NV_tensor_addressing)},
    {IR(4332, 23), static_cast<uint32_t>(kSPV_NV_viewport_array2)},
    {IR(4355, 26), static_cast<uint32_t>(kSPV_QCOM_image_processing)},
    {IR(4381, 27), static_cast<uint32_t>(kSPV_QCOM_image_processing2)},
    {IR(4408, 22), static_cast<uint32_t>(kSPV_QCOM_tile_shading)},
    {IR(4430, 38), static_cast<uint32_t>(kSPV_VALIDATOR_ignore_type_decl_unique)},
}};

// Operand descriptions, ordered by (operand kind, operand enum value).
// The fields in order are:
//   enum value
//   operands, an IndexRange into kOperandSpans
//   name, a character-counting IndexRange into kStrings
//   aliases, an IndexRange into kAliasSpans
//   capabilities, an IndexRange into kCapabilitySpans
//   extensions, as an IndexRange into kExtensionSpans
//   version, first version of SPIR-V that has it
//   lastVersion, last version of SPIR-V that has it
static const std::array<OperandDesc, 1165> kOperandsByValue{{
  {0,IR(0, 0),IR(4468, 9)/* ReadOnly */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {1,IR(0, 0),IR(4484, 10)/* WriteOnly */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {2,IR(0, 0),IR(4494, 10)/* ReadWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {0,IR(0, 0),IR(4504, 8)/* Logical */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {1,IR(0, 0),IR(4512, 11)/* Physical32 */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {2,IR(0, 0),IR(4533, 11)/* Physical64 */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {5348,IR(0, 0),IR(4544, 24)/* PhysicalStorageBuffer64 */,IR(0, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {0,IR(0, 0),IR(4626, 9)/* Position */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {1,IR(0, 0),IR(4642, 10)/* PointSize */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {3,IR(0, 0),IR(4652, 13)/* ClipDistance */,IR(0, 0),IR(4, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4,IR(0, 0),IR(4665, 13)/* CullDistance */,IR(0, 0),IR(5, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5,IR(0, 0),IR(4678, 9)/* VertexId */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {6,IR(0, 0),IR(4687, 11)/* InstanceId */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {7,IR(0, 0),IR(4698, 12)/* PrimitiveId */,IR(0, 0),IR(6, 6),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {8,IR(0, 0),IR(4788, 13)/* InvocationId */,IR(0, 0),IR(12, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {9,IR(0, 0),IR(4801, 6)/* Layer */,IR(0, 0),IR(14, 5),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {10,IR(0, 0),IR(4847, 14)/* ViewportIndex */,IR(0, 0),IR(19, 5),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {11,IR(0, 0),IR(4895, 15)/* TessLevelOuter */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {12,IR(0, 0),IR(4910, 15)/* TessLevelInner */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {13,IR(0, 0),IR(4925, 10)/* TessCoord */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {14,IR(0, 0),IR(4935, 14)/* PatchVertices */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {15,IR(0, 0),IR(4949, 10)/* FragCoord */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {16,IR(0, 0),IR(4959, 11)/* PointCoord */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {17,IR(0, 0),IR(4970, 12)/* FrontFacing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {18,IR(0, 0),IR(4982, 9)/* SampleId */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {19,IR(0, 0),IR(5009, 15)/* SamplePosition */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {20,IR(0, 0),IR(5024, 11)/* SampleMask */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {22,IR(0, 0),IR(5035, 10)/* FragDepth */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {23,IR(0, 0),IR(5045, 17)/* HelperInvocation */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {24,IR(0, 0),IR(5062, 14)/* NumWorkgroups */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {25,IR(0, 0),IR(5076, 14)/* WorkgroupSize */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {26,IR(0, 0),IR(5090, 12)/* WorkgroupId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {27,IR(0, 0),IR(5102, 18)/* LocalInvocationId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {28,IR(0, 0),IR(5120, 19)/* GlobalInvocationId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {29,IR(0, 0),IR(5139, 21)/* LocalInvocationIndex */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {30,IR(0, 0),IR(5160, 8)/* WorkDim */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {31,IR(0, 0),IR(5168, 11)/* GlobalSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {32,IR(0, 0),IR(5179, 22)/* EnqueuedWorkgroupSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {33,IR(0, 0),IR(5201, 13)/* GlobalOffset */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {34,IR(0, 0),IR(5214, 15)/* GlobalLinearId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {36,IR(0, 0),IR(5229, 13)/* SubgroupSize */,IR(0, 0),IR(26, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {37,IR(0, 0),IR(5276, 16)/* SubgroupMaxSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {38,IR(0, 0),IR(5292, 13)/* NumSubgroups */,IR(0, 0),IR(29, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {39,IR(0, 0),IR(5305, 21)/* NumEnqueuedSubgroups */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {40,IR(0, 0),IR(5326, 11)/* SubgroupId */,IR(0, 0),IR(29, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {41,IR(0, 0),IR(5337, 26)/* SubgroupLocalInvocationId */,IR(0, 0),IR(26, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {42,IR(0, 0),IR(5363, 12)/* VertexIndex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {43,IR(0, 0),IR(5375, 14)/* InstanceIndex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4160,IR(0, 0),IR(5389, 10)/* CoreIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4161,IR(0, 0),IR(5415, 13)/* CoreCountARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4162,IR(0, 0),IR(5428, 13)/* CoreMaxIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4163,IR(0, 0),IR(5441, 10)/* WarpIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4164,IR(0, 0),IR(5451, 13)/* WarpMaxIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4416,IR(0, 0),IR(5464, 15)/* SubgroupEqMask */,IR(1, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4417,IR(0, 0),IR(5519, 15)/* SubgroupGeMask */,IR(2, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4418,IR(0, 0),IR(5552, 15)/* SubgroupGtMask */,IR(3, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4419,IR(0, 0),IR(5585, 15)/* SubgroupLeMask */,IR(4, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4420,IR(0, 0),IR(5618, 15)/* SubgroupLtMask */,IR(5, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4424,IR(0, 0),IR(5651, 11)/* BaseVertex */,IR(0, 0),IR(34, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4425,IR(0, 0),IR(5677, 13)/* BaseInstance */,IR(0, 0),IR(34, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4426,IR(0, 0),IR(5690, 10)/* DrawIndex */,IR(0, 0),IR(35, 3),IR(4, 3),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4432,IR(0, 0),IR(5700, 24)/* PrimitiveShadingRateKHR */,IR(0, 0),IR(38, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4438,IR(0, 0),IR(5747, 12)/* DeviceIndex */,IR(0, 0),IR(39, 1),IR(8, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4440,IR(0, 0),IR(5771, 10)/* ViewIndex */,IR(0, 0),IR(40, 1),IR(9, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4444,IR(0, 0),IR(5791, 15)/* ShadingRateKHR */,IR(0, 0),IR(38, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4492,IR(0, 0),IR(5806, 15)/* TileOffsetQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4493,IR(0, 0),IR(5837, 18)/* TileDimensionQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4494,IR(0, 0),IR(5855, 18)/* TileApronSizeQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4992,IR(0, 0),IR(5873, 20)/* BaryCoordNoPerspAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4993,IR(0, 0),IR(5893, 28)/* BaryCoordNoPerspCentroidAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4994,IR(0, 0),IR(5921, 26)/* BaryCoordNoPerspSampleAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4995,IR(0, 0),IR(5947, 19)/* BaryCoordSmoothAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4996,IR(0, 0),IR(5966, 27)/* BaryCoordSmoothCentroidAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4997,IR(0, 0),IR(5993, 25)/* BaryCoordSmoothSampleAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4998,IR(0, 0),IR(6018, 22)/* BaryCoordPullModelAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5014,IR(0, 0),IR(6040, 18)/* FragStencilRefEXT */,IR(0, 0),IR(42, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5021,IR(0, 0),IR(6075, 29)/* RemainingRecursionLevelsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5073,IR(0, 0),IR(6122, 16)/* ShaderIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5253,IR(0, 0),IR(6138, 15)/* ViewportMaskNV */,IR(0, 0),IR(44, 2),IR(12, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5257,IR(0, 0),IR(6174, 20)/* SecondaryPositionNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5258,IR(0, 0),IR(6213, 24)/* SecondaryViewportMaskNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5261,IR(0, 0),IR(6237, 18)/* PositionPerViewNV */,IR(0, 0),IR(47, 2),IR(15, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5262,IR(0, 0),IR(6275, 22)/* ViewportMaskPerViewNV */,IR(0, 0),IR(47, 2),IR(15, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5264,IR(0, 0),IR(6297, 16)/* FullyCoveredEXT */,IR(0, 0),IR(49, 1),IR(17, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5274,IR(0, 0),IR(6337, 12)/* TaskCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5275,IR(0, 0),IR(6349, 17)/* PrimitiveCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5276,IR(0, 0),IR(6366, 19)/* PrimitiveIndicesNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5277,IR(0, 0),IR(6385, 22)/* ClipDistancePerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5278,IR(0, 0),IR(6407, 22)/* CullDistancePerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5279,IR(0, 0),IR(6429, 15)/* LayerPerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5280,IR(0, 0),IR(6444, 16)/* MeshViewCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5281,IR(0, 0),IR(6460, 18)/* MeshViewIndicesNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5286,IR(0, 0),IR(6478, 13)/* BaryCoordKHR */,IR(6, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5287,IR(0, 0),IR(6526, 20)/* BaryCoordNoPerspKHR */,IR(7, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5292,IR(0, 0),IR(6565, 12)/* FragSizeEXT */,IR(8, 1),IR(52, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5293,IR(0, 0),IR(6611, 23)/* FragInvocationCountEXT */,IR(9, 1),IR(52, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5294,IR(0, 0),IR(6656, 25)/* PrimitivePointIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5295,IR(0, 0),IR(6681, 24)/* PrimitiveLineIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5296,IR(0, 0),IR(6705, 28)/* PrimitiveTriangleIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5299,IR(0, 0),IR(6733, 17)/* CullPrimitiveEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5319,IR(0, 0),IR(6750, 12)/* LaunchIdKHR */,IR(10, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5320,IR(0, 0),IR(6773, 14)/* LaunchSizeKHR */,IR(11, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5321,IR(0, 0),IR(6800, 18)/* WorldRayOriginKHR */,IR(12, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5322,IR(0, 0),IR(6835, 21)/* WorldRayDirectionKHR */,IR(13, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5323,IR(0, 0),IR(6876, 19)/* ObjectRayOriginKHR */,IR(14, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5324,IR(0, 0),IR(6913, 22)/* ObjectRayDirectionKHR */,IR(15, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5325,IR(0, 0),IR(6956, 11)/* RayTminKHR */,IR(16, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5326,IR(0, 0),IR(6977, 11)/* RayTmaxKHR */,IR(17, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5327,IR(0, 0),IR(6998, 23)/* InstanceCustomIndexKHR */,IR(18, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5330,IR(0, 0),IR(7043, 17)/* ObjectToWorldKHR */,IR(19, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5331,IR(0, 0),IR(7076, 17)/* WorldToObjectKHR */,IR(20, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5332,IR(0, 0),IR(7109, 7)/* HitTNV */,IR(0, 0),IR(56, 1),IR(26, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5333,IR(0, 0),IR(7116, 11)/* HitKindKHR */,IR(21, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5334,IR(0, 0),IR(7137, 17)/* CurrentRayTimeNV */,IR(0, 0),IR(57, 1),IR(27, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5335,IR(0, 0),IR(7177, 30)/* HitTriangleVertexPositionsKHR */,IR(0, 0),IR(58, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5337,IR(0, 0),IR(7234, 34)/* HitMicroTriangleVertexPositionsNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5344,IR(0, 0),IR(7301, 37)/* HitMicroTriangleVertexBarycentricsNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5351,IR(0, 0),IR(7338, 20)/* IncomingRayFlagsKHR */,IR(22, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5352,IR(0, 0),IR(7377, 20)/* RayGeometryIndexKHR */,IR(0, 0),IR(60, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5359,IR(0, 0),IR(7397, 14)/* HitIsSphereNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5360,IR(0, 0),IR(7439, 11)/* HitIsLSSNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5361,IR(0, 0),IR(7489, 20)/* HitSpherePositionNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5374,IR(0, 0),IR(7509, 13)/* WarpsPerSMNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5375,IR(0, 0),IR(7541, 10)/* SMCountNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5376,IR(0, 0),IR(7551, 9)/* WarpIDNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5377,IR(0, 0),IR(7560, 7)/* SMIDNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5396,IR(0, 0),IR(7567, 18)/* HitLSSPositionsNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5405,IR(0, 0),IR(7585, 34)/* HitKindFrontFacingMicroTriangleNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5406,IR(0, 0),IR(7619, 33)/* HitKindBackFacingMicroTriangleNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5420,IR(0, 0),IR(7652, 18)/* HitSphereRadiusNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5421,IR(0, 0),IR(7670, 14)/* HitLSSRadiiNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5436,IR(0, 0),IR(7684, 12)/* ClusterIDNV */,IR(0, 0),IR(64, 1),IR(31, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {6021,IR(0, 0),IR(7737, 12)/* CullMaskKHR */,IR(0, 0),IR(65, 1),IR(32, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {0,IR(0, 0),IR(7764, 7)/* Matrix */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {1,IR(0, 0),IR(4635, 7)/* Shader */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {2,IR(0, 0),IR(4710, 9)/* Geometry */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {3,IR(0, 0),IR(4719, 13)/* Tessellation */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4,IR(0, 0),IR(4523, 10)/* Addresses */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5,IR(0, 0),IR(7771, 8)/* Linkage */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6,IR(0, 0),IR(4477, 7)/* Kernel */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {7,IR(0, 0),IR(7779, 9)/* Vector16 */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {8,IR(0, 0),IR(7788, 14)/* Float16Buffer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {9,IR(0, 0),IR(7802, 8)/* Float16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {10,IR(0, 0),IR(7810, 8)/* Float64 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {11,IR(0, 0),IR(7818, 6)/* Int64 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {12,IR(0, 0),IR(7824, 13)/* Int64Atomics */,IR(0, 0),IR(67, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {13,IR(0, 0),IR(7837, 11)/* ImageBasic */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {14,IR(0, 0),IR(7848, 15)/* ImageReadWrite */,IR(0, 0),IR(68, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {15,IR(0, 0),IR(7863, 12)/* ImageMipmap */,IR(0, 0),IR(68, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {17,IR(0, 0),IR(7875, 6)/* Pipes */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {18,IR(0, 0),IR(7881, 7)/* Groups */,IR(0, 0),IR(1, 0),IR(33, 1),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {19,IR(0, 0),IR(7888, 14)/* DeviceEnqueue */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {20,IR(0, 0),IR(7902, 15)/* LiteralSampler */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {21,IR(0, 0),IR(7917, 14)/* AtomicStorage */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {22,IR(0, 0),IR(7931, 6)/* Int16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {23,IR(0, 0),IR(7937, 22)/* TessellationPointSize */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {24,IR(0, 0),IR(7959, 18)/* GeometryPointSize */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {25,IR(0, 0),IR(7977, 20)/* ImageGatherExtended */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {27,IR(0, 0),IR(7997, 24)/* StorageImageMultisample */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {28,IR(0, 0),IR(8021, 34)/* UniformBufferArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {29,IR(0, 0),IR(8055, 33)/* SampledImageArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {30,IR(0, 0),IR(8088, 34)/* StorageBufferArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {31,IR(0, 0),IR(8122, 33)/* StorageImageArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {32,IR(0, 0),IR(4652, 13)/* ClipDistance */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {33,IR(0, 0),IR(4665, 13)/* CullDistance */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {34,IR(0, 0),IR(8155, 15)/* ImageCubeArray */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {35,IR(0, 0),IR(4991, 18)/* SampleRateShading */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {36,IR(0, 0),IR(8187, 10)/* ImageRect */,IR(0, 0),IR(71, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {37,IR(0, 0),IR(8197, 12)/* SampledRect */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {38,IR(0, 0),IR(8209, 15)/* GenericPointer */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {39,IR(0, 0),IR(8224, 5)/* Int8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {40,IR(0, 0),IR(8229, 16)/* InputAttachment */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {41,IR(0, 0),IR(8245, 16)/* SparseResidency */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {42,IR(0, 0),IR(8261, 7)/* MinLod */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {43,IR(0, 0),IR(8268, 10)/* Sampled1D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {44,IR(0, 0),IR(8278, 8)/* Image1D */,IR(0, 0),IR(72, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {45,IR(0, 0),IR(8170, 17)/* SampledCubeArray */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {46,IR(0, 0),IR(8286, 14)/* SampledBuffer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {47,IR(0, 0),IR(8300, 12)/* ImageBuffer */,IR(0, 0),IR(73, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {48,IR(0, 0),IR(8312, 13)/* ImageMSArray */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {49,IR(0, 0),IR(8325, 28)/* StorageImageExtendedFormats */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {50,IR(0, 0),IR(8353, 11)/* ImageQuery */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {51,IR(0, 0),IR(8364, 18)/* DerivativeControl */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {52,IR(0, 0),IR(8382, 22)/* InterpolationFunction */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {53,IR(0, 0),IR(8404, 18)/* TransformFeedback */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {54,IR(0, 0),IR(8422, 16)/* GeometryStreams */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {55,IR(0, 0),IR(8438, 30)/* StorageImageReadWithoutFormat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {56,IR(0, 0),IR(8468, 31)/* StorageImageWriteWithoutFormat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {57,IR(0, 0),IR(4861, 14)/* MultiViewport */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {58,IR(0, 0),IR(8499, 17)/* SubgroupDispatch */,IR(0, 0),IR(74, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {59,IR(0, 0),IR(8516, 13)/* NamedBarrier */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {60,IR(0, 0),IR(8529, 12)/* PipeStorage */,IR(0, 0),IR(75, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {61,IR(0, 0),IR(5242, 16)/* GroupNonUniform */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {62,IR(0, 0),IR(8541, 20)/* GroupNonUniformVote */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {63,IR(0, 0),IR(8561, 26)/* GroupNonUniformArithmetic */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {64,IR(0, 0),IR(5497, 22)/* GroupNonUniformBallot */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {65,IR(0, 0),IR(8587, 23)/* GroupNonUniformShuffle */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {66,IR(0, 0),IR(8610, 31)/* GroupNonUniformShuffleRelative */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {67,IR(0, 0),IR(8641, 25)/* GroupNonUniformClustered */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {68,IR(0, 0),IR(8666, 20)/* GroupNonUniformQuad */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {69,IR(0, 0),IR(4807, 12)/* ShaderLayer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {70,IR(0, 0),IR(4875, 20)/* ShaderViewportIndex */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {71,IR(0, 0),IR(8686, 18)/* UniformDecoration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4165,IR(0, 0),IR(5399, 16)/* CoreBuiltinsARM */,IR(0, 0),IR(1, 0),IR(34, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4166,IR(0, 0),IR(8704, 28)/* TileImageColorReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4167,IR(0, 0),IR(8732, 28)/* TileImageDepthReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4168,IR(0, 0),IR(8760, 30)/* TileImageStencilReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4201,IR(0, 0),IR(8790, 28)/* CooperativeMatrixLayoutsARM */,IR(0, 0),IR(1, 0),IR(36, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4422,IR(0, 0),IR(5724, 23)/* FragmentShadingRateKHR */,IR(0, 0),IR(3, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4423,IR(0, 0),IR(5258, 18)/* SubgroupBallotKHR */,IR(0, 0),IR(1, 0),IR(2, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4427,IR(0, 0),IR(5662, 15)/* DrawParameters */,IR(0, 0),IR(3, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4428,IR(0, 0),IR(8818, 33)/* WorkgroupMemoryExplicitLayoutKHR */,IR(0, 0),IR(3, 1),IR(37, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4429,IR(0, 0),IR(8851, 43)/* WorkgroupMemoryExplicitLayout8BitAccessKHR */,IR(0, 0),IR(77, 1),IR(37, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4430,IR(0, 0),IR(8894, 44)/* WorkgroupMemoryExplicitLayout16BitAccessKHR */,IR(0, 0),IR(77, 1),IR(37, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4431,IR(0, 0),IR(8938, 16)/* SubgroupVoteKHR */,IR(0, 0),IR(1, 0),IR(38, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4433,IR(0, 0),IR(8954, 25)/* StorageBuffer16BitAccess */,IR(23, 1),IR(1, 0),IR(39, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4434,IR(0, 0),IR(9007, 35)/* UniformAndStorageBuffer16BitAccess */,IR(24, 1),IR(78, 1),IR(39, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4435,IR(0, 0),IR(9059, 22)/* StoragePushConstant16 */,IR(0, 0),IR(1, 0),IR(39, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4436,IR(0, 0),IR(9081, 21)/* StorageInputOutput16 */,IR(0, 0),IR(1, 0),IR(39, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4437,IR(0, 0),IR(5759, 12)/* DeviceGroup */,IR(0, 0),IR(1, 0),IR(8, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4439,IR(0, 0),IR(5781, 10)/* MultiView */,IR(0, 0),IR(3, 1),IR(9, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4441,IR(0, 0),IR(9102, 30)/* VariablePointersStorageBuffer */,IR(0, 0),IR(3, 1),IR(40, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4442,IR(0, 0),IR(9132, 17)/* VariablePointers */,IR(0, 0),IR(79, 1),IR(40, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4445,IR(0, 0),IR(9149, 17)/* AtomicStorageOps */,IR(0, 0),IR(80, 1),IR(41, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4447,IR(0, 0),IR(9166, 28)/* SampleMaskPostDepthCoverage */,IR(0, 0),IR(1, 0),IR(42, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4448,IR(0, 0),IR(9194, 24)/* StorageBuffer8BitAccess */,IR(0, 0),IR(1, 0),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4449,IR(0, 0),IR(9218, 34)/* UniformAndStorageBuffer8BitAccess */,IR(0, 0),IR(81, 1),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4450,IR(0, 0),IR(9252, 21)/* StoragePushConstant8 */,IR(0, 0),IR(1, 0),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4464,IR(0, 0),IR(9273, 15)/* DenormPreserve */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4465,IR(0, 0),IR(9288, 18)/* DenormFlushToZero */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4466,IR(0, 0),IR(9306, 25)/* SignedZeroInfNanPreserve */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4467,IR(0, 0),IR(9331, 16)/* RoundingModeRTE */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4468,IR(0, 0),IR(9347, 16)/* RoundingModeRTZ */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4471,IR(0, 0),IR(9363, 23)/* RayQueryProvisionalKHR */,IR(0, 0),IR(3, 1),IR(45, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4472,IR(0, 0),IR(9386, 12)/* RayQueryKHR */,IR(0, 0),IR(3, 1),IR(45, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4473,IR(0, 0),IR(9398, 19)/* UntypedPointersKHR */,IR(0, 0),IR(1, 0),IR(46, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4478,IR(0, 0),IR(9417, 32)/* RayTraversalPrimitiveCullingKHR */,IR(0, 0),IR(82, 2),IR(47, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4479,IR(0, 0),IR(4745, 14)/* RayTracingKHR */,IR(0, 0),IR(3, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4484,IR(0, 0),IR(9449, 26)/* TextureSampleWeightedQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4485,IR(0, 0),IR(9475, 21)/* TextureBoxFilterQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4486,IR(0, 0),IR(9496, 22)/* TextureBlockMatchQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4495,IR(0, 0),IR(5821, 16)/* TileShadingQCOM */,IR(0, 0),IR(3, 1),IR(50, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4498,IR(0, 0),IR(9518, 23)/* TextureBlockMatch2QCOM */,IR(0, 0),IR(1, 0),IR(51, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5008,IR(0, 0),IR(9541, 16)/* Float16ImageAMD */,IR(0, 0),IR(3, 1),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5009,IR(0, 0),IR(9557, 22)/* ImageGatherBiasLodAMD */,IR(0, 0),IR(3, 1),IR(53, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5010,IR(0, 0),IR(9579, 16)/* FragmentMaskAMD */,IR(0, 0),IR(3, 1),IR(54, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5013,IR(0, 0),IR(6058, 17)/* StencilExportEXT */,IR(0, 0),IR(3, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5015,IR(0, 0),IR(9595, 21)/* ImageReadWriteLodAMD */,IR(0, 0),IR(3, 1),IR(55, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5016,IR(0, 0),IR(9616, 14)/* Int64ImageEXT */,IR(0, 0),IR(3, 1),IR(56, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5055,IR(0, 0),IR(9630, 15)/* ShaderClockKHR */,IR(0, 0),IR(1, 0),IR(57, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5067,IR(0, 0),IR(6104, 18)/* ShaderEnqueueAMDX */,IR(0, 0),IR(3, 1),IR(58, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5087,IR(0, 0),IR(9645, 15)/* QuadControlKHR */,IR(0, 0),IR(1, 0),IR(59, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5116,IR(0, 0),IR(9660, 16)/* BFloat16TypeKHR */,IR(0, 0),IR(1, 0),IR(60, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5117,IR(0, 0),IR(9676, 22)/* BFloat16DotProductKHR */,IR(0, 0),IR(84, 1),IR(60, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5118,IR(0, 0),IR(9698, 29)/* BFloat16CooperativeMatrixKHR */,IR(0, 0),IR(85, 2),IR(60, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5249,IR(0, 0),IR(9748, 29)/* SampleMaskOverrideCoverageNV */,IR(0, 0),IR(25, 1),IR(61, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5251,IR(0, 0),IR(9777, 28)/* GeometryShaderPassthroughNV */,IR(0, 0),IR(69, 1),IR(62, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5254,IR(0, 0),IR(4819, 28)/* ShaderViewportIndexLayerEXT */,IR(25, 1),IR(87, 1),IR(63, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5255,IR(0, 0),IR(6153, 21)/* ShaderViewportMaskNV */,IR(0, 0),IR(88, 1),IR(65, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5259,IR(0, 0),IR(6194, 19)/* ShaderStereoViewNV */,IR(0, 0),IR(89, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5260,IR(0, 0),IR(6255, 20)/* PerViewAttributesNV */,IR(0, 0),IR(40, 1),IR(66, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5265,IR(0, 0),IR(6313, 24)/* FragmentFullyCoveredEXT */,IR(0, 0),IR(3, 1),IR(17, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5266,IR(0, 0),IR(4759, 14)/* MeshShadingNV */,IR(0, 0),IR(3, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5282,IR(0, 0),IR(9832, 17)/* ImageFootprintNV */,IR(0, 0),IR(1, 0),IR(67, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5283,IR(0, 0),IR(4773, 15)/* MeshShadingEXT */,IR(0, 0),IR(3, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5284,IR(0, 0),IR(6503, 23)/* FragmentBarycentricKHR */,IR(26, 1),IR(1, 0),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5288,IR(0, 0),IR(9871, 31)/* ComputeDerivativeGroupQuadsKHR */,IR(27, 1),IR(3, 1),IR(68, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5291,IR(0, 0),IR(6592, 19)/* FragmentDensityEXT */,IR(28, 1),IR(3, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5297,IR(0, 0),IR(9946, 29)/* GroupNonUniformPartitionedNV */,IR(0, 0),IR(1, 0),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5301,IR(0, 0),IR(9975, 17)/* ShaderNonUniform */,IR(29, 1),IR(3, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5302,IR(0, 0),IR(10012, 23)/* RuntimeDescriptorArray */,IR(30, 1),IR(3, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5303,IR(0, 0),IR(10061, 36)/* InputAttachmentArrayDynamicIndexing */,IR(31, 1),IR(90, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5304,IR(0, 0),IR(10136, 39)/* UniformTexelBufferArrayDynamicIndexing */,IR(32, 1),IR(73, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5305,IR(0, 0),IR(10217, 39)/* StorageTexelBufferArrayDynamicIndexing */,IR(33, 1),IR(91, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5306,IR(0, 0),IR(10298, 37)/* UniformBufferArrayNonUniformIndexing */,IR(34, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5307,IR(0, 0),IR(10375, 36)/* SampledImageArrayNonUniformIndexing */,IR(35, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5308,IR(0, 0),IR(10450, 37)/* StorageBufferArrayNonUniformIndexing */,IR(36, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5309,IR(0, 0),IR(10527, 36)/* StorageImageArrayNonUniformIndexing */,IR(37, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5310,IR(0, 0),IR(10602, 39)/* InputAttachmentArrayNonUniformIndexing */,IR(38, 1),IR(93, 2),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5311,IR(0, 0),IR(10683, 42)/* UniformTexelBufferArrayNonUniformIndexing */,IR(39, 1),IR(95, 2),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5312,IR(0, 0),IR(10770, 42)/* StorageTexelBufferArrayNonUniformIndexing */,IR(40, 1),IR(97, 2),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5336,IR(0, 0),IR(7207, 27)/* RayTracingPositionFetchKHR */,IR(0, 0),IR(3, 1),IR(72, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5340,IR(0, 0),IR(4732, 13)/* RayTracingNV */,IR(0, 0),IR(3, 1),IR(26, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5341,IR(0, 0),IR(7154, 23)/* RayTracingMotionBlurNV */,IR(0, 0),IR(3, 1),IR(27, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5345,IR(0, 0),IR(10857, 18)/* VulkanMemoryModel */,IR(41, 1),IR(1, 0),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5346,IR(0, 0),IR(10896, 29)/* VulkanMemoryModelDeviceScope */,IR(42, 1),IR(1, 0),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5347,IR(0, 0),IR(4595, 31)/* PhysicalStorageBufferAddresses */,IR(43, 1),IR(3, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5350,IR(0, 0),IR(10991, 32)/* ComputeDerivativeGroupLinearKHR */,IR(44, 1),IR(3, 1),IR(68, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5353,IR(0, 0),IR(11054, 25)/* RayTracingProvisionalKHR */,IR(0, 0),IR(3, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5357,IR(0, 0),IR(11079, 20)/* CooperativeMatrixNV */,IR(0, 0),IR(3, 1),IR(74, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5363,IR(0, 0),IR(11099, 33)/* FragmentShaderSampleInterlockEXT */,IR(0, 0),IR(3, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5372,IR(0, 0),IR(11132, 38)/* FragmentShaderShadingRateInterlockEXT */,IR(0, 0),IR(3, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5373,IR(0, 0),IR(7522, 19)/* ShaderSMBuiltinsNV */,IR(0, 0),IR(3, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5378,IR(0, 0),IR(11170, 32)/* FragmentShaderPixelInterlockEXT */,IR(0, 0),IR(3, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5379,IR(0, 0),IR(11202, 25)/* DemoteToHelperInvocation */,IR(45, 1),IR(3, 1),IR(76, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5380,IR(0, 0),IR(11255, 23)/* DisplacementMicromapNV */,IR(0, 0),IR(3, 1),IR(77, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5381,IR(0, 0),IR(11278, 29)/* RayTracingOpacityMicromapEXT */,IR(0, 0),IR(3, 1),IR(78, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5383,IR(0, 0),IR(11307, 26)/* ShaderInvocationReorderNV */,IR(0, 0),IR(60, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5390,IR(0, 0),IR(11333, 18)/* BindlessTextureNV */,IR(0, 0),IR(1, 0),IR(80, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5391,IR(0, 0),IR(11351, 25)/* RayQueryPositionFetchKHR */,IR(0, 0),IR(3, 1),IR(72, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5394,IR(0, 0),IR(11376, 20)/* CooperativeVectorNV */,IR(0, 0),IR(1, 0),IR(81, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5404,IR(0, 0),IR(11396, 22)/* AtomicFloat16VectorNV */,IR(0, 0),IR(1, 0),IR(82, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5409,IR(0, 0),IR(7268, 33)/* RayTracingDisplacementMicromapNV */,IR(0, 0),IR(60, 1),IR(77, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5414,IR(0, 0),IR(11418, 18)/* RawAccessChainsNV */,IR(0, 0),IR(1, 0),IR(83, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5418,IR(0, 0),IR(7411, 28)/* RayTracingSpheresGeometryNV */,IR(0, 0),IR(1, 0),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5419,IR(0, 0),IR(7450, 39)/* RayTracingLinearSweptSpheresGeometryNV */,IR(0, 0),IR(1, 0),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5430,IR(0, 0),IR(11436, 30)/* CooperativeMatrixReductionsNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5431,IR(0, 0),IR(11466, 31)/* CooperativeMatrixConversionsNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5432,IR(0, 0),IR(11497, 40)/* CooperativeMatrixPerElementOperationsNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5433,IR(0, 0),IR(11537, 36)/* CooperativeMatrixTensorAddressingNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5434,IR(0, 0),IR(11573, 30)/* CooperativeMatrixBlockLoadsNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5435,IR(0, 0),IR(11603, 28)/* CooperativeVectorTrainingNV */,IR(0, 0),IR(1, 0),IR(81, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5437,IR(0, 0),IR(7696, 41)/* RayTracingClusterAccelerationStructureNV */,IR(0, 0),IR(60, 1),IR(31, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5439,IR(0, 0),IR(11631, 19)/* TensorAddressingNV */,IR(0, 0),IR(1, 0),IR(85, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5568,IR(0, 0),IR(11650, 21)/* SubgroupShuffleINTEL */,IR(0, 0),IR(1, 0),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5569,IR(0, 0),IR(11671, 27)/* SubgroupBufferBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5570,IR(0, 0),IR(11698, 26)/* SubgroupImageBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5579,IR(0, 0),IR(11724, 31)/* SubgroupImageMediaBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(87, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5582,IR(0, 0),IR(11755, 21)/* RoundToInfinityINTEL */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5583,IR(0, 0),IR(11776, 23)/* FloatingPointModeINTEL */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5584,IR(0, 0),IR(11799, 23)/* IntegerFunctions2INTEL */,IR(0, 0),IR(1, 0),IR(89, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5603,IR(0, 0),IR(11822, 22)/* FunctionPointersINTEL */,IR(0, 0),IR(1, 0),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5604,IR(0, 0),IR(11844, 24)/* IndirectReferencesINTEL */,IR(0, 0),IR(1, 0),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5606,IR(0, 0),IR(11868, 9)/* AsmINTEL */,IR(0, 0),IR(1, 0),IR(91, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5612,IR(0, 0),IR(11877, 23)/* AtomicFloat32MinMaxEXT */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5613,IR(0, 0),IR(11900, 23)/* AtomicFloat64MinMaxEXT */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5616,IR(0, 0),IR(11923, 23)/* AtomicFloat16MinMaxEXT */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5617,IR(0, 0),IR(11946, 19)/* VectorComputeINTEL */,IR(0, 0),IR(99, 1),IR(93, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5619,IR(0, 0),IR(11965, 15)/* VectorAnyINTEL */,IR(0, 0),IR(1, 0),IR(93, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5629,IR(0, 0),IR(11980, 16)/* ExpectAssumeKHR */,IR(0, 0),IR(1, 0),IR(94, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5696,IR(0, 0),IR(11996, 33)/* SubgroupAvcMotionEstimationINTEL */,IR(0, 0),IR(1, 0),IR(95, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5697,IR(0, 0),IR(12029, 38)/* SubgroupAvcMotionEstimationIntraINTEL */,IR(0, 0),IR(1, 0),IR(95, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5698,IR(0, 0),IR(12067, 39)/* SubgroupAvcMotionEstimationChromaINTEL */,IR(0, 0),IR(1, 0),IR(95, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5817,IR(0, 0),IR(12106, 25)/* VariableLengthArrayINTEL */,IR(0, 0),IR(1, 0),IR(96, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5821,IR(0, 0),IR(12131, 26)/* FunctionFloatControlINTEL */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5824,IR(0, 0),IR(12157, 26)/* FPGAMemoryAttributesINTEL */,IR(0, 0),IR(1, 0),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5837,IR(0, 0),IR(12183, 20)/* FPFastMathModeINTEL */,IR(0, 0),IR(0, 1),IR(98, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5844,IR(0, 0),IR(12203, 32)/* ArbitraryPrecisionIntegersINTEL */,IR(0, 0),IR(1, 0),IR(99, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5845,IR(0, 0),IR(12235, 37)/* ArbitraryPrecisionFloatingPointINTEL */,IR(0, 0),IR(1, 0),IR(100, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5886,IR(0, 0),IR(12272, 30)/* UnstructuredLoopControlsINTEL */,IR(0, 0),IR(1, 0),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5888,IR(0, 0),IR(12302, 22)/* FPGALoopControlsINTEL */,IR(0, 0),IR(1, 0),IR(102, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5892,IR(0, 0),IR(12324, 22)/* KernelAttributesINTEL */,IR(0, 0),IR(1, 0),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5897,IR(0, 0),IR(12346, 26)/* FPGAKernelAttributesINTEL */,IR(0, 0),IR(1, 0),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5898,IR(0, 0),IR(12372, 24)/* FPGAMemoryAccessesINTEL */,IR(0, 0),IR(1, 0),IR(104, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5904,IR(0, 0),IR(12396, 27)/* FPGAClusterAttributesINTEL */,IR(0, 0),IR(1, 0),IR(105, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5906,IR(0, 0),IR(12423, 14)/* LoopFuseINTEL */,IR(0, 0),IR(1, 0),IR(106, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5908,IR(0, 0),IR(12437, 20)/* FPGADSPControlINTEL */,IR(0, 0),IR(1, 0),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5910,IR(0, 0),IR(12457, 26)/* MemoryAccessAliasingINTEL */,IR(0, 0),IR(1, 0),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5916,IR(0, 0),IR(12483, 40)/* FPGAInvocationPipeliningAttributesINTEL */,IR(0, 0),IR(1, 0),IR(109, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5920,IR(0, 0),IR(12523, 24)/* FPGABufferLocationINTEL */,IR(0, 0),IR(1, 0),IR(110, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5922,IR(0, 0),IR(12547, 34)/* ArbitraryPrecisionFixedPointINTEL */,IR(0, 0),IR(1, 0),IR(111, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5935,IR(0, 0),IR(12581, 23)/* USMStorageClassesINTEL */,IR(0, 0),IR(1, 0),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5939,IR(0, 0),IR(12604, 29)/* RuntimeAlignedAttributeINTEL */,IR(0, 0),IR(1, 0),IR(113, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5943,IR(0, 0),IR(12633, 13)/* IOPipesINTEL */,IR(0, 0),IR(1, 0),IR(114, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5945,IR(0, 0),IR(12646, 19)/* BlockingPipesINTEL */,IR(0, 0),IR(1, 0),IR(115, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5948,IR(0, 0),IR(12665, 13)/* FPGARegINTEL */,IR(0, 0),IR(1, 0),IR(116, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6016,IR(0, 0),IR(12678, 19)/* DotProductInputAll */,IR(46, 1),IR(1, 0),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6017,IR(0, 0),IR(12719, 22)/* DotProductInput4x8Bit */,IR(47, 1),IR(100, 1),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6018,IR(0, 0),IR(12766, 28)/* DotProductInput4x8BitPacked */,IR(48, 1),IR(1, 0),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6019,IR(0, 0),IR(12825, 11)/* DotProduct */,IR(49, 1),IR(1, 0),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6020,IR(0, 0),IR(7749, 15)/* RayCullMaskKHR */,IR(0, 0),IR(1, 0),IR(32, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6022,IR(0, 0),IR(9727, 21)/* CooperativeMatrixKHR */,IR(0, 0),IR(1, 0),IR(118, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6024,IR(0, 0),IR(12850, 24)/* ReplicatedCompositesEXT */,IR(0, 0),IR(1, 0),IR(119, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6025,IR(0, 0),IR(12874, 16)/* BitInstructions */,IR(0, 0),IR(1, 0),IR(120, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6026,IR(0, 0),IR(12890, 25)/* GroupNonUniformRotateKHR */,IR(0, 0),IR(76, 1),IR(121, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6029,IR(0, 0),IR(12915, 15)/* FloatControls2 */,IR(0, 0),IR(1, 0),IR(122, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6033,IR(0, 0),IR(12930, 20)/* AtomicFloat32AddEXT */,IR(0, 0),IR(1, 0),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6034,IR(0, 0),IR(12950, 20)/* AtomicFloat64AddEXT */,IR(0, 0),IR(1, 0),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6089,IR(0, 0),IR(12970, 20)/* LongCompositesINTEL */,IR(0, 0),IR(1, 0),IR(124, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6094,IR(0, 0),IR(12990, 11)/* OptNoneEXT */,IR(50, 1),IR(1, 0),IR(125, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6095,IR(0, 0),IR(13014, 20)/* AtomicFloat16AddEXT */,IR(0, 0),IR(1, 0),IR(127, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6114,IR(0, 0),IR(13034, 21)/* DebugInfoModuleINTEL */,IR(0, 0),IR(1, 0),IR(128, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6115,IR(0, 0),IR(13055, 24)/* BFloat16ConversionINTEL */,IR(0, 0),IR(1, 0),IR(129, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6141,IR(0, 0),IR(13079, 18)/* SplitBarrierINTEL */,IR(0, 0),IR(1, 0),IR(130, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6144,IR(0, 0),IR(13097, 19)/* ArithmeticFenceEXT */,IR(0, 0),IR(1, 0),IR(131, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6150,IR(0, 0),IR(13116, 29)/* FPGAClusterAttributesV2INTEL */,IR(0, 0),IR(101, 1),IR(105, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6161,IR(0, 0),IR(13145, 28)/* FPGAKernelAttributesv2INTEL */,IR(0, 0),IR(102, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6162,IR(0, 0),IR(13173, 18)/* TaskSequenceINTEL */,IR(0, 0),IR(1, 0),IR(132, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6169,IR(0, 0),IR(13191, 16)/* FPMaxErrorINTEL */,IR(0, 0),IR(1, 0),IR(133, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6171,IR(0, 0),IR(13207, 24)/* FPGALatencyControlINTEL */,IR(0, 0),IR(1, 0),IR(134, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6174,IR(0, 0),IR(13231, 28)/* FPGAArgumentInterfacesINTEL */,IR(0, 0),IR(1, 0),IR(135, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6187,IR(0, 0),IR(13259, 30)/* GlobalVariableHostAccessINTEL */,IR(0, 0),IR(1, 0),IR(136, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6189,IR(0, 0),IR(13289, 35)/* GlobalVariableFPGADecorationsINTEL */,IR(0, 0),IR(1, 0),IR(137, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6220,IR(0, 0),IR(13324, 28)/* SubgroupBufferPrefetchINTEL */,IR(0, 0),IR(1, 0),IR(138, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6228,IR(0, 0),IR(13352, 23)/* Subgroup2DBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(139, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6229,IR(0, 0),IR(13375, 30)/* Subgroup2DBlockTransformINTEL */,IR(0, 0),IR(103, 1),IR(139, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6230,IR(0, 0),IR(13405, 30)/* Subgroup2DBlockTransposeINTEL */,IR(0, 0),IR(103, 1),IR(139, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6236,IR(0, 0),IR(13435, 38)/* SubgroupMatrixMultiplyAccumulateINTEL */,IR(0, 0),IR(1, 0),IR(140, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6241,IR(0, 0),IR(13473, 28)/* TernaryBitwiseFunctionINTEL */,IR(0, 0),IR(1, 0),IR(141, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6400,IR(0, 0),IR(13501, 26)/* GroupUniformArithmeticKHR */,IR(0, 0),IR(1, 0),IR(142, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6425,IR(0, 0),IR(13527, 27)/* TensorFloat32RoundingINTEL */,IR(0, 0),IR(1, 0),IR(143, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6427,IR(0, 0),IR(13554, 25)/* MaskedGatherScatterINTEL */,IR(0, 0),IR(1, 0),IR(144, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6441,IR(0, 0),IR(13579, 19)/* CacheControlsINTEL */,IR(0, 0),IR(1, 0),IR(145, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6460,IR(0, 0),IR(13598, 20)/* RegisterLimitsINTEL */,IR(0, 0),IR(1, 0),IR(146, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {0,IR(0, 0),IR(13618, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13630, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13638, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {3,IR(0, 0),IR(13646, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(13652, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(13659, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(13670, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(13679, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(13692, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(13698, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(13708, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(13714, 15)/* ImportedModule */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {1,IR(0, 0),IR(13729, 20)/* ImportedDeclaration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(13754, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(13770, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(13784, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(13797, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(13809, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(13826, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(13838, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(13853, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(13866, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(13881, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(13899, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(13916, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(13937, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(13957, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(13977, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {16384,IR(0, 0),IR(13993, 16)/* FlagIsEnumClass */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {32768,IR(0, 0),IR(14009, 20)/* FlagTypePassByValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {65536,IR(0, 0),IR(14029, 24)/* FlagTypePassByReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14053, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {1,IR(0, 0),IR(14059, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {2,IR(0, 0),IR(14064, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {3,IR(0, 1),IR(14103, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {4,IR(1, 2),IR(14114, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {5,IR(0, 0),IR(14123, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {6,IR(0, 0),IR(14128, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {7,IR(0, 0),IR(14135, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {8,IR(0, 1),IR(14146, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {9,IR(1, 2),IR(14153, 9)/* Fragment */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {0,IR(0, 0),IR(14162, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14172, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14185, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {3,IR(0, 0),IR(14198, 11)/* AtomicType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(14209, 10)/* Float16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1,IR(0, 0),IR(14219, 10)/* Float32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {2,IR(0, 0),IR(14229, 10)/* Float64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {3,IR(0, 0),IR(14239, 13)/* SignedInt8NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {4,IR(0, 0),IR(14252, 14)/* SignedInt16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {5,IR(0, 0),IR(14266, 14)/* SignedInt32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {6,IR(0, 0),IR(14280, 14)/* SignedInt64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {7,IR(0, 0),IR(14294, 15)/* UnsignedInt8NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {8,IR(0, 0),IR(14309, 16)/* UnsignedInt16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {9,IR(0, 0),IR(14325, 16)/* UnsignedInt32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {10,IR(0, 0),IR(14341, 16)/* UnsignedInt64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491000,IR(0, 0),IR(14357, 19)/* SignedInt8PackedNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491001,IR(0, 0),IR(14376, 21)/* UnsignedInt8PackedNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491002,IR(0, 0),IR(14397, 12)/* FloatE4M3NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491003,IR(0, 0),IR(14409, 12)/* FloatE5M2NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {0,IR(0, 0),IR(14421, 12)/* RowMajorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {1,IR(0, 0),IR(14433, 15)/* ColumnMajorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {4202,IR(0, 0),IR(14448, 25)/* RowBlockedInterleavedARM */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {4203,IR(0, 0),IR(14473, 28)/* ColumnBlockedInterleavedARM */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {0,IR(0, 0),IR(14501, 8)/* NoneKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {1,IR(0, 0),IR(14509, 27)/* MatrixASignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {2,IR(0, 0),IR(14536, 27)/* MatrixBSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {4,IR(0, 0),IR(14563, 27)/* MatrixCSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {8,IR(0, 0),IR(14590, 32)/* MatrixResultSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {16,IR(0, 0),IR(14622, 26)/* SaturatingAccumulationKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {1,IR(0, 0),IR(14648, 4)/* Row */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {2,IR(0, 0),IR(14652, 7)/* Column */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {4,IR(0, 0),IR(14659, 4)/* 2x2 */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {0,IR(0, 0),IR(14663, 11)/* MatrixAKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {1,IR(0, 0),IR(14674, 11)/* MatrixBKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {2,IR(0, 0),IR(14685, 21)/* MatrixAccumulatorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {0,IR(0, 0),IR(14706, 11)/* RowMajorNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {1,IR(0, 0),IR(14717, 14)/* ColumnMajorNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {2,IR(0, 0),IR(14731, 21)/* InferencingOptimalNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {3,IR(0, 0),IR(14752, 18)/* TrainingOptimalNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {0,IR(0, 0),IR(13618, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13630, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13638, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(13646, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(13652, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(13659, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(13670, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {8,IR(0, 0),IR(13679, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(13692, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(13698, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(13708, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(13754, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(13770, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(13784, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(13797, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(13809, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(13826, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(13838, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(13853, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(13866, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(13881, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(13899, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(13916, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(13937, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(13957, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(13977, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14053, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {1,IR(0, 0),IR(14059, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {2,IR(0, 0),IR(14064, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {3,IR(0, 1),IR(14103, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {4,IR(1, 2),IR(14114, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {5,IR(0, 0),IR(14123, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {6,IR(0, 0),IR(14128, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {7,IR(0, 0),IR(14135, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {8,IR(0, 1),IR(14146, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {0,IR(0, 0),IR(14162, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14172, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14185, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(14770, 17)/* RelaxedPrecision */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {1,IR(0, 1),IR(14787, 7)/* SpecId */,IR(0, 0),IR(104, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {2,IR(0, 0),IR(14794, 6)/* Block */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {3,IR(0, 0),IR(14800, 12)/* BufferBlock */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),SPV_SPIRV_VERSION_WORD(1,3)}, // SPV_OPERAND_TYPE_DECORATION
  {4,IR(0, 0),IR(14812, 9)/* RowMajor */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5,IR(0, 0),IR(14821, 9)/* ColMajor */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6,IR(0, 1),IR(14830, 12)/* ArrayStride */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {7,IR(0, 1),IR(14842, 13)/* MatrixStride */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {8,IR(0, 0),IR(14855, 11)/* GLSLShared */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {9,IR(0, 0),IR(14866, 11)/* GLSLPacked */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {10,IR(0, 0),IR(14877, 8)/* CPacked */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {11,IR(3, 1),IR(14911, 8)/* BuiltIn */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {13,IR(0, 0),IR(14919, 14)/* NoPerspective */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {14,IR(0, 0),IR(14933, 5)/* Flat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {15,IR(0, 0),IR(14938, 6)/* Patch */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {16,IR(0, 0),IR(14944, 9)/* Centroid */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {17,IR(0, 0),IR(14953, 7)/* Sample */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {18,IR(0, 0),IR(14960, 10)/* Invariant */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {19,IR(0, 0),IR(14970, 9)/* Restrict */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {20,IR(0, 0),IR(14979, 8)/* Aliased */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {21,IR(0, 0),IR(14987, 9)/* Volatile */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {22,IR(0, 0),IR(14996, 9)/* Constant */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {23,IR(0, 0),IR(15005, 9)/* Coherent */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {24,IR(0, 0),IR(15014, 12)/* NonWritable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {25,IR(0, 0),IR(15026, 12)/* NonReadable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {26,IR(0, 0),IR(15038, 8)/* Uniform */,IR(0, 0),IR(106, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {27,IR(4, 1),IR(15072, 10)/* UniformId */,IR(0, 0),IR(106, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {28,IR(0, 0),IR(15082, 20)/* SaturatedConversion */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {29,IR(0, 1),IR(15102, 7)/* Stream */,IR(0, 0),IR(108, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {30,IR(0, 1),IR(15109, 9)/* Location */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {31,IR(0, 1),IR(15118, 10)/* Component */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {32,IR(0, 1),IR(15128, 6)/* Index */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {33,IR(0, 1),IR(15134, 8)/* Binding */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {34,IR(0, 1),IR(15142, 14)/* DescriptorSet */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {35,IR(0, 1),IR(15156, 7)/* Offset */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {36,IR(0, 1),IR(15163, 10)/* XfbBuffer */,IR(0, 0),IR(109, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {37,IR(0, 1),IR(15173, 10)/* XfbStride */,IR(0, 0),IR(109, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {38,IR(5, 1),IR(15229, 14)/* FuncParamAttr */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {39,IR(6, 1),IR(15277, 15)/* FPRoundingMode */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {40,IR(7, 1),IR(15327, 15)/* FPFastMathMode */,IR(0, 0),IR(110, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {41,IR(8, 2),IR(15404, 18)/* LinkageAttributes */,IR(0, 0),IR(112, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {42,IR(0, 0),IR(15422, 14)/* NoContraction */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {43,IR(0, 1),IR(15436, 21)/* InputAttachmentIndex */,IR(0, 0),IR(90, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {44,IR(0, 1),IR(15457, 10)/* Alignment */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {45,IR(0, 1),IR(15467, 14)/* MaxByteOffset */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {46,IR(10, 1),IR(15501, 12)/* AlignmentId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {47,IR(10, 1),IR(15513, 16)/* MaxByteOffsetId */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4469,IR(0, 0),IR(15529, 13)/* NoSignedWrap */,IR(0, 0),IR(1, 0),IR(147, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4470,IR(0, 0),IR(15542, 15)/* NoUnsignedWrap */,IR(0, 0),IR(1, 0),IR(147, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4487,IR(0, 0),IR(15557, 18)/* WeightTextureQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4488,IR(0, 0),IR(15575, 22)/* BlockMatchTextureQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4499,IR(0, 0),IR(15597, 22)/* BlockMatchSamplerQCOM */,IR(0, 0),IR(1, 0),IR(51, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4999,IR(0, 0),IR(15619, 18)/* ExplicitInterpAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5019,IR(10, 1),IR(15637, 32)/* NodeSharesPayloadLimitsWithAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5020,IR(10, 1),IR(15669, 20)/* NodeMaxPayloadsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5078,IR(0, 0),IR(15689, 23)/* TrackFinishWritingAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5091,IR(10, 1),IR(15712, 20)/* PayloadNodeNameAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5098,IR(10, 1),IR(15732, 25)/* PayloadNodeBaseIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5099,IR(0, 0),IR(15757, 27)/* PayloadNodeSparseArrayAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5100,IR(10, 1),IR(15784, 25)/* PayloadNodeArraySizeAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5105,IR(0, 0),IR(15809, 28)/* PayloadDispatchIndirectAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5248,IR(0, 0),IR(15837, 19)/* OverrideCoverageNV */,IR(0, 0),IR(113, 1),IR(61, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5250,IR(0, 0),IR(15856, 14)/* PassthroughNV */,IR(0, 0),IR(114, 1),IR(62, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5252,IR(0, 0),IR(15870, 19)/* ViewportRelativeNV */,IR(0, 0),IR(89, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5256,IR(0, 1),IR(15889, 28)/* SecondaryViewportRelativeNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5271,IR(0, 0),IR(15917, 16)/* PerPrimitiveEXT */,IR(51, 1),IR(115, 2),IR(148, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5272,IR(0, 0),IR(15948, 10)/* PerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5273,IR(0, 0),IR(15958, 10)/* PerTaskNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5285,IR(0, 0),IR(15968, 13)/* PerVertexKHR */,IR(52, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5300,IR(0, 0),IR(15993, 11)/* NonUniform */,IR(53, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5355,IR(0, 0),IR(16018, 16)/* RestrictPointer */,IR(54, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5356,IR(0, 0),IR(16053, 15)/* AliasedPointer */,IR(55, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5386,IR(0, 0),IR(16086, 30)/* HitObjectShaderRecordBufferNV */,IR(0, 0),IR(117, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5398,IR(0, 0),IR(16116, 18)/* BindlessSamplerNV */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5399,IR(0, 0),IR(16134, 16)/* BindlessImageNV */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5400,IR(0, 0),IR(16150, 15)/* BoundSamplerNV */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5401,IR(0, 0),IR(16165, 13)/* BoundImageNV */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5599,IR(0, 1),IR(16178, 14)/* SIMTCallINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5602,IR(0, 0),IR(16192, 26)/* ReferencedIndirectlyINTEL */,IR(0, 0),IR(120, 1),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5607,IR(11, 1),IR(16218, 13)/* ClobberINTEL */,IR(0, 0),IR(121, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5608,IR(0, 0),IR(16231, 17)/* SideEffectsINTEL */,IR(0, 0),IR(121, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5624,IR(0, 0),IR(16248, 27)/* VectorComputeVariableINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5625,IR(0, 1),IR(16275, 21)/* FuncParamIOKindINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5626,IR(0, 0),IR(16296, 27)/* VectorComputeFunctionINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5627,IR(0, 0),IR(16323, 15)/* StackCallINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5628,IR(0, 1),IR(16338, 26)/* GlobalVariableOffsetINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5634,IR(10, 1),IR(16364, 14)/* CounterBuffer */,IR(56, 1),IR(1, 0),IR(150, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5635,IR(11, 1),IR(16402, 13)/* UserSemantic */,IR(57, 1),IR(1, 0),IR(150, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5636,IR(11, 1),IR(16434, 15)/* UserTypeGOOGLE */,IR(0, 0),IR(1, 0),IR(151, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5822,IR(12, 2),IR(16449, 26)/* FunctionRoundingModeINTEL */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5823,IR(14, 2),IR(16506, 24)/* FunctionDenormModeINTEL */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5825,IR(0, 0),IR(16530, 14)/* RegisterINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5826,IR(11, 1),IR(16544, 12)/* MemoryINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5827,IR(0, 1),IR(16556, 14)/* NumbanksINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5828,IR(0, 1),IR(16570, 15)/* BankwidthINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5829,IR(0, 1),IR(16585, 22)/* MaxPrivateCopiesINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5830,IR(0, 0),IR(16607, 16)/* SinglepumpINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5831,IR(0, 0),IR(16623, 16)/* DoublepumpINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5832,IR(0, 1),IR(16639, 19)/* MaxReplicatesINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5833,IR(0, 0),IR(16658, 20)/* SimpleDualPortINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5834,IR(16, 2),IR(16678, 11)/* MergeINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5835,IR(18, 1),IR(16731, 14)/* BankBitsINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5836,IR(0, 1),IR(16745, 20)/* ForcePow2DepthINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5883,IR(0, 1),IR(16765, 16)/* StridesizeINTEL */,IR(0, 0),IR(123, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5884,IR(0, 1),IR(16781, 14)/* WordsizeINTEL */,IR(0, 0),IR(123, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5885,IR(0, 0),IR(16795, 18)/* TrueDualPortINTEL */,IR(0, 0),IR(123, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5899,IR(0, 0),IR(16813, 19)/* BurstCoalesceINTEL */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5900,IR(0, 1),IR(16832, 15)/* CacheSizeINTEL */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5901,IR(0, 0),IR(16847, 28)/* DontStaticallyCoalesceINTEL */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5902,IR(0, 1),IR(16875, 14)/* PrefetchINTEL */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5905,IR(0, 0),IR(16889, 17)/* StallEnableINTEL */,IR(0, 0),IR(101, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5907,IR(0, 0),IR(16906, 25)/* FuseLoopsInFunctionINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5909,IR(1, 2),IR(16931, 19)/* MathOpDSPModeINTEL */,IR(0, 0),IR(126, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5914,IR(10, 1),IR(16950, 16)/* AliasScopeINTEL */,IR(0, 0),IR(127, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5915,IR(10, 1),IR(16966, 13)/* NoAliasINTEL */,IR(0, 0),IR(127, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5917,IR(0, 1),IR(16979, 24)/* InitiationIntervalINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5918,IR(0, 1),IR(17003, 20)/* MaxConcurrencyINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5919,IR(0, 1),IR(17023, 20)/* PipelineEnableINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5921,IR(0, 1),IR(17043, 20)/* BufferLocationINTEL */,IR(0, 0),IR(129, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5944,IR(0, 1),IR(17063, 19)/* IOPipeStorageINTEL */,IR(0, 0),IR(130, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6080,IR(19, 2),IR(17116, 31)/* FunctionFloatingPointModeINTEL */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6085,IR(0, 0),IR(17147, 25)/* SingleElementVectorINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6087,IR(0, 0),IR(17172, 35)/* VectorComputeCallableFunctionINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6140,IR(0, 0),IR(17207, 18)/* MediaBlockIOINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6151,IR(0, 0),IR(17225, 15)/* StallFreeINTEL */,IR(0, 0),IR(131, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6170,IR(21, 1),IR(17271, 26)/* FPMaxErrorDecorationINTEL */,IR(0, 0),IR(132, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6172,IR(0, 1),IR(17297, 25)/* LatencyControlLabelINTEL */,IR(0, 0),IR(133, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6173,IR(22, 3),IR(17322, 30)/* LatencyControlConstraintINTEL */,IR(0, 0),IR(133, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6175,IR(0, 0),IR(17352, 27)/* ConduitKernelArgumentINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6176,IR(0, 0),IR(17379, 31)/* RegisterMapKernelArgumentINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6177,IR(0, 1),IR(17410, 33)/* MMHostInterfaceAddressWidthINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6178,IR(0, 1),IR(17443, 30)/* MMHostInterfaceDataWidthINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6179,IR(0, 1),IR(17473, 28)/* MMHostInterfaceLatencyINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6180,IR(25, 1),IR(17535, 34)/* MMHostInterfaceReadWriteModeINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6181,IR(0, 1),IR(17569, 29)/* MMHostInterfaceMaxBurstINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6182,IR(0, 1),IR(17598, 32)/* MMHostInterfaceWaitRequestINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6183,IR(0, 0),IR(17630, 26)/* StableKernelArgumentINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6188,IR(26, 2),IR(17695, 16)/* HostAccessINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6190,IR(28, 1),IR(17758, 14)/* InitModeINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6191,IR(0, 1),IR(17772, 28)/* ImplementInRegisterMapINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6442,IR(29, 2),IR(17836, 22)/* CacheControlLoadINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6443,IR(31, 2),IR(17895, 23)/* CacheControlStoreINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {0,IR(0, 0),IR(17918, 3)/* 1D */,IR(0, 0),IR(72, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {1,IR(0, 0),IR(17921, 3)/* 2D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {2,IR(0, 0),IR(17924, 3)/* 3D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {3,IR(0, 0),IR(17927, 5)/* Cube */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {4,IR(0, 0),IR(17932, 5)/* Rect */,IR(0, 0),IR(71, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {5,IR(0, 0),IR(17937, 7)/* Buffer */,IR(0, 0),IR(73, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {6,IR(0, 0),IR(17944, 12)/* SubpassData */,IR(0, 0),IR(90, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {4173,IR(0, 0),IR(17956, 17)/* TileImageDataEXT */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {0,IR(0, 1),IR(17973, 12)/* Invocations */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {1,IR(0, 0),IR(17985, 13)/* SpacingEqual */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {2,IR(0, 0),IR(17998, 22)/* SpacingFractionalEven */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {3,IR(0, 0),IR(18020, 21)/* SpacingFractionalOdd */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4,IR(0, 0),IR(18041, 14)/* VertexOrderCw */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5,IR(0, 0),IR(18055, 15)/* VertexOrderCcw */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6,IR(0, 0),IR(18070, 19)/* PixelCenterInteger */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {7,IR(0, 0),IR(18089, 16)/* OriginUpperLeft */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {8,IR(0, 0),IR(18105, 16)/* OriginLowerLeft */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {9,IR(0, 0),IR(18121, 19)/* EarlyFragmentTests */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {10,IR(0, 0),IR(18140, 10)/* PointMode */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {11,IR(0, 0),IR(18150, 4)/* Xfb */,IR(0, 0),IR(109, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {12,IR(0, 0),IR(18154, 15)/* DepthReplacing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {14,IR(0, 0),IR(18169, 13)/* DepthGreater */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {15,IR(0, 0),IR(18182, 10)/* DepthLess */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {16,IR(0, 0),IR(18192, 15)/* DepthUnchanged */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {17,IR(22, 3),IR(18207, 10)/* LocalSize */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {18,IR(22, 3),IR(18217, 14)/* LocalSizeHint */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {19,IR(0, 0),IR(18231, 12)/* InputPoints */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {20,IR(0, 0),IR(18243, 11)/* InputLines */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {21,IR(0, 0),IR(18254, 20)/* InputLinesAdjacency */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {22,IR(0, 0),IR(18274, 10)/* Triangles */,IR(0, 0),IR(12, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {23,IR(0, 0),IR(18284, 24)/* InputTrianglesAdjacency */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {24,IR(0, 0),IR(18308, 6)/* Quads */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {25,IR(0, 0),IR(18314, 9)/* Isolines */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {26,IR(0, 1),IR(18323, 15)/* OutputVertices */,IR(0, 0),IR(139, 4),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {27,IR(0, 0),IR(18338, 13)/* OutputPoints */,IR(0, 0),IR(143, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {28,IR(0, 0),IR(18351, 16)/* OutputLineStrip */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {29,IR(0, 0),IR(18367, 20)/* OutputTriangleStrip */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {30,IR(0, 1),IR(18387, 12)/* VecTypeHint */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {31,IR(0, 0),IR(18399, 15)/* ContractionOff */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {33,IR(0, 0),IR(18414, 12)/* Initializer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {34,IR(0, 0),IR(18426, 10)/* Finalizer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {35,IR(0, 1),IR(5229, 13)/* SubgroupSize */,IR(0, 0),IR(146, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {36,IR(0, 1),IR(18436, 22)/* SubgroupsPerWorkgroup */,IR(0, 0),IR(146, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {37,IR(10, 1),IR(18458, 24)/* SubgroupsPerWorkgroupId */,IR(0, 0),IR(146, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {38,IR(33, 3),IR(18482, 12)/* LocalSizeId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {39,IR(33, 3),IR(18494, 16)/* LocalSizeHintId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4169,IR(0, 0),IR(18510, 34)/* NonCoherentColorAttachmentReadEXT */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4170,IR(0, 0),IR(18544, 34)/* NonCoherentDepthAttachmentReadEXT */,IR(0, 0),IR(147, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4171,IR(0, 0),IR(18578, 36)/* NonCoherentStencilAttachmentReadEXT */,IR(0, 0),IR(148, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4421,IR(0, 0),IR(18614, 30)/* SubgroupUniformControlFlowKHR */,IR(0, 0),IR(3, 1),IR(152, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4446,IR(0, 0),IR(18644, 18)/* PostDepthCoverage */,IR(0, 0),IR(149, 1),IR(42, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4459,IR(0, 1),IR(9273, 15)/* DenormPreserve */,IR(0, 0),IR(150, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4460,IR(0, 1),IR(9288, 18)/* DenormFlushToZero */,IR(0, 0),IR(151, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4461,IR(0, 1),IR(9306, 25)/* SignedZeroInfNanPreserve */,IR(0, 0),IR(152, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4462,IR(0, 1),IR(9331, 16)/* RoundingModeRTE */,IR(0, 0),IR(153, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4463,IR(0, 1),IR(9347, 16)/* RoundingModeRTZ */,IR(0, 0),IR(154, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4489,IR(0, 0),IR(18662, 34)/* NonCoherentTileAttachmentReadQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4490,IR(22, 3),IR(18696, 20)/* TileShadingRateQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5017,IR(0, 0),IR(18716, 29)/* EarlyAndLateFragmentTestsAMD */,IR(0, 0),IR(3, 1),IR(153, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5027,IR(0, 0),IR(18745, 23)/* StencilRefReplacingEXT */,IR(0, 0),IR(42, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5069,IR(0, 0),IR(18768, 15)/* CoalescingAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5070,IR(10, 1),IR(18783, 15)/* IsApiEntryAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5071,IR(10, 1),IR(18798, 21)/* MaxNodeRecursionAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5072,IR(33, 3),IR(18819, 24)/* StaticNumWorkgroupsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5073,IR(10, 1),IR(6122, 16)/* ShaderIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5077,IR(33, 3),IR(18843, 21)/* MaxNumWorkgroupsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5079,IR(0, 0),IR(18864, 28)/* StencilRefUnchangedFrontAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5080,IR(0, 0),IR(18892, 26)/* StencilRefGreaterFrontAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5081,IR(0, 0),IR(18918, 23)/* StencilRefLessFrontAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5082,IR(0, 0),IR(18941, 27)/* StencilRefUnchangedBackAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5083,IR(0, 0),IR(18968, 25)/* StencilRefGreaterBackAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5084,IR(0, 0),IR(18993, 22)/* StencilRefLessBackAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5088,IR(0, 0),IR(19015, 19)/* QuadDerivativesKHR */,IR(0, 0),IR(155, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5089,IR(0, 0),IR(19034, 20)/* RequireFullQuadsKHR */,IR(0, 0),IR(155, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5102,IR(36, 2),IR(19054, 20)/* SharesInputWithAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5269,IR(0, 0),IR(19074, 15)/* OutputLinesEXT */,IR(58, 1),IR(115, 2),IR(148, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5270,IR(0, 1),IR(19103, 20)/* OutputPrimitivesEXT */,IR(59, 1),IR(115, 2),IR(148, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5289,IR(0, 0),IR(19142, 24)/* DerivativeGroupQuadsKHR */,IR(60, 1),IR(156, 2),IR(68, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5290,IR(0, 0),IR(19189, 25)/* DerivativeGroupLinearKHR */,IR(61, 1),IR(158, 2),IR(68, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5298,IR(0, 0),IR(19238, 19)/* OutputTrianglesEXT */,IR(62, 1),IR(115, 2),IR(148, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5366,IR(0, 0),IR(19275, 25)/* PixelInterlockOrderedEXT */,IR(0, 0),IR(160, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5367,IR(0, 0),IR(19300, 27)/* PixelInterlockUnorderedEXT */,IR(0, 0),IR(160, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5368,IR(0, 0),IR(19327, 26)/* SampleInterlockOrderedEXT */,IR(0, 0),IR(161, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5369,IR(0, 0),IR(19353, 28)/* SampleInterlockUnorderedEXT */,IR(0, 0),IR(161, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5370,IR(0, 0),IR(19381, 31)/* ShadingRateInterlockOrderedEXT */,IR(0, 0),IR(162, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5371,IR(0, 0),IR(19412, 33)/* ShadingRateInterlockUnorderedEXT */,IR(0, 0),IR(162, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5618,IR(0, 1),IR(19445, 27)/* SharedLocalMemorySizeINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5620,IR(0, 1),IR(19472, 21)/* RoundingModeRTPINTEL */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5621,IR(0, 1),IR(19493, 21)/* RoundingModeRTNINTEL */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5622,IR(0, 1),IR(19514, 26)/* FloatingPointModeALTINTEL */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5623,IR(0, 1),IR(19540, 27)/* FloatingPointModeIEEEINTEL */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5893,IR(22, 3),IR(19567, 22)/* MaxWorkgroupSizeINTEL */,IR(0, 0),IR(164, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5894,IR(0, 1),IR(19589, 16)/* MaxWorkDimINTEL */,IR(0, 0),IR(164, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5895,IR(0, 0),IR(19605, 20)/* NoGlobalOffsetINTEL */,IR(0, 0),IR(164, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5896,IR(0, 1),IR(19625, 22)/* NumSIMDWorkitemsINTEL */,IR(0, 0),IR(102, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5903,IR(0, 1),IR(19647, 28)/* SchedulerTargetFmaxMhzINTEL */,IR(0, 0),IR(102, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6023,IR(0, 0),IR(19675, 24)/* MaximallyReconvergesKHR */,IR(0, 0),IR(3, 1),IR(156, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6028,IR(36, 2),IR(19699, 18)/* FPFastMathDefault */,IR(0, 0),IR(165, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6154,IR(0, 1),IR(19717, 24)/* StreamingInterfaceINTEL */,IR(0, 0),IR(102, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6160,IR(0, 1),IR(19741, 26)/* RegisterMapInterfaceINTEL */,IR(0, 0),IR(166, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6417,IR(0, 1),IR(19767, 23)/* NamedBarrierCountINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6461,IR(0, 1),IR(19790, 22)/* MaximumRegistersINTEL */,IR(0, 0),IR(167, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6462,IR(10, 1),IR(19812, 24)/* MaximumRegistersIdINTEL */,IR(0, 0),IR(167, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6463,IR(38, 1),IR(19887, 27)/* NamedMaximumRegistersINTEL */,IR(0, 0),IR(167, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {0,IR(0, 0),IR(19914, 7)/* Vertex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {1,IR(0, 0),IR(19921, 20)/* TessellationControl */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {2,IR(0, 0),IR(19941, 23)/* TessellationEvaluation */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {3,IR(0, 0),IR(4710, 9)/* Geometry */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {4,IR(0, 0),IR(14153, 9)/* Fragment */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5,IR(0, 0),IR(19964, 10)/* GLCompute */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {6,IR(0, 0),IR(4477, 7)/* Kernel */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5267,IR(0, 0),IR(19974, 7)/* TaskNV */,IR(0, 0),IR(50, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5268,IR(0, 0),IR(19981, 7)/* MeshNV */,IR(0, 0),IR(50, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5313,IR(0, 0),IR(19988, 17)/* RayGenerationKHR */,IR(63, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5314,IR(0, 0),IR(20021, 16)/* IntersectionKHR */,IR(64, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5315,IR(0, 0),IR(20052, 10)/* AnyHitKHR */,IR(65, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5316,IR(0, 0),IR(20071, 14)/* ClosestHitKHR */,IR(66, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5317,IR(0, 0),IR(20098, 8)/* MissKHR */,IR(67, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5318,IR(0, 0),IR(20113, 12)/* CallableKHR */,IR(68, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5364,IR(0, 0),IR(20136, 8)/* TaskEXT */,IR(0, 0),IR(53, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5365,IR(0, 0),IR(20144, 8)/* MeshEXT */,IR(0, 0),IR(53, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {0,IR(0, 0),IR(20152, 9)/* Preserve */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPDENORM_MODE
  {1,IR(0, 0),IR(20161, 12)/* FlushToZero */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPDENORM_MODE
  {0,IR(0, 0),IR(20173, 12)/* BFloat16KHR */,IR(0, 0),IR(84, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPENCODING
  {0,IR(0, 0),IR(20185, 5)/* IEEE */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPOPERATION_MODE
  {1,IR(0, 0),IR(20190, 4)/* ALT */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPOPERATION_MODE
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {1,IR(0, 0),IR(20194, 7)/* NotNaN */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {2,IR(0, 0),IR(20201, 7)/* NotInf */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {4,IR(0, 0),IR(20208, 4)/* NSZ */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {8,IR(0, 0),IR(20212, 11)/* AllowRecip */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {16,IR(0, 0),IR(20223, 5)/* Fast */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {65536,IR(0, 0),IR(20228, 14)/* AllowContract */,IR(69, 1),IR(168, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {131072,IR(0, 0),IR(20265, 13)/* AllowReassoc */,IR(70, 1),IR(168, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {262144,IR(0, 0),IR(20296, 15)/* AllowTransform */,IR(0, 0),IR(165, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {0,IR(0, 0),IR(20311, 4)/* RTE */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {1,IR(0, 0),IR(20315, 4)/* RTZ */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {2,IR(0, 0),IR(20319, 4)/* RTP */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {3,IR(0, 0),IR(20323, 4)/* RTN */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {1,IR(0, 0),IR(20327, 16)/* Vertical2Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {2,IR(0, 0),IR(20343, 16)/* Vertical4Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {4,IR(0, 0),IR(20359, 18)/* Horizontal2Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {8,IR(0, 0),IR(20377, 18)/* Horizontal4Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {1,IR(0, 0),IR(20395, 7)/* Inline */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {2,IR(0, 0),IR(20402, 11)/* DontInline */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {4,IR(0, 0),IR(20413, 5)/* Pure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {8,IR(0, 0),IR(20418, 6)/* Const */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {65536,IR(0, 0),IR(12990, 11)/* OptNoneEXT */,IR(50, 1),IR(170, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {0,IR(0, 0),IR(20424, 5)/* Zext */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {1,IR(0, 0),IR(20429, 5)/* Sext */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {2,IR(0, 0),IR(20434, 6)/* ByVal */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {3,IR(0, 0),IR(20440, 5)/* Sret */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {4,IR(0, 0),IR(20445, 8)/* NoAlias */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {5,IR(0, 0),IR(20453, 10)/* NoCapture */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {6,IR(0, 0),IR(20463, 8)/* NoWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {7,IR(0, 0),IR(20471, 12)/* NoReadWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {5940,IR(0, 0),IR(20483, 20)/* RuntimeAlignedINTEL */,IR(0, 0),IR(171, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {0,IR(0, 0),IR(20503, 7)/* Reduce */,IR(0, 0),IR(172, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {1,IR(0, 0),IR(20510, 14)/* InclusiveScan */,IR(0, 0),IR(172, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {2,IR(0, 0),IR(20524, 14)/* ExclusiveScan */,IR(0, 0),IR(172, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {3,IR(0, 0),IR(20538, 16)/* ClusteredReduce */,IR(0, 0),IR(175, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {6,IR(0, 0),IR(20554, 20)/* PartitionedReduceNV */,IR(0, 0),IR(176, 1),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {7,IR(0, 0),IR(20574, 27)/* PartitionedInclusiveScanNV */,IR(0, 0),IR(176, 1),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {8,IR(0, 0),IR(20601, 27)/* PartitionedExclusiveScanNV */,IR(0, 0),IR(176, 1),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {0,IR(0, 0),IR(20628, 10)/* NoneINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {1,IR(0, 0),IR(20638, 10)/* ReadINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {2,IR(0, 0),IR(20648, 11)/* WriteINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {3,IR(0, 0),IR(20659, 15)/* ReadWriteINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {1,IR(10, 1),IR(20674, 5)/* Bias */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {2,IR(10, 1),IR(20679, 4)/* Lod */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {4,IR(36, 2),IR(20683, 5)/* Grad */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {8,IR(10, 1),IR(20688, 12)/* ConstOffset */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {16,IR(10, 1),IR(15156, 7)/* Offset */,IR(0, 0),IR(177, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {32,IR(10, 1),IR(20700, 13)/* ConstOffsets */,IR(0, 0),IR(177, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {64,IR(10, 1),IR(14953, 7)/* Sample */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {128,IR(10, 1),IR(8261, 7)/* MinLod */,IR(0, 0),IR(178, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {256,IR(4, 1),IR(20713, 19)/* MakeTexelAvailable */,IR(71, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {512,IR(4, 1),IR(20754, 17)/* MakeTexelVisible */,IR(72, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {1024,IR(0, 0),IR(20791, 16)/* NonPrivateTexel */,IR(73, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {2048,IR(0, 0),IR(20826, 14)/* VolatileTexel */,IR(74, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {4096,IR(0, 0),IR(20857, 11)/* SignExtend */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {8192,IR(0, 0),IR(20868, 11)/* ZeroExtend */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {16384,IR(0, 0),IR(20879, 12)/* Nontemporal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {65536,IR(10, 1),IR(20891, 8)/* Offsets */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {0,IR(0, 0),IR(20899, 10)/* SnormInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {1,IR(0, 0),IR(20909, 11)/* SnormInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {2,IR(0, 0),IR(20920, 10)/* UnormInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {3,IR(0, 0),IR(20930, 11)/* UnormInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {4,IR(0, 0),IR(20941, 14)/* UnormShort565 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {5,IR(0, 0),IR(20955, 14)/* UnormShort555 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {6,IR(0, 0),IR(20969, 15)/* UnormInt101010 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {7,IR(0, 0),IR(20984, 11)/* SignedInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {8,IR(0, 0),IR(20995, 12)/* SignedInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {9,IR(0, 0),IR(21007, 12)/* SignedInt32 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {10,IR(0, 0),IR(21019, 13)/* UnsignedInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {11,IR(0, 0),IR(21032, 14)/* UnsignedInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {12,IR(0, 0),IR(21046, 14)/* UnsignedInt32 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {13,IR(0, 0),IR(21060, 10)/* HalfFloat */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {14,IR(0, 0),IR(13646, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {15,IR(0, 0),IR(21070, 11)/* UnormInt24 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {16,IR(0, 0),IR(21081, 17)/* UnormInt101010_2 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {17,IR(0, 0),IR(21098, 16)/* UnormInt10X6EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {19,IR(0, 0),IR(21114, 20)/* UnsignedIntRaw10EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {20,IR(0, 0),IR(21134, 20)/* UnsignedIntRaw12EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {21,IR(0, 0),IR(21154, 20)/* UnormInt2_101010EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {22,IR(0, 0),IR(21174, 19)/* UnsignedInt10X6EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {23,IR(0, 0),IR(21193, 19)/* UnsignedInt12X4EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {24,IR(0, 0),IR(21212, 19)/* UnsignedInt14X2EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {25,IR(0, 0),IR(21231, 16)/* UnormInt12X4EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {26,IR(0, 0),IR(21247, 16)/* UnormInt14X2EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {0,IR(0, 0),IR(21263, 2)/* R */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {1,IR(0, 0),IR(21265, 2)/* A */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {2,IR(0, 0),IR(21267, 3)/* RG */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {3,IR(0, 0),IR(21270, 3)/* RA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {4,IR(0, 0),IR(21273, 4)/* RGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {5,IR(0, 0),IR(21277, 5)/* RGBA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {6,IR(0, 0),IR(21282, 5)/* BGRA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {7,IR(0, 0),IR(21287, 5)/* ARGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {8,IR(0, 0),IR(21292, 10)/* Intensity */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {9,IR(0, 0),IR(21302, 10)/* Luminance */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {10,IR(0, 0),IR(21312, 3)/* Rx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {11,IR(0, 0),IR(21315, 4)/* RGx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {12,IR(0, 0),IR(21319, 5)/* RGBx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {13,IR(0, 0),IR(21324, 6)/* Depth */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {14,IR(0, 0),IR(21330, 13)/* DepthStencil */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {15,IR(0, 0),IR(21343, 5)/* sRGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {16,IR(0, 0),IR(21348, 6)/* sRGBx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {17,IR(0, 0),IR(21354, 6)/* sRGBA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {18,IR(0, 0),IR(21360, 6)/* sBGRA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {19,IR(0, 0),IR(21366, 5)/* ABGR */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {0,IR(0, 0),IR(21371, 27)/* InitOnDeviceReprogramINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {1,IR(0, 0),IR(21398, 23)/* InitOnDeviceResetINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {0,IR(0, 0),IR(21421, 7)/* NoWait */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {1,IR(0, 0),IR(21428, 11)/* WaitKernel */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {2,IR(0, 0),IR(21439, 14)/* WaitWorkGroup */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {1,IR(0, 0),IR(21453, 12)/* CmdExecTime */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {1,IR(0, 0),IR(21465, 13)/* MayUsePrintf */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {0,IR(0, 0),IR(21478, 7)/* Export */,IR(0, 0),IR(112, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {1,IR(0, 0),IR(21485, 7)/* Import */,IR(0, 0),IR(112, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {2,IR(0, 0),IR(21492, 12)/* LinkOnceODR */,IR(0, 0),IR(112, 1),IR(157, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {0,IR(0, 0),IR(21504, 14)/* UncachedINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {1,IR(0, 0),IR(21518, 12)/* CachedINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {2,IR(0, 0),IR(21530, 15)/* StreamingINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {3,IR(0, 0),IR(21545, 25)/* InvalidateAfterReadINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {4,IR(0, 0),IR(21570, 17)/* ConstCachedINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {1,IR(0, 0),IR(21587, 7)/* Unroll */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {2,IR(0, 0),IR(21594, 11)/* DontUnroll */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {4,IR(0, 0),IR(21605, 19)/* DependencyInfinite */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {8,IR(0, 1),IR(21624, 17)/* DependencyLength */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {16,IR(0, 1),IR(21641, 14)/* MinIterations */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {32,IR(0, 1),IR(21655, 14)/* MaxIterations */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {64,IR(0, 1),IR(21669, 18)/* IterationMultiple */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {128,IR(0, 1),IR(21687, 10)/* PeelCount */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {256,IR(0, 1),IR(21697, 13)/* PartialCount */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {65536,IR(0, 1),IR(16979, 24)/* InitiationIntervalINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {131072,IR(0, 1),IR(17003, 20)/* MaxConcurrencyINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {262144,IR(0, 1),IR(21710, 21)/* DependencyArrayINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {524288,IR(0, 1),IR(17023, 20)/* PipelineEnableINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {1048576,IR(0, 1),IR(21731, 18)/* LoopCoalesceINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {2097152,IR(0, 1),IR(21749, 21)/* MaxInterleavingINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {4194304,IR(0, 1),IR(21770, 26)/* SpeculatedIterationsINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {8388608,IR(0, 0),IR(21796, 14)/* NoFusionINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {16777216,IR(0, 1),IR(21810, 15)/* LoopCountINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {33554432,IR(0, 1),IR(21825, 26)/* MaxReinvocationDelayINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {1,IR(0, 0),IR(21851, 29)/* MatrixASignedComponentsINTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {2,IR(0, 0),IR(21880, 29)/* MatrixBSignedComponentsINTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {4,IR(0, 0),IR(21909, 21)/* MatrixCBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {8,IR(0, 0),IR(21930, 26)/* MatrixResultBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {16,IR(0, 0),IR(21956, 23)/* MatrixAPackedInt8INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {32,IR(0, 0),IR(21979, 23)/* MatrixBPackedInt8INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {64,IR(0, 0),IR(22002, 23)/* MatrixAPackedInt4INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {128,IR(0, 0),IR(22025, 23)/* MatrixBPackedInt4INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {256,IR(0, 0),IR(22048, 17)/* MatrixATF32INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {512,IR(0, 0),IR(22065, 17)/* MatrixBTF32INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {1024,IR(0, 0),IR(22082, 26)/* MatrixAPackedFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {2048,IR(0, 0),IR(22108, 26)/* MatrixBPackedFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {4096,IR(0, 0),IR(22134, 27)/* MatrixAPackedBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {8192,IR(0, 0),IR(22161, 27)/* MatrixBPackedBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {1,IR(0, 0),IR(14987, 9)/* Volatile */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {2,IR(0, 1),IR(22188, 8)/* Aligned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {4,IR(0, 0),IR(20879, 12)/* Nontemporal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {8,IR(4, 1),IR(22196, 21)/* MakePointerAvailable */,IR(75, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {16,IR(4, 1),IR(22241, 19)/* MakePointerVisible */,IR(76, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {32,IR(0, 0),IR(22282, 18)/* NonPrivatePointer */,IR(77, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {65536,IR(10, 1),IR(22321, 20)/* AliasScopeINTELMask */,IR(0, 0),IR(127, 1),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {131072,IR(10, 1),IR(22341, 17)/* NoAliasINTELMask */,IR(0, 0),IR(127, 1),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {0,IR(0, 0),IR(22358, 7)/* Simple */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {1,IR(0, 0),IR(22365, 8)/* GLSL450 */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {2,IR(0, 0),IR(22373, 7)/* OpenCL */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {3,IR(0, 0),IR(22380, 7)/* Vulkan */,IR(78, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {0,IR(0, 0),IR(22397, 8)/* Relaxed */,IR(79, 1),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {2,IR(0, 0),IR(22405, 8)/* Acquire */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {4,IR(0, 0),IR(22413, 8)/* Release */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {8,IR(0, 0),IR(22421, 15)/* AcquireRelease */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {16,IR(0, 0),IR(22436, 23)/* SequentiallyConsistent */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {64,IR(0, 0),IR(22459, 14)/* UniformMemory */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {128,IR(0, 0),IR(22473, 15)/* SubgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {256,IR(0, 0),IR(22488, 16)/* WorkgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {512,IR(0, 0),IR(22504, 21)/* CrossWorkgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {1024,IR(0, 0),IR(22525, 20)/* AtomicCounterMemory */,IR(0, 0),IR(80, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {2048,IR(0, 0),IR(22545, 12)/* ImageMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {4096,IR(0, 0),IR(22557, 13)/* OutputMemory */,IR(80, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {8192,IR(0, 0),IR(22586, 14)/* MakeAvailable */,IR(81, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {16384,IR(0, 0),IR(22617, 12)/* MakeVisible */,IR(82, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {32768,IR(0, 0),IR(14987, 9)/* Volatile */,IR(0, 0),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {0,IR(0, 0),IR(22644, 10)/* AutoINTEL */,IR(0, 0),IR(167, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS
  {0,IR(0, 0),IR(22654, 5)/* WRAP */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {1,IR(0, 0),IR(22659, 4)/* SAT */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {2,IR(0, 0),IR(22663, 9)/* SAT_ZERO */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {3,IR(0, 0),IR(22672, 8)/* SAT_SYM */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {0,IR(0, 0),IR(22680, 25)/* PackedVectorFormat4x8Bit */,IR(83, 1),IR(1, 0),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {0,IR(0, 0),IR(22733, 4)/* TRN */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {1,IR(0, 0),IR(22737, 9)/* TRN_ZERO */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {2,IR(0, 0),IR(22746, 4)/* RND */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {3,IR(0, 0),IR(22750, 9)/* RND_ZERO */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {4,IR(0, 0),IR(22759, 8)/* RND_INF */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {5,IR(0, 0),IR(22767, 12)/* RND_MIN_INF */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {6,IR(0, 0),IR(22779, 9)/* RND_CONV */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {7,IR(0, 0),IR(22788, 13)/* RND_CONV_ODD */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {1,IR(0, 0),IR(22801, 25)/* RobustnessPerComponentNV */,IR(0, 0),IR(182, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {2,IR(0, 0),IR(22826, 23)/* RobustnessPerElementNV */,IR(0, 0),IR(182, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {0,IR(0, 0),IR(14501, 8)/* NoneKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {1,IR(0, 0),IR(22849, 10)/* OpaqueKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {2,IR(0, 0),IR(22859, 12)/* NoOpaqueKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {4,IR(0, 0),IR(22871, 23)/* TerminateOnFirstHitKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {8,IR(0, 0),IR(22894, 24)/* SkipClosestHitShaderKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {16,IR(0, 0),IR(22918, 27)/* CullBackFacingTrianglesKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {32,IR(0, 0),IR(22945, 28)/* CullFrontFacingTrianglesKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {64,IR(0, 0),IR(22973, 14)/* CullOpaqueKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {128,IR(0, 0),IR(22987, 16)/* CullNoOpaqueKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {256,IR(0, 0),IR(23003, 17)/* SkipTrianglesKHR */,IR(84, 1),IR(183, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {512,IR(0, 0),IR(23044, 13)/* SkipAABBsKHR */,IR(0, 0),IR(183, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {1024,IR(0, 0),IR(23057, 30)/* ForceOpacityMicromap2StateEXT */,IR(0, 0),IR(184, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {0,IR(0, 0),IR(23087, 41)/* RayQueryCandidateIntersectionTriangleKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {1,IR(0, 0),IR(23128, 37)/* RayQueryCandidateIntersectionAABBKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {0,IR(0, 0),IR(23165, 37)/* RayQueryCommittedIntersectionNoneKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {1,IR(0, 0),IR(23202, 41)/* RayQueryCommittedIntersectionTriangleKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {2,IR(0, 0),IR(23243, 42)/* RayQueryCommittedIntersectionGeneratedKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {0,IR(0, 0),IR(23285, 33)/* RayQueryCandidateIntersectionKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {1,IR(0, 0),IR(23318, 33)/* RayQueryCommittedIntersectionKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {1,IR(0, 0),IR(23351, 12)/* ClampToEdge */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {2,IR(0, 0),IR(23363, 6)/* Clamp */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {3,IR(0, 0),IR(23369, 7)/* Repeat */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {4,IR(0, 0),IR(23376, 15)/* RepeatMirrored */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {0,IR(0, 0),IR(23391, 8)/* Nearest */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {1,IR(0, 0),IR(23399, 7)/* Linear */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {0,IR(0, 0),IR(23406, 8)/* Unknown */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {1,IR(0, 0),IR(23414, 8)/* Rgba32f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {2,IR(0, 0),IR(23422, 8)/* Rgba16f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {3,IR(0, 0),IR(23430, 5)/* R32f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {4,IR(0, 0),IR(23435, 6)/* Rgba8 */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {5,IR(0, 0),IR(23441, 11)/* Rgba8Snorm */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {6,IR(0, 0),IR(23452, 6)/* Rg32f */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {7,IR(0, 0),IR(23458, 6)/* Rg16f */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {8,IR(0, 0),IR(23464, 13)/* R11fG11fB10f */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {9,IR(0, 0),IR(23477, 5)/* R16f */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {10,IR(0, 0),IR(23482, 7)/* Rgba16 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {11,IR(0, 0),IR(23489, 8)/* Rgb10A2 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {12,IR(0, 0),IR(23497, 5)/* Rg16 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {13,IR(0, 0),IR(23502, 4)/* Rg8 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {14,IR(0, 0),IR(23506, 4)/* R16 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {15,IR(0, 0),IR(23510, 3)/* R8 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {16,IR(0, 0),IR(23513, 12)/* Rgba16Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {17,IR(0, 0),IR(23525, 10)/* Rg16Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {18,IR(0, 0),IR(23535, 9)/* Rg8Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {19,IR(0, 0),IR(23544, 9)/* R16Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {20,IR(0, 0),IR(23553, 8)/* R8Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {21,IR(0, 0),IR(23561, 8)/* Rgba32i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {22,IR(0, 0),IR(23569, 8)/* Rgba16i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {23,IR(0, 0),IR(23577, 7)/* Rgba8i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {24,IR(0, 0),IR(23584, 5)/* R32i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {25,IR(0, 0),IR(23589, 6)/* Rg32i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {26,IR(0, 0),IR(23595, 6)/* Rg16i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {27,IR(0, 0),IR(23601, 5)/* Rg8i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {28,IR(0, 0),IR(23606, 5)/* R16i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {29,IR(0, 0),IR(23611, 4)/* R8i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {30,IR(0, 0),IR(23615, 9)/* Rgba32ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {31,IR(0, 0),IR(23624, 9)/* Rgba16ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {32,IR(0, 0),IR(23633, 8)/* Rgba8ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {33,IR(0, 0),IR(23641, 6)/* R32ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {34,IR(0, 0),IR(23647, 10)/* Rgb10a2ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {35,IR(0, 0),IR(23657, 7)/* Rg32ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {36,IR(0, 0),IR(23664, 7)/* Rg16ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {37,IR(0, 0),IR(23671, 6)/* Rg8ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {38,IR(0, 0),IR(23677, 6)/* R16ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {39,IR(0, 0),IR(23683, 5)/* R8ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {40,IR(0, 0),IR(23688, 6)/* R64ui */,IR(0, 0),IR(187, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {41,IR(0, 0),IR(23694, 5)/* R64i */,IR(0, 0),IR(187, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {0,IR(0, 0),IR(23699, 12)/* CrossDevice */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {1,IR(0, 0),IR(23711, 7)/* Device */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {2,IR(0, 0),IR(23718, 10)/* Workgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {3,IR(0, 0),IR(23728, 9)/* Subgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {4,IR(0, 0),IR(23737, 11)/* Invocation */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {5,IR(0, 0),IR(23748, 12)/* QueueFamily */,IR(85, 1),IR(179, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {6,IR(0, 0),IR(23775, 14)/* ShaderCallKHR */,IR(0, 0),IR(60, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {1,IR(0, 0),IR(23789, 8)/* Flatten */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {2,IR(0, 0),IR(23797, 12)/* DontFlatten */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {1,IR(0, 0),IR(23809, 29)/* IdentifierPossibleDuplicates */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS
  {0,IR(0, 0),IR(13618, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13630, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13638, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {3,IR(0, 0),IR(13646, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(13652, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(13659, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(13670, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(13679, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(13692, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(13698, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(13708, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(13714, 15)/* ImportedModule */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {1,IR(0, 0),IR(13729, 20)/* ImportedDeclaration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(13754, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(13770, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(13784, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(13797, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(13809, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(13826, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(13838, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(13853, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(13866, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(13881, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(13899, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(13916, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(13937, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(13957, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(13977, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {16384,IR(0, 0),IR(13993, 16)/* FlagIsEnumClass */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {32768,IR(0, 0),IR(14009, 20)/* FlagTypePassByValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {65536,IR(0, 0),IR(14029, 24)/* FlagTypePassByReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {131072,IR(0, 0),IR(23838, 26)/* FlagUnknownPhysicalLayout */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14053, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {1,IR(0, 0),IR(14059, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {2,IR(0, 0),IR(14064, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {3,IR(10, 1),IR(14103, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {4,IR(36, 2),IR(14114, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {5,IR(0, 0),IR(14123, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {6,IR(0, 0),IR(14128, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {7,IR(0, 0),IR(14135, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {8,IR(10, 1),IR(14146, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {9,IR(36, 2),IR(14153, 9)/* Fragment */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {0,IR(0, 0),IR(14162, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14172, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14185, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {3,IR(0, 0),IR(14198, 11)/* AtomicType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(23406, 8)/* Unknown */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {1,IR(0, 0),IR(23864, 5)/* ESSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {2,IR(0, 0),IR(23869, 5)/* GLSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {3,IR(0, 0),IR(23874, 9)/* OpenCL_C */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {4,IR(0, 0),IR(23883, 11)/* OpenCL_CPP */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {5,IR(0, 0),IR(23894, 5)/* HLSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {6,IR(0, 0),IR(23899, 15)/* CPP_for_OpenCL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {7,IR(0, 0),IR(23914, 5)/* SYCL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {8,IR(0, 0),IR(23919, 7)/* HERO_C */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {9,IR(0, 0),IR(23926, 5)/* NZSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {10,IR(0, 0),IR(23931, 5)/* WGSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {11,IR(0, 0),IR(23936, 6)/* Slang */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {12,IR(0, 0),IR(23942, 4)/* Zig */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {13,IR(0, 0),IR(23946, 5)/* Rust */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {0,IR(0, 0),IR(23951, 16)/* UniformConstant */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {1,IR(0, 0),IR(23967, 6)/* Input */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {2,IR(0, 0),IR(15038, 8)/* Uniform */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {3,IR(0, 0),IR(23973, 7)/* Output */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4,IR(0, 0),IR(23718, 10)/* Workgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5,IR(0, 0),IR(23980, 15)/* CrossWorkgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {6,IR(0, 0),IR(23995, 8)/* Private */,IR(0, 0),IR(188, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {7,IR(0, 0),IR(24003, 9)/* Function */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {8,IR(0, 0),IR(24012, 8)/* Generic */,IR(0, 0),IR(190, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {9,IR(0, 0),IR(24020, 13)/* PushConstant */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {10,IR(0, 0),IR(24033, 14)/* AtomicCounter */,IR(0, 0),IR(80, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {11,IR(0, 0),IR(24047, 6)/* Image */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {12,IR(0, 0),IR(24053, 14)/* StorageBuffer */,IR(0, 0),IR(3, 1),IR(158, 2),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4172,IR(0, 0),IR(24067, 13)/* TileImageEXT */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4491,IR(0, 0),IR(24080, 19)/* TileAttachmentQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5068,IR(0, 0),IR(24099, 16)/* NodePayloadAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5328,IR(0, 0),IR(24115, 16)/* CallableDataKHR */,IR(86, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5329,IR(0, 0),IR(24146, 24)/* IncomingCallableDataKHR */,IR(87, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5338,IR(0, 0),IR(24193, 14)/* RayPayloadKHR */,IR(88, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5339,IR(0, 0),IR(24220, 16)/* HitAttributeKHR */,IR(89, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5342,IR(0, 0),IR(24251, 22)/* IncomingRayPayloadKHR */,IR(90, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5343,IR(0, 0),IR(24294, 22)/* ShaderRecordBufferKHR */,IR(91, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5349,IR(0, 0),IR(24337, 22)/* PhysicalStorageBuffer */,IR(92, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5385,IR(0, 0),IR(24384, 21)/* HitObjectAttributeNV */,IR(0, 0),IR(117, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5402,IR(0, 0),IR(24405, 24)/* TaskPayloadWorkgroupEXT */,IR(0, 0),IR(53, 1),IR(23, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5605,IR(0, 0),IR(24429, 17)/* CodeSectionINTEL */,IR(0, 0),IR(191, 1),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5936,IR(0, 0),IR(24446, 16)/* DeviceOnlyINTEL */,IR(0, 0),IR(192, 1),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5937,IR(0, 0),IR(24462, 14)/* HostOnlyINTEL */,IR(0, 0),IR(192, 1),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {0,IR(0, 0),IR(21504, 14)/* UncachedINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {1,IR(0, 0),IR(24476, 18)/* WriteThroughINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {2,IR(0, 0),IR(24494, 15)/* WriteBackINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {3,IR(0, 0),IR(21530, 15)/* StreamingINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {0,IR(0, 0),IR(13749, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {1,IR(10, 1),IR(24509, 11)/* TensorView */,IR(0, 0),IR(193, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {2,IR(10, 1),IR(24520, 11)/* DecodeFunc */,IR(0, 0),IR(194, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {0,IR(0, 0),IR(24531, 10)/* Undefined */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {1,IR(0, 0),IR(14996, 9)/* Constant */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {2,IR(0, 0),IR(23351, 12)/* ClampToEdge */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {3,IR(0, 0),IR(23369, 7)/* Repeat */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {4,IR(0, 0),IR(23376, 15)/* RepeatMirrored */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
}};

// Maps an operand kind to possible operands for that kind.
// The result is an IndexRange into kOperandsByValue, and the operands
// are sorted by value within that span.
// An optional variant of a kind maps to the details for the corresponding
// concrete operand kind.
IndexRange OperandByValueRangeForKind(spv_operand_type_t type) {
  switch(type) {
    case SPV_OPERAND_TYPE_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_ADDRESSING_MODEL: return IR(3, 4);
    case SPV_OPERAND_TYPE_BUILT_IN: return IR(7, 126);
    case SPV_OPERAND_TYPE_CAPABILITY: return IR(133, 261);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(394, 8);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(402, 3);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(405, 2);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS: return IR(407, 19);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION: return IR(426, 10);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(436, 4);
    case SPV_OPERAND_TYPE_COMPONENT_TYPE: return IR(440, 15);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT: return IR(455, 4);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS: return IR(459, 6);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE: return IR(465, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE: return IR(468, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT: return IR(471, 4);
    case SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(475, 8);
    case SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE: return IR(483, 3);
    case SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS: return IR(486, 16);
    case SPV_OPERAND_TYPE_DEBUG_OPERATION: return IR(502, 9);
    case SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER: return IR(511, 3);
    case SPV_OPERAND_TYPE_DECORATION: return IR(514, 142);
    case SPV_OPERAND_TYPE_DIMENSIONALITY: return IR(656, 8);
    case SPV_OPERAND_TYPE_EXECUTION_MODE: return IR(664, 96);
    case SPV_OPERAND_TYPE_EXECUTION_MODEL: return IR(760, 17);
    case SPV_OPERAND_TYPE_FPDENORM_MODE: return IR(777, 2);
    case SPV_OPERAND_TYPE_FPENCODING: return IR(779, 1);
    case SPV_OPERAND_TYPE_FPOPERATION_MODE: return IR(780, 2);
    case SPV_OPERAND_TYPE_FP_FAST_MATH_MODE: return IR(782, 9);
    case SPV_OPERAND_TYPE_FP_ROUNDING_MODE: return IR(791, 4);
    case SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE: return IR(795, 4);
    case SPV_OPERAND_TYPE_FUNCTION_CONTROL: return IR(799, 6);
    case SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE: return IR(805, 9);
    case SPV_OPERAND_TYPE_GROUP_OPERATION: return IR(814, 7);
    case SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER: return IR(821, 4);
    case SPV_OPERAND_TYPE_IMAGE: return IR(825, 17);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE: return IR(842, 26);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER: return IR(868, 20);
    case SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER: return IR(888, 2);
    case SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS: return IR(890, 3);
    case SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO: return IR(893, 2);
    case SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS: return IR(895, 2);
    case SPV_OPERAND_TYPE_LINKAGE_TYPE: return IR(897, 3);
    case SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL: return IR(900, 5);
    case SPV_OPERAND_TYPE_LOOP_CONTROL: return IR(905, 20);
    case SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(925, 15);
    case SPV_OPERAND_TYPE_MEMORY_ACCESS: return IR(940, 9);
    case SPV_OPERAND_TYPE_MEMORY_MODEL: return IR(949, 4);
    case SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID: return IR(953, 15);
    case SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS: return IR(968, 1);
    case SPV_OPERAND_TYPE_OVERFLOW_MODES: return IR(969, 4);
    case SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT: return IR(973, 1);
    case SPV_OPERAND_TYPE_QUANTIZATION_MODES: return IR(974, 8);
    case SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS: return IR(982, 3);
    case SPV_OPERAND_TYPE_RAY_FLAGS: return IR(985, 12);
    case SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE: return IR(997, 2);
    case SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE: return IR(999, 3);
    case SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION: return IR(1002, 2);
    case SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE: return IR(1004, 5);
    case SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE: return IR(1009, 2);
    case SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT: return IR(1011, 42);
    case SPV_OPERAND_TYPE_SCOPE_ID: return IR(1053, 7);
    case SPV_OPERAND_TYPE_SELECTION_CONTROL: return IR(1060, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS: return IR(1063, 1);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(1064, 8);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(1072, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(1075, 2);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS: return IR(1077, 20);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION: return IR(1097, 10);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(1107, 4);
    case SPV_OPERAND_TYPE_SOURCE_LANGUAGE: return IR(1111, 14);
    case SPV_OPERAND_TYPE_STORAGE_CLASS: return IR(1125, 28);
    case SPV_OPERAND_TYPE_STORE_CACHE_CONTROL: return IR(1153, 4);
    case SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS: return IR(1157, 3);
    case SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE: return IR(1160, 5);
    case SPV_OPERAND_TYPE_OPTIONAL_IMAGE: return IR(825, 17);
    case SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS: return IR(940, 9);
    case SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT: return IR(973, 1);
    case SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS: return IR(459, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(925, 15);
    case SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS: return IR(982, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_FPENCODING: return IR(779, 1);
    default: break;
  }
  return IR(0,0);
}

// Operand names and index into kOperandsByValue, ordered by (operand kind, name)
// The fields in order are:
//   name, either the primary name or an alias, indexing into kStrings
//   index into the kOperandsByValue array
static const std::array<NameIndex, 1259> kOperandNames{{
  {IR(4468, 9), 0}, // 0 ReadOnly in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4494, 10), 2}, // 1 ReadWrite in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4484, 10), 1}, // 2 WriteOnly in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4504, 8), 3}, // 3 Logical in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4512, 11), 4}, // 4 Physical32 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4533, 11), 5}, // 5 Physical64 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4544, 24), 6}, // 6 PhysicalStorageBuffer64 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4568, 27), 6}, // 7 PhysicalStorageBuffer64EXT in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(6478, 13), 92}, // 8 BaryCoordKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6491, 12), 92}, // 9 BaryCoordNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5873, 20), 68}, // 10 BaryCoordNoPerspAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5893, 28), 69}, // 11 BaryCoordNoPerspCentroidAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6526, 20), 93}, // 12 BaryCoordNoPerspKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6546, 19), 93}, // 13 BaryCoordNoPerspNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5921, 26), 70}, // 14 BaryCoordNoPerspSampleAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6018, 22), 74}, // 15 BaryCoordPullModelAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5947, 19), 71}, // 16 BaryCoordSmoothAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5966, 27), 72}, // 17 BaryCoordSmoothCentroidAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5993, 25), 73}, // 18 BaryCoordSmoothSampleAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5677, 13), 59}, // 19 BaseInstance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5651, 11), 58}, // 20 BaseVertex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4652, 13), 9}, // 21 ClipDistance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6385, 22), 87}, // 22 ClipDistancePerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7684, 12), 131}, // 23 ClusterIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5415, 13), 49}, // 24 CoreCountARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5389, 10), 48}, // 25 CoreIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5428, 13), 50}, // 26 CoreMaxIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4665, 13), 10}, // 27 CullDistance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6407, 22), 88}, // 28 CullDistancePerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7737, 12), 132}, // 29 CullMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6733, 17), 99}, // 30 CullPrimitiveEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7137, 17), 113}, // 31 CurrentRayTimeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5747, 12), 62}, // 32 DeviceIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5690, 10), 60}, // 33 DrawIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5179, 22), 37}, // 34 EnqueuedWorkgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4949, 10), 21}, // 35 FragCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5035, 10), 27}, // 36 FragDepth in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6611, 23), 95}, // 37 FragInvocationCountEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6565, 12), 94}, // 38 FragSizeEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6040, 18), 75}, // 39 FragStencilRefEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6577, 15), 94}, // 40 FragmentSizeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4970, 12), 23}, // 41 FrontFacing in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6297, 16), 83}, // 42 FullyCoveredEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5120, 19), 33}, // 43 GlobalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5214, 15), 39}, // 44 GlobalLinearId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5201, 13), 38}, // 45 GlobalOffset in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5168, 11), 36}, // 46 GlobalSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5045, 17), 28}, // 47 HelperInvocation in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7439, 11), 120}, // 48 HitIsLSSNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7397, 14), 119}, // 49 HitIsSphereNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7619, 33), 128}, // 50 HitKindBackFacingMicroTriangleNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7585, 34), 127}, // 51 HitKindFrontFacingMicroTriangleNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7116, 11), 112}, // 52 HitKindKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7127, 10), 112}, // 53 HitKindNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7567, 18), 126}, // 54 HitLSSPositionsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7670, 14), 130}, // 55 HitLSSRadiiNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7301, 37), 116}, // 56 HitMicroTriangleVertexBarycentricsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7234, 34), 115}, // 57 HitMicroTriangleVertexPositionsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7489, 20), 121}, // 58 HitSpherePositionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7652, 18), 129}, // 59 HitSphereRadiusNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7109, 7), 111}, // 60 HitTNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7177, 30), 114}, // 61 HitTriangleVertexPositionsKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7338, 20), 117}, // 62 IncomingRayFlagsKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7358, 19), 117}, // 63 IncomingRayFlagsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6998, 23), 108}, // 64 InstanceCustomIndexKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7021, 22), 108}, // 65 InstanceCustomIndexNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4687, 11), 12}, // 66 InstanceId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5375, 14), 47}, // 67 InstanceIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4788, 13), 14}, // 68 InvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6634, 22), 95}, // 69 InvocationsPerPixelNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6750, 12), 100}, // 70 LaunchIdKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6762, 11), 100}, // 71 LaunchIdNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6773, 14), 101}, // 72 LaunchSizeKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6787, 13), 101}, // 73 LaunchSizeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4801, 6), 15}, // 74 Layer in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6429, 15), 89}, // 75 LayerPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5102, 18), 32}, // 76 LocalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5139, 21), 34}, // 77 LocalInvocationIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6444, 16), 90}, // 78 MeshViewCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6460, 18), 91}, // 79 MeshViewIndicesNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5305, 21), 43}, // 80 NumEnqueuedSubgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5292, 13), 42}, // 81 NumSubgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5062, 14), 29}, // 82 NumWorkgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6913, 22), 105}, // 83 ObjectRayDirectionKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6935, 21), 105}, // 84 ObjectRayDirectionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6876, 19), 104}, // 85 ObjectRayOriginKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6895, 18), 104}, // 86 ObjectRayOriginNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7043, 17), 109}, // 87 ObjectToWorldKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7060, 16), 109}, // 88 ObjectToWorldNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4935, 14), 20}, // 89 PatchVertices in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4959, 11), 22}, // 90 PointCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4642, 10), 8}, // 91 PointSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4626, 9), 7}, // 92 Position in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6237, 18), 81}, // 93 PositionPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6349, 17), 85}, // 94 PrimitiveCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4698, 12), 13}, // 95 PrimitiveId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6366, 19), 86}, // 96 PrimitiveIndicesNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6681, 24), 97}, // 97 PrimitiveLineIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6656, 25), 96}, // 98 PrimitivePointIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5700, 24), 61}, // 99 PrimitiveShadingRateKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6705, 28), 98}, // 100 PrimitiveTriangleIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7377, 20), 118}, // 101 RayGeometryIndexKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6977, 11), 107}, // 102 RayTmaxKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6988, 10), 107}, // 103 RayTmaxNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6956, 11), 106}, // 104 RayTminKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6967, 10), 106}, // 105 RayTminNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6075, 29), 76}, // 106 RemainingRecursionLevelsAMDX in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7541, 10), 123}, // 107 SMCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7560, 7), 125}, // 108 SMIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4982, 9), 24}, // 109 SampleId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5024, 11), 26}, // 110 SampleMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5009, 15), 25}, // 111 SamplePosition in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6174, 20), 79}, // 112 SecondaryPositionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6213, 24), 80}, // 113 SecondaryViewportMaskNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6122, 16), 77}, // 114 ShaderIndexAMDX in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5791, 15), 64}, // 115 ShadingRateKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5464, 15), 53}, // 116 SubgroupEqMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5479, 18), 53}, // 117 SubgroupEqMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5519, 15), 54}, // 118 SubgroupGeMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5534, 18), 54}, // 119 SubgroupGeMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5552, 15), 55}, // 120 SubgroupGtMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5567, 18), 55}, // 121 SubgroupGtMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5326, 11), 44}, // 122 SubgroupId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5585, 15), 56}, // 123 SubgroupLeMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5600, 18), 56}, // 124 SubgroupLeMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5337, 26), 45}, // 125 SubgroupLocalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5618, 15), 57}, // 126 SubgroupLtMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5633, 18), 57}, // 127 SubgroupLtMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5276, 16), 41}, // 128 SubgroupMaxSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5229, 13), 40}, // 129 SubgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6337, 12), 84}, // 130 TaskCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4925, 10), 19}, // 131 TessCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4910, 15), 18}, // 132 TessLevelInner in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4895, 15), 17}, // 133 TessLevelOuter in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5855, 18), 67}, // 134 TileApronSizeQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5837, 18), 66}, // 135 TileDimensionQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5806, 15), 65}, // 136 TileOffsetQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4678, 9), 11}, // 137 VertexId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5363, 12), 46}, // 138 VertexIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5771, 10), 63}, // 139 ViewIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4847, 14), 16}, // 140 ViewportIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6138, 15), 78}, // 141 ViewportMaskNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6275, 22), 82}, // 142 ViewportMaskPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5441, 10), 51}, // 143 WarpIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7551, 9), 124}, // 144 WarpIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5451, 13), 52}, // 145 WarpMaxIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7509, 13), 122}, // 146 WarpsPerSMNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5160, 8), 35}, // 147 WorkDim in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5090, 12), 31}, // 148 WorkgroupId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5076, 14), 30}, // 149 WorkgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6835, 21), 103}, // 150 WorldRayDirectionKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6856, 20), 103}, // 151 WorldRayDirectionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6800, 18), 102}, // 152 WorldRayOriginKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6818, 17), 102}, // 153 WorldRayOriginNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7076, 17), 110}, // 154 WorldToObjectKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7093, 16), 110}, // 155 WorldToObjectNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4523, 10), 137}, // 156 Addresses in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12547, 34), 350}, // 157 ArbitraryPrecisionFixedPointINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12235, 37), 338}, // 158 ArbitraryPrecisionFloatingPointINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12203, 32), 337}, // 159 ArbitraryPrecisionIntegersINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13097, 19), 374}, // 160 ArithmeticFenceEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11868, 9), 323}, // 161 AsmINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13014, 20), 370}, // 162 AtomicFloat16AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11923, 23), 326}, // 163 AtomicFloat16MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11396, 22), 301}, // 164 AtomicFloat16VectorNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12930, 20), 366}, // 165 AtomicFloat32AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11877, 23), 324}, // 166 AtomicFloat32MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12950, 20), 367}, // 167 AtomicFloat64AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11900, 23), 325}, // 168 AtomicFloat64MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7917, 14), 153}, // 169 AtomicStorage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9149, 17), 223}, // 170 AtomicStorageOps in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13055, 24), 372}, // 171 BFloat16ConversionINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9698, 29), 254}, // 172 BFloat16CooperativeMatrixKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9676, 22), 253}, // 173 BFloat16DotProductKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9660, 16), 252}, // 174 BFloat16TypeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11333, 18), 298}, // 175 BindlessTextureNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12874, 16), 363}, // 176 BitInstructions in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12646, 19), 354}, // 177 BlockingPipesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13579, 19), 392}, // 178 CacheControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4652, 13), 163}, // 179 ClipDistance in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10991, 32), 287}, // 180 ComputeDerivativeGroupLinearKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11023, 31), 287}, // 181 ComputeDerivativeGroupLinearNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9871, 31), 266}, // 182 ComputeDerivativeGroupQuadsKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9902, 30), 266}, // 183 ComputeDerivativeGroupQuadsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11573, 30), 310}, // 184 CooperativeMatrixBlockLoadsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11466, 31), 307}, // 185 CooperativeMatrixConversionsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9727, 21), 361}, // 186 CooperativeMatrixKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8790, 28), 207}, // 187 CooperativeMatrixLayoutsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11079, 20), 289}, // 188 CooperativeMatrixNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11497, 40), 308}, // 189 CooperativeMatrixPerElementOperationsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11436, 30), 306}, // 190 CooperativeMatrixReductionsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11537, 36), 309}, // 191 CooperativeMatrixTensorAddressingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11376, 20), 300}, // 192 CooperativeVectorNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11603, 28), 311}, // 193 CooperativeVectorTrainingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5399, 16), 203}, // 194 CoreBuiltinsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4665, 13), 164}, // 195 CullDistance in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13034, 21), 371}, // 196 DebugInfoModuleINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11202, 25), 294}, // 197 DemoteToHelperInvocation in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11227, 28), 294}, // 198 DemoteToHelperInvocationEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9288, 18), 229}, // 199 DenormFlushToZero in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9273, 15), 228}, // 200 DenormPreserve in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8364, 18), 182}, // 201 DerivativeControl in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7888, 14), 151}, // 202 DeviceEnqueue in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5759, 12), 219}, // 203 DeviceGroup in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11255, 23), 295}, // 204 DisplacementMicromapNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12825, 11), 359}, // 205 DotProduct in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12719, 22), 357}, // 206 DotProductInput4x8Bit in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12741, 25), 357}, // 207 DotProductInput4x8BitKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12766, 28), 358}, // 208 DotProductInput4x8BitPacked in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12794, 31), 358}, // 209 DotProductInput4x8BitPackedKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12678, 19), 356}, // 210 DotProductInputAll in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12697, 22), 356}, // 211 DotProductInputAllKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12836, 14), 359}, // 212 DotProductKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5662, 15), 210}, // 213 DrawParameters in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11980, 16), 329}, // 214 ExpectAssumeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12183, 20), 336}, // 215 FPFastMathModeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13231, 28), 380}, // 216 FPGAArgumentInterfacesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12523, 24), 349}, // 217 FPGABufferLocationINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12396, 27), 344}, // 218 FPGAClusterAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13116, 29), 375}, // 219 FPGAClusterAttributesV2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12437, 20), 346}, // 220 FPGADSPControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12483, 40), 348}, // 221 FPGAInvocationPipeliningAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12346, 26), 342}, // 222 FPGAKernelAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13145, 28), 376}, // 223 FPGAKernelAttributesv2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13207, 24), 379}, // 224 FPGALatencyControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12302, 22), 340}, // 225 FPGALoopControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12372, 24), 343}, // 226 FPGAMemoryAccessesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12157, 26), 335}, // 227 FPGAMemoryAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12665, 13), 355}, // 228 FPGARegINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13191, 16), 378}, // 229 FPMaxErrorINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7802, 8), 142}, // 230 Float16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7788, 14), 141}, // 231 Float16Buffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9541, 16), 243}, // 232 Float16ImageAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7810, 8), 143}, // 233 Float64 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12915, 15), 365}, // 234 FloatControls2 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11776, 23), 319}, // 235 FloatingPointModeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6503, 23), 265}, // 236 FragmentBarycentricKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9849, 22), 265}, // 237 FragmentBarycentricNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6592, 19), 267}, // 238 FragmentDensityEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6313, 24), 261}, // 239 FragmentFullyCoveredEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9579, 16), 245}, // 240 FragmentMaskAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11170, 32), 293}, // 241 FragmentShaderPixelInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11099, 33), 290}, // 242 FragmentShaderSampleInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11132, 38), 291}, // 243 FragmentShaderShadingRateInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5724, 23), 208}, // 244 FragmentShadingRateKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12131, 26), 334}, // 245 FunctionFloatControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11822, 22), 321}, // 246 FunctionPointersINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8209, 15), 169}, // 247 GenericPointer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4710, 9), 135}, // 248 Geometry in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7959, 18), 156}, // 249 GeometryPointSize in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9777, 28), 256}, // 250 GeometryShaderPassthroughNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8422, 16), 185}, // 251 GeometryStreams in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13289, 35), 382}, // 252 GlobalVariableFPGADecorationsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13259, 30), 381}, // 253 GlobalVariableHostAccessINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5242, 16), 192}, // 254 GroupNonUniform in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8561, 26), 194}, // 255 GroupNonUniformArithmetic in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5497, 22), 195}, // 256 GroupNonUniformBallot in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8641, 25), 198}, // 257 GroupNonUniformClustered in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9946, 29), 268}, // 258 GroupNonUniformPartitionedNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8666, 20), 199}, // 259 GroupNonUniformQuad in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12890, 25), 364}, // 260 GroupNonUniformRotateKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8587, 23), 196}, // 261 GroupNonUniformShuffle in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8610, 31), 197}, // 262 GroupNonUniformShuffleRelative in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8541, 20), 193}, // 263 GroupNonUniformVote in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13501, 26), 389}, // 264 GroupUniformArithmeticKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7881, 7), 150}, // 265 Groups in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12633, 13), 353}, // 266 IOPipesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8278, 8), 175}, // 267 Image1D in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7837, 11), 146}, // 268 ImageBasic in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8300, 12), 178}, // 269 ImageBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8155, 15), 165}, // 270 ImageCubeArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9832, 17), 263}, // 271 ImageFootprintNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9557, 22), 244}, // 272 ImageGatherBiasLodAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7977, 20), 157}, // 273 ImageGatherExtended in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8312, 13), 179}, // 274 ImageMSArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7863, 12), 148}, // 275 ImageMipmap in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8353, 11), 181}, // 276 ImageQuery in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7848, 15), 147}, // 277 ImageReadWrite in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9595, 21), 247}, // 278 ImageReadWriteLodAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8187, 10), 167}, // 279 ImageRect in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11844, 24), 322}, // 280 IndirectReferencesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8229, 16), 171}, // 281 InputAttachment in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10061, 36), 271}, // 282 InputAttachmentArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10097, 39), 271}, // 283 InputAttachmentArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10602, 39), 278}, // 284 InputAttachmentArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10641, 42), 278}, // 285 InputAttachmentArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7931, 6), 154}, // 286 Int16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7818, 6), 144}, // 287 Int64 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7824, 13), 145}, // 288 Int64Atomics in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9616, 14), 248}, // 289 Int64ImageEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8224, 5), 170}, // 290 Int8 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11799, 23), 320}, // 291 IntegerFunctions2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8382, 22), 183}, // 292 InterpolationFunction in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4477, 7), 139}, // 293 Kernel in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12324, 22), 341}, // 294 KernelAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7771, 8), 138}, // 295 Linkage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7902, 15), 152}, // 296 LiteralSampler in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12970, 20), 368}, // 297 LongCompositesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12423, 14), 345}, // 298 LoopFuseINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13554, 25), 391}, // 299 MaskedGatherScatterINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7764, 7), 133}, // 300 Matrix in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12457, 26), 347}, // 301 MemoryAccessAliasingINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4773, 15), 264}, // 302 MeshShadingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4759, 14), 262}, // 303 MeshShadingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8261, 7), 173}, // 304 MinLod in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5781, 10), 220}, // 305 MultiView in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4861, 14), 188}, // 306 MultiViewport in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8516, 13), 190}, // 307 NamedBarrier in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12990, 11), 369}, // 308 OptNoneEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13001, 13), 369}, // 309 OptNoneINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6255, 20), 260}, // 310 PerViewAttributesNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4595, 31), 286}, // 311 PhysicalStorageBufferAddresses in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10957, 34), 286}, // 312 PhysicalStorageBufferAddressesEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8529, 12), 191}, // 313 PipeStorage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7875, 6), 149}, // 314 Pipes in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9645, 15), 251}, // 315 QuadControlKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11418, 18), 303}, // 316 RawAccessChainsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7749, 15), 360}, // 317 RayCullMaskKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9386, 12), 234}, // 318 RayQueryKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11351, 25), 299}, // 319 RayQueryPositionFetchKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9363, 23), 233}, // 320 RayQueryProvisionalKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7696, 41), 312}, // 321 RayTracingClusterAccelerationStructureNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7268, 33), 302}, // 322 RayTracingDisplacementMicromapNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4745, 14), 237}, // 323 RayTracingKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7450, 39), 305}, // 324 RayTracingLinearSweptSpheresGeometryNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7154, 23), 283}, // 325 RayTracingMotionBlurNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4732, 13), 282}, // 326 RayTracingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11278, 29), 296}, // 327 RayTracingOpacityMicromapEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7207, 27), 281}, // 328 RayTracingPositionFetchKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11054, 25), 288}, // 329 RayTracingProvisionalKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7411, 28), 304}, // 330 RayTracingSpheresGeometryNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9417, 32), 236}, // 331 RayTraversalPrimitiveCullingKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13598, 20), 393}, // 332 RegisterLimitsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12850, 24), 362}, // 333 ReplicatedCompositesEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11755, 21), 318}, // 334 RoundToInfinityINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9331, 16), 231}, // 335 RoundingModeRTE in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9347, 16), 232}, // 336 RoundingModeRTZ in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12604, 29), 352}, // 337 RuntimeAlignedAttributeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10012, 23), 270}, // 338 RuntimeDescriptorArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10035, 26), 270}, // 339 RuntimeDescriptorArrayEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9748, 29), 255}, // 340 SampleMaskOverrideCoverageNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9166, 28), 224}, // 341 SampleMaskPostDepthCoverage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4991, 18), 166}, // 342 SampleRateShading in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8268, 10), 174}, // 343 Sampled1D in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8286, 14), 177}, // 344 SampledBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8170, 17), 176}, // 345 SampledCubeArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8055, 33), 160}, // 346 SampledImageArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10375, 36), 275}, // 347 SampledImageArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10411, 39), 275}, // 348 SampledImageArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8197, 12), 168}, // 349 SampledRect in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4635, 7), 134}, // 350 Shader in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9630, 15), 249}, // 351 ShaderClockKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6104, 18), 250}, // 352 ShaderEnqueueAMDX in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11307, 26), 297}, // 353 ShaderInvocationReorderNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4807, 12), 200}, // 354 ShaderLayer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9975, 17), 269}, // 355 ShaderNonUniform in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9992, 20), 269}, // 356 ShaderNonUniformEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7522, 19), 292}, // 357 ShaderSMBuiltinsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6194, 19), 259}, // 358 ShaderStereoViewNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4875, 20), 201}, // 359 ShaderViewportIndex in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4819, 28), 257}, // 360 ShaderViewportIndexLayerEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9805, 27), 257}, // 361 ShaderViewportIndexLayerNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6153, 21), 258}, // 362 ShaderViewportMaskNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9932, 14), 267}, // 363 ShadingRateNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9306, 25), 230}, // 364 SignedZeroInfNanPreserve in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8245, 16), 172}, // 365 SparseResidency in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13079, 18), 373}, // 366 SplitBarrierINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6058, 17), 246}, // 367 StencilExportEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8954, 25), 215}, // 368 StorageBuffer16BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9194, 24), 225}, // 369 StorageBuffer8BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8088, 34), 161}, // 370 StorageBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10450, 37), 276}, // 371 StorageBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10487, 40), 276}, // 372 StorageBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8122, 33), 162}, // 373 StorageImageArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10527, 36), 277}, // 374 StorageImageArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10563, 39), 277}, // 375 StorageImageArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8325, 28), 180}, // 376 StorageImageExtendedFormats in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7997, 24), 158}, // 377 StorageImageMultisample in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8438, 30), 186}, // 378 StorageImageReadWithoutFormat in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8468, 31), 187}, // 379 StorageImageWriteWithoutFormat in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9081, 21), 218}, // 380 StorageInputOutput16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9059, 22), 217}, // 381 StoragePushConstant16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9252, 21), 227}, // 382 StoragePushConstant8 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10217, 39), 273}, // 383 StorageTexelBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10256, 42), 273}, // 384 StorageTexelBufferArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10770, 42), 280}, // 385 StorageTexelBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10812, 45), 280}, // 386 StorageTexelBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9042, 17), 216}, // 387 StorageUniform16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8979, 28), 215}, // 388 StorageUniformBufferBlock16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13352, 23), 384}, // 389 Subgroup2DBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13375, 30), 385}, // 390 Subgroup2DBlockTransformINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13405, 30), 386}, // 391 Subgroup2DBlockTransposeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12067, 39), 332}, // 392 SubgroupAvcMotionEstimationChromaINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11996, 33), 330}, // 393 SubgroupAvcMotionEstimationINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12029, 38), 331}, // 394 SubgroupAvcMotionEstimationIntraINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5258, 18), 209}, // 395 SubgroupBallotKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11671, 27), 315}, // 396 SubgroupBufferBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13324, 28), 383}, // 397 SubgroupBufferPrefetchINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8499, 17), 189}, // 398 SubgroupDispatch in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11698, 26), 316}, // 399 SubgroupImageBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11724, 31), 317}, // 400 SubgroupImageMediaBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13435, 38), 387}, // 401 SubgroupMatrixMultiplyAccumulateINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11650, 21), 314}, // 402 SubgroupShuffleINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8938, 16), 214}, // 403 SubgroupVoteKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13173, 18), 377}, // 404 TaskSequenceINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11631, 19), 313}, // 405 TensorAddressingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13527, 27), 390}, // 406 TensorFloat32RoundingINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13473, 28), 388}, // 407 TernaryBitwiseFunctionINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4719, 13), 136}, // 408 Tessellation in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7937, 22), 155}, // 409 TessellationPointSize in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9518, 23), 242}, // 410 TextureBlockMatch2QCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9496, 22), 240}, // 411 TextureBlockMatchQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9475, 21), 239}, // 412 TextureBoxFilterQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9449, 26), 238}, // 413 TextureSampleWeightedQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8704, 28), 204}, // 414 TileImageColorReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8732, 28), 205}, // 415 TileImageDepthReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8760, 30), 206}, // 416 TileImageStencilReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5821, 16), 241}, // 417 TileShadingQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8404, 18), 184}, // 418 TransformFeedback in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12581, 23), 351}, // 419 USMStorageClassesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9007, 35), 216}, // 420 UniformAndStorageBuffer16BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9218, 34), 226}, // 421 UniformAndStorageBuffer8BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8021, 34), 159}, // 422 UniformBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10298, 37), 274}, // 423 UniformBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10335, 40), 274}, // 424 UniformBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8686, 18), 202}, // 425 UniformDecoration in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10136, 39), 272}, // 426 UniformTexelBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10175, 42), 272}, // 427 UniformTexelBufferArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10683, 42), 279}, // 428 UniformTexelBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10725, 45), 279}, // 429 UniformTexelBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12272, 30), 339}, // 430 UnstructuredLoopControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9398, 19), 235}, // 431 UntypedPointersKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12106, 25), 333}, // 432 VariableLengthArrayINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9132, 17), 222}, // 433 VariablePointers in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9102, 30), 221}, // 434 VariablePointersStorageBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7779, 9), 140}, // 435 Vector16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11965, 15), 328}, // 436 VectorAnyINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11946, 19), 327}, // 437 VectorComputeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10857, 18), 284}, // 438 VulkanMemoryModel in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10896, 29), 285}, // 439 VulkanMemoryModelDeviceScope in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10925, 32), 285}, // 440 VulkanMemoryModelDeviceScopeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10875, 21), 284}, // 441 VulkanMemoryModelKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8894, 44), 213}, // 442 WorkgroupMemoryExplicitLayout16BitAccessKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8851, 43), 212}, // 443 WorkgroupMemoryExplicitLayout8BitAccessKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8818, 33), 211}, // 444 WorkgroupMemoryExplicitLayoutKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13630, 8), 395}, // 445 Address in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13638, 8), 396}, // 446 Boolean in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13646, 6), 397}, // 447 Float in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13652, 7), 398}, // 448 Signed in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13659, 11), 399}, // 449 SignedChar in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13670, 9), 400}, // 450 Unsigned in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13679, 13), 401}, // 451 UnsignedChar in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13618, 12), 394}, // 452 Unspecified in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13692, 6), 402}, // 453 Class in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13698, 10), 403}, // 454 Structure in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13708, 6), 404}, // 455 Union in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13729, 20), 406}, // 456 ImportedDeclaration in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(13714, 15), 405}, // 457 ImportedModule in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(13838, 15), 414}, // 458 FlagArtificial in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13853, 13), 415}, // 459 FlagExplicit in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13826, 12), 413}, // 460 FlagFwdDecl in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13916, 21), 419}, // 461 FlagIndirectVariable in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13809, 17), 412}, // 462 FlagIsDefinition in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13993, 16), 423}, // 463 FlagIsEnumClass in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13797, 12), 411}, // 464 FlagIsLocal in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13977, 16), 422}, // 465 FlagIsOptimized in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13770, 14), 409}, // 466 FlagIsPrivate in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13754, 16), 408}, // 467 FlagIsProtected in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13784, 13), 410}, // 468 FlagIsPublic in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13937, 20), 420}, // 469 FlagLValueReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13881, 18), 417}, // 470 FlagObjectPointer in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13866, 15), 416}, // 471 FlagPrototyped in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13957, 20), 421}, // 472 FlagRValueReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13899, 17), 418}, // 473 FlagStaticMember in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14029, 24), 425}, // 474 FlagTypePassByReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14009, 20), 424}, // 475 FlagTypePassByValue in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13749, 5), 407}, // 476 None in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14114, 9), 430}, // 477 BitPiece in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14146, 7), 434}, // 478 Constu in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14053, 6), 426}, // 479 Deref in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14153, 9), 435}, // 480 Fragment in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14064, 6), 428}, // 481 Minus in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14059, 5), 427}, // 482 Plus in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14103, 11), 429}, // 483 PlusUconst in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14135, 11), 433}, // 484 StackValue in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14123, 5), 431}, // 485 Swap in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14128, 7), 432}, // 486 Xderef in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14198, 11), 439}, // 487 AtomicType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14162, 10), 436}, // 488 ConstType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14185, 13), 438}, // 489 RestrictType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14172, 13), 437}, // 490 VolatileType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14209, 10), 440}, // 491 Float16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14219, 10), 441}, // 492 Float32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14229, 10), 442}, // 493 Float64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14397, 12), 453}, // 494 FloatE4M3NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14409, 12), 454}, // 495 FloatE5M2NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14252, 14), 444}, // 496 SignedInt16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14266, 14), 445}, // 497 SignedInt32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14280, 14), 446}, // 498 SignedInt64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14239, 13), 443}, // 499 SignedInt8NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14357, 19), 451}, // 500 SignedInt8PackedNV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14309, 16), 448}, // 501 UnsignedInt16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14325, 16), 449}, // 502 UnsignedInt32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14341, 16), 450}, // 503 UnsignedInt64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14294, 15), 447}, // 504 UnsignedInt8NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14376, 21), 452}, // 505 UnsignedInt8PackedNV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14473, 28), 458}, // 506 ColumnBlockedInterleavedARM in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14433, 15), 456}, // 507 ColumnMajorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14448, 25), 457}, // 508 RowBlockedInterleavedARM in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14421, 12), 455}, // 509 RowMajorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14509, 27), 460}, // 510 MatrixASignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14536, 27), 461}, // 511 MatrixBSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14563, 27), 462}, // 512 MatrixCSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14590, 32), 463}, // 513 MatrixResultSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14501, 8), 459}, // 514 NoneKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14622, 26), 464}, // 515 SaturatingAccumulationKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14659, 4), 467}, // 516 2x2 in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(14652, 7), 466}, // 517 Column in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(14648, 4), 465}, // 518 Row in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(14663, 11), 468}, // 519 MatrixAKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(14685, 21), 470}, // 520 MatrixAccumulatorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(14674, 11), 469}, // 521 MatrixBKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(14717, 14), 472}, // 522 ColumnMajorNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(14731, 21), 473}, // 523 InferencingOptimalNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(14706, 11), 471}, // 524 RowMajorNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(14752, 18), 474}, // 525 TrainingOptimalNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(13630, 8), 476}, // 526 Address in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13638, 8), 477}, // 527 Boolean in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13646, 6), 478}, // 528 Float in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13652, 7), 479}, // 529 Signed in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13659, 11), 480}, // 530 SignedChar in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13670, 9), 481}, // 531 Unsigned in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13679, 13), 482}, // 532 UnsignedChar in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13618, 12), 475}, // 533 Unspecified in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13692, 6), 483}, // 534 Class in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(13698, 10), 484}, // 535 Structure in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(13708, 6), 485}, // 536 Union in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(13838, 15), 493}, // 537 FlagArtificial in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13853, 13), 494}, // 538 FlagExplicit in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13826, 12), 492}, // 539 FlagFwdDecl in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13916, 21), 498}, // 540 FlagIndirectVariable in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13809, 17), 491}, // 541 FlagIsDefinition in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13797, 12), 490}, // 542 FlagIsLocal in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13977, 16), 501}, // 543 FlagIsOptimized in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13770, 14), 488}, // 544 FlagIsPrivate in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13754, 16), 487}, // 545 FlagIsProtected in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13784, 13), 489}, // 546 FlagIsPublic in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13937, 20), 499}, // 547 FlagLValueReference in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13881, 18), 496}, // 548 FlagObjectPointer in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13866, 15), 495}, // 549 FlagPrototyped in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13957, 20), 500}, // 550 FlagRValueReference in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13899, 17), 497}, // 551 FlagStaticMember in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13749, 5), 486}, // 552 None in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14114, 9), 506}, // 553 BitPiece in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14146, 7), 510}, // 554 Constu in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14053, 6), 502}, // 555 Deref in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14064, 6), 504}, // 556 Minus in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14059, 5), 503}, // 557 Plus in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14103, 11), 505}, // 558 PlusUconst in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14135, 11), 509}, // 559 StackValue in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14123, 5), 507}, // 560 Swap in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14128, 7), 508}, // 561 Xderef in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14162, 10), 511}, // 562 ConstType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(14185, 13), 513}, // 563 RestrictType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(14172, 13), 512}, // 564 VolatileType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(16950, 16), 627}, // 565 AliasScopeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14979, 8), 533}, // 566 Aliased in SPV_OPERAND_TYPE_DECORATION
  {IR(16053, 15), 585}, // 567 AliasedPointer in SPV_OPERAND_TYPE_DECORATION
  {IR(16068, 18), 585}, // 568 AliasedPointerEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(15457, 10), 557}, // 569 Alignment in SPV_OPERAND_TYPE_DECORATION
  {IR(15501, 12), 559}, // 570 AlignmentId in SPV_OPERAND_TYPE_DECORATION
  {IR(14830, 12), 520}, // 571 ArrayStride in SPV_OPERAND_TYPE_DECORATION
  {IR(16731, 14), 615}, // 572 BankBitsINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16570, 15), 608}, // 573 BankwidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15134, 8), 546}, // 574 Binding in SPV_OPERAND_TYPE_DECORATION
  {IR(16134, 16), 588}, // 575 BindlessImageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16116, 18), 587}, // 576 BindlessSamplerNV in SPV_OPERAND_TYPE_DECORATION
  {IR(14794, 6), 516}, // 577 Block in SPV_OPERAND_TYPE_DECORATION
  {IR(15597, 22), 565}, // 578 BlockMatchSamplerQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(15575, 22), 564}, // 579 BlockMatchTextureQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(16165, 13), 590}, // 580 BoundImageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16150, 15), 589}, // 581 BoundSamplerNV in SPV_OPERAND_TYPE_DECORATION
  {IR(14800, 12), 517}, // 582 BufferBlock in SPV_OPERAND_TYPE_DECORATION
  {IR(17043, 20), 632}, // 583 BufferLocationINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14911, 8), 525}, // 584 BuiltIn in SPV_OPERAND_TYPE_DECORATION
  {IR(16813, 19), 620}, // 585 BurstCoalesceINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14877, 8), 524}, // 586 CPacked in SPV_OPERAND_TYPE_DECORATION
  {IR(17836, 22), 654}, // 587 CacheControlLoadINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17895, 23), 655}, // 588 CacheControlStoreINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16832, 15), 621}, // 589 CacheSizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14944, 9), 529}, // 590 Centroid in SPV_OPERAND_TYPE_DECORATION
  {IR(16218, 13), 593}, // 591 ClobberINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15005, 9), 536}, // 592 Coherent in SPV_OPERAND_TYPE_DECORATION
  {IR(14821, 9), 519}, // 593 ColMajor in SPV_OPERAND_TYPE_DECORATION
  {IR(15118, 10), 544}, // 594 Component in SPV_OPERAND_TYPE_DECORATION
  {IR(17352, 27), 642}, // 595 ConduitKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14996, 9), 535}, // 596 Constant in SPV_OPERAND_TYPE_DECORATION
  {IR(16364, 14), 600}, // 597 CounterBuffer in SPV_OPERAND_TYPE_DECORATION
  {IR(15142, 14), 547}, // 598 DescriptorSet in SPV_OPERAND_TYPE_DECORATION
  {IR(16847, 28), 622}, // 599 DontStaticallyCoalesceINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16623, 16), 611}, // 600 DoublepumpINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15619, 18), 566}, // 601 ExplicitInterpAMD in SPV_OPERAND_TYPE_DECORATION
  {IR(15327, 15), 553}, // 602 FPFastMathMode in SPV_OPERAND_TYPE_DECORATION
  {IR(17271, 26), 639}, // 603 FPMaxErrorDecorationINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15277, 15), 552}, // 604 FPRoundingMode in SPV_OPERAND_TYPE_DECORATION
  {IR(14933, 5), 527}, // 605 Flat in SPV_OPERAND_TYPE_DECORATION
  {IR(16745, 20), 616}, // 606 ForcePow2DepthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15229, 14), 551}, // 607 FuncParamAttr in SPV_OPERAND_TYPE_DECORATION
  {IR(16275, 21), 596}, // 608 FuncParamIOKindINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16506, 24), 604}, // 609 FunctionDenormModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17116, 31), 634}, // 610 FunctionFloatingPointModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16449, 26), 603}, // 611 FunctionRoundingModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16906, 25), 625}, // 612 FuseLoopsInFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14866, 11), 523}, // 613 GLSLPacked in SPV_OPERAND_TYPE_DECORATION
  {IR(14855, 11), 522}, // 614 GLSLShared in SPV_OPERAND_TYPE_DECORATION
  {IR(16338, 26), 599}, // 615 GlobalVariableOffsetINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16086, 30), 586}, // 616 HitObjectShaderRecordBufferNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16378, 24), 600}, // 617 HlslCounterBufferGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(16415, 19), 601}, // 618 HlslSemanticGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(17695, 16), 651}, // 619 HostAccessINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17063, 19), 633}, // 620 IOPipeStorageINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17772, 28), 653}, // 621 ImplementInRegisterMapINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15128, 6), 545}, // 622 Index in SPV_OPERAND_TYPE_DECORATION
  {IR(17758, 14), 652}, // 623 InitModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16979, 24), 629}, // 624 InitiationIntervalINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15436, 21), 556}, // 625 InputAttachmentIndex in SPV_OPERAND_TYPE_DECORATION
  {IR(14960, 10), 531}, // 626 Invariant in SPV_OPERAND_TYPE_DECORATION
  {IR(17322, 30), 641}, // 627 LatencyControlConstraintINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17297, 25), 640}, // 628 LatencyControlLabelINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15404, 18), 554}, // 629 LinkageAttributes in SPV_OPERAND_TYPE_DECORATION
  {IR(15109, 9), 543}, // 630 Location in SPV_OPERAND_TYPE_DECORATION
  {IR(17410, 33), 644}, // 631 MMHostInterfaceAddressWidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17443, 30), 645}, // 632 MMHostInterfaceDataWidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17473, 28), 646}, // 633 MMHostInterfaceLatencyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17569, 29), 648}, // 634 MMHostInterfaceMaxBurstINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17535, 34), 647}, // 635 MMHostInterfaceReadWriteModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17598, 32), 649}, // 636 MMHostInterfaceWaitRequestINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16931, 19), 626}, // 637 MathOpDSPModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14842, 13), 521}, // 638 MatrixStride in SPV_OPERAND_TYPE_DECORATION
  {IR(15467, 14), 558}, // 639 MaxByteOffset in SPV_OPERAND_TYPE_DECORATION
  {IR(15513, 16), 560}, // 640 MaxByteOffsetId in SPV_OPERAND_TYPE_DECORATION
  {IR(17003, 20), 630}, // 641 MaxConcurrencyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16585, 22), 609}, // 642 MaxPrivateCopiesINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16639, 19), 612}, // 643 MaxReplicatesINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17207, 18), 637}, // 644 MediaBlockIOINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16544, 12), 606}, // 645 MemoryINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16678, 11), 614}, // 646 MergeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16966, 13), 628}, // 647 NoAliasINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15422, 14), 555}, // 648 NoContraction in SPV_OPERAND_TYPE_DECORATION
  {IR(14919, 14), 526}, // 649 NoPerspective in SPV_OPERAND_TYPE_DECORATION
  {IR(15529, 13), 561}, // 650 NoSignedWrap in SPV_OPERAND_TYPE_DECORATION
  {IR(15542, 15), 562}, // 651 NoUnsignedWrap in SPV_OPERAND_TYPE_DECORATION
  {IR(15669, 20), 568}, // 652 NodeMaxPayloadsAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(15637, 32), 567}, // 653 NodeSharesPayloadLimitsWithAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(15026, 12), 538}, // 654 NonReadable in SPV_OPERAND_TYPE_DECORATION
  {IR(15993, 11), 583}, // 655 NonUniform in SPV_OPERAND_TYPE_DECORATION
  {IR(16004, 14), 583}, // 656 NonUniformEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(15014, 12), 537}, // 657 NonWritable in SPV_OPERAND_TYPE_DECORATION
  {IR(16556, 14), 607}, // 658 NumbanksINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15156, 7), 548}, // 659 Offset in SPV_OPERAND_TYPE_DECORATION
  {IR(15837, 19), 575}, // 660 OverrideCoverageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15856, 14), 576}, // 661 PassthroughNV in SPV_OPERAND_TYPE_DECORATION
  {IR(14938, 6), 528}, // 662 Patch in SPV_OPERAND_TYPE_DECORATION
  {IR(15809, 28), 574}, // 663 PayloadDispatchIndirectAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(15784, 25), 573}, // 664 PayloadNodeArraySizeAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(15732, 25), 571}, // 665 PayloadNodeBaseIndexAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(15712, 20), 570}, // 666 PayloadNodeNameAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(15757, 27), 572}, // 667 PayloadNodeSparseArrayAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(15917, 16), 579}, // 668 PerPrimitiveEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(15933, 15), 579}, // 669 PerPrimitiveNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15958, 10), 581}, // 670 PerTaskNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15968, 13), 582}, // 671 PerVertexKHR in SPV_OPERAND_TYPE_DECORATION
  {IR(15981, 12), 582}, // 672 PerVertexNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15948, 10), 580}, // 673 PerViewNV in SPV_OPERAND_TYPE_DECORATION
  {IR(17023, 20), 631}, // 674 PipelineEnableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16875, 14), 623}, // 675 PrefetchINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16192, 26), 592}, // 676 ReferencedIndirectlyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16530, 14), 605}, // 677 RegisterINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17379, 31), 643}, // 678 RegisterMapKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14770, 17), 514}, // 679 RelaxedPrecision in SPV_OPERAND_TYPE_DECORATION
  {IR(14970, 9), 532}, // 680 Restrict in SPV_OPERAND_TYPE_DECORATION
  {IR(16018, 16), 584}, // 681 RestrictPointer in SPV_OPERAND_TYPE_DECORATION
  {IR(16034, 19), 584}, // 682 RestrictPointerEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(14812, 9), 518}, // 683 RowMajor in SPV_OPERAND_TYPE_DECORATION
  {IR(16178, 14), 591}, // 684 SIMTCallINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14953, 7), 530}, // 685 Sample in SPV_OPERAND_TYPE_DECORATION
  {IR(15082, 20), 541}, // 686 SaturatedConversion in SPV_OPERAND_TYPE_DECORATION
  {IR(15889, 28), 578}, // 687 SecondaryViewportRelativeNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16231, 17), 594}, // 688 SideEffectsINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16658, 20), 613}, // 689 SimpleDualPortINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17147, 25), 635}, // 690 SingleElementVectorINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16607, 16), 610}, // 691 SinglepumpINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14787, 7), 515}, // 692 SpecId in SPV_OPERAND_TYPE_DECORATION
  {IR(17630, 26), 650}, // 693 StableKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16323, 15), 598}, // 694 StackCallINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16889, 17), 624}, // 695 StallEnableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17225, 15), 638}, // 696 StallFreeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15102, 7), 542}, // 697 Stream in SPV_OPERAND_TYPE_DECORATION
  {IR(16765, 16), 617}, // 698 StridesizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15689, 23), 569}, // 699 TrackFinishWritingAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16795, 18), 619}, // 700 TrueDualPortINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15038, 8), 539}, // 701 Uniform in SPV_OPERAND_TYPE_DECORATION
  {IR(15072, 10), 540}, // 702 UniformId in SPV_OPERAND_TYPE_DECORATION
  {IR(16402, 13), 601}, // 703 UserSemantic in SPV_OPERAND_TYPE_DECORATION
  {IR(16434, 15), 602}, // 704 UserTypeGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(17172, 35), 636}, // 705 VectorComputeCallableFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16296, 27), 597}, // 706 VectorComputeFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16248, 27), 595}, // 707 VectorComputeVariableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15870, 19), 577}, // 708 ViewportRelativeNV in SPV_OPERAND_TYPE_DECORATION
  {IR(14987, 9), 534}, // 709 Volatile in SPV_OPERAND_TYPE_DECORATION
  {IR(15557, 18), 563}, // 710 WeightTextureQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(16781, 14), 618}, // 711 WordsizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15163, 10), 549}, // 712 XfbBuffer in SPV_OPERAND_TYPE_DECORATION
  {IR(15173, 10), 550}, // 713 XfbStride in SPV_OPERAND_TYPE_DECORATION
  {IR(17918, 3), 656}, // 714 1D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17921, 3), 657}, // 715 2D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17924, 3), 658}, // 716 3D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17937, 7), 661}, // 717 Buffer in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17927, 5), 659}, // 718 Cube in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17932, 5), 660}, // 719 Rect in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17944, 12), 662}, // 720 SubpassData in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17956, 17), 663}, // 721 TileImageDataEXT in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(18768, 15), 716}, // 722 CoalescingAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18399, 15), 694}, // 723 ContractionOff in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9288, 18), 708}, // 724 DenormFlushToZero in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9273, 15), 707}, // 725 DenormPreserve in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18169, 13), 677}, // 726 DepthGreater in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18182, 10), 678}, // 727 DepthLess in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18154, 15), 676}, // 728 DepthReplacing in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18192, 15), 679}, // 729 DepthUnchanged in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19189, 25), 734}, // 730 DerivativeGroupLinearKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19214, 24), 734}, // 731 DerivativeGroupLinearNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19142, 24), 733}, // 732 DerivativeGroupQuadsKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19166, 23), 733}, // 733 DerivativeGroupQuadsNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18716, 29), 714}, // 734 EarlyAndLateFragmentTestsAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18121, 19), 673}, // 735 EarlyFragmentTests in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19699, 18), 753}, // 736 FPFastMathDefault in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18426, 10), 696}, // 737 Finalizer in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19514, 26), 745}, // 738 FloatingPointModeALTINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19540, 27), 746}, // 739 FloatingPointModeIEEEINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18414, 12), 695}, // 740 Initializer in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18243, 11), 683}, // 741 InputLines in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18254, 20), 684}, // 742 InputLinesAdjacency in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18231, 12), 682}, // 743 InputPoints in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18284, 24), 686}, // 744 InputTrianglesAdjacency in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17973, 12), 664}, // 745 Invocations in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18783, 15), 717}, // 746 IsApiEntryAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18314, 9), 688}, // 747 Isolines in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18207, 10), 680}, // 748 LocalSize in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18217, 14), 681}, // 749 LocalSizeHint in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18494, 16), 701}, // 750 LocalSizeHintId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18482, 12), 700}, // 751 LocalSizeId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18798, 21), 718}, // 752 MaxNodeRecursionAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18843, 21), 721}, // 753 MaxNumWorkgroupsAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19589, 16), 748}, // 754 MaxWorkDimINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19567, 22), 747}, // 755 MaxWorkgroupSizeINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19675, 24), 752}, // 756 MaximallyReconvergesKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19790, 22), 757}, // 757 MaximumRegistersINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19812, 24), 758}, // 758 MaximumRegistersIdINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19767, 23), 756}, // 759 NamedBarrierCountINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19887, 27), 759}, // 760 NamedMaximumRegistersINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19605, 20), 749}, // 761 NoGlobalOffsetINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18510, 34), 702}, // 762 NonCoherentColorAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18544, 34), 703}, // 763 NonCoherentDepthAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18578, 36), 704}, // 764 NonCoherentStencilAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18662, 34), 712}, // 765 NonCoherentTileAttachmentReadQCOM in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19625, 22), 750}, // 766 NumSIMDWorkitemsINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18105, 16), 672}, // 767 OriginLowerLeft in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18089, 16), 671}, // 768 OriginUpperLeft in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18351, 16), 691}, // 769 OutputLineStrip in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19074, 15), 731}, // 770 OutputLinesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19089, 14), 731}, // 771 OutputLinesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18338, 13), 690}, // 772 OutputPoints in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19103, 20), 732}, // 773 OutputPrimitivesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19123, 19), 732}, // 774 OutputPrimitivesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18367, 20), 692}, // 775 OutputTriangleStrip in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19238, 19), 735}, // 776 OutputTrianglesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19257, 18), 735}, // 777 OutputTrianglesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18323, 15), 689}, // 778 OutputVertices in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18070, 19), 670}, // 779 PixelCenterInteger in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19275, 25), 736}, // 780 PixelInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19300, 27), 737}, // 781 PixelInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18140, 10), 674}, // 782 PointMode in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18644, 18), 706}, // 783 PostDepthCoverage in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19015, 19), 728}, // 784 QuadDerivativesKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18308, 6), 687}, // 785 Quads in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19741, 26), 755}, // 786 RegisterMapInterfaceINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19034, 20), 729}, // 787 RequireFullQuadsKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9331, 16), 710}, // 788 RoundingModeRTE in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19493, 21), 744}, // 789 RoundingModeRTNINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19472, 21), 743}, // 790 RoundingModeRTPINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9347, 16), 711}, // 791 RoundingModeRTZ in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19327, 26), 738}, // 792 SampleInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19353, 28), 739}, // 793 SampleInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19647, 28), 751}, // 794 SchedulerTargetFmaxMhzINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(6122, 16), 720}, // 795 ShaderIndexAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19381, 31), 740}, // 796 ShadingRateInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19412, 33), 741}, // 797 ShadingRateInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19445, 27), 742}, // 798 SharedLocalMemorySizeINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19054, 20), 730}, // 799 SharesInputWithAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9306, 25), 709}, // 800 SignedZeroInfNanPreserve in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17985, 13), 665}, // 801 SpacingEqual in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17998, 22), 666}, // 802 SpacingFractionalEven in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18020, 21), 667}, // 803 SpacingFractionalOdd in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18819, 24), 719}, // 804 StaticNumWorkgroupsAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18968, 25), 726}, // 805 StencilRefGreaterBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18892, 26), 723}, // 806 StencilRefGreaterFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18993, 22), 727}, // 807 StencilRefLessBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18918, 23), 724}, // 808 StencilRefLessFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18745, 23), 715}, // 809 StencilRefReplacingEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18941, 27), 725}, // 810 StencilRefUnchangedBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18864, 28), 722}, // 811 StencilRefUnchangedFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19717, 24), 754}, // 812 StreamingInterfaceINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(5229, 13), 697}, // 813 SubgroupSize in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18614, 30), 705}, // 814 SubgroupUniformControlFlowKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18436, 22), 698}, // 815 SubgroupsPerWorkgroup in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18458, 24), 699}, // 816 SubgroupsPerWorkgroupId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18696, 20), 713}, // 817 TileShadingRateQCOM in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18274, 10), 685}, // 818 Triangles in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18387, 12), 693}, // 819 VecTypeHint in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18055, 15), 669}, // 820 VertexOrderCcw in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18041, 14), 668}, // 821 VertexOrderCw in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18150, 4), 675}, // 822 Xfb in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20052, 10), 771}, // 823 AnyHitKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20062, 9), 771}, // 824 AnyHitNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20113, 12), 774}, // 825 CallableKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20125, 11), 774}, // 826 CallableNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20071, 14), 772}, // 827 ClosestHitKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20085, 13), 772}, // 828 ClosestHitNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(14153, 9), 764}, // 829 Fragment in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19964, 10), 765}, // 830 GLCompute in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(4710, 9), 763}, // 831 Geometry in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20021, 16), 770}, // 832 IntersectionKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20037, 15), 770}, // 833 IntersectionNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(4477, 7), 766}, // 834 Kernel in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20144, 8), 776}, // 835 MeshEXT in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19981, 7), 768}, // 836 MeshNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20098, 8), 773}, // 837 MissKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20106, 7), 773}, // 838 MissNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19988, 17), 769}, // 839 RayGenerationKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20005, 16), 769}, // 840 RayGenerationNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20136, 8), 775}, // 841 TaskEXT in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19974, 7), 767}, // 842 TaskNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19921, 20), 761}, // 843 TessellationControl in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19941, 23), 762}, // 844 TessellationEvaluation in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19914, 7), 760}, // 845 Vertex in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20161, 12), 778}, // 846 FlushToZero in SPV_OPERAND_TYPE_FPDENORM_MODE
  {IR(20152, 9), 777}, // 847 Preserve in SPV_OPERAND_TYPE_FPDENORM_MODE
  {IR(20173, 12), 779}, // 848 BFloat16KHR in SPV_OPERAND_TYPE_FPENCODING
  {IR(20190, 4), 781}, // 849 ALT in SPV_OPERAND_TYPE_FPOPERATION_MODE
  {IR(20185, 5), 780}, // 850 IEEE in SPV_OPERAND_TYPE_FPOPERATION_MODE
  {IR(20228, 14), 788}, // 851 AllowContract in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20242, 23), 788}, // 852 AllowContractFastINTEL in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20265, 13), 789}, // 853 AllowReassoc in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20278, 18), 789}, // 854 AllowReassocINTEL in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20212, 11), 786}, // 855 AllowRecip in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20296, 15), 790}, // 856 AllowTransform in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20223, 5), 787}, // 857 Fast in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20208, 4), 785}, // 858 NSZ in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(13749, 5), 782}, // 859 None in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20201, 7), 784}, // 860 NotInf in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20194, 7), 783}, // 861 NotNaN in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20311, 4), 791}, // 862 RTE in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(20323, 4), 794}, // 863 RTN in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(20319, 4), 793}, // 864 RTP in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(20315, 4), 792}, // 865 RTZ in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(20359, 18), 797}, // 866 Horizontal2Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(20377, 18), 798}, // 867 Horizontal4Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(20327, 16), 795}, // 868 Vertical2Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(20343, 16), 796}, // 869 Vertical4Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(20418, 6), 803}, // 870 Const in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(20402, 11), 801}, // 871 DontInline in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(20395, 7), 800}, // 872 Inline in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(13749, 5), 799}, // 873 None in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(12990, 11), 804}, // 874 OptNoneEXT in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(13001, 13), 804}, // 875 OptNoneINTEL in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(20413, 5), 802}, // 876 Pure in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(20434, 6), 807}, // 877 ByVal in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20445, 8), 809}, // 878 NoAlias in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20453, 10), 810}, // 879 NoCapture in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20471, 12), 812}, // 880 NoReadWrite in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20463, 8), 811}, // 881 NoWrite in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20483, 20), 813}, // 882 RuntimeAlignedINTEL in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20429, 5), 806}, // 883 Sext in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20440, 5), 808}, // 884 Sret in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20424, 5), 805}, // 885 Zext in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20538, 16), 817}, // 886 ClusteredReduce in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20524, 14), 816}, // 887 ExclusiveScan in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20510, 14), 815}, // 888 InclusiveScan in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20601, 27), 820}, // 889 PartitionedExclusiveScanNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20574, 27), 819}, // 890 PartitionedInclusiveScanNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20554, 20), 818}, // 891 PartitionedReduceNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20503, 7), 814}, // 892 Reduce in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20628, 10), 821}, // 893 NoneINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(20638, 10), 822}, // 894 ReadINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(20659, 15), 824}, // 895 ReadWriteINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(20648, 11), 823}, // 896 WriteINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(20674, 5), 826}, // 897 Bias in SPV_OPERAND_TYPE_IMAGE
  {IR(20688, 12), 829}, // 898 ConstOffset in SPV_OPERAND_TYPE_IMAGE
  {IR(20700, 13), 831}, // 899 ConstOffsets in SPV_OPERAND_TYPE_IMAGE
  {IR(20683, 5), 828}, // 900 Grad in SPV_OPERAND_TYPE_IMAGE
  {IR(20679, 4), 827}, // 901 Lod in SPV_OPERAND_TYPE_IMAGE
  {IR(20713, 19), 834}, // 902 MakeTexelAvailable in SPV_OPERAND_TYPE_IMAGE
  {IR(20732, 22), 834}, // 903 MakeTexelAvailableKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(20754, 17), 835}, // 904 MakeTexelVisible in SPV_OPERAND_TYPE_IMAGE
  {IR(20771, 20), 835}, // 905 MakeTexelVisibleKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(8261, 7), 833}, // 906 MinLod in SPV_OPERAND_TYPE_IMAGE
  {IR(20791, 16), 836}, // 907 NonPrivateTexel in SPV_OPERAND_TYPE_IMAGE
  {IR(20807, 19), 836}, // 908 NonPrivateTexelKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(13749, 5), 825}, // 909 None in SPV_OPERAND_TYPE_IMAGE
  {IR(20879, 12), 840}, // 910 Nontemporal in SPV_OPERAND_TYPE_IMAGE
  {IR(15156, 7), 830}, // 911 Offset in SPV_OPERAND_TYPE_IMAGE
  {IR(20891, 8), 841}, // 912 Offsets in SPV_OPERAND_TYPE_IMAGE
  {IR(14953, 7), 832}, // 913 Sample in SPV_OPERAND_TYPE_IMAGE
  {IR(20857, 11), 838}, // 914 SignExtend in SPV_OPERAND_TYPE_IMAGE
  {IR(20826, 14), 837}, // 915 VolatileTexel in SPV_OPERAND_TYPE_IMAGE
  {IR(20840, 17), 837}, // 916 VolatileTexelKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(20868, 11), 839}, // 917 ZeroExtend in SPV_OPERAND_TYPE_IMAGE
  {IR(13646, 6), 856}, // 918 Float in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21060, 10), 855}, // 919 HalfFloat in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20995, 12), 850}, // 920 SignedInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21007, 12), 851}, // 921 SignedInt32 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20984, 11), 849}, // 922 SignedInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20909, 11), 843}, // 923 SnormInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20899, 10), 842}, // 924 SnormInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20969, 15), 848}, // 925 UnormInt101010 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21081, 17), 858}, // 926 UnormInt101010_2 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21098, 16), 859}, // 927 UnormInt10X6EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21231, 16), 866}, // 928 UnormInt12X4EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21247, 16), 867}, // 929 UnormInt14X2EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20930, 11), 845}, // 930 UnormInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21070, 11), 857}, // 931 UnormInt24 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21154, 20), 862}, // 932 UnormInt2_101010EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20920, 10), 844}, // 933 UnormInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20955, 14), 847}, // 934 UnormShort555 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20941, 14), 846}, // 935 UnormShort565 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21174, 19), 863}, // 936 UnsignedInt10X6EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21193, 19), 864}, // 937 UnsignedInt12X4EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21212, 19), 865}, // 938 UnsignedInt14X2EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21032, 14), 853}, // 939 UnsignedInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21046, 14), 854}, // 940 UnsignedInt32 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21019, 13), 852}, // 941 UnsignedInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21114, 20), 860}, // 942 UnsignedIntRaw10EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21134, 20), 861}, // 943 UnsignedIntRaw12EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21265, 2), 869}, // 944 A in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21366, 5), 887}, // 945 ABGR in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21287, 5), 875}, // 946 ARGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21282, 5), 874}, // 947 BGRA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21324, 6), 881}, // 948 Depth in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21330, 13), 882}, // 949 DepthStencil in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21292, 10), 876}, // 950 Intensity in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21302, 10), 877}, // 951 Luminance in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21263, 2), 868}, // 952 R in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21270, 3), 871}, // 953 RA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21267, 3), 870}, // 954 RG in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21273, 4), 872}, // 955 RGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21277, 5), 873}, // 956 RGBA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21319, 5), 880}, // 957 RGBx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21315, 4), 879}, // 958 RGx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21312, 3), 878}, // 959 Rx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21360, 6), 886}, // 960 sBGRA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21343, 5), 883}, // 961 sRGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21354, 6), 885}, // 962 sRGBA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21348, 6), 884}, // 963 sRGBx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21371, 27), 888}, // 964 InitOnDeviceReprogramINTEL in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(21398, 23), 889}, // 965 InitOnDeviceResetINTEL in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(21421, 7), 890}, // 966 NoWait in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(21428, 11), 891}, // 967 WaitKernel in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(21439, 14), 892}, // 968 WaitWorkGroup in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(21453, 12), 894}, // 969 CmdExecTime in SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {IR(13749, 5), 893}, // 970 None in SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {IR(21465, 13), 896}, // 971 MayUsePrintf in SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {IR(13749, 5), 895}, // 972 None in SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {IR(21478, 7), 897}, // 973 Export in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(21485, 7), 898}, // 974 Import in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(21492, 12), 899}, // 975 LinkOnceODR in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(21518, 12), 901}, // 976 CachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(21570, 17), 904}, // 977 ConstCachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(21545, 25), 903}, // 978 InvalidateAfterReadINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(21530, 15), 902}, // 979 StreamingINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(21504, 14), 900}, // 980 UncachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(21710, 21), 917}, // 981 DependencyArrayINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21605, 19), 908}, // 982 DependencyInfinite in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21624, 17), 909}, // 983 DependencyLength in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21594, 11), 907}, // 984 DontUnroll in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(16979, 24), 915}, // 985 InitiationIntervalINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21669, 18), 912}, // 986 IterationMultiple in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21731, 18), 919}, // 987 LoopCoalesceINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21810, 15), 923}, // 988 LoopCountINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(17003, 20), 916}, // 989 MaxConcurrencyINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21749, 21), 920}, // 990 MaxInterleavingINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21655, 14), 911}, // 991 MaxIterations in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21825, 26), 924}, // 992 MaxReinvocationDelayINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21641, 14), 910}, // 993 MinIterations in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21796, 14), 922}, // 994 NoFusionINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(13749, 5), 905}, // 995 None in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21697, 13), 914}, // 996 PartialCount in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21687, 10), 913}, // 997 PeelCount in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(17023, 20), 918}, // 998 PipelineEnableINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21770, 26), 921}, // 999 SpeculatedIterationsINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21587, 7), 906}, // 1000 Unroll in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22134, 27), 938}, // 1001 MatrixAPackedBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22082, 26), 936}, // 1002 MatrixAPackedFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22002, 23), 932}, // 1003 MatrixAPackedInt4INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21956, 23), 930}, // 1004 MatrixAPackedInt8INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21851, 29), 926}, // 1005 MatrixASignedComponentsINTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22048, 17), 934}, // 1006 MatrixATF32INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22161, 27), 939}, // 1007 MatrixBPackedBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22108, 26), 937}, // 1008 MatrixBPackedFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22025, 23), 933}, // 1009 MatrixBPackedInt4INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21979, 23), 931}, // 1010 MatrixBPackedInt8INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21880, 29), 927}, // 1011 MatrixBSignedComponentsINTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22065, 17), 935}, // 1012 MatrixBTF32INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21909, 21), 928}, // 1013 MatrixCBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21930, 26), 929}, // 1014 MatrixResultBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(13749, 5), 925}, // 1015 None in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22321, 20), 947}, // 1016 AliasScopeINTELMask in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22188, 8), 942}, // 1017 Aligned in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22196, 21), 944}, // 1018 MakePointerAvailable in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22217, 24), 944}, // 1019 MakePointerAvailableKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22241, 19), 945}, // 1020 MakePointerVisible in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22260, 22), 945}, // 1021 MakePointerVisibleKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22341, 17), 948}, // 1022 NoAliasINTELMask in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22282, 18), 946}, // 1023 NonPrivatePointer in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22300, 21), 946}, // 1024 NonPrivatePointerKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(13749, 5), 940}, // 1025 None in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(20879, 12), 943}, // 1026 Nontemporal in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(14987, 9), 941}, // 1027 Volatile in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22365, 8), 950}, // 1028 GLSL450 in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22373, 7), 951}, // 1029 OpenCL in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22358, 7), 949}, // 1030 Simple in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22380, 7), 952}, // 1031 Vulkan in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22387, 10), 952}, // 1032 VulkanKHR in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22405, 8), 954}, // 1033 Acquire in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22421, 15), 956}, // 1034 AcquireRelease in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22525, 20), 962}, // 1035 AtomicCounterMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22504, 21), 961}, // 1036 CrossWorkgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22545, 12), 963}, // 1037 ImageMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22586, 14), 965}, // 1038 MakeAvailable in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22600, 17), 965}, // 1039 MakeAvailableKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22617, 12), 966}, // 1040 MakeVisible in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22629, 15), 966}, // 1041 MakeVisibleKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(13749, 5), 953}, // 1042 None in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22557, 13), 964}, // 1043 OutputMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22570, 16), 964}, // 1044 OutputMemoryKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22397, 8), 953}, // 1045 Relaxed in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22413, 8), 955}, // 1046 Release in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22436, 23), 957}, // 1047 SequentiallyConsistent in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22473, 15), 959}, // 1048 SubgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22459, 14), 958}, // 1049 UniformMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(14987, 9), 967}, // 1050 Volatile in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22488, 16), 960}, // 1051 WorkgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22644, 10), 968}, // 1052 AutoINTEL in SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS
  {IR(22659, 4), 970}, // 1053 SAT in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(22672, 8), 972}, // 1054 SAT_SYM in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(22663, 9), 971}, // 1055 SAT_ZERO in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(22654, 5), 969}, // 1056 WRAP in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(22680, 25), 973}, // 1057 PackedVectorFormat4x8Bit in SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {IR(22705, 28), 973}, // 1058 PackedVectorFormat4x8BitKHR in SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {IR(22746, 4), 976}, // 1059 RND in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22779, 9), 980}, // 1060 RND_CONV in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22788, 13), 981}, // 1061 RND_CONV_ODD in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22759, 8), 978}, // 1062 RND_INF in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22767, 12), 979}, // 1063 RND_MIN_INF in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22750, 9), 977}, // 1064 RND_ZERO in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22733, 4), 974}, // 1065 TRN in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22737, 9), 975}, // 1066 TRN_ZERO in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(13749, 5), 982}, // 1067 None in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(22801, 25), 983}, // 1068 RobustnessPerComponentNV in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(22826, 23), 984}, // 1069 RobustnessPerElementNV in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(22918, 27), 990}, // 1070 CullBackFacingTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22945, 28), 991}, // 1071 CullFrontFacingTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22987, 16), 993}, // 1072 CullNoOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22973, 14), 992}, // 1073 CullOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23057, 30), 996}, // 1074 ForceOpacityMicromap2StateEXT in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22859, 12), 987}, // 1075 NoOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(14501, 8), 985}, // 1076 NoneKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22849, 10), 986}, // 1077 OpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23044, 13), 995}, // 1078 SkipAABBsKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23020, 24), 994}, // 1079 SkipBuiltinPrimitivesNV in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22894, 24), 989}, // 1080 SkipClosestHitShaderKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23003, 17), 994}, // 1081 SkipTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22871, 23), 988}, // 1082 TerminateOnFirstHitKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23128, 37), 998}, // 1083 RayQueryCandidateIntersectionAABBKHR in SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {IR(23087, 41), 997}, // 1084 RayQueryCandidateIntersectionTriangleKHR in SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {IR(23243, 42), 1001}, // 1085 RayQueryCommittedIntersectionGeneratedKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(23165, 37), 999}, // 1086 RayQueryCommittedIntersectionNoneKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(23202, 41), 1000}, // 1087 RayQueryCommittedIntersectionTriangleKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(23285, 33), 1002}, // 1088 RayQueryCandidateIntersectionKHR in SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {IR(23318, 33), 1003}, // 1089 RayQueryCommittedIntersectionKHR in SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {IR(23363, 6), 1006}, // 1090 Clamp in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(23351, 12), 1005}, // 1091 ClampToEdge in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(13749, 5), 1004}, // 1092 None in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(23369, 7), 1007}, // 1093 Repeat in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(23376, 15), 1008}, // 1094 RepeatMirrored in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(23399, 7), 1010}, // 1095 Linear in SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {IR(23391, 8), 1009}, // 1096 Nearest in SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {IR(23464, 13), 1019}, // 1097 R11fG11fB10f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23506, 4), 1025}, // 1098 R16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23544, 9), 1030}, // 1099 R16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23477, 5), 1020}, // 1100 R16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23606, 5), 1039}, // 1101 R16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23677, 6), 1049}, // 1102 R16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23430, 5), 1014}, // 1103 R32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23584, 5), 1035}, // 1104 R32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23641, 6), 1044}, // 1105 R32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23694, 5), 1052}, // 1106 R64i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23688, 6), 1051}, // 1107 R64ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23510, 3), 1026}, // 1108 R8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23553, 8), 1031}, // 1109 R8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23611, 4), 1040}, // 1110 R8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23683, 5), 1050}, // 1111 R8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23497, 5), 1023}, // 1112 Rg16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23525, 10), 1028}, // 1113 Rg16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23458, 6), 1018}, // 1114 Rg16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23595, 6), 1037}, // 1115 Rg16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23664, 7), 1047}, // 1116 Rg16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23452, 6), 1017}, // 1117 Rg32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23589, 6), 1036}, // 1118 Rg32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23657, 7), 1046}, // 1119 Rg32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23502, 4), 1024}, // 1120 Rg8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23535, 9), 1029}, // 1121 Rg8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23601, 5), 1038}, // 1122 Rg8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23671, 6), 1048}, // 1123 Rg8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23489, 8), 1022}, // 1124 Rgb10A2 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23647, 10), 1045}, // 1125 Rgb10a2ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23482, 7), 1021}, // 1126 Rgba16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23513, 12), 1027}, // 1127 Rgba16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23422, 8), 1013}, // 1128 Rgba16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23569, 8), 1033}, // 1129 Rgba16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23624, 9), 1042}, // 1130 Rgba16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23414, 8), 1012}, // 1131 Rgba32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23561, 8), 1032}, // 1132 Rgba32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23615, 9), 1041}, // 1133 Rgba32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23435, 6), 1015}, // 1134 Rgba8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23441, 11), 1016}, // 1135 Rgba8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23577, 7), 1034}, // 1136 Rgba8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23633, 8), 1043}, // 1137 Rgba8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23406, 8), 1011}, // 1138 Unknown in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23699, 12), 1053}, // 1139 CrossDevice in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23711, 7), 1054}, // 1140 Device in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23737, 11), 1057}, // 1141 Invocation in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23748, 12), 1058}, // 1142 QueueFamily in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23760, 15), 1058}, // 1143 QueueFamilyKHR in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23775, 14), 1059}, // 1144 ShaderCallKHR in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23728, 9), 1056}, // 1145 Subgroup in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23718, 10), 1055}, // 1146 Workgroup in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23797, 12), 1062}, // 1147 DontFlatten in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(23789, 8), 1061}, // 1148 Flatten in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(13749, 5), 1060}, // 1149 None in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(23809, 29), 1063}, // 1150 IdentifierPossibleDuplicates in SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS
  {IR(13630, 8), 1065}, // 1151 Address in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13638, 8), 1066}, // 1152 Boolean in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13646, 6), 1067}, // 1153 Float in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13652, 7), 1068}, // 1154 Signed in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13659, 11), 1069}, // 1155 SignedChar in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13670, 9), 1070}, // 1156 Unsigned in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13679, 13), 1071}, // 1157 UnsignedChar in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13618, 12), 1064}, // 1158 Unspecified in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13692, 6), 1072}, // 1159 Class in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13698, 10), 1073}, // 1160 Structure in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13708, 6), 1074}, // 1161 Union in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13729, 20), 1076}, // 1162 ImportedDeclaration in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(13714, 15), 1075}, // 1163 ImportedModule in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(13838, 15), 1084}, // 1164 FlagArtificial in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13853, 13), 1085}, // 1165 FlagExplicit in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13826, 12), 1083}, // 1166 FlagFwdDecl in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13916, 21), 1089}, // 1167 FlagIndirectVariable in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13809, 17), 1082}, // 1168 FlagIsDefinition in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13993, 16), 1093}, // 1169 FlagIsEnumClass in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13797, 12), 1081}, // 1170 FlagIsLocal in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13977, 16), 1092}, // 1171 FlagIsOptimized in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13770, 14), 1079}, // 1172 FlagIsPrivate in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13754, 16), 1078}, // 1173 FlagIsProtected in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13784, 13), 1080}, // 1174 FlagIsPublic in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13937, 20), 1090}, // 1175 FlagLValueReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13881, 18), 1087}, // 1176 FlagObjectPointer in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13866, 15), 1086}, // 1177 FlagPrototyped in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13957, 20), 1091}, // 1178 FlagRValueReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13899, 17), 1088}, // 1179 FlagStaticMember in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14029, 24), 1095}, // 1180 FlagTypePassByReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14009, 20), 1094}, // 1181 FlagTypePassByValue in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(23838, 26), 1096}, // 1182 FlagUnknownPhysicalLayout in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13749, 5), 1077}, // 1183 None in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14114, 9), 1101}, // 1184 BitPiece in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14146, 7), 1105}, // 1185 Constu in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14053, 6), 1097}, // 1186 Deref in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14153, 9), 1106}, // 1187 Fragment in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14064, 6), 1099}, // 1188 Minus in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14059, 5), 1098}, // 1189 Plus in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14103, 11), 1100}, // 1190 PlusUconst in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14135, 11), 1104}, // 1191 StackValue in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14123, 5), 1102}, // 1192 Swap in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14128, 7), 1103}, // 1193 Xderef in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14198, 11), 1110}, // 1194 AtomicType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14162, 10), 1107}, // 1195 ConstType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14185, 13), 1109}, // 1196 RestrictType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14172, 13), 1108}, // 1197 VolatileType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(23899, 15), 1117}, // 1198 CPP_for_OpenCL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23864, 5), 1112}, // 1199 ESSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23869, 5), 1113}, // 1200 GLSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23919, 7), 1119}, // 1201 HERO_C in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23894, 5), 1116}, // 1202 HLSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23926, 5), 1120}, // 1203 NZSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23874, 9), 1114}, // 1204 OpenCL_C in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23883, 11), 1115}, // 1205 OpenCL_CPP in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23946, 5), 1124}, // 1206 Rust in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23914, 5), 1118}, // 1207 SYCL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23936, 6), 1122}, // 1208 Slang in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23406, 8), 1111}, // 1209 Unknown in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23931, 5), 1121}, // 1210 WGSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23942, 4), 1123}, // 1211 Zig in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24033, 14), 1135}, // 1212 AtomicCounter in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24115, 16), 1141}, // 1213 CallableDataKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24131, 15), 1141}, // 1214 CallableDataNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24429, 17), 1150}, // 1215 CodeSectionINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23980, 15), 1130}, // 1216 CrossWorkgroup in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24446, 16), 1151}, // 1217 DeviceOnlyINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24003, 9), 1132}, // 1218 Function in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24012, 8), 1133}, // 1219 Generic in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24220, 16), 1144}, // 1220 HitAttributeKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24236, 15), 1144}, // 1221 HitAttributeNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24384, 21), 1148}, // 1222 HitObjectAttributeNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24462, 14), 1152}, // 1223 HostOnlyINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24047, 6), 1136}, // 1224 Image in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24146, 24), 1142}, // 1225 IncomingCallableDataKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24170, 23), 1142}, // 1226 IncomingCallableDataNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24251, 22), 1145}, // 1227 IncomingRayPayloadKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24273, 21), 1145}, // 1228 IncomingRayPayloadNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23967, 6), 1126}, // 1229 Input in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24099, 16), 1140}, // 1230 NodePayloadAMDX in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23973, 7), 1128}, // 1231 Output in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24337, 22), 1147}, // 1232 PhysicalStorageBuffer in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24359, 25), 1147}, // 1233 PhysicalStorageBufferEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23995, 8), 1131}, // 1234 Private in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24020, 13), 1134}, // 1235 PushConstant in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24193, 14), 1143}, // 1236 RayPayloadKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24207, 13), 1143}, // 1237 RayPayloadNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24294, 22), 1146}, // 1238 ShaderRecordBufferKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24316, 21), 1146}, // 1239 ShaderRecordBufferNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24053, 14), 1137}, // 1240 StorageBuffer in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24405, 24), 1149}, // 1241 TaskPayloadWorkgroupEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24080, 19), 1139}, // 1242 TileAttachmentQCOM in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24067, 13), 1138}, // 1243 TileImageEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(15038, 8), 1127}, // 1244 Uniform in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23951, 16), 1125}, // 1245 UniformConstant in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23718, 10), 1129}, // 1246 Workgroup in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(21530, 15), 1156}, // 1247 StreamingINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(21504, 14), 1153}, // 1248 UncachedINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(24494, 15), 1155}, // 1249 WriteBackINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(24476, 18), 1154}, // 1250 WriteThroughINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(24520, 11), 1159}, // 1251 DecodeFunc in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(13749, 5), 1157}, // 1252 None in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(24509, 11), 1158}, // 1253 TensorView in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(23351, 12), 1162}, // 1254 ClampToEdge in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(14996, 9), 1161}, // 1255 Constant in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(23369, 7), 1163}, // 1256 Repeat in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(23376, 15), 1164}, // 1257 RepeatMirrored in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(24531, 10), 1160}, // 1258 Undefined in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
}};

IndexRange OperandNameRangeForKind(spv_operand_type_t type) {
  switch(type) {
    case SPV_OPERAND_TYPE_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_ADDRESSING_MODEL: return IR(3, 5);
    case SPV_OPERAND_TYPE_BUILT_IN: return IR(8, 148);
    case SPV_OPERAND_TYPE_CAPABILITY: return IR(156, 289);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(445, 8);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(453, 3);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(456, 2);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS: return IR(458, 19);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION: return IR(477, 10);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(487, 4);
    case SPV_OPERAND_TYPE_COMPONENT_TYPE: return IR(491, 15);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT: return IR(506, 4);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS: return IR(510, 6);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE: return IR(516, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE: return IR(519, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT: return IR(522, 4);
    case SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(526, 8);
    case SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE: return IR(534, 3);
    case SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS: return IR(537, 16);
    case SPV_OPERAND_TYPE_DEBUG_OPERATION: return IR(553, 9);
    case SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER: return IR(562, 3);
    case SPV_OPERAND_TYPE_DECORATION: return IR(565, 149);
    case SPV_OPERAND_TYPE_DIMENSIONALITY: return IR(714, 8);
    case SPV_OPERAND_TYPE_EXECUTION_MODE: return IR(722, 101);
    case SPV_OPERAND_TYPE_EXECUTION_MODEL: return IR(823, 23);
    case SPV_OPERAND_TYPE_FPDENORM_MODE: return IR(846, 2);
    case SPV_OPERAND_TYPE_FPENCODING: return IR(848, 1);
    case SPV_OPERAND_TYPE_FPOPERATION_MODE: return IR(849, 2);
    case SPV_OPERAND_TYPE_FP_FAST_MATH_MODE: return IR(851, 11);
    case SPV_OPERAND_TYPE_FP_ROUNDING_MODE: return IR(862, 4);
    case SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE: return IR(866, 4);
    case SPV_OPERAND_TYPE_FUNCTION_CONTROL: return IR(870, 7);
    case SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE: return IR(877, 9);
    case SPV_OPERAND_TYPE_GROUP_OPERATION: return IR(886, 7);
    case SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER: return IR(893, 4);
    case SPV_OPERAND_TYPE_IMAGE: return IR(897, 21);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE: return IR(918, 26);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER: return IR(944, 20);
    case SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER: return IR(964, 2);
    case SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS: return IR(966, 3);
    case SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO: return IR(969, 2);
    case SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS: return IR(971, 2);
    case SPV_OPERAND_TYPE_LINKAGE_TYPE: return IR(973, 3);
    case SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL: return IR(976, 5);
    case SPV_OPERAND_TYPE_LOOP_CONTROL: return IR(981, 20);
    case SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(1001, 15);
    case SPV_OPERAND_TYPE_MEMORY_ACCESS: return IR(1016, 12);
    case SPV_OPERAND_TYPE_MEMORY_MODEL: return IR(1028, 5);
    case SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID: return IR(1033, 19);
    case SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS: return IR(1052, 1);
    case SPV_OPERAND_TYPE_OVERFLOW_MODES: return IR(1053, 4);
    case SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT: return IR(1057, 2);
    case SPV_OPERAND_TYPE_QUANTIZATION_MODES: return IR(1059, 8);
    case SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS: return IR(1067, 3);
    case SPV_OPERAND_TYPE_RAY_FLAGS: return IR(1070, 13);
    case SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE: return IR(1083, 2);
    case SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE: return IR(1085, 3);
    case SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION: return IR(1088, 2);
    case SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE: return IR(1090, 5);
    case SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE: return IR(1095, 2);
    case SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT: return IR(1097, 42);
    case SPV_OPERAND_TYPE_SCOPE_ID: return IR(1139, 8);
    case SPV_OPERAND_TYPE_SELECTION_CONTROL: return IR(1147, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS: return IR(1150, 1);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(1151, 8);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(1159, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(1162, 2);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS: return IR(1164, 20);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION: return IR(1184, 10);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(1194, 4);
    case SPV_OPERAND_TYPE_SOURCE_LANGUAGE: return IR(1198, 14);
    case SPV_OPERAND_TYPE_STORAGE_CLASS: return IR(1212, 35);
    case SPV_OPERAND_TYPE_STORE_CACHE_CONTROL: return IR(1247, 4);
    case SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS: return IR(1251, 3);
    case SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE: return IR(1254, 5);
    case SPV_OPERAND_TYPE_OPTIONAL_IMAGE: return IR(897, 21);
    case SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS: return IR(1016, 12);
    case SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT: return IR(1057, 2);
    case SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS: return IR(510, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(1001, 15);
    case SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS: return IR(1067, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_FPENCODING: return IR(848, 1);
    default: break;
  }
  return IR(0,0);
}

// Instruction descriptions, ordered by opcode.
// The fields in order are:
//   opcode
//   a boolean indicating if the instruction produces a result ID
//   a boolean indicating if the instruction result ID has a type
//   operands, an IndexRange into kOperandSpans
//   opcode name (without the 'Op' prefix), a character-counting IndexRange into kStrings
//   aliases, an IndexRange into kAliasSpans
//   capabilities, an IndexRange into kCapabilitySpans
//   extensions, as an IndexRange into kExtensionSpans
//   version, first version of SPIR-V that has it
//   lastVersion, last version of SPIR-V that has it
static const std::array<InstructionDesc, 794> kInstructionDesc{{
  {spv::Op::OpNop, false, false, IR(0, 0), IR(24541, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpUndef, true, true, IR(39, 2), IR(24597, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpSourceContinued, false, false, IR(11, 1), IR(24603, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpSource, false, false, IR(41, 4), IR(24722, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpSourceExtension, false, false, IR(11, 1), IR(24729, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpName, false, false, IR(45, 2), IR(24745, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpMemberName, false, false, IR(47, 3), IR(24750, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpString, true, false, IR(50, 2), IR(24761, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpLine, false, false, IR(52, 3), IR(24768, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpExtension, false, false, IR(11, 1), IR(24773, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpExtInstImport, true, false, IR(50, 2), IR(24783, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpExtInst, true, true, IR(55, 4), IR(24843, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpMemoryModel, false, false, IR(59, 2), IR(24915, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpEntryPoint, false, false, IR(61, 4), IR(24989, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpExecutionMode, false, false, IR(65, 2), IR(25032, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpCapability, false, false, IR(67, 1), IR(25074, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpTypeVoid, true, false, IR(68, 1), IR(25085, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeBool, true, false, IR(68, 1), IR(25094, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeInt, true, false, IR(69, 3), IR(25103, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeFloat, true, false, IR(72, 3), IR(25148, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeVector, true, false, IR(75, 3), IR(25158, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeMatrix, true, false, IR(75, 3), IR(25169, 11), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeImage, true, false, IR(78, 9), IR(25293, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeSampler, true, false, IR(68, 1), IR(25303, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeSampledImage, true, false, IR(87, 2), IR(25315, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeArray, true, false, IR(89, 3), IR(25332, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeRuntimeArray, true, false, IR(87, 2), IR(25342, 17), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeStruct, true, false, IR(92, 2), IR(25359, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeOpaque, true, false, IR(50, 2), IR(25370, 11), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypePointer, true, false, IR(94, 3), IR(25412, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeFunction, true, false, IR(97, 3), IR(25424, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeEvent, true, false, IR(68, 1), IR(25437, 10), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeDeviceEvent, true, false, IR(68, 1), IR(25447, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeReserveId, true, false, IR(68, 1), IR(25463, 14), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeQueue, true, false, IR(68, 1), IR(25477, 10), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypePipe, true, false, IR(100, 2), IR(25487, 9), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeForwardPointer, false, false, IR(102, 2), IR(25496, 19), IR(0, 0), IR(195, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantTrue, true, true, IR(39, 2), IR(25515, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantFalse, true, true, IR(39, 2), IR(25528, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstant, true, true, IR(104, 3), IR(14996, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantComposite, true, true, IR(107, 3), IR(25580, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantSampler, true, true, IR(110, 5), IR(25676, 16), IR(0, 0), IR(197, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantNull, true, true, IR(39, 2), IR(25692, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantTrue, true, true, IR(39, 2), IR(25705, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantFalse, true, true, IR(39, 2), IR(25722, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstant, true, true, IR(104, 3), IR(25740, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantComposite, true, true, IR(107, 3), IR(25753, 22), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantOp, true, true, IR(115, 3), IR(25816, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpFunction, true, true, IR(118, 4), IR(24003, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionParameter, true, true, IR(39, 2), IR(25865, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionEnd, false, false, IR(0, 0), IR(25883, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionCall, true, true, IR(122, 4), IR(25895, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpVariable, true, true, IR(126, 4), IR(25908, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpImageTexelPointer, true, true, IR(130, 5), IR(25917, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpLoad, true, true, IR(135, 4), IR(25975, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpStore, false, false, IR(139, 3), IR(25980, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCopyMemory, false, false, IR(142, 4), IR(25986, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCopyMemorySized, false, false, IR(146, 5), IR(25997, 16), IR(0, 0), IR(198, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpAccessChain, true, true, IR(122, 4), IR(26013, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpInBoundsAccessChain, true, true, IR(122, 4), IR(26025, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrAccessChain, true, true, IR(151, 5), IR(26045, 15), IR(0, 0), IR(200, 4), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpArrayLength, true, true, IR(156, 4), IR(26060, 12), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpGenericPtrMemSemantics, true, true, IR(160, 3), IR(26072, 23), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpInBoundsPtrAccessChain, true, true, IR(151, 5), IR(26095, 23), IR(0, 0), IR(1, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpDecorate, false, false, IR(163, 2), IR(26146, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpMemberDecorate, false, false, IR(165, 3), IR(26155, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpDecorationGroup, true, false, IR(68, 1), IR(26170, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupDecorate, false, false, IR(168, 2), IR(26186, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupMemberDecorate, false, false, IR(170, 2), IR(26245, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpVectorExtractDynamic, true, true, IR(172, 4), IR(26265, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpVectorInsertDynamic, true, true, IR(130, 5), IR(26286, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpVectorShuffle, true, true, IR(176, 5), IR(26306, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeConstruct, true, true, IR(107, 3), IR(26320, 19), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeExtract, true, true, IR(181, 4), IR(26339, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeInsert, true, true, IR(176, 5), IR(26356, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCopyObject, true, true, IR(160, 3), IR(26372, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpTranspose, true, true, IR(160, 3), IR(26383, 10), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpSampledImage, true, true, IR(172, 4), IR(26393, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleImplicitLod, true, true, IR(185, 5), IR(26438, 23), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleExplicitLod, true, true, IR(190, 5), IR(26484, 23), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleDrefImplicitLod, true, true, IR(195, 6), IR(26507, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleDrefExplicitLod, true, true, IR(201, 6), IR(26534, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjImplicitLod, true, true, IR(185, 5), IR(26561, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjExplicitLod, true, true, IR(190, 5), IR(26588, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjDrefImplicitLod, true, true, IR(195, 6), IR(26615, 31), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjDrefExplicitLod, true, true, IR(201, 6), IR(26646, 31), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageFetch, true, true, IR(185, 5), IR(26677, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageGather, true, true, IR(195, 6), IR(26688, 12), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageDrefGather, true, true, IR(195, 6), IR(26700, 16), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageRead, true, true, IR(185, 5), IR(26716, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageWrite, false, false, IR(207, 4), IR(26726, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImage, true, true, IR(160, 3), IR(24047, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryFormat, true, true, IR(160, 3), IR(26737, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryOrder, true, true, IR(160, 3), IR(26754, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySizeLod, true, true, IR(172, 4), IR(26770, 18), IR(0, 0), IR(204, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySize, true, true, IR(160, 3), IR(26788, 15), IR(0, 0), IR(204, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryLod, true, true, IR(172, 4), IR(26803, 14), IR(0, 0), IR(206, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryLevels, true, true, IR(160, 3), IR(26817, 17), IR(0, 0), IR(204, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySamples, true, true, IR(160, 3), IR(26834, 18), IR(0, 0), IR(204, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpConvertFToU, true, true, IR(160, 3), IR(26852, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertFToS, true, true, IR(160, 3), IR(26864, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertSToF, true, true, IR(160, 3), IR(26876, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToF, true, true, IR(160, 3), IR(26888, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpUConvert, true, true, IR(160, 3), IR(26900, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSConvert, true, true, IR(160, 3), IR(26909, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpFConvert, true, true, IR(160, 3), IR(26918, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpQuantizeToF16, true, true, IR(160, 3), IR(26927, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertPtrToU, true, true, IR(160, 3), IR(26941, 14), IR(0, 0), IR(195, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSatConvertSToU, true, true, IR(160, 3), IR(26955, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSatConvertUToS, true, true, IR(160, 3), IR(26970, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToPtr, true, true, IR(160, 3), IR(26985, 14), IR(0, 0), IR(195, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpPtrCastToGeneric, true, true, IR(160, 3), IR(26999, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpGenericCastToPtr, true, true, IR(160, 3), IR(27016, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpGenericCastToPtrExplicit, true, true, IR(211, 4), IR(27033, 25), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpBitcast, true, true, IR(160, 3), IR(27058, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSNegate, true, true, IR(160, 3), IR(27066, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFNegate, true, true, IR(160, 3), IR(27074, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIAdd, true, true, IR(172, 4), IR(27082, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFAdd, true, true, IR(172, 4), IR(27087, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpISub, true, true, IR(172, 4), IR(27092, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFSub, true, true, IR(172, 4), IR(27097, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIMul, true, true, IR(172, 4), IR(27102, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFMul, true, true, IR(172, 4), IR(27107, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDiv, true, true, IR(172, 4), IR(27112, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSDiv, true, true, IR(172, 4), IR(27117, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFDiv, true, true, IR(172, 4), IR(27122, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUMod, true, true, IR(172, 4), IR(27127, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSRem, true, true, IR(172, 4), IR(27132, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSMod, true, true, IR(172, 4), IR(27137, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFRem, true, true, IR(172, 4), IR(27142, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFMod, true, true, IR(172, 4), IR(27147, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpVectorTimesScalar, true, true, IR(172, 4), IR(27152, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesScalar, true, true, IR(172, 4), IR(27170, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpVectorTimesMatrix, true, true, IR(172, 4), IR(27188, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesVector, true, true, IR(172, 4), IR(27206, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesMatrix, true, true, IR(172, 4), IR(27224, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpOuterProduct, true, true, IR(172, 4), IR(27242, 13), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpDot, true, true, IR(172, 4), IR(27255, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIAddCarry, true, true, IR(172, 4), IR(27259, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpISubBorrow, true, true, IR(172, 4), IR(27269, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUMulExtended, true, true, IR(172, 4), IR(27280, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSMulExtended, true, true, IR(172, 4), IR(27293, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpAny, true, true, IR(160, 3), IR(27306, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpAll, true, true, IR(160, 3), IR(27310, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsNan, true, true, IR(160, 3), IR(27314, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsInf, true, true, IR(160, 3), IR(27320, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsFinite, true, true, IR(160, 3), IR(27326, 9), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsNormal, true, true, IR(160, 3), IR(27335, 9), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSignBitSet, true, true, IR(160, 3), IR(27344, 11), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLessOrGreater, true, true, IR(172, 4), IR(27355, 14), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), SPV_SPIRV_VERSION_WORD(1,5), PrintingClass::kRelational_and_Logical},
  {spv::Op::OpOrdered, true, true, IR(172, 4), IR(27369, 8), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUnordered, true, true, IR(172, 4), IR(27377, 10), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalEqual, true, true, IR(172, 4), IR(27387, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalNotEqual, true, true, IR(172, 4), IR(27400, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalOr, true, true, IR(172, 4), IR(27416, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalAnd, true, true, IR(172, 4), IR(27426, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalNot, true, true, IR(160, 3), IR(27437, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSelect, true, true, IR(130, 5), IR(27448, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIEqual, true, true, IR(172, 4), IR(27455, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpINotEqual, true, true, IR(172, 4), IR(27462, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUGreaterThan, true, true, IR(172, 4), IR(27472, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSGreaterThan, true, true, IR(172, 4), IR(27485, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUGreaterThanEqual, true, true, IR(172, 4), IR(27498, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSGreaterThanEqual, true, true, IR(172, 4), IR(27516, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpULessThan, true, true, IR(172, 4), IR(27534, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSLessThan, true, true, IR(172, 4), IR(27544, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpULessThanEqual, true, true, IR(172, 4), IR(27554, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSLessThanEqual, true, true, IR(172, 4), IR(27569, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdEqual, true, true, IR(172, 4), IR(27584, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordEqual, true, true, IR(172, 4), IR(27594, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdNotEqual, true, true, IR(172, 4), IR(27606, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordNotEqual, true, true, IR(172, 4), IR(27619, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdLessThan, true, true, IR(172, 4), IR(27634, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordLessThan, true, true, IR(172, 4), IR(27647, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdGreaterThan, true, true, IR(172, 4), IR(27662, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordGreaterThan, true, true, IR(172, 4), IR(27678, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdLessThanEqual, true, true, IR(172, 4), IR(27696, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordLessThanEqual, true, true, IR(172, 4), IR(27714, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdGreaterThanEqual, true, true, IR(172, 4), IR(27734, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordGreaterThanEqual, true, true, IR(172, 4), IR(27755, 23), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpShiftRightLogical, true, true, IR(172, 4), IR(27778, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpShiftRightArithmetic, true, true, IR(172, 4), IR(27796, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpShiftLeftLogical, true, true, IR(172, 4), IR(27817, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseOr, true, true, IR(172, 4), IR(27834, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseXor, true, true, IR(172, 4), IR(27844, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseAnd, true, true, IR(172, 4), IR(27855, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpNot, true, true, IR(160, 3), IR(27866, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldInsert, true, true, IR(215, 6), IR(27870, 15), IR(0, 0), IR(207, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldSExtract, true, true, IR(130, 5), IR(27885, 17), IR(0, 0), IR(207, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldUExtract, true, true, IR(130, 5), IR(27902, 17), IR(0, 0), IR(207, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitReverse, true, true, IR(160, 3), IR(27919, 11), IR(0, 0), IR(207, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitCount, true, true, IR(160, 3), IR(27930, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpDPdx, true, true, IR(160, 3), IR(27939, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdy, true, true, IR(160, 3), IR(27944, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidth, true, true, IR(160, 3), IR(27949, 7), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdxFine, true, true, IR(160, 3), IR(27956, 9), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdyFine, true, true, IR(160, 3), IR(27965, 9), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidthFine, true, true, IR(160, 3), IR(27974, 11), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdxCoarse, true, true, IR(160, 3), IR(27985, 11), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdyCoarse, true, true, IR(160, 3), IR(27996, 11), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidthCoarse, true, true, IR(160, 3), IR(28007, 13), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpEmitVertex, false, false, IR(0, 0), IR(28020, 11), IR(0, 0), IR(69, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEndPrimitive, false, false, IR(0, 0), IR(28031, 13), IR(0, 0), IR(69, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEmitStreamVertex, false, false, IR(10, 1), IR(28044, 17), IR(0, 0), IR(108, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEndStreamPrimitive, false, false, IR(10, 1), IR(28061, 19), IR(0, 0), IR(108, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpControlBarrier, false, false, IR(221, 3), IR(28117, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpMemoryBarrier, false, false, IR(224, 2), IR(28132, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpAtomicLoad, true, true, IR(226, 5), IR(28146, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicStore, false, false, IR(231, 4), IR(28157, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicExchange, true, true, IR(235, 6), IR(28169, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicCompareExchange, true, true, IR(241, 8), IR(28184, 22), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicCompareExchangeWeak, true, true, IR(241, 8), IR(28206, 26), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), SPV_SPIRV_VERSION_WORD(1,3), PrintingClass::kAtomic},
  {spv::Op::OpAtomicIIncrement, true, true, IR(226, 5), IR(28232, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicIDecrement, true, true, IR(226, 5), IR(28249, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicIAdd, true, true, IR(235, 6), IR(28266, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicISub, true, true, IR(235, 6), IR(28277, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicSMin, true, true, IR(235, 6), IR(28288, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicUMin, true, true, IR(235, 6), IR(28299, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicSMax, true, true, IR(235, 6), IR(28310, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicUMax, true, true, IR(235, 6), IR(28321, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicAnd, true, true, IR(235, 6), IR(28332, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicOr, true, true, IR(235, 6), IR(28342, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicXor, true, true, IR(235, 6), IR(28351, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpPhi, true, true, IR(107, 3), IR(28361, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLoopMerge, false, false, IR(249, 3), IR(28395, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpSelectionMerge, false, false, IR(252, 2), IR(28440, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLabel, true, false, IR(68, 1), IR(28455, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpBranch, false, false, IR(10, 1), IR(28461, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpBranchConditional, false, false, IR(254, 4), IR(28468, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpSwitch, false, false, IR(258, 3), IR(28531, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpKill, false, false, IR(0, 0), IR(28538, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpReturn, false, false, IR(0, 0), IR(28543, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpReturnValue, false, false, IR(10, 1), IR(28550, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpUnreachable, false, false, IR(0, 0), IR(28562, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLifetimeStart, false, false, IR(261, 2), IR(28574, 14), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLifetimeStop, false, false, IR(261, 2), IR(28588, 13), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpGroupAsyncCopy, true, true, IR(263, 8), IR(28601, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupWaitEvents, false, false, IR(271, 3), IR(28616, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupAll, true, true, IR(274, 4), IR(28632, 9), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupAny, true, true, IR(274, 4), IR(28641, 9), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBroadcast, true, true, IR(278, 5), IR(28650, 15), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupIAdd, true, true, IR(283, 5), IR(28698, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFAdd, true, true, IR(283, 5), IR(28708, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMin, true, true, IR(283, 5), IR(28718, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMin, true, true, IR(283, 5), IR(28728, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMin, true, true, IR(283, 5), IR(28738, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMax, true, true, IR(283, 5), IR(28748, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMax, true, true, IR(283, 5), IR(28758, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMax, true, true, IR(283, 5), IR(28768, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpReadPipe, true, true, IR(215, 6), IR(28778, 9), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpWritePipe, true, true, IR(215, 6), IR(28787, 10), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReservedReadPipe, true, true, IR(288, 8), IR(28797, 17), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReservedWritePipe, true, true, IR(288, 8), IR(28814, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReserveReadPipePackets, true, true, IR(215, 6), IR(28832, 23), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReserveWritePipePackets, true, true, IR(215, 6), IR(28855, 24), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCommitReadPipe, false, false, IR(296, 4), IR(28879, 15), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCommitWritePipe, false, false, IR(296, 4), IR(28894, 16), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpIsValidReserveId, true, true, IR(160, 3), IR(28910, 17), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetNumPipePackets, true, true, IR(130, 5), IR(28927, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetMaxPipePackets, true, true, IR(130, 5), IR(28945, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupReserveReadPipePackets, true, true, IR(300, 7), IR(28963, 28), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupReserveWritePipePackets, true, true, IR(300, 7), IR(28991, 29), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupCommitReadPipe, false, false, IR(307, 5), IR(29020, 20), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupCommitWritePipe, false, false, IR(307, 5), IR(29040, 21), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpEnqueueMarker, true, true, IR(215, 6), IR(29061, 14), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpEnqueueKernel, true, true, IR(312, 13), IR(29075, 14), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelNDrangeSubGroupCount, true, true, IR(325, 7), IR(29089, 30), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelNDrangeMaxSubGroupSize, true, true, IR(325, 7), IR(29119, 32), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelWorkGroupSize, true, true, IR(215, 6), IR(29151, 23), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelPreferredWorkGroupSizeMultiple, true, true, IR(215, 6), IR(29174, 40), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpRetainEvent, false, false, IR(10, 1), IR(29214, 12), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpReleaseEvent, false, false, IR(10, 1), IR(29226, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpCreateUserEvent, true, true, IR(39, 2), IR(29239, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpIsValidEvent, true, true, IR(160, 3), IR(29255, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpSetUserEventStatus, false, false, IR(36, 2), IR(29268, 19), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpCaptureEventProfilingInfo, false, false, IR(33, 3), IR(29287, 26), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetDefaultQueue, true, true, IR(39, 2), IR(29313, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpBuildNDRange, true, true, IR(130, 5), IR(29329, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpImageSparseSampleImplicitLod, true, true, IR(185, 5), IR(29342, 29), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleExplicitLod, true, true, IR(190, 5), IR(29371, 29), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleDrefImplicitLod, true, true, IR(195, 6), IR(29400, 33), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleDrefExplicitLod, true, true, IR(201, 6), IR(29433, 33), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjImplicitLod, true, true, IR(185, 5), IR(29466, 33), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjExplicitLod, true, true, IR(190, 5), IR(29499, 33), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjDrefImplicitLod, true, true, IR(195, 6), IR(29532, 37), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjDrefExplicitLod, true, true, IR(201, 6), IR(29569, 37), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseFetch, true, true, IR(185, 5), IR(29606, 17), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseGather, true, true, IR(195, 6), IR(29623, 18), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseDrefGather, true, true, IR(195, 6), IR(29641, 22), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseTexelsResident, true, true, IR(160, 3), IR(29663, 26), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpNoLine, false, false, IR(0, 0), IR(29689, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpAtomicFlagTestAndSet, true, true, IR(226, 5), IR(29696, 21), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicFlagClear, false, false, IR(332, 3), IR(29717, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpImageSparseRead, true, true, IR(185, 5), IR(29733, 16), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpSizeOf, true, true, IR(160, 3), IR(29749, 7), IR(0, 0), IR(1, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpTypePipeStorage, true, false, IR(68, 1), IR(29756, 16), IR(0, 0), IR(212, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantPipeStorage, true, true, IR(335, 5), IR(29772, 20), IR(0, 0), IR(212, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCreatePipeFromPipeStorage, true, true, IR(160, 3), IR(29792, 26), IR(0, 0), IR(212, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetKernelLocalSizeForSubgroupCount, true, true, IR(325, 7), IR(29818, 35), IR(0, 0), IR(146, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelMaxNumSubgroups, true, true, IR(215, 6), IR(29853, 25), IR(0, 0), IR(146, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpTypeNamedBarrier, true, false, IR(68, 1), IR(29878, 17), IR(0, 0), IR(213, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpNamedBarrierInitialize, true, true, IR(160, 3), IR(29895, 23), IR(0, 0), IR(213, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpMemoryNamedBarrier, false, false, IR(332, 3), IR(29918, 19), IR(0, 0), IR(213, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpModuleProcessed, false, false, IR(11, 1), IR(29937, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpExecutionModeId, false, false, IR(65, 2), IR(29953, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,2), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpDecorateId, false, false, IR(163, 2), IR(29969, 11), IR(0, 0), IR(1, 0), IR(150, 1), SPV_SPIRV_VERSION_WORD(1,2), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupNonUniformElect, true, true, IR(340, 3), IR(29980, 21), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAll, true, true, IR(274, 4), IR(30001, 19), IR(0, 0), IR(214, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAny, true, true, IR(274, 4), IR(30020, 19), IR(0, 0), IR(214, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAllEqual, true, true, IR(274, 4), IR(30039, 24), IR(0, 0), IR(214, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBroadcast, true, true, IR(278, 5), IR(30063, 25), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBroadcastFirst, true, true, IR(274, 4), IR(30088, 30), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallot, true, true, IR(274, 4), IR(5497, 22), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformInverseBallot, true, true, IR(274, 4), IR(30118, 29), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotBitExtract, true, true, IR(278, 5), IR(30147, 32), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotBitCount, true, true, IR(283, 5), IR(30179, 30), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotFindLSB, true, true, IR(274, 4), IR(30209, 29), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotFindMSB, true, true, IR(274, 4), IR(30238, 29), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffle, true, true, IR(278, 5), IR(8587, 23), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleXor, true, true, IR(278, 5), IR(30267, 26), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleUp, true, true, IR(278, 5), IR(30293, 25), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleDown, true, true, IR(278, 5), IR(30318, 27), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformIAdd, true, true, IR(343, 6), IR(30345, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFAdd, true, true, IR(343, 6), IR(30365, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformIMul, true, true, IR(343, 6), IR(30385, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMul, true, true, IR(343, 6), IR(30405, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformSMin, true, true, IR(343, 6), IR(30425, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformUMin, true, true, IR(343, 6), IR(30445, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMin, true, true, IR(343, 6), IR(30465, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformSMax, true, true, IR(343, 6), IR(30485, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformUMax, true, true, IR(343, 6), IR(30505, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMax, true, true, IR(343, 6), IR(30525, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseAnd, true, true, IR(343, 6), IR(30545, 26), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseOr, true, true, IR(343, 6), IR(30571, 25), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseXor, true, true, IR(343, 6), IR(30596, 26), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalAnd, true, true, IR(343, 6), IR(30622, 26), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalOr, true, true, IR(343, 6), IR(30648, 25), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalXor, true, true, IR(343, 6), IR(30673, 26), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadBroadcast, true, true, IR(278, 5), IR(30699, 29), IR(0, 0), IR(221, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadSwap, true, true, IR(278, 5), IR(30728, 24), IR(0, 0), IR(221, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpCopyLogical, true, true, IR(160, 3), IR(30752, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpPtrEqual, true, true, IR(172, 4), IR(30764, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrNotEqual, true, true, IR(172, 4), IR(30773, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrDiff, true, true, IR(172, 4), IR(30785, 8), IR(0, 0), IR(222, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpColorAttachmentReadEXT, true, true, IR(349, 4), IR(30793, 23), IR(0, 0), IR(138, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpDepthAttachmentReadEXT, true, true, IR(353, 3), IR(30816, 23), IR(0, 0), IR(147, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpStencilAttachmentReadEXT, true, true, IR(353, 3), IR(30839, 25), IR(0, 0), IR(148, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpTerminateInvocation, false, false, IR(0, 0), IR(30864, 20), IR(0, 0), IR(3, 1), IR(160, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpTypeUntypedPointerKHR, true, false, IR(356, 2), IR(30884, 22), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpUntypedVariableKHR, true, true, IR(358, 5), IR(30906, 19), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedAccessChainKHR, true, true, IR(151, 5), IR(30925, 22), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedInBoundsAccessChainKHR, true, true, IR(151, 5), IR(30947, 30), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpSubgroupBallotKHR, true, true, IR(160, 3), IR(5258, 18), IR(0, 0), IR(226, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupFirstInvocationKHR, true, true, IR(160, 3), IR(30977, 27), IR(0, 0), IR(226, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpUntypedPtrAccessChainKHR, true, true, IR(363, 6), IR(31004, 25), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedInBoundsPtrAccessChainKHR, true, true, IR(363, 6), IR(31029, 33), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedArrayLengthKHR, true, true, IR(369, 5), IR(31062, 22), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedPrefetchKHR, false, false, IR(374, 5), IR(31084, 19), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpSubgroupAllKHR, true, true, IR(160, 3), IR(31103, 15), IR(0, 0), IR(227, 1), IR(38, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupAnyKHR, true, true, IR(160, 3), IR(31118, 15), IR(0, 0), IR(227, 1), IR(38, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupAllEqualKHR, true, true, IR(160, 3), IR(31133, 20), IR(0, 0), IR(227, 1), IR(38, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupNonUniformRotateKHR, true, true, IR(379, 6), IR(12890, 25), IR(0, 0), IR(228, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupReadInvocationKHR, true, true, IR(172, 4), IR(31153, 26), IR(0, 0), IR(226, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpExtInstWithForwardRefsKHR, true, true, IR(385, 5), IR(31179, 26), IR(0, 0), IR(1, 0), IR(161, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpTraceRayKHR, false, false, IR(390, 11), IR(31205, 12), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpExecuteCallableKHR, false, false, IR(36, 2), IR(31217, 19), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToAccelerationStructureKHR, true, true, IR(160, 3), IR(31236, 35), IR(0, 0), IR(229, 2), IR(162, 2), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIgnoreIntersectionKHR, false, false, IR(0, 0), IR(31271, 22), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTerminateRayKHR, false, false, IR(0, 0), IR(31293, 16), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSDot, true, true, IR(401, 5), IR(31356, 5), IR(93, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDot, true, true, IR(401, 5), IR(31369, 5), IR(94, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSUDot, true, true, IR(401, 5), IR(31382, 6), IR(95, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSDotAccSat, true, true, IR(406, 6), IR(31397, 11), IR(96, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDotAccSat, true, true, IR(406, 6), IR(31422, 11), IR(97, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSUDotAccSat, true, true, IR(406, 6), IR(31447, 12), IR(98, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpTypeCooperativeMatrixKHR, true, false, IR(412, 6), IR(31474, 25), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeMatrixLoadKHR, true, true, IR(418, 6), IR(31499, 25), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixStoreKHR, false, false, IR(424, 5), IR(31524, 26), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixMulAddKHR, true, true, IR(429, 6), IR(31604, 27), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpCooperativeMatrixLengthKHR, true, true, IR(160, 3), IR(31631, 27), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpConstantCompositeReplicateEXT, true, true, IR(160, 3), IR(31658, 30), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCompositeReplicateEXT, true, true, IR(160, 3), IR(31688, 34), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpCompositeConstructReplicateEXT, true, true, IR(160, 3), IR(31722, 31), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpTypeRayQueryKHR, true, false, IR(68, 1), IR(31753, 16), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpRayQueryInitializeKHR, false, false, IR(435, 8), IR(31769, 22), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryTerminateKHR, false, false, IR(10, 1), IR(31791, 21), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGenerateIntersectionKHR, false, false, IR(36, 2), IR(31812, 32), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryConfirmIntersectionKHR, false, false, IR(10, 1), IR(31844, 31), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryProceedKHR, true, true, IR(160, 3), IR(31875, 19), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTypeKHR, true, true, IR(172, 4), IR(31894, 31), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpImageSampleWeightedQCOM, true, true, IR(130, 5), IR(31925, 24), IR(0, 0), IR(234, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBoxFilterQCOM, true, true, IR(130, 5), IR(31949, 19), IR(0, 0), IR(235, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchSSDQCOM, true, true, IR(325, 7), IR(31968, 23), IR(0, 0), IR(236, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchSADQCOM, true, true, IR(325, 7), IR(31991, 23), IR(0, 0), IR(236, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchWindowSSDQCOM, true, true, IR(325, 7), IR(32014, 29), IR(0, 0), IR(237, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchWindowSADQCOM, true, true, IR(325, 7), IR(32043, 29), IR(0, 0), IR(237, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchGatherSSDQCOM, true, true, IR(325, 7), IR(32072, 29), IR(0, 0), IR(237, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchGatherSADQCOM, true, true, IR(325, 7), IR(32101, 29), IR(0, 0), IR(237, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpGroupIAddNonUniformAMD, true, true, IR(283, 5), IR(32130, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFAddNonUniformAMD, true, true, IR(283, 5), IR(32153, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMinNonUniformAMD, true, true, IR(283, 5), IR(32176, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMinNonUniformAMD, true, true, IR(283, 5), IR(32199, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMinNonUniformAMD, true, true, IR(283, 5), IR(32222, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMaxNonUniformAMD, true, true, IR(283, 5), IR(32245, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMaxNonUniformAMD, true, true, IR(283, 5), IR(32268, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMaxNonUniformAMD, true, true, IR(283, 5), IR(32291, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpFragmentMaskFetchAMD, true, true, IR(172, 4), IR(32314, 21), IR(0, 0), IR(238, 1), IR(54, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFragmentFetchAMD, true, true, IR(130, 5), IR(32335, 17), IR(0, 0), IR(238, 1), IR(54, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReadClockKHR, true, true, IR(340, 3), IR(32352, 13), IR(0, 0), IR(239, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAllocateNodePayloadsAMDX, true, true, IR(278, 5), IR(32365, 25), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpEnqueueNodePayloadsAMDX, false, false, IR(10, 1), IR(32390, 24), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeNodePayloadArrayAMDX, true, false, IR(87, 2), IR(32414, 25), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFinishWritingNodePayloadAMDX, true, true, IR(160, 3), IR(32439, 29), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpNodePayloadArrayLengthAMDX, true, true, IR(160, 3), IR(32468, 27), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIsNodePayloadValidAMDX, true, true, IR(172, 4), IR(32495, 23), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConstantStringAMDX, true, false, IR(50, 2), IR(32518, 19), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSpecConstantStringAMDX, true, false, IR(50, 2), IR(32537, 23), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpGroupNonUniformQuadAllKHR, true, true, IR(160, 3), IR(32560, 26), IR(0, 0), IR(155, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadAnyKHR, true, true, IR(160, 3), IR(32586, 26), IR(0, 0), IR(155, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpHitObjectRecordHitMotionNV, false, false, IR(443, 14), IR(32612, 27), IR(0, 0), IR(240, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitWithIndexMotionNV, false, false, IR(457, 13), IR(32639, 36), IR(0, 0), IR(240, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissMotionNV, false, false, IR(470, 7), IR(32675, 28), IR(0, 0), IR(240, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldToObjectNV, true, true, IR(160, 3), IR(32703, 28), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectToWorldNV, true, true, IR(160, 3), IR(32731, 28), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayDirectionNV, true, true, IR(160, 3), IR(32759, 33), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayOriginNV, true, true, IR(160, 3), IR(32792, 30), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayMotionNV, false, false, IR(457, 13), IR(32822, 26), IR(0, 0), IR(240, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderRecordBufferHandleNV, true, true, IR(160, 3), IR(32848, 39), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderBindingTableRecordIndexNV, true, true, IR(160, 3), IR(32887, 44), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordEmptyNV, false, false, IR(10, 1), IR(32931, 23), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayNV, false, false, IR(477, 12), IR(32954, 20), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitNV, false, false, IR(457, 13), IR(32974, 21), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitWithIndexNV, false, false, IR(477, 12), IR(32995, 30), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissNV, false, false, IR(489, 6), IR(33025, 22), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectExecuteShaderNV, false, false, IR(36, 2), IR(33047, 25), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetCurrentTimeNV, true, true, IR(160, 3), IR(33072, 26), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetAttributesNV, false, false, IR(36, 2), IR(33098, 25), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetHitKindNV, true, true, IR(160, 3), IR(33123, 22), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetPrimitiveIndexNV, true, true, IR(160, 3), IR(33145, 29), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetGeometryIndexNV, true, true, IR(160, 3), IR(33174, 28), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceIdNV, true, true, IR(160, 3), IR(33202, 25), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceCustomIndexNV, true, true, IR(160, 3), IR(33227, 34), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayDirectionNV, true, true, IR(160, 3), IR(33261, 32), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayOriginNV, true, true, IR(160, 3), IR(33293, 29), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMaxNV, true, true, IR(160, 3), IR(33322, 22), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMinNV, true, true, IR(160, 3), IR(33344, 22), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsEmptyNV, true, true, IR(160, 3), IR(33366, 19), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsHitNV, true, true, IR(160, 3), IR(33385, 17), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsMissNV, true, true, IR(160, 3), IR(33402, 18), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHitObjectNV, false, false, IR(495, 3), IR(33420, 29), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHintNV, false, false, IR(36, 2), IR(33449, 24), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeHitObjectNV, true, false, IR(68, 1), IR(33473, 16), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpImageSampleFootprintNV, true, true, IR(498, 7), IR(33489, 23), IR(0, 0), IR(242, 1), IR(67, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpTypeCooperativeVectorNV, true, false, IR(89, 3), IR(33512, 24), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeVectorMatrixMulNV, true, true, IR(505, 13), IR(33536, 29), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorOuterProductAccumulateNV, false, false, IR(518, 7), IR(33565, 42), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorReduceSumAccumulateNV, false, false, IR(33, 3), IR(33607, 39), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorMatrixMulAddNV, true, true, IR(525, 16), IR(33646, 32), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixConvertNV, true, true, IR(160, 3), IR(33678, 27), IR(0, 0), IR(245, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpEmitMeshTasksEXT, false, false, IR(541, 4), IR(33705, 17), IR(0, 0), IR(53, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSetMeshOutputsEXT, false, false, IR(36, 2), IR(33722, 18), IR(0, 0), IR(53, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpGroupNonUniformPartitionNV, true, true, IR(160, 3), IR(33740, 27), IR(0, 0), IR(176, 1), IR(70, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpWritePackedPrimitiveIndices4x8NV, false, false, IR(36, 2), IR(33767, 33), IR(0, 0), IR(50, 1), IR(18, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFetchMicroTriangleVertexPositionNV, true, true, IR(325, 7), IR(33800, 35), IR(0, 0), IR(246, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFetchMicroTriangleVertexBarycentricNV, true, true, IR(325, 7), IR(33835, 38), IR(0, 0), IR(246, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorLoadNV, true, true, IR(545, 5), IR(33873, 24), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeVectorStoreNV, false, false, IR(550, 4), IR(33897, 25), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpReportIntersectionKHR, true, true, IR(172, 4), IR(33922, 22), IR(99, 1), IR(54, 2), IR(164, 2), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIgnoreIntersectionNV, false, false, IR(0, 0), IR(33965, 21), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTerminateRayNV, false, false, IR(0, 0), IR(33986, 15), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceNV, false, false, IR(390, 11), IR(34001, 8), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceMotionNV, false, false, IR(477, 12), IR(34009, 14), IR(0, 0), IR(57, 1), IR(27, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceRayMotionNV, false, false, IR(477, 12), IR(34023, 17), IR(0, 0), IR(57, 1), IR(27, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTriangleVertexPositionsKHR, true, true, IR(172, 4), IR(34040, 50), IR(0, 0), IR(247, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeAccelerationStructureKHR, true, false, IR(68, 1), IR(34090, 29), IR(100, 1), IR(248, 4), IR(166, 4), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpExecuteCallableNV, false, false, IR(36, 2), IR(34147, 18), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetClusterIdNV, true, true, IR(172, 4), IR(34165, 23), IR(0, 0), IR(64, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetClusterIdNV, true, true, IR(160, 3), IR(34188, 24), IR(0, 0), IR(64, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeCooperativeMatrixNV, true, false, IR(554, 5), IR(34212, 24), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeMatrixLoadNV, true, true, IR(559, 6), IR(34236, 24), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixStoreNV, false, false, IR(565, 5), IR(34260, 25), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixMulAddNV, true, true, IR(130, 5), IR(34285, 26), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixLengthNV, true, true, IR(160, 3), IR(34311, 26), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpBeginInvocationInterlockEXT, false, false, IR(0, 0), IR(34337, 28), IR(0, 0), IR(253, 3), IR(75, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpEndInvocationInterlockEXT, false, false, IR(0, 0), IR(34365, 26), IR(0, 0), IR(253, 3), IR(75, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixReduceNV, true, true, IR(570, 5), IR(34434, 26), IR(0, 0), IR(256, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpCooperativeMatrixLoadTensorNV, true, true, IR(575, 7), IR(34535, 30), IR(0, 0), IR(193, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixStoreTensorNV, false, false, IR(582, 5), IR(34565, 31), IR(0, 0), IR(193, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixPerElementOpNV, true, true, IR(151, 5), IR(34596, 32), IR(0, 0), IR(257, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpTypeTensorLayoutNV, true, false, IR(89, 3), IR(34628, 19), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeTensorViewNV, true, false, IR(587, 4), IR(34647, 17), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCreateTensorLayoutNV, true, true, IR(39, 2), IR(34664, 21), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetDimensionNV, true, true, IR(122, 4), IR(34685, 27), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetStrideNV, true, true, IR(122, 4), IR(34712, 24), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSliceNV, true, true, IR(122, 4), IR(34736, 20), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetClampValueNV, true, true, IR(172, 4), IR(34756, 28), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCreateTensorViewNV, true, true, IR(39, 2), IR(34784, 19), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetDimensionNV, true, true, IR(122, 4), IR(34803, 25), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetStrideNV, true, true, IR(122, 4), IR(34828, 22), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpDemoteToHelperInvocation, false, false, IR(0, 0), IR(11202, 25), IR(45, 1), IR(259, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpIsHelperInvocationEXT, true, true, IR(39, 2), IR(34850, 22), IR(0, 0), IR(259, 1), IR(76, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetClipNV, true, true, IR(325, 7), IR(34872, 20), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetBlockSizeNV, true, true, IR(122, 4), IR(34892, 27), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixTransposeNV, true, true, IR(160, 3), IR(34919, 29), IR(0, 0), IR(245, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToImageNV, true, true, IR(160, 3), IR(34948, 18), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToSamplerNV, true, true, IR(160, 3), IR(34966, 20), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertImageToUNV, true, true, IR(160, 3), IR(34986, 18), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertSamplerToUNV, true, true, IR(160, 3), IR(35004, 20), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToSampledImageNV, true, true, IR(160, 3), IR(35024, 25), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertSampledImageToUNV, true, true, IR(160, 3), IR(35049, 25), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSamplerImageAddressingModeNV, false, false, IR(0, 1), IR(35074, 29), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRawAccessChainNV, true, true, IR(591, 7), IR(35155, 17), IR(0, 0), IR(182, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpRayQueryGetIntersectionSpherePositionNV, true, true, IR(172, 4), IR(35172, 40), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionSphereRadiusNV, true, true, IR(172, 4), IR(35212, 38), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSPositionsNV, true, true, IR(172, 4), IR(35250, 38), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSRadiiNV, true, true, IR(172, 4), IR(35288, 34), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSHitValueNV, true, true, IR(172, 4), IR(35322, 37), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetSpherePositionNV, true, true, IR(160, 3), IR(35359, 29), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetSphereRadiusNV, true, true, IR(160, 3), IR(35388, 27), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetLSSPositionsNV, true, true, IR(160, 3), IR(35415, 27), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetLSSRadiiNV, true, true, IR(160, 3), IR(35442, 23), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsSphereHitNV, true, true, IR(160, 3), IR(35465, 23), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsLSSHitNV, true, true, IR(160, 3), IR(35488, 20), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryIsSphereHitNV, true, true, IR(172, 4), IR(35508, 22), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryIsLSSHitNV, true, true, IR(172, 4), IR(35530, 19), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSubgroupShuffleINTEL, true, true, IR(172, 4), IR(11650, 21), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleDownINTEL, true, true, IR(130, 5), IR(35549, 25), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleUpINTEL, true, true, IR(130, 5), IR(35574, 23), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleXorINTEL, true, true, IR(172, 4), IR(35597, 24), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupBlockReadINTEL, true, true, IR(160, 3), IR(35621, 23), IR(0, 0), IR(261, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupBlockWriteINTEL, false, false, IR(36, 2), IR(35644, 24), IR(0, 0), IR(261, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageBlockReadINTEL, true, true, IR(172, 4), IR(35668, 28), IR(0, 0), IR(262, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageBlockWriteINTEL, false, false, IR(33, 3), IR(35696, 29), IR(0, 0), IR(262, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageMediaBlockReadINTEL, true, true, IR(215, 6), IR(35725, 33), IR(0, 0), IR(263, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageMediaBlockWriteINTEL, false, false, IR(598, 5), IR(35758, 34), IR(0, 0), IR(263, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpUCountLeadingZerosINTEL, true, true, IR(160, 3), IR(35792, 24), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUCountTrailingZerosINTEL, true, true, IR(160, 3), IR(35816, 25), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAbsISubINTEL, true, true, IR(172, 4), IR(35841, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAbsUSubINTEL, true, true, IR(172, 4), IR(35854, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAddSatINTEL, true, true, IR(172, 4), IR(35867, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAddSatINTEL, true, true, IR(172, 4), IR(35880, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAverageINTEL, true, true, IR(172, 4), IR(35893, 14), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAverageINTEL, true, true, IR(172, 4), IR(35907, 14), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAverageRoundedINTEL, true, true, IR(172, 4), IR(35921, 21), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAverageRoundedINTEL, true, true, IR(172, 4), IR(35942, 21), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpISubSatINTEL, true, true, IR(172, 4), IR(35963, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUSubSatINTEL, true, true, IR(172, 4), IR(35976, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIMul32x16INTEL, true, true, IR(172, 4), IR(35989, 15), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUMul32x16INTEL, true, true, IR(172, 4), IR(36004, 15), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConstantFunctionPointerINTEL, true, true, IR(160, 3), IR(36019, 29), IR(0, 0), IR(191, 1), IR(90, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFunctionPointerCallINTEL, true, true, IR(107, 3), IR(36048, 25), IR(0, 0), IR(191, 1), IR(90, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmTargetINTEL, true, false, IR(50, 2), IR(36073, 15), IR(0, 0), IR(121, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmINTEL, true, true, IR(603, 6), IR(11868, 9), IR(0, 0), IR(121, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmCallINTEL, true, true, IR(122, 4), IR(36088, 13), IR(0, 0), IR(121, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAtomicFMinEXT, true, true, IR(235, 6), IR(36101, 14), IR(0, 0), IR(265, 4), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicFMaxEXT, true, true, IR(235, 6), IR(36115, 14), IR(0, 0), IR(265, 4), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAssumeTrueKHR, false, false, IR(10, 1), IR(36129, 14), IR(0, 0), IR(269, 1), IR(94, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpExpectKHR, true, true, IR(172, 4), IR(36143, 10), IR(0, 0), IR(269, 1), IR(94, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpDecorateString, false, false, IR(163, 2), IR(36153, 15), IR(101, 1), IR(1, 0), IR(170, 2), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpMemberDecorateString, false, false, IR(165, 3), IR(36189, 21), IR(102, 1), IR(1, 0), IR(170, 2), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpVmeImageINTEL, true, true, IR(172, 4), IR(36237, 14), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeVmeImageINTEL, true, false, IR(87, 2), IR(36251, 18), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImePayloadINTEL, true, false, IR(68, 1), IR(36269, 23), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcRefPayloadINTEL, true, false, IR(68, 1), IR(36292, 23), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcSicPayloadINTEL, true, false, IR(68, 1), IR(36315, 23), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcMcePayloadINTEL, true, false, IR(68, 1), IR(36338, 23), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcMceResultINTEL, true, false, IR(68, 1), IR(36361, 22), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultINTEL, true, false, IR(68, 1), IR(36383, 22), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultSingleReferenceStreamoutINTEL, true, false, IR(68, 1), IR(36405, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultDualReferenceStreamoutINTEL, true, false, IR(68, 1), IR(36451, 44), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeSingleReferenceStreaminINTEL, true, false, IR(68, 1), IR(36495, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeDualReferenceStreaminINTEL, true, false, IR(68, 1), IR(36534, 37), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcRefResultINTEL, true, false, IR(68, 1), IR(36571, 22), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcSicResultINTEL, true, false, IR(68, 1), IR(36593, 22), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL, true, true, IR(172, 4), IR(36615, 60), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL, true, true, IR(172, 4), IR(36675, 53), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterShapePenaltyINTEL, true, true, IR(172, 4), IR(36728, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterShapePenaltyINTEL, true, true, IR(172, 4), IR(36775, 40), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL, true, true, IR(172, 4), IR(36815, 51), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterDirectionPenaltyINTEL, true, true, IR(172, 4), IR(36866, 44), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL, true, true, IR(172, 4), IR(36910, 51), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL, true, true, IR(172, 4), IR(36961, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL, true, true, IR(39, 2), IR(37017, 50), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL, true, true, IR(39, 2), IR(37067, 52), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL, true, true, IR(39, 2), IR(37119, 49), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetMotionVectorCostFunctionINTEL, true, true, IR(215, 6), IR(37168, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL, true, true, IR(172, 4), IR(37215, 50), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL, true, true, IR(39, 2), IR(37265, 51), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL, true, true, IR(39, 2), IR(37316, 56), IR(0, 0), IR(273, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetAcOnlyHaarINTEL, true, true, IR(160, 3), IR(37372, 33), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL, true, true, IR(172, 4), IR(37405, 52), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL, true, true, IR(172, 4), IR(37457, 61), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL, true, true, IR(130, 5), IR(37518, 61), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToImePayloadINTEL, true, true, IR(160, 3), IR(37579, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToImeResultINTEL, true, true, IR(160, 3), IR(37618, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToRefPayloadINTEL, true, true, IR(160, 3), IR(37656, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToRefResultINTEL, true, true, IR(160, 3), IR(37695, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToSicPayloadINTEL, true, true, IR(160, 3), IR(37733, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToSicResultINTEL, true, true, IR(160, 3), IR(37772, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetMotionVectorsINTEL, true, true, IR(160, 3), IR(37810, 36), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterDistortionsINTEL, true, true, IR(160, 3), IR(37846, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetBestInterDistortionsINTEL, true, true, IR(160, 3), IR(37885, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMajorShapeINTEL, true, true, IR(160, 3), IR(37928, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMinorShapeINTEL, true, true, IR(160, 3), IR(37966, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterDirectionsINTEL, true, true, IR(160, 3), IR(38004, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMotionVectorCountINTEL, true, true, IR(160, 3), IR(38042, 45), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterReferenceIdsINTEL, true, true, IR(160, 3), IR(38087, 40), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL, true, true, IR(130, 5), IR(38127, 62), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeInitializeINTEL, true, true, IR(130, 5), IR(38189, 30), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetSingleReferenceINTEL, true, true, IR(130, 5), IR(38219, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetDualReferenceINTEL, true, true, IR(215, 6), IR(38257, 36), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeRefWindowSizeINTEL, true, true, IR(172, 4), IR(38293, 33), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeAdjustRefOffsetINTEL, true, true, IR(215, 6), IR(38326, 35), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(38361, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetMaxMotionVectorCountINTEL, true, true, IR(172, 4), IR(38400, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetUnidirectionalMixDisableINTEL, true, true, IR(160, 3), IR(38443, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetEarlySearchTerminationThresholdINTEL, true, true, IR(172, 4), IR(38490, 54), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetWeightedSadINTEL, true, true, IR(172, 4), IR(38544, 34), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(38578, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(38625, 45), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL, true, true, IR(215, 6), IR(38670, 55), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL, true, true, IR(325, 7), IR(38725, 53), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL, true, true, IR(130, 5), IR(38778, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL, true, true, IR(215, 6), IR(38834, 54), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL, true, true, IR(215, 6), IR(38888, 58), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL, true, true, IR(325, 7), IR(38946, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeConvertToMceResultINTEL, true, true, IR(160, 3), IR(39002, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetSingleReferenceStreaminINTEL, true, true, IR(160, 3), IR(39040, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetDualReferenceStreaminINTEL, true, true, IR(160, 3), IR(39086, 44), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeStripSingleReferenceStreamoutINTEL, true, true, IR(160, 3), IR(39130, 49), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeStripDualReferenceStreamoutINTEL, true, true, IR(160, 3), IR(39179, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL, true, true, IR(172, 4), IR(39226, 70), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL, true, true, IR(172, 4), IR(39296, 68), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL, true, true, IR(172, 4), IR(39364, 69), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL, true, true, IR(130, 5), IR(39433, 68), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL, true, true, IR(130, 5), IR(39501, 66), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL, true, true, IR(130, 5), IR(39567, 67), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetBorderReachedINTEL, true, true, IR(172, 4), IR(39634, 36), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetTruncatedSearchIndicationINTEL, true, true, IR(160, 3), IR(39670, 48), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL, true, true, IR(160, 3), IR(39718, 59), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL, true, true, IR(160, 3), IR(39777, 58), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL, true, true, IR(160, 3), IR(39835, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcFmeInitializeINTEL, true, true, IR(609, 9), IR(39891, 30), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcBmeInitializeINTEL, true, true, IR(618, 10), IR(39921, 30), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(39951, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefSetBidirectionalMixDisableINTEL, true, true, IR(160, 3), IR(39990, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefSetBilinearFilterEnableINTEL, true, true, IR(160, 3), IR(40036, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(40079, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(40126, 45), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithMultiReferenceINTEL, true, true, IR(130, 5), IR(40171, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL, true, true, IR(215, 6), IR(40217, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefConvertToMceResultINTEL, true, true, IR(160, 3), IR(40273, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicInitializeINTEL, true, true, IR(160, 3), IR(40311, 30), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureSkcINTEL, true, true, IR(288, 8), IR(40341, 32), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureIpeLumaINTEL, true, true, IR(618, 10), IR(40373, 36), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureIpeLumaChromaINTEL, true, true, IR(628, 13), IR(40409, 42), IR(0, 0), IR(273, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetMotionVectorMaskINTEL, true, true, IR(172, 4), IR(40451, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(40490, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraLumaShapePenaltyINTEL, true, true, IR(172, 4), IR(40529, 44), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraLumaModeCostFunctionINTEL, true, true, IR(215, 6), IR(40573, 48), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraChromaModeCostFunctionINTEL, true, true, IR(172, 4), IR(40621, 50), IR(0, 0), IR(273, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetBilinearFilterEnableINTEL, true, true, IR(160, 3), IR(40671, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetSkcForwardTransformEnableINTEL, true, true, IR(172, 4), IR(40714, 48), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetBlockBasedRawSkipSadINTEL, true, true, IR(172, 4), IR(40762, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateIpeINTEL, true, true, IR(172, 4), IR(40805, 31), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(40836, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(40883, 45), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithMultiReferenceINTEL, true, true, IR(130, 5), IR(40928, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL, true, true, IR(215, 6), IR(40974, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConvertToMceResultINTEL, true, true, IR(160, 3), IR(41030, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetIpeLumaShapeINTEL, true, true, IR(160, 3), IR(41068, 35), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetBestIpeLumaDistortionINTEL, true, true, IR(160, 3), IR(41103, 44), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetBestIpeChromaDistortionINTEL, true, true, IR(160, 3), IR(41147, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedIpeLumaModesINTEL, true, true, IR(160, 3), IR(41193, 41), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetIpeChromaModeINTEL, true, true, IR(160, 3), IR(41234, 36), IR(0, 0), IR(273, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL, true, true, IR(160, 3), IR(41270, 50), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL, true, true, IR(160, 3), IR(41320, 48), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetInterRawSadsINTEL, true, true, IR(160, 3), IR(41368, 35), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpVariableLengthArrayINTEL, true, true, IR(160, 3), IR(12106, 25), IR(0, 0), IR(275, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSaveMemoryINTEL, true, true, IR(39, 2), IR(41403, 16), IR(0, 0), IR(275, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpRestoreMemoryINTEL, false, false, IR(10, 1), IR(41419, 19), IR(0, 0), IR(275, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinCosPiINTEL, true, true, IR(641, 8), IR(41438, 28), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastINTEL, true, true, IR(641, 8), IR(41466, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastFromIntINTEL, true, true, IR(641, 8), IR(41490, 31), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastToIntINTEL, true, true, IR(641, 8), IR(41521, 29), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatAddINTEL, true, true, IR(649, 10), IR(41550, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSubINTEL, true, true, IR(649, 10), IR(41573, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatMulINTEL, true, true, IR(649, 10), IR(41596, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatDivINTEL, true, true, IR(649, 10), IR(41619, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatGTINTEL, true, true, IR(659, 6), IR(41642, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatGEINTEL, true, true, IR(659, 6), IR(41664, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLTINTEL, true, true, IR(659, 6), IR(41686, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLEINTEL, true, true, IR(659, 6), IR(41708, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatEQINTEL, true, true, IR(659, 6), IR(41730, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatRecipINTEL, true, true, IR(641, 8), IR(41752, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatRSqrtINTEL, true, true, IR(641, 8), IR(41777, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCbrtINTEL, true, true, IR(641, 8), IR(41802, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatHypotINTEL, true, true, IR(649, 10), IR(41826, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSqrtINTEL, true, true, IR(641, 8), IR(41851, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLogINTEL, true, true, IR(641, 8), IR(41875, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog2INTEL, true, true, IR(641, 8), IR(41898, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog10INTEL, true, true, IR(641, 8), IR(41922, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog1pINTEL, true, true, IR(641, 8), IR(41947, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExpINTEL, true, true, IR(641, 8), IR(41972, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExp2INTEL, true, true, IR(641, 8), IR(41995, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExp10INTEL, true, true, IR(641, 8), IR(42019, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExpm1INTEL, true, true, IR(641, 8), IR(42044, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinINTEL, true, true, IR(641, 8), IR(42069, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCosINTEL, true, true, IR(641, 8), IR(42092, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinCosINTEL, true, true, IR(641, 8), IR(42115, 26), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinPiINTEL, true, true, IR(641, 8), IR(42141, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCosPiINTEL, true, true, IR(641, 8), IR(42166, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatASinINTEL, true, true, IR(641, 8), IR(42191, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatASinPiINTEL, true, true, IR(641, 8), IR(42215, 26), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatACosINTEL, true, true, IR(641, 8), IR(42241, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatACosPiINTEL, true, true, IR(641, 8), IR(42265, 26), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATanINTEL, true, true, IR(641, 8), IR(42291, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATanPiINTEL, true, true, IR(641, 8), IR(42315, 26), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATan2INTEL, true, true, IR(649, 10), IR(42341, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowINTEL, true, true, IR(649, 10), IR(42366, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowRINTEL, true, true, IR(649, 10), IR(42389, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowNINTEL, true, true, IR(649, 10), IR(42413, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpLoopControlINTEL, false, false, IR(18, 1), IR(42437, 17), IR(0, 0), IR(277, 1), IR(101, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAliasDomainDeclINTEL, true, false, IR(665, 2), IR(42454, 21), IR(0, 0), IR(127, 1), IR(108, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAliasScopeDeclINTEL, true, false, IR(667, 3), IR(42475, 20), IR(0, 0), IR(127, 1), IR(108, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAliasScopeListDeclINTEL, true, false, IR(92, 2), IR(42495, 24), IR(0, 0), IR(127, 1), IR(108, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSqrtINTEL, true, true, IR(641, 8), IR(42519, 15), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedRecipINTEL, true, true, IR(641, 8), IR(42534, 16), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedRsqrtINTEL, true, true, IR(641, 8), IR(42550, 16), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinINTEL, true, true, IR(641, 8), IR(42566, 14), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedCosINTEL, true, true, IR(641, 8), IR(42580, 14), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinCosINTEL, true, true, IR(641, 8), IR(42594, 17), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinPiINTEL, true, true, IR(641, 8), IR(42611, 16), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedCosPiINTEL, true, true, IR(641, 8), IR(42627, 16), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinCosPiINTEL, true, true, IR(641, 8), IR(42643, 19), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedLogINTEL, true, true, IR(641, 8), IR(42662, 14), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedExpINTEL, true, true, IR(641, 8), IR(42676, 14), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpPtrCastToCrossWorkgroupINTEL, true, true, IR(160, 3), IR(42690, 29), IR(0, 0), IR(192, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpCrossWorkgroupCastToPtrINTEL, true, true, IR(160, 3), IR(42719, 29), IR(0, 0), IR(192, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpReadPipeBlockingINTEL, true, true, IR(172, 4), IR(42748, 22), IR(0, 0), IR(278, 1), IR(115, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpWritePipeBlockingINTEL, true, true, IR(172, 4), IR(42770, 23), IR(0, 0), IR(278, 1), IR(115, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpFPGARegINTEL, true, true, IR(160, 3), IR(12665, 13), IR(0, 0), IR(279, 1), IR(116, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetRayTMinKHR, true, true, IR(160, 3), IR(42793, 22), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetRayFlagsKHR, true, true, IR(160, 3), IR(42815, 23), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTKHR, true, true, IR(172, 4), IR(42838, 28), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceCustomIndexKHR, true, true, IR(172, 4), IR(42866, 46), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceIdKHR, true, true, IR(172, 4), IR(42912, 37), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR, true, true, IR(172, 4), IR(42949, 65), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionGeometryIndexKHR, true, true, IR(172, 4), IR(43014, 40), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionPrimitiveIndexKHR, true, true, IR(172, 4), IR(43054, 41), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionBarycentricsKHR, true, true, IR(172, 4), IR(43095, 39), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionFrontFaceKHR, true, true, IR(172, 4), IR(43134, 36), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionCandidateAABBOpaqueKHR, true, true, IR(160, 3), IR(43170, 46), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectRayDirectionKHR, true, true, IR(172, 4), IR(43216, 45), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectRayOriginKHR, true, true, IR(172, 4), IR(43261, 42), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetWorldRayDirectionKHR, true, true, IR(160, 3), IR(43303, 32), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetWorldRayOriginKHR, true, true, IR(160, 3), IR(43335, 29), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectToWorldKHR, true, true, IR(172, 4), IR(43364, 40), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionWorldToObjectKHR, true, true, IR(172, 4), IR(43404, 40), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAtomicFAddEXT, true, true, IR(235, 6), IR(43444, 14), IR(0, 0), IR(280, 4), IR(123, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpTypeBufferSurfaceINTEL, true, false, IR(100, 2), IR(43458, 23), IR(0, 0), IR(119, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeStructContinuedINTEL, false, false, IR(670, 1), IR(43481, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantCompositeContinuedINTEL, false, false, IR(670, 1), IR(43506, 32), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCompositeContinuedINTEL, false, false, IR(670, 1), IR(43538, 36), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpCompositeConstructContinuedINTEL, true, true, IR(107, 3), IR(43574, 33), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpConvertFToBF16INTEL, true, true, IR(160, 3), IR(43607, 20), IR(0, 0), IR(285, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertBF16ToFINTEL, true, true, IR(160, 3), IR(43627, 20), IR(0, 0), IR(285, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpControlBarrierArriveINTEL, false, false, IR(221, 3), IR(43647, 26), IR(0, 0), IR(286, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpControlBarrierWaitINTEL, false, false, IR(221, 3), IR(43673, 24), IR(0, 0), IR(286, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpArithmeticFenceEXT, true, true, IR(160, 3), IR(13097, 19), IR(0, 0), IR(287, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpTaskSequenceCreateINTEL, true, true, IR(671, 7), IR(43697, 24), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceAsyncINTEL, false, false, IR(168, 2), IR(43721, 23), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceGetINTEL, true, true, IR(160, 3), IR(43744, 21), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceReleaseINTEL, false, false, IR(10, 1), IR(43765, 25), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeTaskSequenceINTEL, true, false, IR(68, 1), IR(43790, 22), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpSubgroupBlockPrefetchINTEL, false, false, IR(139, 3), IR(43812, 27), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadINTEL, false, false, IR(678, 10), IR(43839, 25), IR(0, 0), IR(103, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadTransformINTEL, false, false, IR(678, 10), IR(43864, 34), IR(0, 0), IR(290, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadTransposeINTEL, false, false, IR(678, 10), IR(43898, 34), IR(0, 0), IR(291, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockPrefetchINTEL, false, false, IR(688, 9), IR(43932, 29), IR(0, 0), IR(103, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockStoreINTEL, false, false, IR(678, 10), IR(43961, 26), IR(0, 0), IR(103, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupMatrixMultiplyAccumulateINTEL, true, true, IR(697, 7), IR(13435, 38), IR(0, 0), IR(292, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpBitwiseFunctionINTEL, true, true, IR(215, 6), IR(44049, 21), IR(0, 0), IR(293, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpGroupIMulKHR, true, true, IR(283, 5), IR(44070, 13), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMulKHR, true, true, IR(283, 5), IR(44083, 13), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseAndKHR, true, true, IR(283, 5), IR(44096, 19), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseOrKHR, true, true, IR(283, 5), IR(44115, 18), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseXorKHR, true, true, IR(283, 5), IR(44133, 19), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalAndKHR, true, true, IR(283, 5), IR(44152, 19), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalOrKHR, true, true, IR(283, 5), IR(44171, 18), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalXorKHR, true, true, IR(283, 5), IR(44189, 19), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpRoundFToTF32INTEL, true, true, IR(160, 3), IR(44208, 18), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpMaskedGatherINTEL, true, true, IR(704, 6), IR(44226, 18), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpMaskedScatterINTEL, false, false, IR(710, 4), IR(44244, 19), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
}};

// Opcode strings (without the 'Op' prefix) and opcode values, ordered by name.
// The fields in order are:
//   name, either the primary name or an alias, indexing into kStrings
//   index into kInstructionDesc
static const std::array<NameIndex, 805> kInstructionNames{{
  {IR(35841, 13), 537}, // 0 AbsISubINTEL
  {IR(35854, 13), 538}, // 1 AbsUSubINTEL
  {IR(26013, 12), 58}, // 2 AccessChain
  {IR(42454, 21), 723}, // 3 AliasDomainDeclINTEL
  {IR(42475, 20), 724}, // 4 AliasScopeDeclINTEL
  {IR(42495, 24), 725}, // 5 AliasScopeListDeclINTEL
  {IR(27310, 4), 143}, // 6 All
  {IR(32365, 25), 409}, // 7 AllocateNodePayloadsAMDX
  {IR(27306, 4), 142}, // 8 Any
  {IR(42241, 24), 714}, // 9 ArbitraryFloatACosINTEL
  {IR(42265, 26), 715}, // 10 ArbitraryFloatACosPiINTEL
  {IR(42191, 24), 712}, // 11 ArbitraryFloatASinINTEL
  {IR(42215, 26), 713}, // 12 ArbitraryFloatASinPiINTEL
  {IR(42341, 25), 718}, // 13 ArbitraryFloatATan2INTEL
  {IR(42291, 24), 716}, // 14 ArbitraryFloatATanINTEL
  {IR(42315, 26), 717}, // 15 ArbitraryFloatATanPiINTEL
  {IR(41550, 23), 685}, // 16 ArbitraryFloatAddINTEL
  {IR(41490, 31), 683}, // 17 ArbitraryFloatCastFromIntINTEL
  {IR(41466, 24), 682}, // 18 ArbitraryFloatCastINTEL
  {IR(41521, 29), 684}, // 19 ArbitraryFloatCastToIntINTEL
  {IR(41802, 24), 696}, // 20 ArbitraryFloatCbrtINTEL
  {IR(42092, 23), 708}, // 21 ArbitraryFloatCosINTEL
  {IR(42166, 25), 711}, // 22 ArbitraryFloatCosPiINTEL
  {IR(41619, 23), 688}, // 23 ArbitraryFloatDivINTEL
  {IR(41730, 22), 693}, // 24 ArbitraryFloatEQINTEL
  {IR(42019, 25), 705}, // 25 ArbitraryFloatExp10INTEL
  {IR(41995, 24), 704}, // 26 ArbitraryFloatExp2INTEL
  {IR(41972, 23), 703}, // 27 ArbitraryFloatExpINTEL
  {IR(42044, 25), 706}, // 28 ArbitraryFloatExpm1INTEL
  {IR(41664, 22), 690}, // 29 ArbitraryFloatGEINTEL
  {IR(41642, 22), 689}, // 30 ArbitraryFloatGTINTEL
  {IR(41826, 25), 697}, // 31 ArbitraryFloatHypotINTEL
  {IR(41708, 22), 692}, // 32 ArbitraryFloatLEINTEL
  {IR(41686, 22), 691}, // 33 ArbitraryFloatLTINTEL
  {IR(41922, 25), 701}, // 34 ArbitraryFloatLog10INTEL
  {IR(41947, 25), 702}, // 35 ArbitraryFloatLog1pINTEL
  {IR(41898, 24), 700}, // 36 ArbitraryFloatLog2INTEL
  {IR(41875, 23), 699}, // 37 ArbitraryFloatLogINTEL
  {IR(41596, 23), 687}, // 38 ArbitraryFloatMulINTEL
  {IR(42366, 23), 719}, // 39 ArbitraryFloatPowINTEL
  {IR(42413, 24), 721}, // 40 ArbitraryFloatPowNINTEL
  {IR(42389, 24), 720}, // 41 ArbitraryFloatPowRINTEL
  {IR(41777, 25), 695}, // 42 ArbitraryFloatRSqrtINTEL
  {IR(41752, 25), 694}, // 43 ArbitraryFloatRecipINTEL
  {IR(42115, 26), 709}, // 44 ArbitraryFloatSinCosINTEL
  {IR(41438, 28), 681}, // 45 ArbitraryFloatSinCosPiINTEL
  {IR(42069, 23), 707}, // 46 ArbitraryFloatSinINTEL
  {IR(42141, 25), 710}, // 47 ArbitraryFloatSinPiINTEL
  {IR(41851, 24), 698}, // 48 ArbitraryFloatSqrtINTEL
  {IR(41573, 23), 686}, // 49 ArbitraryFloatSubINTEL
  {IR(13097, 19), 769}, // 50 ArithmeticFenceEXT
  {IR(26060, 12), 61}, // 51 ArrayLength
  {IR(36088, 13), 553}, // 52 AsmCallINTEL
  {IR(11868, 9), 552}, // 53 AsmINTEL
  {IR(36073, 15), 551}, // 54 AsmTargetINTEL
  {IR(36129, 14), 556}, // 55 AssumeTrueKHR
  {IR(28332, 10), 220}, // 56 AtomicAnd
  {IR(28184, 22), 210}, // 57 AtomicCompareExchange
  {IR(28206, 26), 211}, // 58 AtomicCompareExchangeWeak
  {IR(28169, 15), 209}, // 59 AtomicExchange
  {IR(43444, 14), 759}, // 60 AtomicFAddEXT
  {IR(36115, 14), 555}, // 61 AtomicFMaxEXT
  {IR(36101, 14), 554}, // 62 AtomicFMinEXT
  {IR(29717, 16), 292}, // 63 AtomicFlagClear
  {IR(29696, 21), 291}, // 64 AtomicFlagTestAndSet
  {IR(28266, 11), 214}, // 65 AtomicIAdd
  {IR(28249, 17), 213}, // 66 AtomicIDecrement
  {IR(28232, 17), 212}, // 67 AtomicIIncrement
  {IR(28277, 11), 215}, // 68 AtomicISub
  {IR(28146, 11), 207}, // 69 AtomicLoad
  {IR(28342, 9), 221}, // 70 AtomicOr
  {IR(28310, 11), 218}, // 71 AtomicSMax
  {IR(28288, 11), 216}, // 72 AtomicSMin
  {IR(28157, 12), 208}, // 73 AtomicStore
  {IR(28321, 11), 219}, // 74 AtomicUMax
  {IR(28299, 11), 217}, // 75 AtomicUMin
  {IR(28351, 10), 222}, // 76 AtomicXor
  {IR(34337, 28), 483}, // 77 BeginInvocationInterlockEXT
  {IR(27930, 9), 191}, // 78 BitCount
  {IR(27870, 15), 187}, // 79 BitFieldInsert
  {IR(27885, 17), 188}, // 80 BitFieldSExtract
  {IR(27902, 17), 189}, // 81 BitFieldUExtract
  {IR(27919, 11), 190}, // 82 BitReverse
  {IR(27058, 8), 114}, // 83 Bitcast
  {IR(27855, 11), 185}, // 84 BitwiseAnd
  {IR(44049, 21), 782}, // 85 BitwiseFunctionINTEL
  {IR(27834, 10), 183}, // 86 BitwiseOr
  {IR(27844, 11), 184}, // 87 BitwiseXor
  {IR(28461, 7), 227}, // 88 Branch
  {IR(28468, 18), 228}, // 89 BranchConditional
  {IR(29329, 13), 277}, // 90 BuildNDRange
  {IR(25074, 11), 15}, // 91 Capability
  {IR(29287, 26), 275}, // 92 CaptureEventProfilingInfo
  {IR(30793, 23), 344}, // 93 ColorAttachmentReadEXT
  {IR(28879, 15), 255}, // 94 CommitReadPipe
  {IR(28894, 16), 256}, // 95 CommitWritePipe
  {IR(26320, 19), 72}, // 96 CompositeConstruct
  {IR(43574, 33), 764}, // 97 CompositeConstructContinuedINTEL
  {IR(31722, 31), 382}, // 98 CompositeConstructReplicateEXT
  {IR(26339, 17), 73}, // 99 CompositeExtract
  {IR(26356, 16), 74}, // 100 CompositeInsert
  {IR(14996, 9), 39}, // 101 Constant
  {IR(25580, 18), 40}, // 102 ConstantComposite
  {IR(43506, 32), 762}, // 103 ConstantCompositeContinuedINTEL
  {IR(31658, 30), 380}, // 104 ConstantCompositeReplicateEXT
  {IR(25528, 14), 38}, // 105 ConstantFalse
  {IR(36019, 29), 549}, // 106 ConstantFunctionPointerINTEL
  {IR(25692, 13), 42}, // 107 ConstantNull
  {IR(29772, 20), 296}, // 108 ConstantPipeStorage
  {IR(25676, 16), 41}, // 109 ConstantSampler
  {IR(32518, 19), 415}, // 110 ConstantStringAMDX
  {IR(25515, 13), 37}, // 111 ConstantTrue
  {IR(28117, 15), 205}, // 112 ControlBarrier
  {IR(43647, 26), 767}, // 113 ControlBarrierArriveINTEL
  {IR(43673, 24), 768}, // 114 ControlBarrierWaitINTEL
  {IR(43627, 20), 766}, // 115 ConvertBF16ToFINTEL
  {IR(43607, 20), 765}, // 116 ConvertFToBF16INTEL
  {IR(26864, 12), 100}, // 117 ConvertFToS
  {IR(26852, 12), 99}, // 118 ConvertFToU
  {IR(34986, 18), 506}, // 119 ConvertImageToUNV
  {IR(26941, 14), 107}, // 120 ConvertPtrToU
  {IR(26876, 12), 101}, // 121 ConvertSToF
  {IR(35049, 25), 509}, // 122 ConvertSampledImageToUNV
  {IR(35004, 20), 507}, // 123 ConvertSamplerToUNV
  {IR(31236, 35), 366}, // 124 ConvertUToAccelerationStructureKHR
  {IR(26888, 12), 102}, // 125 ConvertUToF
  {IR(34948, 18), 504}, // 126 ConvertUToImageNV
  {IR(26985, 14), 110}, // 127 ConvertUToPtr
  {IR(35024, 25), 508}, // 128 ConvertUToSampledImageNV
  {IR(34966, 20), 505}, // 129 ConvertUToSamplerNV
  {IR(33678, 27), 458}, // 130 CooperativeMatrixConvertNV
  {IR(31631, 27), 379}, // 131 CooperativeMatrixLengthKHR
  {IR(34311, 26), 482}, // 132 CooperativeMatrixLengthNV
  {IR(31499, 25), 376}, // 133 CooperativeMatrixLoadKHR
  {IR(34236, 24), 479}, // 134 CooperativeMatrixLoadNV
  {IR(34535, 30), 486}, // 135 CooperativeMatrixLoadTensorNV
  {IR(31604, 27), 378}, // 136 CooperativeMatrixMulAddKHR
  {IR(34285, 26), 481}, // 137 CooperativeMatrixMulAddNV
  {IR(34596, 32), 488}, // 138 CooperativeMatrixPerElementOpNV
  {IR(34434, 26), 485}, // 139 CooperativeMatrixReduceNV
  {IR(31524, 26), 377}, // 140 CooperativeMatrixStoreKHR
  {IR(34260, 25), 480}, // 141 CooperativeMatrixStoreNV
  {IR(34565, 31), 487}, // 142 CooperativeMatrixStoreTensorNV
  {IR(34919, 29), 503}, // 143 CooperativeMatrixTransposeNV
  {IR(33873, 24), 465}, // 144 CooperativeVectorLoadNV
  {IR(33646, 32), 457}, // 145 CooperativeVectorMatrixMulAddNV
  {IR(33536, 29), 454}, // 146 CooperativeVectorMatrixMulNV
  {IR(33565, 42), 455}, // 147 CooperativeVectorOuterProductAccumulateNV
  {IR(33607, 39), 456}, // 148 CooperativeVectorReduceSumAccumulateNV
  {IR(33897, 25), 466}, // 149 CooperativeVectorStoreNV
  {IR(30752, 12), 340}, // 150 CopyLogical
  {IR(25986, 11), 56}, // 151 CopyMemory
  {IR(25997, 16), 57}, // 152 CopyMemorySized
  {IR(26372, 11), 75}, // 153 CopyObject
  {IR(29792, 26), 297}, // 154 CreatePipeFromPipeStorage
  {IR(34664, 21), 491}, // 155 CreateTensorLayoutNV
  {IR(34784, 19), 496}, // 156 CreateTensorViewNV
  {IR(29239, 16), 272}, // 157 CreateUserEvent
  {IR(42719, 29), 738}, // 158 CrossWorkgroupCastToPtrINTEL
  {IR(27939, 5), 192}, // 159 DPdx
  {IR(27985, 11), 198}, // 160 DPdxCoarse
  {IR(27956, 9), 195}, // 161 DPdxFine
  {IR(27944, 5), 193}, // 162 DPdy
  {IR(27996, 11), 199}, // 163 DPdyCoarse
  {IR(27965, 9), 196}, // 164 DPdyFine
  {IR(26146, 9), 64}, // 165 Decorate
  {IR(29969, 11), 305}, // 166 DecorateId
  {IR(36153, 15), 558}, // 167 DecorateString
  {IR(36168, 21), 558}, // 168 DecorateStringGOOGLE
  {IR(26170, 16), 66}, // 169 DecorationGroup
  {IR(11202, 25), 499}, // 170 DemoteToHelperInvocation
  {IR(11227, 28), 499}, // 171 DemoteToHelperInvocationEXT
  {IR(30816, 23), 345}, // 172 DepthAttachmentReadEXT
  {IR(27255, 4), 137}, // 173 Dot
  {IR(33705, 17), 459}, // 174 EmitMeshTasksEXT
  {IR(28044, 17), 203}, // 175 EmitStreamVertex
  {IR(28020, 11), 201}, // 176 EmitVertex
  {IR(34365, 26), 484}, // 177 EndInvocationInterlockEXT
  {IR(28031, 13), 202}, // 178 EndPrimitive
  {IR(28061, 19), 204}, // 179 EndStreamPrimitive
  {IR(29075, 14), 265}, // 180 EnqueueKernel
  {IR(29061, 14), 264}, // 181 EnqueueMarker
  {IR(32390, 24), 410}, // 182 EnqueueNodePayloadsAMDX
  {IR(24989, 11), 13}, // 183 EntryPoint
  {IR(31217, 19), 365}, // 184 ExecuteCallableKHR
  {IR(34147, 18), 475}, // 185 ExecuteCallableNV
  {IR(25032, 14), 14}, // 186 ExecutionMode
  {IR(29953, 16), 304}, // 187 ExecutionModeId
  {IR(36143, 10), 557}, // 188 ExpectKHR
  {IR(24843, 8), 11}, // 189 ExtInst
  {IR(24783, 14), 10}, // 190 ExtInstImport
  {IR(31179, 26), 363}, // 191 ExtInstWithForwardRefsKHR
  {IR(24773, 10), 9}, // 192 Extension
  {IR(27087, 5), 118}, // 193 FAdd
  {IR(26918, 9), 105}, // 194 FConvert
  {IR(27122, 5), 125}, // 195 FDiv
  {IR(27147, 5), 130}, // 196 FMod
  {IR(27107, 5), 122}, // 197 FMul
  {IR(27074, 8), 116}, // 198 FNegate
  {IR(27584, 10), 168}, // 199 FOrdEqual
  {IR(27662, 16), 174}, // 200 FOrdGreaterThan
  {IR(27734, 21), 178}, // 201 FOrdGreaterThanEqual
  {IR(27634, 13), 172}, // 202 FOrdLessThan
  {IR(27696, 18), 176}, // 203 FOrdLessThanEqual
  {IR(27606, 13), 170}, // 204 FOrdNotEqual
  {IR(12665, 13), 741}, // 205 FPGARegINTEL
  {IR(27142, 5), 129}, // 206 FRem
  {IR(27097, 5), 120}, // 207 FSub
  {IR(27594, 12), 169}, // 208 FUnordEqual
  {IR(27678, 18), 175}, // 209 FUnordGreaterThan
  {IR(27755, 23), 179}, // 210 FUnordGreaterThanEqual
  {IR(27647, 15), 173}, // 211 FUnordLessThan
  {IR(27714, 20), 177}, // 212 FUnordLessThanEqual
  {IR(27619, 15), 171}, // 213 FUnordNotEqual
  {IR(33835, 38), 464}, // 214 FetchMicroTriangleVertexBarycentricNV
  {IR(33800, 35), 463}, // 215 FetchMicroTriangleVertexPositionNV
  {IR(32439, 29), 412}, // 216 FinishWritingNodePayloadAMDX
  {IR(42580, 14), 730}, // 217 FixedCosINTEL
  {IR(42627, 16), 733}, // 218 FixedCosPiINTEL
  {IR(42676, 14), 736}, // 219 FixedExpINTEL
  {IR(42662, 14), 735}, // 220 FixedLogINTEL
  {IR(42534, 16), 727}, // 221 FixedRecipINTEL
  {IR(42550, 16), 728}, // 222 FixedRsqrtINTEL
  {IR(42594, 17), 731}, // 223 FixedSinCosINTEL
  {IR(42643, 19), 734}, // 224 FixedSinCosPiINTEL
  {IR(42566, 14), 729}, // 225 FixedSinINTEL
  {IR(42611, 16), 732}, // 226 FixedSinPiINTEL
  {IR(42519, 15), 726}, // 227 FixedSqrtINTEL
  {IR(32335, 17), 407}, // 228 FragmentFetchAMD
  {IR(32314, 21), 406}, // 229 FragmentMaskFetchAMD
  {IR(24003, 9), 48}, // 230 Function
  {IR(25895, 13), 51}, // 231 FunctionCall
  {IR(25883, 12), 50}, // 232 FunctionEnd
  {IR(25865, 18), 49}, // 233 FunctionParameter
  {IR(36048, 25), 550}, // 234 FunctionPointerCallINTEL
  {IR(27949, 7), 194}, // 235 Fwidth
  {IR(28007, 13), 200}, // 236 FwidthCoarse
  {IR(27974, 11), 197}, // 237 FwidthFine
  {IR(27016, 17), 112}, // 238 GenericCastToPtr
  {IR(27033, 25), 113}, // 239 GenericCastToPtrExplicit
  {IR(26072, 23), 62}, // 240 GenericPtrMemSemantics
  {IR(29313, 16), 276}, // 241 GetDefaultQueue
  {IR(29818, 35), 298}, // 242 GetKernelLocalSizeForSubgroupCount
  {IR(29853, 25), 299}, // 243 GetKernelMaxNumSubgroups
  {IR(29119, 32), 267}, // 244 GetKernelNDrangeMaxSubGroupSize
  {IR(29089, 30), 266}, // 245 GetKernelNDrangeSubGroupCount
  {IR(29174, 40), 269}, // 246 GetKernelPreferredWorkGroupSizeMultiple
  {IR(29151, 23), 268}, // 247 GetKernelWorkGroupSize
  {IR(28945, 18), 259}, // 248 GetMaxPipePackets
  {IR(28927, 18), 258}, // 249 GetNumPipePackets
  {IR(28632, 9), 238}, // 250 GroupAll
  {IR(28641, 9), 239}, // 251 GroupAny
  {IR(28601, 15), 236}, // 252 GroupAsyncCopy
  {IR(44096, 19), 785}, // 253 GroupBitwiseAndKHR
  {IR(44115, 18), 786}, // 254 GroupBitwiseOrKHR
  {IR(44133, 19), 787}, // 255 GroupBitwiseXorKHR
  {IR(28650, 15), 240}, // 256 GroupBroadcast
  {IR(29020, 20), 262}, // 257 GroupCommitReadPipe
  {IR(29040, 21), 263}, // 258 GroupCommitWritePipe
  {IR(26186, 14), 67}, // 259 GroupDecorate
  {IR(28708, 10), 242}, // 260 GroupFAdd
  {IR(32153, 23), 399}, // 261 GroupFAddNonUniformAMD
  {IR(28748, 10), 246}, // 262 GroupFMax
  {IR(32245, 23), 403}, // 263 GroupFMaxNonUniformAMD
  {IR(28718, 10), 243}, // 264 GroupFMin
  {IR(32176, 23), 400}, // 265 GroupFMinNonUniformAMD
  {IR(44083, 13), 784}, // 266 GroupFMulKHR
  {IR(28698, 10), 241}, // 267 GroupIAdd
  {IR(32130, 23), 398}, // 268 GroupIAddNonUniformAMD
  {IR(44070, 13), 783}, // 269 GroupIMulKHR
  {IR(44152, 19), 788}, // 270 GroupLogicalAndKHR
  {IR(44171, 18), 789}, // 271 GroupLogicalOrKHR
  {IR(44189, 19), 790}, // 272 GroupLogicalXorKHR
  {IR(26245, 20), 68}, // 273 GroupMemberDecorate
  {IR(30001, 19), 307}, // 274 GroupNonUniformAll
  {IR(30039, 24), 309}, // 275 GroupNonUniformAllEqual
  {IR(30020, 19), 308}, // 276 GroupNonUniformAny
  {IR(5497, 22), 312}, // 277 GroupNonUniformBallot
  {IR(30179, 30), 315}, // 278 GroupNonUniformBallotBitCount
  {IR(30147, 32), 314}, // 279 GroupNonUniformBallotBitExtract
  {IR(30209, 29), 316}, // 280 GroupNonUniformBallotFindLSB
  {IR(30238, 29), 317}, // 281 GroupNonUniformBallotFindMSB
  {IR(30545, 26), 332}, // 282 GroupNonUniformBitwiseAnd
  {IR(30571, 25), 333}, // 283 GroupNonUniformBitwiseOr
  {IR(30596, 26), 334}, // 284 GroupNonUniformBitwiseXor
  {IR(30063, 25), 310}, // 285 GroupNonUniformBroadcast
  {IR(30088, 30), 311}, // 286 GroupNonUniformBroadcastFirst
  {IR(29980, 21), 306}, // 287 GroupNonUniformElect
  {IR(30365, 20), 323}, // 288 GroupNonUniformFAdd
  {IR(30525, 20), 331}, // 289 GroupNonUniformFMax
  {IR(30465, 20), 328}, // 290 GroupNonUniformFMin
  {IR(30405, 20), 325}, // 291 GroupNonUniformFMul
  {IR(30345, 20), 322}, // 292 GroupNonUniformIAdd
  {IR(30385, 20), 324}, // 293 GroupNonUniformIMul
  {IR(30118, 29), 313}, // 294 GroupNonUniformInverseBallot
  {IR(30622, 26), 335}, // 295 GroupNonUniformLogicalAnd
  {IR(30648, 25), 336}, // 296 GroupNonUniformLogicalOr
  {IR(30673, 26), 337}, // 297 GroupNonUniformLogicalXor
  {IR(33740, 27), 461}, // 298 GroupNonUniformPartitionNV
  {IR(32560, 26), 417}, // 299 GroupNonUniformQuadAllKHR
  {IR(32586, 26), 418}, // 300 GroupNonUniformQuadAnyKHR
  {IR(30699, 29), 338}, // 301 GroupNonUniformQuadBroadcast
  {IR(30728, 24), 339}, // 302 GroupNonUniformQuadSwap
  {IR(12890, 25), 361}, // 303 GroupNonUniformRotateKHR
  {IR(30485, 20), 329}, // 304 GroupNonUniformSMax
  {IR(30425, 20), 326}, // 305 GroupNonUniformSMin
  {IR(8587, 23), 318}, // 306 GroupNonUniformShuffle
  {IR(30318, 27), 321}, // 307 GroupNonUniformShuffleDown
  {IR(30293, 25), 320}, // 308 GroupNonUniformShuffleUp
  {IR(30267, 26), 319}, // 309 GroupNonUniformShuffleXor
  {IR(30505, 20), 330}, // 310 GroupNonUniformUMax
  {IR(30445, 20), 327}, // 311 GroupNonUniformUMin
  {IR(28963, 28), 260}, // 312 GroupReserveReadPipePackets
  {IR(28991, 29), 261}, // 313 GroupReserveWritePipePackets
  {IR(28768, 10), 248}, // 314 GroupSMax
  {IR(32291, 23), 405}, // 315 GroupSMaxNonUniformAMD
  {IR(28738, 10), 245}, // 316 GroupSMin
  {IR(32222, 23), 402}, // 317 GroupSMinNonUniformAMD
  {IR(28758, 10), 247}, // 318 GroupUMax
  {IR(32268, 23), 404}, // 319 GroupUMaxNonUniformAMD
  {IR(28728, 10), 244}, // 320 GroupUMin
  {IR(32199, 23), 401}, // 321 GroupUMinNonUniformAMD
  {IR(28616, 16), 237}, // 322 GroupWaitEvents
  {IR(33047, 25), 434}, // 323 HitObjectExecuteShaderNV
  {IR(33098, 25), 436}, // 324 HitObjectGetAttributesNV
  {IR(34188, 24), 477}, // 325 HitObjectGetClusterIdNV
  {IR(33072, 26), 435}, // 326 HitObjectGetCurrentTimeNV
  {IR(33174, 28), 439}, // 327 HitObjectGetGeometryIndexNV
  {IR(33123, 22), 437}, // 328 HitObjectGetHitKindNV
  {IR(33227, 34), 441}, // 329 HitObjectGetInstanceCustomIndexNV
  {IR(33202, 25), 440}, // 330 HitObjectGetInstanceIdNV
  {IR(35415, 27), 519}, // 331 HitObjectGetLSSPositionsNV
  {IR(35442, 23), 520}, // 332 HitObjectGetLSSRadiiNV
  {IR(32759, 33), 424}, // 333 HitObjectGetObjectRayDirectionNV
  {IR(32792, 30), 425}, // 334 HitObjectGetObjectRayOriginNV
  {IR(32731, 28), 423}, // 335 HitObjectGetObjectToWorldNV
  {IR(33145, 29), 438}, // 336 HitObjectGetPrimitiveIndexNV
  {IR(33322, 22), 444}, // 337 HitObjectGetRayTMaxNV
  {IR(33344, 22), 445}, // 338 HitObjectGetRayTMinNV
  {IR(32887, 44), 428}, // 339 HitObjectGetShaderBindingTableRecordIndexNV
  {IR(32848, 39), 427}, // 340 HitObjectGetShaderRecordBufferHandleNV
  {IR(35359, 29), 517}, // 341 HitObjectGetSpherePositionNV
  {IR(35388, 27), 518}, // 342 HitObjectGetSphereRadiusNV
  {IR(33261, 32), 442}, // 343 HitObjectGetWorldRayDirectionNV
  {IR(33293, 29), 443}, // 344 HitObjectGetWorldRayOriginNV
  {IR(32703, 28), 422}, // 345 HitObjectGetWorldToObjectNV
  {IR(33366, 19), 446}, // 346 HitObjectIsEmptyNV
  {IR(33385, 17), 447}, // 347 HitObjectIsHitNV
  {IR(35488, 20), 522}, // 348 HitObjectIsLSSHitNV
  {IR(33402, 18), 448}, // 349 HitObjectIsMissNV
  {IR(35465, 23), 521}, // 350 HitObjectIsSphereHitNV
  {IR(32931, 23), 429}, // 351 HitObjectRecordEmptyNV
  {IR(32612, 27), 419}, // 352 HitObjectRecordHitMotionNV
  {IR(32974, 21), 431}, // 353 HitObjectRecordHitNV
  {IR(32639, 36), 420}, // 354 HitObjectRecordHitWithIndexMotionNV
  {IR(32995, 30), 432}, // 355 HitObjectRecordHitWithIndexNV
  {IR(32675, 28), 421}, // 356 HitObjectRecordMissMotionNV
  {IR(33025, 22), 433}, // 357 HitObjectRecordMissNV
  {IR(32822, 26), 426}, // 358 HitObjectTraceRayMotionNV
  {IR(32954, 20), 430}, // 359 HitObjectTraceRayNV
  {IR(27082, 5), 117}, // 360 IAdd
  {IR(27259, 10), 138}, // 361 IAddCarry
  {IR(35867, 13), 539}, // 362 IAddSatINTEL
  {IR(35893, 14), 541}, // 363 IAverageINTEL
  {IR(35921, 21), 543}, // 364 IAverageRoundedINTEL
  {IR(27455, 7), 158}, // 365 IEqual
  {IR(27102, 5), 121}, // 366 IMul
  {IR(35989, 15), 547}, // 367 IMul32x16INTEL
  {IR(27462, 10), 159}, // 368 INotEqual
  {IR(27092, 5), 119}, // 369 ISub
  {IR(27269, 11), 139}, // 370 ISubBorrow
  {IR(35963, 13), 545}, // 371 ISubSatINTEL
  {IR(31271, 22), 367}, // 372 IgnoreIntersectionKHR
  {IR(33965, 21), 468}, // 373 IgnoreIntersectionNV
  {IR(24047, 6), 91}, // 374 Image
  {IR(32101, 29), 397}, // 375 ImageBlockMatchGatherSADQCOM
  {IR(32072, 29), 396}, // 376 ImageBlockMatchGatherSSDQCOM
  {IR(31991, 23), 393}, // 377 ImageBlockMatchSADQCOM
  {IR(31968, 23), 392}, // 378 ImageBlockMatchSSDQCOM
  {IR(32043, 29), 395}, // 379 ImageBlockMatchWindowSADQCOM
  {IR(32014, 29), 394}, // 380 ImageBlockMatchWindowSSDQCOM
  {IR(31949, 19), 391}, // 381 ImageBoxFilterQCOM
  {IR(26700, 16), 88}, // 382 ImageDrefGather
  {IR(26677, 11), 86}, // 383 ImageFetch
  {IR(26688, 12), 87}, // 384 ImageGather
  {IR(26737, 17), 92}, // 385 ImageQueryFormat
  {IR(26817, 17), 97}, // 386 ImageQueryLevels
  {IR(26803, 14), 96}, // 387 ImageQueryLod
  {IR(26754, 16), 93}, // 388 ImageQueryOrder
  {IR(26834, 18), 98}, // 389 ImageQuerySamples
  {IR(26788, 15), 95}, // 390 ImageQuerySize
  {IR(26770, 18), 94}, // 391 ImageQuerySizeLod
  {IR(26716, 10), 89}, // 392 ImageRead
  {IR(26534, 27), 81}, // 393 ImageSampleDrefExplicitLod
  {IR(26507, 27), 80}, // 394 ImageSampleDrefImplicitLod
  {IR(26484, 23), 79}, // 395 ImageSampleExplicitLod
  {IR(33489, 23), 452}, // 396 ImageSampleFootprintNV
  {IR(26438, 23), 78}, // 397 ImageSampleImplicitLod
  {IR(26646, 31), 85}, // 398 ImageSampleProjDrefExplicitLod
  {IR(26615, 31), 84}, // 399 ImageSampleProjDrefImplicitLod
  {IR(26588, 27), 83}, // 400 ImageSampleProjExplicitLod
  {IR(26561, 27), 82}, // 401 ImageSampleProjImplicitLod
  {IR(31925, 24), 390}, // 402 ImageSampleWeightedQCOM
  {IR(29641, 22), 288}, // 403 ImageSparseDrefGather
  {IR(29606, 17), 286}, // 404 ImageSparseFetch
  {IR(29623, 18), 287}, // 405 ImageSparseGather
  {IR(29733, 16), 293}, // 406 ImageSparseRead
  {IR(29433, 33), 281}, // 407 ImageSparseSampleDrefExplicitLod
  {IR(29400, 33), 280}, // 408 ImageSparseSampleDrefImplicitLod
  {IR(29371, 29), 279}, // 409 ImageSparseSampleExplicitLod
  {IR(29342, 29), 278}, // 410 ImageSparseSampleImplicitLod
  {IR(29569, 37), 285}, // 411 ImageSparseSampleProjDrefExplicitLod
  {IR(29532, 37), 284}, // 412 ImageSparseSampleProjDrefImplicitLod
  {IR(29499, 33), 283}, // 413 ImageSparseSampleProjExplicitLod
  {IR(29466, 33), 282}, // 414 ImageSparseSampleProjImplicitLod
  {IR(29663, 26), 289}, // 415 ImageSparseTexelsResident
  {IR(25917, 18), 53}, // 416 ImageTexelPointer
  {IR(26726, 11), 90}, // 417 ImageWrite
  {IR(26025, 20), 59}, // 418 InBoundsAccessChain
  {IR(26095, 23), 63}, // 419 InBoundsPtrAccessChain
  {IR(27326, 9), 146}, // 420 IsFinite
  {IR(34850, 22), 500}, // 421 IsHelperInvocationEXT
  {IR(27320, 6), 145}, // 422 IsInf
  {IR(27314, 6), 144}, // 423 IsNan
  {IR(32495, 23), 414}, // 424 IsNodePayloadValidAMDX
  {IR(27335, 9), 147}, // 425 IsNormal
  {IR(29255, 13), 273}, // 426 IsValidEvent
  {IR(28910, 17), 257}, // 427 IsValidReserveId
  {IR(28538, 5), 230}, // 428 Kill
  {IR(28455, 6), 226}, // 429 Label
  {IR(27355, 14), 149}, // 430 LessOrGreater
  {IR(28574, 14), 234}, // 431 LifetimeStart
  {IR(28588, 13), 235}, // 432 LifetimeStop
  {IR(24768, 5), 8}, // 433 Line
  {IR(25975, 5), 54}, // 434 Load
  {IR(27426, 11), 155}, // 435 LogicalAnd
  {IR(27387, 13), 152}, // 436 LogicalEqual
  {IR(27437, 11), 156}, // 437 LogicalNot
  {IR(27400, 16), 153}, // 438 LogicalNotEqual
  {IR(27416, 10), 154}, // 439 LogicalOr
  {IR(42437, 17), 722}, // 440 LoopControlINTEL
  {IR(28395, 10), 224}, // 441 LoopMerge
  {IR(44226, 18), 792}, // 442 MaskedGatherINTEL
  {IR(44244, 19), 793}, // 443 MaskedScatterINTEL
  {IR(27224, 18), 135}, // 444 MatrixTimesMatrix
  {IR(27170, 18), 132}, // 445 MatrixTimesScalar
  {IR(27206, 18), 134}, // 446 MatrixTimesVector
  {IR(26155, 15), 65}, // 447 MemberDecorate
  {IR(36189, 21), 559}, // 448 MemberDecorateString
  {IR(36210, 27), 559}, // 449 MemberDecorateStringGOOGLE
  {IR(24750, 11), 6}, // 450 MemberName
  {IR(28132, 14), 206}, // 451 MemoryBarrier
  {IR(24915, 12), 12}, // 452 MemoryModel
  {IR(29918, 19), 302}, // 453 MemoryNamedBarrier
  {IR(29937, 16), 303}, // 454 ModuleProcessed
  {IR(24745, 5), 5}, // 455 Name
  {IR(29895, 23), 301}, // 456 NamedBarrierInitialize
  {IR(29689, 7), 290}, // 457 NoLine
  {IR(32468, 27), 413}, // 458 NodePayloadArrayLengthAMDX
  {IR(24541, 4), 0}, // 459 Nop
  {IR(27866, 4), 186}, // 460 Not
  {IR(27369, 8), 150}, // 461 Ordered
  {IR(27242, 13), 136}, // 462 OuterProduct
  {IR(28361, 4), 223}, // 463 Phi
  {IR(26045, 15), 60}, // 464 PtrAccessChain
  {IR(42690, 29), 737}, // 465 PtrCastToCrossWorkgroupINTEL
  {IR(26999, 17), 111}, // 466 PtrCastToGeneric
  {IR(30785, 8), 343}, // 467 PtrDiff
  {IR(30764, 9), 341}, // 468 PtrEqual
  {IR(30773, 12), 342}, // 469 PtrNotEqual
  {IR(26927, 14), 106}, // 470 QuantizeToF16
  {IR(35155, 17), 511}, // 471 RawAccessChainNV
  {IR(31844, 31), 387}, // 472 RayQueryConfirmIntersectionKHR
  {IR(31812, 32), 386}, // 473 RayQueryGenerateIntersectionKHR
  {IR(34165, 23), 476}, // 474 RayQueryGetClusterIdNV
  {IR(43095, 39), 750}, // 475 RayQueryGetIntersectionBarycentricsKHR
  {IR(43170, 46), 752}, // 476 RayQueryGetIntersectionCandidateAABBOpaqueKHR
  {IR(43134, 36), 751}, // 477 RayQueryGetIntersectionFrontFaceKHR
  {IR(43014, 40), 748}, // 478 RayQueryGetIntersectionGeometryIndexKHR
  {IR(42866, 46), 745}, // 479 RayQueryGetIntersectionInstanceCustomIndexKHR
  {IR(42912, 37), 746}, // 480 RayQueryGetIntersectionInstanceIdKHR
  {IR(42949, 65), 747}, // 481 RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR
  {IR(35322, 37), 516}, // 482 RayQueryGetIntersectionLSSHitValueNV
  {IR(35250, 38), 514}, // 483 RayQueryGetIntersectionLSSPositionsNV
  {IR(35288, 34), 515}, // 484 RayQueryGetIntersectionLSSRadiiNV
  {IR(43216, 45), 753}, // 485 RayQueryGetIntersectionObjectRayDirectionKHR
  {IR(43261, 42), 754}, // 486 RayQueryGetIntersectionObjectRayOriginKHR
  {IR(43364, 40), 757}, // 487 RayQueryGetIntersectionObjectToWorldKHR
  {IR(43054, 41), 749}, // 488 RayQueryGetIntersectionPrimitiveIndexKHR
  {IR(35172, 40), 512}, // 489 RayQueryGetIntersectionSpherePositionNV
  {IR(35212, 38), 513}, // 490 RayQueryGetIntersectionSphereRadiusNV
  {IR(42838, 28), 744}, // 491 RayQueryGetIntersectionTKHR
  {IR(34040, 50), 473}, // 492 RayQueryGetIntersectionTriangleVertexPositionsKHR
  {IR(31894, 31), 389}, // 493 RayQueryGetIntersectionTypeKHR
  {IR(43404, 40), 758}, // 494 RayQueryGetIntersectionWorldToObjectKHR
  {IR(42815, 23), 743}, // 495 RayQueryGetRayFlagsKHR
  {IR(42793, 22), 742}, // 496 RayQueryGetRayTMinKHR
  {IR(43303, 32), 755}, // 497 RayQueryGetWorldRayDirectionKHR
  {IR(43335, 29), 756}, // 498 RayQueryGetWorldRayOriginKHR
  {IR(31769, 22), 384}, // 499 RayQueryInitializeKHR
  {IR(35530, 19), 524}, // 500 RayQueryIsLSSHitNV
  {IR(35508, 22), 523}, // 501 RayQueryIsSphereHitNV
  {IR(31875, 19), 388}, // 502 RayQueryProceedKHR
  {IR(31791, 21), 385}, // 503 RayQueryTerminateKHR
  {IR(32352, 13), 408}, // 504 ReadClockKHR
  {IR(28778, 9), 249}, // 505 ReadPipe
  {IR(42748, 22), 739}, // 506 ReadPipeBlockingINTEL
  {IR(29226, 13), 271}, // 507 ReleaseEvent
  {IR(33449, 24), 450}, // 508 ReorderThreadWithHintNV
  {IR(33420, 29), 449}, // 509 ReorderThreadWithHitObjectNV
  {IR(33922, 22), 467}, // 510 ReportIntersectionKHR
  {IR(33944, 21), 467}, // 511 ReportIntersectionNV
  {IR(28832, 23), 253}, // 512 ReserveReadPipePackets
  {IR(28855, 24), 254}, // 513 ReserveWritePipePackets
  {IR(28797, 17), 251}, // 514 ReservedReadPipe
  {IR(28814, 18), 252}, // 515 ReservedWritePipe
  {IR(41419, 19), 680}, // 516 RestoreMemoryINTEL
  {IR(29214, 12), 270}, // 517 RetainEvent
  {IR(28543, 7), 231}, // 518 Return
  {IR(28550, 12), 232}, // 519 ReturnValue
  {IR(44208, 18), 791}, // 520 RoundFToTF32INTEL
  {IR(26909, 9), 104}, // 521 SConvert
  {IR(27117, 5), 124}, // 522 SDiv
  {IR(31356, 5), 369}, // 523 SDot
  {IR(31397, 11), 372}, // 524 SDotAccSat
  {IR(31408, 14), 372}, // 525 SDotAccSatKHR
  {IR(31361, 8), 369}, // 526 SDotKHR
  {IR(27485, 13), 161}, // 527 SGreaterThan
  {IR(27516, 18), 163}, // 528 SGreaterThanEqual
  {IR(27544, 10), 165}, // 529 SLessThan
  {IR(27569, 15), 167}, // 530 SLessThanEqual
  {IR(27137, 5), 128}, // 531 SMod
  {IR(27293, 13), 141}, // 532 SMulExtended
  {IR(27066, 8), 115}, // 533 SNegate
  {IR(27132, 5), 127}, // 534 SRem
  {IR(31382, 6), 371}, // 535 SUDot
  {IR(31447, 12), 374}, // 536 SUDotAccSat
  {IR(31459, 15), 374}, // 537 SUDotAccSatKHR
  {IR(31388, 9), 371}, // 538 SUDotKHR
  {IR(26393, 13), 77}, // 539 SampledImage
  {IR(35074, 29), 510}, // 540 SamplerImageAddressingModeNV
  {IR(26955, 15), 108}, // 541 SatConvertSToU
  {IR(26970, 15), 109}, // 542 SatConvertUToS
  {IR(41403, 16), 679}, // 543 SaveMemoryINTEL
  {IR(27448, 7), 157}, // 544 Select
  {IR(28440, 15), 225}, // 545 SelectionMerge
  {IR(33722, 18), 460}, // 546 SetMeshOutputsEXT
  {IR(29268, 19), 274}, // 547 SetUserEventStatus
  {IR(27817, 17), 182}, // 548 ShiftLeftLogical
  {IR(27796, 21), 181}, // 549 ShiftRightArithmetic
  {IR(27778, 18), 180}, // 550 ShiftRightLogical
  {IR(27344, 11), 148}, // 551 SignBitSet
  {IR(29749, 7), 294}, // 552 SizeOf
  {IR(24722, 7), 3}, // 553 Source
  {IR(24603, 16), 2}, // 554 SourceContinued
  {IR(24729, 16), 4}, // 555 SourceExtension
  {IR(25740, 13), 45}, // 556 SpecConstant
  {IR(25753, 22), 46}, // 557 SpecConstantComposite
  {IR(43538, 36), 763}, // 558 SpecConstantCompositeContinuedINTEL
  {IR(31688, 34), 381}, // 559 SpecConstantCompositeReplicateEXT
  {IR(25722, 18), 44}, // 560 SpecConstantFalse
  {IR(25816, 15), 47}, // 561 SpecConstantOp
  {IR(32537, 23), 416}, // 562 SpecConstantStringAMDX
  {IR(25705, 17), 43}, // 563 SpecConstantTrue
  {IR(30839, 25), 346}, // 564 StencilAttachmentReadEXT
  {IR(25980, 6), 55}, // 565 Store
  {IR(24761, 7), 7}, // 566 String
  {IR(43839, 25), 776}, // 567 Subgroup2DBlockLoadINTEL
  {IR(43864, 34), 777}, // 568 Subgroup2DBlockLoadTransformINTEL
  {IR(43898, 34), 778}, // 569 Subgroup2DBlockLoadTransposeINTEL
  {IR(43932, 29), 779}, // 570 Subgroup2DBlockPrefetchINTEL
  {IR(43961, 26), 780}, // 571 Subgroup2DBlockStoreINTEL
  {IR(31133, 20), 360}, // 572 SubgroupAllEqualKHR
  {IR(31103, 15), 358}, // 573 SubgroupAllKHR
  {IR(31118, 15), 359}, // 574 SubgroupAnyKHR
  {IR(39921, 30), 643}, // 575 SubgroupAvcBmeInitializeINTEL
  {IR(39891, 30), 642}, // 576 SubgroupAvcFmeInitializeINTEL
  {IR(38326, 35), 612}, // 577 SubgroupAvcImeAdjustRefOffsetINTEL
  {IR(38361, 39), 613}, // 578 SubgroupAvcImeConvertToMcePayloadINTEL
  {IR(39002, 38), 626}, // 579 SubgroupAvcImeConvertToMceResultINTEL
  {IR(38625, 45), 619}, // 580 SubgroupAvcImeEvaluateWithDualReferenceINTEL
  {IR(38725, 53), 621}, // 581 SubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL
  {IR(38946, 56), 625}, // 582 SubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL
  {IR(38834, 54), 623}, // 583 SubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL
  {IR(38578, 47), 618}, // 584 SubgroupAvcImeEvaluateWithSingleReferenceINTEL
  {IR(38670, 55), 620}, // 585 SubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL
  {IR(38888, 58), 624}, // 586 SubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL
  {IR(38778, 56), 622}, // 587 SubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL
  {IR(39634, 36), 637}, // 588 SubgroupAvcImeGetBorderReachedINTEL
  {IR(39086, 44), 628}, // 589 SubgroupAvcImeGetDualReferenceStreaminINTEL
  {IR(39040, 46), 627}, // 590 SubgroupAvcImeGetSingleReferenceStreaminINTEL
  {IR(39501, 66), 635}, // 591 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL
  {IR(39433, 68), 634}, // 592 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL
  {IR(39567, 67), 636}, // 593 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL
  {IR(39296, 68), 632}, // 594 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL
  {IR(39226, 70), 631}, // 595 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL
  {IR(39364, 69), 633}, // 596 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL
  {IR(39670, 48), 638}, // 597 SubgroupAvcImeGetTruncatedSearchIndicationINTEL
  {IR(39718, 59), 639}, // 598 SubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL
  {IR(39835, 56), 641}, // 599 SubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL
  {IR(39777, 58), 640}, // 600 SubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL
  {IR(38189, 30), 608}, // 601 SubgroupAvcImeInitializeINTEL
  {IR(38293, 33), 611}, // 602 SubgroupAvcImeRefWindowSizeINTEL
  {IR(38257, 36), 610}, // 603 SubgroupAvcImeSetDualReferenceINTEL
  {IR(38490, 54), 616}, // 604 SubgroupAvcImeSetEarlySearchTerminationThresholdINTEL
  {IR(38400, 43), 614}, // 605 SubgroupAvcImeSetMaxMotionVectorCountINTEL
  {IR(38219, 38), 609}, // 606 SubgroupAvcImeSetSingleReferenceINTEL
  {IR(38443, 47), 615}, // 607 SubgroupAvcImeSetUnidirectionalMixDisableINTEL
  {IR(38544, 34), 617}, // 608 SubgroupAvcImeSetWeightedSadINTEL
  {IR(39179, 47), 630}, // 609 SubgroupAvcImeStripDualReferenceStreamoutINTEL
  {IR(39130, 49), 629}, // 610 SubgroupAvcImeStripSingleReferenceStreamoutINTEL
  {IR(37579, 39), 593}, // 611 SubgroupAvcMceConvertToImePayloadINTEL
  {IR(37618, 38), 594}, // 612 SubgroupAvcMceConvertToImeResultINTEL
  {IR(37656, 39), 595}, // 613 SubgroupAvcMceConvertToRefPayloadINTEL
  {IR(37695, 38), 596}, // 614 SubgroupAvcMceConvertToRefResultINTEL
  {IR(37733, 39), 597}, // 615 SubgroupAvcMceConvertToSicPayloadINTEL
  {IR(37772, 38), 598}, // 616 SubgroupAvcMceConvertToSicResultINTEL
  {IR(37885, 43), 601}, // 617 SubgroupAvcMceGetBestInterDistortionsINTEL
  {IR(37017, 50), 582}, // 618 SubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL
  {IR(36615, 60), 574}, // 619 SubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL
  {IR(36815, 51), 578}, // 620 SubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL
  {IR(36961, 56), 581}, // 621 SubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL
  {IR(36728, 47), 576}, // 622 SubgroupAvcMceGetDefaultInterShapePenaltyINTEL
  {IR(37316, 56), 588}, // 623 SubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL
  {IR(37215, 50), 586}, // 624 SubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL
  {IR(36910, 51), 580}, // 625 SubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL
  {IR(37119, 49), 584}, // 626 SubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL
  {IR(37067, 52), 583}, // 627 SubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL
  {IR(37265, 51), 587}, // 628 SubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL
  {IR(38004, 38), 604}, // 629 SubgroupAvcMceGetInterDirectionsINTEL
  {IR(37846, 39), 600}, // 630 SubgroupAvcMceGetInterDistortionsINTEL
  {IR(37928, 38), 602}, // 631 SubgroupAvcMceGetInterMajorShapeINTEL
  {IR(37966, 38), 603}, // 632 SubgroupAvcMceGetInterMinorShapeINTEL
  {IR(38042, 45), 605}, // 633 SubgroupAvcMceGetInterMotionVectorCountINTEL
  {IR(38087, 40), 606}, // 634 SubgroupAvcMceGetInterReferenceIdsINTEL
  {IR(38127, 62), 607}, // 635 SubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL
  {IR(37810, 36), 599}, // 636 SubgroupAvcMceGetMotionVectorsINTEL
  {IR(37372, 33), 589}, // 637 SubgroupAvcMceSetAcOnlyHaarINTEL
  {IR(37518, 61), 592}, // 638 SubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL
  {IR(36675, 53), 575}, // 639 SubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL
  {IR(36866, 44), 579}, // 640 SubgroupAvcMceSetInterDirectionPenaltyINTEL
  {IR(36775, 40), 577}, // 641 SubgroupAvcMceSetInterShapePenaltyINTEL
  {IR(37168, 47), 585}, // 642 SubgroupAvcMceSetMotionVectorCostFunctionINTEL
  {IR(37457, 61), 591}, // 643 SubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL
  {IR(37405, 52), 590}, // 644 SubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL
  {IR(39951, 39), 644}, // 645 SubgroupAvcRefConvertToMcePayloadINTEL
  {IR(40273, 38), 651}, // 646 SubgroupAvcRefConvertToMceResultINTEL
  {IR(40126, 45), 648}, // 647 SubgroupAvcRefEvaluateWithDualReferenceINTEL
  {IR(40171, 46), 649}, // 648 SubgroupAvcRefEvaluateWithMultiReferenceINTEL
  {IR(40217, 56), 650}, // 649 SubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL
  {IR(40079, 47), 647}, // 650 SubgroupAvcRefEvaluateWithSingleReferenceINTEL
  {IR(39990, 46), 645}, // 651 SubgroupAvcRefSetBidirectionalMixDisableINTEL
  {IR(40036, 43), 646}, // 652 SubgroupAvcRefSetBilinearFilterEnableINTEL
  {IR(40409, 42), 655}, // 653 SubgroupAvcSicConfigureIpeLumaChromaINTEL
  {IR(40373, 36), 654}, // 654 SubgroupAvcSicConfigureIpeLumaINTEL
  {IR(40341, 32), 653}, // 655 SubgroupAvcSicConfigureSkcINTEL
  {IR(40490, 39), 657}, // 656 SubgroupAvcSicConvertToMcePayloadINTEL
  {IR(41030, 38), 669}, // 657 SubgroupAvcSicConvertToMceResultINTEL
  {IR(40805, 31), 664}, // 658 SubgroupAvcSicEvaluateIpeINTEL
  {IR(40883, 45), 666}, // 659 SubgroupAvcSicEvaluateWithDualReferenceINTEL
  {IR(40928, 46), 667}, // 660 SubgroupAvcSicEvaluateWithMultiReferenceINTEL
  {IR(40974, 56), 668}, // 661 SubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL
  {IR(40836, 47), 665}, // 662 SubgroupAvcSicEvaluateWithSingleReferenceINTEL
  {IR(41147, 46), 672}, // 663 SubgroupAvcSicGetBestIpeChromaDistortionINTEL
  {IR(41103, 44), 671}, // 664 SubgroupAvcSicGetBestIpeLumaDistortionINTEL
  {IR(41368, 35), 677}, // 665 SubgroupAvcSicGetInterRawSadsINTEL
  {IR(41234, 36), 674}, // 666 SubgroupAvcSicGetIpeChromaModeINTEL
  {IR(41068, 35), 670}, // 667 SubgroupAvcSicGetIpeLumaShapeINTEL
  {IR(40451, 39), 656}, // 668 SubgroupAvcSicGetMotionVectorMaskINTEL
  {IR(41193, 41), 673}, // 669 SubgroupAvcSicGetPackedIpeLumaModesINTEL
  {IR(41270, 50), 675}, // 670 SubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL
  {IR(41320, 48), 676}, // 671 SubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL
  {IR(40311, 30), 652}, // 672 SubgroupAvcSicInitializeINTEL
  {IR(40671, 43), 661}, // 673 SubgroupAvcSicSetBilinearFilterEnableINTEL
  {IR(40762, 43), 663}, // 674 SubgroupAvcSicSetBlockBasedRawSkipSadINTEL
  {IR(40621, 50), 660}, // 675 SubgroupAvcSicSetIntraChromaModeCostFunctionINTEL
  {IR(40573, 48), 659}, // 676 SubgroupAvcSicSetIntraLumaModeCostFunctionINTEL
  {IR(40529, 44), 658}, // 677 SubgroupAvcSicSetIntraLumaShapePenaltyINTEL
  {IR(40714, 48), 662}, // 678 SubgroupAvcSicSetSkcForwardTransformEnableINTEL
  {IR(5258, 18), 352}, // 679 SubgroupBallotKHR
  {IR(43812, 27), 775}, // 680 SubgroupBlockPrefetchINTEL
  {IR(35621, 23), 529}, // 681 SubgroupBlockReadINTEL
  {IR(35644, 24), 530}, // 682 SubgroupBlockWriteINTEL
  {IR(30977, 27), 353}, // 683 SubgroupFirstInvocationKHR
  {IR(35668, 28), 531}, // 684 SubgroupImageBlockReadINTEL
  {IR(35696, 29), 532}, // 685 SubgroupImageBlockWriteINTEL
  {IR(35725, 33), 533}, // 686 SubgroupImageMediaBlockReadINTEL
  {IR(35758, 34), 534}, // 687 SubgroupImageMediaBlockWriteINTEL
  {IR(13435, 38), 781}, // 688 SubgroupMatrixMultiplyAccumulateINTEL
  {IR(31153, 26), 362}, // 689 SubgroupReadInvocationKHR
  {IR(35549, 25), 526}, // 690 SubgroupShuffleDownINTEL
  {IR(11650, 21), 525}, // 691 SubgroupShuffleINTEL
  {IR(35574, 23), 527}, // 692 SubgroupShuffleUpINTEL
  {IR(35597, 24), 528}, // 693 SubgroupShuffleXorINTEL
  {IR(28531, 7), 229}, // 694 Switch
  {IR(43721, 23), 771}, // 695 TaskSequenceAsyncINTEL
  {IR(43697, 24), 770}, // 696 TaskSequenceCreateINTEL
  {IR(43744, 21), 772}, // 697 TaskSequenceGetINTEL
  {IR(43765, 25), 773}, // 698 TaskSequenceReleaseINTEL
  {IR(34892, 27), 502}, // 699 TensorLayoutSetBlockSizeNV
  {IR(34756, 28), 495}, // 700 TensorLayoutSetClampValueNV
  {IR(34685, 27), 492}, // 701 TensorLayoutSetDimensionNV
  {IR(34712, 24), 493}, // 702 TensorLayoutSetStrideNV
  {IR(34736, 20), 494}, // 703 TensorLayoutSliceNV
  {IR(34872, 20), 501}, // 704 TensorViewSetClipNV
  {IR(34803, 25), 497}, // 705 TensorViewSetDimensionNV
  {IR(34828, 22), 498}, // 706 TensorViewSetStrideNV
  {IR(30864, 20), 347}, // 707 TerminateInvocation
  {IR(31293, 16), 368}, // 708 TerminateRayKHR
  {IR(33986, 15), 469}, // 709 TerminateRayNV
  {IR(34009, 14), 471}, // 710 TraceMotionNV
  {IR(34001, 8), 470}, // 711 TraceNV
  {IR(31205, 12), 364}, // 712 TraceRayKHR
  {IR(34023, 17), 472}, // 713 TraceRayMotionNV
  {IR(26383, 10), 76}, // 714 Transpose
  {IR(34090, 29), 474}, // 715 TypeAccelerationStructureKHR
  {IR(34119, 28), 474}, // 716 TypeAccelerationStructureNV
  {IR(25332, 10), 25}, // 717 TypeArray
  {IR(36534, 37), 571}, // 718 TypeAvcImeDualReferenceStreaminINTEL
  {IR(36269, 23), 562}, // 719 TypeAvcImePayloadINTEL
  {IR(36451, 44), 569}, // 720 TypeAvcImeResultDualReferenceStreamoutINTEL
  {IR(36383, 22), 567}, // 721 TypeAvcImeResultINTEL
  {IR(36405, 46), 568}, // 722 TypeAvcImeResultSingleReferenceStreamoutINTEL
  {IR(36495, 39), 570}, // 723 TypeAvcImeSingleReferenceStreaminINTEL
  {IR(36338, 23), 565}, // 724 TypeAvcMcePayloadINTEL
  {IR(36361, 22), 566}, // 725 TypeAvcMceResultINTEL
  {IR(36292, 23), 563}, // 726 TypeAvcRefPayloadINTEL
  {IR(36571, 22), 572}, // 727 TypeAvcRefResultINTEL
  {IR(36315, 23), 564}, // 728 TypeAvcSicPayloadINTEL
  {IR(36593, 22), 573}, // 729 TypeAvcSicResultINTEL
  {IR(25094, 9), 17}, // 730 TypeBool
  {IR(43458, 23), 760}, // 731 TypeBufferSurfaceINTEL
  {IR(31474, 25), 375}, // 732 TypeCooperativeMatrixKHR
  {IR(34212, 24), 478}, // 733 TypeCooperativeMatrixNV
  {IR(33512, 24), 453}, // 734 TypeCooperativeVectorNV
  {IR(25447, 16), 32}, // 735 TypeDeviceEvent
  {IR(25437, 10), 31}, // 736 TypeEvent
  {IR(25148, 10), 19}, // 737 TypeFloat
  {IR(25496, 19), 36}, // 738 TypeForwardPointer
  {IR(25424, 13), 30}, // 739 TypeFunction
  {IR(33473, 16), 451}, // 740 TypeHitObjectNV
  {IR(25293, 10), 22}, // 741 TypeImage
  {IR(25103, 8), 18}, // 742 TypeInt
  {IR(25169, 11), 21}, // 743 TypeMatrix
  {IR(29878, 17), 300}, // 744 TypeNamedBarrier
  {IR(32414, 25), 411}, // 745 TypeNodePayloadArrayAMDX
  {IR(25370, 11), 28}, // 746 TypeOpaque
  {IR(25487, 9), 35}, // 747 TypePipe
  {IR(29756, 16), 295}, // 748 TypePipeStorage
  {IR(25412, 12), 29}, // 749 TypePointer
  {IR(25477, 10), 34}, // 750 TypeQueue
  {IR(31753, 16), 383}, // 751 TypeRayQueryKHR
  {IR(25463, 14), 33}, // 752 TypeReserveId
  {IR(25342, 17), 26}, // 753 TypeRuntimeArray
  {IR(25315, 17), 24}, // 754 TypeSampledImage
  {IR(25303, 12), 23}, // 755 TypeSampler
  {IR(25359, 11), 27}, // 756 TypeStruct
  {IR(43481, 25), 761}, // 757 TypeStructContinuedINTEL
  {IR(43790, 22), 774}, // 758 TypeTaskSequenceINTEL
  {IR(34628, 19), 489}, // 759 TypeTensorLayoutNV
  {IR(34647, 17), 490}, // 760 TypeTensorViewNV
  {IR(30884, 22), 348}, // 761 TypeUntypedPointerKHR
  {IR(25158, 11), 20}, // 762 TypeVector
  {IR(36251, 18), 561}, // 763 TypeVmeImageINTEL
  {IR(25085, 9), 16}, // 764 TypeVoid
  {IR(35880, 13), 540}, // 765 UAddSatINTEL
  {IR(35907, 14), 542}, // 766 UAverageINTEL
  {IR(35942, 21), 544}, // 767 UAverageRoundedINTEL
  {IR(26900, 9), 103}, // 768 UConvert
  {IR(35792, 24), 535}, // 769 UCountLeadingZerosINTEL
  {IR(35816, 25), 536}, // 770 UCountTrailingZerosINTEL
  {IR(27112, 5), 123}, // 771 UDiv
  {IR(31369, 5), 370}, // 772 UDot
  {IR(31422, 11), 373}, // 773 UDotAccSat
  {IR(31433, 14), 373}, // 774 UDotAccSatKHR
  {IR(31374, 8), 370}, // 775 UDotKHR
  {IR(27472, 13), 160}, // 776 UGreaterThan
  {IR(27498, 18), 162}, // 777 UGreaterThanEqual
  {IR(27534, 10), 164}, // 778 ULessThan
  {IR(27554, 15), 166}, // 779 ULessThanEqual
  {IR(27127, 5), 126}, // 780 UMod
  {IR(36004, 15), 548}, // 781 UMul32x16INTEL
  {IR(27280, 13), 140}, // 782 UMulExtended
  {IR(35976, 13), 546}, // 783 USubSatINTEL
  {IR(24597, 6), 1}, // 784 Undef
  {IR(27377, 10), 151}, // 785 Unordered
  {IR(28562, 12), 233}, // 786 Unreachable
  {IR(30925, 22), 350}, // 787 UntypedAccessChainKHR
  {IR(31062, 22), 356}, // 788 UntypedArrayLengthKHR
  {IR(30947, 30), 351}, // 789 UntypedInBoundsAccessChainKHR
  {IR(31029, 33), 355}, // 790 UntypedInBoundsPtrAccessChainKHR
  {IR(31084, 19), 357}, // 791 UntypedPrefetchKHR
  {IR(31004, 25), 354}, // 792 UntypedPtrAccessChainKHR
  {IR(30906, 19), 349}, // 793 UntypedVariableKHR
  {IR(25908, 9), 52}, // 794 Variable
  {IR(12106, 25), 678}, // 795 VariableLengthArrayINTEL
  {IR(26265, 21), 69}, // 796 VectorExtractDynamic
  {IR(26286, 20), 70}, // 797 VectorInsertDynamic
  {IR(26306, 14), 71}, // 798 VectorShuffle
  {IR(27188, 18), 133}, // 799 VectorTimesMatrix
  {IR(27152, 18), 131}, // 800 VectorTimesScalar
  {IR(36237, 14), 560}, // 801 VmeImageINTEL
  {IR(33767, 33), 462}, // 802 WritePackedPrimitiveIndices4x8NV
  {IR(28787, 10), 250}, // 803 WritePipe
  {IR(42770, 23), 740}, // 804 WritePipeBlockingINTEL
}};

// Extended instruction descriptions, ordered by (extinst enum, opcode value).
// The fields in order are:
//   enum value
//   operands, an IndexRange into kOperandSpans
//   name, a character-counting IndexRange into kStrings
//   capabilities, an IndexRange into kCapabilitySpans
static const std::array<ExtInstDesc, 425> kExtInstByValue{{
    {0,IR(0, 0),IR(44263, 14),IR(1, 0)}, // DebugInfoNone in debuginfo
    {1,IR(52, 3),IR(44277, 21),IR(1, 0)}, // DebugCompilationUnit in debuginfo
    {2,IR(714, 3),IR(44350, 15),IR(1, 0)}, // DebugTypeBasic in debuginfo
    {3,IR(717, 3),IR(44399, 17),IR(1, 0)}, // DebugTypePointer in debuginfo
    {4,IR(720, 2),IR(44454, 19),IR(1, 0)}, // DebugTypeQualifier in debuginfo
    {5,IR(168, 2),IR(44473, 15),IR(1, 0)}, // DebugTypeArray in debuginfo
    {6,IR(261, 2),IR(44488, 16),IR(1, 0)}, // DebugTypeVector in debuginfo
    {7,IR(722, 6),IR(44504, 13),IR(1, 0)}, // DebugTypedef in debuginfo
    {8,IR(168, 2),IR(44517, 18),IR(1, 0)}, // DebugTypeFunction in debuginfo
    {9,IR(728, 9),IR(44535, 14),IR(1, 0)}, // DebugTypeEnum in debuginfo
    {10,IR(737, 9),IR(44587, 19),IR(1, 0)}, // DebugTypeComposite in debuginfo
    {11,IR(746, 10),IR(44606, 16),IR(1, 0)}, // DebugTypeMember in debuginfo
    {12,IR(756, 5),IR(44622, 21),IR(1, 0)}, // DebugTypeInheritance in debuginfo
    {13,IR(36, 2),IR(44643, 21),IR(1, 0)}, // DebugTypePtrToMember in debuginfo
    {14,IR(168, 2),IR(44664, 18),IR(1, 0)}, // DebugTypeTemplate in debuginfo
    {15,IR(761, 6),IR(44682, 27),IR(1, 0)}, // DebugTypeTemplateParameter in debuginfo
    {16,IR(767, 5),IR(44709, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in debuginfo
    {17,IR(772, 5),IR(44744, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in debuginfo
    {18,IR(746, 10),IR(44775, 20),IR(1, 0)}, // DebugGlobalVariable in debuginfo
    {19,IR(777, 8),IR(44795, 25),IR(1, 0)}, // DebugFunctionDeclaration in debuginfo
    {20,IR(785, 11),IR(44820, 14),IR(1, 0)}, // DebugFunction in debuginfo
    {21,IR(796, 5),IR(44834, 18),IR(1, 0)}, // DebugLexicalBlock in debuginfo
    {22,IR(801, 3),IR(44852, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in debuginfo
    {23,IR(804, 2),IR(44883, 11),IR(1, 0)}, // DebugScope in debuginfo
    {24,IR(0, 0),IR(44894, 13),IR(1, 0)}, // DebugNoScope in debuginfo
    {25,IR(806, 3),IR(44907, 15),IR(1, 0)}, // DebugInlinedAt in debuginfo
    {26,IR(809, 7),IR(44964, 19),IR(1, 0)}, // DebugLocalVariable in debuginfo
    {27,IR(36, 2),IR(44983, 21),IR(1, 0)}, // DebugInlinedVariable in debuginfo
    {28,IR(33, 3),IR(45004, 13),IR(1, 0)}, // DebugDeclare in debuginfo
    {29,IR(816, 3),IR(45017, 11),IR(1, 0)}, // DebugValue in debuginfo
    {30,IR(819, 2),IR(45061, 15),IR(1, 0)}, // DebugOperation in debuginfo
    {31,IR(670, 1),IR(45076, 16),IR(1, 0)}, // DebugExpression in debuginfo
    {32,IR(821, 4),IR(45092, 14),IR(1, 0)}, // DebugMacroDef in debuginfo
    {33,IR(801, 3),IR(45106, 16),IR(1, 0)}, // DebugMacroUndef in debuginfo
    {1,IR(10, 1),IR(45122, 6),IR(1, 0)}, // Round in glsl_std_450
    {2,IR(10, 1),IR(45128, 10),IR(1, 0)}, // RoundEven in glsl_std_450
    {3,IR(10, 1),IR(45138, 6),IR(1, 0)}, // Trunc in glsl_std_450
    {4,IR(10, 1),IR(45144, 5),IR(1, 0)}, // FAbs in glsl_std_450
    {5,IR(10, 1),IR(45149, 5),IR(1, 0)}, // SAbs in glsl_std_450
    {6,IR(10, 1),IR(45154, 6),IR(1, 0)}, // FSign in glsl_std_450
    {7,IR(10, 1),IR(45160, 6),IR(1, 0)}, // SSign in glsl_std_450
    {8,IR(10, 1),IR(45166, 6),IR(1, 0)}, // Floor in glsl_std_450
    {9,IR(10, 1),IR(45172, 5),IR(1, 0)}, // Ceil in glsl_std_450
    {10,IR(10, 1),IR(45177, 6),IR(1, 0)}, // Fract in glsl_std_450
    {11,IR(10, 1),IR(45183, 8),IR(1, 0)}, // Radians in glsl_std_450
    {12,IR(10, 1),IR(45191, 8),IR(1, 0)}, // Degrees in glsl_std_450
    {13,IR(10, 1),IR(45199, 4),IR(1, 0)}, // Sin in glsl_std_450
    {14,IR(10, 1),IR(45203, 4),IR(1, 0)}, // Cos in glsl_std_450
    {15,IR(10, 1),IR(45207, 4),IR(1, 0)}, // Tan in glsl_std_450
    {16,IR(10, 1),IR(45211, 5),IR(1, 0)}, // Asin in glsl_std_450
    {17,IR(10, 1),IR(45216, 5),IR(1, 0)}, // Acos in glsl_std_450
    {18,IR(10, 1),IR(45221, 5),IR(1, 0)}, // Atan in glsl_std_450
    {19,IR(10, 1),IR(45226, 5),IR(1, 0)}, // Sinh in glsl_std_450
    {20,IR(10, 1),IR(45231, 5),IR(1, 0)}, // Cosh in glsl_std_450
    {21,IR(10, 1),IR(45236, 5),IR(1, 0)}, // Tanh in glsl_std_450
    {22,IR(10, 1),IR(45241, 6),IR(1, 0)}, // Asinh in glsl_std_450
    {23,IR(10, 1),IR(45247, 6),IR(1, 0)}, // Acosh in glsl_std_450
    {24,IR(10, 1),IR(45253, 6),IR(1, 0)}, // Atanh in glsl_std_450
    {25,IR(36, 2),IR(45259, 6),IR(1, 0)}, // Atan2 in glsl_std_450
    {26,IR(36, 2),IR(45265, 4),IR(1, 0)}, // Pow in glsl_std_450
    {27,IR(10, 1),IR(45269, 4),IR(1, 0)}, // Exp in glsl_std_450
    {28,IR(10, 1),IR(45273, 4),IR(1, 0)}, // Log in glsl_std_450
    {29,IR(10, 1),IR(45277, 5),IR(1, 0)}, // Exp2 in glsl_std_450
    {30,IR(10, 1),IR(45282, 5),IR(1, 0)}, // Log2 in glsl_std_450
    {31,IR(10, 1),IR(45287, 5),IR(1, 0)}, // Sqrt in glsl_std_450
    {32,IR(10, 1),IR(45292, 12),IR(1, 0)}, // InverseSqrt in glsl_std_450
    {33,IR(10, 1),IR(45304, 12),IR(1, 0)}, // Determinant in glsl_std_450
    {34,IR(10, 1),IR(45316, 14),IR(1, 0)}, // MatrixInverse in glsl_std_450
    {35,IR(36, 2),IR(45330, 5),IR(1, 0)}, // Modf in glsl_std_450
    {36,IR(10, 1),IR(45335, 11),IR(1, 0)}, // ModfStruct in glsl_std_450
    {37,IR(36, 2),IR(45346, 5),IR(1, 0)}, // FMin in glsl_std_450
    {38,IR(36, 2),IR(45351, 5),IR(1, 0)}, // UMin in glsl_std_450
    {39,IR(36, 2),IR(45356, 5),IR(1, 0)}, // SMin in glsl_std_450
    {40,IR(36, 2),IR(45361, 5),IR(1, 0)}, // FMax in glsl_std_450
    {41,IR(36, 2),IR(45366, 5),IR(1, 0)}, // UMax in glsl_std_450
    {42,IR(36, 2),IR(45371, 5),IR(1, 0)}, // SMax in glsl_std_450
    {43,IR(33, 3),IR(45376, 7),IR(1, 0)}, // FClamp in glsl_std_450
    {44,IR(33, 3),IR(45383, 7),IR(1, 0)}, // UClamp in glsl_std_450
    {45,IR(33, 3),IR(45390, 7),IR(1, 0)}, // SClamp in glsl_std_450
    {46,IR(33, 3),IR(45397, 5),IR(1, 0)}, // FMix in glsl_std_450
    {47,IR(33, 3),IR(45402, 5),IR(1, 0)}, // IMix in glsl_std_450
    {48,IR(36, 2),IR(45407, 5),IR(1, 0)}, // Step in glsl_std_450
    {49,IR(33, 3),IR(45412, 11),IR(1, 0)}, // SmoothStep in glsl_std_450
    {50,IR(33, 3),IR(45423, 4),IR(1, 0)}, // Fma in glsl_std_450
    {51,IR(36, 2),IR(45427, 6),IR(1, 0)}, // Frexp in glsl_std_450
    {52,IR(10, 1),IR(45433, 12),IR(1, 0)}, // FrexpStruct in glsl_std_450
    {53,IR(36, 2),IR(45445, 6),IR(1, 0)}, // Ldexp in glsl_std_450
    {54,IR(10, 1),IR(45451, 13),IR(1, 0)}, // PackSnorm4x8 in glsl_std_450
    {55,IR(10, 1),IR(45464, 13),IR(1, 0)}, // PackUnorm4x8 in glsl_std_450
    {56,IR(10, 1),IR(45477, 14),IR(1, 0)}, // PackSnorm2x16 in glsl_std_450
    {57,IR(10, 1),IR(45491, 14),IR(1, 0)}, // PackUnorm2x16 in glsl_std_450
    {58,IR(10, 1),IR(45505, 13),IR(1, 0)}, // PackHalf2x16 in glsl_std_450
    {59,IR(10, 1),IR(45518, 15),IR(297, 1)}, // PackDouble2x32 in glsl_std_450
    {60,IR(10, 1),IR(45533, 16),IR(1, 0)}, // UnpackSnorm2x16 in glsl_std_450
    {61,IR(10, 1),IR(45549, 16),IR(1, 0)}, // UnpackUnorm2x16 in glsl_std_450
    {62,IR(10, 1),IR(45565, 15),IR(1, 0)}, // UnpackHalf2x16 in glsl_std_450
    {63,IR(10, 1),IR(45580, 15),IR(1, 0)}, // UnpackSnorm4x8 in glsl_std_450
    {64,IR(10, 1),IR(45595, 15),IR(1, 0)}, // UnpackUnorm4x8 in glsl_std_450
    {65,IR(10, 1),IR(45610, 17),IR(297, 1)}, // UnpackDouble2x32 in glsl_std_450
    {66,IR(10, 1),IR(45627, 7),IR(1, 0)}, // Length in glsl_std_450
    {67,IR(36, 2),IR(45634, 9),IR(1, 0)}, // Distance in glsl_std_450
    {68,IR(36, 2),IR(45643, 6),IR(1, 0)}, // Cross in glsl_std_450
    {69,IR(10, 1),IR(45649, 10),IR(1, 0)}, // Normalize in glsl_std_450
    {70,IR(33, 3),IR(45659, 12),IR(1, 0)}, // FaceForward in glsl_std_450
    {71,IR(36, 2),IR(45671, 8),IR(1, 0)}, // Reflect in glsl_std_450
    {72,IR(33, 3),IR(45679, 8),IR(1, 0)}, // Refract in glsl_std_450
    {73,IR(10, 1),IR(45687, 9),IR(1, 0)}, // FindILsb in glsl_std_450
    {74,IR(10, 1),IR(45696, 9),IR(1, 0)}, // FindSMsb in glsl_std_450
    {75,IR(10, 1),IR(45705, 9),IR(1, 0)}, // FindUMsb in glsl_std_450
    {76,IR(10, 1),IR(45714, 22),IR(298, 1)}, // InterpolateAtCentroid in glsl_std_450
    {77,IR(36, 2),IR(45736, 20),IR(298, 1)}, // InterpolateAtSample in glsl_std_450
    {78,IR(36, 2),IR(45756, 20),IR(298, 1)}, // InterpolateAtOffset in glsl_std_450
    {79,IR(36, 2),IR(45776, 5),IR(1, 0)}, // NMin in glsl_std_450
    {80,IR(36, 2),IR(45781, 5),IR(1, 0)}, // NMax in glsl_std_450
    {81,IR(33, 3),IR(45786, 7),IR(1, 0)}, // NClamp in glsl_std_450
    {1,IR(374, 5),IR(4477, 7),IR(1, 0)}, // Kernel in nonsemantic_clspvreflection
    {2,IR(825, 5),IR(45793, 13),IR(1, 0)}, // ArgumentInfo in nonsemantic_clspvreflection
    {3,IR(830, 5),IR(45806, 22),IR(1, 0)}, // ArgumentStorageBuffer in nonsemantic_clspvreflection
    {4,IR(830, 5),IR(45828, 16),IR(1, 0)}, // ArgumentUniform in nonsemantic_clspvreflection
    {5,IR(518, 7),IR(45844, 25),IR(1, 0)}, // ArgumentPodStorageBuffer in nonsemantic_clspvreflection
    {6,IR(518, 7),IR(45869, 19),IR(1, 0)}, // ArgumentPodUniform in nonsemantic_clspvreflection
    {7,IR(830, 5),IR(45888, 24),IR(1, 0)}, // ArgumentPodPushConstant in nonsemantic_clspvreflection
    {8,IR(830, 5),IR(45912, 21),IR(1, 0)}, // ArgumentSampledImage in nonsemantic_clspvreflection
    {9,IR(830, 5),IR(45933, 21),IR(1, 0)}, // ArgumentStorageImage in nonsemantic_clspvreflection
    {10,IR(830, 5),IR(45954, 16),IR(1, 0)}, // ArgumentSampler in nonsemantic_clspvreflection
    {11,IR(830, 5),IR(45970, 18),IR(1, 0)}, // ArgumentWorkgroup in nonsemantic_clspvreflection
    {12,IR(33, 3),IR(45988, 26),IR(1, 0)}, // SpecConstantWorkgroupSize in nonsemantic_clspvreflection
    {13,IR(33, 3),IR(46014, 25),IR(1, 0)}, // SpecConstantGlobalOffset in nonsemantic_clspvreflection
    {14,IR(10, 1),IR(46039, 20),IR(1, 0)}, // SpecConstantWorkDim in nonsemantic_clspvreflection
    {15,IR(36, 2),IR(46059, 25),IR(1, 0)}, // PushConstantGlobalOffset in nonsemantic_clspvreflection
    {16,IR(36, 2),IR(46084, 30),IR(1, 0)}, // PushConstantEnqueuedLocalSize in nonsemantic_clspvreflection
    {17,IR(36, 2),IR(46114, 23),IR(1, 0)}, // PushConstantGlobalSize in nonsemantic_clspvreflection
    {18,IR(36, 2),IR(46137, 25),IR(1, 0)}, // PushConstantRegionOffset in nonsemantic_clspvreflection
    {19,IR(36, 2),IR(46162, 26),IR(1, 0)}, // PushConstantNumWorkgroups in nonsemantic_clspvreflection
    {20,IR(36, 2),IR(46188, 30),IR(1, 0)}, // PushConstantRegionGroupOffset in nonsemantic_clspvreflection
    {21,IR(33, 3),IR(46218, 26),IR(1, 0)}, // ConstantDataStorageBuffer in nonsemantic_clspvreflection
    {22,IR(33, 3),IR(46244, 20),IR(1, 0)}, // ConstantDataUniform in nonsemantic_clspvreflection
    {23,IR(33, 3),IR(7902, 15),IR(1, 0)}, // LiteralSampler in nonsemantic_clspvreflection
    {24,IR(296, 4),IR(46264, 30),IR(1, 0)}, // PropertyRequiredWorkgroupSize in nonsemantic_clspvreflection
    {25,IR(10, 1),IR(46294, 28),IR(1, 0)}, // SpecConstantSubgroupMaxSize in nonsemantic_clspvreflection
    {26,IR(830, 5),IR(46322, 28),IR(1, 0)}, // ArgumentPointerPushConstant in nonsemantic_clspvreflection
    {27,IR(518, 7),IR(46350, 23),IR(1, 0)}, // ArgumentPointerUniform in nonsemantic_clspvreflection
    {28,IR(33, 3),IR(46373, 35),IR(1, 0)}, // ProgramScopeVariablesStorageBuffer in nonsemantic_clspvreflection
    {29,IR(33, 3),IR(46408, 38),IR(1, 0)}, // ProgramScopeVariablePointerRelocation in nonsemantic_clspvreflection
    {30,IR(296, 4),IR(46446, 42),IR(1, 0)}, // ImageArgumentInfoChannelOrderPushConstant in nonsemantic_clspvreflection
    {31,IR(296, 4),IR(46488, 45),IR(1, 0)}, // ImageArgumentInfoChannelDataTypePushConstant in nonsemantic_clspvreflection
    {32,IR(489, 6),IR(46533, 37),IR(1, 0)}, // ImageArgumentInfoChannelOrderUniform in nonsemantic_clspvreflection
    {33,IR(489, 6),IR(46570, 40),IR(1, 0)}, // ImageArgumentInfoChannelDataTypeUniform in nonsemantic_clspvreflection
    {34,IR(830, 5),IR(46610, 27),IR(1, 0)}, // ArgumentStorageTexelBuffer in nonsemantic_clspvreflection
    {35,IR(830, 5),IR(46637, 27),IR(1, 0)}, // ArgumentUniformTexelBuffer in nonsemantic_clspvreflection
    {36,IR(33, 3),IR(46664, 32),IR(1, 0)}, // ConstantDataPointerPushConstant in nonsemantic_clspvreflection
    {37,IR(33, 3),IR(46696, 40),IR(1, 0)}, // ProgramScopeVariablePointerPushConstant in nonsemantic_clspvreflection
    {38,IR(816, 3),IR(46736, 11),IR(1, 0)}, // PrintfInfo in nonsemantic_clspvreflection
    {39,IR(33, 3),IR(46747, 26),IR(1, 0)}, // PrintfBufferStorageBuffer in nonsemantic_clspvreflection
    {40,IR(33, 3),IR(46773, 32),IR(1, 0)}, // PrintfBufferPointerPushConstant in nonsemantic_clspvreflection
    {41,IR(296, 4),IR(46805, 34),IR(1, 0)}, // NormalizedSamplerMaskPushConstant in nonsemantic_clspvreflection
    {42,IR(36, 2),IR(46839, 22),IR(1, 0)}, // WorkgroupVariableSize in nonsemantic_clspvreflection
    {0,IR(0, 0),IR(44263, 14),IR(1, 0)}, // DebugInfoNone in nonsemantic_shader_debuginfo_100
    {1,IR(296, 4),IR(44277, 21),IR(1, 0)}, // DebugCompilationUnit in nonsemantic_shader_debuginfo_100
    {2,IR(296, 4),IR(44350, 15),IR(1, 0)}, // DebugTypeBasic in nonsemantic_shader_debuginfo_100
    {3,IR(33, 3),IR(44399, 17),IR(1, 0)}, // DebugTypePointer in nonsemantic_shader_debuginfo_100
    {4,IR(36, 2),IR(44454, 19),IR(1, 0)}, // DebugTypeQualifier in nonsemantic_shader_debuginfo_100
    {5,IR(168, 2),IR(44473, 15),IR(1, 0)}, // DebugTypeArray in nonsemantic_shader_debuginfo_100
    {6,IR(36, 2),IR(44488, 16),IR(1, 0)}, // DebugTypeVector in nonsemantic_shader_debuginfo_100
    {7,IR(489, 6),IR(44504, 13),IR(1, 0)}, // DebugTypedef in nonsemantic_shader_debuginfo_100
    {8,IR(816, 3),IR(44517, 18),IR(1, 0)}, // DebugTypeFunction in nonsemantic_shader_debuginfo_100
    {9,IR(835, 9),IR(44535, 14),IR(1, 0)}, // DebugTypeEnum in nonsemantic_shader_debuginfo_100
    {10,IR(844, 10),IR(44587, 19),IR(1, 0)}, // DebugTypeComposite in nonsemantic_shader_debuginfo_100
    {11,IR(854, 9),IR(44606, 16),IR(1, 0)}, // DebugTypeMember in nonsemantic_shader_debuginfo_100
    {12,IR(296, 4),IR(44622, 21),IR(1, 0)}, // DebugTypeInheritance in nonsemantic_shader_debuginfo_100
    {13,IR(36, 2),IR(44643, 21),IR(1, 0)}, // DebugTypePtrToMember in nonsemantic_shader_debuginfo_100
    {14,IR(168, 2),IR(44664, 18),IR(1, 0)}, // DebugTypeTemplate in nonsemantic_shader_debuginfo_100
    {15,IR(489, 6),IR(44682, 27),IR(1, 0)}, // DebugTypeTemplateParameter in nonsemantic_shader_debuginfo_100
    {16,IR(598, 5),IR(44709, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in nonsemantic_shader_debuginfo_100
    {17,IR(863, 5),IR(44744, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in nonsemantic_shader_debuginfo_100
    {18,IR(868, 10),IR(44775, 20),IR(1, 0)}, // DebugGlobalVariable in nonsemantic_shader_debuginfo_100
    {19,IR(435, 8),IR(44795, 25),IR(1, 0)}, // DebugFunctionDeclaration in nonsemantic_shader_debuginfo_100
    {20,IR(868, 10),IR(44820, 14),IR(1, 0)}, // DebugFunction in nonsemantic_shader_debuginfo_100
    {21,IR(830, 5),IR(44834, 18),IR(1, 0)}, // DebugLexicalBlock in nonsemantic_shader_debuginfo_100
    {22,IR(33, 3),IR(44852, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in nonsemantic_shader_debuginfo_100
    {23,IR(804, 2),IR(44883, 11),IR(1, 0)}, // DebugScope in nonsemantic_shader_debuginfo_100
    {24,IR(0, 0),IR(44894, 13),IR(1, 0)}, // DebugNoScope in nonsemantic_shader_debuginfo_100
    {25,IR(878, 3),IR(44907, 15),IR(1, 0)}, // DebugInlinedAt in nonsemantic_shader_debuginfo_100
    {26,IR(881, 8),IR(44964, 19),IR(1, 0)}, // DebugLocalVariable in nonsemantic_shader_debuginfo_100
    {27,IR(36, 2),IR(44983, 21),IR(1, 0)}, // DebugInlinedVariable in nonsemantic_shader_debuginfo_100
    {28,IR(889, 4),IR(45004, 13),IR(1, 0)}, // DebugDeclare in nonsemantic_shader_debuginfo_100
    {29,IR(889, 4),IR(45017, 11),IR(1, 0)}, // DebugValue in nonsemantic_shader_debuginfo_100
    {30,IR(168, 2),IR(45061, 15),IR(1, 0)}, // DebugOperation in nonsemantic_shader_debuginfo_100
    {31,IR(670, 1),IR(45076, 16),IR(1, 0)}, // DebugExpression in nonsemantic_shader_debuginfo_100
    {32,IR(541, 4),IR(45092, 14),IR(1, 0)}, // DebugMacroDef in nonsemantic_shader_debuginfo_100
    {33,IR(33, 3),IR(45106, 16),IR(1, 0)}, // DebugMacroUndef in nonsemantic_shader_debuginfo_100
    {34,IR(470, 7),IR(46861, 20),IR(1, 0)}, // DebugImportedEntity in nonsemantic_shader_debuginfo_100
    {35,IR(804, 2),IR(46881, 12),IR(1, 0)}, // DebugSource in nonsemantic_shader_debuginfo_100
    {101,IR(36, 2),IR(46893, 24),IR(1, 0)}, // DebugFunctionDefinition in nonsemantic_shader_debuginfo_100
    {102,IR(10, 1),IR(46917, 21),IR(1, 0)}, // DebugSourceContinued in nonsemantic_shader_debuginfo_100
    {103,IR(598, 5),IR(46938, 10),IR(1, 0)}, // DebugLine in nonsemantic_shader_debuginfo_100
    {104,IR(0, 0),IR(46948, 12),IR(1, 0)}, // DebugNoLine in nonsemantic_shader_debuginfo_100
    {105,IR(36, 2),IR(46960, 21),IR(1, 0)}, // DebugBuildIdentifier in nonsemantic_shader_debuginfo_100
    {106,IR(10, 1),IR(46981, 17),IR(1, 0)}, // DebugStoragePath in nonsemantic_shader_debuginfo_100
    {107,IR(296, 4),IR(46998, 16),IR(1, 0)}, // DebugEntryPoint in nonsemantic_shader_debuginfo_100
    {108,IR(33, 3),IR(47014, 16),IR(1, 0)}, // DebugTypeMatrix in nonsemantic_shader_debuginfo_100
    {1,IR(688, 9),IR(47030, 14),IR(1, 0)}, // Configuration in nonsemantic_vkspreflection
    {2,IR(10, 1),IR(47044, 13),IR(1, 0)}, // StartCounter in nonsemantic_vkspreflection
    {3,IR(10, 1),IR(47057, 12),IR(1, 0)}, // StopCounter in nonsemantic_vkspreflection
    {4,IR(296, 4),IR(47069, 14),IR(1, 0)}, // PushConstants in nonsemantic_vkspreflection
    {5,IR(33, 3),IR(47083, 23),IR(1, 0)}, // SpecializationMapEntry in nonsemantic_vkspreflection
    {6,IR(893, 15),IR(47106, 20),IR(1, 0)}, // DescriptorSetBuffer in nonsemantic_vkspreflection
    {7,IR(908, 33),IR(47126, 19),IR(1, 0)}, // DescriptorSetImage in nonsemantic_vkspreflection
    {8,IR(941, 19),IR(47145, 21),IR(1, 0)}, // DescriptorSetSampler in nonsemantic_vkspreflection
    {0,IR(0, 0),IR(44263, 14),IR(1, 0)}, // DebugInfoNone in opencl_debuginfo_100
    {1,IR(960, 4),IR(44277, 21),IR(1, 0)}, // DebugCompilationUnit in opencl_debuginfo_100
    {2,IR(964, 3),IR(44350, 15),IR(1, 0)}, // DebugTypeBasic in opencl_debuginfo_100
    {3,IR(967, 3),IR(44399, 17),IR(1, 0)}, // DebugTypePointer in opencl_debuginfo_100
    {4,IR(970, 2),IR(44454, 19),IR(1, 0)}, // DebugTypeQualifier in opencl_debuginfo_100
    {5,IR(168, 2),IR(44473, 15),IR(1, 0)}, // DebugTypeArray in opencl_debuginfo_100
    {6,IR(261, 2),IR(44488, 16),IR(1, 0)}, // DebugTypeVector in opencl_debuginfo_100
    {7,IR(722, 6),IR(44504, 13),IR(1, 0)}, // DebugTypedef in opencl_debuginfo_100
    {8,IR(972, 3),IR(44517, 18),IR(1, 0)}, // DebugTypeFunction in opencl_debuginfo_100
    {9,IR(975, 9),IR(44535, 14),IR(1, 0)}, // DebugTypeEnum in opencl_debuginfo_100
    {10,IR(984, 10),IR(44587, 19),IR(1, 0)}, // DebugTypeComposite in opencl_debuginfo_100
    {11,IR(994, 10),IR(44606, 16),IR(1, 0)}, // DebugTypeMember in opencl_debuginfo_100
    {12,IR(1004, 5),IR(44622, 21),IR(1, 0)}, // DebugTypeInheritance in opencl_debuginfo_100
    {13,IR(36, 2),IR(44643, 21),IR(1, 0)}, // DebugTypePtrToMember in opencl_debuginfo_100
    {14,IR(168, 2),IR(44664, 18),IR(1, 0)}, // DebugTypeTemplate in opencl_debuginfo_100
    {15,IR(761, 6),IR(44682, 27),IR(1, 0)}, // DebugTypeTemplateParameter in opencl_debuginfo_100
    {16,IR(767, 5),IR(44709, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in opencl_debuginfo_100
    {17,IR(772, 5),IR(44744, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in opencl_debuginfo_100
    {18,IR(994, 10),IR(44775, 20),IR(1, 0)}, // DebugGlobalVariable in opencl_debuginfo_100
    {19,IR(1009, 8),IR(44795, 25),IR(1, 0)}, // DebugFunctionDeclaration in opencl_debuginfo_100
    {20,IR(1017, 11),IR(44820, 14),IR(1, 0)}, // DebugFunction in opencl_debuginfo_100
    {21,IR(796, 5),IR(44834, 18),IR(1, 0)}, // DebugLexicalBlock in opencl_debuginfo_100
    {22,IR(801, 3),IR(44852, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in opencl_debuginfo_100
    {23,IR(804, 2),IR(44883, 11),IR(1, 0)}, // DebugScope in opencl_debuginfo_100
    {24,IR(0, 0),IR(44894, 13),IR(1, 0)}, // DebugNoScope in opencl_debuginfo_100
    {25,IR(806, 3),IR(44907, 15),IR(1, 0)}, // DebugInlinedAt in opencl_debuginfo_100
    {26,IR(1028, 8),IR(44964, 19),IR(1, 0)}, // DebugLocalVariable in opencl_debuginfo_100
    {27,IR(36, 2),IR(44983, 21),IR(1, 0)}, // DebugInlinedVariable in opencl_debuginfo_100
    {28,IR(33, 3),IR(45004, 13),IR(1, 0)}, // DebugDeclare in opencl_debuginfo_100
    {29,IR(889, 4),IR(45017, 11),IR(1, 0)}, // DebugValue in opencl_debuginfo_100
    {30,IR(1036, 2),IR(45061, 15),IR(1, 0)}, // DebugOperation in opencl_debuginfo_100
    {31,IR(670, 1),IR(45076, 16),IR(1, 0)}, // DebugExpression in opencl_debuginfo_100
    {32,IR(821, 4),IR(45092, 14),IR(1, 0)}, // DebugMacroDef in opencl_debuginfo_100
    {33,IR(801, 3),IR(45106, 16),IR(1, 0)}, // DebugMacroUndef in opencl_debuginfo_100
    {34,IR(1038, 7),IR(46861, 20),IR(1, 0)}, // DebugImportedEntity in opencl_debuginfo_100
    {35,IR(804, 2),IR(46881, 12),IR(1, 0)}, // DebugSource in opencl_debuginfo_100
    {36,IR(1045, 8),IR(47466, 17),IR(1, 0)}, // DebugModuleINTEL in opencl_debuginfo_100
    {0,IR(10, 1),IR(47483, 5),IR(1, 0)}, // acos in opencl_std_100
    {1,IR(10, 1),IR(47488, 6),IR(1, 0)}, // acosh in opencl_std_100
    {2,IR(10, 1),IR(47494, 7),IR(1, 0)}, // acospi in opencl_std_100
    {3,IR(10, 1),IR(47501, 5),IR(1, 0)}, // asin in opencl_std_100
    {4,IR(10, 1),IR(47506, 6),IR(1, 0)}, // asinh in opencl_std_100
    {5,IR(10, 1),IR(47512, 7),IR(1, 0)}, // asinpi in opencl_std_100
    {6,IR(10, 1),IR(47519, 5),IR(1, 0)}, // atan in opencl_std_100
    {7,IR(36, 2),IR(47524, 6),IR(1, 0)}, // atan2 in opencl_std_100
    {8,IR(10, 1),IR(47530, 6),IR(1, 0)}, // atanh in opencl_std_100
    {9,IR(10, 1),IR(47536, 7),IR(1, 0)}, // atanpi in opencl_std_100
    {10,IR(36, 2),IR(47543, 8),IR(1, 0)}, // atan2pi in opencl_std_100
    {11,IR(10, 1),IR(47551, 5),IR(1, 0)}, // cbrt in opencl_std_100
    {12,IR(10, 1),IR(47556, 5),IR(1, 0)}, // ceil in opencl_std_100
    {13,IR(36, 2),IR(47561, 9),IR(1, 0)}, // copysign in opencl_std_100
    {14,IR(10, 1),IR(47570, 4),IR(1, 0)}, // cos in opencl_std_100
    {15,IR(10, 1),IR(47574, 5),IR(1, 0)}, // cosh in opencl_std_100
    {16,IR(10, 1),IR(47579, 6),IR(1, 0)}, // cospi in opencl_std_100
    {17,IR(10, 1),IR(47585, 5),IR(1, 0)}, // erfc in opencl_std_100
    {18,IR(10, 1),IR(47590, 4),IR(1, 0)}, // erf in opencl_std_100
    {19,IR(10, 1),IR(47594, 4),IR(1, 0)}, // exp in opencl_std_100
    {20,IR(10, 1),IR(47598, 5),IR(1, 0)}, // exp2 in opencl_std_100
    {21,IR(10, 1),IR(47603, 6),IR(1, 0)}, // exp10 in opencl_std_100
    {22,IR(10, 1),IR(47609, 6),IR(1, 0)}, // expm1 in opencl_std_100
    {23,IR(10, 1),IR(47615, 5),IR(1, 0)}, // fabs in opencl_std_100
    {24,IR(36, 2),IR(47620, 5),IR(1, 0)}, // fdim in opencl_std_100
    {25,IR(10, 1),IR(47625, 6),IR(1, 0)}, // floor in opencl_std_100
    {26,IR(33, 3),IR(47631, 4),IR(1, 0)}, // fma in opencl_std_100
    {27,IR(36, 2),IR(47635, 5),IR(1, 0)}, // fmax in opencl_std_100
    {28,IR(36, 2),IR(47640, 5),IR(1, 0)}, // fmin in opencl_std_100
    {29,IR(36, 2),IR(47645, 5),IR(1, 0)}, // fmod in opencl_std_100
    {30,IR(36, 2),IR(47650, 6),IR(1, 0)}, // fract in opencl_std_100
    {31,IR(36, 2),IR(47656, 6),IR(1, 0)}, // frexp in opencl_std_100
    {32,IR(36, 2),IR(47662, 6),IR(1, 0)}, // hypot in opencl_std_100
    {33,IR(10, 1),IR(47668, 6),IR(1, 0)}, // ilogb in opencl_std_100
    {34,IR(36, 2),IR(47674, 6),IR(1, 0)}, // ldexp in opencl_std_100
    {35,IR(10, 1),IR(47680, 7),IR(1, 0)}, // lgamma in opencl_std_100
    {36,IR(36, 2),IR(47687, 9),IR(1, 0)}, // lgamma_r in opencl_std_100
    {37,IR(10, 1),IR(47696, 4),IR(1, 0)}, // log in opencl_std_100
    {38,IR(10, 1),IR(47700, 5),IR(1, 0)}, // log2 in opencl_std_100
    {39,IR(10, 1),IR(47705, 6),IR(1, 0)}, // log10 in opencl_std_100
    {40,IR(10, 1),IR(47711, 6),IR(1, 0)}, // log1p in opencl_std_100
    {41,IR(10, 1),IR(47717, 5),IR(1, 0)}, // logb in opencl_std_100
    {42,IR(33, 3),IR(47722, 4),IR(1, 0)}, // mad in opencl_std_100
    {43,IR(36, 2),IR(47726, 7),IR(1, 0)}, // maxmag in opencl_std_100
    {44,IR(36, 2),IR(47733, 7),IR(1, 0)}, // minmag in opencl_std_100
    {45,IR(36, 2),IR(47740, 5),IR(1, 0)}, // modf in opencl_std_100
    {46,IR(10, 1),IR(47745, 4),IR(1, 0)}, // nan in opencl_std_100
    {47,IR(36, 2),IR(47749, 10),IR(1, 0)}, // nextafter in opencl_std_100
    {48,IR(36, 2),IR(47759, 4),IR(1, 0)}, // pow in opencl_std_100
    {49,IR(36, 2),IR(47763, 5),IR(1, 0)}, // pown in opencl_std_100
    {50,IR(36, 2),IR(47768, 5),IR(1, 0)}, // powr in opencl_std_100
    {51,IR(36, 2),IR(47773, 10),IR(1, 0)}, // remainder in opencl_std_100
    {52,IR(33, 3),IR(47783, 7),IR(1, 0)}, // remquo in opencl_std_100
    {53,IR(10, 1),IR(47790, 5),IR(1, 0)}, // rint in opencl_std_100
    {54,IR(36, 2),IR(47795, 6),IR(1, 0)}, // rootn in opencl_std_100
    {55,IR(10, 1),IR(47801, 6),IR(1, 0)}, // round in opencl_std_100
    {56,IR(10, 1),IR(47807, 6),IR(1, 0)}, // rsqrt in opencl_std_100
    {57,IR(10, 1),IR(47813, 4),IR(1, 0)}, // sin in opencl_std_100
    {58,IR(36, 2),IR(47817, 7),IR(1, 0)}, // sincos in opencl_std_100
    {59,IR(10, 1),IR(47824, 5),IR(1, 0)}, // sinh in opencl_std_100
    {60,IR(10, 1),IR(47829, 6),IR(1, 0)}, // sinpi in opencl_std_100
    {61,IR(10, 1),IR(47835, 5),IR(1, 0)}, // sqrt in opencl_std_100
    {62,IR(10, 1),IR(47840, 4),IR(1, 0)}, // tan in opencl_std_100
    {63,IR(10, 1),IR(47844, 5),IR(1, 0)}, // tanh in opencl_std_100
    {64,IR(10, 1),IR(47849, 6),IR(1, 0)}, // tanpi in opencl_std_100
    {65,IR(10, 1),IR(47855, 7),IR(1, 0)}, // tgamma in opencl_std_100
    {66,IR(10, 1),IR(47862, 6),IR(1, 0)}, // trunc in opencl_std_100
    {67,IR(10, 1),IR(47868, 9),IR(1, 0)}, // half_cos in opencl_std_100
    {68,IR(36, 2),IR(47877, 12),IR(1, 0)}, // half_divide in opencl_std_100
    {69,IR(10, 1),IR(47889, 9),IR(1, 0)}, // half_exp in opencl_std_100
    {70,IR(10, 1),IR(47898, 10),IR(1, 0)}, // half_exp2 in opencl_std_100
    {71,IR(10, 1),IR(47908, 11),IR(1, 0)}, // half_exp10 in opencl_std_100
    {72,IR(10, 1),IR(47919, 9),IR(1, 0)}, // half_log in opencl_std_100
    {73,IR(10, 1),IR(47928, 10),IR(1, 0)}, // half_log2 in opencl_std_100
    {74,IR(10, 1),IR(47938, 11),IR(1, 0)}, // half_log10 in opencl_std_100
    {75,IR(36, 2),IR(47949, 10),IR(1, 0)}, // half_powr in opencl_std_100
    {76,IR(10, 1),IR(47959, 11),IR(1, 0)}, // half_recip in opencl_std_100
    {77,IR(10, 1),IR(47970, 11),IR(1, 0)}, // half_rsqrt in opencl_std_100
    {78,IR(10, 1),IR(47981, 9),IR(1, 0)}, // half_sin in opencl_std_100
    {79,IR(10, 1),IR(47990, 10),IR(1, 0)}, // half_sqrt in opencl_std_100
    {80,IR(10, 1),IR(48000, 9),IR(1, 0)}, // half_tan in opencl_std_100
    {81,IR(10, 1),IR(48009, 11),IR(1, 0)}, // native_cos in opencl_std_100
    {82,IR(36, 2),IR(48020, 14),IR(1, 0)}, // native_divide in opencl_std_100
    {83,IR(10, 1),IR(48034, 11),IR(1, 0)}, // native_exp in opencl_std_100
    {84,IR(10, 1),IR(48045, 12),IR(1, 0)}, // native_exp2 in opencl_std_100
    {85,IR(10, 1),IR(48057, 13),IR(1, 0)}, // native_exp10 in opencl_std_100
    {86,IR(10, 1),IR(48070, 11),IR(1, 0)}, // native_log in opencl_std_100
    {87,IR(10, 1),IR(48081, 12),IR(1, 0)}, // native_log2 in opencl_std_100
    {88,IR(10, 1),IR(48093, 13),IR(1, 0)}, // native_log10 in opencl_std_100
    {89,IR(36, 2),IR(48106, 12),IR(1, 0)}, // native_powr in opencl_std_100
    {90,IR(10, 1),IR(48118, 13),IR(1, 0)}, // native_recip in opencl_std_100
    {91,IR(10, 1),IR(48131, 13),IR(1, 0)}, // native_rsqrt in opencl_std_100
    {92,IR(10, 1),IR(48144, 11),IR(1, 0)}, // native_sin in opencl_std_100
    {93,IR(10, 1),IR(48155, 12),IR(1, 0)}, // native_sqrt in opencl_std_100
    {94,IR(10, 1),IR(48167, 11),IR(1, 0)}, // native_tan in opencl_std_100
    {95,IR(33, 3),IR(48178, 7),IR(1, 0)}, // fclamp in opencl_std_100
    {96,IR(10, 1),IR(48185, 8),IR(1, 0)}, // degrees in opencl_std_100
    {97,IR(36, 2),IR(48193, 12),IR(1, 0)}, // fmax_common in opencl_std_100
    {98,IR(36, 2),IR(48205, 12),IR(1, 0)}, // fmin_common in opencl_std_100
    {99,IR(33, 3),IR(48217, 4),IR(1, 0)}, // mix in opencl_std_100
    {100,IR(10, 1),IR(48221, 8),IR(1, 0)}, // radians in opencl_std_100
    {101,IR(36, 2),IR(48229, 5),IR(1, 0)}, // step in opencl_std_100
    {102,IR(33, 3),IR(48234, 11),IR(1, 0)}, // smoothstep in opencl_std_100
    {103,IR(10, 1),IR(48245, 5),IR(1, 0)}, // sign in opencl_std_100
    {104,IR(36, 2),IR(48250, 6),IR(1, 0)}, // cross in opencl_std_100
    {105,IR(36, 2),IR(48256, 9),IR(1, 0)}, // distance in opencl_std_100
    {106,IR(10, 1),IR(48265, 7),IR(1, 0)}, // length in opencl_std_100
    {107,IR(10, 1),IR(48272, 10),IR(1, 0)}, // normalize in opencl_std_100
    {108,IR(36, 2),IR(48282, 14),IR(1, 0)}, // fast_distance in opencl_std_100
    {109,IR(10, 1),IR(48296, 12),IR(1, 0)}, // fast_length in opencl_std_100
    {110,IR(10, 1),IR(48308, 15),IR(1, 0)}, // fast_normalize in opencl_std_100
    {141,IR(10, 1),IR(48323, 6),IR(1, 0)}, // s_abs in opencl_std_100
    {142,IR(36, 2),IR(48329, 11),IR(1, 0)}, // s_abs_diff in opencl_std_100
    {143,IR(36, 2),IR(48340, 10),IR(1, 0)}, // s_add_sat in opencl_std_100
    {144,IR(36, 2),IR(48350, 10),IR(1, 0)}, // u_add_sat in opencl_std_100
    {145,IR(36, 2),IR(48360, 7),IR(1, 0)}, // s_hadd in opencl_std_100
    {146,IR(36, 2),IR(48367, 7),IR(1, 0)}, // u_hadd in opencl_std_100
    {147,IR(36, 2),IR(48374, 8),IR(1, 0)}, // s_rhadd in opencl_std_100
    {148,IR(36, 2),IR(48382, 8),IR(1, 0)}, // u_rhadd in opencl_std_100
    {149,IR(33, 3),IR(48390, 8),IR(1, 0)}, // s_clamp in opencl_std_100
    {150,IR(33, 3),IR(48398, 8),IR(1, 0)}, // u_clamp in opencl_std_100
    {151,IR(10, 1),IR(48406, 4),IR(1, 0)}, // clz in opencl_std_100
    {152,IR(10, 1),IR(48410, 4),IR(1, 0)}, // ctz in opencl_std_100
    {153,IR(33, 3),IR(48414, 9),IR(1, 0)}, // s_mad_hi in opencl_std_100
    {154,IR(33, 3),IR(48423, 10),IR(1, 0)}, // u_mad_sat in opencl_std_100
    {155,IR(33, 3),IR(48433, 10),IR(1, 0)}, // s_mad_sat in opencl_std_100
    {156,IR(36, 2),IR(48443, 6),IR(1, 0)}, // s_max in opencl_std_100
    {157,IR(36, 2),IR(48449, 6),IR(1, 0)}, // u_max in opencl_std_100
    {158,IR(36, 2),IR(48455, 6),IR(1, 0)}, // s_min in opencl_std_100
    {159,IR(36, 2),IR(48461, 6),IR(1, 0)}, // u_min in opencl_std_100
    {160,IR(36, 2),IR(48467, 9),IR(1, 0)}, // s_mul_hi in opencl_std_100
    {161,IR(36, 2),IR(48476, 7),IR(1, 0)}, // rotate in opencl_std_100
    {162,IR(36, 2),IR(48483, 10),IR(1, 0)}, // s_sub_sat in opencl_std_100
    {163,IR(36, 2),IR(48493, 10),IR(1, 0)}, // u_sub_sat in opencl_std_100
    {164,IR(36, 2),IR(48503, 11),IR(1, 0)}, // u_upsample in opencl_std_100
    {165,IR(36, 2),IR(48514, 11),IR(1, 0)}, // s_upsample in opencl_std_100
    {166,IR(10, 1),IR(48525, 9),IR(1, 0)}, // popcount in opencl_std_100
    {167,IR(33, 3),IR(48534, 8),IR(1, 0)}, // s_mad24 in opencl_std_100
    {168,IR(33, 3),IR(48542, 8),IR(1, 0)}, // u_mad24 in opencl_std_100
    {169,IR(36, 2),IR(48550, 8),IR(1, 0)}, // s_mul24 in opencl_std_100
    {170,IR(36, 2),IR(48558, 8),IR(1, 0)}, // u_mul24 in opencl_std_100
    {171,IR(1053, 3),IR(48566, 7),IR(1, 0)}, // vloadn in opencl_std_100
    {172,IR(33, 3),IR(48573, 8),IR(1, 0)}, // vstoren in opencl_std_100
    {173,IR(36, 2),IR(48581, 11),IR(1, 0)}, // vload_half in opencl_std_100
    {174,IR(1053, 3),IR(48592, 12),IR(1, 0)}, // vload_halfn in opencl_std_100
    {175,IR(33, 3),IR(48604, 12),IR(1, 0)}, // vstore_half in opencl_std_100
    {176,IR(1056, 4),IR(48616, 14),IR(1, 0)}, // vstore_half_r in opencl_std_100
    {177,IR(33, 3),IR(48630, 13),IR(1, 0)}, // vstore_halfn in opencl_std_100
    {178,IR(1056, 4),IR(48643, 15),IR(1, 0)}, // vstore_halfn_r in opencl_std_100
    {179,IR(1053, 3),IR(48658, 13),IR(1, 0)}, // vloada_halfn in opencl_std_100
    {180,IR(33, 3),IR(48671, 14),IR(1, 0)}, // vstorea_halfn in opencl_std_100
    {181,IR(1056, 4),IR(48685, 16),IR(1, 0)}, // vstorea_halfn_r in opencl_std_100
    {182,IR(36, 2),IR(48701, 8),IR(1, 0)}, // shuffle in opencl_std_100
    {183,IR(33, 3),IR(48709, 9),IR(1, 0)}, // shuffle2 in opencl_std_100
    {184,IR(168, 2),IR(48718, 7),IR(1, 0)}, // printf in opencl_std_100
    {185,IR(36, 2),IR(48725, 9),IR(1, 0)}, // prefetch in opencl_std_100
    {186,IR(33, 3),IR(48734, 10),IR(1, 0)}, // bitselect in opencl_std_100
    {187,IR(33, 3),IR(48744, 7),IR(1, 0)}, // select in opencl_std_100
    {201,IR(10, 1),IR(48751, 6),IR(1, 0)}, // u_abs in opencl_std_100
    {202,IR(36, 2),IR(48757, 11),IR(1, 0)}, // u_abs_diff in opencl_std_100
    {203,IR(36, 2),IR(48768, 9),IR(1, 0)}, // u_mul_hi in opencl_std_100
    {204,IR(33, 3),IR(48777, 9),IR(1, 0)}, // u_mad_hi in opencl_std_100
    {1,IR(10, 1),IR(48786, 17),IR(1, 0)}, // CubeFaceIndexAMD in spv_amd_gcn_shader
    {2,IR(10, 1),IR(48803, 17),IR(1, 0)}, // CubeFaceCoordAMD in spv_amd_gcn_shader
    {3,IR(0, 0),IR(48820, 8),IR(1, 0)}, // TimeAMD in spv_amd_gcn_shader
    {1,IR(36, 2),IR(48828, 22),IR(1, 0)}, // SwizzleInvocationsAMD in spv_amd_shader_ballot
    {2,IR(36, 2),IR(48850, 28),IR(1, 0)}, // SwizzleInvocationsMaskedAMD in spv_amd_shader_ballot
    {3,IR(33, 3),IR(48878, 19),IR(1, 0)}, // WriteInvocationAMD in spv_amd_shader_ballot
    {4,IR(10, 1),IR(48897, 9),IR(1, 0)}, // MbcntAMD in spv_amd_shader_ballot
    {1,IR(36, 2),IR(48906, 23),IR(1, 0)}, // InterpolateAtVertexAMD in spv_amd_shader_explicit_vertex_parameter
    {1,IR(33, 3),IR(48929, 9),IR(1, 0)}, // FMin3AMD in spv_amd_shader_trinary_minmax
    {2,IR(33, 3),IR(48938, 9),IR(1, 0)}, // UMin3AMD in spv_amd_shader_trinary_minmax
    {3,IR(33, 3),IR(48947, 9),IR(1, 0)}, // SMin3AMD in spv_amd_shader_trinary_minmax
    {4,IR(33, 3),IR(48956, 9),IR(1, 0)}, // FMax3AMD in spv_amd_shader_trinary_minmax
    {5,IR(33, 3),IR(48965, 9),IR(1, 0)}, // UMax3AMD in spv_amd_shader_trinary_minmax
    {6,IR(33, 3),IR(48974, 9),IR(1, 0)}, // SMax3AMD in spv_amd_shader_trinary_minmax
    {7,IR(33, 3),IR(48983, 9),IR(1, 0)}, // FMid3AMD in spv_amd_shader_trinary_minmax
    {8,IR(33, 3),IR(48992, 9),IR(1, 0)}, // UMid3AMD in spv_amd_shader_trinary_minmax
    {9,IR(33, 3),IR(49001, 9),IR(1, 0)}, // SMid3AMD in spv_amd_shader_trinary_minmax
}};

IndexRange ExtInstByValueRangeForKind(spv_ext_inst_type_t type) {
  switch(type) {
    case SPV_EXT_INST_TYPE_DEBUGINFO: return IR(0, 34);
    case SPV_EXT_INST_TYPE_GLSL_STD_450: return IR(34, 81);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_CLSPVREFLECTION: return IR(115, 42);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_SHADER_DEBUGINFO_100: return IR(157, 44);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_VKSPREFLECTION: return IR(201, 8);
    case SPV_EXT_INST_TYPE_OPENCL_DEBUGINFO_100: return IR(209, 37);
    case SPV_EXT_INST_TYPE_OPENCL_STD: return IR(246, 162);
    case SPV_EXT_INST_TYPE_SPV_AMD_GCN_SHADER: return IR(408, 3);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_BALLOT: return IR(411, 4);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER: return IR(415, 1);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_TRINARY_MINMAX: return IR(416, 9);
    default: break;
  }
  return IR(0,0);
}

// Extended instruction opcode names sorted by extended instruction kind, then opcode name.
// The fields in order are:
//   name
//   index into kExtInstByValue
static const std::array<NameIndex, 425> kExtInstNames{{
    {IR(44277, 21), 1}, // DebugCompilationUnit in debuginfo
    {IR(45004, 13), 28}, // DebugDeclare in debuginfo
    {IR(45076, 16), 31}, // DebugExpression in debuginfo
    {IR(44820, 14), 20}, // DebugFunction in debuginfo
    {IR(44795, 25), 19}, // DebugFunctionDeclaration in debuginfo
    {IR(44775, 20), 18}, // DebugGlobalVariable in debuginfo
    {IR(44263, 14), 0}, // DebugInfoNone in debuginfo
    {IR(44907, 15), 25}, // DebugInlinedAt in debuginfo
    {IR(44983, 21), 27}, // DebugInlinedVariable in debuginfo
    {IR(44834, 18), 21}, // DebugLexicalBlock in debuginfo
    {IR(44852, 31), 22}, // DebugLexicalBlockDiscriminator in debuginfo
    {IR(44964, 19), 26}, // DebugLocalVariable in debuginfo
    {IR(45092, 14), 32}, // DebugMacroDef in debuginfo
    {IR(45106, 16), 33}, // DebugMacroUndef in debuginfo
    {IR(44894, 13), 24}, // DebugNoScope in debuginfo
    {IR(45061, 15), 30}, // DebugOperation in debuginfo
    {IR(44883, 11), 23}, // DebugScope in debuginfo
    {IR(44473, 15), 5}, // DebugTypeArray in debuginfo
    {IR(44350, 15), 2}, // DebugTypeBasic in debuginfo
    {IR(44587, 19), 10}, // DebugTypeComposite in debuginfo
    {IR(44535, 14), 9}, // DebugTypeEnum in debuginfo
    {IR(44517, 18), 8}, // DebugTypeFunction in debuginfo
    {IR(44622, 21), 12}, // DebugTypeInheritance in debuginfo
    {IR(44606, 16), 11}, // DebugTypeMember in debuginfo
    {IR(44399, 17), 3}, // DebugTypePointer in debuginfo
    {IR(44643, 21), 13}, // DebugTypePtrToMember in debuginfo
    {IR(44454, 19), 4}, // DebugTypeQualifier in debuginfo
    {IR(44664, 18), 14}, // DebugTypeTemplate in debuginfo
    {IR(44682, 27), 15}, // DebugTypeTemplateParameter in debuginfo
    {IR(44744, 31), 17}, // DebugTypeTemplateParameterPack in debuginfo
    {IR(44709, 35), 16}, // DebugTypeTemplateTemplateParameter in debuginfo
    {IR(44488, 16), 6}, // DebugTypeVector in debuginfo
    {IR(44504, 13), 7}, // DebugTypedef in debuginfo
    {IR(45017, 11), 29}, // DebugValue in debuginfo
    {IR(45216, 5), 50}, // Acos in glsl_std_450
    {IR(45247, 6), 56}, // Acosh in glsl_std_450
    {IR(45211, 5), 49}, // Asin in glsl_std_450
    {IR(45241, 6), 55}, // Asinh in glsl_std_450
    {IR(45221, 5), 51}, // Atan in glsl_std_450
    {IR(45259, 6), 58}, // Atan2 in glsl_std_450
    {IR(45253, 6), 57}, // Atanh in glsl_std_450
    {IR(45172, 5), 42}, // Ceil in glsl_std_450
    {IR(45203, 4), 47}, // Cos in glsl_std_450
    {IR(45231, 5), 53}, // Cosh in glsl_std_450
    {IR(45643, 6), 101}, // Cross in glsl_std_450
    {IR(45191, 8), 45}, // Degrees in glsl_std_450
    {IR(45304, 12), 66}, // Determinant in glsl_std_450
    {IR(45634, 9), 100}, // Distance in glsl_std_450
    {IR(45269, 4), 60}, // Exp in glsl_std_450
    {IR(45277, 5), 62}, // Exp2 in glsl_std_450
    {IR(45144, 5), 37}, // FAbs in glsl_std_450
    {IR(45376, 7), 76}, // FClamp in glsl_std_450
    {IR(45361, 5), 73}, // FMax in glsl_std_450
    {IR(45346, 5), 70}, // FMin in glsl_std_450
    {IR(45397, 5), 79}, // FMix in glsl_std_450
    {IR(45154, 6), 39}, // FSign in glsl_std_450
    {IR(45659, 12), 103}, // FaceForward in glsl_std_450
    {IR(45687, 9), 106}, // FindILsb in glsl_std_450
    {IR(45696, 9), 107}, // FindSMsb in glsl_std_450
    {IR(45705, 9), 108}, // FindUMsb in glsl_std_450
    {IR(45166, 6), 41}, // Floor in glsl_std_450
    {IR(45423, 4), 83}, // Fma in glsl_std_450
    {IR(45177, 6), 43}, // Fract in glsl_std_450
    {IR(45427, 6), 84}, // Frexp in glsl_std_450
    {IR(45433, 12), 85}, // FrexpStruct in glsl_std_450
    {IR(45402, 5), 80}, // IMix in glsl_std_450
    {IR(45714, 22), 109}, // InterpolateAtCentroid in glsl_std_450
    {IR(45756, 20), 111}, // InterpolateAtOffset in glsl_std_450
    {IR(45736, 20), 110}, // InterpolateAtSample in glsl_std_450
    {IR(45292, 12), 65}, // InverseSqrt in glsl_std_450
    {IR(45445, 6), 86}, // Ldexp in glsl_std_450
    {IR(45627, 7), 99}, // Length in glsl_std_450
    {IR(45273, 4), 61}, // Log in glsl_std_450
    {IR(45282, 5), 63}, // Log2 in glsl_std_450
    {IR(45316, 14), 67}, // MatrixInverse in glsl_std_450
    {IR(45330, 5), 68}, // Modf in glsl_std_450
    {IR(45335, 11), 69}, // ModfStruct in glsl_std_450
    {IR(45786, 7), 114}, // NClamp in glsl_std_450
    {IR(45781, 5), 113}, // NMax in glsl_std_450
    {IR(45776, 5), 112}, // NMin in glsl_std_450
    {IR(45649, 10), 102}, // Normalize in glsl_std_450
    {IR(45518, 15), 92}, // PackDouble2x32 in glsl_std_450
    {IR(45505, 13), 91}, // PackHalf2x16 in glsl_std_450
    {IR(45477, 14), 89}, // PackSnorm2x16 in glsl_std_450
    {IR(45451, 13), 87}, // PackSnorm4x8 in glsl_std_450
    {IR(45491, 14), 90}, // PackUnorm2x16 in glsl_std_450
    {IR(45464, 13), 88}, // PackUnorm4x8 in glsl_std_450
    {IR(45265, 4), 59}, // Pow in glsl_std_450
    {IR(45183, 8), 44}, // Radians in glsl_std_450
    {IR(45671, 8), 104}, // Reflect in glsl_std_450
    {IR(45679, 8), 105}, // Refract in glsl_std_450
    {IR(45122, 6), 34}, // Round in glsl_std_450
    {IR(45128, 10), 35}, // RoundEven in glsl_std_450
    {IR(45149, 5), 38}, // SAbs in glsl_std_450
    {IR(45390, 7), 78}, // SClamp in glsl_std_450
    {IR(45371, 5), 75}, // SMax in glsl_std_450
    {IR(45356, 5), 72}, // SMin in glsl_std_450
    {IR(45160, 6), 40}, // SSign in glsl_std_450
    {IR(45199, 4), 46}, // Sin in glsl_std_450
    {IR(45226, 5), 52}, // Sinh in glsl_std_450
    {IR(45412, 11), 82}, // SmoothStep in glsl_std_450
    {IR(45287, 5), 64}, // Sqrt in glsl_std_450
    {IR(45407, 5), 81}, // Step in glsl_std_450
    {IR(45207, 4), 48}, // Tan in glsl_std_450
    {IR(45236, 5), 54}, // Tanh in glsl_std_450
    {IR(45138, 6), 36}, // Trunc in glsl_std_450
    {IR(45383, 7), 77}, // UClamp in glsl_std_450
    {IR(45366, 5), 74}, // UMax in glsl_std_450
    {IR(45351, 5), 71}, // UMin in glsl_std_450
    {IR(45610, 17), 98}, // UnpackDouble2x32 in glsl_std_450
    {IR(45565, 15), 95}, // UnpackHalf2x16 in glsl_std_450
    {IR(45533, 16), 93}, // UnpackSnorm2x16 in glsl_std_450
    {IR(45580, 15), 96}, // UnpackSnorm4x8 in glsl_std_450
    {IR(45549, 16), 94}, // UnpackUnorm2x16 in glsl_std_450
    {IR(45595, 15), 97}, // UnpackUnorm4x8 in glsl_std_450
    {IR(45793, 13), 116}, // ArgumentInfo in nonsemantic_clspvreflection
    {IR(45888, 24), 121}, // ArgumentPodPushConstant in nonsemantic_clspvreflection
    {IR(45844, 25), 119}, // ArgumentPodStorageBuffer in nonsemantic_clspvreflection
    {IR(45869, 19), 120}, // ArgumentPodUniform in nonsemantic_clspvreflection
    {IR(46322, 28), 140}, // ArgumentPointerPushConstant in nonsemantic_clspvreflection
    {IR(46350, 23), 141}, // ArgumentPointerUniform in nonsemantic_clspvreflection
    {IR(45912, 21), 122}, // ArgumentSampledImage in nonsemantic_clspvreflection
    {IR(45954, 16), 124}, // ArgumentSampler in nonsemantic_clspvreflection
    {IR(45806, 22), 117}, // ArgumentStorageBuffer in nonsemantic_clspvreflection
    {IR(45933, 21), 123}, // ArgumentStorageImage in nonsemantic_clspvreflection
    {IR(46610, 27), 148}, // ArgumentStorageTexelBuffer in nonsemantic_clspvreflection
    {IR(45828, 16), 118}, // ArgumentUniform in nonsemantic_clspvreflection
    {IR(46637, 27), 149}, // ArgumentUniformTexelBuffer in nonsemantic_clspvreflection
    {IR(45970, 18), 125}, // ArgumentWorkgroup in nonsemantic_clspvreflection
    {IR(46664, 32), 150}, // ConstantDataPointerPushConstant in nonsemantic_clspvreflection
    {IR(46218, 26), 135}, // ConstantDataStorageBuffer in nonsemantic_clspvreflection
    {IR(46244, 20), 136}, // ConstantDataUniform in nonsemantic_clspvreflection
    {IR(46488, 45), 145}, // ImageArgumentInfoChannelDataTypePushConstant in nonsemantic_clspvreflection
    {IR(46570, 40), 147}, // ImageArgumentInfoChannelDataTypeUniform in nonsemantic_clspvreflection
    {IR(46446, 42), 144}, // ImageArgumentInfoChannelOrderPushConstant in nonsemantic_clspvreflection
    {IR(46533, 37), 146}, // ImageArgumentInfoChannelOrderUniform in nonsemantic_clspvreflection
    {IR(4477, 7), 115}, // Kernel in nonsemantic_clspvreflection
    {IR(7902, 15), 137}, // LiteralSampler in nonsemantic_clspvreflection
    {IR(46805, 34), 155}, // NormalizedSamplerMaskPushConstant in nonsemantic_clspvreflection
    {IR(46773, 32), 154}, // PrintfBufferPointerPushConstant in nonsemantic_clspvreflection
    {IR(46747, 26), 153}, // PrintfBufferStorageBuffer in nonsemantic_clspvreflection
    {IR(46736, 11), 152}, // PrintfInfo in nonsemantic_clspvreflection
    {IR(46696, 40), 151}, // ProgramScopeVariablePointerPushConstant in nonsemantic_clspvreflection
    {IR(46408, 38), 143}, // ProgramScopeVariablePointerRelocation in nonsemantic_clspvreflection
    {IR(46373, 35), 142}, // ProgramScopeVariablesStorageBuffer in nonsemantic_clspvreflection
    {IR(46264, 30), 138}, // PropertyRequiredWorkgroupSize in nonsemantic_clspvreflection
    {IR(46084, 30), 130}, // PushConstantEnqueuedLocalSize in nonsemantic_clspvreflection
    {IR(46059, 25), 129}, // PushConstantGlobalOffset in nonsemantic_clspvreflection
    {IR(46114, 23), 131}, // PushConstantGlobalSize in nonsemantic_clspvreflection
    {IR(46162, 26), 133}, // PushConstantNumWorkgroups in nonsemantic_clspvreflection
    {IR(46188, 30), 134}, // PushConstantRegionGroupOffset in nonsemantic_clspvreflection
    {IR(46137, 25), 132}, // PushConstantRegionOffset in nonsemantic_clspvreflection
    {IR(46014, 25), 127}, // SpecConstantGlobalOffset in nonsemantic_clspvreflection
    {IR(46294, 28), 139}, // SpecConstantSubgroupMaxSize in nonsemantic_clspvreflection
    {IR(46039, 20), 128}, // SpecConstantWorkDim in nonsemantic_clspvreflection
    {IR(45988, 26), 126}, // SpecConstantWorkgroupSize in nonsemantic_clspvreflection
    {IR(46839, 22), 156}, // WorkgroupVariableSize in nonsemantic_clspvreflection
    {IR(46960, 21), 197}, // DebugBuildIdentifier in nonsemantic_shader_debuginfo_100
    {IR(44277, 21), 158}, // DebugCompilationUnit in nonsemantic_shader_debuginfo_100
    {IR(45004, 13), 185}, // DebugDeclare in nonsemantic_shader_debuginfo_100
    {IR(46998, 16), 199}, // DebugEntryPoint in nonsemantic_shader_debuginfo_100
    {IR(45076, 16), 188}, // DebugExpression in nonsemantic_shader_debuginfo_100
    {IR(44820, 14), 177}, // DebugFunction in nonsemantic_shader_debuginfo_100
    {IR(44795, 25), 176}, // DebugFunctionDeclaration in nonsemantic_shader_debuginfo_100
    {IR(46893, 24), 193}, // DebugFunctionDefinition in nonsemantic_shader_debuginfo_100
    {IR(44775, 20), 175}, // DebugGlobalVariable in nonsemantic_shader_debuginfo_100
    {IR(46861, 20), 191}, // DebugImportedEntity in nonsemantic_shader_debuginfo_100
    {IR(44263, 14), 157}, // DebugInfoNone in nonsemantic_shader_debuginfo_100
    {IR(44907, 15), 182}, // DebugInlinedAt in nonsemantic_shader_debuginfo_100
    {IR(44983, 21), 184}, // DebugInlinedVariable in nonsemantic_shader_debuginfo_100
    {IR(44834, 18), 178}, // DebugLexicalBlock in nonsemantic_shader_debuginfo_100
    {IR(44852, 31), 179}, // DebugLexicalBlockDiscriminator in nonsemantic_shader_debuginfo_100
    {IR(46938, 10), 195}, // DebugLine in nonsemantic_shader_debuginfo_100
    {IR(44964, 19), 183}, // DebugLocalVariable in nonsemantic_shader_debuginfo_100
    {IR(45092, 14), 189}, // DebugMacroDef in nonsemantic_shader_debuginfo_100
    {IR(45106, 16), 190}, // DebugMacroUndef in nonsemantic_shader_debuginfo_100
    {IR(46948, 12), 196}, // DebugNoLine in nonsemantic_shader_debuginfo_100
    {IR(44894, 13), 181}, // DebugNoScope in nonsemantic_shader_debuginfo_100
    {IR(45061, 15), 187}, // DebugOperation in nonsemantic_shader_debuginfo_100
    {IR(44883, 11), 180}, // DebugScope in nonsemantic_shader_debuginfo_100
    {IR(46881, 12), 192}, // DebugSource in nonsemantic_shader_debuginfo_100
    {IR(46917, 21), 194}, // DebugSourceContinued in nonsemantic_shader_debuginfo_100
    {IR(46981, 17), 198}, // DebugStoragePath in nonsemantic_shader_debuginfo_100
    {IR(44473, 15), 162}, // DebugTypeArray in nonsemantic_shader_debuginfo_100
    {IR(44350, 15), 159}, // DebugTypeBasic in nonsemantic_shader_debuginfo_100
    {IR(44587, 19), 167}, // DebugTypeComposite in nonsemantic_shader_debuginfo_100
    {IR(44535, 14), 166}, // DebugTypeEnum in nonsemantic_shader_debuginfo_100
    {IR(44517, 18), 165}, // DebugTypeFunction in nonsemantic_shader_debuginfo_100
    {IR(44622, 21), 169}, // DebugTypeInheritance in nonsemantic_shader_debuginfo_100
    {IR(47014, 16), 200}, // DebugTypeMatrix in nonsemantic_shader_debuginfo_100
    {IR(44606, 16), 168}, // DebugTypeMember in nonsemantic_shader_debuginfo_100
    {IR(44399, 17), 160}, // DebugTypePointer in nonsemantic_shader_debuginfo_100
    {IR(44643, 21), 170}, // DebugTypePtrToMember in nonsemantic_shader_debuginfo_100
    {IR(44454, 19), 161}, // DebugTypeQualifier in nonsemantic_shader_debuginfo_100
    {IR(44664, 18), 171}, // DebugTypeTemplate in nonsemantic_shader_debuginfo_100
    {IR(44682, 27), 172}, // DebugTypeTemplateParameter in nonsemantic_shader_debuginfo_100
    {IR(44744, 31), 174}, // DebugTypeTemplateParameterPack in nonsemantic_shader_debuginfo_100
    {IR(44709, 35), 173}, // DebugTypeTemplateTemplateParameter in nonsemantic_shader_debuginfo_100
    {IR(44488, 16), 163}, // DebugTypeVector in nonsemantic_shader_debuginfo_100
    {IR(44504, 13), 164}, // DebugTypedef in nonsemantic_shader_debuginfo_100
    {IR(45017, 11), 186}, // DebugValue in nonsemantic_shader_debuginfo_100
    {IR(47030, 14), 201}, // Configuration in nonsemantic_vkspreflection
    {IR(47106, 20), 206}, // DescriptorSetBuffer in nonsemantic_vkspreflection
    {IR(47126, 19), 207}, // DescriptorSetImage in nonsemantic_vkspreflection
    {IR(47145, 21), 208}, // DescriptorSetSampler in nonsemantic_vkspreflection
    {IR(47069, 14), 204}, // PushConstants in nonsemantic_vkspreflection
    {IR(47083, 23), 205}, // SpecializationMapEntry in nonsemantic_vkspreflection
    {IR(47044, 13), 202}, // StartCounter in nonsemantic_vkspreflection
    {IR(47057, 12), 203}, // StopCounter in nonsemantic_vkspreflection
    {IR(44277, 21), 210}, // DebugCompilationUnit in opencl_debuginfo_100
    {IR(45004, 13), 237}, // DebugDeclare in opencl_debuginfo_100
    {IR(45076, 16), 240}, // DebugExpression in opencl_debuginfo_100
    {IR(44820, 14), 229}, // DebugFunction in opencl_debuginfo_100
    {IR(44795, 25), 228}, // DebugFunctionDeclaration in opencl_debuginfo_100
    {IR(44775, 20), 227}, // DebugGlobalVariable in opencl_debuginfo_100
    {IR(46861, 20), 243}, // DebugImportedEntity in opencl_debuginfo_100
    {IR(44263, 14), 209}, // DebugInfoNone in opencl_debuginfo_100
    {IR(44907, 15), 234}, // DebugInlinedAt in opencl_debuginfo_100
    {IR(44983, 21), 236}, // DebugInlinedVariable in opencl_debuginfo_100
    {IR(44834, 18), 230}, // DebugLexicalBlock in opencl_debuginfo_100
    {IR(44852, 31), 231}, // DebugLexicalBlockDiscriminator in opencl_debuginfo_100
    {IR(44964, 19), 235}, // DebugLocalVariable in opencl_debuginfo_100
    {IR(45092, 14), 241}, // DebugMacroDef in opencl_debuginfo_100
    {IR(45106, 16), 242}, // DebugMacroUndef in opencl_debuginfo_100
    {IR(47466, 17), 245}, // DebugModuleINTEL in opencl_debuginfo_100
    {IR(44894, 13), 233}, // DebugNoScope in opencl_debuginfo_100
    {IR(45061, 15), 239}, // DebugOperation in opencl_debuginfo_100
    {IR(44883, 11), 232}, // DebugScope in opencl_debuginfo_100
    {IR(46881, 12), 244}, // DebugSource in opencl_debuginfo_100
    {IR(44473, 15), 214}, // DebugTypeArray in opencl_debuginfo_100
    {IR(44350, 15), 211}, // DebugTypeBasic in opencl_debuginfo_100
    {IR(44587, 19), 219}, // DebugTypeComposite in opencl_debuginfo_100
    {IR(44535, 14), 218}, // DebugTypeEnum in opencl_debuginfo_100
    {IR(44517, 18), 217}, // DebugTypeFunction in opencl_debuginfo_100
    {IR(44622, 21), 221}, // DebugTypeInheritance in opencl_debuginfo_100
    {IR(44606, 16), 220}, // DebugTypeMember in opencl_debuginfo_100
    {IR(44399, 17), 212}, // DebugTypePointer in opencl_debuginfo_100
    {IR(44643, 21), 222}, // DebugTypePtrToMember in opencl_debuginfo_100
    {IR(44454, 19), 213}, // DebugTypeQualifier in opencl_debuginfo_100
    {IR(44664, 18), 223}, // DebugTypeTemplate in opencl_debuginfo_100
    {IR(44682, 27), 224}, // DebugTypeTemplateParameter in opencl_debuginfo_100
    {IR(44744, 31), 226}, // DebugTypeTemplateParameterPack in opencl_debuginfo_100
    {IR(44709, 35), 225}, // DebugTypeTemplateTemplateParameter in opencl_debuginfo_100
    {IR(44488, 16), 215}, // DebugTypeVector in opencl_debuginfo_100
    {IR(44504, 13), 216}, // DebugTypedef in opencl_debuginfo_100
    {IR(45017, 11), 238}, // DebugValue in opencl_debuginfo_100
    {IR(47483, 5), 246}, // acos in opencl_std_100
    {IR(47488, 6), 247}, // acosh in opencl_std_100
    {IR(47494, 7), 248}, // acospi in opencl_std_100
    {IR(47501, 5), 249}, // asin in opencl_std_100
    {IR(47506, 6), 250}, // asinh in opencl_std_100
    {IR(47512, 7), 251}, // asinpi in opencl_std_100
    {IR(47519, 5), 252}, // atan in opencl_std_100
    {IR(47524, 6), 253}, // atan2 in opencl_std_100
    {IR(47543, 8), 256}, // atan2pi in opencl_std_100
    {IR(47530, 6), 254}, // atanh in opencl_std_100
    {IR(47536, 7), 255}, // atanpi in opencl_std_100
    {IR(48734, 10), 402}, // bitselect in opencl_std_100
    {IR(47551, 5), 257}, // cbrt in opencl_std_100
    {IR(47556, 5), 258}, // ceil in opencl_std_100
    {IR(48406, 4), 367}, // clz in opencl_std_100
    {IR(47561, 9), 259}, // copysign in opencl_std_100
    {IR(47570, 4), 260}, // cos in opencl_std_100
    {IR(47574, 5), 261}, // cosh in opencl_std_100
    {IR(47579, 6), 262}, // cospi in opencl_std_100
    {IR(48250, 6), 350}, // cross in opencl_std_100
    {IR(48410, 4), 368}, // ctz in opencl_std_100
    {IR(48185, 8), 342}, // degrees in opencl_std_100
    {IR(48256, 9), 351}, // distance in opencl_std_100
    {IR(47590, 4), 264}, // erf in opencl_std_100
    {IR(47585, 5), 263}, // erfc in opencl_std_100
    {IR(47594, 4), 265}, // exp in opencl_std_100
    {IR(47603, 6), 267}, // exp10 in opencl_std_100
    {IR(47598, 5), 266}, // exp2 in opencl_std_100
    {IR(47609, 6), 268}, // expm1 in opencl_std_100
    {IR(47615, 5), 269}, // fabs in opencl_std_100
    {IR(48282, 14), 354}, // fast_distance in opencl_std_100
    {IR(48296, 12), 355}, // fast_length in opencl_std_100
    {IR(48308, 15), 356}, // fast_normalize in opencl_std_100
    {IR(48178, 7), 341}, // fclamp in opencl_std_100
    {IR(47620, 5), 270}, // fdim in opencl_std_100
    {IR(47625, 6), 271}, // floor in opencl_std_100
    {IR(47631, 4), 272}, // fma in opencl_std_100
    {IR(47635, 5), 273}, // fmax in opencl_std_100
    {IR(48193, 12), 343}, // fmax_common in opencl_std_100
    {IR(47640, 5), 274}, // fmin in opencl_std_100
    {IR(48205, 12), 344}, // fmin_common in opencl_std_100
    {IR(47645, 5), 275}, // fmod in opencl_std_100
    {IR(47650, 6), 276}, // fract in opencl_std_100
    {IR(47656, 6), 277}, // frexp in opencl_std_100
    {IR(47868, 9), 313}, // half_cos in opencl_std_100
    {IR(47877, 12), 314}, // half_divide in opencl_std_100
    {IR(47889, 9), 315}, // half_exp in opencl_std_100
    {IR(47908, 11), 317}, // half_exp10 in opencl_std_100
    {IR(47898, 10), 316}, // half_exp2 in opencl_std_100
    {IR(47919, 9), 318}, // half_log in opencl_std_100
    {IR(47938, 11), 320}, // half_log10 in opencl_std_100
    {IR(47928, 10), 319}, // half_log2 in opencl_std_100
    {IR(47949, 10), 321}, // half_powr in opencl_std_100
    {IR(47959, 11), 322}, // half_recip in opencl_std_100
    {IR(47970, 11), 323}, // half_rsqrt in opencl_std_100
    {IR(47981, 9), 324}, // half_sin in opencl_std_100
    {IR(47990, 10), 325}, // half_sqrt in opencl_std_100
    {IR(48000, 9), 326}, // half_tan in opencl_std_100
    {IR(47662, 6), 278}, // hypot in opencl_std_100
    {IR(47668, 6), 279}, // ilogb in opencl_std_100
    {IR(47674, 6), 280}, // ldexp in opencl_std_100
    {IR(48265, 7), 352}, // length in opencl_std_100
    {IR(47680, 7), 281}, // lgamma in opencl_std_100
    {IR(47687, 9), 282}, // lgamma_r in opencl_std_100
    {IR(47696, 4), 283}, // log in opencl_std_100
    {IR(47705, 6), 285}, // log10 in opencl_std_100
    {IR(47711, 6), 286}, // log1p in opencl_std_100
    {IR(47700, 5), 284}, // log2 in opencl_std_100
    {IR(47717, 5), 287}, // logb in opencl_std_100
    {IR(47722, 4), 288}, // mad in opencl_std_100
    {IR(47726, 7), 289}, // maxmag in opencl_std_100
    {IR(47733, 7), 290}, // minmag in opencl_std_100
    {IR(48217, 4), 345}, // mix in opencl_std_100
    {IR(47740, 5), 291}, // modf in opencl_std_100
    {IR(47745, 4), 292}, // nan in opencl_std_100
    {IR(48009, 11), 327}, // native_cos in opencl_std_100
    {IR(48020, 14), 328}, // native_divide in opencl_std_100
    {IR(48034, 11), 329}, // native_exp in opencl_std_100
    {IR(48057, 13), 331}, // native_exp10 in opencl_std_100
    {IR(48045, 12), 330}, // native_exp2 in opencl_std_100
    {IR(48070, 11), 332}, // native_log in opencl_std_100
    {IR(48093, 13), 334}, // native_log10 in opencl_std_100
    {IR(48081, 12), 333}, // native_log2 in opencl_std_100
    {IR(48106, 12), 335}, // native_powr in opencl_std_100
    {IR(48118, 13), 336}, // native_recip in opencl_std_100
    {IR(48131, 13), 337}, // native_rsqrt in opencl_std_100
    {IR(48144, 11), 338}, // native_sin in opencl_std_100
    {IR(48155, 12), 339}, // native_sqrt in opencl_std_100
    {IR(48167, 11), 340}, // native_tan in opencl_std_100
    {IR(47749, 10), 293}, // nextafter in opencl_std_100
    {IR(48272, 10), 353}, // normalize in opencl_std_100
    {IR(48525, 9), 382}, // popcount in opencl_std_100
    {IR(47759, 4), 294}, // pow in opencl_std_100
    {IR(47763, 5), 295}, // pown in opencl_std_100
    {IR(47768, 5), 296}, // powr in opencl_std_100
    {IR(48725, 9), 401}, // prefetch in opencl_std_100
    {IR(48718, 7), 400}, // printf in opencl_std_100
    {IR(48221, 8), 346}, // radians in opencl_std_100
    {IR(47773, 10), 297}, // remainder in opencl_std_100
    {IR(47783, 7), 298}, // remquo in opencl_std_100
    {IR(47790, 5), 299}, // rint in opencl_std_100
    {IR(47795, 6), 300}, // rootn in opencl_std_100
    {IR(48476, 7), 377}, // rotate in opencl_std_100
    {IR(47801, 6), 301}, // round in opencl_std_100
    {IR(47807, 6), 302}, // rsqrt in opencl_std_100
    {IR(48323, 6), 357}, // s_abs in opencl_std_100
    {IR(48329, 11), 358}, // s_abs_diff in opencl_std_100
    {IR(48340, 10), 359}, // s_add_sat in opencl_std_100
    {IR(48390, 8), 365}, // s_clamp in opencl_std_100
    {IR(48360, 7), 361}, // s_hadd in opencl_std_100
    {IR(48534, 8), 383}, // s_mad24 in opencl_std_100
    {IR(48414, 9), 369}, // s_mad_hi in opencl_std_100
    {IR(48433, 10), 371}, // s_mad_sat in opencl_std_100
    {IR(48443, 6), 372}, // s_max in opencl_std_100
    {IR(48455, 6), 374}, // s_min in opencl_std_100
    {IR(48550, 8), 385}, // s_mul24 in opencl_std_100
    {IR(48467, 9), 376}, // s_mul_hi in opencl_std_100
    {IR(48374, 8), 363}, // s_rhadd in opencl_std_100
    {IR(48483, 10), 378}, // s_sub_sat in opencl_std_100
    {IR(48514, 11), 381}, // s_upsample in opencl_std_100
    {IR(48744, 7), 403}, // select in opencl_std_100
    {IR(48701, 8), 398}, // shuffle in opencl_std_100
    {IR(48709, 9), 399}, // shuffle2 in opencl_std_100
    {IR(48245, 5), 349}, // sign in opencl_std_100
    {IR(47813, 4), 303}, // sin in opencl_std_100
    {IR(47817, 7), 304}, // sincos in opencl_std_100
    {IR(47824, 5), 305}, // sinh in opencl_std_100
    {IR(47829, 6), 306}, // sinpi in opencl_std_100
    {IR(48234, 11), 348}, // smoothstep in opencl_std_100
    {IR(47835, 5), 307}, // sqrt in opencl_std_100
    {IR(48229, 5), 347}, // step in opencl_std_100
    {IR(47840, 4), 308}, // tan in opencl_std_100
    {IR(47844, 5), 309}, // tanh in opencl_std_100
    {IR(47849, 6), 310}, // tanpi in opencl_std_100
    {IR(47855, 7), 311}, // tgamma in opencl_std_100
    {IR(47862, 6), 312}, // trunc in opencl_std_100
    {IR(48751, 6), 404}, // u_abs in opencl_std_100
    {IR(48757, 11), 405}, // u_abs_diff in opencl_std_100
    {IR(48350, 10), 360}, // u_add_sat in opencl_std_100
    {IR(48398, 8), 366}, // u_clamp in opencl_std_100
    {IR(48367, 7), 362}, // u_hadd in opencl_std_100
    {IR(48542, 8), 384}, // u_mad24 in opencl_std_100
    {IR(48777, 9), 407}, // u_mad_hi in opencl_std_100
    {IR(48423, 10), 370}, // u_mad_sat in opencl_std_100
    {IR(48449, 6), 373}, // u_max in opencl_std_100
    {IR(48461, 6), 375}, // u_min in opencl_std_100
    {IR(48558, 8), 386}, // u_mul24 in opencl_std_100
    {IR(48768, 9), 406}, // u_mul_hi in opencl_std_100
    {IR(48382, 8), 364}, // u_rhadd in opencl_std_100
    {IR(48493, 10), 379}, // u_sub_sat in opencl_std_100
    {IR(48503, 11), 380}, // u_upsample in opencl_std_100
    {IR(48581, 11), 389}, // vload_half in opencl_std_100
    {IR(48592, 12), 390}, // vload_halfn in opencl_std_100
    {IR(48658, 13), 395}, // vloada_halfn in opencl_std_100
    {IR(48566, 7), 387}, // vloadn in opencl_std_100
    {IR(48604, 12), 391}, // vstore_half in opencl_std_100
    {IR(48616, 14), 392}, // vstore_half_r in opencl_std_100
    {IR(48630, 13), 393}, // vstore_halfn in opencl_std_100
    {IR(48643, 15), 394}, // vstore_halfn_r in opencl_std_100
    {IR(48671, 14), 396}, // vstorea_halfn in opencl_std_100
    {IR(48685, 16), 397}, // vstorea_halfn_r in opencl_std_100
    {IR(48573, 8), 388}, // vstoren in opencl_std_100
    {IR(48803, 17), 409}, // CubeFaceCoordAMD in spv_amd_gcn_shader
    {IR(48786, 17), 408}, // CubeFaceIndexAMD in spv_amd_gcn_shader
    {IR(48820, 8), 410}, // TimeAMD in spv_amd_gcn_shader
    {IR(48897, 9), 414}, // MbcntAMD in spv_amd_shader_ballot
    {IR(48828, 22), 411}, // SwizzleInvocationsAMD in spv_amd_shader_ballot
    {IR(48850, 28), 412}, // SwizzleInvocationsMaskedAMD in spv_amd_shader_ballot
    {IR(48878, 19), 413}, // WriteInvocationAMD in spv_amd_shader_ballot
    {IR(48906, 23), 415}, // InterpolateAtVertexAMD in spv_amd_shader_explicit_vertex_parameter
    {IR(48956, 9), 419}, // FMax3AMD in spv_amd_shader_trinary_minmax
    {IR(48983, 9), 422}, // FMid3AMD in spv_amd_shader_trinary_minmax
    {IR(48929, 9), 416}, // FMin3AMD in spv_amd_shader_trinary_minmax
    {IR(48974, 9), 421}, // SMax3AMD in spv_amd_shader_trinary_minmax
    {IR(49001, 9), 424}, // SMid3AMD in spv_amd_shader_trinary_minmax
    {IR(48947, 9), 418}, // SMin3AMD in spv_amd_shader_trinary_minmax
    {IR(48965, 9), 420}, // UMax3AMD in spv_amd_shader_trinary_minmax
    {IR(48992, 9), 423}, // UMid3AMD in spv_amd_shader_trinary_minmax
    {IR(48938, 9), 417}, // UMin3AMD in spv_amd_shader_trinary_minmax
}};

IndexRange ExtInstNameRangeForKind(spv_ext_inst_type_t type) {
  switch(type) {
    case SPV_EXT_INST_TYPE_DEBUGINFO: return IR(0, 34);
    case SPV_EXT_INST_TYPE_GLSL_STD_450: return IR(34, 81);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_CLSPVREFLECTION: return IR(115, 42);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_SHADER_DEBUGINFO_100: return IR(157, 44);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_VKSPREFLECTION: return IR(201, 8);
    case SPV_EXT_INST_TYPE_OPENCL_DEBUGINFO_100: return IR(209, 37);
    case SPV_EXT_INST_TYPE_OPENCL_STD: return IR(246, 162);
    case SPV_EXT_INST_TYPE_SPV_AMD_GCN_SHADER: return IR(408, 3);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_BALLOT: return IR(411, 4);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER: return IR(415, 1);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_TRINARY_MINMAX: return IR(416, 9);
    default: break;
  }
  return IR(0,0);
}

// Array of characters, referenced by IndexRanges elsewhere.
// Each IndexRange denotes a string.
static const char kStrings[] =
  "SPV_AMDX_shader_enqueue\0" // IR(0, 24)
  "SPV_AMD_gcn_shader\0" // IR(24, 19)
  "SPV_AMD_gpu_shader_half_float\0" // IR(43, 30)
  "SPV_AMD_gpu_shader_half_float_fetch\0" // IR(73, 36)
  "SPV_AMD_gpu_shader_int16\0" // IR(109, 25)
  "SPV_AMD_shader_ballot\0" // IR(134, 22)
  "SPV_AMD_shader_early_and_late_fragment_tests\0" // IR(156, 45)
  "SPV_AMD_shader_explicit_vertex_parameter\0" // IR(201, 41)
  "SPV_AMD_shader_fragment_mask\0" // IR(242, 29)
  "SPV_AMD_shader_image_load_store_lod\0" // IR(271, 36)
  "SPV_AMD_shader_trinary_minmax\0" // IR(307, 30)
  "SPV_AMD_texture_gather_bias_lod\0" // IR(337, 32)
  "SPV_ARM_cooperative_matrix_layouts\0" // IR(369, 35)
  "SPV_ARM_core_builtins\0" // IR(404, 22)
  "SPV_EXT_arithmetic_fence\0" // IR(426, 25)
  "SPV_EXT_demote_to_helper_invocation\0" // IR(451, 36)
  "SPV_EXT_descriptor_indexing\0" // IR(487, 28)
  "SPV_EXT_fragment_fully_covered\0" // IR(515, 31)
  "SPV_EXT_fragment_invocation_density\0" // IR(546, 36)
  "SPV_EXT_fragment_shader_interlock\0" // IR(582, 34)
  "SPV_EXT_mesh_shader\0" // IR(616, 20)
  "SPV_EXT_opacity_micromap\0" // IR(636, 25)
  "SPV_EXT_optnone\0" // IR(661, 16)
  "SPV_EXT_physical_storage_buffer\0" // IR(677, 32)
  "SPV_EXT_relaxed_printf_string_address_space\0" // IR(709, 44)
  "SPV_EXT_replicated_composites\0" // IR(753, 30)
  "SPV_EXT_shader_atomic_float16_add\0" // IR(783, 34)
  "SPV_EXT_shader_atomic_float_add\0" // IR(817, 32)
  "SPV_EXT_shader_atomic_float_min_max\0" // IR(849, 36)
  "SPV_EXT_shader_image_int64\0" // IR(885, 27)
  "SPV_EXT_shader_stencil_export\0" // IR(912, 30)
  "SPV_EXT_shader_tile_image\0" // IR(942, 26)
  "SPV_EXT_shader_viewport_index_layer\0" // IR(968, 36)
  "SPV_GOOGLE_decorate_string\0" // IR(1004, 27)
  "SPV_GOOGLE_hlsl_functionality1\0" // IR(1031, 31)
  "SPV_GOOGLE_user_type\0" // IR(1062, 21)
  "SPV_INTEL_2d_block_io\0" // IR(1083, 22)
  "SPV_INTEL_arbitrary_precision_fixed_point\0" // IR(1105, 42)
  "SPV_INTEL_arbitrary_precision_floating_point\0" // IR(1147, 45)
  "SPV_INTEL_arbitrary_precision_integers\0" // IR(1192, 39)
  "SPV_INTEL_bfloat16_conversion\0" // IR(1231, 30)
  "SPV_INTEL_blocking_pipes\0" // IR(1261, 25)
  "SPV_INTEL_cache_controls\0" // IR(1286, 25)
  "SPV_INTEL_debug_module\0" // IR(1311, 23)
  "SPV_INTEL_device_side_avc_motion_estimation\0" // IR(1334, 44)
  "SPV_INTEL_float_controls2\0" // IR(1378, 26)
  "SPV_INTEL_fp_fast_math_mode\0" // IR(1404, 28)
  "SPV_INTEL_fp_max_error\0" // IR(1432, 23)
  "SPV_INTEL_fpga_argument_interfaces\0" // IR(1455, 35)
  "SPV_INTEL_fpga_buffer_location\0" // IR(1490, 31)
  "SPV_INTEL_fpga_cluster_attributes\0" // IR(1521, 34)
  "SPV_INTEL_fpga_dsp_control\0" // IR(1555, 27)
  "SPV_INTEL_fpga_invocation_pipelining_attributes\0" // IR(1582, 48)
  "SPV_INTEL_fpga_latency_control\0" // IR(1630, 31)
  "SPV_INTEL_fpga_loop_controls\0" // IR(1661, 29)
  "SPV_INTEL_fpga_memory_accesses\0" // IR(1690, 31)
  "SPV_INTEL_fpga_memory_attributes\0" // IR(1721, 33)
  "SPV_INTEL_fpga_reg\0" // IR(1754, 19)
  "SPV_INTEL_function_pointers\0" // IR(1773, 28)
  "SPV_INTEL_global_variable_fpga_decorations\0" // IR(1801, 43)
  "SPV_INTEL_global_variable_host_access\0" // IR(1844, 38)
  "SPV_INTEL_inline_assembly\0" // IR(1882, 26)
  "SPV_INTEL_io_pipes\0" // IR(1908, 19)
  "SPV_INTEL_kernel_attributes\0" // IR(1927, 28)
  "SPV_INTEL_long_composites\0" // IR(1955, 26)
  "SPV_INTEL_loop_fuse\0" // IR(1981, 20)
  "SPV_INTEL_masked_gather_scatter\0" // IR(2001, 32)
  "SPV_INTEL_maximum_registers\0" // IR(2033, 28)
  "SPV_INTEL_media_block_io\0" // IR(2061, 25)
  "SPV_INTEL_memory_access_aliasing\0" // IR(2086, 33)
  "SPV_INTEL_optnone\0" // IR(2119, 18)
  "SPV_INTEL_runtime_aligned\0" // IR(2137, 26)
  "SPV_INTEL_shader_integer_functions2\0" // IR(2163, 36)
  "SPV_INTEL_split_barrier\0" // IR(2199, 24)
  "SPV_INTEL_subgroup_buffer_prefetch\0" // IR(2223, 35)
  "SPV_INTEL_subgroup_matrix_multiply_accumulate\0" // IR(2258, 46)
  "SPV_INTEL_subgroups\0" // IR(2304, 20)
  "SPV_INTEL_task_sequence\0" // IR(2324, 24)
  "SPV_INTEL_tensor_float32_conversion\0" // IR(2348, 36)
  "SPV_INTEL_ternary_bitwise_function\0" // IR(2384, 35)
  "SPV_INTEL_unstructured_loop_controls\0" // IR(2419, 37)
  "SPV_INTEL_usm_storage_classes\0" // IR(2456, 30)
  "SPV_INTEL_variable_length_array\0" // IR(2486, 32)
  "SPV_INTEL_vector_compute\0" // IR(2518, 25)
  "SPV_KHR_16bit_storage\0" // IR(2543, 22)
  "SPV_KHR_8bit_storage\0" // IR(2565, 21)
  "SPV_KHR_bfloat16\0" // IR(2586, 17)
  "SPV_KHR_bit_instructions\0" // IR(2603, 25)
  "SPV_KHR_compute_shader_derivatives\0" // IR(2628, 35)
  "SPV_KHR_cooperative_matrix\0" // IR(2663, 27)
  "SPV_KHR_device_group\0" // IR(2690, 21)
  "SPV_KHR_expect_assume\0" // IR(2711, 22)
  "SPV_KHR_float_controls\0" // IR(2733, 23)
  "SPV_KHR_float_controls2\0" // IR(2756, 24)
  "SPV_KHR_fragment_shader_barycentric\0" // IR(2780, 36)
  "SPV_KHR_fragment_shading_rate\0" // IR(2816, 30)
  "SPV_KHR_integer_dot_product\0" // IR(2846, 28)
  "SPV_KHR_linkonce_odr\0" // IR(2874, 21)
  "SPV_KHR_maximal_reconvergence\0" // IR(2895, 30)
  "SPV_KHR_multiview\0" // IR(2925, 18)
  "SPV_KHR_no_integer_wrap_decoration\0" // IR(2943, 35)
  "SPV_KHR_non_semantic_info\0" // IR(2978, 26)
  "SPV_KHR_physical_storage_buffer\0" // IR(3004, 32)
  "SPV_KHR_post_depth_coverage\0" // IR(3036, 28)
  "SPV_KHR_quad_control\0" // IR(3064, 21)
  "SPV_KHR_ray_cull_mask\0" // IR(3085, 22)
  "SPV_KHR_ray_query\0" // IR(3107, 18)
  "SPV_KHR_ray_tracing\0" // IR(3125, 20)
  "SPV_KHR_ray_tracing_position_fetch\0" // IR(3145, 35)
  "SPV_KHR_relaxed_extended_instruction\0" // IR(3180, 37)
  "SPV_KHR_shader_atomic_counter_ops\0" // IR(3217, 34)
  "SPV_KHR_shader_ballot\0" // IR(3251, 22)
  "SPV_KHR_shader_clock\0" // IR(3273, 21)
  "SPV_KHR_shader_draw_parameters\0" // IR(3294, 31)
  "SPV_KHR_storage_buffer_storage_class\0" // IR(3325, 37)
  "SPV_KHR_subgroup_rotate\0" // IR(3362, 24)
  "SPV_KHR_subgroup_uniform_control_flow\0" // IR(3386, 38)
  "SPV_KHR_subgroup_vote\0" // IR(3424, 22)
  "SPV_KHR_terminate_invocation\0" // IR(3446, 29)
  "SPV_KHR_uniform_group_instructions\0" // IR(3475, 35)
  "SPV_KHR_untyped_pointers\0" // IR(3510, 25)
  "SPV_KHR_variable_pointers\0" // IR(3535, 26)
  "SPV_KHR_vulkan_memory_model\0" // IR(3561, 28)
  "SPV_KHR_workgroup_memory_explicit_layout\0" // IR(3589, 41)
  "SPV_NVX_multiview_per_view_attributes\0" // IR(3630, 38)
  "SPV_NV_bindless_texture\0" // IR(3668, 24)
  "SPV_NV_cluster_acceleration_structure\0" // IR(3692, 38)
  "SPV_NV_compute_shader_derivatives\0" // IR(3730, 34)
  "SPV_NV_cooperative_matrix\0" // IR(3764, 26)
  "SPV_NV_cooperative_matrix2\0" // IR(3790, 27)
  "SPV_NV_cooperative_vector\0" // IR(3817, 26)
  "SPV_NV_displacement_micromap\0" // IR(3843, 29)
  "SPV_NV_fragment_shader_barycentric\0" // IR(3872, 35)
  "SPV_NV_geometry_shader_passthrough\0" // IR(3907, 35)
  "SPV_NV_linear_swept_spheres\0" // IR(3942, 28)
  "SPV_NV_mesh_shader\0" // IR(3970, 19)
  "SPV_NV_raw_access_chains\0" // IR(3989, 25)
  "SPV_NV_ray_tracing\0" // IR(4014, 19)
  "SPV_NV_ray_tracing_motion_blur\0" // IR(4033, 31)
  "SPV_NV_sample_mask_override_coverage\0" // IR(4064, 37)
  "SPV_NV_shader_atomic_fp16_vector\0" // IR(4101, 33)
  "SPV_NV_shader_image_footprint\0" // IR(4134, 30)
  "SPV_NV_shader_invocation_reorder\0" // IR(4164, 33)
  "SPV_NV_shader_sm_builtins\0" // IR(4197, 26)
  "SPV_NV_shader_subgroup_partitioned\0" // IR(4223, 35)
  "SPV_NV_shading_rate\0" // IR(4258, 20)
  "SPV_NV_stereo_view_rendering\0" // IR(4278, 29)
  "SPV_NV_tensor_addressing\0" // IR(4307, 25)
  "SPV_NV_viewport_array2\0" // IR(4332, 23)
  "SPV_QCOM_image_processing\0" // IR(4355, 26)
  "SPV_QCOM_image_processing2\0" // IR(4381, 27)
  "SPV_QCOM_tile_shading\0" // IR(4408, 22)
  "SPV_VALIDATOR_ignore_type_decl_unique\0" // IR(4430, 38)
  "ReadOnly\0" // IR(4468, 9)
  "Kernel\0" // IR(4477, 7)
  "WriteOnly\0" // IR(4484, 10)
  "ReadWrite\0" // IR(4494, 10)
  "Logical\0" // IR(4504, 8)
  "Physical32\0" // IR(4512, 11)
  "Addresses\0" // IR(4523, 10)
  "Physical64\0" // IR(4533, 11)
  "PhysicalStorageBuffer64\0" // IR(4544, 24)
  "PhysicalStorageBuffer64EXT\0" // IR(4568, 27)
  "PhysicalStorageBufferAddresses\0" // IR(4595, 31)
  "Position\0" // IR(4626, 9)
  "Shader\0" // IR(4635, 7)
  "PointSize\0" // IR(4642, 10)
  "ClipDistance\0" // IR(4652, 13)
  "CullDistance\0" // IR(4665, 13)
  "VertexId\0" // IR(4678, 9)
  "InstanceId\0" // IR(4687, 11)
  "PrimitiveId\0" // IR(4698, 12)
  "Geometry\0" // IR(4710, 9)
  "Tessellation\0" // IR(4719, 13)
  "RayTracingNV\0" // IR(4732, 13)
  "RayTracingKHR\0" // IR(4745, 14)
  "MeshShadingNV\0" // IR(4759, 14)
  "MeshShadingEXT\0" // IR(4773, 15)
  "InvocationId\0" // IR(4788, 13)
  "Layer\0" // IR(4801, 6)
  "ShaderLayer\0" // IR(4807, 12)
  "ShaderViewportIndexLayerEXT\0" // IR(4819, 28)
  "ViewportIndex\0" // IR(4847, 14)
  "MultiViewport\0" // IR(4861, 14)
  "ShaderViewportIndex\0" // IR(4875, 20)
  "TessLevelOuter\0" // IR(4895, 15)
  "TessLevelInner\0" // IR(4910, 15)
  "TessCoord\0" // IR(4925, 10)
  "PatchVertices\0" // IR(4935, 14)
  "FragCoord\0" // IR(4949, 10)
  "PointCoord\0" // IR(4959, 11)
  "FrontFacing\0" // IR(4970, 12)
  "SampleId\0" // IR(4982, 9)
  "SampleRateShading\0" // IR(4991, 18)
  "SamplePosition\0" // IR(5009, 15)
  "SampleMask\0" // IR(5024, 11)
  "FragDepth\0" // IR(5035, 10)
  "HelperInvocation\0" // IR(5045, 17)
  "NumWorkgroups\0" // IR(5062, 14)
  "WorkgroupSize\0" // IR(5076, 14)
  "WorkgroupId\0" // IR(5090, 12)
  "LocalInvocationId\0" // IR(5102, 18)
  "GlobalInvocationId\0" // IR(5120, 19)
  "LocalInvocationIndex\0" // IR(5139, 21)
  "WorkDim\0" // IR(5160, 8)
  "GlobalSize\0" // IR(5168, 11)
  "EnqueuedWorkgroupSize\0" // IR(5179, 22)
  "GlobalOffset\0" // IR(5201, 13)
  "GlobalLinearId\0" // IR(5214, 15)
  "SubgroupSize\0" // IR(5229, 13)
  "GroupNonUniform\0" // IR(5242, 16)
  "SubgroupBallotKHR\0" // IR(5258, 18)
  "SubgroupMaxSize\0" // IR(5276, 16)
  "NumSubgroups\0" // IR(5292, 13)
  "NumEnqueuedSubgroups\0" // IR(5305, 21)
  "SubgroupId\0" // IR(5326, 11)
  "SubgroupLocalInvocationId\0" // IR(5337, 26)
  "VertexIndex\0" // IR(5363, 12)
  "InstanceIndex\0" // IR(5375, 14)
  "CoreIDARM\0" // IR(5389, 10)
  "CoreBuiltinsARM\0" // IR(5399, 16)
  "CoreCountARM\0" // IR(5415, 13)
  "CoreMaxIDARM\0" // IR(5428, 13)
  "WarpIDARM\0" // IR(5441, 10)
  "WarpMaxIDARM\0" // IR(5451, 13)
  "SubgroupEqMask\0" // IR(5464, 15)
  "SubgroupEqMaskKHR\0" // IR(5479, 18)
  "GroupNonUniformBallot\0" // IR(5497, 22)
  "SubgroupGeMask\0" // IR(5519, 15)
  "SubgroupGeMaskKHR\0" // IR(5534, 18)
  "SubgroupGtMask\0" // IR(5552, 15)
  "SubgroupGtMaskKHR\0" // IR(5567, 18)
  "SubgroupLeMask\0" // IR(5585, 15)
  "SubgroupLeMaskKHR\0" // IR(5600, 18)
  "SubgroupLtMask\0" // IR(5618, 15)
  "SubgroupLtMaskKHR\0" // IR(5633, 18)
  "BaseVertex\0" // IR(5651, 11)
  "DrawParameters\0" // IR(5662, 15)
  "BaseInstance\0" // IR(5677, 13)
  "DrawIndex\0" // IR(5690, 10)
  "PrimitiveShadingRateKHR\0" // IR(5700, 24)
  "FragmentShadingRateKHR\0" // IR(5724, 23)
  "DeviceIndex\0" // IR(5747, 12)
  "DeviceGroup\0" // IR(5759, 12)
  "ViewIndex\0" // IR(5771, 10)
  "MultiView\0" // IR(5781, 10)
  "ShadingRateKHR\0" // IR(5791, 15)
  "TileOffsetQCOM\0" // IR(5806, 15)
  "TileShadingQCOM\0" // IR(5821, 16)
  "TileDimensionQCOM\0" // IR(5837, 18)
  "TileApronSizeQCOM\0" // IR(5855, 18)
  "BaryCoordNoPerspAMD\0" // IR(5873, 20)
  "BaryCoordNoPerspCentroidAMD\0" // IR(5893, 28)
  "BaryCoordNoPerspSampleAMD\0" // IR(5921, 26)
  "BaryCoordSmoothAMD\0" // IR(5947, 19)
  "BaryCoordSmoothCentroidAMD\0" // IR(5966, 27)
  "BaryCoordSmoothSampleAMD\0" // IR(5993, 25)
  "BaryCoordPullModelAMD\0" // IR(6018, 22)
  "FragStencilRefEXT\0" // IR(6040, 18)
  "StencilExportEXT\0" // IR(6058, 17)
  "RemainingRecursionLevelsAMDX\0" // IR(6075, 29)
  "ShaderEnqueueAMDX\0" // IR(6104, 18)
  "ShaderIndexAMDX\0" // IR(6122, 16)
  "ViewportMaskNV\0" // IR(6138, 15)
  "ShaderViewportMaskNV\0" // IR(6153, 21)
  "SecondaryPositionNV\0" // IR(6174, 20)
  "ShaderStereoViewNV\0" // IR(6194, 19)
  "SecondaryViewportMaskNV\0" // IR(6213, 24)
  "PositionPerViewNV\0" // IR(6237, 18)
  "PerViewAttributesNV\0" // IR(6255, 20)
  "ViewportMaskPerViewNV\0" // IR(6275, 22)
  "FullyCoveredEXT\0" // IR(6297, 16)
  "FragmentFullyCoveredEXT\0" // IR(6313, 24)
  "TaskCountNV\0" // IR(6337, 12)
  "PrimitiveCountNV\0" // IR(6349, 17)
  "PrimitiveIndicesNV\0" // IR(6366, 19)
  "ClipDistancePerViewNV\0" // IR(6385, 22)
  "CullDistancePerViewNV\0" // IR(6407, 22)
  "LayerPerViewNV\0" // IR(6429, 15)
  "MeshViewCountNV\0" // IR(6444, 16)
  "MeshViewIndicesNV\0" // IR(6460, 18)
  "BaryCoordKHR\0" // IR(6478, 13)
  "BaryCoordNV\0" // IR(6491, 12)
  "FragmentBarycentricKHR\0" // IR(6503, 23)
  "BaryCoordNoPerspKHR\0" // IR(6526, 20)
  "BaryCoordNoPerspNV\0" // IR(6546, 19)
  "FragSizeEXT\0" // IR(6565, 12)
  "FragmentSizeNV\0" // IR(6577, 15)
  "FragmentDensityEXT\0" // IR(6592, 19)
  "FragInvocationCountEXT\0" // IR(6611, 23)
  "InvocationsPerPixelNV\0" // IR(6634, 22)
  "PrimitivePointIndicesEXT\0" // IR(6656, 25)
  "PrimitiveLineIndicesEXT\0" // IR(6681, 24)
  "PrimitiveTriangleIndicesEXT\0" // IR(6705, 28)
  "CullPrimitiveEXT\0" // IR(6733, 17)
  "LaunchIdKHR\0" // IR(6750, 12)
  "LaunchIdNV\0" // IR(6762, 11)
  "LaunchSizeKHR\0" // IR(6773, 14)
  "LaunchSizeNV\0" // IR(6787, 13)
  "WorldRayOriginKHR\0" // IR(6800, 18)
  "WorldRayOriginNV\0" // IR(6818, 17)
  "WorldRayDirectionKHR\0" // IR(6835, 21)
  "WorldRayDirectionNV\0" // IR(6856, 20)
  "ObjectRayOriginKHR\0" // IR(6876, 19)
  "ObjectRayOriginNV\0" // IR(6895, 18)
  "ObjectRayDirectionKHR\0" // IR(6913, 22)
  "ObjectRayDirectionNV\0" // IR(6935, 21)
  "RayTminKHR\0" // IR(6956, 11)
  "RayTminNV\0" // IR(6967, 10)
  "RayTmaxKHR\0" // IR(6977, 11)
  "RayTmaxNV\0" // IR(6988, 10)
  "InstanceCustomIndexKHR\0" // IR(6998, 23)
  "InstanceCustomIndexNV\0" // IR(7021, 22)
  "ObjectToWorldKHR\0" // IR(7043, 17)
  "ObjectToWorldNV\0" // IR(7060, 16)
  "WorldToObjectKHR\0" // IR(7076, 17)
  "WorldToObjectNV\0" // IR(7093, 16)
  "HitTNV\0" // IR(7109, 7)
  "HitKindKHR\0" // IR(7116, 11)
  "HitKindNV\0" // IR(7127, 10)
  "CurrentRayTimeNV\0" // IR(7137, 17)
  "RayTracingMotionBlurNV\0" // IR(7154, 23)
  "HitTriangleVertexPositionsKHR\0" // IR(7177, 30)
  "RayTracingPositionFetchKHR\0" // IR(7207, 27)
  "HitMicroTriangleVertexPositionsNV\0" // IR(7234, 34)
  "RayTracingDisplacementMicromapNV\0" // IR(7268, 33)
  "HitMicroTriangleVertexBarycentricsNV\0" // IR(7301, 37)
  "IncomingRayFlagsKHR\0" // IR(7338, 20)
  "IncomingRayFlagsNV\0" // IR(7358, 19)
  "RayGeometryIndexKHR\0" // IR(7377, 20)
  "HitIsSphereNV\0" // IR(7397, 14)
  "RayTracingSpheresGeometryNV\0" // IR(7411, 28)
  "HitIsLSSNV\0" // IR(7439, 11)
  "RayTracingLinearSweptSpheresGeometryNV\0" // IR(7450, 39)
  "HitSpherePositionNV\0" // IR(7489, 20)
  "WarpsPerSMNV\0" // IR(7509, 13)
  "ShaderSMBuiltinsNV\0" // IR(7522, 19)
  "SMCountNV\0" // IR(7541, 10)
  "WarpIDNV\0" // IR(7551, 9)
  "SMIDNV\0" // IR(7560, 7)
  "HitLSSPositionsNV\0" // IR(7567, 18)
  "HitKindFrontFacingMicroTriangleNV\0" // IR(7585, 34)
  "HitKindBackFacingMicroTriangleNV\0" // IR(7619, 33)
  "HitSphereRadiusNV\0" // IR(7652, 18)
  "HitLSSRadiiNV\0" // IR(7670, 14)
  "ClusterIDNV\0" // IR(7684, 12)
  "RayTracingClusterAccelerationStructureNV\0" // IR(7696, 41)
  "CullMaskKHR\0" // IR(7737, 12)
  "RayCullMaskKHR\0" // IR(7749, 15)
  "Matrix\0" // IR(7764, 7)
  "Linkage\0" // IR(7771, 8)
  "Vector16\0" // IR(7779, 9)
  "Float16Buffer\0" // IR(7788, 14)
  "Float16\0" // IR(7802, 8)
  "Float64\0" // IR(7810, 8)
  "Int64\0" // IR(7818, 6)
  "Int64Atomics\0" // IR(7824, 13)
  "ImageBasic\0" // IR(7837, 11)
  "ImageReadWrite\0" // IR(7848, 15)
  "ImageMipmap\0" // IR(7863, 12)
  "Pipes\0" // IR(7875, 6)
  "Groups\0" // IR(7881, 7)
  "DeviceEnqueue\0" // IR(7888, 14)
  "LiteralSampler\0" // IR(7902, 15)
  "AtomicStorage\0" // IR(7917, 14)
  "Int16\0" // IR(7931, 6)
  "TessellationPointSize\0" // IR(7937, 22)
  "GeometryPointSize\0" // IR(7959, 18)
  "ImageGatherExtended\0" // IR(7977, 20)
  "StorageImageMultisample\0" // IR(7997, 24)
  "UniformBufferArrayDynamicIndexing\0" // IR(8021, 34)
  "SampledImageArrayDynamicIndexing\0" // IR(8055, 33)
  "StorageBufferArrayDynamicIndexing\0" // IR(8088, 34)
  "StorageImageArrayDynamicIndexing\0" // IR(8122, 33)
  "ImageCubeArray\0" // IR(8155, 15)
  "SampledCubeArray\0" // IR(8170, 17)
  "ImageRect\0" // IR(8187, 10)
  "SampledRect\0" // IR(8197, 12)
  "GenericPointer\0" // IR(8209, 15)
  "Int8\0" // IR(8224, 5)
  "InputAttachment\0" // IR(8229, 16)
  "SparseResidency\0" // IR(8245, 16)
  "MinLod\0" // IR(8261, 7)
  "Sampled1D\0" // IR(8268, 10)
  "Image1D\0" // IR(8278, 8)
  "SampledBuffer\0" // IR(8286, 14)
  "ImageBuffer\0" // IR(8300, 12)
  "ImageMSArray\0" // IR(8312, 13)
  "StorageImageExtendedFormats\0" // IR(8325, 28)
  "ImageQuery\0" // IR(8353, 11)
  "DerivativeControl\0" // IR(8364, 18)
  "InterpolationFunction\0" // IR(8382, 22)
  "TransformFeedback\0" // IR(8404, 18)
  "GeometryStreams\0" // IR(8422, 16)
  "StorageImageReadWithoutFormat\0" // IR(8438, 30)
  "StorageImageWriteWithoutFormat\0" // IR(8468, 31)
  "SubgroupDispatch\0" // IR(8499, 17)
  "NamedBarrier\0" // IR(8516, 13)
  "PipeStorage\0" // IR(8529, 12)
  "GroupNonUniformVote\0" // IR(8541, 20)
  "GroupNonUniformArithmetic\0" // IR(8561, 26)
  "GroupNonUniformShuffle\0" // IR(8587, 23)
  "GroupNonUniformShuffleRelative\0" // IR(8610, 31)
  "GroupNonUniformClustered\0" // IR(8641, 25)
  "GroupNonUniformQuad\0" // IR(8666, 20)
  "UniformDecoration\0" // IR(8686, 18)
  "TileImageColorReadAccessEXT\0" // IR(8704, 28)
  "TileImageDepthReadAccessEXT\0" // IR(8732, 28)
  "TileImageStencilReadAccessEXT\0" // IR(8760, 30)
  "CooperativeMatrixLayoutsARM\0" // IR(8790, 28)
  "WorkgroupMemoryExplicitLayoutKHR\0" // IR(8818, 33)
  "WorkgroupMemoryExplicitLayout8BitAccessKHR\0" // IR(8851, 43)
  "WorkgroupMemoryExplicitLayout16BitAccessKHR\0" // IR(8894, 44)
  "SubgroupVoteKHR\0" // IR(8938, 16)
  "StorageBuffer16BitAccess\0" // IR(8954, 25)
  "StorageUniformBufferBlock16\0" // IR(8979, 28)
  "UniformAndStorageBuffer16BitAccess\0" // IR(9007, 35)
  "StorageUniform16\0" // IR(9042, 17)
  "StoragePushConstant16\0" // IR(9059, 22)
  "StorageInputOutput16\0" // IR(9081, 21)
  "VariablePointersStorageBuffer\0" // IR(9102, 30)
  "VariablePointers\0" // IR(9132, 17)
  "AtomicStorageOps\0" // IR(9149, 17)
  "SampleMaskPostDepthCoverage\0" // IR(9166, 28)
  "StorageBuffer8BitAccess\0" // IR(9194, 24)
  "UniformAndStorageBuffer8BitAccess\0" // IR(9218, 34)
  "StoragePushConstant8\0" // IR(9252, 21)
  "DenormPreserve\0" // IR(9273, 15)
  "DenormFlushToZero\0" // IR(9288, 18)
  "SignedZeroInfNanPreserve\0" // IR(9306, 25)
  "RoundingModeRTE\0" // IR(9331, 16)
  "RoundingModeRTZ\0" // IR(9347, 16)
  "RayQueryProvisionalKHR\0" // IR(9363, 23)
  "RayQueryKHR\0" // IR(9386, 12)
  "UntypedPointersKHR\0" // IR(9398, 19)
  "RayTraversalPrimitiveCullingKHR\0" // IR(9417, 32)
  "TextureSampleWeightedQCOM\0" // IR(9449, 26)
  "TextureBoxFilterQCOM\0" // IR(9475, 21)
  "TextureBlockMatchQCOM\0" // IR(9496, 22)
  "TextureBlockMatch2QCOM\0" // IR(9518, 23)
  "Float16ImageAMD\0" // IR(9541, 16)
  "ImageGatherBiasLodAMD\0" // IR(9557, 22)
  "FragmentMaskAMD\0" // IR(9579, 16)
  "ImageReadWriteLodAMD\0" // IR(9595, 21)
  "Int64ImageEXT\0" // IR(9616, 14)
  "ShaderClockKHR\0" // IR(9630, 15)
  "QuadControlKHR\0" // IR(9645, 15)
  "BFloat16TypeKHR\0" // IR(9660, 16)
  "BFloat16DotProductKHR\0" // IR(9676, 22)
  "BFloat16CooperativeMatrixKHR\0" // IR(9698, 29)
  "CooperativeMatrixKHR\0" // IR(9727, 21)
  "SampleMaskOverrideCoverageNV\0" // IR(9748, 29)
  "GeometryShaderPassthroughNV\0" // IR(9777, 28)
  "ShaderViewportIndexLayerNV\0" // IR(9805, 27)
  "ImageFootprintNV\0" // IR(9832, 17)
  "FragmentBarycentricNV\0" // IR(9849, 22)
  "ComputeDerivativeGroupQuadsKHR\0" // IR(9871, 31)
  "ComputeDerivativeGroupQuadsNV\0" // IR(9902, 30)
  "ShadingRateNV\0" // IR(9932, 14)
  "GroupNonUniformPartitionedNV\0" // IR(9946, 29)
  "ShaderNonUniform\0" // IR(9975, 17)
  "ShaderNonUniformEXT\0" // IR(9992, 20)
  "RuntimeDescriptorArray\0" // IR(10012, 23)
  "RuntimeDescriptorArrayEXT\0" // IR(10035, 26)
  "InputAttachmentArrayDynamicIndexing\0" // IR(10061, 36)
  "InputAttachmentArrayDynamicIndexingEXT\0" // IR(10097, 39)
  "UniformTexelBufferArrayDynamicIndexing\0" // IR(10136, 39)
  "UniformTexelBufferArrayDynamicIndexingEXT\0" // IR(10175, 42)
  "StorageTexelBufferArrayDynamicIndexing\0" // IR(10217, 39)
  "StorageTexelBufferArrayDynamicIndexingEXT\0" // IR(10256, 42)
  "UniformBufferArrayNonUniformIndexing\0" // IR(10298, 37)
  "UniformBufferArrayNonUniformIndexingEXT\0" // IR(10335, 40)
  "SampledImageArrayNonUniformIndexing\0" // IR(10375, 36)
  "SampledImageArrayNonUniformIndexingEXT\0" // IR(10411, 39)
  "StorageBufferArrayNonUniformIndexing\0" // IR(10450, 37)
  "StorageBufferArrayNonUniformIndexingEXT\0" // IR(10487, 40)
  "StorageImageArrayNonUniformIndexing\0" // IR(10527, 36)
  "StorageImageArrayNonUniformIndexingEXT\0" // IR(10563, 39)
  "InputAttachmentArrayNonUniformIndexing\0" // IR(10602, 39)
  "InputAttachmentArrayNonUniformIndexingEXT\0" // IR(10641, 42)
  "UniformTexelBufferArrayNonUniformIndexing\0" // IR(10683, 42)
  "UniformTexelBufferArrayNonUniformIndexingEXT\0" // IR(10725, 45)
  "StorageTexelBufferArrayNonUniformIndexing\0" // IR(10770, 42)
  "StorageTexelBufferArrayNonUniformIndexingEXT\0" // IR(10812, 45)
  "VulkanMemoryModel\0" // IR(10857, 18)
  "VulkanMemoryModelKHR\0" // IR(10875, 21)
  "VulkanMemoryModelDeviceScope\0" // IR(10896, 29)
  "VulkanMemoryModelDeviceScopeKHR\0" // IR(10925, 32)
  "PhysicalStorageBufferAddressesEXT\0" // IR(10957, 34)
  "ComputeDerivativeGroupLinearKHR\0" // IR(10991, 32)
  "ComputeDerivativeGroupLinearNV\0" // IR(11023, 31)
  "RayTracingProvisionalKHR\0" // IR(11054, 25)
  "CooperativeMatrixNV\0" // IR(11079, 20)
  "FragmentShaderSampleInterlockEXT\0" // IR(11099, 33)
  "FragmentShaderShadingRateInterlockEXT\0" // IR(11132, 38)
  "FragmentShaderPixelInterlockEXT\0" // IR(11170, 32)
  "DemoteToHelperInvocation\0" // IR(11202, 25)
  "DemoteToHelperInvocationEXT\0" // IR(11227, 28)
  "DisplacementMicromapNV\0" // IR(11255, 23)
  "RayTracingOpacityMicromapEXT\0" // IR(11278, 29)
  "ShaderInvocationReorderNV\0" // IR(11307, 26)
  "BindlessTextureNV\0" // IR(11333, 18)
  "RayQueryPositionFetchKHR\0" // IR(11351, 25)
  "CooperativeVectorNV\0" // IR(11376, 20)
  "AtomicFloat16VectorNV\0" // IR(11396, 22)
  "RawAccessChainsNV\0" // IR(11418, 18)
  "CooperativeMatrixReductionsNV\0" // IR(11436, 30)
  "CooperativeMatrixConversionsNV\0" // IR(11466, 31)
  "CooperativeMatrixPerElementOperationsNV\0" // IR(11497, 40)
  "CooperativeMatrixTensorAddressingNV\0" // IR(11537, 36)
  "CooperativeMatrixBlockLoadsNV\0" // IR(11573, 30)
  "CooperativeVectorTrainingNV\0" // IR(11603, 28)
  "TensorAddressingNV\0" // IR(11631, 19)
  "SubgroupShuffleINTEL\0" // IR(11650, 21)
  "SubgroupBufferBlockIOINTEL\0" // IR(11671, 27)
  "SubgroupImageBlockIOINTEL\0" // IR(11698, 26)
  "SubgroupImageMediaBlockIOINTEL\0" // IR(11724, 31)
  "RoundToInfinityINTEL\0" // IR(11755, 21)
  "FloatingPointModeINTEL\0" // IR(11776, 23)
  "IntegerFunctions2INTEL\0" // IR(11799, 23)
  "FunctionPointersINTEL\0" // IR(11822, 22)
  "IndirectReferencesINTEL\0" // IR(11844, 24)
  "AsmINTEL\0" // IR(11868, 9)
  "AtomicFloat32MinMaxEXT\0" // IR(11877, 23)
  "AtomicFloat64MinMaxEXT\0" // IR(11900, 23)
  "AtomicFloat16MinMaxEXT\0" // IR(11923, 23)
  "VectorComputeINTEL\0" // IR(11946, 19)
  "VectorAnyINTEL\0" // IR(11965, 15)
  "ExpectAssumeKHR\0" // IR(11980, 16)
  "SubgroupAvcMotionEstimationINTEL\0" // IR(11996, 33)
  "SubgroupAvcMotionEstimationIntraINTEL\0" // IR(12029, 38)
  "SubgroupAvcMotionEstimationChromaINTEL\0" // IR(12067, 39)
  "VariableLengthArrayINTEL\0" // IR(12106, 25)
  "FunctionFloatControlINTEL\0" // IR(12131, 26)
  "FPGAMemoryAttributesINTEL\0" // IR(12157, 26)
  "FPFastMathModeINTEL\0" // IR(12183, 20)
  "ArbitraryPrecisionIntegersINTEL\0" // IR(12203, 32)
  "ArbitraryPrecisionFloatingPointINTEL\0" // IR(12235, 37)
  "UnstructuredLoopControlsINTEL\0" // IR(12272, 30)
  "FPGALoopControlsINTEL\0" // IR(12302, 22)
  "KernelAttributesINTEL\0" // IR(12324, 22)
  "FPGAKernelAttributesINTEL\0" // IR(12346, 26)
  "FPGAMemoryAccessesINTEL\0" // IR(12372, 24)
  "FPGAClusterAttributesINTEL\0" // IR(12396, 27)
  "LoopFuseINTEL\0" // IR(12423, 14)
  "FPGADSPControlINTEL\0" // IR(12437, 20)
  "MemoryAccessAliasingINTEL\0" // IR(12457, 26)
  "FPGAInvocationPipeliningAttributesINTEL\0" // IR(12483, 40)
  "FPGABufferLocationINTEL\0" // IR(12523, 24)
  "ArbitraryPrecisionFixedPointINTEL\0" // IR(12547, 34)
  "USMStorageClassesINTEL\0" // IR(12581, 23)
  "RuntimeAlignedAttributeINTEL\0" // IR(12604, 29)
  "IOPipesINTEL\0" // IR(12633, 13)
  "BlockingPipesINTEL\0" // IR(12646, 19)
  "FPGARegINTEL\0" // IR(12665, 13)
  "DotProductInputAll\0" // IR(12678, 19)
  "DotProductInputAllKHR\0" // IR(12697, 22)
  "DotProductInput4x8Bit\0" // IR(12719, 22)
  "DotProductInput4x8BitKHR\0" // IR(12741, 25)
  "DotProductInput4x8BitPacked\0" // IR(12766, 28)
  "DotProductInput4x8BitPackedKHR\0" // IR(12794, 31)
  "DotProduct\0" // IR(12825, 11)
  "DotProductKHR\0" // IR(12836, 14)
  "ReplicatedCompositesEXT\0" // IR(12850, 24)
  "BitInstructions\0" // IR(12874, 16)
  "GroupNonUniformRotateKHR\0" // IR(12890, 25)
  "FloatControls2\0" // IR(12915, 15)
  "AtomicFloat32AddEXT\0" // IR(12930, 20)
  "AtomicFloat64AddEXT\0" // IR(12950, 20)
  "LongCompositesINTEL\0" // IR(12970, 20)
  "OptNoneEXT\0" // IR(12990, 11)
  "OptNoneINTEL\0" // IR(13001, 13)
  "AtomicFloat16AddEXT\0" // IR(13014, 20)
  "DebugInfoModuleINTEL\0" // IR(13034, 21)
  "BFloat16ConversionINTEL\0" // IR(13055, 24)
  "SplitBarrierINTEL\0" // IR(13079, 18)
  "ArithmeticFenceEXT\0" // IR(13097, 19)
  "FPGAClusterAttributesV2INTEL\0" // IR(13116, 29)
  "FPGAKernelAttributesv2INTEL\0" // IR(13145, 28)
  "TaskSequenceINTEL\0" // IR(13173, 18)
  "FPMaxErrorINTEL\0" // IR(13191, 16)
  "FPGALatencyControlINTEL\0" // IR(13207, 24)
  "FPGAArgumentInterfacesINTEL\0" // IR(13231, 28)
  "GlobalVariableHostAccessINTEL\0" // IR(13259, 30)
  "GlobalVariableFPGADecorationsINTEL\0" // IR(13289, 35)
  "SubgroupBufferPrefetchINTEL\0" // IR(13324, 28)
  "Subgroup2DBlockIOINTEL\0" // IR(13352, 23)
  "Subgroup2DBlockTransformINTEL\0" // IR(13375, 30)
  "Subgroup2DBlockTransposeINTEL\0" // IR(13405, 30)
  "SubgroupMatrixMultiplyAccumulateINTEL\0" // IR(13435, 38)
  "TernaryBitwiseFunctionINTEL\0" // IR(13473, 28)
  "GroupUniformArithmeticKHR\0" // IR(13501, 26)
  "TensorFloat32RoundingINTEL\0" // IR(13527, 27)
  "MaskedGatherScatterINTEL\0" // IR(13554, 25)
  "CacheControlsINTEL\0" // IR(13579, 19)
  "RegisterLimitsINTEL\0" // IR(13598, 20)
  "Unspecified\0" // IR(13618, 12)
  "Address\0" // IR(13630, 8)
  "Boolean\0" // IR(13638, 8)
  "Float\0" // IR(13646, 6)
  "Signed\0" // IR(13652, 7)
  "SignedChar\0" // IR(13659, 11)
  "Unsigned\0" // IR(13670, 9)
  "UnsignedChar\0" // IR(13679, 13)
  "Class\0" // IR(13692, 6)
  "Structure\0" // IR(13698, 10)
  "Union\0" // IR(13708, 6)
  "ImportedModule\0" // IR(13714, 15)
  "ImportedDeclaration\0" // IR(13729, 20)
  "None\0" // IR(13749, 5)
  "FlagIsProtected\0" // IR(13754, 16)
  "FlagIsPrivate\0" // IR(13770, 14)
  "FlagIsPublic\0" // IR(13784, 13)
  "FlagIsLocal\0" // IR(13797, 12)
  "FlagIsDefinition\0" // IR(13809, 17)
  "FlagFwdDecl\0" // IR(13826, 12)
  "FlagArtificial\0" // IR(13838, 15)
  "FlagExplicit\0" // IR(13853, 13)
  "FlagPrototyped\0" // IR(13866, 15)
  "FlagObjectPointer\0" // IR(13881, 18)
  "FlagStaticMember\0" // IR(13899, 17)
  "FlagIndirectVariable\0" // IR(13916, 21)
  "FlagLValueReference\0" // IR(13937, 20)
  "FlagRValueReference\0" // IR(13957, 20)
  "FlagIsOptimized\0" // IR(13977, 16)
  "FlagIsEnumClass\0" // IR(13993, 16)
  "FlagTypePassByValue\0" // IR(14009, 20)
  "FlagTypePassByReference\0" // IR(14029, 24)
  "Deref\0" // IR(14053, 6)
  "Plus\0" // IR(14059, 5)
  "Minus\0" // IR(14064, 6)
  "SPV_OPERAND_TYPE_LITERAL_INTEGER\0" // IR(14070, 33)
  "PlusUconst\0" // IR(14103, 11)
  "BitPiece\0" // IR(14114, 9)
  "Swap\0" // IR(14123, 5)
  "Xderef\0" // IR(14128, 7)
  "StackValue\0" // IR(14135, 11)
  "Constu\0" // IR(14146, 7)
  "Fragment\0" // IR(14153, 9)
  "ConstType\0" // IR(14162, 10)
  "VolatileType\0" // IR(14172, 13)
  "RestrictType\0" // IR(14185, 13)
  "AtomicType\0" // IR(14198, 11)
  "Float16NV\0" // IR(14209, 10)
  "Float32NV\0" // IR(14219, 10)
  "Float64NV\0" // IR(14229, 10)
  "SignedInt8NV\0" // IR(14239, 13)
  "SignedInt16NV\0" // IR(14252, 14)
  "SignedInt32NV\0" // IR(14266, 14)
  "SignedInt64NV\0" // IR(14280, 14)
  "UnsignedInt8NV\0" // IR(14294, 15)
  "UnsignedInt16NV\0" // IR(14309, 16)
  "UnsignedInt32NV\0" // IR(14325, 16)
  "UnsignedInt64NV\0" // IR(14341, 16)
  "SignedInt8PackedNV\0" // IR(14357, 19)
  "UnsignedInt8PackedNV\0" // IR(14376, 21)
  "FloatE4M3NV\0" // IR(14397, 12)
  "FloatE5M2NV\0" // IR(14409, 12)
  "RowMajorKHR\0" // IR(14421, 12)
  "ColumnMajorKHR\0" // IR(14433, 15)
  "RowBlockedInterleavedARM\0" // IR(14448, 25)
  "ColumnBlockedInterleavedARM\0" // IR(14473, 28)
  "NoneKHR\0" // IR(14501, 8)
  "MatrixASignedComponentsKHR\0" // IR(14509, 27)
  "MatrixBSignedComponentsKHR\0" // IR(14536, 27)
  "MatrixCSignedComponentsKHR\0" // IR(14563, 27)
  "MatrixResultSignedComponentsKHR\0" // IR(14590, 32)
  "SaturatingAccumulationKHR\0" // IR(14622, 26)
  "Row\0" // IR(14648, 4)
  "Column\0" // IR(14652, 7)
  "2x2\0" // IR(14659, 4)
  "MatrixAKHR\0" // IR(14663, 11)
  "MatrixBKHR\0" // IR(14674, 11)
  "MatrixAccumulatorKHR\0" // IR(14685, 21)
  "RowMajorNV\0" // IR(14706, 11)
  "ColumnMajorNV\0" // IR(14717, 14)
  "InferencingOptimalNV\0" // IR(14731, 21)
  "TrainingOptimalNV\0" // IR(14752, 18)
  "RelaxedPrecision\0" // IR(14770, 17)
  "SpecId\0" // IR(14787, 7)
  "Block\0" // IR(14794, 6)
  "BufferBlock\0" // IR(14800, 12)
  "RowMajor\0" // IR(14812, 9)
  "ColMajor\0" // IR(14821, 9)
  "ArrayStride\0" // IR(14830, 12)
  "MatrixStride\0" // IR(14842, 13)
  "GLSLShared\0" // IR(14855, 11)
  "GLSLPacked\0" // IR(14866, 11)
  "CPacked\0" // IR(14877, 8)
  "SPV_OPERAND_TYPE_BUILT_IN\0" // IR(14885, 26)
  "BuiltIn\0" // IR(14911, 8)
  "NoPerspective\0" // IR(14919, 14)
  "Flat\0" // IR(14933, 5)
  "Patch\0" // IR(14938, 6)
  "Centroid\0" // IR(14944, 9)
  "Sample\0" // IR(14953, 7)
  "Invariant\0" // IR(14960, 10)
  "Restrict\0" // IR(14970, 9)
  "Aliased\0" // IR(14979, 8)
  "Volatile\0" // IR(14987, 9)
  "Constant\0" // IR(14996, 9)
  "Coherent\0" // IR(15005, 9)
  "NonWritable\0" // IR(15014, 12)
  "NonReadable\0" // IR(15026, 12)
  "Uniform\0" // IR(15038, 8)
  "SPV_OPERAND_TYPE_SCOPE_ID\0" // IR(15046, 26)
  "UniformId\0" // IR(15072, 10)
  "SaturatedConversion\0" // IR(15082, 20)
  "Stream\0" // IR(15102, 7)
  "Location\0" // IR(15109, 9)
  "Component\0" // IR(15118, 10)
  "Index\0" // IR(15128, 6)
  "Binding\0" // IR(15134, 8)
  "DescriptorSet\0" // IR(15142, 14)
  "Offset\0" // IR(15156, 7)
  "XfbBuffer\0" // IR(15163, 10)
  "XfbStride\0" // IR(15173, 10)
  "SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE\0" // IR(15183, 46)
  "FuncParamAttr\0" // IR(15229, 14)
  "SPV_OPERAND_TYPE_FP_ROUNDING_MODE\0" // IR(15243, 34)
  "FPRoundingMode\0" // IR(15277, 15)
  "SPV_OPERAND_TYPE_FP_FAST_MATH_MODE\0" // IR(15292, 35)
  "FPFastMathMode\0" // IR(15327, 15)
  "SPV_OPERAND_TYPE_LITERAL_STRING\0" // IR(15342, 32)
  "SPV_OPERAND_TYPE_LINKAGE_TYPE\0" // IR(15374, 30)
  "LinkageAttributes\0" // IR(15404, 18)
  "NoContraction\0" // IR(15422, 14)
  "InputAttachmentIndex\0" // IR(15436, 21)
  "Alignment\0" // IR(15457, 10)
  "MaxByteOffset\0" // IR(15467, 14)
  "SPV_OPERAND_TYPE_ID\0" // IR(15481, 20)
  "AlignmentId\0" // IR(15501, 12)
  "MaxByteOffsetId\0" // IR(15513, 16)
  "NoSignedWrap\0" // IR(15529, 13)
  "NoUnsignedWrap\0" // IR(15542, 15)
  "WeightTextureQCOM\0" // IR(15557, 18)
  "BlockMatchTextureQCOM\0" // IR(15575, 22)
  "BlockMatchSamplerQCOM\0" // IR(15597, 22)
  "ExplicitInterpAMD\0" // IR(15619, 18)
  "NodeSharesPayloadLimitsWithAMDX\0" // IR(15637, 32)
  "NodeMaxPayloadsAMDX\0" // IR(15669, 20)
  "TrackFinishWritingAMDX\0" // IR(15689, 23)
  "PayloadNodeNameAMDX\0" // IR(15712, 20)
  "PayloadNodeBaseIndexAMDX\0" // IR(15732, 25)
  "PayloadNodeSparseArrayAMDX\0" // IR(15757, 27)
  "PayloadNodeArraySizeAMDX\0" // IR(15784, 25)
  "PayloadDispatchIndirectAMDX\0" // IR(15809, 28)
  "OverrideCoverageNV\0" // IR(15837, 19)
  "PassthroughNV\0" // IR(15856, 14)
  "ViewportRelativeNV\0" // IR(15870, 19)
  "SecondaryViewportRelativeNV\0" // IR(15889, 28)
  "PerPrimitiveEXT\0" // IR(15917, 16)
  "PerPrimitiveNV\0" // IR(15933, 15)
  "PerViewNV\0" // IR(15948, 10)
  "PerTaskNV\0" // IR(15958, 10)
  "PerVertexKHR\0" // IR(15968, 13)
  "PerVertexNV\0" // IR(15981, 12)
  "NonUniform\0" // IR(15993, 11)
  "NonUniformEXT\0" // IR(16004, 14)
  "RestrictPointer\0" // IR(16018, 16)
  "RestrictPointerEXT\0" // IR(16034, 19)
  "AliasedPointer\0" // IR(16053, 15)
  "AliasedPointerEXT\0" // IR(16068, 18)
  "HitObjectShaderRecordBufferNV\0" // IR(16086, 30)
  "BindlessSamplerNV\0" // IR(16116, 18)
  "BindlessImageNV\0" // IR(16134, 16)
  "BoundSamplerNV\0" // IR(16150, 15)
  "BoundImageNV\0" // IR(16165, 13)
  "SIMTCallINTEL\0" // IR(16178, 14)
  "ReferencedIndirectlyINTEL\0" // IR(16192, 26)
  "ClobberINTEL\0" // IR(16218, 13)
  "SideEffectsINTEL\0" // IR(16231, 17)
  "VectorComputeVariableINTEL\0" // IR(16248, 27)
  "FuncParamIOKindINTEL\0" // IR(16275, 21)
  "VectorComputeFunctionINTEL\0" // IR(16296, 27)
  "StackCallINTEL\0" // IR(16323, 15)
  "GlobalVariableOffsetINTEL\0" // IR(16338, 26)
  "CounterBuffer\0" // IR(16364, 14)
  "HlslCounterBufferGOOGLE\0" // IR(16378, 24)
  "UserSemantic\0" // IR(16402, 13)
  "HlslSemanticGOOGLE\0" // IR(16415, 19)
  "UserTypeGOOGLE\0" // IR(16434, 15)
  "FunctionRoundingModeINTEL\0" // IR(16449, 26)
  "SPV_OPERAND_TYPE_FPDENORM_MODE\0" // IR(16475, 31)
  "FunctionDenormModeINTEL\0" // IR(16506, 24)
  "RegisterINTEL\0" // IR(16530, 14)
  "MemoryINTEL\0" // IR(16544, 12)
  "NumbanksINTEL\0" // IR(16556, 14)
  "BankwidthINTEL\0" // IR(16570, 15)
  "MaxPrivateCopiesINTEL\0" // IR(16585, 22)
  "SinglepumpINTEL\0" // IR(16607, 16)
  "DoublepumpINTEL\0" // IR(16623, 16)
  "MaxReplicatesINTEL\0" // IR(16639, 19)
  "SimpleDualPortINTEL\0" // IR(16658, 20)
  "MergeINTEL\0" // IR(16678, 11)
  "SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER\0" // IR(16689, 42)
  "BankBitsINTEL\0" // IR(16731, 14)
  "ForcePow2DepthINTEL\0" // IR(16745, 20)
  "StridesizeINTEL\0" // IR(16765, 16)
  "WordsizeINTEL\0" // IR(16781, 14)
  "TrueDualPortINTEL\0" // IR(16795, 18)
  "BurstCoalesceINTEL\0" // IR(16813, 19)
  "CacheSizeINTEL\0" // IR(16832, 15)
  "DontStaticallyCoalesceINTEL\0" // IR(16847, 28)
  "PrefetchINTEL\0" // IR(16875, 14)
  "StallEnableINTEL\0" // IR(16889, 17)
  "FuseLoopsInFunctionINTEL\0" // IR(16906, 25)
  "MathOpDSPModeINTEL\0" // IR(16931, 19)
  "AliasScopeINTEL\0" // IR(16950, 16)
  "NoAliasINTEL\0" // IR(16966, 13)
  "InitiationIntervalINTEL\0" // IR(16979, 24)
  "MaxConcurrencyINTEL\0" // IR(17003, 20)
  "PipelineEnableINTEL\0" // IR(17023, 20)
  "BufferLocationINTEL\0" // IR(17043, 20)
  "IOPipeStorageINTEL\0" // IR(17063, 19)
  "SPV_OPERAND_TYPE_FPOPERATION_MODE\0" // IR(17082, 34)
  "FunctionFloatingPointModeINTEL\0" // IR(17116, 31)
  "SingleElementVectorINTEL\0" // IR(17147, 25)
  "VectorComputeCallableFunctionINTEL\0" // IR(17172, 35)
  "MediaBlockIOINTEL\0" // IR(17207, 18)
  "StallFreeINTEL\0" // IR(17225, 15)
  "SPV_OPERAND_TYPE_LITERAL_FLOAT\0" // IR(17240, 31)
  "FPMaxErrorDecorationINTEL\0" // IR(17271, 26)
  "LatencyControlLabelINTEL\0" // IR(17297, 25)
  "LatencyControlConstraintINTEL\0" // IR(17322, 30)
  "ConduitKernelArgumentINTEL\0" // IR(17352, 27)
  "RegisterMapKernelArgumentINTEL\0" // IR(17379, 31)
  "MMHostInterfaceAddressWidthINTEL\0" // IR(17410, 33)
  "MMHostInterfaceDataWidthINTEL\0" // IR(17443, 30)
  "MMHostInterfaceLatencyINTEL\0" // IR(17473, 28)
  "SPV_OPERAND_TYPE_ACCESS_QUALIFIER\0" // IR(17501, 34)
  "MMHostInterfaceReadWriteModeINTEL\0" // IR(17535, 34)
  "MMHostInterfaceMaxBurstINTEL\0" // IR(17569, 29)
  "MMHostInterfaceWaitRequestINTEL\0" // IR(17598, 32)
  "StableKernelArgumentINTEL\0" // IR(17630, 26)
  "SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER\0" // IR(17656, 39)
  "HostAccessINTEL\0" // IR(17695, 16)
  "SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER\0" // IR(17711, 47)
  "InitModeINTEL\0" // IR(17758, 14)
  "ImplementInRegisterMapINTEL\0" // IR(17772, 28)
  "SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL\0" // IR(17800, 36)
  "CacheControlLoadINTEL\0" // IR(17836, 22)
  "SPV_OPERAND_TYPE_STORE_CACHE_CONTROL\0" // IR(17858, 37)
  "CacheControlStoreINTEL\0" // IR(17895, 23)
  "1D\0" // IR(17918, 3)
  "2D\0" // IR(17921, 3)
  "3D\0" // IR(17924, 3)
  "Cube\0" // IR(17927, 5)
  "Rect\0" // IR(17932, 5)
  "Buffer\0" // IR(17937, 7)
  "SubpassData\0" // IR(17944, 12)
  "TileImageDataEXT\0" // IR(17956, 17)
  "Invocations\0" // IR(17973, 12)
  "SpacingEqual\0" // IR(17985, 13)
  "SpacingFractionalEven\0" // IR(17998, 22)
  "SpacingFractionalOdd\0" // IR(18020, 21)
  "VertexOrderCw\0" // IR(18041, 14)
  "VertexOrderCcw\0" // IR(18055, 15)
  "PixelCenterInteger\0" // IR(18070, 19)
  "OriginUpperLeft\0" // IR(18089, 16)
  "OriginLowerLeft\0" // IR(18105, 16)
  "EarlyFragmentTests\0" // IR(18121, 19)
  "PointMode\0" // IR(18140, 10)
  "Xfb\0" // IR(18150, 4)
  "DepthReplacing\0" // IR(18154, 15)
  "DepthGreater\0" // IR(18169, 13)
  "DepthLess\0" // IR(18182, 10)
  "DepthUnchanged\0" // IR(18192, 15)
  "LocalSize\0" // IR(18207, 10)
  "LocalSizeHint\0" // IR(18217, 14)
  "InputPoints\0" // IR(18231, 12)
  "InputLines\0" // IR(18243, 11)
  "InputLinesAdjacency\0" // IR(18254, 20)
  "Triangles\0" // IR(18274, 10)
  "InputTrianglesAdjacency\0" // IR(18284, 24)
  "Quads\0" // IR(18308, 6)
  "Isolines\0" // IR(18314, 9)
  "OutputVertices\0" // IR(18323, 15)
  "OutputPoints\0" // IR(18338, 13)
  "OutputLineStrip\0" // IR(18351, 16)
  "OutputTriangleStrip\0" // IR(18367, 20)
  "VecTypeHint\0" // IR(18387, 12)
  "ContractionOff\0" // IR(18399, 15)
  "Initializer\0" // IR(18414, 12)
  "Finalizer\0" // IR(18426, 10)
  "SubgroupsPerWorkgroup\0" // IR(18436, 22)
  "SubgroupsPerWorkgroupId\0" // IR(18458, 24)
  "LocalSizeId\0" // IR(18482, 12)
  "LocalSizeHintId\0" // IR(18494, 16)
  "NonCoherentColorAttachmentReadEXT\0" // IR(18510, 34)
  "NonCoherentDepthAttachmentReadEXT\0" // IR(18544, 34)
  "NonCoherentStencilAttachmentReadEXT\0" // IR(18578, 36)
  "SubgroupUniformControlFlowKHR\0" // IR(18614, 30)
  "PostDepthCoverage\0" // IR(18644, 18)
  "NonCoherentTileAttachmentReadQCOM\0" // IR(18662, 34)
  "TileShadingRateQCOM\0" // IR(18696, 20)
  "EarlyAndLateFragmentTestsAMD\0" // IR(18716, 29)
  "StencilRefReplacingEXT\0" // IR(18745, 23)
  "CoalescingAMDX\0" // IR(18768, 15)
  "IsApiEntryAMDX\0" // IR(18783, 15)
  "MaxNodeRecursionAMDX\0" // IR(18798, 21)
  "StaticNumWorkgroupsAMDX\0" // IR(18819, 24)
  "MaxNumWorkgroupsAMDX\0" // IR(18843, 21)
  "StencilRefUnchangedFrontAMD\0" // IR(18864, 28)
  "StencilRefGreaterFrontAMD\0" // IR(18892, 26)
  "StencilRefLessFrontAMD\0" // IR(18918, 23)
  "StencilRefUnchangedBackAMD\0" // IR(18941, 27)
  "StencilRefGreaterBackAMD\0" // IR(18968, 25)
  "StencilRefLessBackAMD\0" // IR(18993, 22)
  "QuadDerivativesKHR\0" // IR(19015, 19)
  "RequireFullQuadsKHR\0" // IR(19034, 20)
  "SharesInputWithAMDX\0" // IR(19054, 20)
  "OutputLinesEXT\0" // IR(19074, 15)
  "OutputLinesNV\0" // IR(19089, 14)
  "OutputPrimitivesEXT\0" // IR(19103, 20)
  "OutputPrimitivesNV\0" // IR(19123, 19)
  "DerivativeGroupQuadsKHR\0" // IR(19142, 24)
  "DerivativeGroupQuadsNV\0" // IR(19166, 23)
  "DerivativeGroupLinearKHR\0" // IR(19189, 25)
  "DerivativeGroupLinearNV\0" // IR(19214, 24)
  "OutputTrianglesEXT\0" // IR(19238, 19)
  "OutputTrianglesNV\0" // IR(19257, 18)
  "PixelInterlockOrderedEXT\0" // IR(19275, 25)
  "PixelInterlockUnorderedEXT\0" // IR(19300, 27)
  "SampleInterlockOrderedEXT\0" // IR(19327, 26)
  "SampleInterlockUnorderedEXT\0" // IR(19353, 28)
  "ShadingRateInterlockOrderedEXT\0" // IR(19381, 31)
  "ShadingRateInterlockUnorderedEXT\0" // IR(19412, 33)
  "SharedLocalMemorySizeINTEL\0" // IR(19445, 27)
  "RoundingModeRTPINTEL\0" // IR(19472, 21)
  "RoundingModeRTNINTEL\0" // IR(19493, 21)
  "FloatingPointModeALTINTEL\0" // IR(19514, 26)
  "FloatingPointModeIEEEINTEL\0" // IR(19540, 27)
  "MaxWorkgroupSizeINTEL\0" // IR(19567, 22)
  "MaxWorkDimINTEL\0" // IR(19589, 16)
  "NoGlobalOffsetINTEL\0" // IR(19605, 20)
  "NumSIMDWorkitemsINTEL\0" // IR(19625, 22)
  "SchedulerTargetFmaxMhzINTEL\0" // IR(19647, 28)
  "MaximallyReconvergesKHR\0" // IR(19675, 24)
  "FPFastMathDefault\0" // IR(19699, 18)
  "StreamingInterfaceINTEL\0" // IR(19717, 24)
  "RegisterMapInterfaceINTEL\0" // IR(19741, 26)
  "NamedBarrierCountINTEL\0" // IR(19767, 23)
  "MaximumRegistersINTEL\0" // IR(19790, 22)
  "MaximumRegistersIdINTEL\0" // IR(19812, 24)
  "SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS\0" // IR(19836, 51)
  "NamedMaximumRegistersINTEL\0" // IR(19887, 27)
  "Vertex\0" // IR(19914, 7)
  "TessellationControl\0" // IR(19921, 20)
  "TessellationEvaluation\0" // IR(19941, 23)
  "GLCompute\0" // IR(19964, 10)
  "TaskNV\0" // IR(19974, 7)
  "MeshNV\0" // IR(19981, 7)
  "RayGenerationKHR\0" // IR(19988, 17)
  "RayGenerationNV\0" // IR(20005, 16)
  "IntersectionKHR\0" // IR(20021, 16)
  "IntersectionNV\0" // IR(20037, 15)
  "AnyHitKHR\0" // IR(20052, 10)
  "AnyHitNV\0" // IR(20062, 9)
  "ClosestHitKHR\0" // IR(20071, 14)
  "ClosestHitNV\0" // IR(20085, 13)
  "MissKHR\0" // IR(20098, 8)
  "MissNV\0" // IR(20106, 7)
  "CallableKHR\0" // IR(20113, 12)
  "CallableNV\0" // IR(20125, 11)
  "TaskEXT\0" // IR(20136, 8)
  "MeshEXT\0" // IR(20144, 8)
  "Preserve\0" // IR(20152, 9)
  "FlushToZero\0" // IR(20161, 12)
  "BFloat16KHR\0" // IR(20173, 12)
  "IEEE\0" // IR(20185, 5)
  "ALT\0" // IR(20190, 4)
  "NotNaN\0" // IR(20194, 7)
  "NotInf\0" // IR(20201, 7)
  "NSZ\0" // IR(20208, 4)
  "AllowRecip\0" // IR(20212, 11)
  "Fast\0" // IR(20223, 5)
  "AllowContract\0" // IR(20228, 14)
  "AllowContractFastINTEL\0" // IR(20242, 23)
  "AllowReassoc\0" // IR(20265, 13)
  "AllowReassocINTEL\0" // IR(20278, 18)
  "AllowTransform\0" // IR(20296, 15)
  "RTE\0" // IR(20311, 4)
  "RTZ\0" // IR(20315, 4)
  "RTP\0" // IR(20319, 4)
  "RTN\0" // IR(20323, 4)
  "Vertical2Pixels\0" // IR(20327, 16)
  "Vertical4Pixels\0" // IR(20343, 16)
  "Horizontal2Pixels\0" // IR(20359, 18)
  "Horizontal4Pixels\0" // IR(20377, 18)
  "Inline\0" // IR(20395, 7)
  "DontInline\0" // IR(20402, 11)
  "Pure\0" // IR(20413, 5)
  "Const\0" // IR(20418, 6)
  "Zext\0" // IR(20424, 5)
  "Sext\0" // IR(20429, 5)
  "ByVal\0" // IR(20434, 6)
  "Sret\0" // IR(20440, 5)
  "NoAlias\0" // IR(20445, 8)
  "NoCapture\0" // IR(20453, 10)
  "NoWrite\0" // IR(20463, 8)
  "NoReadWrite\0" // IR(20471, 12)
  "RuntimeAlignedINTEL\0" // IR(20483, 20)
  "Reduce\0" // IR(20503, 7)
  "InclusiveScan\0" // IR(20510, 14)
  "ExclusiveScan\0" // IR(20524, 14)
  "ClusteredReduce\0" // IR(20538, 16)
  "PartitionedReduceNV\0" // IR(20554, 20)
  "PartitionedInclusiveScanNV\0" // IR(20574, 27)
  "PartitionedExclusiveScanNV\0" // IR(20601, 27)
  "NoneINTEL\0" // IR(20628, 10)
  "ReadINTEL\0" // IR(20638, 10)
  "WriteINTEL\0" // IR(20648, 11)
  "ReadWriteINTEL\0" // IR(20659, 15)
  "Bias\0" // IR(20674, 5)
  "Lod\0" // IR(20679, 4)
  "Grad\0" // IR(20683, 5)
  "ConstOffset\0" // IR(20688, 12)
  "ConstOffsets\0" // IR(20700, 13)
  "MakeTexelAvailable\0" // IR(20713, 19)
  "MakeTexelAvailableKHR\0" // IR(20732, 22)
  "MakeTexelVisible\0" // IR(20754, 17)
  "MakeTexelVisibleKHR\0" // IR(20771, 20)
  "NonPrivateTexel\0" // IR(20791, 16)
  "NonPrivateTexelKHR\0" // IR(20807, 19)
  "VolatileTexel\0" // IR(20826, 14)
  "VolatileTexelKHR\0" // IR(20840, 17)
  "SignExtend\0" // IR(20857, 11)
  "ZeroExtend\0" // IR(20868, 11)
  "Nontemporal\0" // IR(20879, 12)
  "Offsets\0" // IR(20891, 8)
  "SnormInt8\0" // IR(20899, 10)
  "SnormInt16\0" // IR(20909, 11)
  "UnormInt8\0" // IR(20920, 10)
  "UnormInt16\0" // IR(20930, 11)
  "UnormShort565\0" // IR(20941, 14)
  "UnormShort555\0" // IR(20955, 14)
  "UnormInt101010\0" // IR(20969, 15)
  "SignedInt8\0" // IR(20984, 11)
  "SignedInt16\0" // IR(20995, 12)
  "SignedInt32\0" // IR(21007, 12)
  "UnsignedInt8\0" // IR(21019, 13)
  "UnsignedInt16\0" // IR(21032, 14)
  "UnsignedInt32\0" // IR(21046, 14)
  "HalfFloat\0" // IR(21060, 10)
  "UnormInt24\0" // IR(21070, 11)
  "UnormInt101010_2\0" // IR(21081, 17)
  "UnormInt10X6EXT\0" // IR(21098, 16)
  "UnsignedIntRaw10EXT\0" // IR(21114, 20)
  "UnsignedIntRaw12EXT\0" // IR(21134, 20)
  "UnormInt2_101010EXT\0" // IR(21154, 20)
  "UnsignedInt10X6EXT\0" // IR(21174, 19)
  "UnsignedInt12X4EXT\0" // IR(21193, 19)
  "UnsignedInt14X2EXT\0" // IR(21212, 19)
  "UnormInt12X4EXT\0" // IR(21231, 16)
  "UnormInt14X2EXT\0" // IR(21247, 16)
  "R\0" // IR(21263, 2)
  "A\0" // IR(21265, 2)
  "RG\0" // IR(21267, 3)
  "RA\0" // IR(21270, 3)
  "RGB\0" // IR(21273, 4)
  "RGBA\0" // IR(21277, 5)
  "BGRA\0" // IR(21282, 5)
  "ARGB\0" // IR(21287, 5)
  "Intensity\0" // IR(21292, 10)
  "Luminance\0" // IR(21302, 10)
  "Rx\0" // IR(21312, 3)
  "RGx\0" // IR(21315, 4)
  "RGBx\0" // IR(21319, 5)
  "Depth\0" // IR(21324, 6)
  "DepthStencil\0" // IR(21330, 13)
  "sRGB\0" // IR(21343, 5)
  "sRGBx\0" // IR(21348, 6)
  "sRGBA\0" // IR(21354, 6)
  "sBGRA\0" // IR(21360, 6)
  "ABGR\0" // IR(21366, 5)
  "InitOnDeviceReprogramINTEL\0" // IR(21371, 27)
  "InitOnDeviceResetINTEL\0" // IR(21398, 23)
  "NoWait\0" // IR(21421, 7)
  "WaitKernel\0" // IR(21428, 11)
  "WaitWorkGroup\0" // IR(21439, 14)
  "CmdExecTime\0" // IR(21453, 12)
  "MayUsePrintf\0" // IR(21465, 13)
  "Export\0" // IR(21478, 7)
  "Import\0" // IR(21485, 7)
  "LinkOnceODR\0" // IR(21492, 12)
  "UncachedINTEL\0" // IR(21504, 14)
  "CachedINTEL\0" // IR(21518, 12)
  "StreamingINTEL\0" // IR(21530, 15)
  "InvalidateAfterReadINTEL\0" // IR(21545, 25)
  "ConstCachedINTEL\0" // IR(21570, 17)
  "Unroll\0" // IR(21587, 7)
  "DontUnroll\0" // IR(21594, 11)
  "DependencyInfinite\0" // IR(21605, 19)
  "DependencyLength\0" // IR(21624, 17)
  "MinIterations\0" // IR(21641, 14)
  "MaxIterations\0" // IR(21655, 14)
  "IterationMultiple\0" // IR(21669, 18)
  "PeelCount\0" // IR(21687, 10)
  "PartialCount\0" // IR(21697, 13)
  "DependencyArrayINTEL\0" // IR(21710, 21)
  "LoopCoalesceINTEL\0" // IR(21731, 18)
  "MaxInterleavingINTEL\0" // IR(21749, 21)
  "SpeculatedIterationsINTEL\0" // IR(21770, 26)
  "NoFusionINTEL\0" // IR(21796, 14)
  "LoopCountINTEL\0" // IR(21810, 15)
  "MaxReinvocationDelayINTEL\0" // IR(21825, 26)
  "MatrixASignedComponentsINTEL\0" // IR(21851, 29)
  "MatrixBSignedComponentsINTEL\0" // IR(21880, 29)
  "MatrixCBFloat16INTEL\0" // IR(21909, 21)
  "MatrixResultBFloat16INTEL\0" // IR(21930, 26)
  "MatrixAPackedInt8INTEL\0" // IR(21956, 23)
  "MatrixBPackedInt8INTEL\0" // IR(21979, 23)
  "MatrixAPackedInt4INTEL\0" // IR(22002, 23)
  "MatrixBPackedInt4INTEL\0" // IR(22025, 23)
  "MatrixATF32INTEL\0" // IR(22048, 17)
  "MatrixBTF32INTEL\0" // IR(22065, 17)
  "MatrixAPackedFloat16INTEL\0" // IR(22082, 26)
  "MatrixBPackedFloat16INTEL\0" // IR(22108, 26)
  "MatrixAPackedBFloat16INTEL\0" // IR(22134, 27)
  "MatrixBPackedBFloat16INTEL\0" // IR(22161, 27)
  "Aligned\0" // IR(22188, 8)
  "MakePointerAvailable\0" // IR(22196, 21)
  "MakePointerAvailableKHR\0" // IR(22217, 24)
  "MakePointerVisible\0" // IR(22241, 19)
  "MakePointerVisibleKHR\0" // IR(22260, 22)
  "NonPrivatePointer\0" // IR(22282, 18)
  "NonPrivatePointerKHR\0" // IR(22300, 21)
  "AliasScopeINTELMask\0" // IR(22321, 20)
  "NoAliasINTELMask\0" // IR(22341, 17)
  "Simple\0" // IR(22358, 7)
  "GLSL450\0" // IR(22365, 8)
  "OpenCL\0" // IR(22373, 7)
  "Vulkan\0" // IR(22380, 7)
  "VulkanKHR\0" // IR(22387, 10)
  "Relaxed\0" // IR(22397, 8)
  "Acquire\0" // IR(22405, 8)
  "Release\0" // IR(22413, 8)
  "AcquireRelease\0" // IR(22421, 15)
  "SequentiallyConsistent\0" // IR(22436, 23)
  "UniformMemory\0" // IR(22459, 14)
  "SubgroupMemory\0" // IR(22473, 15)
  "WorkgroupMemory\0" // IR(22488, 16)
  "CrossWorkgroupMemory\0" // IR(22504, 21)
  "AtomicCounterMemory\0" // IR(22525, 20)
  "ImageMemory\0" // IR(22545, 12)
  "OutputMemory\0" // IR(22557, 13)
  "OutputMemoryKHR\0" // IR(22570, 16)
  "MakeAvailable\0" // IR(22586, 14)
  "MakeAvailableKHR\0" // IR(22600, 17)
  "MakeVisible\0" // IR(22617, 12)
  "MakeVisibleKHR\0" // IR(22629, 15)
  "AutoINTEL\0" // IR(22644, 10)
  "WRAP\0" // IR(22654, 5)
  "SAT\0" // IR(22659, 4)
  "SAT_ZERO\0" // IR(22663, 9)
  "SAT_SYM\0" // IR(22672, 8)
  "PackedVectorFormat4x8Bit\0" // IR(22680, 25)
  "PackedVectorFormat4x8BitKHR\0" // IR(22705, 28)
  "TRN\0" // IR(22733, 4)
  "TRN_ZERO\0" // IR(22737, 9)
  "RND\0" // IR(22746, 4)
  "RND_ZERO\0" // IR(22750, 9)
  "RND_INF\0" // IR(22759, 8)
  "RND_MIN_INF\0" // IR(22767, 12)
  "RND_CONV\0" // IR(22779, 9)
  "RND_CONV_ODD\0" // IR(22788, 13)
  "RobustnessPerComponentNV\0" // IR(22801, 25)
  "RobustnessPerElementNV\0" // IR(22826, 23)
  "OpaqueKHR\0" // IR(22849, 10)
  "NoOpaqueKHR\0" // IR(22859, 12)
  "TerminateOnFirstHitKHR\0" // IR(22871, 23)
  "SkipClosestHitShaderKHR\0" // IR(22894, 24)
  "CullBackFacingTrianglesKHR\0" // IR(22918, 27)
  "CullFrontFacingTrianglesKHR\0" // IR(22945, 28)
  "CullOpaqueKHR\0" // IR(22973, 14)
  "CullNoOpaqueKHR\0" // IR(22987, 16)
  "SkipTrianglesKHR\0" // IR(23003, 17)
  "SkipBuiltinPrimitivesNV\0" // IR(23020, 24)
  "SkipAABBsKHR\0" // IR(23044, 13)
  "ForceOpacityMicromap2StateEXT\0" // IR(23057, 30)
  "RayQueryCandidateIntersectionTriangleKHR\0" // IR(23087, 41)
  "RayQueryCandidateIntersectionAABBKHR\0" // IR(23128, 37)
  "RayQueryCommittedIntersectionNoneKHR\0" // IR(23165, 37)
  "RayQueryCommittedIntersectionTriangleKHR\0" // IR(23202, 41)
  "RayQueryCommittedIntersectionGeneratedKHR\0" // IR(23243, 42)
  "RayQueryCandidateIntersectionKHR\0" // IR(23285, 33)
  "RayQueryCommittedIntersectionKHR\0" // IR(23318, 33)
  "ClampToEdge\0" // IR(23351, 12)
  "Clamp\0" // IR(23363, 6)
  "Repeat\0" // IR(23369, 7)
  "RepeatMirrored\0" // IR(23376, 15)
  "Nearest\0" // IR(23391, 8)
  "Linear\0" // IR(23399, 7)
  "Unknown\0" // IR(23406, 8)
  "Rgba32f\0" // IR(23414, 8)
  "Rgba16f\0" // IR(23422, 8)
  "R32f\0" // IR(23430, 5)
  "Rgba8\0" // IR(23435, 6)
  "Rgba8Snorm\0" // IR(23441, 11)
  "Rg32f\0" // IR(23452, 6)
  "Rg16f\0" // IR(23458, 6)
  "R11fG11fB10f\0" // IR(23464, 13)
  "R16f\0" // IR(23477, 5)
  "Rgba16\0" // IR(23482, 7)
  "Rgb10A2\0" // IR(23489, 8)
  "Rg16\0" // IR(23497, 5)
  "Rg8\0" // IR(23502, 4)
  "R16\0" // IR(23506, 4)
  "R8\0" // IR(23510, 3)
  "Rgba16Snorm\0" // IR(23513, 12)
  "Rg16Snorm\0" // IR(23525, 10)
  "Rg8Snorm\0" // IR(23535, 9)
  "R16Snorm\0" // IR(23544, 9)
  "R8Snorm\0" // IR(23553, 8)
  "Rgba32i\0" // IR(23561, 8)
  "Rgba16i\0" // IR(23569, 8)
  "Rgba8i\0" // IR(23577, 7)
  "R32i\0" // IR(23584, 5)
  "Rg32i\0" // IR(23589, 6)
  "Rg16i\0" // IR(23595, 6)
  "Rg8i\0" // IR(23601, 5)
  "R16i\0" // IR(23606, 5)
  "R8i\0" // IR(23611, 4)
  "Rgba32ui\0" // IR(23615, 9)
  "Rgba16ui\0" // IR(23624, 9)
  "Rgba8ui\0" // IR(23633, 8)
  "R32ui\0" // IR(23641, 6)
  "Rgb10a2ui\0" // IR(23647, 10)
  "Rg32ui\0" // IR(23657, 7)
  "Rg16ui\0" // IR(23664, 7)
  "Rg8ui\0" // IR(23671, 6)
  "R16ui\0" // IR(23677, 6)
  "R8ui\0" // IR(23683, 5)
  "R64ui\0" // IR(23688, 6)
  "R64i\0" // IR(23694, 5)
  "CrossDevice\0" // IR(23699, 12)
  "Device\0" // IR(23711, 7)
  "Workgroup\0" // IR(23718, 10)
  "Subgroup\0" // IR(23728, 9)
  "Invocation\0" // IR(23737, 11)
  "QueueFamily\0" // IR(23748, 12)
  "QueueFamilyKHR\0" // IR(23760, 15)
  "ShaderCallKHR\0" // IR(23775, 14)
  "Flatten\0" // IR(23789, 8)
  "DontFlatten\0" // IR(23797, 12)
  "IdentifierPossibleDuplicates\0" // IR(23809, 29)
  "FlagUnknownPhysicalLayout\0" // IR(23838, 26)
  "ESSL\0" // IR(23864, 5)
  "GLSL\0" // IR(23869, 5)
  "OpenCL_C\0" // IR(23874, 9)
  "OpenCL_CPP\0" // IR(23883, 11)
  "HLSL\0" // IR(23894, 5)
  "CPP_for_OpenCL\0" // IR(23899, 15)
  "SYCL\0" // IR(23914, 5)
  "HERO_C\0" // IR(23919, 7)
  "NZSL\0" // IR(23926, 5)
  "WGSL\0" // IR(23931, 5)
  "Slang\0" // IR(23936, 6)
  "Zig\0" // IR(23942, 4)
  "Rust\0" // IR(23946, 5)
  "UniformConstant\0" // IR(23951, 16)
  "Input\0" // IR(23967, 6)
  "Output\0" // IR(23973, 7)
  "CrossWorkgroup\0" // IR(23980, 15)
  "Private\0" // IR(23995, 8)
  "Function\0" // IR(24003, 9)
  "Generic\0" // IR(24012, 8)
  "PushConstant\0" // IR(24020, 13)
  "AtomicCounter\0" // IR(24033, 14)
  "Image\0" // IR(24047, 6)
  "StorageBuffer\0" // IR(24053, 14)
  "TileImageEXT\0" // IR(24067, 13)
  "TileAttachmentQCOM\0" // IR(24080, 19)
  "NodePayloadAMDX\0" // IR(24099, 16)
  "CallableDataKHR\0" // IR(24115, 16)
  "CallableDataNV\0" // IR(24131, 15)
  "IncomingCallableDataKHR\0" // IR(24146, 24)
  "IncomingCallableDataNV\0" // IR(24170, 23)
  "RayPayloadKHR\0" // IR(24193, 14)
  "RayPayloadNV\0" // IR(24207, 13)
  "HitAttributeKHR\0" // IR(24220, 16)
  "HitAttributeNV\0" // IR(24236, 15)
  "IncomingRayPayloadKHR\0" // IR(24251, 22)
  "IncomingRayPayloadNV\0" // IR(24273, 21)
  "ShaderRecordBufferKHR\0" // IR(24294, 22)
  "ShaderRecordBufferNV\0" // IR(24316, 21)
  "PhysicalStorageBuffer\0" // IR(24337, 22)
  "PhysicalStorageBufferEXT\0" // IR(24359, 25)
  "HitObjectAttributeNV\0" // IR(24384, 21)
  "TaskPayloadWorkgroupEXT\0" // IR(24405, 24)
  "CodeSectionINTEL\0" // IR(24429, 17)
  "DeviceOnlyINTEL\0" // IR(24446, 16)
  "HostOnlyINTEL\0" // IR(24462, 14)
  "WriteThroughINTEL\0" // IR(24476, 18)
  "WriteBackINTEL\0" // IR(24494, 15)
  "TensorView\0" // IR(24509, 11)
  "DecodeFunc\0" // IR(24520, 11)
  "Undefined\0" // IR(24531, 10)
  "Nop\0" // IR(24541, 4)
  "SPV_OPERAND_TYPE_TYPE_ID\0" // IR(24545, 25)
  "SPV_OPERAND_TYPE_RESULT_ID\0" // IR(24570, 27)
  "Undef\0" // IR(24597, 6)
  "SourceContinued\0" // IR(24603, 16)
  "SPV_OPERAND_TYPE_SOURCE_LANGUAGE\0" // IR(24619, 33)
  "SPV_OPERAND_TYPE_OPTIONAL_ID\0" // IR(24652, 29)
  "SPV_OPERAND_TYPE_OPTIONAL_LITERAL_STRING\0" // IR(24681, 41)
  "Source\0" // IR(24722, 7)
  "SourceExtension\0" // IR(24729, 16)
  "Name\0" // IR(24745, 5)
  "MemberName\0" // IR(24750, 11)
  "String\0" // IR(24761, 7)
  "Line\0" // IR(24768, 5)
  "Extension\0" // IR(24773, 10)
  "ExtInstImport\0" // IR(24783, 14)
  "SPV_OPERAND_TYPE_EXTENSION_INSTRUCTION_NUMBER\0" // IR(24797, 46)
  "ExtInst\0" // IR(24843, 8)
  "SPV_OPERAND_TYPE_ADDRESSING_MODEL\0" // IR(24851, 34)
  "SPV_OPERAND_TYPE_MEMORY_MODEL\0" // IR(24885, 30)
  "MemoryModel\0" // IR(24915, 12)
  "SPV_OPERAND_TYPE_EXECUTION_MODEL\0" // IR(24927, 33)
  "SPV_OPERAND_TYPE_VARIABLE_ID\0" // IR(24960, 29)
  "EntryPoint\0" // IR(24989, 11)
  "SPV_OPERAND_TYPE_EXECUTION_MODE\0" // IR(25000, 32)
  "ExecutionMode\0" // IR(25032, 14)
  "SPV_OPERAND_TYPE_CAPABILITY\0" // IR(25046, 28)
  "Capability\0" // IR(25074, 11)
  "TypeVoid\0" // IR(25085, 9)
  "TypeBool\0" // IR(25094, 9)
  "TypeInt\0" // IR(25103, 8)
  "SPV_OPERAND_TYPE_OPTIONAL_FPENCODING\0" // IR(25111, 37)
  "TypeFloat\0" // IR(25148, 10)
  "TypeVector\0" // IR(25158, 11)
  "TypeMatrix\0" // IR(25169, 11)
  "SPV_OPERAND_TYPE_DIMENSIONALITY\0" // IR(25180, 32)
  "SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT\0" // IR(25212, 38)
  "SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER\0" // IR(25250, 43)
  "TypeImage\0" // IR(25293, 10)
  "TypeSampler\0" // IR(25303, 12)
  "TypeSampledImage\0" // IR(25315, 17)
  "TypeArray\0" // IR(25332, 10)
  "TypeRuntimeArray\0" // IR(25342, 17)
  "TypeStruct\0" // IR(25359, 11)
  "TypeOpaque\0" // IR(25370, 11)
  "SPV_OPERAND_TYPE_STORAGE_CLASS\0" // IR(25381, 31)
  "TypePointer\0" // IR(25412, 12)
  "TypeFunction\0" // IR(25424, 13)
  "TypeEvent\0" // IR(25437, 10)
  "TypeDeviceEvent\0" // IR(25447, 16)
  "TypeReserveId\0" // IR(25463, 14)
  "TypeQueue\0" // IR(25477, 10)
  "TypePipe\0" // IR(25487, 9)
  "TypeForwardPointer\0" // IR(25496, 19)
  "ConstantTrue\0" // IR(25515, 13)
  "ConstantFalse\0" // IR(25528, 14)
  "SPV_OPERAND_TYPE_TYPED_LITERAL_NUMBER\0" // IR(25542, 38)
  "ConstantComposite\0" // IR(25580, 18)
  "SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE\0" // IR(25598, 41)
  "SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE\0" // IR(25639, 37)
  "ConstantSampler\0" // IR(25676, 16)
  "ConstantNull\0" // IR(25692, 13)
  "SpecConstantTrue\0" // IR(25705, 17)
  "SpecConstantFalse\0" // IR(25722, 18)
  "SpecConstant\0" // IR(25740, 13)
  "SpecConstantComposite\0" // IR(25753, 22)
  "SPV_OPERAND_TYPE_SPEC_CONSTANT_OP_NUMBER\0" // IR(25775, 41)
  "SpecConstantOp\0" // IR(25816, 15)
  "SPV_OPERAND_TYPE_FUNCTION_CONTROL\0" // IR(25831, 34)
  "FunctionParameter\0" // IR(25865, 18)
  "FunctionEnd\0" // IR(25883, 12)
  "FunctionCall\0" // IR(25895, 13)
  "Variable\0" // IR(25908, 9)
  "ImageTexelPointer\0" // IR(25917, 18)
  "SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS\0" // IR(25935, 40)
  "Load\0" // IR(25975, 5)
  "Store\0" // IR(25980, 6)
  "CopyMemory\0" // IR(25986, 11)
  "CopyMemorySized\0" // IR(25997, 16)
  "AccessChain\0" // IR(26013, 12)
  "InBoundsAccessChain\0" // IR(26025, 20)
  "PtrAccessChain\0" // IR(26045, 15)
  "ArrayLength\0" // IR(26060, 12)
  "GenericPtrMemSemantics\0" // IR(26072, 23)
  "InBoundsPtrAccessChain\0" // IR(26095, 23)
  "SPV_OPERAND_TYPE_DECORATION\0" // IR(26118, 28)
  "Decorate\0" // IR(26146, 9)
  "MemberDecorate\0" // IR(26155, 15)
  "DecorationGroup\0" // IR(26170, 16)
  "GroupDecorate\0" // IR(26186, 14)
  "SPV_OPERAND_TYPE_VARIABLE_ID_LITERAL_INTEGER\0" // IR(26200, 45)
  "GroupMemberDecorate\0" // IR(26245, 20)
  "VectorExtractDynamic\0" // IR(26265, 21)
  "VectorInsertDynamic\0" // IR(26286, 20)
  "VectorShuffle\0" // IR(26306, 14)
  "CompositeConstruct\0" // IR(26320, 19)
  "CompositeExtract\0" // IR(26339, 17)
  "CompositeInsert\0" // IR(26356, 16)
  "CopyObject\0" // IR(26372, 11)
  "Transpose\0" // IR(26383, 10)
  "SampledImage\0" // IR(26393, 13)
  "SPV_OPERAND_TYPE_OPTIONAL_IMAGE\0" // IR(26406, 32)
  "ImageSampleImplicitLod\0" // IR(26438, 23)
  "SPV_OPERAND_TYPE_IMAGE\0" // IR(26461, 23)
  "ImageSampleExplicitLod\0" // IR(26484, 23)
  "ImageSampleDrefImplicitLod\0" // IR(26507, 27)
  "ImageSampleDrefExplicitLod\0" // IR(26534, 27)
  "ImageSampleProjImplicitLod\0" // IR(26561, 27)
  "ImageSampleProjExplicitLod\0" // IR(26588, 27)
  "ImageSampleProjDrefImplicitLod\0" // IR(26615, 31)
  "ImageSampleProjDrefExplicitLod\0" // IR(26646, 31)
  "ImageFetch\0" // IR(26677, 11)
  "ImageGather\0" // IR(26688, 12)
  "ImageDrefGather\0" // IR(26700, 16)
  "ImageRead\0" // IR(26716, 10)
  "ImageWrite\0" // IR(26726, 11)
  "ImageQueryFormat\0" // IR(26737, 17)
  "ImageQueryOrder\0" // IR(26754, 16)
  "ImageQuerySizeLod\0" // IR(26770, 18)
  "ImageQuerySize\0" // IR(26788, 15)
  "ImageQueryLod\0" // IR(26803, 14)
  "ImageQueryLevels\0" // IR(26817, 17)
  "ImageQuerySamples\0" // IR(26834, 18)
  "ConvertFToU\0" // IR(26852, 12)
  "ConvertFToS\0" // IR(26864, 12)
  "ConvertSToF\0" // IR(26876, 12)
  "ConvertUToF\0" // IR(26888, 12)
  "UConvert\0" // IR(26900, 9)
  "SConvert\0" // IR(26909, 9)
  "FConvert\0" // IR(26918, 9)
  "QuantizeToF16\0" // IR(26927, 14)
  "ConvertPtrToU\0" // IR(26941, 14)
  "SatConvertSToU\0" // IR(26955, 15)
  "SatConvertUToS\0" // IR(26970, 15)
  "ConvertUToPtr\0" // IR(26985, 14)
  "PtrCastToGeneric\0" // IR(26999, 17)
  "GenericCastToPtr\0" // IR(27016, 17)
  "GenericCastToPtrExplicit\0" // IR(27033, 25)
  "Bitcast\0" // IR(27058, 8)
  "SNegate\0" // IR(27066, 8)
  "FNegate\0" // IR(27074, 8)
  "IAdd\0" // IR(27082, 5)
  "FAdd\0" // IR(27087, 5)
  "ISub\0" // IR(27092, 5)
  "FSub\0" // IR(27097, 5)
  "IMul\0" // IR(27102, 5)
  "FMul\0" // IR(27107, 5)
  "UDiv\0" // IR(27112, 5)
  "SDiv\0" // IR(27117, 5)
  "FDiv\0" // IR(27122, 5)
  "UMod\0" // IR(27127, 5)
  "SRem\0" // IR(27132, 5)
  "SMod\0" // IR(27137, 5)
  "FRem\0" // IR(27142, 5)
  "FMod\0" // IR(27147, 5)
  "VectorTimesScalar\0" // IR(27152, 18)
  "MatrixTimesScalar\0" // IR(27170, 18)
  "VectorTimesMatrix\0" // IR(27188, 18)
  "MatrixTimesVector\0" // IR(27206, 18)
  "MatrixTimesMatrix\0" // IR(27224, 18)
  "OuterProduct\0" // IR(27242, 13)
  "Dot\0" // IR(27255, 4)
  "IAddCarry\0" // IR(27259, 10)
  "ISubBorrow\0" // IR(27269, 11)
  "UMulExtended\0" // IR(27280, 13)
  "SMulExtended\0" // IR(27293, 13)
  "Any\0" // IR(27306, 4)
  "All\0" // IR(27310, 4)
  "IsNan\0" // IR(27314, 6)
  "IsInf\0" // IR(27320, 6)
  "IsFinite\0" // IR(27326, 9)
  "IsNormal\0" // IR(27335, 9)
  "SignBitSet\0" // IR(27344, 11)
  "LessOrGreater\0" // IR(27355, 14)
  "Ordered\0" // IR(27369, 8)
  "Unordered\0" // IR(27377, 10)
  "LogicalEqual\0" // IR(27387, 13)
  "LogicalNotEqual\0" // IR(27400, 16)
  "LogicalOr\0" // IR(27416, 10)
  "LogicalAnd\0" // IR(27426, 11)
  "LogicalNot\0" // IR(27437, 11)
  "Select\0" // IR(27448, 7)
  "IEqual\0" // IR(27455, 7)
  "INotEqual\0" // IR(27462, 10)
  "UGreaterThan\0" // IR(27472, 13)
  "SGreaterThan\0" // IR(27485, 13)
  "UGreaterThanEqual\0" // IR(27498, 18)
  "SGreaterThanEqual\0" // IR(27516, 18)
  "ULessThan\0" // IR(27534, 10)
  "SLessThan\0" // IR(27544, 10)
  "ULessThanEqual\0" // IR(27554, 15)
  "SLessThanEqual\0" // IR(27569, 15)
  "FOrdEqual\0" // IR(27584, 10)
  "FUnordEqual\0" // IR(27594, 12)
  "FOrdNotEqual\0" // IR(27606, 13)
  "FUnordNotEqual\0" // IR(27619, 15)
  "FOrdLessThan\0" // IR(27634, 13)
  "FUnordLessThan\0" // IR(27647, 15)
  "FOrdGreaterThan\0" // IR(27662, 16)
  "FUnordGreaterThan\0" // IR(27678, 18)
  "FOrdLessThanEqual\0" // IR(27696, 18)
  "FUnordLessThanEqual\0" // IR(27714, 20)
  "FOrdGreaterThanEqual\0" // IR(27734, 21)
  "FUnordGreaterThanEqual\0" // IR(27755, 23)
  "ShiftRightLogical\0" // IR(27778, 18)
  "ShiftRightArithmetic\0" // IR(27796, 21)
  "ShiftLeftLogical\0" // IR(27817, 17)
  "BitwiseOr\0" // IR(27834, 10)
  "BitwiseXor\0" // IR(27844, 11)
  "BitwiseAnd\0" // IR(27855, 11)
  "Not\0" // IR(27866, 4)
  "BitFieldInsert\0" // IR(27870, 15)
  "BitFieldSExtract\0" // IR(27885, 17)
  "BitFieldUExtract\0" // IR(27902, 17)
  "BitReverse\0" // IR(27919, 11)
  "BitCount\0" // IR(27930, 9)
  "DPdx\0" // IR(27939, 5)
  "DPdy\0" // IR(27944, 5)
  "Fwidth\0" // IR(27949, 7)
  "DPdxFine\0" // IR(27956, 9)
  "DPdyFine\0" // IR(27965, 9)
  "FwidthFine\0" // IR(27974, 11)
  "DPdxCoarse\0" // IR(27985, 11)
  "DPdyCoarse\0" // IR(27996, 11)
  "FwidthCoarse\0" // IR(28007, 13)
  "EmitVertex\0" // IR(28020, 11)
  "EndPrimitive\0" // IR(28031, 13)
  "EmitStreamVertex\0" // IR(28044, 17)
  "EndStreamPrimitive\0" // IR(28061, 19)
  "SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID\0" // IR(28080, 37)
  "ControlBarrier\0" // IR(28117, 15)
  "MemoryBarrier\0" // IR(28132, 14)
  "AtomicLoad\0" // IR(28146, 11)
  "AtomicStore\0" // IR(28157, 12)
  "AtomicExchange\0" // IR(28169, 15)
  "AtomicCompareExchange\0" // IR(28184, 22)
  "AtomicCompareExchangeWeak\0" // IR(28206, 26)
  "AtomicIIncrement\0" // IR(28232, 17)
  "AtomicIDecrement\0" // IR(28249, 17)
  "AtomicIAdd\0" // IR(28266, 11)
  "AtomicISub\0" // IR(28277, 11)
  "AtomicSMin\0" // IR(28288, 11)
  "AtomicUMin\0" // IR(28299, 11)
  "AtomicSMax\0" // IR(28310, 11)
  "AtomicUMax\0" // IR(28321, 11)
  "AtomicAnd\0" // IR(28332, 10)
  "AtomicOr\0" // IR(28342, 9)
  "AtomicXor\0" // IR(28351, 10)
  "Phi\0" // IR(28361, 4)
  "SPV_OPERAND_TYPE_LOOP_CONTROL\0" // IR(28365, 30)
  "LoopMerge\0" // IR(28395, 10)
  "SPV_OPERAND_TYPE_SELECTION_CONTROL\0" // IR(28405, 35)
  "SelectionMerge\0" // IR(28440, 15)
  "Label\0" // IR(28455, 6)
  "Branch\0" // IR(28461, 7)
  "BranchConditional\0" // IR(28468, 18)
  "SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER_ID\0" // IR(28486, 45)
  "Switch\0" // IR(28531, 7)
  "Kill\0" // IR(28538, 5)
  "Return\0" // IR(28543, 7)
  "ReturnValue\0" // IR(28550, 12)
  "Unreachable\0" // IR(28562, 12)
  "LifetimeStart\0" // IR(28574, 14)
  "LifetimeStop\0" // IR(28588, 13)
  "GroupAsyncCopy\0" // IR(28601, 15)
  "GroupWaitEvents\0" // IR(28616, 16)
  "GroupAll\0" // IR(28632, 9)
  "GroupAny\0" // IR(28641, 9)
  "GroupBroadcast\0" // IR(28650, 15)
  "SPV_OPERAND_TYPE_GROUP_OPERATION\0" // IR(28665, 33)
  "GroupIAdd\0" // IR(28698, 10)
  "GroupFAdd\0" // IR(28708, 10)
  "GroupFMin\0" // IR(28718, 10)
  "GroupUMin\0" // IR(28728, 10)
  "GroupSMin\0" // IR(28738, 10)
  "GroupFMax\0" // IR(28748, 10)
  "GroupUMax\0" // IR(28758, 10)
  "GroupSMax\0" // IR(28768, 10)
  "ReadPipe\0" // IR(28778, 9)
  "WritePipe\0" // IR(28787, 10)
  "ReservedReadPipe\0" // IR(28797, 17)
  "ReservedWritePipe\0" // IR(28814, 18)
  "ReserveReadPipePackets\0" // IR(28832, 23)
  "ReserveWritePipePackets\0" // IR(28855, 24)
  "CommitReadPipe\0" // IR(28879, 15)
  "CommitWritePipe\0" // IR(28894, 16)
  "IsValidReserveId\0" // IR(28910, 17)
  "GetNumPipePackets\0" // IR(28927, 18)
  "GetMaxPipePackets\0" // IR(28945, 18)
  "GroupReserveReadPipePackets\0" // IR(28963, 28)
  "GroupReserveWritePipePackets\0" // IR(28991, 29)
  "GroupCommitReadPipe\0" // IR(29020, 20)
  "GroupCommitWritePipe\0" // IR(29040, 21)
  "EnqueueMarker\0" // IR(29061, 14)
  "EnqueueKernel\0" // IR(29075, 14)
  "GetKernelNDrangeSubGroupCount\0" // IR(29089, 30)
  "GetKernelNDrangeMaxSubGroupSize\0" // IR(29119, 32)
  "GetKernelWorkGroupSize\0" // IR(29151, 23)
  "GetKernelPreferredWorkGroupSizeMultiple\0" // IR(29174, 40)
  "RetainEvent\0" // IR(29214, 12)
  "ReleaseEvent\0" // IR(29226, 13)
  "CreateUserEvent\0" // IR(29239, 16)
  "IsValidEvent\0" // IR(29255, 13)
  "SetUserEventStatus\0" // IR(29268, 19)
  "CaptureEventProfilingInfo\0" // IR(29287, 26)
  "GetDefaultQueue\0" // IR(29313, 16)
  "BuildNDRange\0" // IR(29329, 13)
  "ImageSparseSampleImplicitLod\0" // IR(29342, 29)
  "ImageSparseSampleExplicitLod\0" // IR(29371, 29)
  "ImageSparseSampleDrefImplicitLod\0" // IR(29400, 33)
  "ImageSparseSampleDrefExplicitLod\0" // IR(29433, 33)
  "ImageSparseSampleProjImplicitLod\0" // IR(29466, 33)
  "ImageSparseSampleProjExplicitLod\0" // IR(29499, 33)
  "ImageSparseSampleProjDrefImplicitLod\0" // IR(29532, 37)
  "ImageSparseSampleProjDrefExplicitLod\0" // IR(29569, 37)
  "ImageSparseFetch\0" // IR(29606, 17)
  "ImageSparseGather\0" // IR(29623, 18)
  "ImageSparseDrefGather\0" // IR(29641, 22)
  "ImageSparseTexelsResident\0" // IR(29663, 26)
  "NoLine\0" // IR(29689, 7)
  "AtomicFlagTestAndSet\0" // IR(29696, 21)
  "AtomicFlagClear\0" // IR(29717, 16)
  "ImageSparseRead\0" // IR(29733, 16)
  "SizeOf\0" // IR(29749, 7)
  "TypePipeStorage\0" // IR(29756, 16)
  "ConstantPipeStorage\0" // IR(29772, 20)
  "CreatePipeFromPipeStorage\0" // IR(29792, 26)
  "GetKernelLocalSizeForSubgroupCount\0" // IR(29818, 35)
  "GetKernelMaxNumSubgroups\0" // IR(29853, 25)
  "TypeNamedBarrier\0" // IR(29878, 17)
  "NamedBarrierInitialize\0" // IR(29895, 23)
  "MemoryNamedBarrier\0" // IR(29918, 19)
  "ModuleProcessed\0" // IR(29937, 16)
  "ExecutionModeId\0" // IR(29953, 16)
  "DecorateId\0" // IR(29969, 11)
  "GroupNonUniformElect\0" // IR(29980, 21)
  "GroupNonUniformAll\0" // IR(30001, 19)
  "GroupNonUniformAny\0" // IR(30020, 19)
  "GroupNonUniformAllEqual\0" // IR(30039, 24)
  "GroupNonUniformBroadcast\0" // IR(30063, 25)
  "GroupNonUniformBroadcastFirst\0" // IR(30088, 30)
  "GroupNonUniformInverseBallot\0" // IR(30118, 29)
  "GroupNonUniformBallotBitExtract\0" // IR(30147, 32)
  "GroupNonUniformBallotBitCount\0" // IR(30179, 30)
  "GroupNonUniformBallotFindLSB\0" // IR(30209, 29)
  "GroupNonUniformBallotFindMSB\0" // IR(30238, 29)
  "GroupNonUniformShuffleXor\0" // IR(30267, 26)
  "GroupNonUniformShuffleUp\0" // IR(30293, 25)
  "GroupNonUniformShuffleDown\0" // IR(30318, 27)
  "GroupNonUniformIAdd\0" // IR(30345, 20)
  "GroupNonUniformFAdd\0" // IR(30365, 20)
  "GroupNonUniformIMul\0" // IR(30385, 20)
  "GroupNonUniformFMul\0" // IR(30405, 20)
  "GroupNonUniformSMin\0" // IR(30425, 20)
  "GroupNonUniformUMin\0" // IR(30445, 20)
  "GroupNonUniformFMin\0" // IR(30465, 20)
  "GroupNonUniformSMax\0" // IR(30485, 20)
  "GroupNonUniformUMax\0" // IR(30505, 20)
  "GroupNonUniformFMax\0" // IR(30525, 20)
  "GroupNonUniformBitwiseAnd\0" // IR(30545, 26)
  "GroupNonUniformBitwiseOr\0" // IR(30571, 25)
  "GroupNonUniformBitwiseXor\0" // IR(30596, 26)
  "GroupNonUniformLogicalAnd\0" // IR(30622, 26)
  "GroupNonUniformLogicalOr\0" // IR(30648, 25)
  "GroupNonUniformLogicalXor\0" // IR(30673, 26)
  "GroupNonUniformQuadBroadcast\0" // IR(30699, 29)
  "GroupNonUniformQuadSwap\0" // IR(30728, 24)
  "CopyLogical\0" // IR(30752, 12)
  "PtrEqual\0" // IR(30764, 9)
  "PtrNotEqual\0" // IR(30773, 12)
  "PtrDiff\0" // IR(30785, 8)
  "ColorAttachmentReadEXT\0" // IR(30793, 23)
  "DepthAttachmentReadEXT\0" // IR(30816, 23)
  "StencilAttachmentReadEXT\0" // IR(30839, 25)
  "TerminateInvocation\0" // IR(30864, 20)
  "TypeUntypedPointerKHR\0" // IR(30884, 22)
  "UntypedVariableKHR\0" // IR(30906, 19)
  "UntypedAccessChainKHR\0" // IR(30925, 22)
  "UntypedInBoundsAccessChainKHR\0" // IR(30947, 30)
  "SubgroupFirstInvocationKHR\0" // IR(30977, 27)
  "UntypedPtrAccessChainKHR\0" // IR(31004, 25)
  "UntypedInBoundsPtrAccessChainKHR\0" // IR(31029, 33)
  "UntypedArrayLengthKHR\0" // IR(31062, 22)
  "UntypedPrefetchKHR\0" // IR(31084, 19)
  "SubgroupAllKHR\0" // IR(31103, 15)
  "SubgroupAnyKHR\0" // IR(31118, 15)
  "SubgroupAllEqualKHR\0" // IR(31133, 20)
  "SubgroupReadInvocationKHR\0" // IR(31153, 26)
  "ExtInstWithForwardRefsKHR\0" // IR(31179, 26)
  "TraceRayKHR\0" // IR(31205, 12)
  "ExecuteCallableKHR\0" // IR(31217, 19)
  "ConvertUToAccelerationStructureKHR\0" // IR(31236, 35)
  "IgnoreIntersectionKHR\0" // IR(31271, 22)
  "TerminateRayKHR\0" // IR(31293, 16)
  "SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT\0" // IR(31309, 47)
  "SDot\0" // IR(31356, 5)
  "SDotKHR\0" // IR(31361, 8)
  "UDot\0" // IR(31369, 5)
  "UDotKHR\0" // IR(31374, 8)
  "SUDot\0" // IR(31382, 6)
  "SUDotKHR\0" // IR(31388, 9)
  "SDotAccSat\0" // IR(31397, 11)
  "SDotAccSatKHR\0" // IR(31408, 14)
  "UDotAccSat\0" // IR(31422, 11)
  "UDotAccSatKHR\0" // IR(31433, 14)
  "SUDotAccSat\0" // IR(31447, 12)
  "SUDotAccSatKHR\0" // IR(31459, 15)
  "TypeCooperativeMatrixKHR\0" // IR(31474, 25)
  "CooperativeMatrixLoadKHR\0" // IR(31499, 25)
  "CooperativeMatrixStoreKHR\0" // IR(31524, 26)
  "SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS\0" // IR(31550, 54)
  "CooperativeMatrixMulAddKHR\0" // IR(31604, 27)
  "CooperativeMatrixLengthKHR\0" // IR(31631, 27)
  "ConstantCompositeReplicateEXT\0" // IR(31658, 30)
  "SpecConstantCompositeReplicateEXT\0" // IR(31688, 34)
  "CompositeConstructReplicateEXT\0" // IR(31722, 31)
  "TypeRayQueryKHR\0" // IR(31753, 16)
  "RayQueryInitializeKHR\0" // IR(31769, 22)
  "RayQueryTerminateKHR\0" // IR(31791, 21)
  "RayQueryGenerateIntersectionKHR\0" // IR(31812, 32)
  "RayQueryConfirmIntersectionKHR\0" // IR(31844, 31)
  "RayQueryProceedKHR\0" // IR(31875, 19)
  "RayQueryGetIntersectionTypeKHR\0" // IR(31894, 31)
  "ImageSampleWeightedQCOM\0" // IR(31925, 24)
  "ImageBoxFilterQCOM\0" // IR(31949, 19)
  "ImageBlockMatchSSDQCOM\0" // IR(31968, 23)
  "ImageBlockMatchSADQCOM\0" // IR(31991, 23)
  "ImageBlockMatchWindowSSDQCOM\0" // IR(32014, 29)
  "ImageBlockMatchWindowSADQCOM\0" // IR(32043, 29)
  "ImageBlockMatchGatherSSDQCOM\0" // IR(32072, 29)
  "ImageBlockMatchGatherSADQCOM\0" // IR(32101, 29)
  "GroupIAddNonUniformAMD\0" // IR(32130, 23)
  "GroupFAddNonUniformAMD\0" // IR(32153, 23)
  "GroupFMinNonUniformAMD\0" // IR(32176, 23)
  "GroupUMinNonUniformAMD\0" // IR(32199, 23)
  "GroupSMinNonUniformAMD\0" // IR(32222, 23)
  "GroupFMaxNonUniformAMD\0" // IR(32245, 23)
  "GroupUMaxNonUniformAMD\0" // IR(32268, 23)
  "GroupSMaxNonUniformAMD\0" // IR(32291, 23)
  "FragmentMaskFetchAMD\0" // IR(32314, 21)
  "FragmentFetchAMD\0" // IR(32335, 17)
  "ReadClockKHR\0" // IR(32352, 13)
  "AllocateNodePayloadsAMDX\0" // IR(32365, 25)
  "EnqueueNodePayloadsAMDX\0" // IR(32390, 24)
  "TypeNodePayloadArrayAMDX\0" // IR(32414, 25)
  "FinishWritingNodePayloadAMDX\0" // IR(32439, 29)
  "NodePayloadArrayLengthAMDX\0" // IR(32468, 27)
  "IsNodePayloadValidAMDX\0" // IR(32495, 23)
  "ConstantStringAMDX\0" // IR(32518, 19)
  "SpecConstantStringAMDX\0" // IR(32537, 23)
  "GroupNonUniformQuadAllKHR\0" // IR(32560, 26)
  "GroupNonUniformQuadAnyKHR\0" // IR(32586, 26)
  "HitObjectRecordHitMotionNV\0" // IR(32612, 27)
  "HitObjectRecordHitWithIndexMotionNV\0" // IR(32639, 36)
  "HitObjectRecordMissMotionNV\0" // IR(32675, 28)
  "HitObjectGetWorldToObjectNV\0" // IR(32703, 28)
  "HitObjectGetObjectToWorldNV\0" // IR(32731, 28)
  "HitObjectGetObjectRayDirectionNV\0" // IR(32759, 33)
  "HitObjectGetObjectRayOriginNV\0" // IR(32792, 30)
  "HitObjectTraceRayMotionNV\0" // IR(32822, 26)
  "HitObjectGetShaderRecordBufferHandleNV\0" // IR(32848, 39)
  "HitObjectGetShaderBindingTableRecordIndexNV\0" // IR(32887, 44)
  "HitObjectRecordEmptyNV\0" // IR(32931, 23)
  "HitObjectTraceRayNV\0" // IR(32954, 20)
  "HitObjectRecordHitNV\0" // IR(32974, 21)
  "HitObjectRecordHitWithIndexNV\0" // IR(32995, 30)
  "HitObjectRecordMissNV\0" // IR(33025, 22)
  "HitObjectExecuteShaderNV\0" // IR(33047, 25)
  "HitObjectGetCurrentTimeNV\0" // IR(33072, 26)
  "HitObjectGetAttributesNV\0" // IR(33098, 25)
  "HitObjectGetHitKindNV\0" // IR(33123, 22)
  "HitObjectGetPrimitiveIndexNV\0" // IR(33145, 29)
  "HitObjectGetGeometryIndexNV\0" // IR(33174, 28)
  "HitObjectGetInstanceIdNV\0" // IR(33202, 25)
  "HitObjectGetInstanceCustomIndexNV\0" // IR(33227, 34)
  "HitObjectGetWorldRayDirectionNV\0" // IR(33261, 32)
  "HitObjectGetWorldRayOriginNV\0" // IR(33293, 29)
  "HitObjectGetRayTMaxNV\0" // IR(33322, 22)
  "HitObjectGetRayTMinNV\0" // IR(33344, 22)
  "HitObjectIsEmptyNV\0" // IR(33366, 19)
  "HitObjectIsHitNV\0" // IR(33385, 17)
  "HitObjectIsMissNV\0" // IR(33402, 18)
  "ReorderThreadWithHitObjectNV\0" // IR(33420, 29)
  "ReorderThreadWithHintNV\0" // IR(33449, 24)
  "TypeHitObjectNV\0" // IR(33473, 16)
  "ImageSampleFootprintNV\0" // IR(33489, 23)
  "TypeCooperativeVectorNV\0" // IR(33512, 24)
  "CooperativeVectorMatrixMulNV\0" // IR(33536, 29)
  "CooperativeVectorOuterProductAccumulateNV\0" // IR(33565, 42)
  "CooperativeVectorReduceSumAccumulateNV\0" // IR(33607, 39)
  "CooperativeVectorMatrixMulAddNV\0" // IR(33646, 32)
  "CooperativeMatrixConvertNV\0" // IR(33678, 27)
  "EmitMeshTasksEXT\0" // IR(33705, 17)
  "SetMeshOutputsEXT\0" // IR(33722, 18)
  "GroupNonUniformPartitionNV\0" // IR(33740, 27)
  "WritePackedPrimitiveIndices4x8NV\0" // IR(33767, 33)
  "FetchMicroTriangleVertexPositionNV\0" // IR(33800, 35)
  "FetchMicroTriangleVertexBarycentricNV\0" // IR(33835, 38)
  "CooperativeVectorLoadNV\0" // IR(33873, 24)
  "CooperativeVectorStoreNV\0" // IR(33897, 25)
  "ReportIntersectionKHR\0" // IR(33922, 22)
  "ReportIntersectionNV\0" // IR(33944, 21)
  "IgnoreIntersectionNV\0" // IR(33965, 21)
  "TerminateRayNV\0" // IR(33986, 15)
  "TraceNV\0" // IR(34001, 8)
  "TraceMotionNV\0" // IR(34009, 14)
  "TraceRayMotionNV\0" // IR(34023, 17)
  "RayQueryGetIntersectionTriangleVertexPositionsKHR\0" // IR(34040, 50)
  "TypeAccelerationStructureKHR\0" // IR(34090, 29)
  "TypeAccelerationStructureNV\0" // IR(34119, 28)
  "ExecuteCallableNV\0" // IR(34147, 18)
  "RayQueryGetClusterIdNV\0" // IR(34165, 23)
  "HitObjectGetClusterIdNV\0" // IR(34188, 24)
  "TypeCooperativeMatrixNV\0" // IR(34212, 24)
  "CooperativeMatrixLoadNV\0" // IR(34236, 24)
  "CooperativeMatrixStoreNV\0" // IR(34260, 25)
  "CooperativeMatrixMulAddNV\0" // IR(34285, 26)
  "CooperativeMatrixLengthNV\0" // IR(34311, 26)
  "BeginInvocationInterlockEXT\0" // IR(34337, 28)
  "EndInvocationInterlockEXT\0" // IR(34365, 26)
  "SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE\0" // IR(34391, 43)
  "CooperativeMatrixReduceNV\0" // IR(34434, 26)
  "SPV_OPERAND_TYPE_MEMORY_ACCESS\0" // IR(34460, 31)
  "SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS\0" // IR(34491, 44)
  "CooperativeMatrixLoadTensorNV\0" // IR(34535, 30)
  "CooperativeMatrixStoreTensorNV\0" // IR(34565, 31)
  "CooperativeMatrixPerElementOpNV\0" // IR(34596, 32)
  "TypeTensorLayoutNV\0" // IR(34628, 19)
  "TypeTensorViewNV\0" // IR(34647, 17)
  "CreateTensorLayoutNV\0" // IR(34664, 21)
  "TensorLayoutSetDimensionNV\0" // IR(34685, 27)
  "TensorLayoutSetStrideNV\0" // IR(34712, 24)
  "TensorLayoutSliceNV\0" // IR(34736, 20)
  "TensorLayoutSetClampValueNV\0" // IR(34756, 28)
  "CreateTensorViewNV\0" // IR(34784, 19)
  "TensorViewSetDimensionNV\0" // IR(34803, 25)
  "TensorViewSetStrideNV\0" // IR(34828, 22)
  "IsHelperInvocationEXT\0" // IR(34850, 22)
  "TensorViewSetClipNV\0" // IR(34872, 20)
  "TensorLayoutSetBlockSizeNV\0" // IR(34892, 27)
  "CooperativeMatrixTransposeNV\0" // IR(34919, 29)
  "ConvertUToImageNV\0" // IR(34948, 18)
  "ConvertUToSamplerNV\0" // IR(34966, 20)
  "ConvertImageToUNV\0" // IR(34986, 18)
  "ConvertSamplerToUNV\0" // IR(35004, 20)
  "ConvertUToSampledImageNV\0" // IR(35024, 25)
  "ConvertSampledImageToUNV\0" // IR(35049, 25)
  "SamplerImageAddressingModeNV\0" // IR(35074, 29)
  "SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS\0" // IR(35103, 52)
  "RawAccessChainNV\0" // IR(35155, 17)
  "RayQueryGetIntersectionSpherePositionNV\0" // IR(35172, 40)
  "RayQueryGetIntersectionSphereRadiusNV\0" // IR(35212, 38)
  "RayQueryGetIntersectionLSSPositionsNV\0" // IR(35250, 38)
  "RayQueryGetIntersectionLSSRadiiNV\0" // IR(35288, 34)
  "RayQueryGetIntersectionLSSHitValueNV\0" // IR(35322, 37)
  "HitObjectGetSpherePositionNV\0" // IR(35359, 29)
  "HitObjectGetSphereRadiusNV\0" // IR(35388, 27)
  "HitObjectGetLSSPositionsNV\0" // IR(35415, 27)
  "HitObjectGetLSSRadiiNV\0" // IR(35442, 23)
  "HitObjectIsSphereHitNV\0" // IR(35465, 23)
  "HitObjectIsLSSHitNV\0" // IR(35488, 20)
  "RayQueryIsSphereHitNV\0" // IR(35508, 22)
  "RayQueryIsLSSHitNV\0" // IR(35530, 19)
  "SubgroupShuffleDownINTEL\0" // IR(35549, 25)
  "SubgroupShuffleUpINTEL\0" // IR(35574, 23)
  "SubgroupShuffleXorINTEL\0" // IR(35597, 24)
  "SubgroupBlockReadINTEL\0" // IR(35621, 23)
  "SubgroupBlockWriteINTEL\0" // IR(35644, 24)
  "SubgroupImageBlockReadINTEL\0" // IR(35668, 28)
  "SubgroupImageBlockWriteINTEL\0" // IR(35696, 29)
  "SubgroupImageMediaBlockReadINTEL\0" // IR(35725, 33)
  "SubgroupImageMediaBlockWriteINTEL\0" // IR(35758, 34)
  "UCountLeadingZerosINTEL\0" // IR(35792, 24)
  "UCountTrailingZerosINTEL\0" // IR(35816, 25)
  "AbsISubINTEL\0" // IR(35841, 13)
  "AbsUSubINTEL\0" // IR(35854, 13)
  "IAddSatINTEL\0" // IR(35867, 13)
  "UAddSatINTEL\0" // IR(35880, 13)
  "IAverageINTEL\0" // IR(35893, 14)
  "UAverageINTEL\0" // IR(35907, 14)
  "IAverageRoundedINTEL\0" // IR(35921, 21)
  "UAverageRoundedINTEL\0" // IR(35942, 21)
  "ISubSatINTEL\0" // IR(35963, 13)
  "USubSatINTEL\0" // IR(35976, 13)
  "IMul32x16INTEL\0" // IR(35989, 15)
  "UMul32x16INTEL\0" // IR(36004, 15)
  "ConstantFunctionPointerINTEL\0" // IR(36019, 29)
  "FunctionPointerCallINTEL\0" // IR(36048, 25)
  "AsmTargetINTEL\0" // IR(36073, 15)
  "AsmCallINTEL\0" // IR(36088, 13)
  "AtomicFMinEXT\0" // IR(36101, 14)
  "AtomicFMaxEXT\0" // IR(36115, 14)
  "AssumeTrueKHR\0" // IR(36129, 14)
  "ExpectKHR\0" // IR(36143, 10)
  "DecorateString\0" // IR(36153, 15)
  "DecorateStringGOOGLE\0" // IR(36168, 21)
  "MemberDecorateString\0" // IR(36189, 21)
  "MemberDecorateStringGOOGLE\0" // IR(36210, 27)
  "VmeImageINTEL\0" // IR(36237, 14)
  "TypeVmeImageINTEL\0" // IR(36251, 18)
  "TypeAvcImePayloadINTEL\0" // IR(36269, 23)
  "TypeAvcRefPayloadINTEL\0" // IR(36292, 23)
  "TypeAvcSicPayloadINTEL\0" // IR(36315, 23)
  "TypeAvcMcePayloadINTEL\0" // IR(36338, 23)
  "TypeAvcMceResultINTEL\0" // IR(36361, 22)
  "TypeAvcImeResultINTEL\0" // IR(36383, 22)
  "TypeAvcImeResultSingleReferenceStreamoutINTEL\0" // IR(36405, 46)
  "TypeAvcImeResultDualReferenceStreamoutINTEL\0" // IR(36451, 44)
  "TypeAvcImeSingleReferenceStreaminINTEL\0" // IR(36495, 39)
  "TypeAvcImeDualReferenceStreaminINTEL\0" // IR(36534, 37)
  "TypeAvcRefResultINTEL\0" // IR(36571, 22)
  "TypeAvcSicResultINTEL\0" // IR(36593, 22)
  "SubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL\0" // IR(36615, 60)
  "SubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL\0" // IR(36675, 53)
  "SubgroupAvcMceGetDefaultInterShapePenaltyINTEL\0" // IR(36728, 47)
  "SubgroupAvcMceSetInterShapePenaltyINTEL\0" // IR(36775, 40)
  "SubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL\0" // IR(36815, 51)
  "SubgroupAvcMceSetInterDirectionPenaltyINTEL\0" // IR(36866, 44)
  "SubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL\0" // IR(36910, 51)
  "SubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL\0" // IR(36961, 56)
  "SubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL\0" // IR(37017, 50)
  "SubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL\0" // IR(37067, 52)
  "SubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL\0" // IR(37119, 49)
  "SubgroupAvcMceSetMotionVectorCostFunctionINTEL\0" // IR(37168, 47)
  "SubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL\0" // IR(37215, 50)
  "SubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL\0" // IR(37265, 51)
  "SubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL\0" // IR(37316, 56)
  "SubgroupAvcMceSetAcOnlyHaarINTEL\0" // IR(37372, 33)
  "SubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL\0" // IR(37405, 52)
  "SubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL\0" // IR(37457, 61)
  "SubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL\0" // IR(37518, 61)
  "SubgroupAvcMceConvertToImePayloadINTEL\0" // IR(37579, 39)
  "SubgroupAvcMceConvertToImeResultINTEL\0" // IR(37618, 38)
  "SubgroupAvcMceConvertToRefPayloadINTEL\0" // IR(37656, 39)
  "SubgroupAvcMceConvertToRefResultINTEL\0" // IR(37695, 38)
  "SubgroupAvcMceConvertToSicPayloadINTEL\0" // IR(37733, 39)
  "SubgroupAvcMceConvertToSicResultINTEL\0" // IR(37772, 38)
  "SubgroupAvcMceGetMotionVectorsINTEL\0" // IR(37810, 36)
  "SubgroupAvcMceGetInterDistortionsINTEL\0" // IR(37846, 39)
  "SubgroupAvcMceGetBestInterDistortionsINTEL\0" // IR(37885, 43)
  "SubgroupAvcMceGetInterMajorShapeINTEL\0" // IR(37928, 38)
  "SubgroupAvcMceGetInterMinorShapeINTEL\0" // IR(37966, 38)
  "SubgroupAvcMceGetInterDirectionsINTEL\0" // IR(38004, 38)
  "SubgroupAvcMceGetInterMotionVectorCountINTEL\0" // IR(38042, 45)
  "SubgroupAvcMceGetInterReferenceIdsINTEL\0" // IR(38087, 40)
  "SubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL\0" // IR(38127, 62)
  "SubgroupAvcImeInitializeINTEL\0" // IR(38189, 30)
  "SubgroupAvcImeSetSingleReferenceINTEL\0" // IR(38219, 38)
  "SubgroupAvcImeSetDualReferenceINTEL\0" // IR(38257, 36)
  "SubgroupAvcImeRefWindowSizeINTEL\0" // IR(38293, 33)
  "SubgroupAvcImeAdjustRefOffsetINTEL\0" // IR(38326, 35)
  "SubgroupAvcImeConvertToMcePayloadINTEL\0" // IR(38361, 39)
  "SubgroupAvcImeSetMaxMotionVectorCountINTEL\0" // IR(38400, 43)
  "SubgroupAvcImeSetUnidirectionalMixDisableINTEL\0" // IR(38443, 47)
  "SubgroupAvcImeSetEarlySearchTerminationThresholdINTEL\0" // IR(38490, 54)
  "SubgroupAvcImeSetWeightedSadINTEL\0" // IR(38544, 34)
  "SubgroupAvcImeEvaluateWithSingleReferenceINTEL\0" // IR(38578, 47)
  "SubgroupAvcImeEvaluateWithDualReferenceINTEL\0" // IR(38625, 45)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL\0" // IR(38670, 55)
  "SubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL\0" // IR(38725, 53)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL\0" // IR(38778, 56)
  "SubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL\0" // IR(38834, 54)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL\0" // IR(38888, 58)
  "SubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL\0" // IR(38946, 56)
  "SubgroupAvcImeConvertToMceResultINTEL\0" // IR(39002, 38)
  "SubgroupAvcImeGetSingleReferenceStreaminINTEL\0" // IR(39040, 46)
  "SubgroupAvcImeGetDualReferenceStreaminINTEL\0" // IR(39086, 44)
  "SubgroupAvcImeStripSingleReferenceStreamoutINTEL\0" // IR(39130, 49)
  "SubgroupAvcImeStripDualReferenceStreamoutINTEL\0" // IR(39179, 47)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL\0" // IR(39226, 70)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL\0" // IR(39296, 68)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL\0" // IR(39364, 69)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL\0" // IR(39433, 68)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL\0" // IR(39501, 66)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL\0" // IR(39567, 67)
  "SubgroupAvcImeGetBorderReachedINTEL\0" // IR(39634, 36)
  "SubgroupAvcImeGetTruncatedSearchIndicationINTEL\0" // IR(39670, 48)
  "SubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL\0" // IR(39718, 59)
  "SubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL\0" // IR(39777, 58)
  "SubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL\0" // IR(39835, 56)
  "SubgroupAvcFmeInitializeINTEL\0" // IR(39891, 30)
  "SubgroupAvcBmeInitializeINTEL\0" // IR(39921, 30)
  "SubgroupAvcRefConvertToMcePayloadINTEL\0" // IR(39951, 39)
  "SubgroupAvcRefSetBidirectionalMixDisableINTEL\0" // IR(39990, 46)
  "SubgroupAvcRefSetBilinearFilterEnableINTEL\0" // IR(40036, 43)
  "SubgroupAvcRefEvaluateWithSingleReferenceINTEL\0" // IR(40079, 47)
  "SubgroupAvcRefEvaluateWithDualReferenceINTEL\0" // IR(40126, 45)
  "SubgroupAvcRefEvaluateWithMultiReferenceINTEL\0" // IR(40171, 46)
  "SubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL\0" // IR(40217, 56)
  "SubgroupAvcRefConvertToMceResultINTEL\0" // IR(40273, 38)
  "SubgroupAvcSicInitializeINTEL\0" // IR(40311, 30)
  "SubgroupAvcSicConfigureSkcINTEL\0" // IR(40341, 32)
  "SubgroupAvcSicConfigureIpeLumaINTEL\0" // IR(40373, 36)
  "SubgroupAvcSicConfigureIpeLumaChromaINTEL\0" // IR(40409, 42)
  "SubgroupAvcSicGetMotionVectorMaskINTEL\0" // IR(40451, 39)
  "SubgroupAvcSicConvertToMcePayloadINTEL\0" // IR(40490, 39)
  "SubgroupAvcSicSetIntraLumaShapePenaltyINTEL\0" // IR(40529, 44)
  "SubgroupAvcSicSetIntraLumaModeCostFunctionINTEL\0" // IR(40573, 48)
  "SubgroupAvcSicSetIntraChromaModeCostFunctionINTEL\0" // IR(40621, 50)
  "SubgroupAvcSicSetBilinearFilterEnableINTEL\0" // IR(40671, 43)
  "SubgroupAvcSicSetSkcForwardTransformEnableINTEL\0" // IR(40714, 48)
  "SubgroupAvcSicSetBlockBasedRawSkipSadINTEL\0" // IR(40762, 43)
  "SubgroupAvcSicEvaluateIpeINTEL\0" // IR(40805, 31)
  "SubgroupAvcSicEvaluateWithSingleReferenceINTEL\0" // IR(40836, 47)
  "SubgroupAvcSicEvaluateWithDualReferenceINTEL\0" // IR(40883, 45)
  "SubgroupAvcSicEvaluateWithMultiReferenceINTEL\0" // IR(40928, 46)
  "SubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL\0" // IR(40974, 56)
  "SubgroupAvcSicConvertToMceResultINTEL\0" // IR(41030, 38)
  "SubgroupAvcSicGetIpeLumaShapeINTEL\0" // IR(41068, 35)
  "SubgroupAvcSicGetBestIpeLumaDistortionINTEL\0" // IR(41103, 44)
  "SubgroupAvcSicGetBestIpeChromaDistortionINTEL\0" // IR(41147, 46)
  "SubgroupAvcSicGetPackedIpeLumaModesINTEL\0" // IR(41193, 41)
  "SubgroupAvcSicGetIpeChromaModeINTEL\0" // IR(41234, 36)
  "SubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL\0" // IR(41270, 50)
  "SubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL\0" // IR(41320, 48)
  "SubgroupAvcSicGetInterRawSadsINTEL\0" // IR(41368, 35)
  "SaveMemoryINTEL\0" // IR(41403, 16)
  "RestoreMemoryINTEL\0" // IR(41419, 19)
  "ArbitraryFloatSinCosPiINTEL\0" // IR(41438, 28)
  "ArbitraryFloatCastINTEL\0" // IR(41466, 24)
  "ArbitraryFloatCastFromIntINTEL\0" // IR(41490, 31)
  "ArbitraryFloatCastToIntINTEL\0" // IR(41521, 29)
  "ArbitraryFloatAddINTEL\0" // IR(41550, 23)
  "ArbitraryFloatSubINTEL\0" // IR(41573, 23)
  "ArbitraryFloatMulINTEL\0" // IR(41596, 23)
  "ArbitraryFloatDivINTEL\0" // IR(41619, 23)
  "ArbitraryFloatGTINTEL\0" // IR(41642, 22)
  "ArbitraryFloatGEINTEL\0" // IR(41664, 22)
  "ArbitraryFloatLTINTEL\0" // IR(41686, 22)
  "ArbitraryFloatLEINTEL\0" // IR(41708, 22)
  "ArbitraryFloatEQINTEL\0" // IR(41730, 22)
  "ArbitraryFloatRecipINTEL\0" // IR(41752, 25)
  "ArbitraryFloatRSqrtINTEL\0" // IR(41777, 25)
  "ArbitraryFloatCbrtINTEL\0" // IR(41802, 24)
  "ArbitraryFloatHypotINTEL\0" // IR(41826, 25)
  "ArbitraryFloatSqrtINTEL\0" // IR(41851, 24)
  "ArbitraryFloatLogINTEL\0" // IR(41875, 23)
  "ArbitraryFloatLog2INTEL\0" // IR(41898, 24)
  "ArbitraryFloatLog10INTEL\0" // IR(41922, 25)
  "ArbitraryFloatLog1pINTEL\0" // IR(41947, 25)
  "ArbitraryFloatExpINTEL\0" // IR(41972, 23)
  "ArbitraryFloatExp2INTEL\0" // IR(41995, 24)
  "ArbitraryFloatExp10INTEL\0" // IR(42019, 25)
  "ArbitraryFloatExpm1INTEL\0" // IR(42044, 25)
  "ArbitraryFloatSinINTEL\0" // IR(42069, 23)
  "ArbitraryFloatCosINTEL\0" // IR(42092, 23)
  "ArbitraryFloatSinCosINTEL\0" // IR(42115, 26)
  "ArbitraryFloatSinPiINTEL\0" // IR(42141, 25)
  "ArbitraryFloatCosPiINTEL\0" // IR(42166, 25)
  "ArbitraryFloatASinINTEL\0" // IR(42191, 24)
  "ArbitraryFloatASinPiINTEL\0" // IR(42215, 26)
  "ArbitraryFloatACosINTEL\0" // IR(42241, 24)
  "ArbitraryFloatACosPiINTEL\0" // IR(42265, 26)
  "ArbitraryFloatATanINTEL\0" // IR(42291, 24)
  "ArbitraryFloatATanPiINTEL\0" // IR(42315, 26)
  "ArbitraryFloatATan2INTEL\0" // IR(42341, 25)
  "ArbitraryFloatPowINTEL\0" // IR(42366, 23)
  "ArbitraryFloatPowRINTEL\0" // IR(42389, 24)
  "ArbitraryFloatPowNINTEL\0" // IR(42413, 24)
  "LoopControlINTEL\0" // IR(42437, 17)
  "AliasDomainDeclINTEL\0" // IR(42454, 21)
  "AliasScopeDeclINTEL\0" // IR(42475, 20)
  "AliasScopeListDeclINTEL\0" // IR(42495, 24)
  "FixedSqrtINTEL\0" // IR(42519, 15)
  "FixedRecipINTEL\0" // IR(42534, 16)
  "FixedRsqrtINTEL\0" // IR(42550, 16)
  "FixedSinINTEL\0" // IR(42566, 14)
  "FixedCosINTEL\0" // IR(42580, 14)
  "FixedSinCosINTEL\0" // IR(42594, 17)
  "FixedSinPiINTEL\0" // IR(42611, 16)
  "FixedCosPiINTEL\0" // IR(42627, 16)
  "FixedSinCosPiINTEL\0" // IR(42643, 19)
  "FixedLogINTEL\0" // IR(42662, 14)
  "FixedExpINTEL\0" // IR(42676, 14)
  "PtrCastToCrossWorkgroupINTEL\0" // IR(42690, 29)
  "CrossWorkgroupCastToPtrINTEL\0" // IR(42719, 29)
  "ReadPipeBlockingINTEL\0" // IR(42748, 22)
  "WritePipeBlockingINTEL\0" // IR(42770, 23)
  "RayQueryGetRayTMinKHR\0" // IR(42793, 22)
  "RayQueryGetRayFlagsKHR\0" // IR(42815, 23)
  "RayQueryGetIntersectionTKHR\0" // IR(42838, 28)
  "RayQueryGetIntersectionInstanceCustomIndexKHR\0" // IR(42866, 46)
  "RayQueryGetIntersectionInstanceIdKHR\0" // IR(42912, 37)
  "RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR\0" // IR(42949, 65)
  "RayQueryGetIntersectionGeometryIndexKHR\0" // IR(43014, 40)
  "RayQueryGetIntersectionPrimitiveIndexKHR\0" // IR(43054, 41)
  "RayQueryGetIntersectionBarycentricsKHR\0" // IR(43095, 39)
  "RayQueryGetIntersectionFrontFaceKHR\0" // IR(43134, 36)
  "RayQueryGetIntersectionCandidateAABBOpaqueKHR\0" // IR(43170, 46)
  "RayQueryGetIntersectionObjectRayDirectionKHR\0" // IR(43216, 45)
  "RayQueryGetIntersectionObjectRayOriginKHR\0" // IR(43261, 42)
  "RayQueryGetWorldRayDirectionKHR\0" // IR(43303, 32)
  "RayQueryGetWorldRayOriginKHR\0" // IR(43335, 29)
  "RayQueryGetIntersectionObjectToWorldKHR\0" // IR(43364, 40)
  "RayQueryGetIntersectionWorldToObjectKHR\0" // IR(43404, 40)
  "AtomicFAddEXT\0" // IR(43444, 14)
  "TypeBufferSurfaceINTEL\0" // IR(43458, 23)
  "TypeStructContinuedINTEL\0" // IR(43481, 25)
  "ConstantCompositeContinuedINTEL\0" // IR(43506, 32)
  "SpecConstantCompositeContinuedINTEL\0" // IR(43538, 36)
  "CompositeConstructContinuedINTEL\0" // IR(43574, 33)
  "ConvertFToBF16INTEL\0" // IR(43607, 20)
  "ConvertBF16ToFINTEL\0" // IR(43627, 20)
  "ControlBarrierArriveINTEL\0" // IR(43647, 26)
  "ControlBarrierWaitINTEL\0" // IR(43673, 24)
  "TaskSequenceCreateINTEL\0" // IR(43697, 24)
  "TaskSequenceAsyncINTEL\0" // IR(43721, 23)
  "TaskSequenceGetINTEL\0" // IR(43744, 21)
  "TaskSequenceReleaseINTEL\0" // IR(43765, 25)
  "TypeTaskSequenceINTEL\0" // IR(43790, 22)
  "SubgroupBlockPrefetchINTEL\0" // IR(43812, 27)
  "Subgroup2DBlockLoadINTEL\0" // IR(43839, 25)
  "Subgroup2DBlockLoadTransformINTEL\0" // IR(43864, 34)
  "Subgroup2DBlockLoadTransposeINTEL\0" // IR(43898, 34)
  "Subgroup2DBlockPrefetchINTEL\0" // IR(43932, 29)
  "Subgroup2DBlockStoreINTEL\0" // IR(43961, 26)
  "SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS\0" // IR(43987, 62)
  "BitwiseFunctionINTEL\0" // IR(44049, 21)
  "GroupIMulKHR\0" // IR(44070, 13)
  "GroupFMulKHR\0" // IR(44083, 13)
  "GroupBitwiseAndKHR\0" // IR(44096, 19)
  "GroupBitwiseOrKHR\0" // IR(44115, 18)
  "GroupBitwiseXorKHR\0" // IR(44133, 19)
  "GroupLogicalAndKHR\0" // IR(44152, 19)
  "GroupLogicalOrKHR\0" // IR(44171, 18)
  "GroupLogicalXorKHR\0" // IR(44189, 19)
  "RoundFToTF32INTEL\0" // IR(44208, 18)
  "MaskedGatherINTEL\0" // IR(44226, 18)
  "MaskedScatterINTEL\0" // IR(44244, 19)
  "DebugInfoNone\0" // IR(44263, 14)
  "DebugCompilationUnit\0" // IR(44277, 21)
  "SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING\0" // IR(44298, 52)
  "DebugTypeBasic\0" // IR(44350, 15)
  "SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS\0" // IR(44365, 34)
  "DebugTypePointer\0" // IR(44399, 17)
  "SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER\0" // IR(44416, 38)
  "DebugTypeQualifier\0" // IR(44454, 19)
  "DebugTypeArray\0" // IR(44473, 15)
  "DebugTypeVector\0" // IR(44488, 16)
  "DebugTypedef\0" // IR(44504, 13)
  "DebugTypeFunction\0" // IR(44517, 18)
  "DebugTypeEnum\0" // IR(44535, 14)
  "SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE\0" // IR(44549, 38)
  "DebugTypeComposite\0" // IR(44587, 19)
  "DebugTypeMember\0" // IR(44606, 16)
  "DebugTypeInheritance\0" // IR(44622, 21)
  "DebugTypePtrToMember\0" // IR(44643, 21)
  "DebugTypeTemplate\0" // IR(44664, 18)
  "DebugTypeTemplateParameter\0" // IR(44682, 27)
  "DebugTypeTemplateTemplateParameter\0" // IR(44709, 35)
  "DebugTypeTemplateParameterPack\0" // IR(44744, 31)
  "DebugGlobalVariable\0" // IR(44775, 20)
  "DebugFunctionDeclaration\0" // IR(44795, 25)
  "DebugFunction\0" // IR(44820, 14)
  "DebugLexicalBlock\0" // IR(44834, 18)
  "DebugLexicalBlockDiscriminator\0" // IR(44852, 31)
  "DebugScope\0" // IR(44883, 11)
  "DebugNoScope\0" // IR(44894, 13)
  "DebugInlinedAt\0" // IR(44907, 15)
  "SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER\0" // IR(44922, 42)
  "DebugLocalVariable\0" // IR(44964, 19)
  "DebugInlinedVariable\0" // IR(44983, 21)
  "DebugDeclare\0" // IR(45004, 13)
  "DebugValue\0" // IR(45017, 11)
  "SPV_OPERAND_TYPE_DEBUG_OPERATION\0" // IR(45028, 33)
  "DebugOperation\0" // IR(45061, 15)
  "DebugExpression\0" // IR(45076, 16)
  "DebugMacroDef\0" // IR(45092, 14)
  "DebugMacroUndef\0" // IR(45106, 16)
  "Round\0" // IR(45122, 6)
  "RoundEven\0" // IR(45128, 10)
  "Trunc\0" // IR(45138, 6)
  "FAbs\0" // IR(45144, 5)
  "SAbs\0" // IR(45149, 5)
  "FSign\0" // IR(45154, 6)
  "SSign\0" // IR(45160, 6)
  "Floor\0" // IR(45166, 6)
  "Ceil\0" // IR(45172, 5)
  "Fract\0" // IR(45177, 6)
  "Radians\0" // IR(45183, 8)
  "Degrees\0" // IR(45191, 8)
  "Sin\0" // IR(45199, 4)
  "Cos\0" // IR(45203, 4)
  "Tan\0" // IR(45207, 4)
  "Asin\0" // IR(45211, 5)
  "Acos\0" // IR(45216, 5)
  "Atan\0" // IR(45221, 5)
  "Sinh\0" // IR(45226, 5)
  "Cosh\0" // IR(45231, 5)
  "Tanh\0" // IR(45236, 5)
  "Asinh\0" // IR(45241, 6)
  "Acosh\0" // IR(45247, 6)
  "Atanh\0" // IR(45253, 6)
  "Atan2\0" // IR(45259, 6)
  "Pow\0" // IR(45265, 4)
  "Exp\0" // IR(45269, 4)
  "Log\0" // IR(45273, 4)
  "Exp2\0" // IR(45277, 5)
  "Log2\0" // IR(45282, 5)
  "Sqrt\0" // IR(45287, 5)
  "InverseSqrt\0" // IR(45292, 12)
  "Determinant\0" // IR(45304, 12)
  "MatrixInverse\0" // IR(45316, 14)
  "Modf\0" // IR(45330, 5)
  "ModfStruct\0" // IR(45335, 11)
  "FMin\0" // IR(45346, 5)
  "UMin\0" // IR(45351, 5)
  "SMin\0" // IR(45356, 5)
  "FMax\0" // IR(45361, 5)
  "UMax\0" // IR(45366, 5)
  "SMax\0" // IR(45371, 5)
  "FClamp\0" // IR(45376, 7)
  "UClamp\0" // IR(45383, 7)
  "SClamp\0" // IR(45390, 7)
  "FMix\0" // IR(45397, 5)
  "IMix\0" // IR(45402, 5)
  "Step\0" // IR(45407, 5)
  "SmoothStep\0" // IR(45412, 11)
  "Fma\0" // IR(45423, 4)
  "Frexp\0" // IR(45427, 6)
  "FrexpStruct\0" // IR(45433, 12)
  "Ldexp\0" // IR(45445, 6)
  "PackSnorm4x8\0" // IR(45451, 13)
  "PackUnorm4x8\0" // IR(45464, 13)
  "PackSnorm2x16\0" // IR(45477, 14)
  "PackUnorm2x16\0" // IR(45491, 14)
  "PackHalf2x16\0" // IR(45505, 13)
  "PackDouble2x32\0" // IR(45518, 15)
  "UnpackSnorm2x16\0" // IR(45533, 16)
  "UnpackUnorm2x16\0" // IR(45549, 16)
  "UnpackHalf2x16\0" // IR(45565, 15)
  "UnpackSnorm4x8\0" // IR(45580, 15)
  "UnpackUnorm4x8\0" // IR(45595, 15)
  "UnpackDouble2x32\0" // IR(45610, 17)
  "Length\0" // IR(45627, 7)
  "Distance\0" // IR(45634, 9)
  "Cross\0" // IR(45643, 6)
  "Normalize\0" // IR(45649, 10)
  "FaceForward\0" // IR(45659, 12)
  "Reflect\0" // IR(45671, 8)
  "Refract\0" // IR(45679, 8)
  "FindILsb\0" // IR(45687, 9)
  "FindSMsb\0" // IR(45696, 9)
  "FindUMsb\0" // IR(45705, 9)
  "InterpolateAtCentroid\0" // IR(45714, 22)
  "InterpolateAtSample\0" // IR(45736, 20)
  "InterpolateAtOffset\0" // IR(45756, 20)
  "NMin\0" // IR(45776, 5)
  "NMax\0" // IR(45781, 5)
  "NClamp\0" // IR(45786, 7)
  "ArgumentInfo\0" // IR(45793, 13)
  "ArgumentStorageBuffer\0" // IR(45806, 22)
  "ArgumentUniform\0" // IR(45828, 16)
  "ArgumentPodStorageBuffer\0" // IR(45844, 25)
  "ArgumentPodUniform\0" // IR(45869, 19)
  "ArgumentPodPushConstant\0" // IR(45888, 24)
  "ArgumentSampledImage\0" // IR(45912, 21)
  "ArgumentStorageImage\0" // IR(45933, 21)
  "ArgumentSampler\0" // IR(45954, 16)
  "ArgumentWorkgroup\0" // IR(45970, 18)
  "SpecConstantWorkgroupSize\0" // IR(45988, 26)
  "SpecConstantGlobalOffset\0" // IR(46014, 25)
  "SpecConstantWorkDim\0" // IR(46039, 20)
  "PushConstantGlobalOffset\0" // IR(46059, 25)
  "PushConstantEnqueuedLocalSize\0" // IR(46084, 30)
  "PushConstantGlobalSize\0" // IR(46114, 23)
  "PushConstantRegionOffset\0" // IR(46137, 25)
  "PushConstantNumWorkgroups\0" // IR(46162, 26)
  "PushConstantRegionGroupOffset\0" // IR(46188, 30)
  "ConstantDataStorageBuffer\0" // IR(46218, 26)
  "ConstantDataUniform\0" // IR(46244, 20)
  "PropertyRequiredWorkgroupSize\0" // IR(46264, 30)
  "SpecConstantSubgroupMaxSize\0" // IR(46294, 28)
  "ArgumentPointerPushConstant\0" // IR(46322, 28)
  "ArgumentPointerUniform\0" // IR(46350, 23)
  "ProgramScopeVariablesStorageBuffer\0" // IR(46373, 35)
  "ProgramScopeVariablePointerRelocation\0" // IR(46408, 38)
  "ImageArgumentInfoChannelOrderPushConstant\0" // IR(46446, 42)
  "ImageArgumentInfoChannelDataTypePushConstant\0" // IR(46488, 45)
  "ImageArgumentInfoChannelOrderUniform\0" // IR(46533, 37)
  "ImageArgumentInfoChannelDataTypeUniform\0" // IR(46570, 40)
  "ArgumentStorageTexelBuffer\0" // IR(46610, 27)
  "ArgumentUniformTexelBuffer\0" // IR(46637, 27)
  "ConstantDataPointerPushConstant\0" // IR(46664, 32)
  "ProgramScopeVariablePointerPushConstant\0" // IR(46696, 40)
  "PrintfInfo\0" // IR(46736, 11)
  "PrintfBufferStorageBuffer\0" // IR(46747, 26)
  "PrintfBufferPointerPushConstant\0" // IR(46773, 32)
  "NormalizedSamplerMaskPushConstant\0" // IR(46805, 34)
  "WorkgroupVariableSize\0" // IR(46839, 22)
  "DebugImportedEntity\0" // IR(46861, 20)
  "DebugSource\0" // IR(46881, 12)
  "DebugFunctionDefinition\0" // IR(46893, 24)
  "DebugSourceContinued\0" // IR(46917, 21)
  "DebugLine\0" // IR(46938, 10)
  "DebugNoLine\0" // IR(46948, 12)
  "DebugBuildIdentifier\0" // IR(46960, 21)
  "DebugStoragePath\0" // IR(46981, 17)
  "DebugEntryPoint\0" // IR(46998, 16)
  "DebugTypeMatrix\0" // IR(47014, 16)
  "Configuration\0" // IR(47030, 14)
  "StartCounter\0" // IR(47044, 13)
  "StopCounter\0" // IR(47057, 12)
  "PushConstants\0" // IR(47069, 14)
  "SpecializationMapEntry\0" // IR(47083, 23)
  "DescriptorSetBuffer\0" // IR(47106, 20)
  "DescriptorSetImage\0" // IR(47126, 19)
  "DescriptorSetSampler\0" // IR(47145, 21)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING\0" // IR(47166, 63)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS\0" // IR(47229, 45)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER\0" // IR(47274, 49)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE\0" // IR(47323, 49)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION\0" // IR(47372, 44)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY\0" // IR(47416, 50)
  "DebugModuleINTEL\0" // IR(47466, 17)
  "acos\0" // IR(47483, 5)
  "acosh\0" // IR(47488, 6)
  "acospi\0" // IR(47494, 7)
  "asin\0" // IR(47501, 5)
  "asinh\0" // IR(47506, 6)
  "asinpi\0" // IR(47512, 7)
  "atan\0" // IR(47519, 5)
  "atan2\0" // IR(47524, 6)
  "atanh\0" // IR(47530, 6)
  "atanpi\0" // IR(47536, 7)
  "atan2pi\0" // IR(47543, 8)
  "cbrt\0" // IR(47551, 5)
  "ceil\0" // IR(47556, 5)
  "copysign\0" // IR(47561, 9)
  "cos\0" // IR(47570, 4)
  "cosh\0" // IR(47574, 5)
  "cospi\0" // IR(47579, 6)
  "erfc\0" // IR(47585, 5)
  "erf\0" // IR(47590, 4)
  "exp\0" // IR(47594, 4)
  "exp2\0" // IR(47598, 5)
  "exp10\0" // IR(47603, 6)
  "expm1\0" // IR(47609, 6)
  "fabs\0" // IR(47615, 5)
  "fdim\0" // IR(47620, 5)
  "floor\0" // IR(47625, 6)
  "fma\0" // IR(47631, 4)
  "fmax\0" // IR(47635, 5)
  "fmin\0" // IR(47640, 5)
  "fmod\0" // IR(47645, 5)
  "fract\0" // IR(47650, 6)
  "frexp\0" // IR(47656, 6)
  "hypot\0" // IR(47662, 6)
  "ilogb\0" // IR(47668, 6)
  "ldexp\0" // IR(47674, 6)
  "lgamma\0" // IR(47680, 7)
  "lgamma_r\0" // IR(47687, 9)
  "log\0" // IR(47696, 4)
  "log2\0" // IR(47700, 5)
  "log10\0" // IR(47705, 6)
  "log1p\0" // IR(47711, 6)
  "logb\0" // IR(47717, 5)
  "mad\0" // IR(47722, 4)
  "maxmag\0" // IR(47726, 7)
  "minmag\0" // IR(47733, 7)
  "modf\0" // IR(47740, 5)
  "nan\0" // IR(47745, 4)
  "nextafter\0" // IR(47749, 10)
  "pow\0" // IR(47759, 4)
  "pown\0" // IR(47763, 5)
  "powr\0" // IR(47768, 5)
  "remainder\0" // IR(47773, 10)
  "remquo\0" // IR(47783, 7)
  "rint\0" // IR(47790, 5)
  "rootn\0" // IR(47795, 6)
  "round\0" // IR(47801, 6)
  "rsqrt\0" // IR(47807, 6)
  "sin\0" // IR(47813, 4)
  "sincos\0" // IR(47817, 7)
  "sinh\0" // IR(47824, 5)
  "sinpi\0" // IR(47829, 6)
  "sqrt\0" // IR(47835, 5)
  "tan\0" // IR(47840, 4)
  "tanh\0" // IR(47844, 5)
  "tanpi\0" // IR(47849, 6)
  "tgamma\0" // IR(47855, 7)
  "trunc\0" // IR(47862, 6)
  "half_cos\0" // IR(47868, 9)
  "half_divide\0" // IR(47877, 12)
  "half_exp\0" // IR(47889, 9)
  "half_exp2\0" // IR(47898, 10)
  "half_exp10\0" // IR(47908, 11)
  "half_log\0" // IR(47919, 9)
  "half_log2\0" // IR(47928, 10)
  "half_log10\0" // IR(47938, 11)
  "half_powr\0" // IR(47949, 10)
  "half_recip\0" // IR(47959, 11)
  "half_rsqrt\0" // IR(47970, 11)
  "half_sin\0" // IR(47981, 9)
  "half_sqrt\0" // IR(47990, 10)
  "half_tan\0" // IR(48000, 9)
  "native_cos\0" // IR(48009, 11)
  "native_divide\0" // IR(48020, 14)
  "native_exp\0" // IR(48034, 11)
  "native_exp2\0" // IR(48045, 12)
  "native_exp10\0" // IR(48057, 13)
  "native_log\0" // IR(48070, 11)
  "native_log2\0" // IR(48081, 12)
  "native_log10\0" // IR(48093, 13)
  "native_powr\0" // IR(48106, 12)
  "native_recip\0" // IR(48118, 13)
  "native_rsqrt\0" // IR(48131, 13)
  "native_sin\0" // IR(48144, 11)
  "native_sqrt\0" // IR(48155, 12)
  "native_tan\0" // IR(48167, 11)
  "fclamp\0" // IR(48178, 7)
  "degrees\0" // IR(48185, 8)
  "fmax_common\0" // IR(48193, 12)
  "fmin_common\0" // IR(48205, 12)
  "mix\0" // IR(48217, 4)
  "radians\0" // IR(48221, 8)
  "step\0" // IR(48229, 5)
  "smoothstep\0" // IR(48234, 11)
  "sign\0" // IR(48245, 5)
  "cross\0" // IR(48250, 6)
  "distance\0" // IR(48256, 9)
  "length\0" // IR(48265, 7)
  "normalize\0" // IR(48272, 10)
  "fast_distance\0" // IR(48282, 14)
  "fast_length\0" // IR(48296, 12)
  "fast_normalize\0" // IR(48308, 15)
  "s_abs\0" // IR(48323, 6)
  "s_abs_diff\0" // IR(48329, 11)
  "s_add_sat\0" // IR(48340, 10)
  "u_add_sat\0" // IR(48350, 10)
  "s_hadd\0" // IR(48360, 7)
  "u_hadd\0" // IR(48367, 7)
  "s_rhadd\0" // IR(48374, 8)
  "u_rhadd\0" // IR(48382, 8)
  "s_clamp\0" // IR(48390, 8)
  "u_clamp\0" // IR(48398, 8)
  "clz\0" // IR(48406, 4)
  "ctz\0" // IR(48410, 4)
  "s_mad_hi\0" // IR(48414, 9)
  "u_mad_sat\0" // IR(48423, 10)
  "s_mad_sat\0" // IR(48433, 10)
  "s_max\0" // IR(48443, 6)
  "u_max\0" // IR(48449, 6)
  "s_min\0" // IR(48455, 6)
  "u_min\0" // IR(48461, 6)
  "s_mul_hi\0" // IR(48467, 9)
  "rotate\0" // IR(48476, 7)
  "s_sub_sat\0" // IR(48483, 10)
  "u_sub_sat\0" // IR(48493, 10)
  "u_upsample\0" // IR(48503, 11)
  "s_upsample\0" // IR(48514, 11)
  "popcount\0" // IR(48525, 9)
  "s_mad24\0" // IR(48534, 8)
  "u_mad24\0" // IR(48542, 8)
  "s_mul24\0" // IR(48550, 8)
  "u_mul24\0" // IR(48558, 8)
  "vloadn\0" // IR(48566, 7)
  "vstoren\0" // IR(48573, 8)
  "vload_half\0" // IR(48581, 11)
  "vload_halfn\0" // IR(48592, 12)
  "vstore_half\0" // IR(48604, 12)
  "vstore_half_r\0" // IR(48616, 14)
  "vstore_halfn\0" // IR(48630, 13)
  "vstore_halfn_r\0" // IR(48643, 15)
  "vloada_halfn\0" // IR(48658, 13)
  "vstorea_halfn\0" // IR(48671, 14)
  "vstorea_halfn_r\0" // IR(48685, 16)
  "shuffle\0" // IR(48701, 8)
  "shuffle2\0" // IR(48709, 9)
  "printf\0" // IR(48718, 7)
  "prefetch\0" // IR(48725, 9)
  "bitselect\0" // IR(48734, 10)
  "select\0" // IR(48744, 7)
  "u_abs\0" // IR(48751, 6)
  "u_abs_diff\0" // IR(48757, 11)
  "u_mul_hi\0" // IR(48768, 9)
  "u_mad_hi\0" // IR(48777, 9)
  "CubeFaceIndexAMD\0" // IR(48786, 17)
  "CubeFaceCoordAMD\0" // IR(48803, 17)
  "TimeAMD\0" // IR(48820, 8)
  "SwizzleInvocationsAMD\0" // IR(48828, 22)
  "SwizzleInvocationsMaskedAMD\0" // IR(48850, 28)
  "WriteInvocationAMD\0" // IR(48878, 19)
  "MbcntAMD\0" // IR(48897, 9)
  "InterpolateAtVertexAMD\0" // IR(48906, 23)
  "FMin3AMD\0" // IR(48929, 9)
  "UMin3AMD\0" // IR(48938, 9)
  "SMin3AMD\0" // IR(48947, 9)
  "FMax3AMD\0" // IR(48956, 9)
  "UMax3AMD\0" // IR(48965, 9)
  "SMax3AMD\0" // IR(48974, 9)
  "FMid3AMD\0" // IR(48983, 9)
  "UMid3AMD\0" // IR(48992, 9)
  "SMid3AMD\0" // IR(49001, 9)
;

// Array of IndexRanges, where each represents a string by referencing
// the kStrings table.
// This array contains all sequences of alias strings used in the grammar.
// This table is referenced by an IndexRange elsewhere, i.e. by the 'aliases'
// field of an instruction or operand description.
static const IndexRange kAliasSpans[] = {
  IR(4568, 27), // 0 PhysicalStorageBuffer64EXT
  IR(5479, 18), // 1 SubgroupEqMaskKHR
  IR(5534, 18), // 2 SubgroupGeMaskKHR
  IR(5567, 18), // 3 SubgroupGtMaskKHR
  IR(5600, 18), // 4 SubgroupLeMaskKHR
  IR(5633, 18), // 5 SubgroupLtMaskKHR
  IR(6491, 12), // 6 BaryCoordNV
  IR(6546, 19), // 7 BaryCoordNoPerspNV
  IR(6577, 15), // 8 FragmentSizeNV
  IR(6634, 22), // 9 InvocationsPerPixelNV
  IR(6762, 11), // 10 LaunchIdNV
  IR(6787, 13), // 11 LaunchSizeNV
  IR(6818, 17), // 12 WorldRayOriginNV
  IR(6856, 20), // 13 WorldRayDirectionNV
  IR(6895, 18), // 14 ObjectRayOriginNV
  IR(6935, 21), // 15 ObjectRayDirectionNV
  IR(6967, 10), // 16 RayTminNV
  IR(6988, 10), // 17 RayTmaxNV
  IR(7021, 22), // 18 InstanceCustomIndexNV
  IR(7060, 16), // 19 ObjectToWorldNV
  IR(7093, 16), // 20 WorldToObjectNV
  IR(7127, 10), // 21 HitKindNV
  IR(7358, 19), // 22 IncomingRayFlagsNV
  IR(8979, 28), // 23 StorageUniformBufferBlock16
  IR(9042, 17), // 24 StorageUniform16
  IR(9805, 27), // 25 ShaderViewportIndexLayerNV
  IR(9849, 22), // 26 FragmentBarycentricNV
  IR(9902, 30), // 27 ComputeDerivativeGroupQuadsNV
  IR(9932, 14), // 28 ShadingRateNV
  IR(9992, 20), // 29 ShaderNonUniformEXT
  IR(10035, 26), // 30 RuntimeDescriptorArrayEXT
  IR(10097, 39), // 31 InputAttachmentArrayDynamicIndexingEXT
  IR(10175, 42), // 32 UniformTexelBufferArrayDynamicIndexingEXT
  IR(10256, 42), // 33 StorageTexelBufferArrayDynamicIndexingEXT
  IR(10335, 40), // 34 UniformBufferArrayNonUniformIndexingEXT
  IR(10411, 39), // 35 SampledImageArrayNonUniformIndexingEXT
  IR(10487, 40), // 36 StorageBufferArrayNonUniformIndexingEXT
  IR(10563, 39), // 37 StorageImageArrayNonUniformIndexingEXT
  IR(10641, 42), // 38 InputAttachmentArrayNonUniformIndexingEXT
  IR(10725, 45), // 39 UniformTexelBufferArrayNonUniformIndexingEXT
  IR(10812, 45), // 40 StorageTexelBufferArrayNonUniformIndexingEXT
  IR(10875, 21), // 41 VulkanMemoryModelKHR
  IR(10925, 32), // 42 VulkanMemoryModelDeviceScopeKHR
  IR(10957, 34), // 43 PhysicalStorageBufferAddressesEXT
  IR(11023, 31), // 44 ComputeDerivativeGroupLinearNV
  IR(11227, 28), // 45 DemoteToHelperInvocationEXT
  IR(12697, 22), // 46 DotProductInputAllKHR
  IR(12741, 25), // 47 DotProductInput4x8BitKHR
  IR(12794, 31), // 48 DotProductInput4x8BitPackedKHR
  IR(12836, 14), // 49 DotProductKHR
  IR(13001, 13), // 50 OptNoneINTEL
  IR(15933, 15), // 51 PerPrimitiveNV
  IR(15981, 12), // 52 PerVertexNV
  IR(16004, 14), // 53 NonUniformEXT
  IR(16034, 19), // 54 RestrictPointerEXT
  IR(16068, 18), // 55 AliasedPointerEXT
  IR(16378, 24), // 56 HlslCounterBufferGOOGLE
  IR(16415, 19), // 57 HlslSemanticGOOGLE
  IR(19089, 14), // 58 OutputLinesNV
  IR(19123, 19), // 59 OutputPrimitivesNV
  IR(19166, 23), // 60 DerivativeGroupQuadsNV
  IR(19214, 24), // 61 DerivativeGroupLinearNV
  IR(19257, 18), // 62 OutputTrianglesNV
  IR(20005, 16), // 63 RayGenerationNV
  IR(20037, 15), // 64 IntersectionNV
  IR(20062, 9), // 65 AnyHitNV
  IR(20085, 13), // 66 ClosestHitNV
  IR(20106, 7), // 67 MissNV
  IR(20125, 11), // 68 CallableNV
  IR(20242, 23), // 69 AllowContractFastINTEL
  IR(20278, 18), // 70 AllowReassocINTEL
  IR(20732, 22), // 71 MakeTexelAvailableKHR
  IR(20771, 20), // 72 MakeTexelVisibleKHR
  IR(20807, 19), // 73 NonPrivateTexelKHR
  IR(20840, 17), // 74 VolatileTexelKHR
  IR(22217, 24), // 75 MakePointerAvailableKHR
  IR(22260, 22), // 76 MakePointerVisibleKHR
  IR(22300, 21), // 77 NonPrivatePointerKHR
  IR(22387, 10), // 78 VulkanKHR
  IR(13749, 5), // 79 None
  IR(22570, 16), // 80 OutputMemoryKHR
  IR(22600, 17), // 81 MakeAvailableKHR
  IR(22629, 15), // 82 MakeVisibleKHR
  IR(22705, 28), // 83 PackedVectorFormat4x8BitKHR
  IR(23020, 24), // 84 SkipBuiltinPrimitivesNV
  IR(23760, 15), // 85 QueueFamilyKHR
  IR(24131, 15), // 86 CallableDataNV
  IR(24170, 23), // 87 IncomingCallableDataNV
  IR(24207, 13), // 88 RayPayloadNV
  IR(24236, 15), // 89 HitAttributeNV
  IR(24273, 21), // 90 IncomingRayPayloadNV
  IR(24316, 21), // 91 ShaderRecordBufferNV
  IR(24359, 25), // 92 PhysicalStorageBufferEXT
  IR(31361, 8), // 93 SDotKHR
  IR(31374, 8), // 94 UDotKHR
  IR(31388, 9), // 95 SUDotKHR
  IR(31408, 14), // 96 SDotAccSatKHR
  IR(31433, 14), // 97 UDotAccSatKHR
  IR(31459, 15), // 98 SUDotAccSatKHR
  IR(33944, 21), // 99 ReportIntersectionNV
  IR(34119, 28), // 100 TypeAccelerationStructureNV
  IR(36168, 21), // 101 DecorateStringGOOGLE
  IR(36210, 27), // 102 MemberDecorateStringGOOGLE
};

// Array of capabilities, referenced by IndexRanges elsewhere.
// Contains all sequences of capabilities used in the grammar.
static const spv::Capability kCapabilitySpans[] = {
  spv::Capability::Kernel, // 0
  spv::Capability::Addresses, // 1
  spv::Capability::PhysicalStorageBufferAddresses, // 2
  spv::Capability::Shader, // 3
  spv::Capability::ClipDistance, // 4
  spv::Capability::CullDistance, // 5
  spv::Capability::Geometry, // 6
  spv::Capability::Tessellation, // 7
  spv::Capability::RayTracingNV, // 8
  spv::Capability::RayTracingKHR, // 9
  spv::Capability::MeshShadingNV, // 10
  spv::Capability::MeshShadingEXT, // 11
  spv::Capability::Geometry, // 12
  spv::Capability::Tessellation, // 13
  spv::Capability::Geometry, // 14
  spv::Capability::ShaderLayer, // 15
  spv::Capability::ShaderViewportIndexLayerEXT, // 16
  spv::Capability::MeshShadingNV, // 17
  spv::Capability::MeshShadingEXT, // 18
  spv::Capability::MultiViewport, // 19
  spv::Capability::ShaderViewportIndex, // 20
  spv::Capability::ShaderViewportIndexLayerEXT, // 21
  spv::Capability::MeshShadingNV, // 22
  spv::Capability::MeshShadingEXT, // 23
  spv::Capability::Tessellation, // 24
  spv::Capability::SampleRateShading, // 25
  spv::Capability::Kernel, // 26
  spv::Capability::GroupNonUniform, // 27
  spv::Capability::SubgroupBallotKHR, // 28
  spv::Capability::Kernel, // 29
  spv::Capability::GroupNonUniform, // 30
  spv::Capability::CoreBuiltinsARM, // 31
  spv::Capability::SubgroupBallotKHR, // 32
  spv::Capability::GroupNonUniformBallot, // 33
  spv::Capability::DrawParameters, // 34
  spv::Capability::DrawParameters, // 35
  spv::Capability::MeshShadingNV, // 36
  spv::Capability::MeshShadingEXT, // 37
  spv::Capability::FragmentShadingRateKHR, // 38
  spv::Capability::DeviceGroup, // 39
  spv::Capability::MultiView, // 40
  spv::Capability::TileShadingQCOM, // 41
  spv::Capability::StencilExportEXT, // 42
  spv::Capability::ShaderEnqueueAMDX, // 43
  spv::Capability::ShaderViewportMaskNV, // 44
  spv::Capability::MeshShadingNV, // 45
  spv::Capability::ShaderStereoViewNV, // 46
  spv::Capability::PerViewAttributesNV, // 47
  spv::Capability::MeshShadingNV, // 48
  spv::Capability::FragmentFullyCoveredEXT, // 49
  spv::Capability::MeshShadingNV, // 50
  spv::Capability::FragmentBarycentricKHR, // 51
  spv::Capability::FragmentDensityEXT, // 52
  spv::Capability::MeshShadingEXT, // 53
  spv::Capability::RayTracingNV, // 54
  spv::Capability::RayTracingKHR, // 55
  spv::Capability::RayTracingNV, // 56
  spv::Capability::RayTracingMotionBlurNV, // 57
  spv::Capability::RayTracingPositionFetchKHR, // 58
  spv::Capability::RayTracingDisplacementMicromapNV, // 59
  spv::Capability::RayTracingKHR, // 60
  spv::Capability::RayTracingSpheresGeometryNV, // 61
  spv::Capability::RayTracingLinearSweptSpheresGeometryNV, // 62
  spv::Capability::ShaderSMBuiltinsNV, // 63
  spv::Capability::RayTracingClusterAccelerationStructureNV, // 64
  spv::Capability::RayCullMaskKHR, // 65
  spv::Capability::Matrix, // 66
  spv::Capability::Int64, // 67
  spv::Capability::ImageBasic, // 68
  spv::Capability::Geometry, // 69
  spv::Capability::SampledCubeArray, // 70
  spv::Capability::SampledRect, // 71
  spv::Capability::Sampled1D, // 72
  spv::Capability::SampledBuffer, // 73
  spv::Capability::DeviceEnqueue, // 74
  spv::Capability::Pipes, // 75
  spv::Capability::GroupNonUniform, // 76
  spv::Capability::WorkgroupMemoryExplicitLayoutKHR, // 77
  spv::Capability::StorageBuffer16BitAccess, // 78
  spv::Capability::VariablePointersStorageBuffer, // 79
  spv::Capability::AtomicStorage, // 80
  spv::Capability::StorageBuffer8BitAccess, // 81
  spv::Capability::RayQueryKHR, // 82
  spv::Capability::RayTracingKHR, // 83
  spv::Capability::BFloat16TypeKHR, // 84
  spv::Capability::BFloat16TypeKHR, // 85
  spv::Capability::CooperativeMatrixKHR, // 86
  spv::Capability::MultiViewport, // 87
  spv::Capability::ShaderViewportIndexLayerEXT, // 88
  spv::Capability::ShaderViewportMaskNV, // 89
  spv::Capability::InputAttachment, // 90
  spv::Capability::ImageBuffer, // 91
  spv::Capability::ShaderNonUniform, // 92
  spv::Capability::InputAttachment, // 93
  spv::Capability::ShaderNonUniform, // 94
  spv::Capability::SampledBuffer, // 95
  spv::Capability::ShaderNonUniform, // 96
  spv::Capability::ImageBuffer, // 97
  spv::Capability::ShaderNonUniform, // 98
  spv::Capability::VectorAnyINTEL, // 99
  spv::Capability::Int8, // 100
  spv::Capability::FPGAClusterAttributesINTEL, // 101
  spv::Capability::FPGAKernelAttributesINTEL, // 102
  spv::Capability::Subgroup2DBlockIOINTEL, // 103
  spv::Capability::Shader, // 104
  spv::Capability::Kernel, // 105
  spv::Capability::Shader, // 106
  spv::Capability::UniformDecoration, // 107
  spv::Capability::GeometryStreams, // 108
  spv::Capability::TransformFeedback, // 109
  spv::Capability::Kernel, // 110
  spv::Capability::FloatControls2, // 111
  spv::Capability::Linkage, // 112
  spv::Capability::SampleMaskOverrideCoverageNV, // 113
  spv::Capability::GeometryShaderPassthroughNV, // 114
  spv::Capability::MeshShadingNV, // 115
  spv::Capability::MeshShadingEXT, // 116
  spv::Capability::ShaderInvocationReorderNV, // 117
  spv::Capability::BindlessTextureNV, // 118
  spv::Capability::VectorComputeINTEL, // 119
  spv::Capability::IndirectReferencesINTEL, // 120
  spv::Capability::AsmINTEL, // 121
  spv::Capability::FunctionFloatControlINTEL, // 122
  spv::Capability::FPGAMemoryAttributesINTEL, // 123
  spv::Capability::FPGAMemoryAccessesINTEL, // 124
  spv::Capability::LoopFuseINTEL, // 125
  spv::Capability::FPGADSPControlINTEL, // 126
  spv::Capability::MemoryAccessAliasingINTEL, // 127
  spv::Capability::FPGAInvocationPipeliningAttributesINTEL, // 128
  spv::Capability::FPGABufferLocationINTEL, // 129
  spv::Capability::IOPipesINTEL, // 130
  spv::Capability::FPGAClusterAttributesV2INTEL, // 131
  spv::Capability::FPMaxErrorINTEL, // 132
  spv::Capability::FPGALatencyControlINTEL, // 133
  spv::Capability::FPGAArgumentInterfacesINTEL, // 134
  spv::Capability::GlobalVariableHostAccessINTEL, // 135
  spv::Capability::GlobalVariableFPGADecorationsINTEL, // 136
  spv::Capability::CacheControlsINTEL, // 137
  spv::Capability::TileImageColorReadAccessEXT, // 138
  spv::Capability::Geometry, // 139
  spv::Capability::Tessellation, // 140
  spv::Capability::MeshShadingNV, // 141
  spv::Capability::MeshShadingEXT, // 142
  spv::Capability::Geometry, // 143
  spv::Capability::MeshShadingNV, // 144
  spv::Capability::MeshShadingEXT, // 145
  spv::Capability::SubgroupDispatch, // 146
  spv::Capability::TileImageDepthReadAccessEXT, // 147
  spv::Capability::TileImageStencilReadAccessEXT, // 148
  spv::Capability::SampleMaskPostDepthCoverage, // 149
  spv::Capability::DenormPreserve, // 150
  spv::Capability::DenormFlushToZero, // 151
  spv::Capability::SignedZeroInfNanPreserve, // 152
  spv::Capability::RoundingModeRTE, // 153
  spv::Capability::RoundingModeRTZ, // 154
  spv::Capability::QuadControlKHR, // 155
  spv::Capability::ComputeDerivativeGroupQuadsNV, // 156
  spv::Capability::ComputeDerivativeGroupQuadsKHR, // 157
  spv::Capability::ComputeDerivativeGroupLinearNV, // 158
  spv::Capability::ComputeDerivativeGroupLinearKHR, // 159
  spv::Capability::FragmentShaderPixelInterlockEXT, // 160
  spv::Capability::FragmentShaderSampleInterlockEXT, // 161
  spv::Capability::FragmentShaderShadingRateInterlockEXT, // 162
  spv::Capability::RoundToInfinityINTEL, // 163
  spv::Capability::KernelAttributesINTEL, // 164
  spv::Capability::FloatControls2, // 165
  spv::Capability::FPGAKernelAttributesv2INTEL, // 166
  spv::Capability::RegisterLimitsINTEL, // 167
  spv::Capability::FloatControls2, // 168
  spv::Capability::FPFastMathModeINTEL, // 169
  spv::Capability::OptNoneEXT, // 170
  spv::Capability::RuntimeAlignedAttributeINTEL, // 171
  spv::Capability::Kernel, // 172
  spv::Capability::GroupNonUniformArithmetic, // 173
  spv::Capability::GroupNonUniformBallot, // 174
  spv::Capability::GroupNonUniformClustered, // 175
  spv::Capability::GroupNonUniformPartitionedNV, // 176
  spv::Capability::ImageGatherExtended, // 177
  spv::Capability::MinLod, // 178
  spv::Capability::VulkanMemoryModel, // 179
  spv::Capability::FPGALoopControlsINTEL, // 180
  spv::Capability::ArbitraryPrecisionFixedPointINTEL, // 181
  spv::Capability::RawAccessChainsNV, // 182
  spv::Capability::RayTraversalPrimitiveCullingKHR, // 183
  spv::Capability::RayTracingOpacityMicromapEXT, // 184
  spv::Capability::RayQueryKHR, // 185
  spv::Capability::StorageImageExtendedFormats, // 186
  spv::Capability::Int64ImageEXT, // 187
  spv::Capability::Shader, // 188
  spv::Capability::VectorComputeINTEL, // 189
  spv::Capability::GenericPointer, // 190
  spv::Capability::FunctionPointersINTEL, // 191
  spv::Capability::USMStorageClassesINTEL, // 192
  spv::Capability::CooperativeMatrixTensorAddressingNV, // 193
  spv::Capability::CooperativeMatrixBlockLoadsNV, // 194
  spv::Capability::Addresses, // 195
  spv::Capability::PhysicalStorageBufferAddresses, // 196
  spv::Capability::LiteralSampler, // 197
  spv::Capability::Addresses, // 198
  spv::Capability::UntypedPointersKHR, // 199
  spv::Capability::Addresses, // 200
  spv::Capability::VariablePointers, // 201
  spv::Capability::VariablePointersStorageBuffer, // 202
  spv::Capability::PhysicalStorageBufferAddresses, // 203
  spv::Capability::Kernel, // 204
  spv::Capability::ImageQuery, // 205
  spv::Capability::ImageQuery, // 206
  spv::Capability::Shader, // 207
  spv::Capability::BitInstructions, // 208
  spv::Capability::DerivativeControl, // 209
  spv::Capability::Groups, // 210
  spv::Capability::SparseResidency, // 211
  spv::Capability::PipeStorage, // 212
  spv::Capability::NamedBarrier, // 213
  spv::Capability::GroupNonUniformVote, // 214
  spv::Capability::GroupNonUniformBallot, // 215
  spv::Capability::GroupNonUniformShuffle, // 216
  spv::Capability::GroupNonUniformShuffleRelative, // 217
  spv::Capability::GroupNonUniformArithmetic, // 218
  spv::Capability::GroupNonUniformClustered, // 219
  spv::Capability::GroupNonUniformPartitionedNV, // 220
  spv::Capability::GroupNonUniformQuad, // 221
  spv::Capability::Addresses, // 222
  spv::Capability::VariablePointers, // 223
  spv::Capability::VariablePointersStorageBuffer, // 224
  spv::Capability::UntypedPointersKHR, // 225
  spv::Capability::SubgroupBallotKHR, // 226
  spv::Capability::SubgroupVoteKHR, // 227
  spv::Capability::GroupNonUniformRotateKHR, // 228
  spv::Capability::RayTracingKHR, // 229
  spv::Capability::RayQueryKHR, // 230
  spv::Capability::DotProduct, // 231
  spv::Capability::CooperativeMatrixKHR, // 232
  spv::Capability::ReplicatedCompositesEXT, // 233
  spv::Capability::TextureSampleWeightedQCOM, // 234
  spv::Capability::TextureBoxFilterQCOM, // 235
  spv::Capability::TextureBlockMatchQCOM, // 236
  spv::Capability::TextureBlockMatch2QCOM, // 237
  spv::Capability::FragmentMaskAMD, // 238
  spv::Capability::ShaderClockKHR, // 239
  spv::Capability::ShaderInvocationReorderNV, // 240
  spv::Capability::RayTracingMotionBlurNV, // 241
  spv::Capability::ImageFootprintNV, // 242
  spv::Capability::CooperativeVectorNV, // 243
  spv::Capability::CooperativeVectorTrainingNV, // 244
  spv::Capability::CooperativeMatrixConversionsNV, // 245
  spv::Capability::DisplacementMicromapNV, // 246
  spv::Capability::RayQueryPositionFetchKHR, // 247
  spv::Capability::RayTracingNV, // 248
  spv::Capability::RayTracingKHR, // 249
  spv::Capability::RayQueryKHR, // 250
  spv::Capability::DisplacementMicromapNV, // 251
  spv::Capability::CooperativeMatrixNV, // 252
  spv::Capability::FragmentShaderSampleInterlockEXT, // 253
  spv::Capability::FragmentShaderPixelInterlockEXT, // 254
  spv::Capability::FragmentShaderShadingRateInterlockEXT, // 255
  spv::Capability::CooperativeMatrixReductionsNV, // 256
  spv::Capability::CooperativeMatrixPerElementOperationsNV, // 257
  spv::Capability::TensorAddressingNV, // 258
  spv::Capability::DemoteToHelperInvocation, // 259
  spv::Capability::SubgroupShuffleINTEL, // 260
  spv::Capability::SubgroupBufferBlockIOINTEL, // 261
  spv::Capability::SubgroupImageBlockIOINTEL, // 262
  spv::Capability::SubgroupImageMediaBlockIOINTEL, // 263
  spv::Capability::IntegerFunctions2INTEL, // 264
  spv::Capability::AtomicFloat16MinMaxEXT, // 265
  spv::Capability::AtomicFloat32MinMaxEXT, // 266
  spv::Capability::AtomicFloat64MinMaxEXT, // 267
  spv::Capability::AtomicFloat16VectorNV, // 268
  spv::Capability::ExpectAssumeKHR, // 269
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 270
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 271
  spv::Capability::SubgroupAvcMotionEstimationIntraINTEL, // 272
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 273
  spv::Capability::SubgroupAvcMotionEstimationChromaINTEL, // 274
  spv::Capability::VariableLengthArrayINTEL, // 275
  spv::Capability::ArbitraryPrecisionFloatingPointINTEL, // 276
  spv::Capability::UnstructuredLoopControlsINTEL, // 277
  spv::Capability::BlockingPipesINTEL, // 278
  spv::Capability::FPGARegINTEL, // 279
  spv::Capability::AtomicFloat16AddEXT, // 280
  spv::Capability::AtomicFloat32AddEXT, // 281
  spv::Capability::AtomicFloat64AddEXT, // 282
  spv::Capability::AtomicFloat16VectorNV, // 283
  spv::Capability::LongCompositesINTEL, // 284
  spv::Capability::BFloat16ConversionINTEL, // 285
  spv::Capability::SplitBarrierINTEL, // 286
  spv::Capability::ArithmeticFenceEXT, // 287
  spv::Capability::TaskSequenceINTEL, // 288
  spv::Capability::SubgroupBufferPrefetchINTEL, // 289
  spv::Capability::Subgroup2DBlockTransformINTEL, // 290
  spv::Capability::Subgroup2DBlockTransposeINTEL, // 291
  spv::Capability::SubgroupMatrixMultiplyAccumulateINTEL, // 292
  spv::Capability::TernaryBitwiseFunctionINTEL, // 293
  spv::Capability::GroupUniformArithmeticKHR, // 294
  spv::Capability::TensorFloat32RoundingINTEL, // 295
  spv::Capability::MaskedGatherScatterINTEL, // 296
  spv::Capability::Float64, // 297
  spv::Capability::InterpolationFunction, // 298
};

// Array of extensions, referenced by IndexRanges elsewhere.
// Contains all sequences of extensions used in the grammar.
static const spvtools::Extension kExtensionSpans[] = {
  spvtools::Extension::kSPV_EXT_physical_storage_buffer, // 0
  spvtools::Extension::kSPV_KHR_physical_storage_buffer, // 1
  spvtools::Extension::kSPV_KHR_shader_ballot, // 2
  spvtools::Extension::kSPV_KHR_shader_draw_parameters, // 3
  spvtools::Extension::kSPV_EXT_mesh_shader, // 4
  spvtools::Extension::kSPV_KHR_shader_draw_parameters, // 5
  spvtools::Extension::kSPV_NV_mesh_shader, // 6
  spvtools::Extension::kSPV_KHR_fragment_shading_rate, // 7
  spvtools::Extension::kSPV_KHR_device_group, // 8
  spvtools::Extension::kSPV_KHR_multiview, // 9
  spvtools::Extension::kSPV_AMD_shader_explicit_vertex_parameter, // 10
  spvtools::Extension::kSPV_EXT_shader_stencil_export, // 11
  spvtools::Extension::kSPV_NV_mesh_shader, // 12
  spvtools::Extension::kSPV_NV_viewport_array2, // 13
  spvtools::Extension::kSPV_NV_stereo_view_rendering, // 14
  spvtools::Extension::kSPV_NVX_multiview_per_view_attributes, // 15
  spvtools::Extension::kSPV_NV_mesh_shader, // 16
  spvtools::Extension::kSPV_EXT_fragment_fully_covered, // 17
  spvtools::Extension::kSPV_NV_mesh_shader, // 18
  spvtools::Extension::kSPV_KHR_fragment_shader_barycentric, // 19
  spvtools::Extension::kSPV_NV_fragment_shader_barycentric, // 20
  spvtools::Extension::kSPV_EXT_fragment_invocation_density, // 21
  spvtools::Extension::kSPV_NV_shading_rate, // 22
  spvtools::Extension::kSPV_EXT_mesh_shader, // 23
  spvtools::Extension::kSPV_KHR_ray_tracing, // 24
  spvtools::Extension::kSPV_NV_ray_tracing, // 25
  spvtools::Extension::kSPV_NV_ray_tracing, // 26
  spvtools::Extension::kSPV_NV_ray_tracing_motion_blur, // 27
  spvtools::Extension::kSPV_KHR_ray_tracing, // 28
  spvtools::Extension::kSPV_NV_linear_swept_spheres, // 29
  spvtools::Extension::kSPV_NV_shader_sm_builtins, // 30
  spvtools::Extension::kSPV_NV_cluster_acceleration_structure, // 31
  spvtools::Extension::kSPV_KHR_ray_cull_mask, // 32
  spvtools::Extension::kSPV_AMD_shader_ballot, // 33
  spvtools::Extension::kSPV_ARM_core_builtins, // 34
  spvtools::Extension::kSPV_EXT_shader_tile_image, // 35
  spvtools::Extension::kSPV_ARM_cooperative_matrix_layouts, // 36
  spvtools::Extension::kSPV_KHR_workgroup_memory_explicit_layout, // 37
  spvtools::Extension::kSPV_KHR_subgroup_vote, // 38
  spvtools::Extension::kSPV_KHR_16bit_storage, // 39
  spvtools::Extension::kSPV_KHR_variable_pointers, // 40
  spvtools::Extension::kSPV_KHR_shader_atomic_counter_ops, // 41
  spvtools::Extension::kSPV_KHR_post_depth_coverage, // 42
  spvtools::Extension::kSPV_KHR_8bit_storage, // 43
  spvtools::Extension::kSPV_KHR_float_controls, // 44
  spvtools::Extension::kSPV_KHR_ray_query, // 45
  spvtools::Extension::kSPV_KHR_untyped_pointers, // 46
  spvtools::Extension::kSPV_KHR_ray_query, // 47
  spvtools::Extension::kSPV_KHR_ray_tracing, // 48
  spvtools::Extension::kSPV_QCOM_image_processing, // 49
  spvtools::Extension::kSPV_QCOM_tile_shading, // 50
  spvtools::Extension::kSPV_QCOM_image_processing2, // 51
  spvtools::Extension::kSPV_AMD_gpu_shader_half_float_fetch, // 52
  spvtools::Extension::kSPV_AMD_texture_gather_bias_lod, // 53
  spvtools::Extension::kSPV_AMD_shader_fragment_mask, // 54
  spvtools::Extension::kSPV_AMD_shader_image_load_store_lod, // 55
  spvtools::Extension::kSPV_EXT_shader_image_int64, // 56
  spvtools::Extension::kSPV_KHR_shader_clock, // 57
  spvtools::Extension::kSPV_AMDX_shader_enqueue, // 58
  spvtools::Extension::kSPV_KHR_quad_control, // 59
  spvtools::Extension::kSPV_KHR_bfloat16, // 60
  spvtools::Extension::kSPV_NV_sample_mask_override_coverage, // 61
  spvtools::Extension::kSPV_NV_geometry_shader_passthrough, // 62
  spvtools::Extension::kSPV_EXT_shader_viewport_index_layer, // 63
  spvtools::Extension::kSPV_NV_viewport_array2, // 64
  spvtools::Extension::kSPV_NV_viewport_array2, // 65
  spvtools::Extension::kSPV_NVX_multiview_per_view_attributes, // 66
  spvtools::Extension::kSPV_NV_shader_image_footprint, // 67
  spvtools::Extension::kSPV_KHR_compute_shader_derivatives, // 68
  spvtools::Extension::kSPV_NV_compute_shader_derivatives, // 69
  spvtools::Extension::kSPV_NV_shader_subgroup_partitioned, // 70
  spvtools::Extension::kSPV_EXT_descriptor_indexing, // 71
  spvtools::Extension::kSPV_KHR_ray_tracing_position_fetch, // 72
  spvtools::Extension::kSPV_KHR_vulkan_memory_model, // 73
  spvtools::Extension::kSPV_NV_cooperative_matrix, // 74
  spvtools::Extension::kSPV_EXT_fragment_shader_interlock, // 75
  spvtools::Extension::kSPV_EXT_demote_to_helper_invocation, // 76
  spvtools::Extension::kSPV_NV_displacement_micromap, // 77
  spvtools::Extension::kSPV_EXT_opacity_micromap, // 78
  spvtools::Extension::kSPV_NV_shader_invocation_reorder, // 79
  spvtools::Extension::kSPV_NV_bindless_texture, // 80
  spvtools::Extension::kSPV_NV_cooperative_vector, // 81
  spvtools::Extension::kSPV_NV_shader_atomic_fp16_vector, // 82
  spvtools::Extension::kSPV_NV_raw_access_chains, // 83
  spvtools::Extension::kSPV_NV_cooperative_matrix2, // 84
  spvtools::Extension::kSPV_NV_tensor_addressing, // 85
  spvtools::Extension::kSPV_INTEL_subgroups, // 86
  spvtools::Extension::kSPV_INTEL_media_block_io, // 87
  spvtools::Extension::kSPV_INTEL_float_controls2, // 88
  spvtools::Extension::kSPV_INTEL_shader_integer_functions2, // 89
  spvtools::Extension::kSPV_INTEL_function_pointers, // 90
  spvtools::Extension::kSPV_INTEL_inline_assembly, // 91
  spvtools::Extension::kSPV_EXT_shader_atomic_float_min_max, // 92
  spvtools::Extension::kSPV_INTEL_vector_compute, // 93
  spvtools::Extension::kSPV_KHR_expect_assume, // 94
  spvtools::Extension::kSPV_INTEL_device_side_avc_motion_estimation, // 95
  spvtools::Extension::kSPV_INTEL_variable_length_array, // 96
  spvtools::Extension::kSPV_INTEL_fpga_memory_attributes, // 97
  spvtools::Extension::kSPV_INTEL_fp_fast_math_mode, // 98
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_integers, // 99
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_floating_point, // 100
  spvtools::Extension::kSPV_INTEL_unstructured_loop_controls, // 101
  spvtools::Extension::kSPV_INTEL_fpga_loop_controls, // 102
  spvtools::Extension::kSPV_INTEL_kernel_attributes, // 103
  spvtools::Extension::kSPV_INTEL_fpga_memory_accesses, // 104
  spvtools::Extension::kSPV_INTEL_fpga_cluster_attributes, // 105
  spvtools::Extension::kSPV_INTEL_loop_fuse, // 106
  spvtools::Extension::kSPV_INTEL_fpga_dsp_control, // 107
  spvtools::Extension::kSPV_INTEL_memory_access_aliasing, // 108
  spvtools::Extension::kSPV_INTEL_fpga_invocation_pipelining_attributes, // 109
  spvtools::Extension::kSPV_INTEL_fpga_buffer_location, // 110
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_fixed_point, // 111
  spvtools::Extension::kSPV_INTEL_usm_storage_classes, // 112
  spvtools::Extension::kSPV_INTEL_runtime_aligned, // 113
  spvtools::Extension::kSPV_INTEL_io_pipes, // 114
  spvtools::Extension::kSPV_INTEL_blocking_pipes, // 115
  spvtools::Extension::kSPV_INTEL_fpga_reg, // 116
  spvtools::Extension::kSPV_KHR_integer_dot_product, // 117
  spvtools::Extension::kSPV_KHR_cooperative_matrix, // 118
  spvtools::Extension::kSPV_EXT_replicated_composites, // 119
  spvtools::Extension::kSPV_KHR_bit_instructions, // 120
  spvtools::Extension::kSPV_KHR_subgroup_rotate, // 121
  spvtools::Extension::kSPV_KHR_float_controls2, // 122
  spvtools::Extension::kSPV_EXT_shader_atomic_float_add, // 123
  spvtools::Extension::kSPV_INTEL_long_composites, // 124
  spvtools::Extension::kSPV_EXT_optnone, // 125
  spvtools::Extension::kSPV_INTEL_optnone, // 126
  spvtools::Extension::kSPV_EXT_shader_atomic_float16_add, // 127
  spvtools::Extension::kSPV_INTEL_debug_module, // 128
  spvtools::Extension::kSPV_INTEL_bfloat16_conversion, // 129
  spvtools::Extension::kSPV_INTEL_split_barrier, // 130
  spvtools::Extension::kSPV_EXT_arithmetic_fence, // 131
  spvtools::Extension::kSPV_INTEL_task_sequence, // 132
  spvtools::Extension::kSPV_INTEL_fp_max_error, // 133
  spvtools::Extension::kSPV_INTEL_fpga_latency_control, // 134
  spvtools::Extension::kSPV_INTEL_fpga_argument_interfaces, // 135
  spvtools::Extension::kSPV_INTEL_global_variable_host_access, // 136
  spvtools::Extension::kSPV_INTEL_global_variable_fpga_decorations, // 137
  spvtools::Extension::kSPV_INTEL_subgroup_buffer_prefetch, // 138
  spvtools::Extension::kSPV_INTEL_2d_block_io, // 139
  spvtools::Extension::kSPV_INTEL_subgroup_matrix_multiply_accumulate, // 140
  spvtools::Extension::kSPV_INTEL_ternary_bitwise_function, // 141
  spvtools::Extension::kSPV_KHR_uniform_group_instructions, // 142
  spvtools::Extension::kSPV_INTEL_tensor_float32_conversion, // 143
  spvtools::Extension::kSPV_INTEL_masked_gather_scatter, // 144
  spvtools::Extension::kSPV_INTEL_cache_controls, // 145
  spvtools::Extension::kSPV_INTEL_maximum_registers, // 146
  spvtools::Extension::kSPV_KHR_no_integer_wrap_decoration, // 147
  spvtools::Extension::kSPV_EXT_mesh_shader, // 148
  spvtools::Extension::kSPV_NV_mesh_shader, // 149
  spvtools::Extension::kSPV_GOOGLE_hlsl_functionality1, // 150
  spvtools::Extension::kSPV_GOOGLE_user_type, // 151
  spvtools::Extension::kSPV_KHR_subgroup_uniform_control_flow, // 152
  spvtools::Extension::kSPV_AMD_shader_early_and_late_fragment_tests, // 153
  spvtools::Extension::kSPV_AMD_shader_early_and_late_fragment_tests, // 154
  spvtools::Extension::kSPV_EXT_shader_stencil_export, // 155
  spvtools::Extension::kSPV_KHR_maximal_reconvergence, // 156
  spvtools::Extension::kSPV_KHR_linkonce_odr, // 157
  spvtools::Extension::kSPV_KHR_storage_buffer_storage_class, // 158
  spvtools::Extension::kSPV_KHR_variable_pointers, // 159
  spvtools::Extension::kSPV_KHR_terminate_invocation, // 160
  spvtools::Extension::kSPV_KHR_relaxed_extended_instruction, // 161
  spvtools::Extension::kSPV_KHR_ray_tracing, // 162
  spvtools::Extension::kSPV_KHR_ray_query, // 163
  spvtools::Extension::kSPV_NV_ray_tracing, // 164
  spvtools::Extension::kSPV_KHR_ray_tracing, // 165
  spvtools::Extension::kSPV_NV_ray_tracing, // 166
  spvtools::Extension::kSPV_KHR_ray_tracing, // 167
  spvtools::Extension::kSPV_KHR_ray_query, // 168
  spvtools::Extension::kSPV_NV_displacement_micromap, // 169
  spvtools::Extension::kSPV_GOOGLE_decorate_string, // 170
  spvtools::Extension::kSPV_GOOGLE_hlsl_functionality1, // 171
};

// Array of operand types, referenced by IndexRanges elsewhere.
// Contains all sequences of operand types used in the grammar.
static const spv_operand_type_t kOperandSpans[] = {
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 0
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 2
  SPV_OPERAND_TYPE_BUILT_IN, // 3
  SPV_OPERAND_TYPE_SCOPE_ID, // 4
  SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE, // 5
  SPV_OPERAND_TYPE_FP_ROUNDING_MODE, // 6
  SPV_OPERAND_TYPE_FP_FAST_MATH_MODE, // 7
  SPV_OPERAND_TYPE_LITERAL_STRING, // 8
  SPV_OPERAND_TYPE_LINKAGE_TYPE, // 9
  SPV_OPERAND_TYPE_ID, // 10
  SPV_OPERAND_TYPE_LITERAL_STRING, // 11
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 12
  SPV_OPERAND_TYPE_FP_ROUNDING_MODE, // 13
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 14
  SPV_OPERAND_TYPE_FPDENORM_MODE, // 15
  SPV_OPERAND_TYPE_LITERAL_STRING, // 16
  SPV_OPERAND_TYPE_LITERAL_STRING, // 17
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 18
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 19
  SPV_OPERAND_TYPE_FPOPERATION_MODE, // 20
  SPV_OPERAND_TYPE_LITERAL_FLOAT, // 21
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 22
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 23
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 24
  SPV_OPERAND_TYPE_ACCESS_QUALIFIER, // 25
  SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER, // 26
  SPV_OPERAND_TYPE_LITERAL_STRING, // 27
  SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER, // 28
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 29
  SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL, // 30
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 31
  SPV_OPERAND_TYPE_STORE_CACHE_CONTROL, // 32
  SPV_OPERAND_TYPE_ID, // 33
  SPV_OPERAND_TYPE_ID, // 34
  SPV_OPERAND_TYPE_ID, // 35
  SPV_OPERAND_TYPE_ID, // 36
  SPV_OPERAND_TYPE_ID, // 37
  SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS, // 38
  SPV_OPERAND_TYPE_TYPE_ID, // 39
  SPV_OPERAND_TYPE_RESULT_ID, // 40
  SPV_OPERAND_TYPE_SOURCE_LANGUAGE, // 41
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 42
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 43
  SPV_OPERAND_TYPE_OPTIONAL_LITERAL_STRING, // 44
  SPV_OPERAND_TYPE_ID, // 45
  SPV_OPERAND_TYPE_LITERAL_STRING, // 46
  SPV_OPERAND_TYPE_ID, // 47
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 48
  SPV_OPERAND_TYPE_LITERAL_STRING, // 49
  SPV_OPERAND_TYPE_RESULT_ID, // 50
  SPV_OPERAND_TYPE_LITERAL_STRING, // 51
  SPV_OPERAND_TYPE_ID, // 52
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 53
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 54
  SPV_OPERAND_TYPE_TYPE_ID, // 55
  SPV_OPERAND_TYPE_RESULT_ID, // 56
  SPV_OPERAND_TYPE_ID, // 57
  SPV_OPERAND_TYPE_EXTENSION_INSTRUCTION_NUMBER, // 58
  SPV_OPERAND_TYPE_ADDRESSING_MODEL, // 59
  SPV_OPERAND_TYPE_MEMORY_MODEL, // 60
  SPV_OPERAND_TYPE_EXECUTION_MODEL, // 61
  SPV_OPERAND_TYPE_ID, // 62
  SPV_OPERAND_TYPE_LITERAL_STRING, // 63
  SPV_OPERAND_TYPE_VARIABLE_ID, // 64
  SPV_OPERAND_TYPE_ID, // 65
  SPV_OPERAND_TYPE_EXECUTION_MODE, // 66
  SPV_OPERAND_TYPE_CAPABILITY, // 67
  SPV_OPERAND_TYPE_RESULT_ID, // 68
  SPV_OPERAND_TYPE_RESULT_ID, // 69
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 70
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 71
  SPV_OPERAND_TYPE_RESULT_ID, // 72
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 73
  SPV_OPERAND_TYPE_OPTIONAL_FPENCODING, // 74
  SPV_OPERAND_TYPE_RESULT_ID, // 75
  SPV_OPERAND_TYPE_ID, // 76
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 77
  SPV_OPERAND_TYPE_RESULT_ID, // 78
  SPV_OPERAND_TYPE_ID, // 79
  SPV_OPERAND_TYPE_DIMENSIONALITY, // 80
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 81
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 82
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 83
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 84
  SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT, // 85
  SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER, // 86
  SPV_OPERAND_TYPE_RESULT_ID, // 87
  SPV_OPERAND_TYPE_ID, // 88
  SPV_OPERAND_TYPE_RESULT_ID, // 89
  SPV_OPERAND_TYPE_ID, // 90
  SPV_OPERAND_TYPE_ID, // 91
  SPV_OPERAND_TYPE_RESULT_ID, // 92
  SPV_OPERAND_TYPE_VARIABLE_ID, // 93
  SPV_OPERAND_TYPE_RESULT_ID, // 94
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 95
  SPV_OPERAND_TYPE_ID, // 96
  SPV_OPERAND_TYPE_RESULT_ID, // 97
  SPV_OPERAND_TYPE_ID, // 98
  SPV_OPERAND_TYPE_VARIABLE_ID, // 99
  SPV_OPERAND_TYPE_RESULT_ID, // 100
  SPV_OPERAND_TYPE_ACCESS_QUALIFIER, // 101
  SPV_OPERAND_TYPE_ID, // 102
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 103
  SPV_OPERAND_TYPE_TYPE_ID, // 104
  SPV_OPERAND_TYPE_RESULT_ID, // 105
  SPV_OPERAND_TYPE_TYPED_LITERAL_NUMBER, // 106
  SPV_OPERAND_TYPE_TYPE_ID, // 107
  SPV_OPERAND_TYPE_RESULT_ID, // 108
  SPV_OPERAND_TYPE_VARIABLE_ID, // 109
  SPV_OPERAND_TYPE_TYPE_ID, // 110
  SPV_OPERAND_TYPE_RESULT_ID, // 111
  SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE, // 112
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 113
  SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE, // 114
  SPV_OPERAND_TYPE_TYPE_ID, // 115
  SPV_OPERAND_TYPE_RESULT_ID, // 116
  SPV_OPERAND_TYPE_SPEC_CONSTANT_OP_NUMBER, // 117
  SPV_OPERAND_TYPE_TYPE_ID, // 118
  SPV_OPERAND_TYPE_RESULT_ID, // 119
  SPV_OPERAND_TYPE_FUNCTION_CONTROL, // 120
  SPV_OPERAND_TYPE_ID, // 121
  SPV_OPERAND_TYPE_TYPE_ID, // 122
  SPV_OPERAND_TYPE_RESULT_ID, // 123
  SPV_OPERAND_TYPE_ID, // 124
  SPV_OPERAND_TYPE_VARIABLE_ID, // 125
  SPV_OPERAND_TYPE_TYPE_ID, // 126
  SPV_OPERAND_TYPE_RESULT_ID, // 127
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 128
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 129
  SPV_OPERAND_TYPE_TYPE_ID, // 130
  SPV_OPERAND_TYPE_RESULT_ID, // 131
  SPV_OPERAND_TYPE_ID, // 132
  SPV_OPERAND_TYPE_ID, // 133
  SPV_OPERAND_TYPE_ID, // 134
  SPV_OPERAND_TYPE_TYPE_ID, // 135
  SPV_OPERAND_TYPE_RESULT_ID, // 136
  SPV_OPERAND_TYPE_ID, // 137
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 138
  SPV_OPERAND_TYPE_ID, // 139
  SPV_OPERAND_TYPE_ID, // 140
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 141
  SPV_OPERAND_TYPE_ID, // 142
  SPV_OPERAND_TYPE_ID, // 143
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 144
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 145
  SPV_OPERAND_TYPE_ID, // 146
  SPV_OPERAND_TYPE_ID, // 147
  SPV_OPERAND_TYPE_ID, // 148
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 149
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 150
  SPV_OPERAND_TYPE_TYPE_ID, // 151
  SPV_OPERAND_TYPE_RESULT_ID, // 152
  SPV_OPERAND_TYPE_ID, // 153
  SPV_OPERAND_TYPE_ID, // 154
  SPV_OPERAND_TYPE_VARIABLE_ID, // 155
  SPV_OPERAND_TYPE_TYPE_ID, // 156
  SPV_OPERAND_TYPE_RESULT_ID, // 157
  SPV_OPERAND_TYPE_ID, // 158
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 159
  SPV_OPERAND_TYPE_TYPE_ID, // 160
  SPV_OPERAND_TYPE_RESULT_ID, // 161
  SPV_OPERAND_TYPE_ID, // 162
  SPV_OPERAND_TYPE_ID, // 163
  SPV_OPERAND_TYPE_DECORATION, // 164
  SPV_OPERAND_TYPE_ID, // 165
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 166
  SPV_OPERAND_TYPE_DECORATION, // 167
  SPV_OPERAND_TYPE_ID, // 168
  SPV_OPERAND_TYPE_VARIABLE_ID, // 169
  SPV_OPERAND_TYPE_ID, // 170
  SPV_OPERAND_TYPE_VARIABLE_ID_LITERAL_INTEGER, // 171
  SPV_OPERAND_TYPE_TYPE_ID, // 172
  SPV_OPERAND_TYPE_RESULT_ID, // 173
  SPV_OPERAND_TYPE_ID, // 174
  SPV_OPERAND_TYPE_ID, // 175
  SPV_OPERAND_TYPE_TYPE_ID, // 176
  SPV_OPERAND_TYPE_RESULT_ID, // 177
  SPV_OPERAND_TYPE_ID, // 178
  SPV_OPERAND_TYPE_ID, // 179
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 180
  SPV_OPERAND_TYPE_TYPE_ID, // 181
  SPV_OPERAND_TYPE_RESULT_ID, // 182
  SPV_OPERAND_TYPE_ID, // 183
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 184
  SPV_OPERAND_TYPE_TYPE_ID, // 185
  SPV_OPERAND_TYPE_RESULT_ID, // 186
  SPV_OPERAND_TYPE_ID, // 187
  SPV_OPERAND_TYPE_ID, // 188
  SPV_OPERAND_TYPE_OPTIONAL_IMAGE, // 189
  SPV_OPERAND_TYPE_TYPE_ID, // 190
  SPV_OPERAND_TYPE_RESULT_ID, // 191
  SPV_OPERAND_TYPE_ID, // 192
  SPV_OPERAND_TYPE_ID, // 193
  SPV_OPERAND_TYPE_IMAGE, // 194
  SPV_OPERAND_TYPE_TYPE_ID, // 195
  SPV_OPERAND_TYPE_RESULT_ID, // 196
  SPV_OPERAND_TYPE_ID, // 197
  SPV_OPERAND_TYPE_ID, // 198
  SPV_OPERAND_TYPE_ID, // 199
  SPV_OPERAND_TYPE_OPTIONAL_IMAGE, // 200
  SPV_OPERAND_TYPE_TYPE_ID, // 201
  SPV_OPERAND_TYPE_RESULT_ID, // 202
  SPV_OPERAND_TYPE_ID, // 203
  SPV_OPERAND_TYPE_ID, // 204
  SPV_OPERAND_TYPE_ID, // 205
  SPV_OPERAND_TYPE_IMAGE, // 206
  SPV_OPERAND_TYPE_ID, // 207
  SPV_OPERAND_TYPE_ID, // 208
  SPV_OPERAND_TYPE_ID, // 209
  SPV_OPERAND_TYPE_OPTIONAL_IMAGE, // 210
  SPV_OPERAND_TYPE_TYPE_ID, // 211
  SPV_OPERAND_TYPE_RESULT_ID, // 212
  SPV_OPERAND_TYPE_ID, // 213
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 214
  SPV_OPERAND_TYPE_TYPE_ID, // 215
  SPV_OPERAND_TYPE_RESULT_ID, // 216
  SPV_OPERAND_TYPE_ID, // 217
  SPV_OPERAND_TYPE_ID, // 218
  SPV_OPERAND_TYPE_ID, // 219
  SPV_OPERAND_TYPE_ID, // 220
  SPV_OPERAND_TYPE_SCOPE_ID, // 221
  SPV_OPERAND_TYPE_SCOPE_ID, // 222
  SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID, // 223
  SPV_OPERAND_TYPE_SCOPE_ID, // 224
  SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID, // 225
  SPV_OPERAND_TYPE_TYPE_ID, // 226
  SPV_OPERAND_TYPE_RESULT_ID, // 227
  SPV_OPERAND_TYPE_ID, // 228
  SPV_OPERAND_TYPE_SCOPE_ID, // 229
  SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID, // 230
  SPV_OPERAND_TYPE_ID, // 231
  SPV_OPERAND_TYPE_SCOPE_ID, // 232
  SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID, // 233
  SPV_OPERAND_TYPE_ID, // 234
  SPV_OPERAND_TYPE_TYPE_ID, // 235
  SPV_OPERAND_TYPE_RESULT_ID, // 236
  SPV_OPERAND_TYPE_ID, // 237
  SPV_OPERAND_TYPE_SCOPE_ID, // 238
  SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID, // 239
  SPV_OPERAND_TYPE_ID, // 240
  SPV_OPERAND_TYPE_TYPE_ID, // 241
  SPV_OPERAND_TYPE_RESULT_ID, // 242
  SPV_OPERAND_TYPE_ID, // 243
  SPV_OPERAND_TYPE_SCOPE_ID, // 244
  SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID, // 245
  SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID, // 246
  SPV_OPERAND_TYPE_ID, // 247
  SPV_OPERAND_TYPE_ID, // 248
  SPV_OPERAND_TYPE_ID, // 249
  SPV_OPERAND_TYPE_ID, // 250
  SPV_OPERAND_TYPE_LOOP_CONTROL, // 251
  SPV_OPERAND_TYPE_ID, // 252
  SPV_OPERAND_TYPE_SELECTION_CONTROL, // 253
  SPV_OPERAND_TYPE_ID, // 254
  SPV_OPERAND_TYPE_ID, // 255
  SPV_OPERAND_TYPE_ID, // 256
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 257
  SPV_OPERAND_TYPE_ID, // 258
  SPV_OPERAND_TYPE_ID, // 259
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER_ID, // 260
  SPV_OPERAND_TYPE_ID, // 261
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 262
  SPV_OPERAND_TYPE_TYPE_ID, // 263
  SPV_OPERAND_TYPE_RESULT_ID, // 264
  SPV_OPERAND_TYPE_SCOPE_ID, // 265
  SPV_OPERAND_TYPE_ID, // 266
  SPV_OPERAND_TYPE_ID, // 267
  SPV_OPERAND_TYPE_ID, // 268
  SPV_OPERAND_TYPE_ID, // 269
  SPV_OPERAND_TYPE_ID, // 270
  SPV_OPERAND_TYPE_SCOPE_ID, // 271
  SPV_OPERAND_TYPE_ID, // 272
  SPV_OPERAND_TYPE_ID, // 273
  SPV_OPERAND_TYPE_TYPE_ID, // 274
  SPV_OPERAND_TYPE_RESULT_ID, // 275
  SPV_OPERAND_TYPE_SCOPE_ID, // 276
  SPV_OPERAND_TYPE_ID, // 277
  SPV_OPERAND_TYPE_TYPE_ID, // 278
  SPV_OPERAND_TYPE_RESULT_ID, // 279
  SPV_OPERAND_TYPE_SCOPE_ID, // 280
  SPV_OPERAND_TYPE_ID, // 281
  SPV_OPERAND_TYPE_ID, // 282
  SPV_OPERAND_TYPE_TYPE_ID, // 283
  SPV_OPERAND_TYPE_RESULT_ID, // 284
  SPV_OPERAND_TYPE_SCOPE_ID, // 285
  SPV_OPERAND_TYPE_GROUP_OPERATION, // 286
  SPV_OPERAND_TYPE_ID, // 287
  SPV_OPERAND_TYPE_TYPE_ID, // 288
  SPV_OPERAND_TYPE_RESULT_ID, // 289
  SPV_OPERAND_TYPE_ID, // 290
  SPV_OPERAND_TYPE_ID, // 291
  SPV_OPERAND_TYPE_ID, // 292
  SPV_OPERAND_TYPE_ID, // 293
  SPV_OPERAND_TYPE_ID, // 294
  SPV_OPERAND_TYPE_ID, // 295
  SPV_OPERAND_TYPE_ID, // 296
  SPV_OPERAND_TYPE_ID, // 297
  SPV_OPERAND_TYPE_ID, // 298
  SPV_OPERAND_TYPE_ID, // 299
  SPV_OPERAND_TYPE_TYPE_ID, // 300
  SPV_OPERAND_TYPE_RESULT_ID, // 301
  SPV_OPERAND_TYPE_SCOPE_ID, // 302
  SPV_OPERAND_TYPE_ID, // 303
  SPV_OPERAND_TYPE_ID, // 304
  SPV_OPERAND_TYPE_ID, // 305
  SPV_OPERAND_TYPE_ID, // 306
  SPV_OPERAND_TYPE_SCOPE_ID, // 307
  SPV_OPERAND_TYPE_ID, // 308
  SPV_OPERAND_TYPE_ID, // 309
  SPV_OPERAND_TYPE_ID, // 310
  SPV_OPERAND_TYPE_ID, // 311
  SPV_OPERAND_TYPE_TYPE_ID, // 312
  SPV_OPERAND_TYPE_RESULT_ID, // 313
  SPV_OPERAND_TYPE_ID, // 314
  SPV_OPERAND_TYPE_ID, // 315
  SPV_OPERAND_TYPE_ID, // 316
  SPV_OPERAND_TYPE_ID, // 317
  SPV_OPERAND_TYPE_ID, // 318
  SPV_OPERAND_TYPE_ID, // 319
  SPV_OPERAND_TYPE_ID, // 320
  SPV_OPERAND_TYPE_ID, // 321
  SPV_OPERAND_TYPE_ID, // 322
  SPV_OPERAND_TYPE_ID, // 323
  SPV_OPERAND_TYPE_VARIABLE_ID, // 324
  SPV_OPERAND_TYPE_TYPE_ID, // 325
  SPV_OPERAND_TYPE_RESULT_ID, // 326
  SPV_OPERAND_TYPE_ID, // 327
  SPV_OPERAND_TYPE_ID, // 328
  SPV_OPERAND_TYPE_ID, // 329
  SPV_OPERAND_TYPE_ID, // 330
  SPV_OPERAND_TYPE_ID, // 331
  SPV_OPERAND_TYPE_ID, // 332
  SPV_OPERAND_TYPE_SCOPE_ID, // 333
  SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID, // 334
  SPV_OPERAND_TYPE_TYPE_ID, // 335
  SPV_OPERAND_TYPE_RESULT_ID, // 336
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 337
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 338
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 339
  SPV_OPERAND_TYPE_TYPE_ID, // 340
  SPV_OPERAND_TYPE_RESULT_ID, // 341
  SPV_OPERAND_TYPE_SCOPE_ID, // 342
  SPV_OPERAND_TYPE_TYPE_ID, // 343
  SPV_OPERAND_TYPE_RESULT_ID, // 344
  SPV_OPERAND_TYPE_SCOPE_ID, // 345
  SPV_OPERAND_TYPE_GROUP_OPERATION, // 346
  SPV_OPERAND_TYPE_ID, // 347
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 348
  SPV_OPERAND_TYPE_TYPE_ID, // 349
  SPV_OPERAND_TYPE_RESULT_ID, // 350
  SPV_OPERAND_TYPE_ID, // 351
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 352
  SPV_OPERAND_TYPE_TYPE_ID, // 353
  SPV_OPERAND_TYPE_RESULT_ID, // 354
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 355
  SPV_OPERAND_TYPE_RESULT_ID, // 356
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 357
  SPV_OPERAND_TYPE_TYPE_ID, // 358
  SPV_OPERAND_TYPE_RESULT_ID, // 359
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 360
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 361
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 362
  SPV_OPERAND_TYPE_TYPE_ID, // 363
  SPV_OPERAND_TYPE_RESULT_ID, // 364
  SPV_OPERAND_TYPE_ID, // 365
  SPV_OPERAND_TYPE_ID, // 366
  SPV_OPERAND_TYPE_ID, // 367
  SPV_OPERAND_TYPE_VARIABLE_ID, // 368
  SPV_OPERAND_TYPE_TYPE_ID, // 369
  SPV_OPERAND_TYPE_RESULT_ID, // 370
  SPV_OPERAND_TYPE_ID, // 371
  SPV_OPERAND_TYPE_ID, // 372
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 373
  SPV_OPERAND_TYPE_ID, // 374
  SPV_OPERAND_TYPE_ID, // 375
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 376
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 377
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 378
  SPV_OPERAND_TYPE_TYPE_ID, // 379
  SPV_OPERAND_TYPE_RESULT_ID, // 380
  SPV_OPERAND_TYPE_SCOPE_ID, // 381
  SPV_OPERAND_TYPE_ID, // 382
  SPV_OPERAND_TYPE_ID, // 383
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 384
  SPV_OPERAND_TYPE_TYPE_ID, // 385
  SPV_OPERAND_TYPE_RESULT_ID, // 386
  SPV_OPERAND_TYPE_ID, // 387
  SPV_OPERAND_TYPE_EXTENSION_INSTRUCTION_NUMBER, // 388
  SPV_OPERAND_TYPE_VARIABLE_ID, // 389
  SPV_OPERAND_TYPE_ID, // 390
  SPV_OPERAND_TYPE_ID, // 391
  SPV_OPERAND_TYPE_ID, // 392
  SPV_OPERAND_TYPE_ID, // 393
  SPV_OPERAND_TYPE_ID, // 394
  SPV_OPERAND_TYPE_ID, // 395
  SPV_OPERAND_TYPE_ID, // 396
  SPV_OPERAND_TYPE_ID, // 397
  SPV_OPERAND_TYPE_ID, // 398
  SPV_OPERAND_TYPE_ID, // 399
  SPV_OPERAND_TYPE_ID, // 400
  SPV_OPERAND_TYPE_TYPE_ID, // 401
  SPV_OPERAND_TYPE_RESULT_ID, // 402
  SPV_OPERAND_TYPE_ID, // 403
  SPV_OPERAND_TYPE_ID, // 404
  SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT, // 405
  SPV_OPERAND_TYPE_TYPE_ID, // 406
  SPV_OPERAND_TYPE_RESULT_ID, // 407
  SPV_OPERAND_TYPE_ID, // 408
  SPV_OPERAND_TYPE_ID, // 409
  SPV_OPERAND_TYPE_ID, // 410
  SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT, // 411
  SPV_OPERAND_TYPE_RESULT_ID, // 412
  SPV_OPERAND_TYPE_ID, // 413
  SPV_OPERAND_TYPE_SCOPE_ID, // 414
  SPV_OPERAND_TYPE_ID, // 415
  SPV_OPERAND_TYPE_ID, // 416
  SPV_OPERAND_TYPE_ID, // 417
  SPV_OPERAND_TYPE_TYPE_ID, // 418
  SPV_OPERAND_TYPE_RESULT_ID, // 419
  SPV_OPERAND_TYPE_ID, // 420
  SPV_OPERAND_TYPE_ID, // 421
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 422
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 423
  SPV_OPERAND_TYPE_ID, // 424
  SPV_OPERAND_TYPE_ID, // 425
  SPV_OPERAND_TYPE_ID, // 426
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 427
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 428
  SPV_OPERAND_TYPE_TYPE_ID, // 429
  SPV_OPERAND_TYPE_RESULT_ID, // 430
  SPV_OPERAND_TYPE_ID, // 431
  SPV_OPERAND_TYPE_ID, // 432
  SPV_OPERAND_TYPE_ID, // 433
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 434
  SPV_OPERAND_TYPE_ID, // 435
  SPV_OPERAND_TYPE_ID, // 436
  SPV_OPERAND_TYPE_ID, // 437
  SPV_OPERAND_TYPE_ID, // 438
  SPV_OPERAND_TYPE_ID, // 439
  SPV_OPERAND_TYPE_ID, // 440
  SPV_OPERAND_TYPE_ID, // 441
  SPV_OPERAND_TYPE_ID, // 442
  SPV_OPERAND_TYPE_ID, // 443
  SPV_OPERAND_TYPE_ID, // 444
  SPV_OPERAND_TYPE_ID, // 445
  SPV_OPERAND_TYPE_ID, // 446
  SPV_OPERAND_TYPE_ID, // 447
  SPV_OPERAND_TYPE_ID, // 448
  SPV_OPERAND_TYPE_ID, // 449
  SPV_OPERAND_TYPE_ID, // 450
  SPV_OPERAND_TYPE_ID, // 451
  SPV_OPERAND_TYPE_ID, // 452
  SPV_OPERAND_TYPE_ID, // 453
  SPV_OPERAND_TYPE_ID, // 454
  SPV_OPERAND_TYPE_ID, // 455
  SPV_OPERAND_TYPE_ID, // 456
  SPV_OPERAND_TYPE_ID, // 457
  SPV_OPERAND_TYPE_ID, // 458
  SPV_OPERAND_TYPE_ID, // 459
  SPV_OPERAND_TYPE_ID, // 460
  SPV_OPERAND_TYPE_ID, // 461
  SPV_OPERAND_TYPE_ID, // 462
  SPV_OPERAND_TYPE_ID, // 463
  SPV_OPERAND_TYPE_ID, // 464
  SPV_OPERAND_TYPE_ID, // 465
  SPV_OPERAND_TYPE_ID, // 466
  SPV_OPERAND_TYPE_ID, // 467
  SPV_OPERAND_TYPE_ID, // 468
  SPV_OPERAND_TYPE_ID, // 469
  SPV_OPERAND_TYPE_ID, // 470
  SPV_OPERAND_TYPE_ID, // 471
  SPV_OPERAND_TYPE_ID, // 472
  SPV_OPERAND_TYPE_ID, // 473
  SPV_OPERAND_TYPE_ID, // 474
  SPV_OPERAND_TYPE_ID, // 475
  SPV_OPERAND_TYPE_ID, // 476
  SPV_OPERAND_TYPE_ID, // 477
  SPV_OPERAND_TYPE_ID, // 478
  SPV_OPERAND_TYPE_ID, // 479
  SPV_OPERAND_TYPE_ID, // 480
  SPV_OPERAND_TYPE_ID, // 481
  SPV_OPERAND_TYPE_ID, // 482
  SPV_OPERAND_TYPE_ID, // 483
  SPV_OPERAND_TYPE_ID, // 484
  SPV_OPERAND_TYPE_ID, // 485
  SPV_OPERAND_TYPE_ID, // 486
  SPV_OPERAND_TYPE_ID, // 487
  SPV_OPERAND_TYPE_ID, // 488
  SPV_OPERAND_TYPE_ID, // 489
  SPV_OPERAND_TYPE_ID, // 490
  SPV_OPERAND_TYPE_ID, // 491
  SPV_OPERAND_TYPE_ID, // 492
  SPV_OPERAND_TYPE_ID, // 493
  SPV_OPERAND_TYPE_ID, // 494
  SPV_OPERAND_TYPE_ID, // 495
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 496
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 497
  SPV_OPERAND_TYPE_TYPE_ID, // 498
  SPV_OPERAND_TYPE_RESULT_ID, // 499
  SPV_OPERAND_TYPE_ID, // 500
  SPV_OPERAND_TYPE_ID, // 501
  SPV_OPERAND_TYPE_ID, // 502
  SPV_OPERAND_TYPE_ID, // 503
  SPV_OPERAND_TYPE_OPTIONAL_IMAGE, // 504
  SPV_OPERAND_TYPE_TYPE_ID, // 505
  SPV_OPERAND_TYPE_RESULT_ID, // 506
  SPV_OPERAND_TYPE_ID, // 507
  SPV_OPERAND_TYPE_ID, // 508
  SPV_OPERAND_TYPE_ID, // 509
  SPV_OPERAND_TYPE_ID, // 510
  SPV_OPERAND_TYPE_ID, // 511
  SPV_OPERAND_TYPE_ID, // 512
  SPV_OPERAND_TYPE_ID, // 513
  SPV_OPERAND_TYPE_ID, // 514
  SPV_OPERAND_TYPE_ID, // 515
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 516
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 517
  SPV_OPERAND_TYPE_ID, // 518
  SPV_OPERAND_TYPE_ID, // 519
  SPV_OPERAND_TYPE_ID, // 520
  SPV_OPERAND_TYPE_ID, // 521
  SPV_OPERAND_TYPE_ID, // 522
  SPV_OPERAND_TYPE_ID, // 523
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 524
  SPV_OPERAND_TYPE_TYPE_ID, // 525
  SPV_OPERAND_TYPE_RESULT_ID, // 526
  SPV_OPERAND_TYPE_ID, // 527
  SPV_OPERAND_TYPE_ID, // 528
  SPV_OPERAND_TYPE_ID, // 529
  SPV_OPERAND_TYPE_ID, // 530
  SPV_OPERAND_TYPE_ID, // 531
  SPV_OPERAND_TYPE_ID, // 532
  SPV_OPERAND_TYPE_ID, // 533
  SPV_OPERAND_TYPE_ID, // 534
  SPV_OPERAND_TYPE_ID, // 535
  SPV_OPERAND_TYPE_ID, // 536
  SPV_OPERAND_TYPE_ID, // 537
  SPV_OPERAND_TYPE_ID, // 538
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 539
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 540
  SPV_OPERAND_TYPE_ID, // 541
  SPV_OPERAND_TYPE_ID, // 542
  SPV_OPERAND_TYPE_ID, // 543
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 544
  SPV_OPERAND_TYPE_TYPE_ID, // 545
  SPV_OPERAND_TYPE_RESULT_ID, // 546
  SPV_OPERAND_TYPE_ID, // 547
  SPV_OPERAND_TYPE_ID, // 548
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 549
  SPV_OPERAND_TYPE_ID, // 550
  SPV_OPERAND_TYPE_ID, // 551
  SPV_OPERAND_TYPE_ID, // 552
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 553
  SPV_OPERAND_TYPE_RESULT_ID, // 554
  SPV_OPERAND_TYPE_ID, // 555
  SPV_OPERAND_TYPE_SCOPE_ID, // 556
  SPV_OPERAND_TYPE_ID, // 557
  SPV_OPERAND_TYPE_ID, // 558
  SPV_OPERAND_TYPE_TYPE_ID, // 559
  SPV_OPERAND_TYPE_RESULT_ID, // 560
  SPV_OPERAND_TYPE_ID, // 561
  SPV_OPERAND_TYPE_ID, // 562
  SPV_OPERAND_TYPE_ID, // 563
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 564
  SPV_OPERAND_TYPE_ID, // 565
  SPV_OPERAND_TYPE_ID, // 566
  SPV_OPERAND_TYPE_ID, // 567
  SPV_OPERAND_TYPE_ID, // 568
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 569
  SPV_OPERAND_TYPE_TYPE_ID, // 570
  SPV_OPERAND_TYPE_RESULT_ID, // 571
  SPV_OPERAND_TYPE_ID, // 572
  SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE, // 573
  SPV_OPERAND_TYPE_ID, // 574
  SPV_OPERAND_TYPE_TYPE_ID, // 575
  SPV_OPERAND_TYPE_RESULT_ID, // 576
  SPV_OPERAND_TYPE_ID, // 577
  SPV_OPERAND_TYPE_ID, // 578
  SPV_OPERAND_TYPE_ID, // 579
  SPV_OPERAND_TYPE_MEMORY_ACCESS, // 580
  SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS, // 581
  SPV_OPERAND_TYPE_ID, // 582
  SPV_OPERAND_TYPE_ID, // 583
  SPV_OPERAND_TYPE_ID, // 584
  SPV_OPERAND_TYPE_MEMORY_ACCESS, // 585
  SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS, // 586
  SPV_OPERAND_TYPE_RESULT_ID, // 587
  SPV_OPERAND_TYPE_ID, // 588
  SPV_OPERAND_TYPE_ID, // 589
  SPV_OPERAND_TYPE_VARIABLE_ID, // 590
  SPV_OPERAND_TYPE_TYPE_ID, // 591
  SPV_OPERAND_TYPE_RESULT_ID, // 592
  SPV_OPERAND_TYPE_ID, // 593
  SPV_OPERAND_TYPE_ID, // 594
  SPV_OPERAND_TYPE_ID, // 595
  SPV_OPERAND_TYPE_ID, // 596
  SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS, // 597
  SPV_OPERAND_TYPE_ID, // 598
  SPV_OPERAND_TYPE_ID, // 599
  SPV_OPERAND_TYPE_ID, // 600
  SPV_OPERAND_TYPE_ID, // 601
  SPV_OPERAND_TYPE_ID, // 602
  SPV_OPERAND_TYPE_TYPE_ID, // 603
  SPV_OPERAND_TYPE_RESULT_ID, // 604
  SPV_OPERAND_TYPE_ID, // 605
  SPV_OPERAND_TYPE_ID, // 606
  SPV_OPERAND_TYPE_LITERAL_STRING, // 607
  SPV_OPERAND_TYPE_LITERAL_STRING, // 608
  SPV_OPERAND_TYPE_TYPE_ID, // 609
  SPV_OPERAND_TYPE_RESULT_ID, // 610
  SPV_OPERAND_TYPE_ID, // 611
  SPV_OPERAND_TYPE_ID, // 612
  SPV_OPERAND_TYPE_ID, // 613
  SPV_OPERAND_TYPE_ID, // 614
  SPV_OPERAND_TYPE_ID, // 615
  SPV_OPERAND_TYPE_ID, // 616
  SPV_OPERAND_TYPE_ID, // 617
  SPV_OPERAND_TYPE_TYPE_ID, // 618
  SPV_OPERAND_TYPE_RESULT_ID, // 619
  SPV_OPERAND_TYPE_ID, // 620
  SPV_OPERAND_TYPE_ID, // 621
  SPV_OPERAND_TYPE_ID, // 622
  SPV_OPERAND_TYPE_ID, // 623
  SPV_OPERAND_TYPE_ID, // 624
  SPV_OPERAND_TYPE_ID, // 625
  SPV_OPERAND_TYPE_ID, // 626
  SPV_OPERAND_TYPE_ID, // 627
  SPV_OPERAND_TYPE_TYPE_ID, // 628
  SPV_OPERAND_TYPE_RESULT_ID, // 629
  SPV_OPERAND_TYPE_ID, // 630
  SPV_OPERAND_TYPE_ID, // 631
  SPV_OPERAND_TYPE_ID, // 632
  SPV_OPERAND_TYPE_ID, // 633
  SPV_OPERAND_TYPE_ID, // 634
  SPV_OPERAND_TYPE_ID, // 635
  SPV_OPERAND_TYPE_ID, // 636
  SPV_OPERAND_TYPE_ID, // 637
  SPV_OPERAND_TYPE_ID, // 638
  SPV_OPERAND_TYPE_ID, // 639
  SPV_OPERAND_TYPE_ID, // 640
  SPV_OPERAND_TYPE_TYPE_ID, // 641
  SPV_OPERAND_TYPE_RESULT_ID, // 642
  SPV_OPERAND_TYPE_ID, // 643
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 644
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 645
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 646
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 647
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 648
  SPV_OPERAND_TYPE_TYPE_ID, // 649
  SPV_OPERAND_TYPE_RESULT_ID, // 650
  SPV_OPERAND_TYPE_ID, // 651
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 652
  SPV_OPERAND_TYPE_ID, // 653
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 654
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 655
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 656
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 657
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 658
  SPV_OPERAND_TYPE_TYPE_ID, // 659
  SPV_OPERAND_TYPE_RESULT_ID, // 660
  SPV_OPERAND_TYPE_ID, // 661
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 662
  SPV_OPERAND_TYPE_ID, // 663
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 664
  SPV_OPERAND_TYPE_RESULT_ID, // 665
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 666
  SPV_OPERAND_TYPE_RESULT_ID, // 667
  SPV_OPERAND_TYPE_ID, // 668
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 669
  SPV_OPERAND_TYPE_VARIABLE_ID, // 670
  SPV_OPERAND_TYPE_TYPE_ID, // 671
  SPV_OPERAND_TYPE_RESULT_ID, // 672
  SPV_OPERAND_TYPE_ID, // 673
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 674
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 675
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 676
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 677
  SPV_OPERAND_TYPE_ID, // 678
  SPV_OPERAND_TYPE_ID, // 679
  SPV_OPERAND_TYPE_ID, // 680
  SPV_OPERAND_TYPE_ID, // 681
  SPV_OPERAND_TYPE_ID, // 682
  SPV_OPERAND_TYPE_ID, // 683
  SPV_OPERAND_TYPE_ID, // 684
  SPV_OPERAND_TYPE_ID, // 685
  SPV_OPERAND_TYPE_ID, // 686
  SPV_OPERAND_TYPE_ID, // 687
  SPV_OPERAND_TYPE_ID, // 688
  SPV_OPERAND_TYPE_ID, // 689
  SPV_OPERAND_TYPE_ID, // 690
  SPV_OPERAND_TYPE_ID, // 691
  SPV_OPERAND_TYPE_ID, // 692
  SPV_OPERAND_TYPE_ID, // 693
  SPV_OPERAND_TYPE_ID, // 694
  SPV_OPERAND_TYPE_ID, // 695
  SPV_OPERAND_TYPE_ID, // 696
  SPV_OPERAND_TYPE_TYPE_ID, // 697
  SPV_OPERAND_TYPE_RESULT_ID, // 698
  SPV_OPERAND_TYPE_ID, // 699
  SPV_OPERAND_TYPE_ID, // 700
  SPV_OPERAND_TYPE_ID, // 701
  SPV_OPERAND_TYPE_ID, // 702
  SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS, // 703
  SPV_OPERAND_TYPE_TYPE_ID, // 704
  SPV_OPERAND_TYPE_RESULT_ID, // 705
  SPV_OPERAND_TYPE_ID, // 706
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 707
  SPV_OPERAND_TYPE_ID, // 708
  SPV_OPERAND_TYPE_ID, // 709
  SPV_OPERAND_TYPE_ID, // 710
  SPV_OPERAND_TYPE_ID, // 711
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 712
  SPV_OPERAND_TYPE_ID, // 713
  SPV_OPERAND_TYPE_ID, // 714
  SPV_OPERAND_TYPE_ID, // 715
  SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING, // 716
  SPV_OPERAND_TYPE_ID, // 717
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 718
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 719
  SPV_OPERAND_TYPE_ID, // 720
  SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER, // 721
  SPV_OPERAND_TYPE_ID, // 722
  SPV_OPERAND_TYPE_ID, // 723
  SPV_OPERAND_TYPE_ID, // 724
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 725
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 726
  SPV_OPERAND_TYPE_ID, // 727
  SPV_OPERAND_TYPE_ID, // 728
  SPV_OPERAND_TYPE_ID, // 729
  SPV_OPERAND_TYPE_ID, // 730
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 731
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 732
  SPV_OPERAND_TYPE_ID, // 733
  SPV_OPERAND_TYPE_ID, // 734
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 735
  SPV_OPERAND_TYPE_VARIABLE_ID, // 736
  SPV_OPERAND_TYPE_ID, // 737
  SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE, // 738
  SPV_OPERAND_TYPE_ID, // 739
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 740
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 741
  SPV_OPERAND_TYPE_ID, // 742
  SPV_OPERAND_TYPE_ID, // 743
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 744
  SPV_OPERAND_TYPE_VARIABLE_ID, // 745
  SPV_OPERAND_TYPE_ID, // 746
  SPV_OPERAND_TYPE_ID, // 747
  SPV_OPERAND_TYPE_ID, // 748
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 749
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 750
  SPV_OPERAND_TYPE_ID, // 751
  SPV_OPERAND_TYPE_ID, // 752
  SPV_OPERAND_TYPE_ID, // 753
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 754
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 755
  SPV_OPERAND_TYPE_ID, // 756
  SPV_OPERAND_TYPE_ID, // 757
  SPV_OPERAND_TYPE_ID, // 758
  SPV_OPERAND_TYPE_ID, // 759
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 760
  SPV_OPERAND_TYPE_ID, // 761
  SPV_OPERAND_TYPE_ID, // 762
  SPV_OPERAND_TYPE_ID, // 763
  SPV_OPERAND_TYPE_ID, // 764
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 765
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 766
  SPV_OPERAND_TYPE_ID, // 767
  SPV_OPERAND_TYPE_ID, // 768
  SPV_OPERAND_TYPE_ID, // 769
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 770
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 771
  SPV_OPERAND_TYPE_ID, // 772
  SPV_OPERAND_TYPE_ID, // 773
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 774
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 775
  SPV_OPERAND_TYPE_VARIABLE_ID, // 776
  SPV_OPERAND_TYPE_ID, // 777
  SPV_OPERAND_TYPE_ID, // 778
  SPV_OPERAND_TYPE_ID, // 779
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 780
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 781
  SPV_OPERAND_TYPE_ID, // 782
  SPV_OPERAND_TYPE_ID, // 783
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 784
  SPV_OPERAND_TYPE_ID, // 785
  SPV_OPERAND_TYPE_ID, // 786
  SPV_OPERAND_TYPE_ID, // 787
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 788
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 789
  SPV_OPERAND_TYPE_ID, // 790
  SPV_OPERAND_TYPE_ID, // 791
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 792
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 793
  SPV_OPERAND_TYPE_ID, // 794
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 795
  SPV_OPERAND_TYPE_ID, // 796
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 797
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 798
  SPV_OPERAND_TYPE_ID, // 799
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 800
  SPV_OPERAND_TYPE_ID, // 801
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 802
  SPV_OPERAND_TYPE_ID, // 803
  SPV_OPERAND_TYPE_ID, // 804
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 805
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 806
  SPV_OPERAND_TYPE_ID, // 807
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 808
  SPV_OPERAND_TYPE_ID, // 809
  SPV_OPERAND_TYPE_ID, // 810
  SPV_OPERAND_TYPE_ID, // 811
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 812
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 813
  SPV_OPERAND_TYPE_ID, // 814
  SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER, // 815
  SPV_OPERAND_TYPE_ID, // 816
  SPV_OPERAND_TYPE_ID, // 817
  SPV_OPERAND_TYPE_VARIABLE_ID, // 818
  SPV_OPERAND_TYPE_DEBUG_OPERATION, // 819
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 820
  SPV_OPERAND_TYPE_ID, // 821
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 822
  SPV_OPERAND_TYPE_ID, // 823
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 824
  SPV_OPERAND_TYPE_ID, // 825
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 826
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 827
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 828
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 829
  SPV_OPERAND_TYPE_ID, // 830
  SPV_OPERAND_TYPE_ID, // 831
  SPV_OPERAND_TYPE_ID, // 832
  SPV_OPERAND_TYPE_ID, // 833
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 834
  SPV_OPERAND_TYPE_ID, // 835
  SPV_OPERAND_TYPE_ID, // 836
  SPV_OPERAND_TYPE_ID, // 837
  SPV_OPERAND_TYPE_ID, // 838
  SPV_OPERAND_TYPE_ID, // 839
  SPV_OPERAND_TYPE_ID, // 840
  SPV_OPERAND_TYPE_ID, // 841
  SPV_OPERAND_TYPE_ID, // 842
  SPV_OPERAND_TYPE_VARIABLE_ID, // 843
  SPV_OPERAND_TYPE_ID, // 844
  SPV_OPERAND_TYPE_ID, // 845
  SPV_OPERAND_TYPE_ID, // 846
  SPV_OPERAND_TYPE_ID, // 847
  SPV_OPERAND_TYPE_ID, // 848
  SPV_OPERAND_TYPE_ID, // 849
  SPV_OPERAND_TYPE_ID, // 850
  SPV_OPERAND_TYPE_ID, // 851
  SPV_OPERAND_TYPE_ID, // 852
  SPV_OPERAND_TYPE_VARIABLE_ID, // 853
  SPV_OPERAND_TYPE_ID, // 854
  SPV_OPERAND_TYPE_ID, // 855
  SPV_OPERAND_TYPE_ID, // 856
  SPV_OPERAND_TYPE_ID, // 857
  SPV_OPERAND_TYPE_ID, // 858
  SPV_OPERAND_TYPE_ID, // 859
  SPV_OPERAND_TYPE_ID, // 860
  SPV_OPERAND_TYPE_ID, // 861
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 862
  SPV_OPERAND_TYPE_ID, // 863
  SPV_OPERAND_TYPE_ID, // 864
  SPV_OPERAND_TYPE_ID, // 865
  SPV_OPERAND_TYPE_ID, // 866
  SPV_OPERAND_TYPE_VARIABLE_ID, // 867
  SPV_OPERAND_TYPE_ID, // 868
  SPV_OPERAND_TYPE_ID, // 869
  SPV_OPERAND_TYPE_ID, // 870
  SPV_OPERAND_TYPE_ID, // 871
  SPV_OPERAND_TYPE_ID, // 872
  SPV_OPERAND_TYPE_ID, // 873
  SPV_OPERAND_TYPE_ID, // 874
  SPV_OPERAND_TYPE_ID, // 875
  SPV_OPERAND_TYPE_ID, // 876
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 877
  SPV_OPERAND_TYPE_ID, // 878
  SPV_OPERAND_TYPE_ID, // 879
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 880
  SPV_OPERAND_TYPE_ID, // 881
  SPV_OPERAND_TYPE_ID, // 882
  SPV_OPERAND_TYPE_ID, // 883
  SPV_OPERAND_TYPE_ID, // 884
  SPV_OPERAND_TYPE_ID, // 885
  SPV_OPERAND_TYPE_ID, // 886
  SPV_OPERAND_TYPE_ID, // 887
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 888
  SPV_OPERAND_TYPE_ID, // 889
  SPV_OPERAND_TYPE_ID, // 890
  SPV_OPERAND_TYPE_ID, // 891
  SPV_OPERAND_TYPE_VARIABLE_ID, // 892
  SPV_OPERAND_TYPE_ID, // 893
  SPV_OPERAND_TYPE_ID, // 894
  SPV_OPERAND_TYPE_ID, // 895
  SPV_OPERAND_TYPE_ID, // 896
  SPV_OPERAND_TYPE_ID, // 897
  SPV_OPERAND_TYPE_ID, // 898
  SPV_OPERAND_TYPE_ID, // 899
  SPV_OPERAND_TYPE_ID, // 900
  SPV_OPERAND_TYPE_ID, // 901
  SPV_OPERAND_TYPE_ID, // 902
  SPV_OPERAND_TYPE_ID, // 903
  SPV_OPERAND_TYPE_ID, // 904
  SPV_OPERAND_TYPE_ID, // 905
  SPV_OPERAND_TYPE_ID, // 906
  SPV_OPERAND_TYPE_ID, // 907
  SPV_OPERAND_TYPE_ID, // 908
  SPV_OPERAND_TYPE_ID, // 909
  SPV_OPERAND_TYPE_ID, // 910
  SPV_OPERAND_TYPE_ID, // 911
  SPV_OPERAND_TYPE_ID, // 912
  SPV_OPERAND_TYPE_ID, // 913
  SPV_OPERAND_TYPE_ID, // 914
  SPV_OPERAND_TYPE_ID, // 915
  SPV_OPERAND_TYPE_ID, // 916
  SPV_OPERAND_TYPE_ID, // 917
  SPV_OPERAND_TYPE_ID, // 918
  SPV_OPERAND_TYPE_ID, // 919
  SPV_OPERAND_TYPE_ID, // 920
  SPV_OPERAND_TYPE_ID, // 921
  SPV_OPERAND_TYPE_ID, // 922
  SPV_OPERAND_TYPE_ID, // 923
  SPV_OPERAND_TYPE_ID, // 924
  SPV_OPERAND_TYPE_ID, // 925
  SPV_OPERAND_TYPE_ID, // 926
  SPV_OPERAND_TYPE_ID, // 927
  SPV_OPERAND_TYPE_ID, // 928
  SPV_OPERAND_TYPE_ID, // 929
  SPV_OPERAND_TYPE_ID, // 930
  SPV_OPERAND_TYPE_ID, // 931
  SPV_OPERAND_TYPE_ID, // 932
  SPV_OPERAND_TYPE_ID, // 933
  SPV_OPERAND_TYPE_ID, // 934
  SPV_OPERAND_TYPE_ID, // 935
  SPV_OPERAND_TYPE_ID, // 936
  SPV_OPERAND_TYPE_ID, // 937
  SPV_OPERAND_TYPE_ID, // 938
  SPV_OPERAND_TYPE_ID, // 939
  SPV_OPERAND_TYPE_ID, // 940
  SPV_OPERAND_TYPE_ID, // 941
  SPV_OPERAND_TYPE_ID, // 942
  SPV_OPERAND_TYPE_ID, // 943
  SPV_OPERAND_TYPE_ID, // 944
  SPV_OPERAND_TYPE_ID, // 945
  SPV_OPERAND_TYPE_ID, // 946
  SPV_OPERAND_TYPE_ID, // 947
  SPV_OPERAND_TYPE_ID, // 948
  SPV_OPERAND_TYPE_ID, // 949
  SPV_OPERAND_TYPE_ID, // 950
  SPV_OPERAND_TYPE_ID, // 951
  SPV_OPERAND_TYPE_ID, // 952
  SPV_OPERAND_TYPE_ID, // 953
  SPV_OPERAND_TYPE_ID, // 954
  SPV_OPERAND_TYPE_ID, // 955
  SPV_OPERAND_TYPE_ID, // 956
  SPV_OPERAND_TYPE_ID, // 957
  SPV_OPERAND_TYPE_ID, // 958
  SPV_OPERAND_TYPE_ID, // 959
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 960
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 961
  SPV_OPERAND_TYPE_ID, // 962
  SPV_OPERAND_TYPE_SOURCE_LANGUAGE, // 963
  SPV_OPERAND_TYPE_ID, // 964
  SPV_OPERAND_TYPE_ID, // 965
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING, // 966
  SPV_OPERAND_TYPE_ID, // 967
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 968
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 969
  SPV_OPERAND_TYPE_ID, // 970
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER, // 971
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 972
  SPV_OPERAND_TYPE_ID, // 973
  SPV_OPERAND_TYPE_VARIABLE_ID, // 974
  SPV_OPERAND_TYPE_ID, // 975
  SPV_OPERAND_TYPE_ID, // 976
  SPV_OPERAND_TYPE_ID, // 977
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 978
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 979
  SPV_OPERAND_TYPE_ID, // 980
  SPV_OPERAND_TYPE_ID, // 981
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 982
  SPV_OPERAND_TYPE_VARIABLE_ID, // 983
  SPV_OPERAND_TYPE_ID, // 984
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE, // 985
  SPV_OPERAND_TYPE_ID, // 986
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 987
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 988
  SPV_OPERAND_TYPE_ID, // 989
  SPV_OPERAND_TYPE_ID, // 990
  SPV_OPERAND_TYPE_ID, // 991
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 992
  SPV_OPERAND_TYPE_VARIABLE_ID, // 993
  SPV_OPERAND_TYPE_ID, // 994
  SPV_OPERAND_TYPE_ID, // 995
  SPV_OPERAND_TYPE_ID, // 996
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 997
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 998
  SPV_OPERAND_TYPE_ID, // 999
  SPV_OPERAND_TYPE_ID, // 1000
  SPV_OPERAND_TYPE_ID, // 1001
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1002
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 1003
  SPV_OPERAND_TYPE_ID, // 1004
  SPV_OPERAND_TYPE_ID, // 1005
  SPV_OPERAND_TYPE_ID, // 1006
  SPV_OPERAND_TYPE_ID, // 1007
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1008
  SPV_OPERAND_TYPE_ID, // 1009
  SPV_OPERAND_TYPE_ID, // 1010
  SPV_OPERAND_TYPE_ID, // 1011
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1012
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1013
  SPV_OPERAND_TYPE_ID, // 1014
  SPV_OPERAND_TYPE_ID, // 1015
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1016
  SPV_OPERAND_TYPE_ID, // 1017
  SPV_OPERAND_TYPE_ID, // 1018
  SPV_OPERAND_TYPE_ID, // 1019
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1020
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1021
  SPV_OPERAND_TYPE_ID, // 1022
  SPV_OPERAND_TYPE_ID, // 1023
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1024
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1025
  SPV_OPERAND_TYPE_ID, // 1026
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 1027
  SPV_OPERAND_TYPE_ID, // 1028
  SPV_OPERAND_TYPE_ID, // 1029
  SPV_OPERAND_TYPE_ID, // 1030
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1031
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1032
  SPV_OPERAND_TYPE_ID, // 1033
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1034
  SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER, // 1035
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION, // 1036
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 1037
  SPV_OPERAND_TYPE_ID, // 1038
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY, // 1039
  SPV_OPERAND_TYPE_ID, // 1040
  SPV_OPERAND_TYPE_ID, // 1041
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1042
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1043
  SPV_OPERAND_TYPE_ID, // 1044
  SPV_OPERAND_TYPE_ID, // 1045
  SPV_OPERAND_TYPE_ID, // 1046
  SPV_OPERAND_TYPE_ID, // 1047
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1048
  SPV_OPERAND_TYPE_ID, // 1049
  SPV_OPERAND_TYPE_ID, // 1050
  SPV_OPERAND_TYPE_ID, // 1051
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1052
  SPV_OPERAND_TYPE_ID, // 1053
  SPV_OPERAND_TYPE_ID, // 1054
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1055
  SPV_OPERAND_TYPE_ID, // 1056
  SPV_OPERAND_TYPE_ID, // 1057
  SPV_OPERAND_TYPE_ID, // 1058
  SPV_OPERAND_TYPE_FP_ROUNDING_MODE, // 1059
};
