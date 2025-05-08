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

// Operand names and values, ordered by (operand kind, name)
// The fields in order are:
//   name, either the primary name or an alias, indexing into kStrings
//   enum value
static const std::array<NameValue, 1259> kOperandNames{{
  {IR(4468, 9), 0}, // 0 ReadOnly in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4477, 10), 2}, // 1 ReadWrite in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4487, 10), 1}, // 2 WriteOnly in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4497, 8), 0}, // 3 Logical in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4505, 11), 1}, // 4 Physical32 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4516, 11), 2}, // 5 Physical64 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4527, 24), 5348}, // 6 PhysicalStorageBuffer64 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4551, 27), 5348}, // 7 PhysicalStorageBuffer64EXT in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4578, 13), 5286}, // 8 BaryCoordKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4591, 12), 5286}, // 9 BaryCoordNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4603, 20), 4992}, // 10 BaryCoordNoPerspAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4623, 28), 4993}, // 11 BaryCoordNoPerspCentroidAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4651, 20), 5287}, // 12 BaryCoordNoPerspKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4671, 19), 5287}, // 13 BaryCoordNoPerspNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4690, 26), 4994}, // 14 BaryCoordNoPerspSampleAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4716, 22), 4998}, // 15 BaryCoordPullModelAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4738, 19), 4995}, // 16 BaryCoordSmoothAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4757, 27), 4996}, // 17 BaryCoordSmoothCentroidAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4784, 25), 4997}, // 18 BaryCoordSmoothSampleAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4809, 13), 4425}, // 19 BaseInstance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4822, 11), 4424}, // 20 BaseVertex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4833, 13), 3}, // 21 ClipDistance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4846, 22), 5277}, // 22 ClipDistancePerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4868, 12), 5436}, // 23 ClusterIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4880, 13), 4161}, // 24 CoreCountARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4893, 10), 4160}, // 25 CoreIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4903, 13), 4162}, // 26 CoreMaxIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4916, 13), 4}, // 27 CullDistance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4929, 22), 5278}, // 28 CullDistancePerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4951, 12), 6021}, // 29 CullMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4963, 17), 5299}, // 30 CullPrimitiveEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4980, 17), 5334}, // 31 CurrentRayTimeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4997, 12), 4438}, // 32 DeviceIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5009, 10), 4426}, // 33 DrawIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5019, 22), 32}, // 34 EnqueuedWorkgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5041, 10), 15}, // 35 FragCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5051, 10), 22}, // 36 FragDepth in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5061, 23), 5293}, // 37 FragInvocationCountEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5084, 12), 5292}, // 38 FragSizeEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5096, 18), 5014}, // 39 FragStencilRefEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5114, 15), 5292}, // 40 FragmentSizeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5129, 12), 17}, // 41 FrontFacing in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5141, 16), 5264}, // 42 FullyCoveredEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5157, 19), 28}, // 43 GlobalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5176, 15), 34}, // 44 GlobalLinearId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5191, 13), 33}, // 45 GlobalOffset in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5204, 11), 31}, // 46 GlobalSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5215, 17), 23}, // 47 HelperInvocation in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5232, 11), 5360}, // 48 HitIsLSSNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5243, 14), 5359}, // 49 HitIsSphereNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5257, 33), 5406}, // 50 HitKindBackFacingMicroTriangleNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5290, 34), 5405}, // 51 HitKindFrontFacingMicroTriangleNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5324, 11), 5333}, // 52 HitKindKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5335, 10), 5333}, // 53 HitKindNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5345, 18), 5396}, // 54 HitLSSPositionsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5363, 14), 5421}, // 55 HitLSSRadiiNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5377, 37), 5344}, // 56 HitMicroTriangleVertexBarycentricsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5414, 34), 5337}, // 57 HitMicroTriangleVertexPositionsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5448, 20), 5361}, // 58 HitSpherePositionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5468, 18), 5420}, // 59 HitSphereRadiusNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5486, 7), 5332}, // 60 HitTNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5493, 30), 5335}, // 61 HitTriangleVertexPositionsKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5523, 20), 5351}, // 62 IncomingRayFlagsKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5543, 19), 5351}, // 63 IncomingRayFlagsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5562, 23), 5327}, // 64 InstanceCustomIndexKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5585, 22), 5327}, // 65 InstanceCustomIndexNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5607, 11), 6}, // 66 InstanceId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5618, 14), 43}, // 67 InstanceIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5632, 13), 8}, // 68 InvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5645, 22), 5293}, // 69 InvocationsPerPixelNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5667, 12), 5319}, // 70 LaunchIdKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5679, 11), 5319}, // 71 LaunchIdNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5690, 14), 5320}, // 72 LaunchSizeKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5704, 13), 5320}, // 73 LaunchSizeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5717, 6), 9}, // 74 Layer in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5723, 15), 5279}, // 75 LayerPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5738, 18), 27}, // 76 LocalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5756, 21), 29}, // 77 LocalInvocationIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5777, 16), 5280}, // 78 MeshViewCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5793, 18), 5281}, // 79 MeshViewIndicesNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5811, 21), 39}, // 80 NumEnqueuedSubgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5832, 13), 38}, // 81 NumSubgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5845, 14), 24}, // 82 NumWorkgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5859, 22), 5324}, // 83 ObjectRayDirectionKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5881, 21), 5324}, // 84 ObjectRayDirectionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5902, 19), 5323}, // 85 ObjectRayOriginKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5921, 18), 5323}, // 86 ObjectRayOriginNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5939, 17), 5330}, // 87 ObjectToWorldKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5956, 16), 5330}, // 88 ObjectToWorldNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5972, 14), 14}, // 89 PatchVertices in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5986, 11), 16}, // 90 PointCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5997, 10), 1}, // 91 PointSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6007, 9), 0}, // 92 Position in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6016, 18), 5261}, // 93 PositionPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6034, 17), 5275}, // 94 PrimitiveCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6051, 12), 7}, // 95 PrimitiveId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6063, 19), 5276}, // 96 PrimitiveIndicesNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6082, 24), 5295}, // 97 PrimitiveLineIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6106, 25), 5294}, // 98 PrimitivePointIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6131, 24), 4432}, // 99 PrimitiveShadingRateKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6155, 28), 5296}, // 100 PrimitiveTriangleIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6183, 20), 5352}, // 101 RayGeometryIndexKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6203, 11), 5326}, // 102 RayTmaxKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6214, 10), 5326}, // 103 RayTmaxNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6224, 11), 5325}, // 104 RayTminKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6235, 10), 5325}, // 105 RayTminNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6245, 29), 5021}, // 106 RemainingRecursionLevelsAMDX in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6274, 10), 5375}, // 107 SMCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6284, 7), 5377}, // 108 SMIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6291, 9), 18}, // 109 SampleId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6300, 11), 20}, // 110 SampleMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6311, 15), 19}, // 111 SamplePosition in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6326, 20), 5257}, // 112 SecondaryPositionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6346, 24), 5258}, // 113 SecondaryViewportMaskNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6370, 16), 5073}, // 114 ShaderIndexAMDX in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6386, 15), 4444}, // 115 ShadingRateKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6401, 15), 4416}, // 116 SubgroupEqMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6416, 18), 4416}, // 117 SubgroupEqMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6434, 15), 4417}, // 118 SubgroupGeMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6449, 18), 4417}, // 119 SubgroupGeMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6467, 15), 4418}, // 120 SubgroupGtMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6482, 18), 4418}, // 121 SubgroupGtMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6500, 11), 40}, // 122 SubgroupId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6511, 15), 4419}, // 123 SubgroupLeMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6526, 18), 4419}, // 124 SubgroupLeMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6544, 26), 41}, // 125 SubgroupLocalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6570, 15), 4420}, // 126 SubgroupLtMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6585, 18), 4420}, // 127 SubgroupLtMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6603, 16), 37}, // 128 SubgroupMaxSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6619, 13), 36}, // 129 SubgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6632, 12), 5274}, // 130 TaskCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6644, 10), 13}, // 131 TessCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6654, 15), 12}, // 132 TessLevelInner in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6669, 15), 11}, // 133 TessLevelOuter in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6684, 18), 4494}, // 134 TileApronSizeQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6702, 18), 4493}, // 135 TileDimensionQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6720, 15), 4492}, // 136 TileOffsetQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6735, 9), 5}, // 137 VertexId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6744, 12), 42}, // 138 VertexIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6756, 10), 4440}, // 139 ViewIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6766, 14), 10}, // 140 ViewportIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6780, 15), 5253}, // 141 ViewportMaskNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6795, 22), 5262}, // 142 ViewportMaskPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6817, 10), 4163}, // 143 WarpIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6827, 9), 5376}, // 144 WarpIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6836, 13), 4164}, // 145 WarpMaxIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6849, 13), 5374}, // 146 WarpsPerSMNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6862, 8), 30}, // 147 WorkDim in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6870, 12), 26}, // 148 WorkgroupId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6882, 14), 25}, // 149 WorkgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6896, 21), 5322}, // 150 WorldRayDirectionKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6917, 20), 5322}, // 151 WorldRayDirectionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6937, 18), 5321}, // 152 WorldRayOriginKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6955, 17), 5321}, // 153 WorldRayOriginNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6972, 17), 5331}, // 154 WorldToObjectKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6989, 16), 5331}, // 155 WorldToObjectNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7005, 10), 4}, // 156 Addresses in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7015, 34), 5922}, // 157 ArbitraryPrecisionFixedPointINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7049, 37), 5845}, // 158 ArbitraryPrecisionFloatingPointINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7086, 32), 5844}, // 159 ArbitraryPrecisionIntegersINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7118, 19), 6144}, // 160 ArithmeticFenceEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7137, 9), 5606}, // 161 AsmINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7146, 20), 6095}, // 162 AtomicFloat16AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7166, 23), 5616}, // 163 AtomicFloat16MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7189, 22), 5404}, // 164 AtomicFloat16VectorNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7211, 20), 6033}, // 165 AtomicFloat32AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7231, 23), 5612}, // 166 AtomicFloat32MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7254, 20), 6034}, // 167 AtomicFloat64AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7274, 23), 5613}, // 168 AtomicFloat64MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7297, 14), 21}, // 169 AtomicStorage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7311, 17), 4445}, // 170 AtomicStorageOps in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7328, 24), 6115}, // 171 BFloat16ConversionINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7352, 29), 5118}, // 172 BFloat16CooperativeMatrixKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7381, 22), 5117}, // 173 BFloat16DotProductKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7403, 16), 5116}, // 174 BFloat16TypeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7419, 18), 5390}, // 175 BindlessTextureNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7437, 16), 6025}, // 176 BitInstructions in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7453, 19), 5945}, // 177 BlockingPipesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7472, 19), 6441}, // 178 CacheControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4833, 13), 32}, // 179 ClipDistance in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7491, 32), 5350}, // 180 ComputeDerivativeGroupLinearKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7523, 31), 5350}, // 181 ComputeDerivativeGroupLinearNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7554, 31), 5288}, // 182 ComputeDerivativeGroupQuadsKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7585, 30), 5288}, // 183 ComputeDerivativeGroupQuadsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7615, 30), 5434}, // 184 CooperativeMatrixBlockLoadsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7645, 31), 5431}, // 185 CooperativeMatrixConversionsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7676, 21), 6022}, // 186 CooperativeMatrixKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7697, 28), 4201}, // 187 CooperativeMatrixLayoutsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7725, 20), 5357}, // 188 CooperativeMatrixNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7745, 40), 5432}, // 189 CooperativeMatrixPerElementOperationsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7785, 30), 5430}, // 190 CooperativeMatrixReductionsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7815, 36), 5433}, // 191 CooperativeMatrixTensorAddressingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7851, 20), 5394}, // 192 CooperativeVectorNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7871, 28), 5435}, // 193 CooperativeVectorTrainingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7899, 16), 4165}, // 194 CoreBuiltinsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4916, 13), 33}, // 195 CullDistance in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7915, 21), 6114}, // 196 DebugInfoModuleINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7936, 25), 5379}, // 197 DemoteToHelperInvocation in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7961, 28), 5379}, // 198 DemoteToHelperInvocationEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7989, 18), 4465}, // 199 DenormFlushToZero in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8007, 15), 4464}, // 200 DenormPreserve in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8022, 18), 51}, // 201 DerivativeControl in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8040, 14), 19}, // 202 DeviceEnqueue in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8054, 12), 4437}, // 203 DeviceGroup in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8066, 23), 5380}, // 204 DisplacementMicromapNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8089, 11), 6019}, // 205 DotProduct in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8100, 22), 6017}, // 206 DotProductInput4x8Bit in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8122, 25), 6017}, // 207 DotProductInput4x8BitKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8147, 28), 6018}, // 208 DotProductInput4x8BitPacked in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8175, 31), 6018}, // 209 DotProductInput4x8BitPackedKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8206, 19), 6016}, // 210 DotProductInputAll in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8225, 22), 6016}, // 211 DotProductInputAllKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8247, 14), 6019}, // 212 DotProductKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8261, 15), 4427}, // 213 DrawParameters in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8276, 16), 5629}, // 214 ExpectAssumeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8292, 20), 5837}, // 215 FPFastMathModeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8312, 28), 6174}, // 216 FPGAArgumentInterfacesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8340, 24), 5920}, // 217 FPGABufferLocationINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8364, 27), 5904}, // 218 FPGAClusterAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8391, 29), 6150}, // 219 FPGAClusterAttributesV2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8420, 20), 5908}, // 220 FPGADSPControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8440, 40), 5916}, // 221 FPGAInvocationPipeliningAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8480, 26), 5897}, // 222 FPGAKernelAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8506, 28), 6161}, // 223 FPGAKernelAttributesv2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8534, 24), 6171}, // 224 FPGALatencyControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8558, 22), 5888}, // 225 FPGALoopControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8580, 24), 5898}, // 226 FPGAMemoryAccessesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8604, 26), 5824}, // 227 FPGAMemoryAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8630, 13), 5948}, // 228 FPGARegINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8643, 16), 6169}, // 229 FPMaxErrorINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8659, 8), 9}, // 230 Float16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8667, 14), 8}, // 231 Float16Buffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8681, 16), 5008}, // 232 Float16ImageAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8697, 8), 10}, // 233 Float64 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8705, 15), 6029}, // 234 FloatControls2 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8720, 23), 5583}, // 235 FloatingPointModeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8743, 23), 5284}, // 236 FragmentBarycentricKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8766, 22), 5284}, // 237 FragmentBarycentricNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8788, 19), 5291}, // 238 FragmentDensityEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8807, 24), 5265}, // 239 FragmentFullyCoveredEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8831, 16), 5010}, // 240 FragmentMaskAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8847, 32), 5378}, // 241 FragmentShaderPixelInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8879, 33), 5363}, // 242 FragmentShaderSampleInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8912, 38), 5372}, // 243 FragmentShaderShadingRateInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8950, 23), 4422}, // 244 FragmentShadingRateKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8973, 26), 5821}, // 245 FunctionFloatControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8999, 22), 5603}, // 246 FunctionPointersINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9021, 15), 38}, // 247 GenericPointer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9036, 9), 2}, // 248 Geometry in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9045, 18), 24}, // 249 GeometryPointSize in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9063, 28), 5251}, // 250 GeometryShaderPassthroughNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9091, 16), 54}, // 251 GeometryStreams in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9107, 35), 6189}, // 252 GlobalVariableFPGADecorationsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9142, 30), 6187}, // 253 GlobalVariableHostAccessINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9172, 16), 61}, // 254 GroupNonUniform in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9188, 26), 63}, // 255 GroupNonUniformArithmetic in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9214, 22), 64}, // 256 GroupNonUniformBallot in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9236, 25), 67}, // 257 GroupNonUniformClustered in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9261, 29), 5297}, // 258 GroupNonUniformPartitionedNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9290, 20), 68}, // 259 GroupNonUniformQuad in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9310, 25), 6026}, // 260 GroupNonUniformRotateKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9335, 23), 65}, // 261 GroupNonUniformShuffle in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9358, 31), 66}, // 262 GroupNonUniformShuffleRelative in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9389, 20), 62}, // 263 GroupNonUniformVote in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9409, 26), 6400}, // 264 GroupUniformArithmeticKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9435, 7), 18}, // 265 Groups in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9442, 13), 5943}, // 266 IOPipesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9455, 8), 44}, // 267 Image1D in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9463, 11), 13}, // 268 ImageBasic in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9474, 12), 47}, // 269 ImageBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9486, 15), 34}, // 270 ImageCubeArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9501, 17), 5282}, // 271 ImageFootprintNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9518, 22), 5009}, // 272 ImageGatherBiasLodAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9540, 20), 25}, // 273 ImageGatherExtended in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9560, 13), 48}, // 274 ImageMSArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9573, 12), 15}, // 275 ImageMipmap in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9585, 11), 50}, // 276 ImageQuery in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9596, 15), 14}, // 277 ImageReadWrite in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9611, 21), 5015}, // 278 ImageReadWriteLodAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9632, 10), 36}, // 279 ImageRect in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9642, 24), 5604}, // 280 IndirectReferencesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9666, 16), 40}, // 281 InputAttachment in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9682, 36), 5303}, // 282 InputAttachmentArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9718, 39), 5303}, // 283 InputAttachmentArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9757, 39), 5310}, // 284 InputAttachmentArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9796, 42), 5310}, // 285 InputAttachmentArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9838, 6), 22}, // 286 Int16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9844, 6), 11}, // 287 Int64 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9850, 13), 12}, // 288 Int64Atomics in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9863, 14), 5016}, // 289 Int64ImageEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9877, 5), 39}, // 290 Int8 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9882, 23), 5584}, // 291 IntegerFunctions2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9905, 22), 52}, // 292 InterpolationFunction in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9927, 7), 6}, // 293 Kernel in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9934, 22), 5892}, // 294 KernelAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9956, 8), 5}, // 295 Linkage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9964, 15), 20}, // 296 LiteralSampler in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9979, 20), 6089}, // 297 LongCompositesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9999, 14), 5906}, // 298 LoopFuseINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10013, 25), 6427}, // 299 MaskedGatherScatterINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10038, 7), 0}, // 300 Matrix in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10045, 26), 5910}, // 301 MemoryAccessAliasingINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10071, 15), 5283}, // 302 MeshShadingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10086, 14), 5266}, // 303 MeshShadingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10100, 7), 42}, // 304 MinLod in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10107, 10), 4439}, // 305 MultiView in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10117, 14), 57}, // 306 MultiViewport in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10131, 13), 59}, // 307 NamedBarrier in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10144, 11), 6094}, // 308 OptNoneEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10155, 13), 6094}, // 309 OptNoneINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10168, 20), 5260}, // 310 PerViewAttributesNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10188, 31), 5347}, // 311 PhysicalStorageBufferAddresses in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10219, 34), 5347}, // 312 PhysicalStorageBufferAddressesEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10253, 12), 60}, // 313 PipeStorage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10265, 6), 17}, // 314 Pipes in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10271, 15), 5087}, // 315 QuadControlKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10286, 18), 5414}, // 316 RawAccessChainsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10304, 15), 6020}, // 317 RayCullMaskKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10319, 12), 4472}, // 318 RayQueryKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10331, 25), 5391}, // 319 RayQueryPositionFetchKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10356, 23), 4471}, // 320 RayQueryProvisionalKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10379, 41), 5437}, // 321 RayTracingClusterAccelerationStructureNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10420, 33), 5409}, // 322 RayTracingDisplacementMicromapNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10453, 14), 4479}, // 323 RayTracingKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10467, 39), 5419}, // 324 RayTracingLinearSweptSpheresGeometryNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10506, 23), 5341}, // 325 RayTracingMotionBlurNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10529, 13), 5340}, // 326 RayTracingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10542, 29), 5381}, // 327 RayTracingOpacityMicromapEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10571, 27), 5336}, // 328 RayTracingPositionFetchKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10598, 25), 5353}, // 329 RayTracingProvisionalKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10623, 28), 5418}, // 330 RayTracingSpheresGeometryNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10651, 32), 4478}, // 331 RayTraversalPrimitiveCullingKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10683, 20), 6460}, // 332 RegisterLimitsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10703, 24), 6024}, // 333 ReplicatedCompositesEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10727, 21), 5582}, // 334 RoundToInfinityINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10748, 16), 4467}, // 335 RoundingModeRTE in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10764, 16), 4468}, // 336 RoundingModeRTZ in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10780, 29), 5939}, // 337 RuntimeAlignedAttributeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10809, 23), 5302}, // 338 RuntimeDescriptorArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10832, 26), 5302}, // 339 RuntimeDescriptorArrayEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10858, 29), 5249}, // 340 SampleMaskOverrideCoverageNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10887, 28), 4447}, // 341 SampleMaskPostDepthCoverage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10915, 18), 35}, // 342 SampleRateShading in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10933, 10), 43}, // 343 Sampled1D in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10943, 14), 46}, // 344 SampledBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10957, 17), 45}, // 345 SampledCubeArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10974, 33), 29}, // 346 SampledImageArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11007, 36), 5307}, // 347 SampledImageArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11043, 39), 5307}, // 348 SampledImageArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11082, 12), 37}, // 349 SampledRect in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11094, 7), 1}, // 350 Shader in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11101, 15), 5055}, // 351 ShaderClockKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11116, 18), 5067}, // 352 ShaderEnqueueAMDX in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11134, 26), 5383}, // 353 ShaderInvocationReorderNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11160, 12), 69}, // 354 ShaderLayer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11172, 17), 5301}, // 355 ShaderNonUniform in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11189, 20), 5301}, // 356 ShaderNonUniformEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11209, 19), 5373}, // 357 ShaderSMBuiltinsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11228, 19), 5259}, // 358 ShaderStereoViewNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11247, 20), 70}, // 359 ShaderViewportIndex in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11267, 28), 5254}, // 360 ShaderViewportIndexLayerEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11295, 27), 5254}, // 361 ShaderViewportIndexLayerNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11322, 21), 5255}, // 362 ShaderViewportMaskNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11343, 14), 5291}, // 363 ShadingRateNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11357, 25), 4466}, // 364 SignedZeroInfNanPreserve in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11382, 16), 41}, // 365 SparseResidency in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11398, 18), 6141}, // 366 SplitBarrierINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11416, 17), 5013}, // 367 StencilExportEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11433, 25), 4433}, // 368 StorageBuffer16BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11458, 24), 4448}, // 369 StorageBuffer8BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11482, 34), 30}, // 370 StorageBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11516, 37), 5308}, // 371 StorageBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11553, 40), 5308}, // 372 StorageBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11593, 33), 31}, // 373 StorageImageArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11626, 36), 5309}, // 374 StorageImageArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11662, 39), 5309}, // 375 StorageImageArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11701, 28), 49}, // 376 StorageImageExtendedFormats in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11729, 24), 27}, // 377 StorageImageMultisample in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11753, 30), 55}, // 378 StorageImageReadWithoutFormat in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11783, 31), 56}, // 379 StorageImageWriteWithoutFormat in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11814, 21), 4436}, // 380 StorageInputOutput16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11835, 22), 4435}, // 381 StoragePushConstant16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11857, 21), 4450}, // 382 StoragePushConstant8 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11878, 39), 5305}, // 383 StorageTexelBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11917, 42), 5305}, // 384 StorageTexelBufferArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11959, 42), 5312}, // 385 StorageTexelBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12001, 45), 5312}, // 386 StorageTexelBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12046, 17), 4434}, // 387 StorageUniform16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12063, 28), 4433}, // 388 StorageUniformBufferBlock16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12091, 23), 6228}, // 389 Subgroup2DBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12114, 30), 6229}, // 390 Subgroup2DBlockTransformINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12144, 30), 6230}, // 391 Subgroup2DBlockTransposeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12174, 39), 5698}, // 392 SubgroupAvcMotionEstimationChromaINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12213, 33), 5696}, // 393 SubgroupAvcMotionEstimationINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12246, 38), 5697}, // 394 SubgroupAvcMotionEstimationIntraINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12284, 18), 4423}, // 395 SubgroupBallotKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12302, 27), 5569}, // 396 SubgroupBufferBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12329, 28), 6220}, // 397 SubgroupBufferPrefetchINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12357, 17), 58}, // 398 SubgroupDispatch in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12374, 26), 5570}, // 399 SubgroupImageBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12400, 31), 5579}, // 400 SubgroupImageMediaBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12431, 38), 6236}, // 401 SubgroupMatrixMultiplyAccumulateINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12469, 21), 5568}, // 402 SubgroupShuffleINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12490, 16), 4431}, // 403 SubgroupVoteKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12506, 18), 6162}, // 404 TaskSequenceINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12524, 19), 5439}, // 405 TensorAddressingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12543, 27), 6425}, // 406 TensorFloat32RoundingINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12570, 28), 6241}, // 407 TernaryBitwiseFunctionINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12598, 13), 3}, // 408 Tessellation in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12611, 22), 23}, // 409 TessellationPointSize in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12633, 23), 4498}, // 410 TextureBlockMatch2QCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12656, 22), 4486}, // 411 TextureBlockMatchQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12678, 21), 4485}, // 412 TextureBoxFilterQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12699, 26), 4484}, // 413 TextureSampleWeightedQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12725, 28), 4166}, // 414 TileImageColorReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12753, 28), 4167}, // 415 TileImageDepthReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12781, 30), 4168}, // 416 TileImageStencilReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12811, 16), 4495}, // 417 TileShadingQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12827, 18), 53}, // 418 TransformFeedback in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12845, 23), 5935}, // 419 USMStorageClassesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12868, 35), 4434}, // 420 UniformAndStorageBuffer16BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12903, 34), 4449}, // 421 UniformAndStorageBuffer8BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12937, 34), 28}, // 422 UniformBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12971, 37), 5306}, // 423 UniformBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13008, 40), 5306}, // 424 UniformBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13048, 18), 71}, // 425 UniformDecoration in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13066, 39), 5304}, // 426 UniformTexelBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13105, 42), 5304}, // 427 UniformTexelBufferArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13147, 42), 5311}, // 428 UniformTexelBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13189, 45), 5311}, // 429 UniformTexelBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13234, 30), 5886}, // 430 UnstructuredLoopControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13264, 19), 4473}, // 431 UntypedPointersKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13283, 25), 5817}, // 432 VariableLengthArrayINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13308, 17), 4442}, // 433 VariablePointers in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13325, 30), 4441}, // 434 VariablePointersStorageBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13355, 9), 7}, // 435 Vector16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13364, 15), 5619}, // 436 VectorAnyINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13379, 19), 5617}, // 437 VectorComputeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13398, 18), 5345}, // 438 VulkanMemoryModel in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13416, 29), 5346}, // 439 VulkanMemoryModelDeviceScope in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13445, 32), 5346}, // 440 VulkanMemoryModelDeviceScopeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13477, 21), 5345}, // 441 VulkanMemoryModelKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13498, 44), 4430}, // 442 WorkgroupMemoryExplicitLayout16BitAccessKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13542, 43), 4429}, // 443 WorkgroupMemoryExplicitLayout8BitAccessKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13585, 33), 4428}, // 444 WorkgroupMemoryExplicitLayoutKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13618, 8), 1}, // 445 Address in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13626, 8), 2}, // 446 Boolean in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13634, 6), 3}, // 447 Float in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13640, 7), 4}, // 448 Signed in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13647, 11), 5}, // 449 SignedChar in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13658, 9), 6}, // 450 Unsigned in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13667, 13), 7}, // 451 UnsignedChar in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13680, 12), 0}, // 452 Unspecified in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13692, 6), 0}, // 453 Class in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13698, 10), 1}, // 454 Structure in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13708, 6), 2}, // 455 Union in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13714, 20), 1}, // 456 ImportedDeclaration in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(13734, 15), 0}, // 457 ImportedModule in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(13749, 15), 32}, // 458 FlagArtificial in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13764, 13), 64}, // 459 FlagExplicit in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13777, 12), 16}, // 460 FlagFwdDecl in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13789, 21), 1024}, // 461 FlagIndirectVariable in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13810, 17), 8}, // 462 FlagIsDefinition in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13827, 16), 16384}, // 463 FlagIsEnumClass in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13843, 12), 4}, // 464 FlagIsLocal in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13855, 16), 8192}, // 465 FlagIsOptimized in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13871, 14), 2}, // 466 FlagIsPrivate in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13885, 16), 1}, // 467 FlagIsProtected in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13901, 13), 3}, // 468 FlagIsPublic in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13914, 20), 2048}, // 469 FlagLValueReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13934, 18), 256}, // 470 FlagObjectPointer in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13952, 15), 128}, // 471 FlagPrototyped in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13967, 20), 4096}, // 472 FlagRValueReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(13987, 17), 512}, // 473 FlagStaticMember in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14004, 24), 65536}, // 474 FlagTypePassByReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14028, 20), 32768}, // 475 FlagTypePassByValue in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14048, 5), 0}, // 476 None in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14053, 9), 4}, // 477 BitPiece in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14062, 7), 8}, // 478 Constu in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14069, 6), 0}, // 479 Deref in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14075, 9), 9}, // 480 Fragment in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14084, 6), 2}, // 481 Minus in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14090, 5), 1}, // 482 Plus in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14095, 11), 3}, // 483 PlusUconst in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14106, 11), 7}, // 484 StackValue in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14117, 5), 5}, // 485 Swap in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14122, 7), 6}, // 486 Xderef in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14129, 11), 3}, // 487 AtomicType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14140, 10), 0}, // 488 ConstType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14150, 13), 2}, // 489 RestrictType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14163, 13), 1}, // 490 VolatileType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14176, 10), 0}, // 491 Float16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14186, 10), 1}, // 492 Float32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14196, 10), 2}, // 493 Float64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14206, 12), 1000491002}, // 494 FloatE4M3NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14218, 12), 1000491003}, // 495 FloatE5M2NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14230, 14), 4}, // 496 SignedInt16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14244, 14), 5}, // 497 SignedInt32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14258, 14), 6}, // 498 SignedInt64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14272, 13), 3}, // 499 SignedInt8NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14285, 19), 1000491000}, // 500 SignedInt8PackedNV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14304, 16), 8}, // 501 UnsignedInt16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14320, 16), 9}, // 502 UnsignedInt32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14336, 16), 10}, // 503 UnsignedInt64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14352, 15), 7}, // 504 UnsignedInt8NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14367, 21), 1000491001}, // 505 UnsignedInt8PackedNV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14388, 28), 4203}, // 506 ColumnBlockedInterleavedARM in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14416, 15), 1}, // 507 ColumnMajorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14431, 25), 4202}, // 508 RowBlockedInterleavedARM in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14456, 12), 0}, // 509 RowMajorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14468, 27), 1}, // 510 MatrixASignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14495, 27), 2}, // 511 MatrixBSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14522, 27), 4}, // 512 MatrixCSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14549, 32), 8}, // 513 MatrixResultSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14581, 8), 0}, // 514 NoneKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14589, 26), 16}, // 515 SaturatingAccumulationKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14615, 4), 4}, // 516 2x2 in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(14619, 7), 2}, // 517 Column in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(14626, 4), 1}, // 518 Row in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(14630, 11), 0}, // 519 MatrixAKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(14641, 21), 2}, // 520 MatrixAccumulatorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(14662, 11), 1}, // 521 MatrixBKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(14673, 14), 1}, // 522 ColumnMajorNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(14687, 21), 2}, // 523 InferencingOptimalNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(14708, 11), 0}, // 524 RowMajorNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(14719, 18), 3}, // 525 TrainingOptimalNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(13618, 8), 1}, // 526 Address in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13626, 8), 2}, // 527 Boolean in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13634, 6), 4}, // 528 Float in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13640, 7), 5}, // 529 Signed in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13647, 11), 6}, // 530 SignedChar in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13658, 9), 7}, // 531 Unsigned in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13667, 13), 8}, // 532 UnsignedChar in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13680, 12), 0}, // 533 Unspecified in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13692, 6), 0}, // 534 Class in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(13698, 10), 1}, // 535 Structure in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(13708, 6), 2}, // 536 Union in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(13749, 15), 32}, // 537 FlagArtificial in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13764, 13), 64}, // 538 FlagExplicit in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13777, 12), 16}, // 539 FlagFwdDecl in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13789, 21), 1024}, // 540 FlagIndirectVariable in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13810, 17), 8}, // 541 FlagIsDefinition in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13843, 12), 4}, // 542 FlagIsLocal in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13855, 16), 8192}, // 543 FlagIsOptimized in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13871, 14), 2}, // 544 FlagIsPrivate in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13885, 16), 1}, // 545 FlagIsProtected in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13901, 13), 3}, // 546 FlagIsPublic in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13914, 20), 2048}, // 547 FlagLValueReference in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13934, 18), 256}, // 548 FlagObjectPointer in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13952, 15), 128}, // 549 FlagPrototyped in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13967, 20), 4096}, // 550 FlagRValueReference in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(13987, 17), 512}, // 551 FlagStaticMember in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14048, 5), 0}, // 552 None in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14053, 9), 4}, // 553 BitPiece in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14062, 7), 8}, // 554 Constu in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14069, 6), 0}, // 555 Deref in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14084, 6), 2}, // 556 Minus in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14090, 5), 1}, // 557 Plus in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14095, 11), 3}, // 558 PlusUconst in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14106, 11), 7}, // 559 StackValue in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14117, 5), 5}, // 560 Swap in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14122, 7), 6}, // 561 Xderef in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14140, 10), 0}, // 562 ConstType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(14150, 13), 2}, // 563 RestrictType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(14163, 13), 1}, // 564 VolatileType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(14737, 16), 5914}, // 565 AliasScopeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14753, 8), 20}, // 566 Aliased in SPV_OPERAND_TYPE_DECORATION
  {IR(14761, 15), 5356}, // 567 AliasedPointer in SPV_OPERAND_TYPE_DECORATION
  {IR(14776, 18), 5356}, // 568 AliasedPointerEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(14794, 10), 44}, // 569 Alignment in SPV_OPERAND_TYPE_DECORATION
  {IR(14804, 12), 46}, // 570 AlignmentId in SPV_OPERAND_TYPE_DECORATION
  {IR(14816, 12), 6}, // 571 ArrayStride in SPV_OPERAND_TYPE_DECORATION
  {IR(14828, 14), 5835}, // 572 BankBitsINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14842, 15), 5828}, // 573 BankwidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(14857, 8), 33}, // 574 Binding in SPV_OPERAND_TYPE_DECORATION
  {IR(14865, 16), 5399}, // 575 BindlessImageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(14881, 18), 5398}, // 576 BindlessSamplerNV in SPV_OPERAND_TYPE_DECORATION
  {IR(14899, 6), 2}, // 577 Block in SPV_OPERAND_TYPE_DECORATION
  {IR(14905, 22), 4499}, // 578 BlockMatchSamplerQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(14927, 22), 4488}, // 579 BlockMatchTextureQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(14949, 13), 5401}, // 580 BoundImageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(14962, 15), 5400}, // 581 BoundSamplerNV in SPV_OPERAND_TYPE_DECORATION
  {IR(14977, 12), 3}, // 582 BufferBlock in SPV_OPERAND_TYPE_DECORATION
  {IR(14989, 20), 5921}, // 583 BufferLocationINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15009, 8), 11}, // 584 BuiltIn in SPV_OPERAND_TYPE_DECORATION
  {IR(15017, 19), 5899}, // 585 BurstCoalesceINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15036, 8), 10}, // 586 CPacked in SPV_OPERAND_TYPE_DECORATION
  {IR(15044, 22), 6442}, // 587 CacheControlLoadINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15066, 23), 6443}, // 588 CacheControlStoreINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15089, 15), 5900}, // 589 CacheSizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15104, 9), 16}, // 590 Centroid in SPV_OPERAND_TYPE_DECORATION
  {IR(15113, 13), 5607}, // 591 ClobberINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15126, 9), 23}, // 592 Coherent in SPV_OPERAND_TYPE_DECORATION
  {IR(15135, 9), 5}, // 593 ColMajor in SPV_OPERAND_TYPE_DECORATION
  {IR(15144, 10), 31}, // 594 Component in SPV_OPERAND_TYPE_DECORATION
  {IR(15154, 27), 6175}, // 595 ConduitKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15181, 9), 22}, // 596 Constant in SPV_OPERAND_TYPE_DECORATION
  {IR(15190, 14), 5634}, // 597 CounterBuffer in SPV_OPERAND_TYPE_DECORATION
  {IR(15204, 14), 34}, // 598 DescriptorSet in SPV_OPERAND_TYPE_DECORATION
  {IR(15218, 28), 5901}, // 599 DontStaticallyCoalesceINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15246, 16), 5831}, // 600 DoublepumpINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15262, 18), 4999}, // 601 ExplicitInterpAMD in SPV_OPERAND_TYPE_DECORATION
  {IR(15280, 15), 40}, // 602 FPFastMathMode in SPV_OPERAND_TYPE_DECORATION
  {IR(15295, 26), 6170}, // 603 FPMaxErrorDecorationINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15321, 15), 39}, // 604 FPRoundingMode in SPV_OPERAND_TYPE_DECORATION
  {IR(15336, 5), 14}, // 605 Flat in SPV_OPERAND_TYPE_DECORATION
  {IR(15341, 20), 5836}, // 606 ForcePow2DepthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15361, 14), 38}, // 607 FuncParamAttr in SPV_OPERAND_TYPE_DECORATION
  {IR(15375, 21), 5625}, // 608 FuncParamIOKindINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15396, 24), 5823}, // 609 FunctionDenormModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15420, 31), 6080}, // 610 FunctionFloatingPointModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15451, 26), 5822}, // 611 FunctionRoundingModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15477, 25), 5907}, // 612 FuseLoopsInFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15502, 11), 9}, // 613 GLSLPacked in SPV_OPERAND_TYPE_DECORATION
  {IR(15513, 11), 8}, // 614 GLSLShared in SPV_OPERAND_TYPE_DECORATION
  {IR(15524, 26), 5628}, // 615 GlobalVariableOffsetINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15550, 30), 5386}, // 616 HitObjectShaderRecordBufferNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15580, 24), 5634}, // 617 HlslCounterBufferGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(15604, 19), 5635}, // 618 HlslSemanticGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(15623, 16), 6188}, // 619 HostAccessINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15639, 19), 5944}, // 620 IOPipeStorageINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15658, 28), 6191}, // 621 ImplementInRegisterMapINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15686, 6), 32}, // 622 Index in SPV_OPERAND_TYPE_DECORATION
  {IR(15692, 14), 6190}, // 623 InitModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15706, 24), 5917}, // 624 InitiationIntervalINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15730, 21), 43}, // 625 InputAttachmentIndex in SPV_OPERAND_TYPE_DECORATION
  {IR(15751, 10), 18}, // 626 Invariant in SPV_OPERAND_TYPE_DECORATION
  {IR(15761, 30), 6173}, // 627 LatencyControlConstraintINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15791, 25), 6172}, // 628 LatencyControlLabelINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15816, 18), 41}, // 629 LinkageAttributes in SPV_OPERAND_TYPE_DECORATION
  {IR(15834, 9), 30}, // 630 Location in SPV_OPERAND_TYPE_DECORATION
  {IR(15843, 33), 6177}, // 631 MMHostInterfaceAddressWidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15876, 30), 6178}, // 632 MMHostInterfaceDataWidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15906, 28), 6179}, // 633 MMHostInterfaceLatencyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15934, 29), 6181}, // 634 MMHostInterfaceMaxBurstINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15963, 34), 6180}, // 635 MMHostInterfaceReadWriteModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15997, 32), 6182}, // 636 MMHostInterfaceWaitRequestINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16029, 19), 5909}, // 637 MathOpDSPModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16048, 13), 7}, // 638 MatrixStride in SPV_OPERAND_TYPE_DECORATION
  {IR(16061, 14), 45}, // 639 MaxByteOffset in SPV_OPERAND_TYPE_DECORATION
  {IR(16075, 16), 47}, // 640 MaxByteOffsetId in SPV_OPERAND_TYPE_DECORATION
  {IR(16091, 20), 5918}, // 641 MaxConcurrencyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16111, 22), 5829}, // 642 MaxPrivateCopiesINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16133, 19), 5832}, // 643 MaxReplicatesINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16152, 18), 6140}, // 644 MediaBlockIOINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16170, 12), 5826}, // 645 MemoryINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16182, 11), 5834}, // 646 MergeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16193, 13), 5915}, // 647 NoAliasINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16206, 14), 42}, // 648 NoContraction in SPV_OPERAND_TYPE_DECORATION
  {IR(16220, 14), 13}, // 649 NoPerspective in SPV_OPERAND_TYPE_DECORATION
  {IR(16234, 13), 4469}, // 650 NoSignedWrap in SPV_OPERAND_TYPE_DECORATION
  {IR(16247, 15), 4470}, // 651 NoUnsignedWrap in SPV_OPERAND_TYPE_DECORATION
  {IR(16262, 20), 5020}, // 652 NodeMaxPayloadsAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16282, 32), 5019}, // 653 NodeSharesPayloadLimitsWithAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16314, 12), 25}, // 654 NonReadable in SPV_OPERAND_TYPE_DECORATION
  {IR(16326, 11), 5300}, // 655 NonUniform in SPV_OPERAND_TYPE_DECORATION
  {IR(16337, 14), 5300}, // 656 NonUniformEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(16351, 12), 24}, // 657 NonWritable in SPV_OPERAND_TYPE_DECORATION
  {IR(16363, 14), 5827}, // 658 NumbanksINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16377, 7), 35}, // 659 Offset in SPV_OPERAND_TYPE_DECORATION
  {IR(16384, 19), 5248}, // 660 OverrideCoverageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16403, 14), 5250}, // 661 PassthroughNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16417, 6), 15}, // 662 Patch in SPV_OPERAND_TYPE_DECORATION
  {IR(16423, 28), 5105}, // 663 PayloadDispatchIndirectAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16451, 25), 5100}, // 664 PayloadNodeArraySizeAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16476, 25), 5098}, // 665 PayloadNodeBaseIndexAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16501, 20), 5091}, // 666 PayloadNodeNameAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16521, 27), 5099}, // 667 PayloadNodeSparseArrayAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16548, 16), 5271}, // 668 PerPrimitiveEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(16564, 15), 5271}, // 669 PerPrimitiveNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16579, 10), 5273}, // 670 PerTaskNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16589, 13), 5285}, // 671 PerVertexKHR in SPV_OPERAND_TYPE_DECORATION
  {IR(16602, 12), 5285}, // 672 PerVertexNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16614, 10), 5272}, // 673 PerViewNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16624, 20), 5919}, // 674 PipelineEnableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16644, 14), 5902}, // 675 PrefetchINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16658, 26), 5602}, // 676 ReferencedIndirectlyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16684, 14), 5825}, // 677 RegisterINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16698, 31), 6176}, // 678 RegisterMapKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16729, 17), 0}, // 679 RelaxedPrecision in SPV_OPERAND_TYPE_DECORATION
  {IR(16746, 9), 19}, // 680 Restrict in SPV_OPERAND_TYPE_DECORATION
  {IR(16755, 16), 5355}, // 681 RestrictPointer in SPV_OPERAND_TYPE_DECORATION
  {IR(16771, 19), 5355}, // 682 RestrictPointerEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(16790, 9), 4}, // 683 RowMajor in SPV_OPERAND_TYPE_DECORATION
  {IR(16799, 14), 5599}, // 684 SIMTCallINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16813, 7), 17}, // 685 Sample in SPV_OPERAND_TYPE_DECORATION
  {IR(16820, 20), 28}, // 686 SaturatedConversion in SPV_OPERAND_TYPE_DECORATION
  {IR(16840, 28), 5256}, // 687 SecondaryViewportRelativeNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16868, 17), 5608}, // 688 SideEffectsINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16885, 20), 5833}, // 689 SimpleDualPortINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16905, 25), 6085}, // 690 SingleElementVectorINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16930, 16), 5830}, // 691 SinglepumpINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16946, 7), 1}, // 692 SpecId in SPV_OPERAND_TYPE_DECORATION
  {IR(16953, 26), 6183}, // 693 StableKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16979, 15), 5627}, // 694 StackCallINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16994, 17), 5905}, // 695 StallEnableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17011, 15), 6151}, // 696 StallFreeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17026, 7), 29}, // 697 Stream in SPV_OPERAND_TYPE_DECORATION
  {IR(17033, 16), 5883}, // 698 StridesizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17049, 23), 5078}, // 699 TrackFinishWritingAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(17072, 18), 5885}, // 700 TrueDualPortINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17090, 8), 26}, // 701 Uniform in SPV_OPERAND_TYPE_DECORATION
  {IR(17098, 10), 27}, // 702 UniformId in SPV_OPERAND_TYPE_DECORATION
  {IR(17108, 13), 5635}, // 703 UserSemantic in SPV_OPERAND_TYPE_DECORATION
  {IR(17121, 15), 5636}, // 704 UserTypeGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(17136, 35), 6087}, // 705 VectorComputeCallableFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17171, 27), 5626}, // 706 VectorComputeFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17198, 27), 5624}, // 707 VectorComputeVariableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17225, 19), 5252}, // 708 ViewportRelativeNV in SPV_OPERAND_TYPE_DECORATION
  {IR(17244, 9), 21}, // 709 Volatile in SPV_OPERAND_TYPE_DECORATION
  {IR(17253, 18), 4487}, // 710 WeightTextureQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(17271, 14), 5884}, // 711 WordsizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17285, 10), 36}, // 712 XfbBuffer in SPV_OPERAND_TYPE_DECORATION
  {IR(17295, 10), 37}, // 713 XfbStride in SPV_OPERAND_TYPE_DECORATION
  {IR(17305, 3), 0}, // 714 1D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17308, 3), 1}, // 715 2D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17311, 3), 2}, // 716 3D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17314, 7), 5}, // 717 Buffer in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17321, 5), 3}, // 718 Cube in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17326, 5), 4}, // 719 Rect in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17331, 12), 6}, // 720 SubpassData in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17343, 17), 4173}, // 721 TileImageDataEXT in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(17360, 15), 5069}, // 722 CoalescingAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17375, 15), 31}, // 723 ContractionOff in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(7989, 18), 4460}, // 724 DenormFlushToZero in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(8007, 15), 4459}, // 725 DenormPreserve in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17390, 13), 14}, // 726 DepthGreater in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17403, 10), 15}, // 727 DepthLess in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17413, 15), 12}, // 728 DepthReplacing in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17428, 15), 16}, // 729 DepthUnchanged in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17443, 25), 5290}, // 730 DerivativeGroupLinearKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17468, 24), 5290}, // 731 DerivativeGroupLinearNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17492, 24), 5289}, // 732 DerivativeGroupQuadsKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17516, 23), 5289}, // 733 DerivativeGroupQuadsNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17539, 29), 5017}, // 734 EarlyAndLateFragmentTestsAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17568, 19), 9}, // 735 EarlyFragmentTests in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17587, 18), 6028}, // 736 FPFastMathDefault in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17605, 10), 34}, // 737 Finalizer in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17615, 26), 5622}, // 738 FloatingPointModeALTINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17641, 27), 5623}, // 739 FloatingPointModeIEEEINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17668, 12), 33}, // 740 Initializer in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17680, 11), 20}, // 741 InputLines in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17691, 20), 21}, // 742 InputLinesAdjacency in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17711, 12), 19}, // 743 InputPoints in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17723, 24), 23}, // 744 InputTrianglesAdjacency in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17747, 12), 0}, // 745 Invocations in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17759, 15), 5070}, // 746 IsApiEntryAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17774, 9), 25}, // 747 Isolines in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17783, 10), 17}, // 748 LocalSize in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17793, 14), 18}, // 749 LocalSizeHint in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17807, 16), 39}, // 750 LocalSizeHintId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17823, 12), 38}, // 751 LocalSizeId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17835, 21), 5071}, // 752 MaxNodeRecursionAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17856, 21), 5077}, // 753 MaxNumWorkgroupsAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17877, 16), 5894}, // 754 MaxWorkDimINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17893, 22), 5893}, // 755 MaxWorkgroupSizeINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17915, 24), 6023}, // 756 MaximallyReconvergesKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17939, 22), 6461}, // 757 MaximumRegistersINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17961, 24), 6462}, // 758 MaximumRegistersIdINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(17985, 23), 6417}, // 759 NamedBarrierCountINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18008, 27), 6463}, // 760 NamedMaximumRegistersINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18035, 20), 5895}, // 761 NoGlobalOffsetINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18055, 34), 4169}, // 762 NonCoherentColorAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18089, 34), 4170}, // 763 NonCoherentDepthAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18123, 36), 4171}, // 764 NonCoherentStencilAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18159, 34), 4489}, // 765 NonCoherentTileAttachmentReadQCOM in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18193, 22), 5896}, // 766 NumSIMDWorkitemsINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18215, 16), 8}, // 767 OriginLowerLeft in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18231, 16), 7}, // 768 OriginUpperLeft in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18247, 16), 28}, // 769 OutputLineStrip in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18263, 15), 5269}, // 770 OutputLinesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18278, 14), 5269}, // 771 OutputLinesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18292, 13), 27}, // 772 OutputPoints in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18305, 20), 5270}, // 773 OutputPrimitivesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18325, 19), 5270}, // 774 OutputPrimitivesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18344, 20), 29}, // 775 OutputTriangleStrip in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18364, 19), 5298}, // 776 OutputTrianglesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18383, 18), 5298}, // 777 OutputTrianglesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18401, 15), 26}, // 778 OutputVertices in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18416, 19), 6}, // 779 PixelCenterInteger in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18435, 25), 5366}, // 780 PixelInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18460, 27), 5367}, // 781 PixelInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18487, 10), 10}, // 782 PointMode in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18497, 18), 4446}, // 783 PostDepthCoverage in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18515, 19), 5088}, // 784 QuadDerivativesKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18534, 6), 24}, // 785 Quads in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18540, 26), 6160}, // 786 RegisterMapInterfaceINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18566, 20), 5089}, // 787 RequireFullQuadsKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(10748, 16), 4462}, // 788 RoundingModeRTE in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18586, 21), 5621}, // 789 RoundingModeRTNINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18607, 21), 5620}, // 790 RoundingModeRTPINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(10764, 16), 4463}, // 791 RoundingModeRTZ in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18628, 26), 5368}, // 792 SampleInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18654, 28), 5369}, // 793 SampleInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18682, 28), 5903}, // 794 SchedulerTargetFmaxMhzINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(6370, 16), 5073}, // 795 ShaderIndexAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18710, 31), 5370}, // 796 ShadingRateInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18741, 33), 5371}, // 797 ShadingRateInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18774, 27), 5618}, // 798 SharedLocalMemorySizeINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18801, 20), 5102}, // 799 SharesInputWithAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(11357, 25), 4461}, // 800 SignedZeroInfNanPreserve in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18821, 13), 1}, // 801 SpacingEqual in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18834, 22), 2}, // 802 SpacingFractionalEven in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18856, 21), 3}, // 803 SpacingFractionalOdd in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18877, 24), 5072}, // 804 StaticNumWorkgroupsAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18901, 25), 5083}, // 805 StencilRefGreaterBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18926, 26), 5080}, // 806 StencilRefGreaterFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18952, 22), 5084}, // 807 StencilRefLessBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18974, 23), 5081}, // 808 StencilRefLessFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18997, 23), 5027}, // 809 StencilRefReplacingEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19020, 27), 5082}, // 810 StencilRefUnchangedBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19047, 28), 5079}, // 811 StencilRefUnchangedFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19075, 24), 6154}, // 812 StreamingInterfaceINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(6619, 13), 35}, // 813 SubgroupSize in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19099, 30), 4421}, // 814 SubgroupUniformControlFlowKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19129, 22), 36}, // 815 SubgroupsPerWorkgroup in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19151, 24), 37}, // 816 SubgroupsPerWorkgroupId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19175, 20), 4490}, // 817 TileShadingRateQCOM in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19195, 10), 22}, // 818 Triangles in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19205, 12), 30}, // 819 VecTypeHint in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19217, 15), 5}, // 820 VertexOrderCcw in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19232, 14), 4}, // 821 VertexOrderCw in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19246, 4), 11}, // 822 Xfb in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19250, 10), 5315}, // 823 AnyHitKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19260, 9), 5315}, // 824 AnyHitNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19269, 12), 5318}, // 825 CallableKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19281, 11), 5318}, // 826 CallableNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19292, 14), 5316}, // 827 ClosestHitKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19306, 13), 5316}, // 828 ClosestHitNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(14075, 9), 4}, // 829 Fragment in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19319, 10), 5}, // 830 GLCompute in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(9036, 9), 3}, // 831 Geometry in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19329, 16), 5314}, // 832 IntersectionKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19345, 15), 5314}, // 833 IntersectionNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(9927, 7), 6}, // 834 Kernel in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19360, 8), 5365}, // 835 MeshEXT in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19368, 7), 5268}, // 836 MeshNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19375, 8), 5317}, // 837 MissKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19383, 7), 5317}, // 838 MissNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19390, 17), 5313}, // 839 RayGenerationKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19407, 16), 5313}, // 840 RayGenerationNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19423, 8), 5364}, // 841 TaskEXT in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19431, 7), 5267}, // 842 TaskNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19438, 20), 1}, // 843 TessellationControl in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19458, 23), 2}, // 844 TessellationEvaluation in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19481, 7), 0}, // 845 Vertex in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(19488, 12), 1}, // 846 FlushToZero in SPV_OPERAND_TYPE_FPDENORM_MODE
  {IR(19500, 9), 0}, // 847 Preserve in SPV_OPERAND_TYPE_FPDENORM_MODE
  {IR(19509, 12), 0}, // 848 BFloat16KHR in SPV_OPERAND_TYPE_FPENCODING
  {IR(19521, 4), 1}, // 849 ALT in SPV_OPERAND_TYPE_FPOPERATION_MODE
  {IR(19525, 5), 0}, // 850 IEEE in SPV_OPERAND_TYPE_FPOPERATION_MODE
  {IR(19530, 14), 65536}, // 851 AllowContract in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19544, 23), 65536}, // 852 AllowContractFastINTEL in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19567, 13), 131072}, // 853 AllowReassoc in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19580, 18), 131072}, // 854 AllowReassocINTEL in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19598, 11), 8}, // 855 AllowRecip in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19609, 15), 262144}, // 856 AllowTransform in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19624, 5), 16}, // 857 Fast in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19629, 4), 4}, // 858 NSZ in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(14048, 5), 0}, // 859 None in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19633, 7), 2}, // 860 NotInf in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19640, 7), 1}, // 861 NotNaN in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(19647, 4), 0}, // 862 RTE in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(19651, 4), 3}, // 863 RTN in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(19655, 4), 2}, // 864 RTP in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(19659, 4), 1}, // 865 RTZ in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(19663, 18), 4}, // 866 Horizontal2Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(19681, 18), 8}, // 867 Horizontal4Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(19699, 16), 1}, // 868 Vertical2Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(19715, 16), 2}, // 869 Vertical4Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(19731, 6), 8}, // 870 Const in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(19737, 11), 2}, // 871 DontInline in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(19748, 7), 1}, // 872 Inline in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(14048, 5), 0}, // 873 None in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(10144, 11), 65536}, // 874 OptNoneEXT in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(10155, 13), 65536}, // 875 OptNoneINTEL in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(19755, 5), 4}, // 876 Pure in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(19760, 6), 2}, // 877 ByVal in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19766, 8), 4}, // 878 NoAlias in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19774, 10), 5}, // 879 NoCapture in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19784, 12), 7}, // 880 NoReadWrite in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19796, 8), 6}, // 881 NoWrite in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19804, 20), 5940}, // 882 RuntimeAlignedINTEL in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19824, 5), 1}, // 883 Sext in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19829, 5), 3}, // 884 Sret in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19834, 5), 0}, // 885 Zext in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(19839, 16), 3}, // 886 ClusteredReduce in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(19855, 14), 2}, // 887 ExclusiveScan in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(19869, 14), 1}, // 888 InclusiveScan in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(19883, 27), 8}, // 889 PartitionedExclusiveScanNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(19910, 27), 7}, // 890 PartitionedInclusiveScanNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(19937, 20), 6}, // 891 PartitionedReduceNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(19957, 7), 0}, // 892 Reduce in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(19964, 10), 0}, // 893 NoneINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(19974, 10), 1}, // 894 ReadINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(19984, 15), 3}, // 895 ReadWriteINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(19999, 11), 2}, // 896 WriteINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(20010, 5), 1}, // 897 Bias in SPV_OPERAND_TYPE_IMAGE
  {IR(20015, 12), 8}, // 898 ConstOffset in SPV_OPERAND_TYPE_IMAGE
  {IR(20027, 13), 32}, // 899 ConstOffsets in SPV_OPERAND_TYPE_IMAGE
  {IR(20040, 5), 4}, // 900 Grad in SPV_OPERAND_TYPE_IMAGE
  {IR(20045, 4), 2}, // 901 Lod in SPV_OPERAND_TYPE_IMAGE
  {IR(20049, 19), 256}, // 902 MakeTexelAvailable in SPV_OPERAND_TYPE_IMAGE
  {IR(20068, 22), 256}, // 903 MakeTexelAvailableKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(20090, 17), 512}, // 904 MakeTexelVisible in SPV_OPERAND_TYPE_IMAGE
  {IR(20107, 20), 512}, // 905 MakeTexelVisibleKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(10100, 7), 128}, // 906 MinLod in SPV_OPERAND_TYPE_IMAGE
  {IR(20127, 16), 1024}, // 907 NonPrivateTexel in SPV_OPERAND_TYPE_IMAGE
  {IR(20143, 19), 1024}, // 908 NonPrivateTexelKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(14048, 5), 0}, // 909 None in SPV_OPERAND_TYPE_IMAGE
  {IR(20162, 12), 16384}, // 910 Nontemporal in SPV_OPERAND_TYPE_IMAGE
  {IR(16377, 7), 16}, // 911 Offset in SPV_OPERAND_TYPE_IMAGE
  {IR(20174, 8), 65536}, // 912 Offsets in SPV_OPERAND_TYPE_IMAGE
  {IR(16813, 7), 64}, // 913 Sample in SPV_OPERAND_TYPE_IMAGE
  {IR(20182, 11), 4096}, // 914 SignExtend in SPV_OPERAND_TYPE_IMAGE
  {IR(20193, 14), 2048}, // 915 VolatileTexel in SPV_OPERAND_TYPE_IMAGE
  {IR(20207, 17), 2048}, // 916 VolatileTexelKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(20224, 11), 8192}, // 917 ZeroExtend in SPV_OPERAND_TYPE_IMAGE
  {IR(13634, 6), 14}, // 918 Float in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20235, 10), 13}, // 919 HalfFloat in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20245, 12), 8}, // 920 SignedInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20257, 12), 9}, // 921 SignedInt32 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20269, 11), 7}, // 922 SignedInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20280, 11), 1}, // 923 SnormInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20291, 10), 0}, // 924 SnormInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20301, 15), 6}, // 925 UnormInt101010 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20316, 17), 16}, // 926 UnormInt101010_2 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20333, 16), 17}, // 927 UnormInt10X6EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20349, 16), 25}, // 928 UnormInt12X4EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20365, 16), 26}, // 929 UnormInt14X2EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20381, 11), 3}, // 930 UnormInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20392, 11), 15}, // 931 UnormInt24 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20403, 20), 21}, // 932 UnormInt2_101010EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20423, 10), 2}, // 933 UnormInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20433, 14), 5}, // 934 UnormShort555 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20447, 14), 4}, // 935 UnormShort565 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20461, 19), 22}, // 936 UnsignedInt10X6EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20480, 19), 23}, // 937 UnsignedInt12X4EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20499, 19), 24}, // 938 UnsignedInt14X2EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20518, 14), 11}, // 939 UnsignedInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20532, 14), 12}, // 940 UnsignedInt32 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20546, 13), 10}, // 941 UnsignedInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20559, 20), 19}, // 942 UnsignedIntRaw10EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20579, 20), 20}, // 943 UnsignedIntRaw12EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(20599, 2), 1}, // 944 A in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20601, 5), 19}, // 945 ABGR in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20606, 5), 7}, // 946 ARGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20611, 5), 6}, // 947 BGRA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20616, 6), 13}, // 948 Depth in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20622, 13), 14}, // 949 DepthStencil in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20635, 10), 8}, // 950 Intensity in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20645, 10), 9}, // 951 Luminance in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20655, 2), 0}, // 952 R in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20657, 3), 3}, // 953 RA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20660, 3), 2}, // 954 RG in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20663, 4), 4}, // 955 RGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20667, 5), 5}, // 956 RGBA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20672, 5), 12}, // 957 RGBx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20677, 4), 11}, // 958 RGx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20681, 3), 10}, // 959 Rx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20684, 6), 18}, // 960 sBGRA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20690, 5), 15}, // 961 sRGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20695, 6), 17}, // 962 sRGBA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20701, 6), 16}, // 963 sRGBx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(20707, 27), 0}, // 964 InitOnDeviceReprogramINTEL in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(20734, 23), 1}, // 965 InitOnDeviceResetINTEL in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(20757, 7), 0}, // 966 NoWait in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(20764, 11), 1}, // 967 WaitKernel in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(20775, 14), 2}, // 968 WaitWorkGroup in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(20789, 12), 1}, // 969 CmdExecTime in SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {IR(14048, 5), 0}, // 970 None in SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {IR(20801, 13), 1}, // 971 MayUsePrintf in SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {IR(14048, 5), 0}, // 972 None in SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {IR(20814, 7), 0}, // 973 Export in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(20821, 7), 1}, // 974 Import in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(20828, 12), 2}, // 975 LinkOnceODR in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(20840, 12), 1}, // 976 CachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(20852, 17), 4}, // 977 ConstCachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(20869, 25), 3}, // 978 InvalidateAfterReadINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(20894, 15), 2}, // 979 StreamingINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(20909, 14), 0}, // 980 UncachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(20923, 21), 262144}, // 981 DependencyArrayINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20944, 19), 4}, // 982 DependencyInfinite in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20963, 17), 8}, // 983 DependencyLength in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20980, 11), 2}, // 984 DontUnroll in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(15706, 24), 65536}, // 985 InitiationIntervalINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20991, 18), 64}, // 986 IterationMultiple in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21009, 18), 1048576}, // 987 LoopCoalesceINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21027, 15), 16777216}, // 988 LoopCountINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(16091, 20), 131072}, // 989 MaxConcurrencyINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21042, 21), 2097152}, // 990 MaxInterleavingINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21063, 14), 32}, // 991 MaxIterations in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21077, 26), 33554432}, // 992 MaxReinvocationDelayINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21103, 14), 16}, // 993 MinIterations in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21117, 14), 8388608}, // 994 NoFusionINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(14048, 5), 0}, // 995 None in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21131, 13), 256}, // 996 PartialCount in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21144, 10), 128}, // 997 PeelCount in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(16624, 20), 524288}, // 998 PipelineEnableINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21154, 26), 4194304}, // 999 SpeculatedIterationsINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21180, 7), 1}, // 1000 Unroll in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(21187, 27), 4096}, // 1001 MatrixAPackedBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21214, 26), 1024}, // 1002 MatrixAPackedFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21240, 23), 64}, // 1003 MatrixAPackedInt4INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21263, 23), 16}, // 1004 MatrixAPackedInt8INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21286, 29), 1}, // 1005 MatrixASignedComponentsINTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21315, 17), 256}, // 1006 MatrixATF32INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21332, 27), 8192}, // 1007 MatrixBPackedBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21359, 26), 2048}, // 1008 MatrixBPackedFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21385, 23), 128}, // 1009 MatrixBPackedInt4INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21408, 23), 32}, // 1010 MatrixBPackedInt8INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21431, 29), 2}, // 1011 MatrixBSignedComponentsINTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21460, 17), 512}, // 1012 MatrixBTF32INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21477, 21), 4}, // 1013 MatrixCBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21498, 26), 8}, // 1014 MatrixResultBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(14048, 5), 0}, // 1015 None in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(21524, 20), 65536}, // 1016 AliasScopeINTELMask in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21544, 8), 2}, // 1017 Aligned in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21552, 21), 8}, // 1018 MakePointerAvailable in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21573, 24), 8}, // 1019 MakePointerAvailableKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21597, 19), 16}, // 1020 MakePointerVisible in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21616, 22), 16}, // 1021 MakePointerVisibleKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21638, 17), 131072}, // 1022 NoAliasINTELMask in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21655, 18), 32}, // 1023 NonPrivatePointer in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21673, 21), 32}, // 1024 NonPrivatePointerKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(14048, 5), 0}, // 1025 None in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(20162, 12), 4}, // 1026 Nontemporal in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(17244, 9), 1}, // 1027 Volatile in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21694, 8), 1}, // 1028 GLSL450 in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(21702, 7), 2}, // 1029 OpenCL in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(21709, 7), 0}, // 1030 Simple in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(21716, 7), 3}, // 1031 Vulkan in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(21723, 10), 3}, // 1032 VulkanKHR in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(21733, 8), 2}, // 1033 Acquire in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21741, 15), 8}, // 1034 AcquireRelease in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21756, 20), 1024}, // 1035 AtomicCounterMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21776, 21), 512}, // 1036 CrossWorkgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21797, 12), 2048}, // 1037 ImageMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21809, 14), 8192}, // 1038 MakeAvailable in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21823, 17), 8192}, // 1039 MakeAvailableKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21840, 12), 16384}, // 1040 MakeVisible in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21852, 15), 16384}, // 1041 MakeVisibleKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(14048, 5), 0}, // 1042 None in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21867, 13), 4096}, // 1043 OutputMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21880, 16), 4096}, // 1044 OutputMemoryKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21896, 8), 0}, // 1045 Relaxed in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21904, 8), 4}, // 1046 Release in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21912, 23), 16}, // 1047 SequentiallyConsistent in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21935, 15), 128}, // 1048 SubgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21950, 14), 64}, // 1049 UniformMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(17244, 9), 32768}, // 1050 Volatile in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21964, 16), 256}, // 1051 WorkgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(21980, 10), 0}, // 1052 AutoINTEL in SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS
  {IR(21990, 4), 1}, // 1053 SAT in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(21994, 8), 3}, // 1054 SAT_SYM in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(22002, 9), 2}, // 1055 SAT_ZERO in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(22011, 5), 0}, // 1056 WRAP in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(22016, 25), 0}, // 1057 PackedVectorFormat4x8Bit in SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {IR(22041, 28), 0}, // 1058 PackedVectorFormat4x8BitKHR in SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {IR(22069, 4), 2}, // 1059 RND in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22073, 9), 6}, // 1060 RND_CONV in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22082, 13), 7}, // 1061 RND_CONV_ODD in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22095, 8), 4}, // 1062 RND_INF in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22103, 12), 5}, // 1063 RND_MIN_INF in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22115, 9), 3}, // 1064 RND_ZERO in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22124, 4), 0}, // 1065 TRN in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(22128, 9), 1}, // 1066 TRN_ZERO in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(14048, 5), 0}, // 1067 None in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(22137, 25), 1}, // 1068 RobustnessPerComponentNV in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(22162, 23), 2}, // 1069 RobustnessPerElementNV in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(22185, 27), 16}, // 1070 CullBackFacingTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22212, 28), 32}, // 1071 CullFrontFacingTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22240, 16), 128}, // 1072 CullNoOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22256, 14), 64}, // 1073 CullOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22270, 30), 1024}, // 1074 ForceOpacityMicromap2StateEXT in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22300, 12), 2}, // 1075 NoOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(14581, 8), 0}, // 1076 NoneKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22312, 10), 1}, // 1077 OpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22322, 13), 512}, // 1078 SkipAABBsKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22335, 24), 256}, // 1079 SkipBuiltinPrimitivesNV in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22359, 24), 8}, // 1080 SkipClosestHitShaderKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22383, 17), 256}, // 1081 SkipTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22400, 23), 4}, // 1082 TerminateOnFirstHitKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(22423, 37), 1}, // 1083 RayQueryCandidateIntersectionAABBKHR in SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {IR(22460, 41), 0}, // 1084 RayQueryCandidateIntersectionTriangleKHR in SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {IR(22501, 42), 2}, // 1085 RayQueryCommittedIntersectionGeneratedKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(22543, 37), 0}, // 1086 RayQueryCommittedIntersectionNoneKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(22580, 41), 1}, // 1087 RayQueryCommittedIntersectionTriangleKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(22621, 33), 0}, // 1088 RayQueryCandidateIntersectionKHR in SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {IR(22654, 33), 1}, // 1089 RayQueryCommittedIntersectionKHR in SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {IR(22687, 6), 2}, // 1090 Clamp in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(22693, 12), 1}, // 1091 ClampToEdge in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(14048, 5), 0}, // 1092 None in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(22705, 7), 3}, // 1093 Repeat in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(22712, 15), 4}, // 1094 RepeatMirrored in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(22727, 7), 1}, // 1095 Linear in SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {IR(22734, 8), 0}, // 1096 Nearest in SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {IR(22742, 13), 8}, // 1097 R11fG11fB10f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22755, 4), 14}, // 1098 R16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22759, 9), 19}, // 1099 R16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22768, 5), 9}, // 1100 R16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22773, 5), 28}, // 1101 R16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22778, 6), 38}, // 1102 R16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22784, 5), 3}, // 1103 R32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22789, 5), 24}, // 1104 R32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22794, 6), 33}, // 1105 R32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22800, 5), 41}, // 1106 R64i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22805, 6), 40}, // 1107 R64ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22811, 3), 15}, // 1108 R8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22814, 8), 20}, // 1109 R8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22822, 4), 29}, // 1110 R8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22826, 5), 39}, // 1111 R8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22831, 5), 12}, // 1112 Rg16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22836, 10), 17}, // 1113 Rg16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22846, 6), 7}, // 1114 Rg16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22852, 6), 26}, // 1115 Rg16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22858, 7), 36}, // 1116 Rg16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22865, 6), 6}, // 1117 Rg32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22871, 6), 25}, // 1118 Rg32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22877, 7), 35}, // 1119 Rg32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22884, 4), 13}, // 1120 Rg8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22888, 9), 18}, // 1121 Rg8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22897, 5), 27}, // 1122 Rg8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22902, 6), 37}, // 1123 Rg8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22908, 8), 11}, // 1124 Rgb10A2 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22916, 10), 34}, // 1125 Rgb10a2ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22926, 7), 10}, // 1126 Rgba16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22933, 12), 16}, // 1127 Rgba16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22945, 8), 2}, // 1128 Rgba16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22953, 8), 22}, // 1129 Rgba16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22961, 9), 31}, // 1130 Rgba16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22970, 8), 1}, // 1131 Rgba32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22978, 8), 21}, // 1132 Rgba32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22986, 9), 30}, // 1133 Rgba32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(22995, 6), 4}, // 1134 Rgba8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23001, 11), 5}, // 1135 Rgba8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23012, 7), 23}, // 1136 Rgba8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23019, 8), 32}, // 1137 Rgba8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23027, 8), 0}, // 1138 Unknown in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23035, 12), 0}, // 1139 CrossDevice in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23047, 7), 1}, // 1140 Device in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23054, 11), 4}, // 1141 Invocation in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23065, 12), 5}, // 1142 QueueFamily in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23077, 15), 5}, // 1143 QueueFamilyKHR in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23092, 14), 6}, // 1144 ShaderCallKHR in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23106, 9), 3}, // 1145 Subgroup in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23115, 10), 2}, // 1146 Workgroup in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(23125, 12), 2}, // 1147 DontFlatten in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(23137, 8), 1}, // 1148 Flatten in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(14048, 5), 0}, // 1149 None in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(23145, 29), 1}, // 1150 IdentifierPossibleDuplicates in SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS
  {IR(13618, 8), 1}, // 1151 Address in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13626, 8), 2}, // 1152 Boolean in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13634, 6), 3}, // 1153 Float in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13640, 7), 4}, // 1154 Signed in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13647, 11), 5}, // 1155 SignedChar in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13658, 9), 6}, // 1156 Unsigned in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13667, 13), 7}, // 1157 UnsignedChar in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13680, 12), 0}, // 1158 Unspecified in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13692, 6), 0}, // 1159 Class in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13698, 10), 1}, // 1160 Structure in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13708, 6), 2}, // 1161 Union in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(13714, 20), 1}, // 1162 ImportedDeclaration in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(13734, 15), 0}, // 1163 ImportedModule in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(13749, 15), 32}, // 1164 FlagArtificial in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13764, 13), 64}, // 1165 FlagExplicit in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13777, 12), 16}, // 1166 FlagFwdDecl in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13789, 21), 1024}, // 1167 FlagIndirectVariable in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13810, 17), 8}, // 1168 FlagIsDefinition in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13827, 16), 16384}, // 1169 FlagIsEnumClass in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13843, 12), 4}, // 1170 FlagIsLocal in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13855, 16), 8192}, // 1171 FlagIsOptimized in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13871, 14), 2}, // 1172 FlagIsPrivate in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13885, 16), 1}, // 1173 FlagIsProtected in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13901, 13), 3}, // 1174 FlagIsPublic in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13914, 20), 2048}, // 1175 FlagLValueReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13934, 18), 256}, // 1176 FlagObjectPointer in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13952, 15), 128}, // 1177 FlagPrototyped in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13967, 20), 4096}, // 1178 FlagRValueReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(13987, 17), 512}, // 1179 FlagStaticMember in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14004, 24), 65536}, // 1180 FlagTypePassByReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14028, 20), 32768}, // 1181 FlagTypePassByValue in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(23174, 26), 131072}, // 1182 FlagUnknownPhysicalLayout in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14048, 5), 0}, // 1183 None in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14053, 9), 4}, // 1184 BitPiece in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14062, 7), 8}, // 1185 Constu in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14069, 6), 0}, // 1186 Deref in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14075, 9), 9}, // 1187 Fragment in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14084, 6), 2}, // 1188 Minus in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14090, 5), 1}, // 1189 Plus in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14095, 11), 3}, // 1190 PlusUconst in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14106, 11), 7}, // 1191 StackValue in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14117, 5), 5}, // 1192 Swap in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14122, 7), 6}, // 1193 Xderef in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14129, 11), 3}, // 1194 AtomicType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14140, 10), 0}, // 1195 ConstType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14150, 13), 2}, // 1196 RestrictType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14163, 13), 1}, // 1197 VolatileType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(23200, 15), 6}, // 1198 CPP_for_OpenCL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23215, 5), 1}, // 1199 ESSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23220, 5), 2}, // 1200 GLSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23225, 7), 8}, // 1201 HERO_C in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23232, 5), 5}, // 1202 HLSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23237, 5), 9}, // 1203 NZSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23242, 9), 3}, // 1204 OpenCL_C in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23251, 11), 4}, // 1205 OpenCL_CPP in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23262, 5), 13}, // 1206 Rust in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23267, 5), 7}, // 1207 SYCL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23272, 6), 11}, // 1208 Slang in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23027, 8), 0}, // 1209 Unknown in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23278, 5), 10}, // 1210 WGSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23283, 4), 12}, // 1211 Zig in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23287, 14), 10}, // 1212 AtomicCounter in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23301, 16), 5328}, // 1213 CallableDataKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23317, 15), 5328}, // 1214 CallableDataNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23332, 17), 5605}, // 1215 CodeSectionINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23349, 15), 5}, // 1216 CrossWorkgroup in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23364, 16), 5936}, // 1217 DeviceOnlyINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23380, 9), 7}, // 1218 Function in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23389, 8), 8}, // 1219 Generic in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23397, 16), 5339}, // 1220 HitAttributeKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23413, 15), 5339}, // 1221 HitAttributeNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23428, 21), 5385}, // 1222 HitObjectAttributeNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23449, 14), 5937}, // 1223 HostOnlyINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23463, 6), 11}, // 1224 Image in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23469, 24), 5329}, // 1225 IncomingCallableDataKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23493, 23), 5329}, // 1226 IncomingCallableDataNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23516, 22), 5342}, // 1227 IncomingRayPayloadKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23538, 21), 5342}, // 1228 IncomingRayPayloadNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23559, 6), 1}, // 1229 Input in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23565, 16), 5068}, // 1230 NodePayloadAMDX in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23581, 7), 3}, // 1231 Output in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23588, 22), 5349}, // 1232 PhysicalStorageBuffer in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23610, 25), 5349}, // 1233 PhysicalStorageBufferEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23635, 8), 6}, // 1234 Private in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23643, 13), 9}, // 1235 PushConstant in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23656, 14), 5338}, // 1236 RayPayloadKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23670, 13), 5338}, // 1237 RayPayloadNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23683, 22), 5343}, // 1238 ShaderRecordBufferKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23705, 21), 5343}, // 1239 ShaderRecordBufferNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23726, 14), 12}, // 1240 StorageBuffer in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23740, 24), 5402}, // 1241 TaskPayloadWorkgroupEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23764, 19), 4491}, // 1242 TileAttachmentQCOM in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23783, 13), 4172}, // 1243 TileImageEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(17090, 8), 2}, // 1244 Uniform in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23796, 16), 0}, // 1245 UniformConstant in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(23115, 10), 4}, // 1246 Workgroup in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(20894, 15), 3}, // 1247 StreamingINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(20909, 14), 0}, // 1248 UncachedINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(23812, 15), 2}, // 1249 WriteBackINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(23827, 18), 1}, // 1250 WriteThroughINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(23845, 11), 2}, // 1251 DecodeFunc in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(14048, 5), 0}, // 1252 None in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(23856, 11), 1}, // 1253 TensorView in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(22693, 12), 2}, // 1254 ClampToEdge in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(15181, 9), 1}, // 1255 Constant in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(22705, 7), 3}, // 1256 Repeat in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(22712, 15), 4}, // 1257 RepeatMirrored in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(23867, 10), 0}, // 1258 Undefined in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
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
  {1,IR(0, 0),IR(4487, 10)/* WriteOnly */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {2,IR(0, 0),IR(4477, 10)/* ReadWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {0,IR(0, 0),IR(4497, 8)/* Logical */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {1,IR(0, 0),IR(4505, 11)/* Physical32 */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {2,IR(0, 0),IR(4516, 11)/* Physical64 */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {5348,IR(0, 0),IR(4527, 24)/* PhysicalStorageBuffer64 */,IR(0, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {0,IR(0, 0),IR(6007, 9)/* Position */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {1,IR(0, 0),IR(5997, 10)/* PointSize */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {3,IR(0, 0),IR(4833, 13)/* ClipDistance */,IR(0, 0),IR(4, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4,IR(0, 0),IR(4916, 13)/* CullDistance */,IR(0, 0),IR(5, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5,IR(0, 0),IR(6735, 9)/* VertexId */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {6,IR(0, 0),IR(5607, 11)/* InstanceId */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {7,IR(0, 0),IR(6051, 12)/* PrimitiveId */,IR(0, 0),IR(6, 6),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {8,IR(0, 0),IR(5632, 13)/* InvocationId */,IR(0, 0),IR(12, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {9,IR(0, 0),IR(5717, 6)/* Layer */,IR(0, 0),IR(14, 5),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {10,IR(0, 0),IR(6766, 14)/* ViewportIndex */,IR(0, 0),IR(19, 5),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {11,IR(0, 0),IR(6669, 15)/* TessLevelOuter */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {12,IR(0, 0),IR(6654, 15)/* TessLevelInner */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {13,IR(0, 0),IR(6644, 10)/* TessCoord */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {14,IR(0, 0),IR(5972, 14)/* PatchVertices */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {15,IR(0, 0),IR(5041, 10)/* FragCoord */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {16,IR(0, 0),IR(5986, 11)/* PointCoord */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {17,IR(0, 0),IR(5129, 12)/* FrontFacing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {18,IR(0, 0),IR(6291, 9)/* SampleId */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {19,IR(0, 0),IR(6311, 15)/* SamplePosition */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {20,IR(0, 0),IR(6300, 11)/* SampleMask */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {22,IR(0, 0),IR(5051, 10)/* FragDepth */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {23,IR(0, 0),IR(5215, 17)/* HelperInvocation */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {24,IR(0, 0),IR(5845, 14)/* NumWorkgroups */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {25,IR(0, 0),IR(6882, 14)/* WorkgroupSize */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {26,IR(0, 0),IR(6870, 12)/* WorkgroupId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {27,IR(0, 0),IR(5738, 18)/* LocalInvocationId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {28,IR(0, 0),IR(5157, 19)/* GlobalInvocationId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {29,IR(0, 0),IR(5756, 21)/* LocalInvocationIndex */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {30,IR(0, 0),IR(6862, 8)/* WorkDim */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {31,IR(0, 0),IR(5204, 11)/* GlobalSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {32,IR(0, 0),IR(5019, 22)/* EnqueuedWorkgroupSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {33,IR(0, 0),IR(5191, 13)/* GlobalOffset */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {34,IR(0, 0),IR(5176, 15)/* GlobalLinearId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {36,IR(0, 0),IR(6619, 13)/* SubgroupSize */,IR(0, 0),IR(26, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {37,IR(0, 0),IR(6603, 16)/* SubgroupMaxSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {38,IR(0, 0),IR(5832, 13)/* NumSubgroups */,IR(0, 0),IR(29, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {39,IR(0, 0),IR(5811, 21)/* NumEnqueuedSubgroups */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {40,IR(0, 0),IR(6500, 11)/* SubgroupId */,IR(0, 0),IR(29, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {41,IR(0, 0),IR(6544, 26)/* SubgroupLocalInvocationId */,IR(0, 0),IR(26, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {42,IR(0, 0),IR(6744, 12)/* VertexIndex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {43,IR(0, 0),IR(5618, 14)/* InstanceIndex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4160,IR(0, 0),IR(4893, 10)/* CoreIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4161,IR(0, 0),IR(4880, 13)/* CoreCountARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4162,IR(0, 0),IR(4903, 13)/* CoreMaxIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4163,IR(0, 0),IR(6817, 10)/* WarpIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4164,IR(0, 0),IR(6836, 13)/* WarpMaxIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4416,IR(0, 0),IR(6401, 15)/* SubgroupEqMask */,IR(1, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4417,IR(0, 0),IR(6434, 15)/* SubgroupGeMask */,IR(2, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4418,IR(0, 0),IR(6467, 15)/* SubgroupGtMask */,IR(3, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4419,IR(0, 0),IR(6511, 15)/* SubgroupLeMask */,IR(4, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4420,IR(0, 0),IR(6570, 15)/* SubgroupLtMask */,IR(5, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4424,IR(0, 0),IR(4822, 11)/* BaseVertex */,IR(0, 0),IR(34, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4425,IR(0, 0),IR(4809, 13)/* BaseInstance */,IR(0, 0),IR(34, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4426,IR(0, 0),IR(5009, 10)/* DrawIndex */,IR(0, 0),IR(35, 3),IR(4, 3),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4432,IR(0, 0),IR(6131, 24)/* PrimitiveShadingRateKHR */,IR(0, 0),IR(38, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4438,IR(0, 0),IR(4997, 12)/* DeviceIndex */,IR(0, 0),IR(39, 1),IR(8, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4440,IR(0, 0),IR(6756, 10)/* ViewIndex */,IR(0, 0),IR(40, 1),IR(9, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4444,IR(0, 0),IR(6386, 15)/* ShadingRateKHR */,IR(0, 0),IR(38, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4492,IR(0, 0),IR(6720, 15)/* TileOffsetQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4493,IR(0, 0),IR(6702, 18)/* TileDimensionQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4494,IR(0, 0),IR(6684, 18)/* TileApronSizeQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4992,IR(0, 0),IR(4603, 20)/* BaryCoordNoPerspAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4993,IR(0, 0),IR(4623, 28)/* BaryCoordNoPerspCentroidAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4994,IR(0, 0),IR(4690, 26)/* BaryCoordNoPerspSampleAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4995,IR(0, 0),IR(4738, 19)/* BaryCoordSmoothAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4996,IR(0, 0),IR(4757, 27)/* BaryCoordSmoothCentroidAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4997,IR(0, 0),IR(4784, 25)/* BaryCoordSmoothSampleAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4998,IR(0, 0),IR(4716, 22)/* BaryCoordPullModelAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5014,IR(0, 0),IR(5096, 18)/* FragStencilRefEXT */,IR(0, 0),IR(42, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5021,IR(0, 0),IR(6245, 29)/* RemainingRecursionLevelsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5073,IR(0, 0),IR(6370, 16)/* ShaderIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5253,IR(0, 0),IR(6780, 15)/* ViewportMaskNV */,IR(0, 0),IR(44, 2),IR(12, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5257,IR(0, 0),IR(6326, 20)/* SecondaryPositionNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5258,IR(0, 0),IR(6346, 24)/* SecondaryViewportMaskNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5261,IR(0, 0),IR(6016, 18)/* PositionPerViewNV */,IR(0, 0),IR(47, 2),IR(15, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5262,IR(0, 0),IR(6795, 22)/* ViewportMaskPerViewNV */,IR(0, 0),IR(47, 2),IR(15, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5264,IR(0, 0),IR(5141, 16)/* FullyCoveredEXT */,IR(0, 0),IR(49, 1),IR(17, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5274,IR(0, 0),IR(6632, 12)/* TaskCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5275,IR(0, 0),IR(6034, 17)/* PrimitiveCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5276,IR(0, 0),IR(6063, 19)/* PrimitiveIndicesNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5277,IR(0, 0),IR(4846, 22)/* ClipDistancePerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5278,IR(0, 0),IR(4929, 22)/* CullDistancePerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5279,IR(0, 0),IR(5723, 15)/* LayerPerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5280,IR(0, 0),IR(5777, 16)/* MeshViewCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5281,IR(0, 0),IR(5793, 18)/* MeshViewIndicesNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5286,IR(0, 0),IR(4578, 13)/* BaryCoordKHR */,IR(6, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5287,IR(0, 0),IR(4651, 20)/* BaryCoordNoPerspKHR */,IR(7, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5292,IR(0, 0),IR(5084, 12)/* FragSizeEXT */,IR(8, 1),IR(52, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5293,IR(0, 0),IR(5061, 23)/* FragInvocationCountEXT */,IR(9, 1),IR(52, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5294,IR(0, 0),IR(6106, 25)/* PrimitivePointIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5295,IR(0, 0),IR(6082, 24)/* PrimitiveLineIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5296,IR(0, 0),IR(6155, 28)/* PrimitiveTriangleIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5299,IR(0, 0),IR(4963, 17)/* CullPrimitiveEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5319,IR(0, 0),IR(5667, 12)/* LaunchIdKHR */,IR(10, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5320,IR(0, 0),IR(5690, 14)/* LaunchSizeKHR */,IR(11, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5321,IR(0, 0),IR(6937, 18)/* WorldRayOriginKHR */,IR(12, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5322,IR(0, 0),IR(6896, 21)/* WorldRayDirectionKHR */,IR(13, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5323,IR(0, 0),IR(5902, 19)/* ObjectRayOriginKHR */,IR(14, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5324,IR(0, 0),IR(5859, 22)/* ObjectRayDirectionKHR */,IR(15, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5325,IR(0, 0),IR(6224, 11)/* RayTminKHR */,IR(16, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5326,IR(0, 0),IR(6203, 11)/* RayTmaxKHR */,IR(17, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5327,IR(0, 0),IR(5562, 23)/* InstanceCustomIndexKHR */,IR(18, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5330,IR(0, 0),IR(5939, 17)/* ObjectToWorldKHR */,IR(19, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5331,IR(0, 0),IR(6972, 17)/* WorldToObjectKHR */,IR(20, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5332,IR(0, 0),IR(5486, 7)/* HitTNV */,IR(0, 0),IR(56, 1),IR(26, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5333,IR(0, 0),IR(5324, 11)/* HitKindKHR */,IR(21, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5334,IR(0, 0),IR(4980, 17)/* CurrentRayTimeNV */,IR(0, 0),IR(57, 1),IR(27, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5335,IR(0, 0),IR(5493, 30)/* HitTriangleVertexPositionsKHR */,IR(0, 0),IR(58, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5337,IR(0, 0),IR(5414, 34)/* HitMicroTriangleVertexPositionsNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5344,IR(0, 0),IR(5377, 37)/* HitMicroTriangleVertexBarycentricsNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5351,IR(0, 0),IR(5523, 20)/* IncomingRayFlagsKHR */,IR(22, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5352,IR(0, 0),IR(6183, 20)/* RayGeometryIndexKHR */,IR(0, 0),IR(60, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5359,IR(0, 0),IR(5243, 14)/* HitIsSphereNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5360,IR(0, 0),IR(5232, 11)/* HitIsLSSNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5361,IR(0, 0),IR(5448, 20)/* HitSpherePositionNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5374,IR(0, 0),IR(6849, 13)/* WarpsPerSMNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5375,IR(0, 0),IR(6274, 10)/* SMCountNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5376,IR(0, 0),IR(6827, 9)/* WarpIDNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5377,IR(0, 0),IR(6284, 7)/* SMIDNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5396,IR(0, 0),IR(5345, 18)/* HitLSSPositionsNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5405,IR(0, 0),IR(5290, 34)/* HitKindFrontFacingMicroTriangleNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5406,IR(0, 0),IR(5257, 33)/* HitKindBackFacingMicroTriangleNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5420,IR(0, 0),IR(5468, 18)/* HitSphereRadiusNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5421,IR(0, 0),IR(5363, 14)/* HitLSSRadiiNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5436,IR(0, 0),IR(4868, 12)/* ClusterIDNV */,IR(0, 0),IR(64, 1),IR(31, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {6021,IR(0, 0),IR(4951, 12)/* CullMaskKHR */,IR(0, 0),IR(65, 1),IR(32, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {0,IR(0, 0),IR(10038, 7)/* Matrix */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {1,IR(0, 0),IR(11094, 7)/* Shader */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {2,IR(0, 0),IR(9036, 9)/* Geometry */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {3,IR(0, 0),IR(12598, 13)/* Tessellation */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4,IR(0, 0),IR(7005, 10)/* Addresses */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5,IR(0, 0),IR(9956, 8)/* Linkage */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6,IR(0, 0),IR(9927, 7)/* Kernel */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {7,IR(0, 0),IR(13355, 9)/* Vector16 */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {8,IR(0, 0),IR(8667, 14)/* Float16Buffer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {9,IR(0, 0),IR(8659, 8)/* Float16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {10,IR(0, 0),IR(8697, 8)/* Float64 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {11,IR(0, 0),IR(9844, 6)/* Int64 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {12,IR(0, 0),IR(9850, 13)/* Int64Atomics */,IR(0, 0),IR(67, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {13,IR(0, 0),IR(9463, 11)/* ImageBasic */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {14,IR(0, 0),IR(9596, 15)/* ImageReadWrite */,IR(0, 0),IR(68, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {15,IR(0, 0),IR(9573, 12)/* ImageMipmap */,IR(0, 0),IR(68, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {17,IR(0, 0),IR(10265, 6)/* Pipes */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {18,IR(0, 0),IR(9435, 7)/* Groups */,IR(0, 0),IR(1, 0),IR(33, 1),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {19,IR(0, 0),IR(8040, 14)/* DeviceEnqueue */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {20,IR(0, 0),IR(9964, 15)/* LiteralSampler */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {21,IR(0, 0),IR(7297, 14)/* AtomicStorage */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {22,IR(0, 0),IR(9838, 6)/* Int16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {23,IR(0, 0),IR(12611, 22)/* TessellationPointSize */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {24,IR(0, 0),IR(9045, 18)/* GeometryPointSize */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {25,IR(0, 0),IR(9540, 20)/* ImageGatherExtended */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {27,IR(0, 0),IR(11729, 24)/* StorageImageMultisample */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {28,IR(0, 0),IR(12937, 34)/* UniformBufferArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {29,IR(0, 0),IR(10974, 33)/* SampledImageArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {30,IR(0, 0),IR(11482, 34)/* StorageBufferArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {31,IR(0, 0),IR(11593, 33)/* StorageImageArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {32,IR(0, 0),IR(4833, 13)/* ClipDistance */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {33,IR(0, 0),IR(4916, 13)/* CullDistance */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {34,IR(0, 0),IR(9486, 15)/* ImageCubeArray */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {35,IR(0, 0),IR(10915, 18)/* SampleRateShading */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {36,IR(0, 0),IR(9632, 10)/* ImageRect */,IR(0, 0),IR(71, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {37,IR(0, 0),IR(11082, 12)/* SampledRect */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {38,IR(0, 0),IR(9021, 15)/* GenericPointer */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {39,IR(0, 0),IR(9877, 5)/* Int8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {40,IR(0, 0),IR(9666, 16)/* InputAttachment */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {41,IR(0, 0),IR(11382, 16)/* SparseResidency */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {42,IR(0, 0),IR(10100, 7)/* MinLod */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {43,IR(0, 0),IR(10933, 10)/* Sampled1D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {44,IR(0, 0),IR(9455, 8)/* Image1D */,IR(0, 0),IR(72, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {45,IR(0, 0),IR(10957, 17)/* SampledCubeArray */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {46,IR(0, 0),IR(10943, 14)/* SampledBuffer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {47,IR(0, 0),IR(9474, 12)/* ImageBuffer */,IR(0, 0),IR(73, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {48,IR(0, 0),IR(9560, 13)/* ImageMSArray */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {49,IR(0, 0),IR(11701, 28)/* StorageImageExtendedFormats */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {50,IR(0, 0),IR(9585, 11)/* ImageQuery */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {51,IR(0, 0),IR(8022, 18)/* DerivativeControl */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {52,IR(0, 0),IR(9905, 22)/* InterpolationFunction */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {53,IR(0, 0),IR(12827, 18)/* TransformFeedback */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {54,IR(0, 0),IR(9091, 16)/* GeometryStreams */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {55,IR(0, 0),IR(11753, 30)/* StorageImageReadWithoutFormat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {56,IR(0, 0),IR(11783, 31)/* StorageImageWriteWithoutFormat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {57,IR(0, 0),IR(10117, 14)/* MultiViewport */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {58,IR(0, 0),IR(12357, 17)/* SubgroupDispatch */,IR(0, 0),IR(74, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {59,IR(0, 0),IR(10131, 13)/* NamedBarrier */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {60,IR(0, 0),IR(10253, 12)/* PipeStorage */,IR(0, 0),IR(75, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {61,IR(0, 0),IR(9172, 16)/* GroupNonUniform */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {62,IR(0, 0),IR(9389, 20)/* GroupNonUniformVote */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {63,IR(0, 0),IR(9188, 26)/* GroupNonUniformArithmetic */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {64,IR(0, 0),IR(9214, 22)/* GroupNonUniformBallot */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {65,IR(0, 0),IR(9335, 23)/* GroupNonUniformShuffle */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {66,IR(0, 0),IR(9358, 31)/* GroupNonUniformShuffleRelative */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {67,IR(0, 0),IR(9236, 25)/* GroupNonUniformClustered */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {68,IR(0, 0),IR(9290, 20)/* GroupNonUniformQuad */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {69,IR(0, 0),IR(11160, 12)/* ShaderLayer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {70,IR(0, 0),IR(11247, 20)/* ShaderViewportIndex */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {71,IR(0, 0),IR(13048, 18)/* UniformDecoration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4165,IR(0, 0),IR(7899, 16)/* CoreBuiltinsARM */,IR(0, 0),IR(1, 0),IR(34, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4166,IR(0, 0),IR(12725, 28)/* TileImageColorReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4167,IR(0, 0),IR(12753, 28)/* TileImageDepthReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4168,IR(0, 0),IR(12781, 30)/* TileImageStencilReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4201,IR(0, 0),IR(7697, 28)/* CooperativeMatrixLayoutsARM */,IR(0, 0),IR(1, 0),IR(36, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4422,IR(0, 0),IR(8950, 23)/* FragmentShadingRateKHR */,IR(0, 0),IR(3, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4423,IR(0, 0),IR(12284, 18)/* SubgroupBallotKHR */,IR(0, 0),IR(1, 0),IR(2, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4427,IR(0, 0),IR(8261, 15)/* DrawParameters */,IR(0, 0),IR(3, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4428,IR(0, 0),IR(13585, 33)/* WorkgroupMemoryExplicitLayoutKHR */,IR(0, 0),IR(3, 1),IR(37, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4429,IR(0, 0),IR(13542, 43)/* WorkgroupMemoryExplicitLayout8BitAccessKHR */,IR(0, 0),IR(77, 1),IR(37, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4430,IR(0, 0),IR(13498, 44)/* WorkgroupMemoryExplicitLayout16BitAccessKHR */,IR(0, 0),IR(77, 1),IR(37, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4431,IR(0, 0),IR(12490, 16)/* SubgroupVoteKHR */,IR(0, 0),IR(1, 0),IR(38, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4433,IR(0, 0),IR(11433, 25)/* StorageBuffer16BitAccess */,IR(23, 1),IR(1, 0),IR(39, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4434,IR(0, 0),IR(12868, 35)/* UniformAndStorageBuffer16BitAccess */,IR(24, 1),IR(78, 1),IR(39, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4435,IR(0, 0),IR(11835, 22)/* StoragePushConstant16 */,IR(0, 0),IR(1, 0),IR(39, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4436,IR(0, 0),IR(11814, 21)/* StorageInputOutput16 */,IR(0, 0),IR(1, 0),IR(39, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4437,IR(0, 0),IR(8054, 12)/* DeviceGroup */,IR(0, 0),IR(1, 0),IR(8, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4439,IR(0, 0),IR(10107, 10)/* MultiView */,IR(0, 0),IR(3, 1),IR(9, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4441,IR(0, 0),IR(13325, 30)/* VariablePointersStorageBuffer */,IR(0, 0),IR(3, 1),IR(40, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4442,IR(0, 0),IR(13308, 17)/* VariablePointers */,IR(0, 0),IR(79, 1),IR(40, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4445,IR(0, 0),IR(7311, 17)/* AtomicStorageOps */,IR(0, 0),IR(80, 1),IR(41, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4447,IR(0, 0),IR(10887, 28)/* SampleMaskPostDepthCoverage */,IR(0, 0),IR(1, 0),IR(42, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4448,IR(0, 0),IR(11458, 24)/* StorageBuffer8BitAccess */,IR(0, 0),IR(1, 0),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4449,IR(0, 0),IR(12903, 34)/* UniformAndStorageBuffer8BitAccess */,IR(0, 0),IR(81, 1),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4450,IR(0, 0),IR(11857, 21)/* StoragePushConstant8 */,IR(0, 0),IR(1, 0),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4464,IR(0, 0),IR(8007, 15)/* DenormPreserve */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4465,IR(0, 0),IR(7989, 18)/* DenormFlushToZero */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4466,IR(0, 0),IR(11357, 25)/* SignedZeroInfNanPreserve */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4467,IR(0, 0),IR(10748, 16)/* RoundingModeRTE */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4468,IR(0, 0),IR(10764, 16)/* RoundingModeRTZ */,IR(0, 0),IR(1, 0),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4471,IR(0, 0),IR(10356, 23)/* RayQueryProvisionalKHR */,IR(0, 0),IR(3, 1),IR(45, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4472,IR(0, 0),IR(10319, 12)/* RayQueryKHR */,IR(0, 0),IR(3, 1),IR(45, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4473,IR(0, 0),IR(13264, 19)/* UntypedPointersKHR */,IR(0, 0),IR(1, 0),IR(46, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4478,IR(0, 0),IR(10651, 32)/* RayTraversalPrimitiveCullingKHR */,IR(0, 0),IR(82, 2),IR(47, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4479,IR(0, 0),IR(10453, 14)/* RayTracingKHR */,IR(0, 0),IR(3, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4484,IR(0, 0),IR(12699, 26)/* TextureSampleWeightedQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4485,IR(0, 0),IR(12678, 21)/* TextureBoxFilterQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4486,IR(0, 0),IR(12656, 22)/* TextureBlockMatchQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4495,IR(0, 0),IR(12811, 16)/* TileShadingQCOM */,IR(0, 0),IR(3, 1),IR(50, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4498,IR(0, 0),IR(12633, 23)/* TextureBlockMatch2QCOM */,IR(0, 0),IR(1, 0),IR(51, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5008,IR(0, 0),IR(8681, 16)/* Float16ImageAMD */,IR(0, 0),IR(3, 1),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5009,IR(0, 0),IR(9518, 22)/* ImageGatherBiasLodAMD */,IR(0, 0),IR(3, 1),IR(53, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5010,IR(0, 0),IR(8831, 16)/* FragmentMaskAMD */,IR(0, 0),IR(3, 1),IR(54, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5013,IR(0, 0),IR(11416, 17)/* StencilExportEXT */,IR(0, 0),IR(3, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5015,IR(0, 0),IR(9611, 21)/* ImageReadWriteLodAMD */,IR(0, 0),IR(3, 1),IR(55, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5016,IR(0, 0),IR(9863, 14)/* Int64ImageEXT */,IR(0, 0),IR(3, 1),IR(56, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5055,IR(0, 0),IR(11101, 15)/* ShaderClockKHR */,IR(0, 0),IR(1, 0),IR(57, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5067,IR(0, 0),IR(11116, 18)/* ShaderEnqueueAMDX */,IR(0, 0),IR(3, 1),IR(58, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5087,IR(0, 0),IR(10271, 15)/* QuadControlKHR */,IR(0, 0),IR(1, 0),IR(59, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5116,IR(0, 0),IR(7403, 16)/* BFloat16TypeKHR */,IR(0, 0),IR(1, 0),IR(60, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5117,IR(0, 0),IR(7381, 22)/* BFloat16DotProductKHR */,IR(0, 0),IR(84, 1),IR(60, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5118,IR(0, 0),IR(7352, 29)/* BFloat16CooperativeMatrixKHR */,IR(0, 0),IR(85, 2),IR(60, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5249,IR(0, 0),IR(10858, 29)/* SampleMaskOverrideCoverageNV */,IR(0, 0),IR(25, 1),IR(61, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5251,IR(0, 0),IR(9063, 28)/* GeometryShaderPassthroughNV */,IR(0, 0),IR(69, 1),IR(62, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5254,IR(0, 0),IR(11267, 28)/* ShaderViewportIndexLayerEXT */,IR(25, 1),IR(87, 1),IR(63, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5255,IR(0, 0),IR(11322, 21)/* ShaderViewportMaskNV */,IR(0, 0),IR(88, 1),IR(65, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5259,IR(0, 0),IR(11228, 19)/* ShaderStereoViewNV */,IR(0, 0),IR(89, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5260,IR(0, 0),IR(10168, 20)/* PerViewAttributesNV */,IR(0, 0),IR(40, 1),IR(66, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5265,IR(0, 0),IR(8807, 24)/* FragmentFullyCoveredEXT */,IR(0, 0),IR(3, 1),IR(17, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5266,IR(0, 0),IR(10086, 14)/* MeshShadingNV */,IR(0, 0),IR(3, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5282,IR(0, 0),IR(9501, 17)/* ImageFootprintNV */,IR(0, 0),IR(1, 0),IR(67, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5283,IR(0, 0),IR(10071, 15)/* MeshShadingEXT */,IR(0, 0),IR(3, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5284,IR(0, 0),IR(8743, 23)/* FragmentBarycentricKHR */,IR(26, 1),IR(1, 0),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5288,IR(0, 0),IR(7554, 31)/* ComputeDerivativeGroupQuadsKHR */,IR(27, 1),IR(3, 1),IR(68, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5291,IR(0, 0),IR(8788, 19)/* FragmentDensityEXT */,IR(28, 1),IR(3, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5297,IR(0, 0),IR(9261, 29)/* GroupNonUniformPartitionedNV */,IR(0, 0),IR(1, 0),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5301,IR(0, 0),IR(11172, 17)/* ShaderNonUniform */,IR(29, 1),IR(3, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5302,IR(0, 0),IR(10809, 23)/* RuntimeDescriptorArray */,IR(30, 1),IR(3, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5303,IR(0, 0),IR(9682, 36)/* InputAttachmentArrayDynamicIndexing */,IR(31, 1),IR(90, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5304,IR(0, 0),IR(13066, 39)/* UniformTexelBufferArrayDynamicIndexing */,IR(32, 1),IR(73, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5305,IR(0, 0),IR(11878, 39)/* StorageTexelBufferArrayDynamicIndexing */,IR(33, 1),IR(91, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5306,IR(0, 0),IR(12971, 37)/* UniformBufferArrayNonUniformIndexing */,IR(34, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5307,IR(0, 0),IR(11007, 36)/* SampledImageArrayNonUniformIndexing */,IR(35, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5308,IR(0, 0),IR(11516, 37)/* StorageBufferArrayNonUniformIndexing */,IR(36, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5309,IR(0, 0),IR(11626, 36)/* StorageImageArrayNonUniformIndexing */,IR(37, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5310,IR(0, 0),IR(9757, 39)/* InputAttachmentArrayNonUniformIndexing */,IR(38, 1),IR(93, 2),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5311,IR(0, 0),IR(13147, 42)/* UniformTexelBufferArrayNonUniformIndexing */,IR(39, 1),IR(95, 2),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5312,IR(0, 0),IR(11959, 42)/* StorageTexelBufferArrayNonUniformIndexing */,IR(40, 1),IR(97, 2),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5336,IR(0, 0),IR(10571, 27)/* RayTracingPositionFetchKHR */,IR(0, 0),IR(3, 1),IR(72, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5340,IR(0, 0),IR(10529, 13)/* RayTracingNV */,IR(0, 0),IR(3, 1),IR(26, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5341,IR(0, 0),IR(10506, 23)/* RayTracingMotionBlurNV */,IR(0, 0),IR(3, 1),IR(27, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5345,IR(0, 0),IR(13398, 18)/* VulkanMemoryModel */,IR(41, 1),IR(1, 0),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5346,IR(0, 0),IR(13416, 29)/* VulkanMemoryModelDeviceScope */,IR(42, 1),IR(1, 0),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5347,IR(0, 0),IR(10188, 31)/* PhysicalStorageBufferAddresses */,IR(43, 1),IR(3, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5350,IR(0, 0),IR(7491, 32)/* ComputeDerivativeGroupLinearKHR */,IR(44, 1),IR(3, 1),IR(68, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5353,IR(0, 0),IR(10598, 25)/* RayTracingProvisionalKHR */,IR(0, 0),IR(3, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5357,IR(0, 0),IR(7725, 20)/* CooperativeMatrixNV */,IR(0, 0),IR(3, 1),IR(74, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5363,IR(0, 0),IR(8879, 33)/* FragmentShaderSampleInterlockEXT */,IR(0, 0),IR(3, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5372,IR(0, 0),IR(8912, 38)/* FragmentShaderShadingRateInterlockEXT */,IR(0, 0),IR(3, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5373,IR(0, 0),IR(11209, 19)/* ShaderSMBuiltinsNV */,IR(0, 0),IR(3, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5378,IR(0, 0),IR(8847, 32)/* FragmentShaderPixelInterlockEXT */,IR(0, 0),IR(3, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5379,IR(0, 0),IR(7936, 25)/* DemoteToHelperInvocation */,IR(45, 1),IR(3, 1),IR(76, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5380,IR(0, 0),IR(8066, 23)/* DisplacementMicromapNV */,IR(0, 0),IR(3, 1),IR(77, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5381,IR(0, 0),IR(10542, 29)/* RayTracingOpacityMicromapEXT */,IR(0, 0),IR(3, 1),IR(78, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5383,IR(0, 0),IR(11134, 26)/* ShaderInvocationReorderNV */,IR(0, 0),IR(60, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5390,IR(0, 0),IR(7419, 18)/* BindlessTextureNV */,IR(0, 0),IR(1, 0),IR(80, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5391,IR(0, 0),IR(10331, 25)/* RayQueryPositionFetchKHR */,IR(0, 0),IR(3, 1),IR(72, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5394,IR(0, 0),IR(7851, 20)/* CooperativeVectorNV */,IR(0, 0),IR(1, 0),IR(81, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5404,IR(0, 0),IR(7189, 22)/* AtomicFloat16VectorNV */,IR(0, 0),IR(1, 0),IR(82, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5409,IR(0, 0),IR(10420, 33)/* RayTracingDisplacementMicromapNV */,IR(0, 0),IR(60, 1),IR(77, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5414,IR(0, 0),IR(10286, 18)/* RawAccessChainsNV */,IR(0, 0),IR(1, 0),IR(83, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5418,IR(0, 0),IR(10623, 28)/* RayTracingSpheresGeometryNV */,IR(0, 0),IR(1, 0),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5419,IR(0, 0),IR(10467, 39)/* RayTracingLinearSweptSpheresGeometryNV */,IR(0, 0),IR(1, 0),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5430,IR(0, 0),IR(7785, 30)/* CooperativeMatrixReductionsNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5431,IR(0, 0),IR(7645, 31)/* CooperativeMatrixConversionsNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5432,IR(0, 0),IR(7745, 40)/* CooperativeMatrixPerElementOperationsNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5433,IR(0, 0),IR(7815, 36)/* CooperativeMatrixTensorAddressingNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5434,IR(0, 0),IR(7615, 30)/* CooperativeMatrixBlockLoadsNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5435,IR(0, 0),IR(7871, 28)/* CooperativeVectorTrainingNV */,IR(0, 0),IR(1, 0),IR(81, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5437,IR(0, 0),IR(10379, 41)/* RayTracingClusterAccelerationStructureNV */,IR(0, 0),IR(60, 1),IR(31, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5439,IR(0, 0),IR(12524, 19)/* TensorAddressingNV */,IR(0, 0),IR(1, 0),IR(85, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5568,IR(0, 0),IR(12469, 21)/* SubgroupShuffleINTEL */,IR(0, 0),IR(1, 0),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5569,IR(0, 0),IR(12302, 27)/* SubgroupBufferBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5570,IR(0, 0),IR(12374, 26)/* SubgroupImageBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5579,IR(0, 0),IR(12400, 31)/* SubgroupImageMediaBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(87, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5582,IR(0, 0),IR(10727, 21)/* RoundToInfinityINTEL */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5583,IR(0, 0),IR(8720, 23)/* FloatingPointModeINTEL */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5584,IR(0, 0),IR(9882, 23)/* IntegerFunctions2INTEL */,IR(0, 0),IR(1, 0),IR(89, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5603,IR(0, 0),IR(8999, 22)/* FunctionPointersINTEL */,IR(0, 0),IR(1, 0),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5604,IR(0, 0),IR(9642, 24)/* IndirectReferencesINTEL */,IR(0, 0),IR(1, 0),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5606,IR(0, 0),IR(7137, 9)/* AsmINTEL */,IR(0, 0),IR(1, 0),IR(91, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5612,IR(0, 0),IR(7231, 23)/* AtomicFloat32MinMaxEXT */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5613,IR(0, 0),IR(7274, 23)/* AtomicFloat64MinMaxEXT */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5616,IR(0, 0),IR(7166, 23)/* AtomicFloat16MinMaxEXT */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5617,IR(0, 0),IR(13379, 19)/* VectorComputeINTEL */,IR(0, 0),IR(99, 1),IR(93, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5619,IR(0, 0),IR(13364, 15)/* VectorAnyINTEL */,IR(0, 0),IR(1, 0),IR(93, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5629,IR(0, 0),IR(8276, 16)/* ExpectAssumeKHR */,IR(0, 0),IR(1, 0),IR(94, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5696,IR(0, 0),IR(12213, 33)/* SubgroupAvcMotionEstimationINTEL */,IR(0, 0),IR(1, 0),IR(95, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5697,IR(0, 0),IR(12246, 38)/* SubgroupAvcMotionEstimationIntraINTEL */,IR(0, 0),IR(1, 0),IR(95, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5698,IR(0, 0),IR(12174, 39)/* SubgroupAvcMotionEstimationChromaINTEL */,IR(0, 0),IR(1, 0),IR(95, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5817,IR(0, 0),IR(13283, 25)/* VariableLengthArrayINTEL */,IR(0, 0),IR(1, 0),IR(96, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5821,IR(0, 0),IR(8973, 26)/* FunctionFloatControlINTEL */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5824,IR(0, 0),IR(8604, 26)/* FPGAMemoryAttributesINTEL */,IR(0, 0),IR(1, 0),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5837,IR(0, 0),IR(8292, 20)/* FPFastMathModeINTEL */,IR(0, 0),IR(0, 1),IR(98, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5844,IR(0, 0),IR(7086, 32)/* ArbitraryPrecisionIntegersINTEL */,IR(0, 0),IR(1, 0),IR(99, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5845,IR(0, 0),IR(7049, 37)/* ArbitraryPrecisionFloatingPointINTEL */,IR(0, 0),IR(1, 0),IR(100, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5886,IR(0, 0),IR(13234, 30)/* UnstructuredLoopControlsINTEL */,IR(0, 0),IR(1, 0),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5888,IR(0, 0),IR(8558, 22)/* FPGALoopControlsINTEL */,IR(0, 0),IR(1, 0),IR(102, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5892,IR(0, 0),IR(9934, 22)/* KernelAttributesINTEL */,IR(0, 0),IR(1, 0),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5897,IR(0, 0),IR(8480, 26)/* FPGAKernelAttributesINTEL */,IR(0, 0),IR(1, 0),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5898,IR(0, 0),IR(8580, 24)/* FPGAMemoryAccessesINTEL */,IR(0, 0),IR(1, 0),IR(104, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5904,IR(0, 0),IR(8364, 27)/* FPGAClusterAttributesINTEL */,IR(0, 0),IR(1, 0),IR(105, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5906,IR(0, 0),IR(9999, 14)/* LoopFuseINTEL */,IR(0, 0),IR(1, 0),IR(106, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5908,IR(0, 0),IR(8420, 20)/* FPGADSPControlINTEL */,IR(0, 0),IR(1, 0),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5910,IR(0, 0),IR(10045, 26)/* MemoryAccessAliasingINTEL */,IR(0, 0),IR(1, 0),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5916,IR(0, 0),IR(8440, 40)/* FPGAInvocationPipeliningAttributesINTEL */,IR(0, 0),IR(1, 0),IR(109, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5920,IR(0, 0),IR(8340, 24)/* FPGABufferLocationINTEL */,IR(0, 0),IR(1, 0),IR(110, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5922,IR(0, 0),IR(7015, 34)/* ArbitraryPrecisionFixedPointINTEL */,IR(0, 0),IR(1, 0),IR(111, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5935,IR(0, 0),IR(12845, 23)/* USMStorageClassesINTEL */,IR(0, 0),IR(1, 0),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5939,IR(0, 0),IR(10780, 29)/* RuntimeAlignedAttributeINTEL */,IR(0, 0),IR(1, 0),IR(113, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5943,IR(0, 0),IR(9442, 13)/* IOPipesINTEL */,IR(0, 0),IR(1, 0),IR(114, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5945,IR(0, 0),IR(7453, 19)/* BlockingPipesINTEL */,IR(0, 0),IR(1, 0),IR(115, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5948,IR(0, 0),IR(8630, 13)/* FPGARegINTEL */,IR(0, 0),IR(1, 0),IR(116, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6016,IR(0, 0),IR(8206, 19)/* DotProductInputAll */,IR(46, 1),IR(1, 0),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6017,IR(0, 0),IR(8100, 22)/* DotProductInput4x8Bit */,IR(47, 1),IR(100, 1),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6018,IR(0, 0),IR(8147, 28)/* DotProductInput4x8BitPacked */,IR(48, 1),IR(1, 0),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6019,IR(0, 0),IR(8089, 11)/* DotProduct */,IR(49, 1),IR(1, 0),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6020,IR(0, 0),IR(10304, 15)/* RayCullMaskKHR */,IR(0, 0),IR(1, 0),IR(32, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6022,IR(0, 0),IR(7676, 21)/* CooperativeMatrixKHR */,IR(0, 0),IR(1, 0),IR(118, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6024,IR(0, 0),IR(10703, 24)/* ReplicatedCompositesEXT */,IR(0, 0),IR(1, 0),IR(119, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6025,IR(0, 0),IR(7437, 16)/* BitInstructions */,IR(0, 0),IR(1, 0),IR(120, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6026,IR(0, 0),IR(9310, 25)/* GroupNonUniformRotateKHR */,IR(0, 0),IR(76, 1),IR(121, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6029,IR(0, 0),IR(8705, 15)/* FloatControls2 */,IR(0, 0),IR(1, 0),IR(122, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6033,IR(0, 0),IR(7211, 20)/* AtomicFloat32AddEXT */,IR(0, 0),IR(1, 0),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6034,IR(0, 0),IR(7254, 20)/* AtomicFloat64AddEXT */,IR(0, 0),IR(1, 0),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6089,IR(0, 0),IR(9979, 20)/* LongCompositesINTEL */,IR(0, 0),IR(1, 0),IR(124, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6094,IR(0, 0),IR(10144, 11)/* OptNoneEXT */,IR(50, 1),IR(1, 0),IR(125, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6095,IR(0, 0),IR(7146, 20)/* AtomicFloat16AddEXT */,IR(0, 0),IR(1, 0),IR(127, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6114,IR(0, 0),IR(7915, 21)/* DebugInfoModuleINTEL */,IR(0, 0),IR(1, 0),IR(128, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6115,IR(0, 0),IR(7328, 24)/* BFloat16ConversionINTEL */,IR(0, 0),IR(1, 0),IR(129, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6141,IR(0, 0),IR(11398, 18)/* SplitBarrierINTEL */,IR(0, 0),IR(1, 0),IR(130, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6144,IR(0, 0),IR(7118, 19)/* ArithmeticFenceEXT */,IR(0, 0),IR(1, 0),IR(131, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6150,IR(0, 0),IR(8391, 29)/* FPGAClusterAttributesV2INTEL */,IR(0, 0),IR(101, 1),IR(105, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6161,IR(0, 0),IR(8506, 28)/* FPGAKernelAttributesv2INTEL */,IR(0, 0),IR(102, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6162,IR(0, 0),IR(12506, 18)/* TaskSequenceINTEL */,IR(0, 0),IR(1, 0),IR(132, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6169,IR(0, 0),IR(8643, 16)/* FPMaxErrorINTEL */,IR(0, 0),IR(1, 0),IR(133, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6171,IR(0, 0),IR(8534, 24)/* FPGALatencyControlINTEL */,IR(0, 0),IR(1, 0),IR(134, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6174,IR(0, 0),IR(8312, 28)/* FPGAArgumentInterfacesINTEL */,IR(0, 0),IR(1, 0),IR(135, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6187,IR(0, 0),IR(9142, 30)/* GlobalVariableHostAccessINTEL */,IR(0, 0),IR(1, 0),IR(136, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6189,IR(0, 0),IR(9107, 35)/* GlobalVariableFPGADecorationsINTEL */,IR(0, 0),IR(1, 0),IR(137, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6220,IR(0, 0),IR(12329, 28)/* SubgroupBufferPrefetchINTEL */,IR(0, 0),IR(1, 0),IR(138, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6228,IR(0, 0),IR(12091, 23)/* Subgroup2DBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(139, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6229,IR(0, 0),IR(12114, 30)/* Subgroup2DBlockTransformINTEL */,IR(0, 0),IR(103, 1),IR(139, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6230,IR(0, 0),IR(12144, 30)/* Subgroup2DBlockTransposeINTEL */,IR(0, 0),IR(103, 1),IR(139, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6236,IR(0, 0),IR(12431, 38)/* SubgroupMatrixMultiplyAccumulateINTEL */,IR(0, 0),IR(1, 0),IR(140, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6241,IR(0, 0),IR(12570, 28)/* TernaryBitwiseFunctionINTEL */,IR(0, 0),IR(1, 0),IR(141, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6400,IR(0, 0),IR(9409, 26)/* GroupUniformArithmeticKHR */,IR(0, 0),IR(1, 0),IR(142, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6425,IR(0, 0),IR(12543, 27)/* TensorFloat32RoundingINTEL */,IR(0, 0),IR(1, 0),IR(143, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6427,IR(0, 0),IR(10013, 25)/* MaskedGatherScatterINTEL */,IR(0, 0),IR(1, 0),IR(144, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6441,IR(0, 0),IR(7472, 19)/* CacheControlsINTEL */,IR(0, 0),IR(1, 0),IR(145, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6460,IR(0, 0),IR(10683, 20)/* RegisterLimitsINTEL */,IR(0, 0),IR(1, 0),IR(146, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {0,IR(0, 0),IR(13680, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13618, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13626, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {3,IR(0, 0),IR(13634, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(13640, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(13647, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(13658, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(13667, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(13692, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(13698, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(13708, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(13734, 15)/* ImportedModule */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {1,IR(0, 0),IR(13714, 20)/* ImportedDeclaration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(13885, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(13871, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(13901, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(13843, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(13810, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(13777, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(13749, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(13764, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(13952, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(13934, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(13987, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(13789, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(13914, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(13967, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(13855, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {16384,IR(0, 0),IR(13827, 16)/* FlagIsEnumClass */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {32768,IR(0, 0),IR(14028, 20)/* FlagTypePassByValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {65536,IR(0, 0),IR(14004, 24)/* FlagTypePassByReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14069, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {1,IR(0, 0),IR(14090, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {2,IR(0, 0),IR(14084, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {3,IR(0, 1),IR(14095, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {4,IR(1, 2),IR(14053, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {5,IR(0, 0),IR(14117, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {6,IR(0, 0),IR(14122, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {7,IR(0, 0),IR(14106, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {8,IR(0, 1),IR(14062, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {9,IR(1, 2),IR(14075, 9)/* Fragment */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {0,IR(0, 0),IR(14140, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14163, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14150, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {3,IR(0, 0),IR(14129, 11)/* AtomicType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(14176, 10)/* Float16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1,IR(0, 0),IR(14186, 10)/* Float32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {2,IR(0, 0),IR(14196, 10)/* Float64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {3,IR(0, 0),IR(14272, 13)/* SignedInt8NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {4,IR(0, 0),IR(14230, 14)/* SignedInt16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {5,IR(0, 0),IR(14244, 14)/* SignedInt32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {6,IR(0, 0),IR(14258, 14)/* SignedInt64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {7,IR(0, 0),IR(14352, 15)/* UnsignedInt8NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {8,IR(0, 0),IR(14304, 16)/* UnsignedInt16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {9,IR(0, 0),IR(14320, 16)/* UnsignedInt32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {10,IR(0, 0),IR(14336, 16)/* UnsignedInt64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491000,IR(0, 0),IR(14285, 19)/* SignedInt8PackedNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491001,IR(0, 0),IR(14367, 21)/* UnsignedInt8PackedNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491002,IR(0, 0),IR(14206, 12)/* FloatE4M3NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491003,IR(0, 0),IR(14218, 12)/* FloatE5M2NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {0,IR(0, 0),IR(14456, 12)/* RowMajorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {1,IR(0, 0),IR(14416, 15)/* ColumnMajorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {4202,IR(0, 0),IR(14431, 25)/* RowBlockedInterleavedARM */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {4203,IR(0, 0),IR(14388, 28)/* ColumnBlockedInterleavedARM */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {0,IR(0, 0),IR(14581, 8)/* NoneKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {1,IR(0, 0),IR(14468, 27)/* MatrixASignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {2,IR(0, 0),IR(14495, 27)/* MatrixBSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {4,IR(0, 0),IR(14522, 27)/* MatrixCSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {8,IR(0, 0),IR(14549, 32)/* MatrixResultSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {16,IR(0, 0),IR(14589, 26)/* SaturatingAccumulationKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {1,IR(0, 0),IR(14626, 4)/* Row */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {2,IR(0, 0),IR(14619, 7)/* Column */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {4,IR(0, 0),IR(14615, 4)/* 2x2 */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {0,IR(0, 0),IR(14630, 11)/* MatrixAKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {1,IR(0, 0),IR(14662, 11)/* MatrixBKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {2,IR(0, 0),IR(14641, 21)/* MatrixAccumulatorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {0,IR(0, 0),IR(14708, 11)/* RowMajorNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {1,IR(0, 0),IR(14673, 14)/* ColumnMajorNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {2,IR(0, 0),IR(14687, 21)/* InferencingOptimalNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {3,IR(0, 0),IR(14719, 18)/* TrainingOptimalNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {0,IR(0, 0),IR(13680, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13618, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13626, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(13634, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(13640, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(13647, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(13658, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {8,IR(0, 0),IR(13667, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(13692, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(13698, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(13708, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(13885, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(13871, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(13901, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(13843, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(13810, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(13777, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(13749, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(13764, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(13952, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(13934, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(13987, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(13789, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(13914, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(13967, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(13855, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14069, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {1,IR(0, 0),IR(14090, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {2,IR(0, 0),IR(14084, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {3,IR(0, 1),IR(14095, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {4,IR(1, 2),IR(14053, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {5,IR(0, 0),IR(14117, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {6,IR(0, 0),IR(14122, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {7,IR(0, 0),IR(14106, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {8,IR(0, 1),IR(14062, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {0,IR(0, 0),IR(14140, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14163, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14150, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(16729, 17)/* RelaxedPrecision */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {1,IR(0, 1),IR(16946, 7)/* SpecId */,IR(0, 0),IR(104, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {2,IR(0, 0),IR(14899, 6)/* Block */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {3,IR(0, 0),IR(14977, 12)/* BufferBlock */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),SPV_SPIRV_VERSION_WORD(1,3)}, // SPV_OPERAND_TYPE_DECORATION
  {4,IR(0, 0),IR(16790, 9)/* RowMajor */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5,IR(0, 0),IR(15135, 9)/* ColMajor */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6,IR(0, 1),IR(14816, 12)/* ArrayStride */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {7,IR(0, 1),IR(16048, 13)/* MatrixStride */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {8,IR(0, 0),IR(15513, 11)/* GLSLShared */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {9,IR(0, 0),IR(15502, 11)/* GLSLPacked */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {10,IR(0, 0),IR(15036, 8)/* CPacked */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {11,IR(3, 1),IR(15009, 8)/* BuiltIn */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {13,IR(0, 0),IR(16220, 14)/* NoPerspective */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {14,IR(0, 0),IR(15336, 5)/* Flat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {15,IR(0, 0),IR(16417, 6)/* Patch */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {16,IR(0, 0),IR(15104, 9)/* Centroid */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {17,IR(0, 0),IR(16813, 7)/* Sample */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {18,IR(0, 0),IR(15751, 10)/* Invariant */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {19,IR(0, 0),IR(16746, 9)/* Restrict */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {20,IR(0, 0),IR(14753, 8)/* Aliased */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {21,IR(0, 0),IR(17244, 9)/* Volatile */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {22,IR(0, 0),IR(15181, 9)/* Constant */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {23,IR(0, 0),IR(15126, 9)/* Coherent */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {24,IR(0, 0),IR(16351, 12)/* NonWritable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {25,IR(0, 0),IR(16314, 12)/* NonReadable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {26,IR(0, 0),IR(17090, 8)/* Uniform */,IR(0, 0),IR(106, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {27,IR(4, 1),IR(17098, 10)/* UniformId */,IR(0, 0),IR(106, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {28,IR(0, 0),IR(16820, 20)/* SaturatedConversion */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {29,IR(0, 1),IR(17026, 7)/* Stream */,IR(0, 0),IR(108, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {30,IR(0, 1),IR(15834, 9)/* Location */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {31,IR(0, 1),IR(15144, 10)/* Component */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {32,IR(0, 1),IR(15686, 6)/* Index */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {33,IR(0, 1),IR(14857, 8)/* Binding */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {34,IR(0, 1),IR(15204, 14)/* DescriptorSet */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {35,IR(0, 1),IR(16377, 7)/* Offset */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {36,IR(0, 1),IR(17285, 10)/* XfbBuffer */,IR(0, 0),IR(109, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {37,IR(0, 1),IR(17295, 10)/* XfbStride */,IR(0, 0),IR(109, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {38,IR(5, 1),IR(15361, 14)/* FuncParamAttr */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {39,IR(6, 1),IR(15321, 15)/* FPRoundingMode */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {40,IR(7, 1),IR(15280, 15)/* FPFastMathMode */,IR(0, 0),IR(110, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {41,IR(8, 2),IR(15816, 18)/* LinkageAttributes */,IR(0, 0),IR(112, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {42,IR(0, 0),IR(16206, 14)/* NoContraction */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {43,IR(0, 1),IR(15730, 21)/* InputAttachmentIndex */,IR(0, 0),IR(90, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {44,IR(0, 1),IR(14794, 10)/* Alignment */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {45,IR(0, 1),IR(16061, 14)/* MaxByteOffset */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {46,IR(10, 1),IR(14804, 12)/* AlignmentId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {47,IR(10, 1),IR(16075, 16)/* MaxByteOffsetId */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4469,IR(0, 0),IR(16234, 13)/* NoSignedWrap */,IR(0, 0),IR(1, 0),IR(147, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4470,IR(0, 0),IR(16247, 15)/* NoUnsignedWrap */,IR(0, 0),IR(1, 0),IR(147, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4487,IR(0, 0),IR(17253, 18)/* WeightTextureQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4488,IR(0, 0),IR(14927, 22)/* BlockMatchTextureQCOM */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4499,IR(0, 0),IR(14905, 22)/* BlockMatchSamplerQCOM */,IR(0, 0),IR(1, 0),IR(51, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4999,IR(0, 0),IR(15262, 18)/* ExplicitInterpAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5019,IR(10, 1),IR(16282, 32)/* NodeSharesPayloadLimitsWithAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5020,IR(10, 1),IR(16262, 20)/* NodeMaxPayloadsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5078,IR(0, 0),IR(17049, 23)/* TrackFinishWritingAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5091,IR(10, 1),IR(16501, 20)/* PayloadNodeNameAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5098,IR(10, 1),IR(16476, 25)/* PayloadNodeBaseIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5099,IR(0, 0),IR(16521, 27)/* PayloadNodeSparseArrayAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5100,IR(10, 1),IR(16451, 25)/* PayloadNodeArraySizeAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5105,IR(0, 0),IR(16423, 28)/* PayloadDispatchIndirectAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5248,IR(0, 0),IR(16384, 19)/* OverrideCoverageNV */,IR(0, 0),IR(113, 1),IR(61, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5250,IR(0, 0),IR(16403, 14)/* PassthroughNV */,IR(0, 0),IR(114, 1),IR(62, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5252,IR(0, 0),IR(17225, 19)/* ViewportRelativeNV */,IR(0, 0),IR(89, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5256,IR(0, 1),IR(16840, 28)/* SecondaryViewportRelativeNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5271,IR(0, 0),IR(16548, 16)/* PerPrimitiveEXT */,IR(51, 1),IR(115, 2),IR(148, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5272,IR(0, 0),IR(16614, 10)/* PerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5273,IR(0, 0),IR(16579, 10)/* PerTaskNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5285,IR(0, 0),IR(16589, 13)/* PerVertexKHR */,IR(52, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5300,IR(0, 0),IR(16326, 11)/* NonUniform */,IR(53, 1),IR(92, 1),IR(71, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5355,IR(0, 0),IR(16755, 16)/* RestrictPointer */,IR(54, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5356,IR(0, 0),IR(14761, 15)/* AliasedPointer */,IR(55, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5386,IR(0, 0),IR(15550, 30)/* HitObjectShaderRecordBufferNV */,IR(0, 0),IR(117, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5398,IR(0, 0),IR(14881, 18)/* BindlessSamplerNV */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5399,IR(0, 0),IR(14865, 16)/* BindlessImageNV */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5400,IR(0, 0),IR(14962, 15)/* BoundSamplerNV */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5401,IR(0, 0),IR(14949, 13)/* BoundImageNV */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5599,IR(0, 1),IR(16799, 14)/* SIMTCallINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5602,IR(0, 0),IR(16658, 26)/* ReferencedIndirectlyINTEL */,IR(0, 0),IR(120, 1),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5607,IR(11, 1),IR(15113, 13)/* ClobberINTEL */,IR(0, 0),IR(121, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5608,IR(0, 0),IR(16868, 17)/* SideEffectsINTEL */,IR(0, 0),IR(121, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5624,IR(0, 0),IR(17198, 27)/* VectorComputeVariableINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5625,IR(0, 1),IR(15375, 21)/* FuncParamIOKindINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5626,IR(0, 0),IR(17171, 27)/* VectorComputeFunctionINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5627,IR(0, 0),IR(16979, 15)/* StackCallINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5628,IR(0, 1),IR(15524, 26)/* GlobalVariableOffsetINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5634,IR(10, 1),IR(15190, 14)/* CounterBuffer */,IR(56, 1),IR(1, 0),IR(150, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5635,IR(11, 1),IR(17108, 13)/* UserSemantic */,IR(57, 1),IR(1, 0),IR(150, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5636,IR(11, 1),IR(17121, 15)/* UserTypeGOOGLE */,IR(0, 0),IR(1, 0),IR(151, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5822,IR(12, 2),IR(15451, 26)/* FunctionRoundingModeINTEL */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5823,IR(14, 2),IR(15396, 24)/* FunctionDenormModeINTEL */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5825,IR(0, 0),IR(16684, 14)/* RegisterINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5826,IR(11, 1),IR(16170, 12)/* MemoryINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5827,IR(0, 1),IR(16363, 14)/* NumbanksINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5828,IR(0, 1),IR(14842, 15)/* BankwidthINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5829,IR(0, 1),IR(16111, 22)/* MaxPrivateCopiesINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5830,IR(0, 0),IR(16930, 16)/* SinglepumpINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5831,IR(0, 0),IR(15246, 16)/* DoublepumpINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5832,IR(0, 1),IR(16133, 19)/* MaxReplicatesINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5833,IR(0, 0),IR(16885, 20)/* SimpleDualPortINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5834,IR(16, 2),IR(16182, 11)/* MergeINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5835,IR(18, 1),IR(14828, 14)/* BankBitsINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5836,IR(0, 1),IR(15341, 20)/* ForcePow2DepthINTEL */,IR(0, 0),IR(123, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5883,IR(0, 1),IR(17033, 16)/* StridesizeINTEL */,IR(0, 0),IR(123, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5884,IR(0, 1),IR(17271, 14)/* WordsizeINTEL */,IR(0, 0),IR(123, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5885,IR(0, 0),IR(17072, 18)/* TrueDualPortINTEL */,IR(0, 0),IR(123, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5899,IR(0, 0),IR(15017, 19)/* BurstCoalesceINTEL */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5900,IR(0, 1),IR(15089, 15)/* CacheSizeINTEL */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5901,IR(0, 0),IR(15218, 28)/* DontStaticallyCoalesceINTEL */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5902,IR(0, 1),IR(16644, 14)/* PrefetchINTEL */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5905,IR(0, 0),IR(16994, 17)/* StallEnableINTEL */,IR(0, 0),IR(101, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5907,IR(0, 0),IR(15477, 25)/* FuseLoopsInFunctionINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5909,IR(1, 2),IR(16029, 19)/* MathOpDSPModeINTEL */,IR(0, 0),IR(126, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5914,IR(10, 1),IR(14737, 16)/* AliasScopeINTEL */,IR(0, 0),IR(127, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5915,IR(10, 1),IR(16193, 13)/* NoAliasINTEL */,IR(0, 0),IR(127, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5917,IR(0, 1),IR(15706, 24)/* InitiationIntervalINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5918,IR(0, 1),IR(16091, 20)/* MaxConcurrencyINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5919,IR(0, 1),IR(16624, 20)/* PipelineEnableINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5921,IR(0, 1),IR(14989, 20)/* BufferLocationINTEL */,IR(0, 0),IR(129, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5944,IR(0, 1),IR(15639, 19)/* IOPipeStorageINTEL */,IR(0, 0),IR(130, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6080,IR(19, 2),IR(15420, 31)/* FunctionFloatingPointModeINTEL */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6085,IR(0, 0),IR(16905, 25)/* SingleElementVectorINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6087,IR(0, 0),IR(17136, 35)/* VectorComputeCallableFunctionINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6140,IR(0, 0),IR(16152, 18)/* MediaBlockIOINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6151,IR(0, 0),IR(17011, 15)/* StallFreeINTEL */,IR(0, 0),IR(131, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6170,IR(21, 1),IR(15295, 26)/* FPMaxErrorDecorationINTEL */,IR(0, 0),IR(132, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6172,IR(0, 1),IR(15791, 25)/* LatencyControlLabelINTEL */,IR(0, 0),IR(133, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6173,IR(22, 3),IR(15761, 30)/* LatencyControlConstraintINTEL */,IR(0, 0),IR(133, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6175,IR(0, 0),IR(15154, 27)/* ConduitKernelArgumentINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6176,IR(0, 0),IR(16698, 31)/* RegisterMapKernelArgumentINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6177,IR(0, 1),IR(15843, 33)/* MMHostInterfaceAddressWidthINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6178,IR(0, 1),IR(15876, 30)/* MMHostInterfaceDataWidthINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6179,IR(0, 1),IR(15906, 28)/* MMHostInterfaceLatencyINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6180,IR(25, 1),IR(15963, 34)/* MMHostInterfaceReadWriteModeINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6181,IR(0, 1),IR(15934, 29)/* MMHostInterfaceMaxBurstINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6182,IR(0, 1),IR(15997, 32)/* MMHostInterfaceWaitRequestINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6183,IR(0, 0),IR(16953, 26)/* StableKernelArgumentINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6188,IR(26, 2),IR(15623, 16)/* HostAccessINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6190,IR(28, 1),IR(15692, 14)/* InitModeINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6191,IR(0, 1),IR(15658, 28)/* ImplementInRegisterMapINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6442,IR(29, 2),IR(15044, 22)/* CacheControlLoadINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6443,IR(31, 2),IR(15066, 23)/* CacheControlStoreINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {0,IR(0, 0),IR(17305, 3)/* 1D */,IR(0, 0),IR(72, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {1,IR(0, 0),IR(17308, 3)/* 2D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {2,IR(0, 0),IR(17311, 3)/* 3D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {3,IR(0, 0),IR(17321, 5)/* Cube */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {4,IR(0, 0),IR(17326, 5)/* Rect */,IR(0, 0),IR(71, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {5,IR(0, 0),IR(17314, 7)/* Buffer */,IR(0, 0),IR(73, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {6,IR(0, 0),IR(17331, 12)/* SubpassData */,IR(0, 0),IR(90, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {4173,IR(0, 0),IR(17343, 17)/* TileImageDataEXT */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {0,IR(0, 1),IR(17747, 12)/* Invocations */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {1,IR(0, 0),IR(18821, 13)/* SpacingEqual */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {2,IR(0, 0),IR(18834, 22)/* SpacingFractionalEven */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {3,IR(0, 0),IR(18856, 21)/* SpacingFractionalOdd */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4,IR(0, 0),IR(19232, 14)/* VertexOrderCw */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5,IR(0, 0),IR(19217, 15)/* VertexOrderCcw */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6,IR(0, 0),IR(18416, 19)/* PixelCenterInteger */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {7,IR(0, 0),IR(18231, 16)/* OriginUpperLeft */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {8,IR(0, 0),IR(18215, 16)/* OriginLowerLeft */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {9,IR(0, 0),IR(17568, 19)/* EarlyFragmentTests */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {10,IR(0, 0),IR(18487, 10)/* PointMode */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {11,IR(0, 0),IR(19246, 4)/* Xfb */,IR(0, 0),IR(109, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {12,IR(0, 0),IR(17413, 15)/* DepthReplacing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {14,IR(0, 0),IR(17390, 13)/* DepthGreater */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {15,IR(0, 0),IR(17403, 10)/* DepthLess */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {16,IR(0, 0),IR(17428, 15)/* DepthUnchanged */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {17,IR(22, 3),IR(17783, 10)/* LocalSize */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {18,IR(22, 3),IR(17793, 14)/* LocalSizeHint */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {19,IR(0, 0),IR(17711, 12)/* InputPoints */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {20,IR(0, 0),IR(17680, 11)/* InputLines */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {21,IR(0, 0),IR(17691, 20)/* InputLinesAdjacency */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {22,IR(0, 0),IR(19195, 10)/* Triangles */,IR(0, 0),IR(12, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {23,IR(0, 0),IR(17723, 24)/* InputTrianglesAdjacency */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {24,IR(0, 0),IR(18534, 6)/* Quads */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {25,IR(0, 0),IR(17774, 9)/* Isolines */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {26,IR(0, 1),IR(18401, 15)/* OutputVertices */,IR(0, 0),IR(139, 4),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {27,IR(0, 0),IR(18292, 13)/* OutputPoints */,IR(0, 0),IR(143, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {28,IR(0, 0),IR(18247, 16)/* OutputLineStrip */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {29,IR(0, 0),IR(18344, 20)/* OutputTriangleStrip */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {30,IR(0, 1),IR(19205, 12)/* VecTypeHint */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {31,IR(0, 0),IR(17375, 15)/* ContractionOff */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {33,IR(0, 0),IR(17668, 12)/* Initializer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {34,IR(0, 0),IR(17605, 10)/* Finalizer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {35,IR(0, 1),IR(6619, 13)/* SubgroupSize */,IR(0, 0),IR(146, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {36,IR(0, 1),IR(19129, 22)/* SubgroupsPerWorkgroup */,IR(0, 0),IR(146, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {37,IR(10, 1),IR(19151, 24)/* SubgroupsPerWorkgroupId */,IR(0, 0),IR(146, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {38,IR(33, 3),IR(17823, 12)/* LocalSizeId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {39,IR(33, 3),IR(17807, 16)/* LocalSizeHintId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4169,IR(0, 0),IR(18055, 34)/* NonCoherentColorAttachmentReadEXT */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4170,IR(0, 0),IR(18089, 34)/* NonCoherentDepthAttachmentReadEXT */,IR(0, 0),IR(147, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4171,IR(0, 0),IR(18123, 36)/* NonCoherentStencilAttachmentReadEXT */,IR(0, 0),IR(148, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4421,IR(0, 0),IR(19099, 30)/* SubgroupUniformControlFlowKHR */,IR(0, 0),IR(3, 1),IR(152, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4446,IR(0, 0),IR(18497, 18)/* PostDepthCoverage */,IR(0, 0),IR(149, 1),IR(42, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4459,IR(0, 1),IR(8007, 15)/* DenormPreserve */,IR(0, 0),IR(150, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4460,IR(0, 1),IR(7989, 18)/* DenormFlushToZero */,IR(0, 0),IR(151, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4461,IR(0, 1),IR(11357, 25)/* SignedZeroInfNanPreserve */,IR(0, 0),IR(152, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4462,IR(0, 1),IR(10748, 16)/* RoundingModeRTE */,IR(0, 0),IR(153, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4463,IR(0, 1),IR(10764, 16)/* RoundingModeRTZ */,IR(0, 0),IR(154, 1),IR(44, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4489,IR(0, 0),IR(18159, 34)/* NonCoherentTileAttachmentReadQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4490,IR(22, 3),IR(19175, 20)/* TileShadingRateQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5017,IR(0, 0),IR(17539, 29)/* EarlyAndLateFragmentTestsAMD */,IR(0, 0),IR(3, 1),IR(153, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5027,IR(0, 0),IR(18997, 23)/* StencilRefReplacingEXT */,IR(0, 0),IR(42, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5069,IR(0, 0),IR(17360, 15)/* CoalescingAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5070,IR(10, 1),IR(17759, 15)/* IsApiEntryAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5071,IR(10, 1),IR(17835, 21)/* MaxNodeRecursionAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5072,IR(33, 3),IR(18877, 24)/* StaticNumWorkgroupsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5073,IR(10, 1),IR(6370, 16)/* ShaderIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5077,IR(33, 3),IR(17856, 21)/* MaxNumWorkgroupsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5079,IR(0, 0),IR(19047, 28)/* StencilRefUnchangedFrontAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5080,IR(0, 0),IR(18926, 26)/* StencilRefGreaterFrontAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5081,IR(0, 0),IR(18974, 23)/* StencilRefLessFrontAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5082,IR(0, 0),IR(19020, 27)/* StencilRefUnchangedBackAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5083,IR(0, 0),IR(18901, 25)/* StencilRefGreaterBackAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5084,IR(0, 0),IR(18952, 22)/* StencilRefLessBackAMD */,IR(0, 0),IR(42, 1),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5088,IR(0, 0),IR(18515, 19)/* QuadDerivativesKHR */,IR(0, 0),IR(155, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5089,IR(0, 0),IR(18566, 20)/* RequireFullQuadsKHR */,IR(0, 0),IR(155, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5102,IR(36, 2),IR(18801, 20)/* SharesInputWithAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5269,IR(0, 0),IR(18263, 15)/* OutputLinesEXT */,IR(58, 1),IR(115, 2),IR(148, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5270,IR(0, 1),IR(18305, 20)/* OutputPrimitivesEXT */,IR(59, 1),IR(115, 2),IR(148, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5289,IR(0, 0),IR(17492, 24)/* DerivativeGroupQuadsKHR */,IR(60, 1),IR(156, 2),IR(68, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5290,IR(0, 0),IR(17443, 25)/* DerivativeGroupLinearKHR */,IR(61, 1),IR(158, 2),IR(68, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5298,IR(0, 0),IR(18364, 19)/* OutputTrianglesEXT */,IR(62, 1),IR(115, 2),IR(148, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5366,IR(0, 0),IR(18435, 25)/* PixelInterlockOrderedEXT */,IR(0, 0),IR(160, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5367,IR(0, 0),IR(18460, 27)/* PixelInterlockUnorderedEXT */,IR(0, 0),IR(160, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5368,IR(0, 0),IR(18628, 26)/* SampleInterlockOrderedEXT */,IR(0, 0),IR(161, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5369,IR(0, 0),IR(18654, 28)/* SampleInterlockUnorderedEXT */,IR(0, 0),IR(161, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5370,IR(0, 0),IR(18710, 31)/* ShadingRateInterlockOrderedEXT */,IR(0, 0),IR(162, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5371,IR(0, 0),IR(18741, 33)/* ShadingRateInterlockUnorderedEXT */,IR(0, 0),IR(162, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5618,IR(0, 1),IR(18774, 27)/* SharedLocalMemorySizeINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5620,IR(0, 1),IR(18607, 21)/* RoundingModeRTPINTEL */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5621,IR(0, 1),IR(18586, 21)/* RoundingModeRTNINTEL */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5622,IR(0, 1),IR(17615, 26)/* FloatingPointModeALTINTEL */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5623,IR(0, 1),IR(17641, 27)/* FloatingPointModeIEEEINTEL */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5893,IR(22, 3),IR(17893, 22)/* MaxWorkgroupSizeINTEL */,IR(0, 0),IR(164, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5894,IR(0, 1),IR(17877, 16)/* MaxWorkDimINTEL */,IR(0, 0),IR(164, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5895,IR(0, 0),IR(18035, 20)/* NoGlobalOffsetINTEL */,IR(0, 0),IR(164, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5896,IR(0, 1),IR(18193, 22)/* NumSIMDWorkitemsINTEL */,IR(0, 0),IR(102, 1),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5903,IR(0, 1),IR(18682, 28)/* SchedulerTargetFmaxMhzINTEL */,IR(0, 0),IR(102, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6023,IR(0, 0),IR(17915, 24)/* MaximallyReconvergesKHR */,IR(0, 0),IR(3, 1),IR(156, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6028,IR(36, 2),IR(17587, 18)/* FPFastMathDefault */,IR(0, 0),IR(165, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6154,IR(0, 1),IR(19075, 24)/* StreamingInterfaceINTEL */,IR(0, 0),IR(102, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6160,IR(0, 1),IR(18540, 26)/* RegisterMapInterfaceINTEL */,IR(0, 0),IR(166, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6417,IR(0, 1),IR(17985, 23)/* NamedBarrierCountINTEL */,IR(0, 0),IR(119, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6461,IR(0, 1),IR(17939, 22)/* MaximumRegistersINTEL */,IR(0, 0),IR(167, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6462,IR(10, 1),IR(17961, 24)/* MaximumRegistersIdINTEL */,IR(0, 0),IR(167, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6463,IR(38, 1),IR(18008, 27)/* NamedMaximumRegistersINTEL */,IR(0, 0),IR(167, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {0,IR(0, 0),IR(19481, 7)/* Vertex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {1,IR(0, 0),IR(19438, 20)/* TessellationControl */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {2,IR(0, 0),IR(19458, 23)/* TessellationEvaluation */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {3,IR(0, 0),IR(9036, 9)/* Geometry */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {4,IR(0, 0),IR(14075, 9)/* Fragment */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5,IR(0, 0),IR(19319, 10)/* GLCompute */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {6,IR(0, 0),IR(9927, 7)/* Kernel */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5267,IR(0, 0),IR(19431, 7)/* TaskNV */,IR(0, 0),IR(50, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5268,IR(0, 0),IR(19368, 7)/* MeshNV */,IR(0, 0),IR(50, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5313,IR(0, 0),IR(19390, 17)/* RayGenerationKHR */,IR(63, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5314,IR(0, 0),IR(19329, 16)/* IntersectionKHR */,IR(64, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5315,IR(0, 0),IR(19250, 10)/* AnyHitKHR */,IR(65, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5316,IR(0, 0),IR(19292, 14)/* ClosestHitKHR */,IR(66, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5317,IR(0, 0),IR(19375, 8)/* MissKHR */,IR(67, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5318,IR(0, 0),IR(19269, 12)/* CallableKHR */,IR(68, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5364,IR(0, 0),IR(19423, 8)/* TaskEXT */,IR(0, 0),IR(53, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5365,IR(0, 0),IR(19360, 8)/* MeshEXT */,IR(0, 0),IR(53, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {0,IR(0, 0),IR(19500, 9)/* Preserve */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPDENORM_MODE
  {1,IR(0, 0),IR(19488, 12)/* FlushToZero */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPDENORM_MODE
  {0,IR(0, 0),IR(19509, 12)/* BFloat16KHR */,IR(0, 0),IR(84, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPENCODING
  {0,IR(0, 0),IR(19525, 5)/* IEEE */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPOPERATION_MODE
  {1,IR(0, 0),IR(19521, 4)/* ALT */,IR(0, 0),IR(122, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPOPERATION_MODE
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {1,IR(0, 0),IR(19640, 7)/* NotNaN */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {2,IR(0, 0),IR(19633, 7)/* NotInf */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {4,IR(0, 0),IR(19629, 4)/* NSZ */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {8,IR(0, 0),IR(19598, 11)/* AllowRecip */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {16,IR(0, 0),IR(19624, 5)/* Fast */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {65536,IR(0, 0),IR(19530, 14)/* AllowContract */,IR(69, 1),IR(168, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {131072,IR(0, 0),IR(19567, 13)/* AllowReassoc */,IR(70, 1),IR(168, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {262144,IR(0, 0),IR(19609, 15)/* AllowTransform */,IR(0, 0),IR(165, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {0,IR(0, 0),IR(19647, 4)/* RTE */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {1,IR(0, 0),IR(19659, 4)/* RTZ */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {2,IR(0, 0),IR(19655, 4)/* RTP */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {3,IR(0, 0),IR(19651, 4)/* RTN */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {1,IR(0, 0),IR(19699, 16)/* Vertical2Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {2,IR(0, 0),IR(19715, 16)/* Vertical4Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {4,IR(0, 0),IR(19663, 18)/* Horizontal2Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {8,IR(0, 0),IR(19681, 18)/* Horizontal4Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {1,IR(0, 0),IR(19748, 7)/* Inline */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {2,IR(0, 0),IR(19737, 11)/* DontInline */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {4,IR(0, 0),IR(19755, 5)/* Pure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {8,IR(0, 0),IR(19731, 6)/* Const */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {65536,IR(0, 0),IR(10144, 11)/* OptNoneEXT */,IR(50, 1),IR(170, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {0,IR(0, 0),IR(19834, 5)/* Zext */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {1,IR(0, 0),IR(19824, 5)/* Sext */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {2,IR(0, 0),IR(19760, 6)/* ByVal */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {3,IR(0, 0),IR(19829, 5)/* Sret */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {4,IR(0, 0),IR(19766, 8)/* NoAlias */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {5,IR(0, 0),IR(19774, 10)/* NoCapture */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {6,IR(0, 0),IR(19796, 8)/* NoWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {7,IR(0, 0),IR(19784, 12)/* NoReadWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {5940,IR(0, 0),IR(19804, 20)/* RuntimeAlignedINTEL */,IR(0, 0),IR(171, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {0,IR(0, 0),IR(19957, 7)/* Reduce */,IR(0, 0),IR(172, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {1,IR(0, 0),IR(19869, 14)/* InclusiveScan */,IR(0, 0),IR(172, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {2,IR(0, 0),IR(19855, 14)/* ExclusiveScan */,IR(0, 0),IR(172, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {3,IR(0, 0),IR(19839, 16)/* ClusteredReduce */,IR(0, 0),IR(175, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {6,IR(0, 0),IR(19937, 20)/* PartitionedReduceNV */,IR(0, 0),IR(176, 1),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {7,IR(0, 0),IR(19910, 27)/* PartitionedInclusiveScanNV */,IR(0, 0),IR(176, 1),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {8,IR(0, 0),IR(19883, 27)/* PartitionedExclusiveScanNV */,IR(0, 0),IR(176, 1),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {0,IR(0, 0),IR(19964, 10)/* NoneINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {1,IR(0, 0),IR(19974, 10)/* ReadINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {2,IR(0, 0),IR(19999, 11)/* WriteINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {3,IR(0, 0),IR(19984, 15)/* ReadWriteINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {1,IR(10, 1),IR(20010, 5)/* Bias */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {2,IR(10, 1),IR(20045, 4)/* Lod */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {4,IR(36, 2),IR(20040, 5)/* Grad */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {8,IR(10, 1),IR(20015, 12)/* ConstOffset */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {16,IR(10, 1),IR(16377, 7)/* Offset */,IR(0, 0),IR(177, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {32,IR(10, 1),IR(20027, 13)/* ConstOffsets */,IR(0, 0),IR(177, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {64,IR(10, 1),IR(16813, 7)/* Sample */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {128,IR(10, 1),IR(10100, 7)/* MinLod */,IR(0, 0),IR(178, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {256,IR(4, 1),IR(20049, 19)/* MakeTexelAvailable */,IR(71, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {512,IR(4, 1),IR(20090, 17)/* MakeTexelVisible */,IR(72, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {1024,IR(0, 0),IR(20127, 16)/* NonPrivateTexel */,IR(73, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {2048,IR(0, 0),IR(20193, 14)/* VolatileTexel */,IR(74, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {4096,IR(0, 0),IR(20182, 11)/* SignExtend */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {8192,IR(0, 0),IR(20224, 11)/* ZeroExtend */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {16384,IR(0, 0),IR(20162, 12)/* Nontemporal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {65536,IR(10, 1),IR(20174, 8)/* Offsets */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {0,IR(0, 0),IR(20291, 10)/* SnormInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {1,IR(0, 0),IR(20280, 11)/* SnormInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {2,IR(0, 0),IR(20423, 10)/* UnormInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {3,IR(0, 0),IR(20381, 11)/* UnormInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {4,IR(0, 0),IR(20447, 14)/* UnormShort565 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {5,IR(0, 0),IR(20433, 14)/* UnormShort555 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {6,IR(0, 0),IR(20301, 15)/* UnormInt101010 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {7,IR(0, 0),IR(20269, 11)/* SignedInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {8,IR(0, 0),IR(20245, 12)/* SignedInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {9,IR(0, 0),IR(20257, 12)/* SignedInt32 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {10,IR(0, 0),IR(20546, 13)/* UnsignedInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {11,IR(0, 0),IR(20518, 14)/* UnsignedInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {12,IR(0, 0),IR(20532, 14)/* UnsignedInt32 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {13,IR(0, 0),IR(20235, 10)/* HalfFloat */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {14,IR(0, 0),IR(13634, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {15,IR(0, 0),IR(20392, 11)/* UnormInt24 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {16,IR(0, 0),IR(20316, 17)/* UnormInt101010_2 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {17,IR(0, 0),IR(20333, 16)/* UnormInt10X6EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {19,IR(0, 0),IR(20559, 20)/* UnsignedIntRaw10EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {20,IR(0, 0),IR(20579, 20)/* UnsignedIntRaw12EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {21,IR(0, 0),IR(20403, 20)/* UnormInt2_101010EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {22,IR(0, 0),IR(20461, 19)/* UnsignedInt10X6EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {23,IR(0, 0),IR(20480, 19)/* UnsignedInt12X4EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {24,IR(0, 0),IR(20499, 19)/* UnsignedInt14X2EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {25,IR(0, 0),IR(20349, 16)/* UnormInt12X4EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {26,IR(0, 0),IR(20365, 16)/* UnormInt14X2EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {0,IR(0, 0),IR(20655, 2)/* R */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {1,IR(0, 0),IR(20599, 2)/* A */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {2,IR(0, 0),IR(20660, 3)/* RG */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {3,IR(0, 0),IR(20657, 3)/* RA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {4,IR(0, 0),IR(20663, 4)/* RGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {5,IR(0, 0),IR(20667, 5)/* RGBA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {6,IR(0, 0),IR(20611, 5)/* BGRA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {7,IR(0, 0),IR(20606, 5)/* ARGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {8,IR(0, 0),IR(20635, 10)/* Intensity */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {9,IR(0, 0),IR(20645, 10)/* Luminance */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {10,IR(0, 0),IR(20681, 3)/* Rx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {11,IR(0, 0),IR(20677, 4)/* RGx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {12,IR(0, 0),IR(20672, 5)/* RGBx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {13,IR(0, 0),IR(20616, 6)/* Depth */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {14,IR(0, 0),IR(20622, 13)/* DepthStencil */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {15,IR(0, 0),IR(20690, 5)/* sRGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {16,IR(0, 0),IR(20701, 6)/* sRGBx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {17,IR(0, 0),IR(20695, 6)/* sRGBA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {18,IR(0, 0),IR(20684, 6)/* sBGRA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {19,IR(0, 0),IR(20601, 5)/* ABGR */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {0,IR(0, 0),IR(20707, 27)/* InitOnDeviceReprogramINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {1,IR(0, 0),IR(20734, 23)/* InitOnDeviceResetINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {0,IR(0, 0),IR(20757, 7)/* NoWait */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {1,IR(0, 0),IR(20764, 11)/* WaitKernel */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {2,IR(0, 0),IR(20775, 14)/* WaitWorkGroup */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {1,IR(0, 0),IR(20789, 12)/* CmdExecTime */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {1,IR(0, 0),IR(20801, 13)/* MayUsePrintf */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {0,IR(0, 0),IR(20814, 7)/* Export */,IR(0, 0),IR(112, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {1,IR(0, 0),IR(20821, 7)/* Import */,IR(0, 0),IR(112, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {2,IR(0, 0),IR(20828, 12)/* LinkOnceODR */,IR(0, 0),IR(112, 1),IR(157, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {0,IR(0, 0),IR(20909, 14)/* UncachedINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {1,IR(0, 0),IR(20840, 12)/* CachedINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {2,IR(0, 0),IR(20894, 15)/* StreamingINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {3,IR(0, 0),IR(20869, 25)/* InvalidateAfterReadINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {4,IR(0, 0),IR(20852, 17)/* ConstCachedINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {1,IR(0, 0),IR(21180, 7)/* Unroll */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {2,IR(0, 0),IR(20980, 11)/* DontUnroll */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {4,IR(0, 0),IR(20944, 19)/* DependencyInfinite */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {8,IR(0, 1),IR(20963, 17)/* DependencyLength */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {16,IR(0, 1),IR(21103, 14)/* MinIterations */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {32,IR(0, 1),IR(21063, 14)/* MaxIterations */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {64,IR(0, 1),IR(20991, 18)/* IterationMultiple */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {128,IR(0, 1),IR(21144, 10)/* PeelCount */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {256,IR(0, 1),IR(21131, 13)/* PartialCount */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {65536,IR(0, 1),IR(15706, 24)/* InitiationIntervalINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {131072,IR(0, 1),IR(16091, 20)/* MaxConcurrencyINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {262144,IR(0, 1),IR(20923, 21)/* DependencyArrayINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {524288,IR(0, 1),IR(16624, 20)/* PipelineEnableINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {1048576,IR(0, 1),IR(21009, 18)/* LoopCoalesceINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {2097152,IR(0, 1),IR(21042, 21)/* MaxInterleavingINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {4194304,IR(0, 1),IR(21154, 26)/* SpeculatedIterationsINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {8388608,IR(0, 0),IR(21117, 14)/* NoFusionINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {16777216,IR(0, 1),IR(21027, 15)/* LoopCountINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {33554432,IR(0, 1),IR(21077, 26)/* MaxReinvocationDelayINTEL */,IR(0, 0),IR(180, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {1,IR(0, 0),IR(21286, 29)/* MatrixASignedComponentsINTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {2,IR(0, 0),IR(21431, 29)/* MatrixBSignedComponentsINTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {4,IR(0, 0),IR(21477, 21)/* MatrixCBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {8,IR(0, 0),IR(21498, 26)/* MatrixResultBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {16,IR(0, 0),IR(21263, 23)/* MatrixAPackedInt8INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {32,IR(0, 0),IR(21408, 23)/* MatrixBPackedInt8INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {64,IR(0, 0),IR(21240, 23)/* MatrixAPackedInt4INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {128,IR(0, 0),IR(21385, 23)/* MatrixBPackedInt4INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {256,IR(0, 0),IR(21315, 17)/* MatrixATF32INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {512,IR(0, 0),IR(21460, 17)/* MatrixBTF32INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {1024,IR(0, 0),IR(21214, 26)/* MatrixAPackedFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {2048,IR(0, 0),IR(21359, 26)/* MatrixBPackedFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {4096,IR(0, 0),IR(21187, 27)/* MatrixAPackedBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {8192,IR(0, 0),IR(21332, 27)/* MatrixBPackedBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {1,IR(0, 0),IR(17244, 9)/* Volatile */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {2,IR(0, 1),IR(21544, 8)/* Aligned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {4,IR(0, 0),IR(20162, 12)/* Nontemporal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {8,IR(4, 1),IR(21552, 21)/* MakePointerAvailable */,IR(75, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {16,IR(4, 1),IR(21597, 19)/* MakePointerVisible */,IR(76, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {32,IR(0, 0),IR(21655, 18)/* NonPrivatePointer */,IR(77, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {65536,IR(10, 1),IR(21524, 20)/* AliasScopeINTELMask */,IR(0, 0),IR(127, 1),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {131072,IR(10, 1),IR(21638, 17)/* NoAliasINTELMask */,IR(0, 0),IR(127, 1),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {0,IR(0, 0),IR(21709, 7)/* Simple */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {1,IR(0, 0),IR(21694, 8)/* GLSL450 */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {2,IR(0, 0),IR(21702, 7)/* OpenCL */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {3,IR(0, 0),IR(21716, 7)/* Vulkan */,IR(78, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {0,IR(0, 0),IR(21896, 8)/* Relaxed */,IR(79, 1),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {2,IR(0, 0),IR(21733, 8)/* Acquire */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {4,IR(0, 0),IR(21904, 8)/* Release */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {8,IR(0, 0),IR(21741, 15)/* AcquireRelease */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {16,IR(0, 0),IR(21912, 23)/* SequentiallyConsistent */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {64,IR(0, 0),IR(21950, 14)/* UniformMemory */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {128,IR(0, 0),IR(21935, 15)/* SubgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {256,IR(0, 0),IR(21964, 16)/* WorkgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {512,IR(0, 0),IR(21776, 21)/* CrossWorkgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {1024,IR(0, 0),IR(21756, 20)/* AtomicCounterMemory */,IR(0, 0),IR(80, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {2048,IR(0, 0),IR(21797, 12)/* ImageMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {4096,IR(0, 0),IR(21867, 13)/* OutputMemory */,IR(80, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {8192,IR(0, 0),IR(21809, 14)/* MakeAvailable */,IR(81, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {16384,IR(0, 0),IR(21840, 12)/* MakeVisible */,IR(82, 1),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {32768,IR(0, 0),IR(17244, 9)/* Volatile */,IR(0, 0),IR(179, 1),IR(73, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {0,IR(0, 0),IR(21980, 10)/* AutoINTEL */,IR(0, 0),IR(167, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS
  {0,IR(0, 0),IR(22011, 5)/* WRAP */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {1,IR(0, 0),IR(21990, 4)/* SAT */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {2,IR(0, 0),IR(22002, 9)/* SAT_ZERO */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {3,IR(0, 0),IR(21994, 8)/* SAT_SYM */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {0,IR(0, 0),IR(22016, 25)/* PackedVectorFormat4x8Bit */,IR(83, 1),IR(1, 0),IR(117, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {0,IR(0, 0),IR(22124, 4)/* TRN */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {1,IR(0, 0),IR(22128, 9)/* TRN_ZERO */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {2,IR(0, 0),IR(22069, 4)/* RND */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {3,IR(0, 0),IR(22115, 9)/* RND_ZERO */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {4,IR(0, 0),IR(22095, 8)/* RND_INF */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {5,IR(0, 0),IR(22103, 12)/* RND_MIN_INF */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {6,IR(0, 0),IR(22073, 9)/* RND_CONV */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {7,IR(0, 0),IR(22082, 13)/* RND_CONV_ODD */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {1,IR(0, 0),IR(22137, 25)/* RobustnessPerComponentNV */,IR(0, 0),IR(182, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {2,IR(0, 0),IR(22162, 23)/* RobustnessPerElementNV */,IR(0, 0),IR(182, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {0,IR(0, 0),IR(14581, 8)/* NoneKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {1,IR(0, 0),IR(22312, 10)/* OpaqueKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {2,IR(0, 0),IR(22300, 12)/* NoOpaqueKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {4,IR(0, 0),IR(22400, 23)/* TerminateOnFirstHitKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {8,IR(0, 0),IR(22359, 24)/* SkipClosestHitShaderKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {16,IR(0, 0),IR(22185, 27)/* CullBackFacingTrianglesKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {32,IR(0, 0),IR(22212, 28)/* CullFrontFacingTrianglesKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {64,IR(0, 0),IR(22256, 14)/* CullOpaqueKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {128,IR(0, 0),IR(22240, 16)/* CullNoOpaqueKHR */,IR(0, 0),IR(82, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {256,IR(0, 0),IR(22383, 17)/* SkipTrianglesKHR */,IR(84, 1),IR(183, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {512,IR(0, 0),IR(22322, 13)/* SkipAABBsKHR */,IR(0, 0),IR(183, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {1024,IR(0, 0),IR(22270, 30)/* ForceOpacityMicromap2StateEXT */,IR(0, 0),IR(184, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {0,IR(0, 0),IR(22460, 41)/* RayQueryCandidateIntersectionTriangleKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {1,IR(0, 0),IR(22423, 37)/* RayQueryCandidateIntersectionAABBKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {0,IR(0, 0),IR(22543, 37)/* RayQueryCommittedIntersectionNoneKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {1,IR(0, 0),IR(22580, 41)/* RayQueryCommittedIntersectionTriangleKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {2,IR(0, 0),IR(22501, 42)/* RayQueryCommittedIntersectionGeneratedKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {0,IR(0, 0),IR(22621, 33)/* RayQueryCandidateIntersectionKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {1,IR(0, 0),IR(22654, 33)/* RayQueryCommittedIntersectionKHR */,IR(0, 0),IR(185, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {1,IR(0, 0),IR(22693, 12)/* ClampToEdge */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {2,IR(0, 0),IR(22687, 6)/* Clamp */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {3,IR(0, 0),IR(22705, 7)/* Repeat */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {4,IR(0, 0),IR(22712, 15)/* RepeatMirrored */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {0,IR(0, 0),IR(22734, 8)/* Nearest */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {1,IR(0, 0),IR(22727, 7)/* Linear */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {0,IR(0, 0),IR(23027, 8)/* Unknown */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {1,IR(0, 0),IR(22970, 8)/* Rgba32f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {2,IR(0, 0),IR(22945, 8)/* Rgba16f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {3,IR(0, 0),IR(22784, 5)/* R32f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {4,IR(0, 0),IR(22995, 6)/* Rgba8 */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {5,IR(0, 0),IR(23001, 11)/* Rgba8Snorm */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {6,IR(0, 0),IR(22865, 6)/* Rg32f */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {7,IR(0, 0),IR(22846, 6)/* Rg16f */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {8,IR(0, 0),IR(22742, 13)/* R11fG11fB10f */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {9,IR(0, 0),IR(22768, 5)/* R16f */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {10,IR(0, 0),IR(22926, 7)/* Rgba16 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {11,IR(0, 0),IR(22908, 8)/* Rgb10A2 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {12,IR(0, 0),IR(22831, 5)/* Rg16 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {13,IR(0, 0),IR(22884, 4)/* Rg8 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {14,IR(0, 0),IR(22755, 4)/* R16 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {15,IR(0, 0),IR(22811, 3)/* R8 */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {16,IR(0, 0),IR(22933, 12)/* Rgba16Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {17,IR(0, 0),IR(22836, 10)/* Rg16Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {18,IR(0, 0),IR(22888, 9)/* Rg8Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {19,IR(0, 0),IR(22759, 9)/* R16Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {20,IR(0, 0),IR(22814, 8)/* R8Snorm */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {21,IR(0, 0),IR(22978, 8)/* Rgba32i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {22,IR(0, 0),IR(22953, 8)/* Rgba16i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {23,IR(0, 0),IR(23012, 7)/* Rgba8i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {24,IR(0, 0),IR(22789, 5)/* R32i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {25,IR(0, 0),IR(22871, 6)/* Rg32i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {26,IR(0, 0),IR(22852, 6)/* Rg16i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {27,IR(0, 0),IR(22897, 5)/* Rg8i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {28,IR(0, 0),IR(22773, 5)/* R16i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {29,IR(0, 0),IR(22822, 4)/* R8i */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {30,IR(0, 0),IR(22986, 9)/* Rgba32ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {31,IR(0, 0),IR(22961, 9)/* Rgba16ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {32,IR(0, 0),IR(23019, 8)/* Rgba8ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {33,IR(0, 0),IR(22794, 6)/* R32ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {34,IR(0, 0),IR(22916, 10)/* Rgb10a2ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {35,IR(0, 0),IR(22877, 7)/* Rg32ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {36,IR(0, 0),IR(22858, 7)/* Rg16ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {37,IR(0, 0),IR(22902, 6)/* Rg8ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {38,IR(0, 0),IR(22778, 6)/* R16ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {39,IR(0, 0),IR(22826, 5)/* R8ui */,IR(0, 0),IR(186, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {40,IR(0, 0),IR(22805, 6)/* R64ui */,IR(0, 0),IR(187, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {41,IR(0, 0),IR(22800, 5)/* R64i */,IR(0, 0),IR(187, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {0,IR(0, 0),IR(23035, 12)/* CrossDevice */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {1,IR(0, 0),IR(23047, 7)/* Device */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {2,IR(0, 0),IR(23115, 10)/* Workgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {3,IR(0, 0),IR(23106, 9)/* Subgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {4,IR(0, 0),IR(23054, 11)/* Invocation */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {5,IR(0, 0),IR(23065, 12)/* QueueFamily */,IR(85, 1),IR(179, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {6,IR(0, 0),IR(23092, 14)/* ShaderCallKHR */,IR(0, 0),IR(60, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {1,IR(0, 0),IR(23137, 8)/* Flatten */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {2,IR(0, 0),IR(23125, 12)/* DontFlatten */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {1,IR(0, 0),IR(23145, 29)/* IdentifierPossibleDuplicates */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS
  {0,IR(0, 0),IR(13680, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13618, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13626, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {3,IR(0, 0),IR(13634, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(13640, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(13647, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(13658, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(13667, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(13692, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(13698, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(13708, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(13734, 15)/* ImportedModule */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {1,IR(0, 0),IR(13714, 20)/* ImportedDeclaration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(13885, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(13871, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(13901, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(13843, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(13810, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(13777, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(13749, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(13764, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(13952, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(13934, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(13987, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(13789, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(13914, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(13967, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(13855, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {16384,IR(0, 0),IR(13827, 16)/* FlagIsEnumClass */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {32768,IR(0, 0),IR(14028, 20)/* FlagTypePassByValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {65536,IR(0, 0),IR(14004, 24)/* FlagTypePassByReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {131072,IR(0, 0),IR(23174, 26)/* FlagUnknownPhysicalLayout */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14069, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {1,IR(0, 0),IR(14090, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {2,IR(0, 0),IR(14084, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {3,IR(10, 1),IR(14095, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {4,IR(36, 2),IR(14053, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {5,IR(0, 0),IR(14117, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {6,IR(0, 0),IR(14122, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {7,IR(0, 0),IR(14106, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {8,IR(10, 1),IR(14062, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {9,IR(36, 2),IR(14075, 9)/* Fragment */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {0,IR(0, 0),IR(14140, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14163, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14150, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {3,IR(0, 0),IR(14129, 11)/* AtomicType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(23027, 8)/* Unknown */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {1,IR(0, 0),IR(23215, 5)/* ESSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {2,IR(0, 0),IR(23220, 5)/* GLSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {3,IR(0, 0),IR(23242, 9)/* OpenCL_C */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {4,IR(0, 0),IR(23251, 11)/* OpenCL_CPP */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {5,IR(0, 0),IR(23232, 5)/* HLSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {6,IR(0, 0),IR(23200, 15)/* CPP_for_OpenCL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {7,IR(0, 0),IR(23267, 5)/* SYCL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {8,IR(0, 0),IR(23225, 7)/* HERO_C */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {9,IR(0, 0),IR(23237, 5)/* NZSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {10,IR(0, 0),IR(23278, 5)/* WGSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {11,IR(0, 0),IR(23272, 6)/* Slang */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {12,IR(0, 0),IR(23283, 4)/* Zig */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {13,IR(0, 0),IR(23262, 5)/* Rust */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {0,IR(0, 0),IR(23796, 16)/* UniformConstant */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {1,IR(0, 0),IR(23559, 6)/* Input */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {2,IR(0, 0),IR(17090, 8)/* Uniform */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {3,IR(0, 0),IR(23581, 7)/* Output */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4,IR(0, 0),IR(23115, 10)/* Workgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5,IR(0, 0),IR(23349, 15)/* CrossWorkgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {6,IR(0, 0),IR(23635, 8)/* Private */,IR(0, 0),IR(188, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {7,IR(0, 0),IR(23380, 9)/* Function */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {8,IR(0, 0),IR(23389, 8)/* Generic */,IR(0, 0),IR(190, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {9,IR(0, 0),IR(23643, 13)/* PushConstant */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {10,IR(0, 0),IR(23287, 14)/* AtomicCounter */,IR(0, 0),IR(80, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {11,IR(0, 0),IR(23463, 6)/* Image */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {12,IR(0, 0),IR(23726, 14)/* StorageBuffer */,IR(0, 0),IR(3, 1),IR(158, 2),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4172,IR(0, 0),IR(23783, 13)/* TileImageEXT */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4491,IR(0, 0),IR(23764, 19)/* TileAttachmentQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5068,IR(0, 0),IR(23565, 16)/* NodePayloadAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5328,IR(0, 0),IR(23301, 16)/* CallableDataKHR */,IR(86, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5329,IR(0, 0),IR(23469, 24)/* IncomingCallableDataKHR */,IR(87, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5338,IR(0, 0),IR(23656, 14)/* RayPayloadKHR */,IR(88, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5339,IR(0, 0),IR(23397, 16)/* HitAttributeKHR */,IR(89, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5342,IR(0, 0),IR(23516, 22)/* IncomingRayPayloadKHR */,IR(90, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5343,IR(0, 0),IR(23683, 22)/* ShaderRecordBufferKHR */,IR(91, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5349,IR(0, 0),IR(23588, 22)/* PhysicalStorageBuffer */,IR(92, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5385,IR(0, 0),IR(23428, 21)/* HitObjectAttributeNV */,IR(0, 0),IR(117, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5402,IR(0, 0),IR(23740, 24)/* TaskPayloadWorkgroupEXT */,IR(0, 0),IR(53, 1),IR(23, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5605,IR(0, 0),IR(23332, 17)/* CodeSectionINTEL */,IR(0, 0),IR(191, 1),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5936,IR(0, 0),IR(23364, 16)/* DeviceOnlyINTEL */,IR(0, 0),IR(192, 1),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5937,IR(0, 0),IR(23449, 14)/* HostOnlyINTEL */,IR(0, 0),IR(192, 1),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {0,IR(0, 0),IR(20909, 14)/* UncachedINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {1,IR(0, 0),IR(23827, 18)/* WriteThroughINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {2,IR(0, 0),IR(23812, 15)/* WriteBackINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {3,IR(0, 0),IR(20894, 15)/* StreamingINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {0,IR(0, 0),IR(14048, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {1,IR(10, 1),IR(23856, 11)/* TensorView */,IR(0, 0),IR(193, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {2,IR(10, 1),IR(23845, 11)/* DecodeFunc */,IR(0, 0),IR(194, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {0,IR(0, 0),IR(23867, 10)/* Undefined */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {1,IR(0, 0),IR(15181, 9)/* Constant */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {2,IR(0, 0),IR(22693, 12)/* ClampToEdge */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {3,IR(0, 0),IR(22705, 7)/* Repeat */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {4,IR(0, 0),IR(22712, 15)/* RepeatMirrored */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
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

// Opcode strings (without the 'Op' prefix) and opcode values, ordered by name.
// The fields in order are:
//   name, either the primary name or an alias, indexing into kStrings
//   opcode value
static const std::array<NameValue, 805> kInstructionNames{{
  {IR(24541, 13), 5587}, // 0 AbsISubINTEL
  {IR(24554, 13), 5588}, // 1 AbsUSubINTEL
  {IR(24567, 12), 65}, // 2 AccessChain
  {IR(24579, 21), 5911}, // 3 AliasDomainDeclINTEL
  {IR(24600, 20), 5912}, // 4 AliasScopeDeclINTEL
  {IR(24620, 24), 5913}, // 5 AliasScopeListDeclINTEL
  {IR(24644, 4), 155}, // 6 All
  {IR(24648, 25), 5074}, // 7 AllocateNodePayloadsAMDX
  {IR(24673, 4), 154}, // 8 Any
  {IR(24677, 24), 5875}, // 9 ArbitraryFloatACosINTEL
  {IR(24701, 26), 5876}, // 10 ArbitraryFloatACosPiINTEL
  {IR(24727, 24), 5873}, // 11 ArbitraryFloatASinINTEL
  {IR(24751, 26), 5874}, // 12 ArbitraryFloatASinPiINTEL
  {IR(24777, 25), 5879}, // 13 ArbitraryFloatATan2INTEL
  {IR(24802, 24), 5877}, // 14 ArbitraryFloatATanINTEL
  {IR(24826, 26), 5878}, // 15 ArbitraryFloatATanPiINTEL
  {IR(24852, 23), 5846}, // 16 ArbitraryFloatAddINTEL
  {IR(24875, 31), 5842}, // 17 ArbitraryFloatCastFromIntINTEL
  {IR(24906, 24), 5841}, // 18 ArbitraryFloatCastINTEL
  {IR(24930, 29), 5843}, // 19 ArbitraryFloatCastToIntINTEL
  {IR(24959, 24), 5857}, // 20 ArbitraryFloatCbrtINTEL
  {IR(24983, 23), 5869}, // 21 ArbitraryFloatCosINTEL
  {IR(25006, 25), 5872}, // 22 ArbitraryFloatCosPiINTEL
  {IR(25031, 23), 5849}, // 23 ArbitraryFloatDivINTEL
  {IR(25054, 22), 5854}, // 24 ArbitraryFloatEQINTEL
  {IR(25076, 25), 5866}, // 25 ArbitraryFloatExp10INTEL
  {IR(25101, 24), 5865}, // 26 ArbitraryFloatExp2INTEL
  {IR(25125, 23), 5864}, // 27 ArbitraryFloatExpINTEL
  {IR(25148, 25), 5867}, // 28 ArbitraryFloatExpm1INTEL
  {IR(25173, 22), 5851}, // 29 ArbitraryFloatGEINTEL
  {IR(25195, 22), 5850}, // 30 ArbitraryFloatGTINTEL
  {IR(25217, 25), 5858}, // 31 ArbitraryFloatHypotINTEL
  {IR(25242, 22), 5853}, // 32 ArbitraryFloatLEINTEL
  {IR(25264, 22), 5852}, // 33 ArbitraryFloatLTINTEL
  {IR(25286, 25), 5862}, // 34 ArbitraryFloatLog10INTEL
  {IR(25311, 25), 5863}, // 35 ArbitraryFloatLog1pINTEL
  {IR(25336, 24), 5861}, // 36 ArbitraryFloatLog2INTEL
  {IR(25360, 23), 5860}, // 37 ArbitraryFloatLogINTEL
  {IR(25383, 23), 5848}, // 38 ArbitraryFloatMulINTEL
  {IR(25406, 23), 5880}, // 39 ArbitraryFloatPowINTEL
  {IR(25429, 24), 5882}, // 40 ArbitraryFloatPowNINTEL
  {IR(25453, 24), 5881}, // 41 ArbitraryFloatPowRINTEL
  {IR(25477, 25), 5856}, // 42 ArbitraryFloatRSqrtINTEL
  {IR(25502, 25), 5855}, // 43 ArbitraryFloatRecipINTEL
  {IR(25527, 26), 5870}, // 44 ArbitraryFloatSinCosINTEL
  {IR(25553, 28), 5840}, // 45 ArbitraryFloatSinCosPiINTEL
  {IR(25581, 23), 5868}, // 46 ArbitraryFloatSinINTEL
  {IR(25604, 25), 5871}, // 47 ArbitraryFloatSinPiINTEL
  {IR(25629, 24), 5859}, // 48 ArbitraryFloatSqrtINTEL
  {IR(25653, 23), 5847}, // 49 ArbitraryFloatSubINTEL
  {IR(7118, 19), 6145}, // 50 ArithmeticFenceEXT
  {IR(25676, 12), 68}, // 51 ArrayLength
  {IR(25688, 13), 5611}, // 52 AsmCallINTEL
  {IR(7137, 9), 5610}, // 53 AsmINTEL
  {IR(25701, 15), 5609}, // 54 AsmTargetINTEL
  {IR(25716, 14), 5630}, // 55 AssumeTrueKHR
  {IR(25730, 10), 240}, // 56 AtomicAnd
  {IR(25740, 22), 230}, // 57 AtomicCompareExchange
  {IR(25762, 26), 231}, // 58 AtomicCompareExchangeWeak
  {IR(25788, 15), 229}, // 59 AtomicExchange
  {IR(25803, 14), 6035}, // 60 AtomicFAddEXT
  {IR(25817, 14), 5615}, // 61 AtomicFMaxEXT
  {IR(25831, 14), 5614}, // 62 AtomicFMinEXT
  {IR(25845, 16), 319}, // 63 AtomicFlagClear
  {IR(25861, 21), 318}, // 64 AtomicFlagTestAndSet
  {IR(25882, 11), 234}, // 65 AtomicIAdd
  {IR(25893, 17), 233}, // 66 AtomicIDecrement
  {IR(25910, 17), 232}, // 67 AtomicIIncrement
  {IR(25927, 11), 235}, // 68 AtomicISub
  {IR(25938, 11), 227}, // 69 AtomicLoad
  {IR(25949, 9), 241}, // 70 AtomicOr
  {IR(25958, 11), 238}, // 71 AtomicSMax
  {IR(25969, 11), 236}, // 72 AtomicSMin
  {IR(25980, 12), 228}, // 73 AtomicStore
  {IR(25992, 11), 239}, // 74 AtomicUMax
  {IR(26003, 11), 237}, // 75 AtomicUMin
  {IR(26014, 10), 242}, // 76 AtomicXor
  {IR(26024, 28), 5364}, // 77 BeginInvocationInterlockEXT
  {IR(26052, 9), 205}, // 78 BitCount
  {IR(26061, 15), 201}, // 79 BitFieldInsert
  {IR(26076, 17), 202}, // 80 BitFieldSExtract
  {IR(26093, 17), 203}, // 81 BitFieldUExtract
  {IR(26110, 11), 204}, // 82 BitReverse
  {IR(26121, 8), 124}, // 83 Bitcast
  {IR(26129, 11), 199}, // 84 BitwiseAnd
  {IR(26140, 21), 6242}, // 85 BitwiseFunctionINTEL
  {IR(26161, 10), 197}, // 86 BitwiseOr
  {IR(26171, 11), 198}, // 87 BitwiseXor
  {IR(26182, 7), 249}, // 88 Branch
  {IR(26189, 18), 250}, // 89 BranchConditional
  {IR(26207, 13), 304}, // 90 BuildNDRange
  {IR(26220, 11), 17}, // 91 Capability
  {IR(26231, 26), 302}, // 92 CaptureEventProfilingInfo
  {IR(26257, 23), 4160}, // 93 ColorAttachmentReadEXT
  {IR(26280, 15), 280}, // 94 CommitReadPipe
  {IR(26295, 16), 281}, // 95 CommitWritePipe
  {IR(26311, 19), 80}, // 96 CompositeConstruct
  {IR(26330, 33), 6096}, // 97 CompositeConstructContinuedINTEL
  {IR(26363, 31), 4463}, // 98 CompositeConstructReplicateEXT
  {IR(26394, 17), 81}, // 99 CompositeExtract
  {IR(26411, 16), 82}, // 100 CompositeInsert
  {IR(15181, 9), 43}, // 101 Constant
  {IR(26427, 18), 44}, // 102 ConstantComposite
  {IR(26445, 32), 6091}, // 103 ConstantCompositeContinuedINTEL
  {IR(26477, 30), 4461}, // 104 ConstantCompositeReplicateEXT
  {IR(26507, 14), 42}, // 105 ConstantFalse
  {IR(26521, 29), 5600}, // 106 ConstantFunctionPointerINTEL
  {IR(26550, 13), 46}, // 107 ConstantNull
  {IR(26563, 20), 323}, // 108 ConstantPipeStorage
  {IR(26583, 16), 45}, // 109 ConstantSampler
  {IR(26599, 19), 5103}, // 110 ConstantStringAMDX
  {IR(26618, 13), 41}, // 111 ConstantTrue
  {IR(26631, 15), 224}, // 112 ControlBarrier
  {IR(26646, 26), 6142}, // 113 ControlBarrierArriveINTEL
  {IR(26672, 24), 6143}, // 114 ControlBarrierWaitINTEL
  {IR(26696, 20), 6117}, // 115 ConvertBF16ToFINTEL
  {IR(26716, 20), 6116}, // 116 ConvertFToBF16INTEL
  {IR(26736, 12), 110}, // 117 ConvertFToS
  {IR(26748, 12), 109}, // 118 ConvertFToU
  {IR(26760, 18), 5393}, // 119 ConvertImageToUNV
  {IR(26778, 14), 117}, // 120 ConvertPtrToU
  {IR(26792, 12), 111}, // 121 ConvertSToF
  {IR(26804, 25), 5396}, // 122 ConvertSampledImageToUNV
  {IR(26829, 20), 5394}, // 123 ConvertSamplerToUNV
  {IR(26849, 35), 4447}, // 124 ConvertUToAccelerationStructureKHR
  {IR(26884, 12), 112}, // 125 ConvertUToF
  {IR(26896, 18), 5391}, // 126 ConvertUToImageNV
  {IR(26914, 14), 120}, // 127 ConvertUToPtr
  {IR(26928, 25), 5395}, // 128 ConvertUToSampledImageNV
  {IR(26953, 20), 5392}, // 129 ConvertUToSamplerNV
  {IR(26973, 27), 5293}, // 130 CooperativeMatrixConvertNV
  {IR(27000, 27), 4460}, // 131 CooperativeMatrixLengthKHR
  {IR(27027, 26), 5362}, // 132 CooperativeMatrixLengthNV
  {IR(27053, 25), 4457}, // 133 CooperativeMatrixLoadKHR
  {IR(27078, 24), 5359}, // 134 CooperativeMatrixLoadNV
  {IR(27102, 30), 5367}, // 135 CooperativeMatrixLoadTensorNV
  {IR(27132, 27), 4459}, // 136 CooperativeMatrixMulAddKHR
  {IR(27159, 26), 5361}, // 137 CooperativeMatrixMulAddNV
  {IR(27185, 32), 5369}, // 138 CooperativeMatrixPerElementOpNV
  {IR(27217, 26), 5366}, // 139 CooperativeMatrixReduceNV
  {IR(27243, 26), 4458}, // 140 CooperativeMatrixStoreKHR
  {IR(27269, 25), 5360}, // 141 CooperativeMatrixStoreNV
  {IR(27294, 31), 5368}, // 142 CooperativeMatrixStoreTensorNV
  {IR(27325, 29), 5390}, // 143 CooperativeMatrixTransposeNV
  {IR(27354, 24), 5302}, // 144 CooperativeVectorLoadNV
  {IR(27378, 32), 5292}, // 145 CooperativeVectorMatrixMulAddNV
  {IR(27410, 29), 5289}, // 146 CooperativeVectorMatrixMulNV
  {IR(27439, 42), 5290}, // 147 CooperativeVectorOuterProductAccumulateNV
  {IR(27481, 39), 5291}, // 148 CooperativeVectorReduceSumAccumulateNV
  {IR(27520, 25), 5303}, // 149 CooperativeVectorStoreNV
  {IR(27545, 12), 400}, // 150 CopyLogical
  {IR(27557, 11), 63}, // 151 CopyMemory
  {IR(27568, 16), 64}, // 152 CopyMemorySized
  {IR(27584, 11), 83}, // 153 CopyObject
  {IR(27595, 26), 324}, // 154 CreatePipeFromPipeStorage
  {IR(27621, 21), 5372}, // 155 CreateTensorLayoutNV
  {IR(27642, 19), 5377}, // 156 CreateTensorViewNV
  {IR(27661, 16), 299}, // 157 CreateUserEvent
  {IR(27677, 29), 5938}, // 158 CrossWorkgroupCastToPtrINTEL
  {IR(27706, 5), 207}, // 159 DPdx
  {IR(27711, 11), 213}, // 160 DPdxCoarse
  {IR(27722, 9), 210}, // 161 DPdxFine
  {IR(27731, 5), 208}, // 162 DPdy
  {IR(27736, 11), 214}, // 163 DPdyCoarse
  {IR(27747, 9), 211}, // 164 DPdyFine
  {IR(27756, 9), 71}, // 165 Decorate
  {IR(27765, 11), 332}, // 166 DecorateId
  {IR(27776, 15), 5632}, // 167 DecorateString
  {IR(27791, 21), 5632}, // 168 DecorateStringGOOGLE
  {IR(27812, 16), 73}, // 169 DecorationGroup
  {IR(7936, 25), 5380}, // 170 DemoteToHelperInvocation
  {IR(7961, 28), 5380}, // 171 DemoteToHelperInvocationEXT
  {IR(27828, 23), 4161}, // 172 DepthAttachmentReadEXT
  {IR(27851, 4), 148}, // 173 Dot
  {IR(27855, 17), 5294}, // 174 EmitMeshTasksEXT
  {IR(27872, 17), 220}, // 175 EmitStreamVertex
  {IR(27889, 11), 218}, // 176 EmitVertex
  {IR(27900, 26), 5365}, // 177 EndInvocationInterlockEXT
  {IR(27926, 13), 219}, // 178 EndPrimitive
  {IR(27939, 19), 221}, // 179 EndStreamPrimitive
  {IR(27958, 14), 292}, // 180 EnqueueKernel
  {IR(27972, 14), 291}, // 181 EnqueueMarker
  {IR(27986, 24), 5075}, // 182 EnqueueNodePayloadsAMDX
  {IR(28010, 11), 15}, // 183 EntryPoint
  {IR(28021, 19), 4446}, // 184 ExecuteCallableKHR
  {IR(28040, 18), 5344}, // 185 ExecuteCallableNV
  {IR(28058, 14), 16}, // 186 ExecutionMode
  {IR(28072, 16), 331}, // 187 ExecutionModeId
  {IR(28088, 10), 5631}, // 188 ExpectKHR
  {IR(28098, 8), 12}, // 189 ExtInst
  {IR(28106, 14), 11}, // 190 ExtInstImport
  {IR(28120, 26), 4433}, // 191 ExtInstWithForwardRefsKHR
  {IR(28146, 10), 10}, // 192 Extension
  {IR(28156, 5), 129}, // 193 FAdd
  {IR(28161, 9), 115}, // 194 FConvert
  {IR(28170, 5), 136}, // 195 FDiv
  {IR(28175, 5), 141}, // 196 FMod
  {IR(28180, 5), 133}, // 197 FMul
  {IR(28185, 8), 127}, // 198 FNegate
  {IR(28193, 10), 180}, // 199 FOrdEqual
  {IR(28203, 16), 186}, // 200 FOrdGreaterThan
  {IR(28219, 21), 190}, // 201 FOrdGreaterThanEqual
  {IR(28240, 13), 184}, // 202 FOrdLessThan
  {IR(28253, 18), 188}, // 203 FOrdLessThanEqual
  {IR(28271, 13), 182}, // 204 FOrdNotEqual
  {IR(8630, 13), 5949}, // 205 FPGARegINTEL
  {IR(28284, 5), 140}, // 206 FRem
  {IR(28289, 5), 131}, // 207 FSub
  {IR(28294, 12), 181}, // 208 FUnordEqual
  {IR(28306, 18), 187}, // 209 FUnordGreaterThan
  {IR(28324, 23), 191}, // 210 FUnordGreaterThanEqual
  {IR(28347, 15), 185}, // 211 FUnordLessThan
  {IR(28362, 20), 189}, // 212 FUnordLessThanEqual
  {IR(28382, 15), 183}, // 213 FUnordNotEqual
  {IR(28397, 38), 5301}, // 214 FetchMicroTriangleVertexBarycentricNV
  {IR(28435, 35), 5300}, // 215 FetchMicroTriangleVertexPositionNV
  {IR(28470, 29), 5078}, // 216 FinishWritingNodePayloadAMDX
  {IR(28499, 14), 5927}, // 217 FixedCosINTEL
  {IR(28513, 16), 5930}, // 218 FixedCosPiINTEL
  {IR(28529, 14), 5933}, // 219 FixedExpINTEL
  {IR(28543, 14), 5932}, // 220 FixedLogINTEL
  {IR(28557, 16), 5924}, // 221 FixedRecipINTEL
  {IR(28573, 16), 5925}, // 222 FixedRsqrtINTEL
  {IR(28589, 17), 5928}, // 223 FixedSinCosINTEL
  {IR(28606, 19), 5931}, // 224 FixedSinCosPiINTEL
  {IR(28625, 14), 5926}, // 225 FixedSinINTEL
  {IR(28639, 16), 5929}, // 226 FixedSinPiINTEL
  {IR(28655, 15), 5923}, // 227 FixedSqrtINTEL
  {IR(28670, 17), 5012}, // 228 FragmentFetchAMD
  {IR(28687, 21), 5011}, // 229 FragmentMaskFetchAMD
  {IR(23380, 9), 54}, // 230 Function
  {IR(28708, 13), 57}, // 231 FunctionCall
  {IR(28721, 12), 56}, // 232 FunctionEnd
  {IR(28733, 18), 55}, // 233 FunctionParameter
  {IR(28751, 25), 5601}, // 234 FunctionPointerCallINTEL
  {IR(28776, 7), 209}, // 235 Fwidth
  {IR(28783, 13), 215}, // 236 FwidthCoarse
  {IR(28796, 11), 212}, // 237 FwidthFine
  {IR(28807, 17), 122}, // 238 GenericCastToPtr
  {IR(28824, 25), 123}, // 239 GenericCastToPtrExplicit
  {IR(28849, 23), 69}, // 240 GenericPtrMemSemantics
  {IR(28872, 16), 303}, // 241 GetDefaultQueue
  {IR(28888, 35), 325}, // 242 GetKernelLocalSizeForSubgroupCount
  {IR(28923, 25), 326}, // 243 GetKernelMaxNumSubgroups
  {IR(28948, 32), 294}, // 244 GetKernelNDrangeMaxSubGroupSize
  {IR(28980, 30), 293}, // 245 GetKernelNDrangeSubGroupCount
  {IR(29010, 40), 296}, // 246 GetKernelPreferredWorkGroupSizeMultiple
  {IR(29050, 23), 295}, // 247 GetKernelWorkGroupSize
  {IR(29073, 18), 284}, // 248 GetMaxPipePackets
  {IR(29091, 18), 283}, // 249 GetNumPipePackets
  {IR(29109, 9), 261}, // 250 GroupAll
  {IR(29118, 9), 262}, // 251 GroupAny
  {IR(29127, 15), 259}, // 252 GroupAsyncCopy
  {IR(29142, 19), 6403}, // 253 GroupBitwiseAndKHR
  {IR(29161, 18), 6404}, // 254 GroupBitwiseOrKHR
  {IR(29179, 19), 6405}, // 255 GroupBitwiseXorKHR
  {IR(29198, 15), 263}, // 256 GroupBroadcast
  {IR(29213, 20), 287}, // 257 GroupCommitReadPipe
  {IR(29233, 21), 288}, // 258 GroupCommitWritePipe
  {IR(29254, 14), 74}, // 259 GroupDecorate
  {IR(29268, 10), 265}, // 260 GroupFAdd
  {IR(29278, 23), 5001}, // 261 GroupFAddNonUniformAMD
  {IR(29301, 10), 269}, // 262 GroupFMax
  {IR(29311, 23), 5005}, // 263 GroupFMaxNonUniformAMD
  {IR(29334, 10), 266}, // 264 GroupFMin
  {IR(29344, 23), 5002}, // 265 GroupFMinNonUniformAMD
  {IR(29367, 13), 6402}, // 266 GroupFMulKHR
  {IR(29380, 10), 264}, // 267 GroupIAdd
  {IR(29390, 23), 5000}, // 268 GroupIAddNonUniformAMD
  {IR(29413, 13), 6401}, // 269 GroupIMulKHR
  {IR(29426, 19), 6406}, // 270 GroupLogicalAndKHR
  {IR(29445, 18), 6407}, // 271 GroupLogicalOrKHR
  {IR(29463, 19), 6408}, // 272 GroupLogicalXorKHR
  {IR(29482, 20), 75}, // 273 GroupMemberDecorate
  {IR(29502, 19), 334}, // 274 GroupNonUniformAll
  {IR(29521, 24), 336}, // 275 GroupNonUniformAllEqual
  {IR(29545, 19), 335}, // 276 GroupNonUniformAny
  {IR(9214, 22), 339}, // 277 GroupNonUniformBallot
  {IR(29564, 30), 342}, // 278 GroupNonUniformBallotBitCount
  {IR(29594, 32), 341}, // 279 GroupNonUniformBallotBitExtract
  {IR(29626, 29), 343}, // 280 GroupNonUniformBallotFindLSB
  {IR(29655, 29), 344}, // 281 GroupNonUniformBallotFindMSB
  {IR(29684, 26), 359}, // 282 GroupNonUniformBitwiseAnd
  {IR(29710, 25), 360}, // 283 GroupNonUniformBitwiseOr
  {IR(29735, 26), 361}, // 284 GroupNonUniformBitwiseXor
  {IR(29761, 25), 337}, // 285 GroupNonUniformBroadcast
  {IR(29786, 30), 338}, // 286 GroupNonUniformBroadcastFirst
  {IR(29816, 21), 333}, // 287 GroupNonUniformElect
  {IR(29837, 20), 350}, // 288 GroupNonUniformFAdd
  {IR(29857, 20), 358}, // 289 GroupNonUniformFMax
  {IR(29877, 20), 355}, // 290 GroupNonUniformFMin
  {IR(29897, 20), 352}, // 291 GroupNonUniformFMul
  {IR(29917, 20), 349}, // 292 GroupNonUniformIAdd
  {IR(29937, 20), 351}, // 293 GroupNonUniformIMul
  {IR(29957, 29), 340}, // 294 GroupNonUniformInverseBallot
  {IR(29986, 26), 362}, // 295 GroupNonUniformLogicalAnd
  {IR(30012, 25), 363}, // 296 GroupNonUniformLogicalOr
  {IR(30037, 26), 364}, // 297 GroupNonUniformLogicalXor
  {IR(30063, 27), 5296}, // 298 GroupNonUniformPartitionNV
  {IR(30090, 26), 5110}, // 299 GroupNonUniformQuadAllKHR
  {IR(30116, 26), 5111}, // 300 GroupNonUniformQuadAnyKHR
  {IR(30142, 29), 365}, // 301 GroupNonUniformQuadBroadcast
  {IR(30171, 24), 366}, // 302 GroupNonUniformQuadSwap
  {IR(9310, 25), 4431}, // 303 GroupNonUniformRotateKHR
  {IR(30195, 20), 356}, // 304 GroupNonUniformSMax
  {IR(30215, 20), 353}, // 305 GroupNonUniformSMin
  {IR(9335, 23), 345}, // 306 GroupNonUniformShuffle
  {IR(30235, 27), 348}, // 307 GroupNonUniformShuffleDown
  {IR(30262, 25), 347}, // 308 GroupNonUniformShuffleUp
  {IR(30287, 26), 346}, // 309 GroupNonUniformShuffleXor
  {IR(30313, 20), 357}, // 310 GroupNonUniformUMax
  {IR(30333, 20), 354}, // 311 GroupNonUniformUMin
  {IR(30353, 28), 285}, // 312 GroupReserveReadPipePackets
  {IR(30381, 29), 286}, // 313 GroupReserveWritePipePackets
  {IR(30410, 10), 271}, // 314 GroupSMax
  {IR(30420, 23), 5007}, // 315 GroupSMaxNonUniformAMD
  {IR(30443, 10), 268}, // 316 GroupSMin
  {IR(30453, 23), 5004}, // 317 GroupSMinNonUniformAMD
  {IR(30476, 10), 270}, // 318 GroupUMax
  {IR(30486, 23), 5006}, // 319 GroupUMaxNonUniformAMD
  {IR(30509, 10), 267}, // 320 GroupUMin
  {IR(30519, 23), 5003}, // 321 GroupUMinNonUniformAMD
  {IR(30542, 16), 260}, // 322 GroupWaitEvents
  {IR(30558, 25), 5264}, // 323 HitObjectExecuteShaderNV
  {IR(30583, 25), 5266}, // 324 HitObjectGetAttributesNV
  {IR(30608, 24), 5346}, // 325 HitObjectGetClusterIdNV
  {IR(30632, 26), 5265}, // 326 HitObjectGetCurrentTimeNV
  {IR(30658, 28), 5269}, // 327 HitObjectGetGeometryIndexNV
  {IR(30686, 22), 5267}, // 328 HitObjectGetHitKindNV
  {IR(30708, 34), 5271}, // 329 HitObjectGetInstanceCustomIndexNV
  {IR(30742, 25), 5270}, // 330 HitObjectGetInstanceIdNV
  {IR(30767, 27), 5434}, // 331 HitObjectGetLSSPositionsNV
  {IR(30794, 23), 5435}, // 332 HitObjectGetLSSRadiiNV
  {IR(30817, 33), 5254}, // 333 HitObjectGetObjectRayDirectionNV
  {IR(30850, 30), 5255}, // 334 HitObjectGetObjectRayOriginNV
  {IR(30880, 28), 5253}, // 335 HitObjectGetObjectToWorldNV
  {IR(30908, 29), 5268}, // 336 HitObjectGetPrimitiveIndexNV
  {IR(30937, 22), 5274}, // 337 HitObjectGetRayTMaxNV
  {IR(30959, 22), 5275}, // 338 HitObjectGetRayTMinNV
  {IR(30981, 44), 5258}, // 339 HitObjectGetShaderBindingTableRecordIndexNV
  {IR(31025, 39), 5257}, // 340 HitObjectGetShaderRecordBufferHandleNV
  {IR(31064, 29), 5432}, // 341 HitObjectGetSpherePositionNV
  {IR(31093, 27), 5433}, // 342 HitObjectGetSphereRadiusNV
  {IR(31120, 32), 5272}, // 343 HitObjectGetWorldRayDirectionNV
  {IR(31152, 29), 5273}, // 344 HitObjectGetWorldRayOriginNV
  {IR(31181, 28), 5252}, // 345 HitObjectGetWorldToObjectNV
  {IR(31209, 19), 5276}, // 346 HitObjectIsEmptyNV
  {IR(31228, 17), 5277}, // 347 HitObjectIsHitNV
  {IR(31245, 20), 5437}, // 348 HitObjectIsLSSHitNV
  {IR(31265, 18), 5278}, // 349 HitObjectIsMissNV
  {IR(31283, 23), 5436}, // 350 HitObjectIsSphereHitNV
  {IR(31306, 23), 5259}, // 351 HitObjectRecordEmptyNV
  {IR(31329, 27), 5249}, // 352 HitObjectRecordHitMotionNV
  {IR(31356, 21), 5261}, // 353 HitObjectRecordHitNV
  {IR(31377, 36), 5250}, // 354 HitObjectRecordHitWithIndexMotionNV
  {IR(31413, 30), 5262}, // 355 HitObjectRecordHitWithIndexNV
  {IR(31443, 28), 5251}, // 356 HitObjectRecordMissMotionNV
  {IR(31471, 22), 5263}, // 357 HitObjectRecordMissNV
  {IR(31493, 26), 5256}, // 358 HitObjectTraceRayMotionNV
  {IR(31519, 20), 5260}, // 359 HitObjectTraceRayNV
  {IR(31539, 5), 128}, // 360 IAdd
  {IR(31544, 10), 149}, // 361 IAddCarry
  {IR(31554, 13), 5589}, // 362 IAddSatINTEL
  {IR(31567, 14), 5591}, // 363 IAverageINTEL
  {IR(31581, 21), 5593}, // 364 IAverageRoundedINTEL
  {IR(31602, 7), 170}, // 365 IEqual
  {IR(31609, 5), 132}, // 366 IMul
  {IR(31614, 15), 5597}, // 367 IMul32x16INTEL
  {IR(31629, 10), 171}, // 368 INotEqual
  {IR(31639, 5), 130}, // 369 ISub
  {IR(31644, 11), 150}, // 370 ISubBorrow
  {IR(31655, 13), 5595}, // 371 ISubSatINTEL
  {IR(31668, 22), 4448}, // 372 IgnoreIntersectionKHR
  {IR(31690, 21), 5335}, // 373 IgnoreIntersectionNV
  {IR(23463, 6), 100}, // 374 Image
  {IR(31711, 29), 4503}, // 375 ImageBlockMatchGatherSADQCOM
  {IR(31740, 29), 4502}, // 376 ImageBlockMatchGatherSSDQCOM
  {IR(31769, 23), 4483}, // 377 ImageBlockMatchSADQCOM
  {IR(31792, 23), 4482}, // 378 ImageBlockMatchSSDQCOM
  {IR(31815, 29), 4501}, // 379 ImageBlockMatchWindowSADQCOM
  {IR(31844, 29), 4500}, // 380 ImageBlockMatchWindowSSDQCOM
  {IR(31873, 19), 4481}, // 381 ImageBoxFilterQCOM
  {IR(31892, 16), 97}, // 382 ImageDrefGather
  {IR(31908, 11), 95}, // 383 ImageFetch
  {IR(31919, 12), 96}, // 384 ImageGather
  {IR(31931, 17), 101}, // 385 ImageQueryFormat
  {IR(31948, 17), 106}, // 386 ImageQueryLevels
  {IR(31965, 14), 105}, // 387 ImageQueryLod
  {IR(31979, 16), 102}, // 388 ImageQueryOrder
  {IR(31995, 18), 107}, // 389 ImageQuerySamples
  {IR(32013, 15), 104}, // 390 ImageQuerySize
  {IR(32028, 18), 103}, // 391 ImageQuerySizeLod
  {IR(32046, 10), 98}, // 392 ImageRead
  {IR(32056, 27), 90}, // 393 ImageSampleDrefExplicitLod
  {IR(32083, 27), 89}, // 394 ImageSampleDrefImplicitLod
  {IR(32110, 23), 88}, // 395 ImageSampleExplicitLod
  {IR(32133, 23), 5283}, // 396 ImageSampleFootprintNV
  {IR(32156, 23), 87}, // 397 ImageSampleImplicitLod
  {IR(32179, 31), 94}, // 398 ImageSampleProjDrefExplicitLod
  {IR(32210, 31), 93}, // 399 ImageSampleProjDrefImplicitLod
  {IR(32241, 27), 92}, // 400 ImageSampleProjExplicitLod
  {IR(32268, 27), 91}, // 401 ImageSampleProjImplicitLod
  {IR(32295, 24), 4480}, // 402 ImageSampleWeightedQCOM
  {IR(32319, 22), 315}, // 403 ImageSparseDrefGather
  {IR(32341, 17), 313}, // 404 ImageSparseFetch
  {IR(32358, 18), 314}, // 405 ImageSparseGather
  {IR(32376, 16), 320}, // 406 ImageSparseRead
  {IR(32392, 33), 308}, // 407 ImageSparseSampleDrefExplicitLod
  {IR(32425, 33), 307}, // 408 ImageSparseSampleDrefImplicitLod
  {IR(32458, 29), 306}, // 409 ImageSparseSampleExplicitLod
  {IR(32487, 29), 305}, // 410 ImageSparseSampleImplicitLod
  {IR(32516, 37), 312}, // 411 ImageSparseSampleProjDrefExplicitLod
  {IR(32553, 37), 311}, // 412 ImageSparseSampleProjDrefImplicitLod
  {IR(32590, 33), 310}, // 413 ImageSparseSampleProjExplicitLod
  {IR(32623, 33), 309}, // 414 ImageSparseSampleProjImplicitLod
  {IR(32656, 26), 316}, // 415 ImageSparseTexelsResident
  {IR(32682, 18), 60}, // 416 ImageTexelPointer
  {IR(32700, 11), 99}, // 417 ImageWrite
  {IR(32711, 20), 66}, // 418 InBoundsAccessChain
  {IR(32731, 23), 70}, // 419 InBoundsPtrAccessChain
  {IR(32754, 9), 158}, // 420 IsFinite
  {IR(32763, 22), 5381}, // 421 IsHelperInvocationEXT
  {IR(32785, 6), 157}, // 422 IsInf
  {IR(32791, 6), 156}, // 423 IsNan
  {IR(32797, 23), 5101}, // 424 IsNodePayloadValidAMDX
  {IR(32820, 9), 159}, // 425 IsNormal
  {IR(32829, 13), 300}, // 426 IsValidEvent
  {IR(32842, 17), 282}, // 427 IsValidReserveId
  {IR(32859, 5), 252}, // 428 Kill
  {IR(32864, 6), 248}, // 429 Label
  {IR(32870, 14), 161}, // 430 LessOrGreater
  {IR(32884, 14), 256}, // 431 LifetimeStart
  {IR(32898, 13), 257}, // 432 LifetimeStop
  {IR(32911, 5), 8}, // 433 Line
  {IR(32916, 5), 61}, // 434 Load
  {IR(32921, 11), 167}, // 435 LogicalAnd
  {IR(32932, 13), 164}, // 436 LogicalEqual
  {IR(32945, 11), 168}, // 437 LogicalNot
  {IR(32956, 16), 165}, // 438 LogicalNotEqual
  {IR(32972, 10), 166}, // 439 LogicalOr
  {IR(32982, 17), 5887}, // 440 LoopControlINTEL
  {IR(32999, 10), 246}, // 441 LoopMerge
  {IR(33009, 18), 6428}, // 442 MaskedGatherINTEL
  {IR(33027, 19), 6429}, // 443 MaskedScatterINTEL
  {IR(33046, 18), 146}, // 444 MatrixTimesMatrix
  {IR(33064, 18), 143}, // 445 MatrixTimesScalar
  {IR(33082, 18), 145}, // 446 MatrixTimesVector
  {IR(33100, 15), 72}, // 447 MemberDecorate
  {IR(33115, 21), 5633}, // 448 MemberDecorateString
  {IR(33136, 27), 5633}, // 449 MemberDecorateStringGOOGLE
  {IR(33163, 11), 6}, // 450 MemberName
  {IR(33174, 14), 225}, // 451 MemoryBarrier
  {IR(33188, 12), 14}, // 452 MemoryModel
  {IR(33200, 19), 329}, // 453 MemoryNamedBarrier
  {IR(33219, 16), 330}, // 454 ModuleProcessed
  {IR(33235, 5), 5}, // 455 Name
  {IR(33240, 23), 328}, // 456 NamedBarrierInitialize
  {IR(33263, 7), 317}, // 457 NoLine
  {IR(33270, 27), 5090}, // 458 NodePayloadArrayLengthAMDX
  {IR(33297, 4), 0}, // 459 Nop
  {IR(33301, 4), 200}, // 460 Not
  {IR(33305, 8), 162}, // 461 Ordered
  {IR(33313, 13), 147}, // 462 OuterProduct
  {IR(33326, 4), 245}, // 463 Phi
  {IR(33330, 15), 67}, // 464 PtrAccessChain
  {IR(33345, 29), 5934}, // 465 PtrCastToCrossWorkgroupINTEL
  {IR(33374, 17), 121}, // 466 PtrCastToGeneric
  {IR(33391, 8), 403}, // 467 PtrDiff
  {IR(33399, 9), 401}, // 468 PtrEqual
  {IR(33408, 12), 402}, // 469 PtrNotEqual
  {IR(33420, 14), 116}, // 470 QuantizeToF16
  {IR(33434, 17), 5398}, // 471 RawAccessChainNV
  {IR(33451, 31), 4476}, // 472 RayQueryConfirmIntersectionKHR
  {IR(33482, 32), 4475}, // 473 RayQueryGenerateIntersectionKHR
  {IR(33514, 23), 5345}, // 474 RayQueryGetClusterIdNV
  {IR(33537, 39), 6024}, // 475 RayQueryGetIntersectionBarycentricsKHR
  {IR(33576, 46), 6026}, // 476 RayQueryGetIntersectionCandidateAABBOpaqueKHR
  {IR(33622, 36), 6025}, // 477 RayQueryGetIntersectionFrontFaceKHR
  {IR(33658, 40), 6022}, // 478 RayQueryGetIntersectionGeometryIndexKHR
  {IR(33698, 46), 6019}, // 479 RayQueryGetIntersectionInstanceCustomIndexKHR
  {IR(33744, 37), 6020}, // 480 RayQueryGetIntersectionInstanceIdKHR
  {IR(33781, 65), 6021}, // 481 RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR
  {IR(33846, 37), 5431}, // 482 RayQueryGetIntersectionLSSHitValueNV
  {IR(33883, 38), 5429}, // 483 RayQueryGetIntersectionLSSPositionsNV
  {IR(33921, 34), 5430}, // 484 RayQueryGetIntersectionLSSRadiiNV
  {IR(33955, 45), 6027}, // 485 RayQueryGetIntersectionObjectRayDirectionKHR
  {IR(34000, 42), 6028}, // 486 RayQueryGetIntersectionObjectRayOriginKHR
  {IR(34042, 40), 6031}, // 487 RayQueryGetIntersectionObjectToWorldKHR
  {IR(34082, 41), 6023}, // 488 RayQueryGetIntersectionPrimitiveIndexKHR
  {IR(34123, 40), 5427}, // 489 RayQueryGetIntersectionSpherePositionNV
  {IR(34163, 38), 5428}, // 490 RayQueryGetIntersectionSphereRadiusNV
  {IR(34201, 28), 6018}, // 491 RayQueryGetIntersectionTKHR
  {IR(34229, 50), 5340}, // 492 RayQueryGetIntersectionTriangleVertexPositionsKHR
  {IR(34279, 31), 4479}, // 493 RayQueryGetIntersectionTypeKHR
  {IR(34310, 40), 6032}, // 494 RayQueryGetIntersectionWorldToObjectKHR
  {IR(34350, 23), 6017}, // 495 RayQueryGetRayFlagsKHR
  {IR(34373, 22), 6016}, // 496 RayQueryGetRayTMinKHR
  {IR(34395, 32), 6029}, // 497 RayQueryGetWorldRayDirectionKHR
  {IR(34427, 29), 6030}, // 498 RayQueryGetWorldRayOriginKHR
  {IR(34456, 22), 4473}, // 499 RayQueryInitializeKHR
  {IR(34478, 19), 5439}, // 500 RayQueryIsLSSHitNV
  {IR(34497, 22), 5438}, // 501 RayQueryIsSphereHitNV
  {IR(34519, 19), 4477}, // 502 RayQueryProceedKHR
  {IR(34538, 21), 4474}, // 503 RayQueryTerminateKHR
  {IR(34559, 13), 5056}, // 504 ReadClockKHR
  {IR(34572, 9), 274}, // 505 ReadPipe
  {IR(34581, 22), 5946}, // 506 ReadPipeBlockingINTEL
  {IR(34603, 13), 298}, // 507 ReleaseEvent
  {IR(34616, 24), 5280}, // 508 ReorderThreadWithHintNV
  {IR(34640, 29), 5279}, // 509 ReorderThreadWithHitObjectNV
  {IR(34669, 22), 5334}, // 510 ReportIntersectionKHR
  {IR(34691, 21), 5334}, // 511 ReportIntersectionNV
  {IR(34712, 23), 278}, // 512 ReserveReadPipePackets
  {IR(34735, 24), 279}, // 513 ReserveWritePipePackets
  {IR(34759, 17), 276}, // 514 ReservedReadPipe
  {IR(34776, 18), 277}, // 515 ReservedWritePipe
  {IR(34794, 19), 5820}, // 516 RestoreMemoryINTEL
  {IR(34813, 12), 297}, // 517 RetainEvent
  {IR(34825, 7), 253}, // 518 Return
  {IR(34832, 12), 254}, // 519 ReturnValue
  {IR(34844, 18), 6426}, // 520 RoundFToTF32INTEL
  {IR(34862, 9), 114}, // 521 SConvert
  {IR(34871, 5), 135}, // 522 SDiv
  {IR(34876, 5), 4450}, // 523 SDot
  {IR(34881, 11), 4453}, // 524 SDotAccSat
  {IR(34892, 14), 4453}, // 525 SDotAccSatKHR
  {IR(34906, 8), 4450}, // 526 SDotKHR
  {IR(34914, 13), 173}, // 527 SGreaterThan
  {IR(34927, 18), 175}, // 528 SGreaterThanEqual
  {IR(34945, 10), 177}, // 529 SLessThan
  {IR(34955, 15), 179}, // 530 SLessThanEqual
  {IR(34970, 5), 139}, // 531 SMod
  {IR(34975, 13), 152}, // 532 SMulExtended
  {IR(34988, 8), 126}, // 533 SNegate
  {IR(34996, 5), 138}, // 534 SRem
  {IR(35001, 6), 4452}, // 535 SUDot
  {IR(35007, 12), 4455}, // 536 SUDotAccSat
  {IR(35019, 15), 4455}, // 537 SUDotAccSatKHR
  {IR(35034, 9), 4452}, // 538 SUDotKHR
  {IR(35043, 13), 86}, // 539 SampledImage
  {IR(35056, 29), 5397}, // 540 SamplerImageAddressingModeNV
  {IR(35085, 15), 118}, // 541 SatConvertSToU
  {IR(35100, 15), 119}, // 542 SatConvertUToS
  {IR(35115, 16), 5819}, // 543 SaveMemoryINTEL
  {IR(35131, 7), 169}, // 544 Select
  {IR(35138, 15), 247}, // 545 SelectionMerge
  {IR(35153, 18), 5295}, // 546 SetMeshOutputsEXT
  {IR(35171, 19), 301}, // 547 SetUserEventStatus
  {IR(35190, 17), 196}, // 548 ShiftLeftLogical
  {IR(35207, 21), 195}, // 549 ShiftRightArithmetic
  {IR(35228, 18), 194}, // 550 ShiftRightLogical
  {IR(35246, 11), 160}, // 551 SignBitSet
  {IR(35257, 7), 321}, // 552 SizeOf
  {IR(35264, 7), 3}, // 553 Source
  {IR(35271, 16), 2}, // 554 SourceContinued
  {IR(35287, 16), 4}, // 555 SourceExtension
  {IR(35303, 13), 50}, // 556 SpecConstant
  {IR(35316, 22), 51}, // 557 SpecConstantComposite
  {IR(35338, 36), 6092}, // 558 SpecConstantCompositeContinuedINTEL
  {IR(35374, 34), 4462}, // 559 SpecConstantCompositeReplicateEXT
  {IR(35408, 18), 49}, // 560 SpecConstantFalse
  {IR(35426, 15), 52}, // 561 SpecConstantOp
  {IR(35441, 23), 5104}, // 562 SpecConstantStringAMDX
  {IR(35464, 17), 48}, // 563 SpecConstantTrue
  {IR(35481, 25), 4162}, // 564 StencilAttachmentReadEXT
  {IR(35506, 6), 62}, // 565 Store
  {IR(35512, 7), 7}, // 566 String
  {IR(35519, 25), 6231}, // 567 Subgroup2DBlockLoadINTEL
  {IR(35544, 34), 6232}, // 568 Subgroup2DBlockLoadTransformINTEL
  {IR(35578, 34), 6233}, // 569 Subgroup2DBlockLoadTransposeINTEL
  {IR(35612, 29), 6234}, // 570 Subgroup2DBlockPrefetchINTEL
  {IR(35641, 26), 6235}, // 571 Subgroup2DBlockStoreINTEL
  {IR(35667, 20), 4430}, // 572 SubgroupAllEqualKHR
  {IR(35687, 15), 4428}, // 573 SubgroupAllKHR
  {IR(35702, 15), 4429}, // 574 SubgroupAnyKHR
  {IR(35717, 30), 5782}, // 575 SubgroupAvcBmeInitializeINTEL
  {IR(35747, 30), 5781}, // 576 SubgroupAvcFmeInitializeINTEL
  {IR(35777, 35), 5751}, // 577 SubgroupAvcImeAdjustRefOffsetINTEL
  {IR(35812, 39), 5752}, // 578 SubgroupAvcImeConvertToMcePayloadINTEL
  {IR(35851, 38), 5765}, // 579 SubgroupAvcImeConvertToMceResultINTEL
  {IR(35889, 45), 5758}, // 580 SubgroupAvcImeEvaluateWithDualReferenceINTEL
  {IR(35934, 53), 5760}, // 581 SubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL
  {IR(35987, 56), 5764}, // 582 SubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL
  {IR(36043, 54), 5762}, // 583 SubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL
  {IR(36097, 47), 5757}, // 584 SubgroupAvcImeEvaluateWithSingleReferenceINTEL
  {IR(36144, 55), 5759}, // 585 SubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL
  {IR(36199, 58), 5763}, // 586 SubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL
  {IR(36257, 56), 5761}, // 587 SubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL
  {IR(36313, 36), 5776}, // 588 SubgroupAvcImeGetBorderReachedINTEL
  {IR(36349, 44), 5767}, // 589 SubgroupAvcImeGetDualReferenceStreaminINTEL
  {IR(36393, 46), 5766}, // 590 SubgroupAvcImeGetSingleReferenceStreaminINTEL
  {IR(36439, 66), 5774}, // 591 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL
  {IR(36505, 68), 5773}, // 592 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL
  {IR(36573, 67), 5775}, // 593 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL
  {IR(36640, 68), 5771}, // 594 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL
  {IR(36708, 70), 5770}, // 595 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL
  {IR(36778, 69), 5772}, // 596 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL
  {IR(36847, 48), 5777}, // 597 SubgroupAvcImeGetTruncatedSearchIndicationINTEL
  {IR(36895, 59), 5778}, // 598 SubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL
  {IR(36954, 56), 5780}, // 599 SubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL
  {IR(37010, 58), 5779}, // 600 SubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL
  {IR(37068, 30), 5747}, // 601 SubgroupAvcImeInitializeINTEL
  {IR(37098, 33), 5750}, // 602 SubgroupAvcImeRefWindowSizeINTEL
  {IR(37131, 36), 5749}, // 603 SubgroupAvcImeSetDualReferenceINTEL
  {IR(37167, 54), 5755}, // 604 SubgroupAvcImeSetEarlySearchTerminationThresholdINTEL
  {IR(37221, 43), 5753}, // 605 SubgroupAvcImeSetMaxMotionVectorCountINTEL
  {IR(37264, 38), 5748}, // 606 SubgroupAvcImeSetSingleReferenceINTEL
  {IR(37302, 47), 5754}, // 607 SubgroupAvcImeSetUnidirectionalMixDisableINTEL
  {IR(37349, 34), 5756}, // 608 SubgroupAvcImeSetWeightedSadINTEL
  {IR(37383, 47), 5769}, // 609 SubgroupAvcImeStripDualReferenceStreamoutINTEL
  {IR(37430, 49), 5768}, // 610 SubgroupAvcImeStripSingleReferenceStreamoutINTEL
  {IR(37479, 39), 5732}, // 611 SubgroupAvcMceConvertToImePayloadINTEL
  {IR(37518, 38), 5733}, // 612 SubgroupAvcMceConvertToImeResultINTEL
  {IR(37556, 39), 5734}, // 613 SubgroupAvcMceConvertToRefPayloadINTEL
  {IR(37595, 38), 5735}, // 614 SubgroupAvcMceConvertToRefResultINTEL
  {IR(37633, 39), 5736}, // 615 SubgroupAvcMceConvertToSicPayloadINTEL
  {IR(37672, 38), 5737}, // 616 SubgroupAvcMceConvertToSicResultINTEL
  {IR(37710, 43), 5740}, // 617 SubgroupAvcMceGetBestInterDistortionsINTEL
  {IR(37753, 50), 5721}, // 618 SubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL
  {IR(37803, 60), 5713}, // 619 SubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL
  {IR(37863, 51), 5717}, // 620 SubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL
  {IR(37914, 56), 5720}, // 621 SubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL
  {IR(37970, 47), 5715}, // 622 SubgroupAvcMceGetDefaultInterShapePenaltyINTEL
  {IR(38017, 56), 5727}, // 623 SubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL
  {IR(38073, 50), 5725}, // 624 SubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL
  {IR(38123, 51), 5719}, // 625 SubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL
  {IR(38174, 49), 5723}, // 626 SubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL
  {IR(38223, 52), 5722}, // 627 SubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL
  {IR(38275, 51), 5726}, // 628 SubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL
  {IR(38326, 38), 5743}, // 629 SubgroupAvcMceGetInterDirectionsINTEL
  {IR(38364, 39), 5739}, // 630 SubgroupAvcMceGetInterDistortionsINTEL
  {IR(38403, 38), 5741}, // 631 SubgroupAvcMceGetInterMajorShapeINTEL
  {IR(38441, 38), 5742}, // 632 SubgroupAvcMceGetInterMinorShapeINTEL
  {IR(38479, 45), 5744}, // 633 SubgroupAvcMceGetInterMotionVectorCountINTEL
  {IR(38524, 40), 5745}, // 634 SubgroupAvcMceGetInterReferenceIdsINTEL
  {IR(38564, 62), 5746}, // 635 SubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL
  {IR(38626, 36), 5738}, // 636 SubgroupAvcMceGetMotionVectorsINTEL
  {IR(38662, 33), 5728}, // 637 SubgroupAvcMceSetAcOnlyHaarINTEL
  {IR(38695, 61), 5731}, // 638 SubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL
  {IR(38756, 53), 5714}, // 639 SubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL
  {IR(38809, 44), 5718}, // 640 SubgroupAvcMceSetInterDirectionPenaltyINTEL
  {IR(38853, 40), 5716}, // 641 SubgroupAvcMceSetInterShapePenaltyINTEL
  {IR(38893, 47), 5724}, // 642 SubgroupAvcMceSetMotionVectorCostFunctionINTEL
  {IR(38940, 61), 5730}, // 643 SubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL
  {IR(39001, 52), 5729}, // 644 SubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL
  {IR(39053, 39), 5783}, // 645 SubgroupAvcRefConvertToMcePayloadINTEL
  {IR(39092, 38), 5790}, // 646 SubgroupAvcRefConvertToMceResultINTEL
  {IR(39130, 45), 5787}, // 647 SubgroupAvcRefEvaluateWithDualReferenceINTEL
  {IR(39175, 46), 5788}, // 648 SubgroupAvcRefEvaluateWithMultiReferenceINTEL
  {IR(39221, 56), 5789}, // 649 SubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL
  {IR(39277, 47), 5786}, // 650 SubgroupAvcRefEvaluateWithSingleReferenceINTEL
  {IR(39324, 46), 5784}, // 651 SubgroupAvcRefSetBidirectionalMixDisableINTEL
  {IR(39370, 43), 5785}, // 652 SubgroupAvcRefSetBilinearFilterEnableINTEL
  {IR(39413, 42), 5794}, // 653 SubgroupAvcSicConfigureIpeLumaChromaINTEL
  {IR(39455, 36), 5793}, // 654 SubgroupAvcSicConfigureIpeLumaINTEL
  {IR(39491, 32), 5792}, // 655 SubgroupAvcSicConfigureSkcINTEL
  {IR(39523, 39), 5796}, // 656 SubgroupAvcSicConvertToMcePayloadINTEL
  {IR(39562, 38), 5808}, // 657 SubgroupAvcSicConvertToMceResultINTEL
  {IR(39600, 31), 5803}, // 658 SubgroupAvcSicEvaluateIpeINTEL
  {IR(39631, 45), 5805}, // 659 SubgroupAvcSicEvaluateWithDualReferenceINTEL
  {IR(39676, 46), 5806}, // 660 SubgroupAvcSicEvaluateWithMultiReferenceINTEL
  {IR(39722, 56), 5807}, // 661 SubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL
  {IR(39778, 47), 5804}, // 662 SubgroupAvcSicEvaluateWithSingleReferenceINTEL
  {IR(39825, 46), 5811}, // 663 SubgroupAvcSicGetBestIpeChromaDistortionINTEL
  {IR(39871, 44), 5810}, // 664 SubgroupAvcSicGetBestIpeLumaDistortionINTEL
  {IR(39915, 35), 5816}, // 665 SubgroupAvcSicGetInterRawSadsINTEL
  {IR(39950, 36), 5813}, // 666 SubgroupAvcSicGetIpeChromaModeINTEL
  {IR(39986, 35), 5809}, // 667 SubgroupAvcSicGetIpeLumaShapeINTEL
  {IR(40021, 39), 5795}, // 668 SubgroupAvcSicGetMotionVectorMaskINTEL
  {IR(40060, 41), 5812}, // 669 SubgroupAvcSicGetPackedIpeLumaModesINTEL
  {IR(40101, 50), 5814}, // 670 SubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL
  {IR(40151, 48), 5815}, // 671 SubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL
  {IR(40199, 30), 5791}, // 672 SubgroupAvcSicInitializeINTEL
  {IR(40229, 43), 5800}, // 673 SubgroupAvcSicSetBilinearFilterEnableINTEL
  {IR(40272, 43), 5802}, // 674 SubgroupAvcSicSetBlockBasedRawSkipSadINTEL
  {IR(40315, 50), 5799}, // 675 SubgroupAvcSicSetIntraChromaModeCostFunctionINTEL
  {IR(40365, 48), 5798}, // 676 SubgroupAvcSicSetIntraLumaModeCostFunctionINTEL
  {IR(40413, 44), 5797}, // 677 SubgroupAvcSicSetIntraLumaShapePenaltyINTEL
  {IR(40457, 48), 5801}, // 678 SubgroupAvcSicSetSkcForwardTransformEnableINTEL
  {IR(12284, 18), 4421}, // 679 SubgroupBallotKHR
  {IR(40505, 27), 6221}, // 680 SubgroupBlockPrefetchINTEL
  {IR(40532, 23), 5575}, // 681 SubgroupBlockReadINTEL
  {IR(40555, 24), 5576}, // 682 SubgroupBlockWriteINTEL
  {IR(40579, 27), 4422}, // 683 SubgroupFirstInvocationKHR
  {IR(40606, 28), 5577}, // 684 SubgroupImageBlockReadINTEL
  {IR(40634, 29), 5578}, // 685 SubgroupImageBlockWriteINTEL
  {IR(40663, 33), 5580}, // 686 SubgroupImageMediaBlockReadINTEL
  {IR(40696, 34), 5581}, // 687 SubgroupImageMediaBlockWriteINTEL
  {IR(12431, 38), 6237}, // 688 SubgroupMatrixMultiplyAccumulateINTEL
  {IR(40730, 26), 4432}, // 689 SubgroupReadInvocationKHR
  {IR(40756, 25), 5572}, // 690 SubgroupShuffleDownINTEL
  {IR(12469, 21), 5571}, // 691 SubgroupShuffleINTEL
  {IR(40781, 23), 5573}, // 692 SubgroupShuffleUpINTEL
  {IR(40804, 24), 5574}, // 693 SubgroupShuffleXorINTEL
  {IR(40828, 7), 251}, // 694 Switch
  {IR(40835, 23), 6164}, // 695 TaskSequenceAsyncINTEL
  {IR(40858, 24), 6163}, // 696 TaskSequenceCreateINTEL
  {IR(40882, 21), 6165}, // 697 TaskSequenceGetINTEL
  {IR(40903, 25), 6166}, // 698 TaskSequenceReleaseINTEL
  {IR(40928, 27), 5384}, // 699 TensorLayoutSetBlockSizeNV
  {IR(40955, 28), 5376}, // 700 TensorLayoutSetClampValueNV
  {IR(40983, 27), 5373}, // 701 TensorLayoutSetDimensionNV
  {IR(41010, 24), 5374}, // 702 TensorLayoutSetStrideNV
  {IR(41034, 20), 5375}, // 703 TensorLayoutSliceNV
  {IR(41054, 20), 5382}, // 704 TensorViewSetClipNV
  {IR(41074, 25), 5378}, // 705 TensorViewSetDimensionNV
  {IR(41099, 22), 5379}, // 706 TensorViewSetStrideNV
  {IR(41121, 20), 4416}, // 707 TerminateInvocation
  {IR(41141, 16), 4449}, // 708 TerminateRayKHR
  {IR(41157, 15), 5336}, // 709 TerminateRayNV
  {IR(41172, 14), 5338}, // 710 TraceMotionNV
  {IR(41186, 8), 5337}, // 711 TraceNV
  {IR(41194, 12), 4445}, // 712 TraceRayKHR
  {IR(41206, 17), 5339}, // 713 TraceRayMotionNV
  {IR(41223, 10), 84}, // 714 Transpose
  {IR(41233, 29), 5341}, // 715 TypeAccelerationStructureKHR
  {IR(41262, 28), 5341}, // 716 TypeAccelerationStructureNV
  {IR(41290, 10), 28}, // 717 TypeArray
  {IR(41300, 37), 5710}, // 718 TypeAvcImeDualReferenceStreaminINTEL
  {IR(41337, 23), 5701}, // 719 TypeAvcImePayloadINTEL
  {IR(41360, 44), 5708}, // 720 TypeAvcImeResultDualReferenceStreamoutINTEL
  {IR(41404, 22), 5706}, // 721 TypeAvcImeResultINTEL
  {IR(41426, 46), 5707}, // 722 TypeAvcImeResultSingleReferenceStreamoutINTEL
  {IR(41472, 39), 5709}, // 723 TypeAvcImeSingleReferenceStreaminINTEL
  {IR(41511, 23), 5704}, // 724 TypeAvcMcePayloadINTEL
  {IR(41534, 22), 5705}, // 725 TypeAvcMceResultINTEL
  {IR(41556, 23), 5702}, // 726 TypeAvcRefPayloadINTEL
  {IR(41579, 22), 5711}, // 727 TypeAvcRefResultINTEL
  {IR(41601, 23), 5703}, // 728 TypeAvcSicPayloadINTEL
  {IR(41624, 22), 5712}, // 729 TypeAvcSicResultINTEL
  {IR(41646, 9), 20}, // 730 TypeBool
  {IR(41655, 23), 6086}, // 731 TypeBufferSurfaceINTEL
  {IR(41678, 25), 4456}, // 732 TypeCooperativeMatrixKHR
  {IR(41703, 24), 5358}, // 733 TypeCooperativeMatrixNV
  {IR(41727, 24), 5288}, // 734 TypeCooperativeVectorNV
  {IR(41751, 16), 35}, // 735 TypeDeviceEvent
  {IR(41767, 10), 34}, // 736 TypeEvent
  {IR(41777, 10), 22}, // 737 TypeFloat
  {IR(41787, 19), 39}, // 738 TypeForwardPointer
  {IR(41806, 13), 33}, // 739 TypeFunction
  {IR(41819, 16), 5281}, // 740 TypeHitObjectNV
  {IR(41835, 10), 25}, // 741 TypeImage
  {IR(41845, 8), 21}, // 742 TypeInt
  {IR(41853, 11), 24}, // 743 TypeMatrix
  {IR(41864, 17), 327}, // 744 TypeNamedBarrier
  {IR(41881, 25), 5076}, // 745 TypeNodePayloadArrayAMDX
  {IR(41906, 11), 31}, // 746 TypeOpaque
  {IR(41917, 9), 38}, // 747 TypePipe
  {IR(41926, 16), 322}, // 748 TypePipeStorage
  {IR(41942, 12), 32}, // 749 TypePointer
  {IR(41954, 10), 37}, // 750 TypeQueue
  {IR(41964, 16), 4472}, // 751 TypeRayQueryKHR
  {IR(41980, 14), 36}, // 752 TypeReserveId
  {IR(41994, 17), 29}, // 753 TypeRuntimeArray
  {IR(42011, 17), 27}, // 754 TypeSampledImage
  {IR(42028, 12), 26}, // 755 TypeSampler
  {IR(42040, 11), 30}, // 756 TypeStruct
  {IR(42051, 25), 6090}, // 757 TypeStructContinuedINTEL
  {IR(42076, 22), 6199}, // 758 TypeTaskSequenceINTEL
  {IR(42098, 19), 5370}, // 759 TypeTensorLayoutNV
  {IR(42117, 17), 5371}, // 760 TypeTensorViewNV
  {IR(42134, 22), 4417}, // 761 TypeUntypedPointerKHR
  {IR(42156, 11), 23}, // 762 TypeVector
  {IR(42167, 18), 5700}, // 763 TypeVmeImageINTEL
  {IR(42185, 9), 19}, // 764 TypeVoid
  {IR(42194, 13), 5590}, // 765 UAddSatINTEL
  {IR(42207, 14), 5592}, // 766 UAverageINTEL
  {IR(42221, 21), 5594}, // 767 UAverageRoundedINTEL
  {IR(42242, 9), 113}, // 768 UConvert
  {IR(42251, 24), 5585}, // 769 UCountLeadingZerosINTEL
  {IR(42275, 25), 5586}, // 770 UCountTrailingZerosINTEL
  {IR(42300, 5), 134}, // 771 UDiv
  {IR(42305, 5), 4451}, // 772 UDot
  {IR(42310, 11), 4454}, // 773 UDotAccSat
  {IR(42321, 14), 4454}, // 774 UDotAccSatKHR
  {IR(42335, 8), 4451}, // 775 UDotKHR
  {IR(42343, 13), 172}, // 776 UGreaterThan
  {IR(42356, 18), 174}, // 777 UGreaterThanEqual
  {IR(42374, 10), 176}, // 778 ULessThan
  {IR(42384, 15), 178}, // 779 ULessThanEqual
  {IR(42399, 5), 137}, // 780 UMod
  {IR(42404, 15), 5598}, // 781 UMul32x16INTEL
  {IR(42419, 13), 151}, // 782 UMulExtended
  {IR(42432, 13), 5596}, // 783 USubSatINTEL
  {IR(42445, 6), 1}, // 784 Undef
  {IR(42451, 10), 163}, // 785 Unordered
  {IR(42461, 12), 255}, // 786 Unreachable
  {IR(42473, 22), 4419}, // 787 UntypedAccessChainKHR
  {IR(42495, 22), 4425}, // 788 UntypedArrayLengthKHR
  {IR(42517, 30), 4420}, // 789 UntypedInBoundsAccessChainKHR
  {IR(42547, 33), 4424}, // 790 UntypedInBoundsPtrAccessChainKHR
  {IR(42580, 19), 4426}, // 791 UntypedPrefetchKHR
  {IR(42599, 25), 4423}, // 792 UntypedPtrAccessChainKHR
  {IR(42624, 19), 4418}, // 793 UntypedVariableKHR
  {IR(42643, 9), 59}, // 794 Variable
  {IR(13283, 25), 5818}, // 795 VariableLengthArrayINTEL
  {IR(42652, 21), 77}, // 796 VectorExtractDynamic
  {IR(42673, 20), 78}, // 797 VectorInsertDynamic
  {IR(42693, 14), 79}, // 798 VectorShuffle
  {IR(42707, 18), 144}, // 799 VectorTimesMatrix
  {IR(42725, 18), 142}, // 800 VectorTimesScalar
  {IR(42743, 14), 5699}, // 801 VmeImageINTEL
  {IR(42757, 33), 5299}, // 802 WritePackedPrimitiveIndices4x8NV
  {IR(42790, 10), 275}, // 803 WritePipe
  {IR(42800, 23), 5947}, // 804 WritePipeBlockingINTEL
}};

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
  {spv::Op::OpNop, false, false, IR(0, 0), IR(33297, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpUndef, true, true, IR(39, 2), IR(42445, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpSourceContinued, false, false, IR(11, 1), IR(35271, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpSource, false, false, IR(41, 4), IR(35264, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpSourceExtension, false, false, IR(11, 1), IR(35287, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpName, false, false, IR(45, 2), IR(33235, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpMemberName, false, false, IR(47, 3), IR(33163, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpString, true, false, IR(50, 2), IR(35512, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpLine, false, false, IR(52, 3), IR(32911, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpExtension, false, false, IR(11, 1), IR(28146, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpExtInstImport, true, false, IR(50, 2), IR(28106, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpExtInst, true, true, IR(55, 4), IR(28098, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpMemoryModel, false, false, IR(59, 2), IR(33188, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpEntryPoint, false, false, IR(61, 4), IR(28010, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpExecutionMode, false, false, IR(65, 2), IR(28058, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpCapability, false, false, IR(67, 1), IR(26220, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpTypeVoid, true, false, IR(68, 1), IR(42185, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeBool, true, false, IR(68, 1), IR(41646, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeInt, true, false, IR(69, 3), IR(41845, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeFloat, true, false, IR(72, 3), IR(41777, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeVector, true, false, IR(75, 3), IR(42156, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeMatrix, true, false, IR(75, 3), IR(41853, 11), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeImage, true, false, IR(78, 9), IR(41835, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeSampler, true, false, IR(68, 1), IR(42028, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeSampledImage, true, false, IR(87, 2), IR(42011, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeArray, true, false, IR(89, 3), IR(41290, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeRuntimeArray, true, false, IR(87, 2), IR(41994, 17), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeStruct, true, false, IR(92, 2), IR(42040, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeOpaque, true, false, IR(50, 2), IR(41906, 11), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypePointer, true, false, IR(94, 3), IR(41942, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeFunction, true, false, IR(97, 3), IR(41806, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeEvent, true, false, IR(68, 1), IR(41767, 10), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeDeviceEvent, true, false, IR(68, 1), IR(41751, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeReserveId, true, false, IR(68, 1), IR(41980, 14), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeQueue, true, false, IR(68, 1), IR(41954, 10), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypePipe, true, false, IR(100, 2), IR(41917, 9), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeForwardPointer, false, false, IR(102, 2), IR(41787, 19), IR(0, 0), IR(195, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantTrue, true, true, IR(39, 2), IR(26618, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantFalse, true, true, IR(39, 2), IR(26507, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstant, true, true, IR(104, 3), IR(15181, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantComposite, true, true, IR(107, 3), IR(26427, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantSampler, true, true, IR(110, 5), IR(26583, 16), IR(0, 0), IR(197, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantNull, true, true, IR(39, 2), IR(26550, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantTrue, true, true, IR(39, 2), IR(35464, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantFalse, true, true, IR(39, 2), IR(35408, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstant, true, true, IR(104, 3), IR(35303, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantComposite, true, true, IR(107, 3), IR(35316, 22), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantOp, true, true, IR(115, 3), IR(35426, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpFunction, true, true, IR(118, 4), IR(23380, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionParameter, true, true, IR(39, 2), IR(28733, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionEnd, false, false, IR(0, 0), IR(28721, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionCall, true, true, IR(122, 4), IR(28708, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpVariable, true, true, IR(126, 4), IR(42643, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpImageTexelPointer, true, true, IR(130, 5), IR(32682, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpLoad, true, true, IR(135, 4), IR(32916, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpStore, false, false, IR(139, 3), IR(35506, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCopyMemory, false, false, IR(142, 4), IR(27557, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCopyMemorySized, false, false, IR(146, 5), IR(27568, 16), IR(0, 0), IR(198, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpAccessChain, true, true, IR(122, 4), IR(24567, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpInBoundsAccessChain, true, true, IR(122, 4), IR(32711, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrAccessChain, true, true, IR(151, 5), IR(33330, 15), IR(0, 0), IR(200, 4), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpArrayLength, true, true, IR(156, 4), IR(25676, 12), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpGenericPtrMemSemantics, true, true, IR(160, 3), IR(28849, 23), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpInBoundsPtrAccessChain, true, true, IR(151, 5), IR(32731, 23), IR(0, 0), IR(1, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpDecorate, false, false, IR(163, 2), IR(27756, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpMemberDecorate, false, false, IR(165, 3), IR(33100, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpDecorationGroup, true, false, IR(68, 1), IR(27812, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupDecorate, false, false, IR(168, 2), IR(29254, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupMemberDecorate, false, false, IR(170, 2), IR(29482, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpVectorExtractDynamic, true, true, IR(172, 4), IR(42652, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpVectorInsertDynamic, true, true, IR(130, 5), IR(42673, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpVectorShuffle, true, true, IR(176, 5), IR(42693, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeConstruct, true, true, IR(107, 3), IR(26311, 19), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeExtract, true, true, IR(181, 4), IR(26394, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeInsert, true, true, IR(176, 5), IR(26411, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCopyObject, true, true, IR(160, 3), IR(27584, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpTranspose, true, true, IR(160, 3), IR(41223, 10), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpSampledImage, true, true, IR(172, 4), IR(35043, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleImplicitLod, true, true, IR(185, 5), IR(32156, 23), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleExplicitLod, true, true, IR(190, 5), IR(32110, 23), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleDrefImplicitLod, true, true, IR(195, 6), IR(32083, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleDrefExplicitLod, true, true, IR(201, 6), IR(32056, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjImplicitLod, true, true, IR(185, 5), IR(32268, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjExplicitLod, true, true, IR(190, 5), IR(32241, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjDrefImplicitLod, true, true, IR(195, 6), IR(32210, 31), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjDrefExplicitLod, true, true, IR(201, 6), IR(32179, 31), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageFetch, true, true, IR(185, 5), IR(31908, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageGather, true, true, IR(195, 6), IR(31919, 12), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageDrefGather, true, true, IR(195, 6), IR(31892, 16), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageRead, true, true, IR(185, 5), IR(32046, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageWrite, false, false, IR(207, 4), IR(32700, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImage, true, true, IR(160, 3), IR(23463, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryFormat, true, true, IR(160, 3), IR(31931, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryOrder, true, true, IR(160, 3), IR(31979, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySizeLod, true, true, IR(172, 4), IR(32028, 18), IR(0, 0), IR(204, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySize, true, true, IR(160, 3), IR(32013, 15), IR(0, 0), IR(204, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryLod, true, true, IR(172, 4), IR(31965, 14), IR(0, 0), IR(206, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryLevels, true, true, IR(160, 3), IR(31948, 17), IR(0, 0), IR(204, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySamples, true, true, IR(160, 3), IR(31995, 18), IR(0, 0), IR(204, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpConvertFToU, true, true, IR(160, 3), IR(26748, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertFToS, true, true, IR(160, 3), IR(26736, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertSToF, true, true, IR(160, 3), IR(26792, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToF, true, true, IR(160, 3), IR(26884, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpUConvert, true, true, IR(160, 3), IR(42242, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSConvert, true, true, IR(160, 3), IR(34862, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpFConvert, true, true, IR(160, 3), IR(28161, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpQuantizeToF16, true, true, IR(160, 3), IR(33420, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertPtrToU, true, true, IR(160, 3), IR(26778, 14), IR(0, 0), IR(195, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSatConvertSToU, true, true, IR(160, 3), IR(35085, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSatConvertUToS, true, true, IR(160, 3), IR(35100, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToPtr, true, true, IR(160, 3), IR(26914, 14), IR(0, 0), IR(195, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpPtrCastToGeneric, true, true, IR(160, 3), IR(33374, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpGenericCastToPtr, true, true, IR(160, 3), IR(28807, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpGenericCastToPtrExplicit, true, true, IR(211, 4), IR(28824, 25), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpBitcast, true, true, IR(160, 3), IR(26121, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSNegate, true, true, IR(160, 3), IR(34988, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFNegate, true, true, IR(160, 3), IR(28185, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIAdd, true, true, IR(172, 4), IR(31539, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFAdd, true, true, IR(172, 4), IR(28156, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpISub, true, true, IR(172, 4), IR(31639, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFSub, true, true, IR(172, 4), IR(28289, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIMul, true, true, IR(172, 4), IR(31609, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFMul, true, true, IR(172, 4), IR(28180, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDiv, true, true, IR(172, 4), IR(42300, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSDiv, true, true, IR(172, 4), IR(34871, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFDiv, true, true, IR(172, 4), IR(28170, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUMod, true, true, IR(172, 4), IR(42399, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSRem, true, true, IR(172, 4), IR(34996, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSMod, true, true, IR(172, 4), IR(34970, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFRem, true, true, IR(172, 4), IR(28284, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFMod, true, true, IR(172, 4), IR(28175, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpVectorTimesScalar, true, true, IR(172, 4), IR(42725, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesScalar, true, true, IR(172, 4), IR(33064, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpVectorTimesMatrix, true, true, IR(172, 4), IR(42707, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesVector, true, true, IR(172, 4), IR(33082, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesMatrix, true, true, IR(172, 4), IR(33046, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpOuterProduct, true, true, IR(172, 4), IR(33313, 13), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpDot, true, true, IR(172, 4), IR(27851, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIAddCarry, true, true, IR(172, 4), IR(31544, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpISubBorrow, true, true, IR(172, 4), IR(31644, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUMulExtended, true, true, IR(172, 4), IR(42419, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSMulExtended, true, true, IR(172, 4), IR(34975, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpAny, true, true, IR(160, 3), IR(24673, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpAll, true, true, IR(160, 3), IR(24644, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsNan, true, true, IR(160, 3), IR(32791, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsInf, true, true, IR(160, 3), IR(32785, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsFinite, true, true, IR(160, 3), IR(32754, 9), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsNormal, true, true, IR(160, 3), IR(32820, 9), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSignBitSet, true, true, IR(160, 3), IR(35246, 11), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLessOrGreater, true, true, IR(172, 4), IR(32870, 14), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), SPV_SPIRV_VERSION_WORD(1,5), PrintingClass::kRelational_and_Logical},
  {spv::Op::OpOrdered, true, true, IR(172, 4), IR(33305, 8), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUnordered, true, true, IR(172, 4), IR(42451, 10), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalEqual, true, true, IR(172, 4), IR(32932, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalNotEqual, true, true, IR(172, 4), IR(32956, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalOr, true, true, IR(172, 4), IR(32972, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalAnd, true, true, IR(172, 4), IR(32921, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalNot, true, true, IR(160, 3), IR(32945, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSelect, true, true, IR(130, 5), IR(35131, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIEqual, true, true, IR(172, 4), IR(31602, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpINotEqual, true, true, IR(172, 4), IR(31629, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUGreaterThan, true, true, IR(172, 4), IR(42343, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSGreaterThan, true, true, IR(172, 4), IR(34914, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUGreaterThanEqual, true, true, IR(172, 4), IR(42356, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSGreaterThanEqual, true, true, IR(172, 4), IR(34927, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpULessThan, true, true, IR(172, 4), IR(42374, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSLessThan, true, true, IR(172, 4), IR(34945, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpULessThanEqual, true, true, IR(172, 4), IR(42384, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSLessThanEqual, true, true, IR(172, 4), IR(34955, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdEqual, true, true, IR(172, 4), IR(28193, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordEqual, true, true, IR(172, 4), IR(28294, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdNotEqual, true, true, IR(172, 4), IR(28271, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordNotEqual, true, true, IR(172, 4), IR(28382, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdLessThan, true, true, IR(172, 4), IR(28240, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordLessThan, true, true, IR(172, 4), IR(28347, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdGreaterThan, true, true, IR(172, 4), IR(28203, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordGreaterThan, true, true, IR(172, 4), IR(28306, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdLessThanEqual, true, true, IR(172, 4), IR(28253, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordLessThanEqual, true, true, IR(172, 4), IR(28362, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdGreaterThanEqual, true, true, IR(172, 4), IR(28219, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordGreaterThanEqual, true, true, IR(172, 4), IR(28324, 23), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpShiftRightLogical, true, true, IR(172, 4), IR(35228, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpShiftRightArithmetic, true, true, IR(172, 4), IR(35207, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpShiftLeftLogical, true, true, IR(172, 4), IR(35190, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseOr, true, true, IR(172, 4), IR(26161, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseXor, true, true, IR(172, 4), IR(26171, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseAnd, true, true, IR(172, 4), IR(26129, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpNot, true, true, IR(160, 3), IR(33301, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldInsert, true, true, IR(215, 6), IR(26061, 15), IR(0, 0), IR(207, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldSExtract, true, true, IR(130, 5), IR(26076, 17), IR(0, 0), IR(207, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldUExtract, true, true, IR(130, 5), IR(26093, 17), IR(0, 0), IR(207, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitReverse, true, true, IR(160, 3), IR(26110, 11), IR(0, 0), IR(207, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitCount, true, true, IR(160, 3), IR(26052, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpDPdx, true, true, IR(160, 3), IR(27706, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdy, true, true, IR(160, 3), IR(27731, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidth, true, true, IR(160, 3), IR(28776, 7), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdxFine, true, true, IR(160, 3), IR(27722, 9), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdyFine, true, true, IR(160, 3), IR(27747, 9), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidthFine, true, true, IR(160, 3), IR(28796, 11), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdxCoarse, true, true, IR(160, 3), IR(27711, 11), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdyCoarse, true, true, IR(160, 3), IR(27736, 11), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidthCoarse, true, true, IR(160, 3), IR(28783, 13), IR(0, 0), IR(209, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpEmitVertex, false, false, IR(0, 0), IR(27889, 11), IR(0, 0), IR(69, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEndPrimitive, false, false, IR(0, 0), IR(27926, 13), IR(0, 0), IR(69, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEmitStreamVertex, false, false, IR(10, 1), IR(27872, 17), IR(0, 0), IR(108, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEndStreamPrimitive, false, false, IR(10, 1), IR(27939, 19), IR(0, 0), IR(108, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpControlBarrier, false, false, IR(221, 3), IR(26631, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpMemoryBarrier, false, false, IR(224, 2), IR(33174, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpAtomicLoad, true, true, IR(226, 5), IR(25938, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicStore, false, false, IR(231, 4), IR(25980, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicExchange, true, true, IR(235, 6), IR(25788, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicCompareExchange, true, true, IR(241, 8), IR(25740, 22), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicCompareExchangeWeak, true, true, IR(241, 8), IR(25762, 26), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), SPV_SPIRV_VERSION_WORD(1,3), PrintingClass::kAtomic},
  {spv::Op::OpAtomicIIncrement, true, true, IR(226, 5), IR(25910, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicIDecrement, true, true, IR(226, 5), IR(25893, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicIAdd, true, true, IR(235, 6), IR(25882, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicISub, true, true, IR(235, 6), IR(25927, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicSMin, true, true, IR(235, 6), IR(25969, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicUMin, true, true, IR(235, 6), IR(26003, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicSMax, true, true, IR(235, 6), IR(25958, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicUMax, true, true, IR(235, 6), IR(25992, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicAnd, true, true, IR(235, 6), IR(25730, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicOr, true, true, IR(235, 6), IR(25949, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicXor, true, true, IR(235, 6), IR(26014, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpPhi, true, true, IR(107, 3), IR(33326, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLoopMerge, false, false, IR(249, 3), IR(32999, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpSelectionMerge, false, false, IR(252, 2), IR(35138, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLabel, true, false, IR(68, 1), IR(32864, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpBranch, false, false, IR(10, 1), IR(26182, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpBranchConditional, false, false, IR(254, 4), IR(26189, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpSwitch, false, false, IR(258, 3), IR(40828, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpKill, false, false, IR(0, 0), IR(32859, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpReturn, false, false, IR(0, 0), IR(34825, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpReturnValue, false, false, IR(10, 1), IR(34832, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpUnreachable, false, false, IR(0, 0), IR(42461, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLifetimeStart, false, false, IR(261, 2), IR(32884, 14), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLifetimeStop, false, false, IR(261, 2), IR(32898, 13), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpGroupAsyncCopy, true, true, IR(263, 8), IR(29127, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupWaitEvents, false, false, IR(271, 3), IR(30542, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupAll, true, true, IR(274, 4), IR(29109, 9), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupAny, true, true, IR(274, 4), IR(29118, 9), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBroadcast, true, true, IR(278, 5), IR(29198, 15), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupIAdd, true, true, IR(283, 5), IR(29380, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFAdd, true, true, IR(283, 5), IR(29268, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMin, true, true, IR(283, 5), IR(29334, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMin, true, true, IR(283, 5), IR(30509, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMin, true, true, IR(283, 5), IR(30443, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMax, true, true, IR(283, 5), IR(29301, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMax, true, true, IR(283, 5), IR(30476, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMax, true, true, IR(283, 5), IR(30410, 10), IR(0, 0), IR(210, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpReadPipe, true, true, IR(215, 6), IR(34572, 9), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpWritePipe, true, true, IR(215, 6), IR(42790, 10), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReservedReadPipe, true, true, IR(288, 8), IR(34759, 17), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReservedWritePipe, true, true, IR(288, 8), IR(34776, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReserveReadPipePackets, true, true, IR(215, 6), IR(34712, 23), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReserveWritePipePackets, true, true, IR(215, 6), IR(34735, 24), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCommitReadPipe, false, false, IR(296, 4), IR(26280, 15), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCommitWritePipe, false, false, IR(296, 4), IR(26295, 16), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpIsValidReserveId, true, true, IR(160, 3), IR(32842, 17), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetNumPipePackets, true, true, IR(130, 5), IR(29091, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetMaxPipePackets, true, true, IR(130, 5), IR(29073, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupReserveReadPipePackets, true, true, IR(300, 7), IR(30353, 28), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupReserveWritePipePackets, true, true, IR(300, 7), IR(30381, 29), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupCommitReadPipe, false, false, IR(307, 5), IR(29213, 20), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupCommitWritePipe, false, false, IR(307, 5), IR(29233, 21), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpEnqueueMarker, true, true, IR(215, 6), IR(27972, 14), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpEnqueueKernel, true, true, IR(312, 13), IR(27958, 14), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelNDrangeSubGroupCount, true, true, IR(325, 7), IR(28980, 30), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelNDrangeMaxSubGroupSize, true, true, IR(325, 7), IR(28948, 32), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelWorkGroupSize, true, true, IR(215, 6), IR(29050, 23), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelPreferredWorkGroupSizeMultiple, true, true, IR(215, 6), IR(29010, 40), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpRetainEvent, false, false, IR(10, 1), IR(34813, 12), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpReleaseEvent, false, false, IR(10, 1), IR(34603, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpCreateUserEvent, true, true, IR(39, 2), IR(27661, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpIsValidEvent, true, true, IR(160, 3), IR(32829, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpSetUserEventStatus, false, false, IR(36, 2), IR(35171, 19), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpCaptureEventProfilingInfo, false, false, IR(33, 3), IR(26231, 26), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetDefaultQueue, true, true, IR(39, 2), IR(28872, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpBuildNDRange, true, true, IR(130, 5), IR(26207, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpImageSparseSampleImplicitLod, true, true, IR(185, 5), IR(32487, 29), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleExplicitLod, true, true, IR(190, 5), IR(32458, 29), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleDrefImplicitLod, true, true, IR(195, 6), IR(32425, 33), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleDrefExplicitLod, true, true, IR(201, 6), IR(32392, 33), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjImplicitLod, true, true, IR(185, 5), IR(32623, 33), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjExplicitLod, true, true, IR(190, 5), IR(32590, 33), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjDrefImplicitLod, true, true, IR(195, 6), IR(32553, 37), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjDrefExplicitLod, true, true, IR(201, 6), IR(32516, 37), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseFetch, true, true, IR(185, 5), IR(32341, 17), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseGather, true, true, IR(195, 6), IR(32358, 18), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseDrefGather, true, true, IR(195, 6), IR(32319, 22), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseTexelsResident, true, true, IR(160, 3), IR(32656, 26), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpNoLine, false, false, IR(0, 0), IR(33263, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpAtomicFlagTestAndSet, true, true, IR(226, 5), IR(25861, 21), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicFlagClear, false, false, IR(332, 3), IR(25845, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpImageSparseRead, true, true, IR(185, 5), IR(32376, 16), IR(0, 0), IR(211, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpSizeOf, true, true, IR(160, 3), IR(35257, 7), IR(0, 0), IR(1, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpTypePipeStorage, true, false, IR(68, 1), IR(41926, 16), IR(0, 0), IR(212, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantPipeStorage, true, true, IR(335, 5), IR(26563, 20), IR(0, 0), IR(212, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCreatePipeFromPipeStorage, true, true, IR(160, 3), IR(27595, 26), IR(0, 0), IR(212, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetKernelLocalSizeForSubgroupCount, true, true, IR(325, 7), IR(28888, 35), IR(0, 0), IR(146, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelMaxNumSubgroups, true, true, IR(215, 6), IR(28923, 25), IR(0, 0), IR(146, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpTypeNamedBarrier, true, false, IR(68, 1), IR(41864, 17), IR(0, 0), IR(213, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpNamedBarrierInitialize, true, true, IR(160, 3), IR(33240, 23), IR(0, 0), IR(213, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpMemoryNamedBarrier, false, false, IR(332, 3), IR(33200, 19), IR(0, 0), IR(213, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpModuleProcessed, false, false, IR(11, 1), IR(33219, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpExecutionModeId, false, false, IR(65, 2), IR(28072, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,2), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpDecorateId, false, false, IR(163, 2), IR(27765, 11), IR(0, 0), IR(1, 0), IR(150, 1), SPV_SPIRV_VERSION_WORD(1,2), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupNonUniformElect, true, true, IR(340, 3), IR(29816, 21), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAll, true, true, IR(274, 4), IR(29502, 19), IR(0, 0), IR(214, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAny, true, true, IR(274, 4), IR(29545, 19), IR(0, 0), IR(214, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAllEqual, true, true, IR(274, 4), IR(29521, 24), IR(0, 0), IR(214, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBroadcast, true, true, IR(278, 5), IR(29761, 25), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBroadcastFirst, true, true, IR(274, 4), IR(29786, 30), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallot, true, true, IR(274, 4), IR(9214, 22), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformInverseBallot, true, true, IR(274, 4), IR(29957, 29), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotBitExtract, true, true, IR(278, 5), IR(29594, 32), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotBitCount, true, true, IR(283, 5), IR(29564, 30), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotFindLSB, true, true, IR(274, 4), IR(29626, 29), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotFindMSB, true, true, IR(274, 4), IR(29655, 29), IR(0, 0), IR(215, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffle, true, true, IR(278, 5), IR(9335, 23), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleXor, true, true, IR(278, 5), IR(30287, 26), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleUp, true, true, IR(278, 5), IR(30262, 25), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleDown, true, true, IR(278, 5), IR(30235, 27), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformIAdd, true, true, IR(343, 6), IR(29917, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFAdd, true, true, IR(343, 6), IR(29837, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformIMul, true, true, IR(343, 6), IR(29937, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMul, true, true, IR(343, 6), IR(29897, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformSMin, true, true, IR(343, 6), IR(30215, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformUMin, true, true, IR(343, 6), IR(30333, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMin, true, true, IR(343, 6), IR(29877, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformSMax, true, true, IR(343, 6), IR(30195, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformUMax, true, true, IR(343, 6), IR(30313, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMax, true, true, IR(343, 6), IR(29857, 20), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseAnd, true, true, IR(343, 6), IR(29684, 26), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseOr, true, true, IR(343, 6), IR(29710, 25), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseXor, true, true, IR(343, 6), IR(29735, 26), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalAnd, true, true, IR(343, 6), IR(29986, 26), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalOr, true, true, IR(343, 6), IR(30012, 25), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalXor, true, true, IR(343, 6), IR(30037, 26), IR(0, 0), IR(218, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadBroadcast, true, true, IR(278, 5), IR(30142, 29), IR(0, 0), IR(221, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadSwap, true, true, IR(278, 5), IR(30171, 24), IR(0, 0), IR(221, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpCopyLogical, true, true, IR(160, 3), IR(27545, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpPtrEqual, true, true, IR(172, 4), IR(33399, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrNotEqual, true, true, IR(172, 4), IR(33408, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrDiff, true, true, IR(172, 4), IR(33391, 8), IR(0, 0), IR(222, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpColorAttachmentReadEXT, true, true, IR(349, 4), IR(26257, 23), IR(0, 0), IR(138, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpDepthAttachmentReadEXT, true, true, IR(353, 3), IR(27828, 23), IR(0, 0), IR(147, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpStencilAttachmentReadEXT, true, true, IR(353, 3), IR(35481, 25), IR(0, 0), IR(148, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpTerminateInvocation, false, false, IR(0, 0), IR(41121, 20), IR(0, 0), IR(3, 1), IR(160, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpTypeUntypedPointerKHR, true, false, IR(356, 2), IR(42134, 22), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpUntypedVariableKHR, true, true, IR(358, 5), IR(42624, 19), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedAccessChainKHR, true, true, IR(151, 5), IR(42473, 22), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedInBoundsAccessChainKHR, true, true, IR(151, 5), IR(42517, 30), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpSubgroupBallotKHR, true, true, IR(160, 3), IR(12284, 18), IR(0, 0), IR(226, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupFirstInvocationKHR, true, true, IR(160, 3), IR(40579, 27), IR(0, 0), IR(226, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpUntypedPtrAccessChainKHR, true, true, IR(363, 6), IR(42599, 25), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedInBoundsPtrAccessChainKHR, true, true, IR(363, 6), IR(42547, 33), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedArrayLengthKHR, true, true, IR(369, 5), IR(42495, 22), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedPrefetchKHR, false, false, IR(374, 5), IR(42580, 19), IR(0, 0), IR(225, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpSubgroupAllKHR, true, true, IR(160, 3), IR(35687, 15), IR(0, 0), IR(227, 1), IR(38, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupAnyKHR, true, true, IR(160, 3), IR(35702, 15), IR(0, 0), IR(227, 1), IR(38, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupAllEqualKHR, true, true, IR(160, 3), IR(35667, 20), IR(0, 0), IR(227, 1), IR(38, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupNonUniformRotateKHR, true, true, IR(379, 6), IR(9310, 25), IR(0, 0), IR(228, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupReadInvocationKHR, true, true, IR(172, 4), IR(40730, 26), IR(0, 0), IR(226, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpExtInstWithForwardRefsKHR, true, true, IR(385, 5), IR(28120, 26), IR(0, 0), IR(1, 0), IR(161, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpTraceRayKHR, false, false, IR(390, 11), IR(41194, 12), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpExecuteCallableKHR, false, false, IR(36, 2), IR(28021, 19), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToAccelerationStructureKHR, true, true, IR(160, 3), IR(26849, 35), IR(0, 0), IR(229, 2), IR(162, 2), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIgnoreIntersectionKHR, false, false, IR(0, 0), IR(31668, 22), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTerminateRayKHR, false, false, IR(0, 0), IR(41141, 16), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSDot, true, true, IR(401, 5), IR(34876, 5), IR(93, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDot, true, true, IR(401, 5), IR(42305, 5), IR(94, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSUDot, true, true, IR(401, 5), IR(35001, 6), IR(95, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSDotAccSat, true, true, IR(406, 6), IR(34881, 11), IR(96, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDotAccSat, true, true, IR(406, 6), IR(42310, 11), IR(97, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSUDotAccSat, true, true, IR(406, 6), IR(35007, 12), IR(98, 1), IR(231, 1), IR(117, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpTypeCooperativeMatrixKHR, true, false, IR(412, 6), IR(41678, 25), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeMatrixLoadKHR, true, true, IR(418, 6), IR(27053, 25), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixStoreKHR, false, false, IR(424, 5), IR(27243, 26), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixMulAddKHR, true, true, IR(429, 6), IR(27132, 27), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpCooperativeMatrixLengthKHR, true, true, IR(160, 3), IR(27000, 27), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpConstantCompositeReplicateEXT, true, true, IR(160, 3), IR(26477, 30), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCompositeReplicateEXT, true, true, IR(160, 3), IR(35374, 34), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpCompositeConstructReplicateEXT, true, true, IR(160, 3), IR(26363, 31), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpTypeRayQueryKHR, true, false, IR(68, 1), IR(41964, 16), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpRayQueryInitializeKHR, false, false, IR(435, 8), IR(34456, 22), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryTerminateKHR, false, false, IR(10, 1), IR(34538, 21), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGenerateIntersectionKHR, false, false, IR(36, 2), IR(33482, 32), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryConfirmIntersectionKHR, false, false, IR(10, 1), IR(33451, 31), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryProceedKHR, true, true, IR(160, 3), IR(34519, 19), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTypeKHR, true, true, IR(172, 4), IR(34279, 31), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpImageSampleWeightedQCOM, true, true, IR(130, 5), IR(32295, 24), IR(0, 0), IR(234, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBoxFilterQCOM, true, true, IR(130, 5), IR(31873, 19), IR(0, 0), IR(235, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchSSDQCOM, true, true, IR(325, 7), IR(31792, 23), IR(0, 0), IR(236, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchSADQCOM, true, true, IR(325, 7), IR(31769, 23), IR(0, 0), IR(236, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchWindowSSDQCOM, true, true, IR(325, 7), IR(31844, 29), IR(0, 0), IR(237, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchWindowSADQCOM, true, true, IR(325, 7), IR(31815, 29), IR(0, 0), IR(237, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchGatherSSDQCOM, true, true, IR(325, 7), IR(31740, 29), IR(0, 0), IR(237, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchGatherSADQCOM, true, true, IR(325, 7), IR(31711, 29), IR(0, 0), IR(237, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpGroupIAddNonUniformAMD, true, true, IR(283, 5), IR(29390, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFAddNonUniformAMD, true, true, IR(283, 5), IR(29278, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMinNonUniformAMD, true, true, IR(283, 5), IR(29344, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMinNonUniformAMD, true, true, IR(283, 5), IR(30519, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMinNonUniformAMD, true, true, IR(283, 5), IR(30453, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMaxNonUniformAMD, true, true, IR(283, 5), IR(29311, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMaxNonUniformAMD, true, true, IR(283, 5), IR(30486, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMaxNonUniformAMD, true, true, IR(283, 5), IR(30420, 23), IR(0, 0), IR(210, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpFragmentMaskFetchAMD, true, true, IR(172, 4), IR(28687, 21), IR(0, 0), IR(238, 1), IR(54, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFragmentFetchAMD, true, true, IR(130, 5), IR(28670, 17), IR(0, 0), IR(238, 1), IR(54, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReadClockKHR, true, true, IR(340, 3), IR(34559, 13), IR(0, 0), IR(239, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAllocateNodePayloadsAMDX, true, true, IR(278, 5), IR(24648, 25), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpEnqueueNodePayloadsAMDX, false, false, IR(10, 1), IR(27986, 24), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeNodePayloadArrayAMDX, true, false, IR(87, 2), IR(41881, 25), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFinishWritingNodePayloadAMDX, true, true, IR(160, 3), IR(28470, 29), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpNodePayloadArrayLengthAMDX, true, true, IR(160, 3), IR(33270, 27), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIsNodePayloadValidAMDX, true, true, IR(172, 4), IR(32797, 23), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConstantStringAMDX, true, false, IR(50, 2), IR(26599, 19), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSpecConstantStringAMDX, true, false, IR(50, 2), IR(35441, 23), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpGroupNonUniformQuadAllKHR, true, true, IR(160, 3), IR(30090, 26), IR(0, 0), IR(155, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadAnyKHR, true, true, IR(160, 3), IR(30116, 26), IR(0, 0), IR(155, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpHitObjectRecordHitMotionNV, false, false, IR(443, 14), IR(31329, 27), IR(0, 0), IR(240, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitWithIndexMotionNV, false, false, IR(457, 13), IR(31377, 36), IR(0, 0), IR(240, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissMotionNV, false, false, IR(470, 7), IR(31443, 28), IR(0, 0), IR(240, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldToObjectNV, true, true, IR(160, 3), IR(31181, 28), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectToWorldNV, true, true, IR(160, 3), IR(30880, 28), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayDirectionNV, true, true, IR(160, 3), IR(30817, 33), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayOriginNV, true, true, IR(160, 3), IR(30850, 30), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayMotionNV, false, false, IR(457, 13), IR(31493, 26), IR(0, 0), IR(240, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderRecordBufferHandleNV, true, true, IR(160, 3), IR(31025, 39), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderBindingTableRecordIndexNV, true, true, IR(160, 3), IR(30981, 44), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordEmptyNV, false, false, IR(10, 1), IR(31306, 23), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayNV, false, false, IR(477, 12), IR(31519, 20), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitNV, false, false, IR(457, 13), IR(31356, 21), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitWithIndexNV, false, false, IR(477, 12), IR(31413, 30), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissNV, false, false, IR(489, 6), IR(31471, 22), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectExecuteShaderNV, false, false, IR(36, 2), IR(30558, 25), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetCurrentTimeNV, true, true, IR(160, 3), IR(30632, 26), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetAttributesNV, false, false, IR(36, 2), IR(30583, 25), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetHitKindNV, true, true, IR(160, 3), IR(30686, 22), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetPrimitiveIndexNV, true, true, IR(160, 3), IR(30908, 29), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetGeometryIndexNV, true, true, IR(160, 3), IR(30658, 28), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceIdNV, true, true, IR(160, 3), IR(30742, 25), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceCustomIndexNV, true, true, IR(160, 3), IR(30708, 34), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayDirectionNV, true, true, IR(160, 3), IR(31120, 32), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayOriginNV, true, true, IR(160, 3), IR(31152, 29), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMaxNV, true, true, IR(160, 3), IR(30937, 22), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMinNV, true, true, IR(160, 3), IR(30959, 22), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsEmptyNV, true, true, IR(160, 3), IR(31209, 19), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsHitNV, true, true, IR(160, 3), IR(31228, 17), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsMissNV, true, true, IR(160, 3), IR(31265, 18), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHitObjectNV, false, false, IR(495, 3), IR(34640, 29), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHintNV, false, false, IR(36, 2), IR(34616, 24), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeHitObjectNV, true, false, IR(68, 1), IR(41819, 16), IR(0, 0), IR(117, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpImageSampleFootprintNV, true, true, IR(498, 7), IR(32133, 23), IR(0, 0), IR(242, 1), IR(67, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpTypeCooperativeVectorNV, true, false, IR(89, 3), IR(41727, 24), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeVectorMatrixMulNV, true, true, IR(505, 13), IR(27410, 29), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorOuterProductAccumulateNV, false, false, IR(518, 7), IR(27439, 42), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorReduceSumAccumulateNV, false, false, IR(33, 3), IR(27481, 39), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorMatrixMulAddNV, true, true, IR(525, 16), IR(27378, 32), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixConvertNV, true, true, IR(160, 3), IR(26973, 27), IR(0, 0), IR(245, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpEmitMeshTasksEXT, false, false, IR(541, 4), IR(27855, 17), IR(0, 0), IR(53, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSetMeshOutputsEXT, false, false, IR(36, 2), IR(35153, 18), IR(0, 0), IR(53, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpGroupNonUniformPartitionNV, true, true, IR(160, 3), IR(30063, 27), IR(0, 0), IR(176, 1), IR(70, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpWritePackedPrimitiveIndices4x8NV, false, false, IR(36, 2), IR(42757, 33), IR(0, 0), IR(50, 1), IR(18, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFetchMicroTriangleVertexPositionNV, true, true, IR(325, 7), IR(28435, 35), IR(0, 0), IR(246, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFetchMicroTriangleVertexBarycentricNV, true, true, IR(325, 7), IR(28397, 38), IR(0, 0), IR(246, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorLoadNV, true, true, IR(545, 5), IR(27354, 24), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeVectorStoreNV, false, false, IR(550, 4), IR(27520, 25), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpReportIntersectionKHR, true, true, IR(172, 4), IR(34669, 22), IR(99, 1), IR(54, 2), IR(164, 2), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIgnoreIntersectionNV, false, false, IR(0, 0), IR(31690, 21), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTerminateRayNV, false, false, IR(0, 0), IR(41157, 15), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceNV, false, false, IR(390, 11), IR(41186, 8), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceMotionNV, false, false, IR(477, 12), IR(41172, 14), IR(0, 0), IR(57, 1), IR(27, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceRayMotionNV, false, false, IR(477, 12), IR(41206, 17), IR(0, 0), IR(57, 1), IR(27, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTriangleVertexPositionsKHR, true, true, IR(172, 4), IR(34229, 50), IR(0, 0), IR(247, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeAccelerationStructureKHR, true, false, IR(68, 1), IR(41233, 29), IR(100, 1), IR(248, 4), IR(166, 4), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpExecuteCallableNV, false, false, IR(36, 2), IR(28040, 18), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetClusterIdNV, true, true, IR(172, 4), IR(33514, 23), IR(0, 0), IR(64, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetClusterIdNV, true, true, IR(160, 3), IR(30608, 24), IR(0, 0), IR(64, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeCooperativeMatrixNV, true, false, IR(554, 5), IR(41703, 24), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeMatrixLoadNV, true, true, IR(559, 6), IR(27078, 24), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixStoreNV, false, false, IR(565, 5), IR(27269, 25), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixMulAddNV, true, true, IR(130, 5), IR(27159, 26), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixLengthNV, true, true, IR(160, 3), IR(27027, 26), IR(0, 0), IR(252, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpBeginInvocationInterlockEXT, false, false, IR(0, 0), IR(26024, 28), IR(0, 0), IR(253, 3), IR(75, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpEndInvocationInterlockEXT, false, false, IR(0, 0), IR(27900, 26), IR(0, 0), IR(253, 3), IR(75, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixReduceNV, true, true, IR(570, 5), IR(27217, 26), IR(0, 0), IR(256, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpCooperativeMatrixLoadTensorNV, true, true, IR(575, 7), IR(27102, 30), IR(0, 0), IR(193, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixStoreTensorNV, false, false, IR(582, 5), IR(27294, 31), IR(0, 0), IR(193, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixPerElementOpNV, true, true, IR(151, 5), IR(27185, 32), IR(0, 0), IR(257, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpTypeTensorLayoutNV, true, false, IR(89, 3), IR(42098, 19), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeTensorViewNV, true, false, IR(587, 4), IR(42117, 17), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCreateTensorLayoutNV, true, true, IR(39, 2), IR(27621, 21), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetDimensionNV, true, true, IR(122, 4), IR(40983, 27), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetStrideNV, true, true, IR(122, 4), IR(41010, 24), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSliceNV, true, true, IR(122, 4), IR(41034, 20), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetClampValueNV, true, true, IR(172, 4), IR(40955, 28), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCreateTensorViewNV, true, true, IR(39, 2), IR(27642, 19), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetDimensionNV, true, true, IR(122, 4), IR(41074, 25), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetStrideNV, true, true, IR(122, 4), IR(41099, 22), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpDemoteToHelperInvocation, false, false, IR(0, 0), IR(7936, 25), IR(45, 1), IR(259, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpIsHelperInvocationEXT, true, true, IR(39, 2), IR(32763, 22), IR(0, 0), IR(259, 1), IR(76, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetClipNV, true, true, IR(325, 7), IR(41054, 20), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetBlockSizeNV, true, true, IR(122, 4), IR(40928, 27), IR(0, 0), IR(258, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixTransposeNV, true, true, IR(160, 3), IR(27325, 29), IR(0, 0), IR(245, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToImageNV, true, true, IR(160, 3), IR(26896, 18), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToSamplerNV, true, true, IR(160, 3), IR(26953, 20), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertImageToUNV, true, true, IR(160, 3), IR(26760, 18), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertSamplerToUNV, true, true, IR(160, 3), IR(26829, 20), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToSampledImageNV, true, true, IR(160, 3), IR(26928, 25), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertSampledImageToUNV, true, true, IR(160, 3), IR(26804, 25), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSamplerImageAddressingModeNV, false, false, IR(0, 1), IR(35056, 29), IR(0, 0), IR(118, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRawAccessChainNV, true, true, IR(591, 7), IR(33434, 17), IR(0, 0), IR(182, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpRayQueryGetIntersectionSpherePositionNV, true, true, IR(172, 4), IR(34123, 40), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionSphereRadiusNV, true, true, IR(172, 4), IR(34163, 38), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSPositionsNV, true, true, IR(172, 4), IR(33883, 38), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSRadiiNV, true, true, IR(172, 4), IR(33921, 34), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSHitValueNV, true, true, IR(172, 4), IR(33846, 37), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetSpherePositionNV, true, true, IR(160, 3), IR(31064, 29), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetSphereRadiusNV, true, true, IR(160, 3), IR(31093, 27), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetLSSPositionsNV, true, true, IR(160, 3), IR(30767, 27), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetLSSRadiiNV, true, true, IR(160, 3), IR(30794, 23), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsSphereHitNV, true, true, IR(160, 3), IR(31283, 23), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsLSSHitNV, true, true, IR(160, 3), IR(31245, 20), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryIsSphereHitNV, true, true, IR(172, 4), IR(34497, 22), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryIsLSSHitNV, true, true, IR(172, 4), IR(34478, 19), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSubgroupShuffleINTEL, true, true, IR(172, 4), IR(12469, 21), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleDownINTEL, true, true, IR(130, 5), IR(40756, 25), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleUpINTEL, true, true, IR(130, 5), IR(40781, 23), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleXorINTEL, true, true, IR(172, 4), IR(40804, 24), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupBlockReadINTEL, true, true, IR(160, 3), IR(40532, 23), IR(0, 0), IR(261, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupBlockWriteINTEL, false, false, IR(36, 2), IR(40555, 24), IR(0, 0), IR(261, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageBlockReadINTEL, true, true, IR(172, 4), IR(40606, 28), IR(0, 0), IR(262, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageBlockWriteINTEL, false, false, IR(33, 3), IR(40634, 29), IR(0, 0), IR(262, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageMediaBlockReadINTEL, true, true, IR(215, 6), IR(40663, 33), IR(0, 0), IR(263, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageMediaBlockWriteINTEL, false, false, IR(598, 5), IR(40696, 34), IR(0, 0), IR(263, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpUCountLeadingZerosINTEL, true, true, IR(160, 3), IR(42251, 24), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUCountTrailingZerosINTEL, true, true, IR(160, 3), IR(42275, 25), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAbsISubINTEL, true, true, IR(172, 4), IR(24541, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAbsUSubINTEL, true, true, IR(172, 4), IR(24554, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAddSatINTEL, true, true, IR(172, 4), IR(31554, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAddSatINTEL, true, true, IR(172, 4), IR(42194, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAverageINTEL, true, true, IR(172, 4), IR(31567, 14), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAverageINTEL, true, true, IR(172, 4), IR(42207, 14), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAverageRoundedINTEL, true, true, IR(172, 4), IR(31581, 21), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAverageRoundedINTEL, true, true, IR(172, 4), IR(42221, 21), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpISubSatINTEL, true, true, IR(172, 4), IR(31655, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUSubSatINTEL, true, true, IR(172, 4), IR(42432, 13), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIMul32x16INTEL, true, true, IR(172, 4), IR(31614, 15), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUMul32x16INTEL, true, true, IR(172, 4), IR(42404, 15), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConstantFunctionPointerINTEL, true, true, IR(160, 3), IR(26521, 29), IR(0, 0), IR(191, 1), IR(90, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFunctionPointerCallINTEL, true, true, IR(107, 3), IR(28751, 25), IR(0, 0), IR(191, 1), IR(90, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmTargetINTEL, true, false, IR(50, 2), IR(25701, 15), IR(0, 0), IR(121, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmINTEL, true, true, IR(603, 6), IR(7137, 9), IR(0, 0), IR(121, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmCallINTEL, true, true, IR(122, 4), IR(25688, 13), IR(0, 0), IR(121, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAtomicFMinEXT, true, true, IR(235, 6), IR(25831, 14), IR(0, 0), IR(265, 4), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicFMaxEXT, true, true, IR(235, 6), IR(25817, 14), IR(0, 0), IR(265, 4), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAssumeTrueKHR, false, false, IR(10, 1), IR(25716, 14), IR(0, 0), IR(269, 1), IR(94, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpExpectKHR, true, true, IR(172, 4), IR(28088, 10), IR(0, 0), IR(269, 1), IR(94, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpDecorateString, false, false, IR(163, 2), IR(27776, 15), IR(101, 1), IR(1, 0), IR(170, 2), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpMemberDecorateString, false, false, IR(165, 3), IR(33115, 21), IR(102, 1), IR(1, 0), IR(170, 2), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpVmeImageINTEL, true, true, IR(172, 4), IR(42743, 14), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeVmeImageINTEL, true, false, IR(87, 2), IR(42167, 18), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImePayloadINTEL, true, false, IR(68, 1), IR(41337, 23), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcRefPayloadINTEL, true, false, IR(68, 1), IR(41556, 23), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcSicPayloadINTEL, true, false, IR(68, 1), IR(41601, 23), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcMcePayloadINTEL, true, false, IR(68, 1), IR(41511, 23), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcMceResultINTEL, true, false, IR(68, 1), IR(41534, 22), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultINTEL, true, false, IR(68, 1), IR(41404, 22), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultSingleReferenceStreamoutINTEL, true, false, IR(68, 1), IR(41426, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultDualReferenceStreamoutINTEL, true, false, IR(68, 1), IR(41360, 44), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeSingleReferenceStreaminINTEL, true, false, IR(68, 1), IR(41472, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeDualReferenceStreaminINTEL, true, false, IR(68, 1), IR(41300, 37), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcRefResultINTEL, true, false, IR(68, 1), IR(41579, 22), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcSicResultINTEL, true, false, IR(68, 1), IR(41624, 22), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL, true, true, IR(172, 4), IR(37803, 60), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL, true, true, IR(172, 4), IR(38756, 53), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterShapePenaltyINTEL, true, true, IR(172, 4), IR(37970, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterShapePenaltyINTEL, true, true, IR(172, 4), IR(38853, 40), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL, true, true, IR(172, 4), IR(37863, 51), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterDirectionPenaltyINTEL, true, true, IR(172, 4), IR(38809, 44), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL, true, true, IR(172, 4), IR(38123, 51), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL, true, true, IR(172, 4), IR(37914, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL, true, true, IR(39, 2), IR(37753, 50), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL, true, true, IR(39, 2), IR(38223, 52), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL, true, true, IR(39, 2), IR(38174, 49), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetMotionVectorCostFunctionINTEL, true, true, IR(215, 6), IR(38893, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL, true, true, IR(172, 4), IR(38073, 50), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL, true, true, IR(39, 2), IR(38275, 51), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL, true, true, IR(39, 2), IR(38017, 56), IR(0, 0), IR(273, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetAcOnlyHaarINTEL, true, true, IR(160, 3), IR(38662, 33), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL, true, true, IR(172, 4), IR(39001, 52), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL, true, true, IR(172, 4), IR(38940, 61), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL, true, true, IR(130, 5), IR(38695, 61), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToImePayloadINTEL, true, true, IR(160, 3), IR(37479, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToImeResultINTEL, true, true, IR(160, 3), IR(37518, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToRefPayloadINTEL, true, true, IR(160, 3), IR(37556, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToRefResultINTEL, true, true, IR(160, 3), IR(37595, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToSicPayloadINTEL, true, true, IR(160, 3), IR(37633, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToSicResultINTEL, true, true, IR(160, 3), IR(37672, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetMotionVectorsINTEL, true, true, IR(160, 3), IR(38626, 36), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterDistortionsINTEL, true, true, IR(160, 3), IR(38364, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetBestInterDistortionsINTEL, true, true, IR(160, 3), IR(37710, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMajorShapeINTEL, true, true, IR(160, 3), IR(38403, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMinorShapeINTEL, true, true, IR(160, 3), IR(38441, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterDirectionsINTEL, true, true, IR(160, 3), IR(38326, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMotionVectorCountINTEL, true, true, IR(160, 3), IR(38479, 45), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterReferenceIdsINTEL, true, true, IR(160, 3), IR(38524, 40), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL, true, true, IR(130, 5), IR(38564, 62), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeInitializeINTEL, true, true, IR(130, 5), IR(37068, 30), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetSingleReferenceINTEL, true, true, IR(130, 5), IR(37264, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetDualReferenceINTEL, true, true, IR(215, 6), IR(37131, 36), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeRefWindowSizeINTEL, true, true, IR(172, 4), IR(37098, 33), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeAdjustRefOffsetINTEL, true, true, IR(215, 6), IR(35777, 35), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(35812, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetMaxMotionVectorCountINTEL, true, true, IR(172, 4), IR(37221, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetUnidirectionalMixDisableINTEL, true, true, IR(160, 3), IR(37302, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetEarlySearchTerminationThresholdINTEL, true, true, IR(172, 4), IR(37167, 54), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetWeightedSadINTEL, true, true, IR(172, 4), IR(37349, 34), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(36097, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(35889, 45), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL, true, true, IR(215, 6), IR(36144, 55), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL, true, true, IR(325, 7), IR(35934, 53), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL, true, true, IR(130, 5), IR(36257, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL, true, true, IR(215, 6), IR(36043, 54), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL, true, true, IR(215, 6), IR(36199, 58), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL, true, true, IR(325, 7), IR(35987, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeConvertToMceResultINTEL, true, true, IR(160, 3), IR(35851, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetSingleReferenceStreaminINTEL, true, true, IR(160, 3), IR(36393, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetDualReferenceStreaminINTEL, true, true, IR(160, 3), IR(36349, 44), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeStripSingleReferenceStreamoutINTEL, true, true, IR(160, 3), IR(37430, 49), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeStripDualReferenceStreamoutINTEL, true, true, IR(160, 3), IR(37383, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL, true, true, IR(172, 4), IR(36708, 70), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL, true, true, IR(172, 4), IR(36640, 68), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL, true, true, IR(172, 4), IR(36778, 69), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL, true, true, IR(130, 5), IR(36505, 68), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL, true, true, IR(130, 5), IR(36439, 66), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL, true, true, IR(130, 5), IR(36573, 67), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetBorderReachedINTEL, true, true, IR(172, 4), IR(36313, 36), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetTruncatedSearchIndicationINTEL, true, true, IR(160, 3), IR(36847, 48), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL, true, true, IR(160, 3), IR(36895, 59), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL, true, true, IR(160, 3), IR(37010, 58), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL, true, true, IR(160, 3), IR(36954, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcFmeInitializeINTEL, true, true, IR(609, 9), IR(35747, 30), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcBmeInitializeINTEL, true, true, IR(618, 10), IR(35717, 30), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(39053, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefSetBidirectionalMixDisableINTEL, true, true, IR(160, 3), IR(39324, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefSetBilinearFilterEnableINTEL, true, true, IR(160, 3), IR(39370, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(39277, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(39130, 45), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithMultiReferenceINTEL, true, true, IR(130, 5), IR(39175, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL, true, true, IR(215, 6), IR(39221, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefConvertToMceResultINTEL, true, true, IR(160, 3), IR(39092, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicInitializeINTEL, true, true, IR(160, 3), IR(40199, 30), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureSkcINTEL, true, true, IR(288, 8), IR(39491, 32), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureIpeLumaINTEL, true, true, IR(618, 10), IR(39455, 36), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureIpeLumaChromaINTEL, true, true, IR(628, 13), IR(39413, 42), IR(0, 0), IR(273, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetMotionVectorMaskINTEL, true, true, IR(172, 4), IR(40021, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(39523, 39), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraLumaShapePenaltyINTEL, true, true, IR(172, 4), IR(40413, 44), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraLumaModeCostFunctionINTEL, true, true, IR(215, 6), IR(40365, 48), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraChromaModeCostFunctionINTEL, true, true, IR(172, 4), IR(40315, 50), IR(0, 0), IR(273, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetBilinearFilterEnableINTEL, true, true, IR(160, 3), IR(40229, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetSkcForwardTransformEnableINTEL, true, true, IR(172, 4), IR(40457, 48), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetBlockBasedRawSkipSadINTEL, true, true, IR(172, 4), IR(40272, 43), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateIpeINTEL, true, true, IR(172, 4), IR(39600, 31), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(39778, 47), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(39631, 45), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithMultiReferenceINTEL, true, true, IR(130, 5), IR(39676, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL, true, true, IR(215, 6), IR(39722, 56), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConvertToMceResultINTEL, true, true, IR(160, 3), IR(39562, 38), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetIpeLumaShapeINTEL, true, true, IR(160, 3), IR(39986, 35), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetBestIpeLumaDistortionINTEL, true, true, IR(160, 3), IR(39871, 44), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetBestIpeChromaDistortionINTEL, true, true, IR(160, 3), IR(39825, 46), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedIpeLumaModesINTEL, true, true, IR(160, 3), IR(40060, 41), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetIpeChromaModeINTEL, true, true, IR(160, 3), IR(39950, 36), IR(0, 0), IR(273, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL, true, true, IR(160, 3), IR(40101, 50), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL, true, true, IR(160, 3), IR(40151, 48), IR(0, 0), IR(271, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetInterRawSadsINTEL, true, true, IR(160, 3), IR(39915, 35), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpVariableLengthArrayINTEL, true, true, IR(160, 3), IR(13283, 25), IR(0, 0), IR(275, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSaveMemoryINTEL, true, true, IR(39, 2), IR(35115, 16), IR(0, 0), IR(275, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpRestoreMemoryINTEL, false, false, IR(10, 1), IR(34794, 19), IR(0, 0), IR(275, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinCosPiINTEL, true, true, IR(641, 8), IR(25553, 28), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastINTEL, true, true, IR(641, 8), IR(24906, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastFromIntINTEL, true, true, IR(641, 8), IR(24875, 31), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastToIntINTEL, true, true, IR(641, 8), IR(24930, 29), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatAddINTEL, true, true, IR(649, 10), IR(24852, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSubINTEL, true, true, IR(649, 10), IR(25653, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatMulINTEL, true, true, IR(649, 10), IR(25383, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatDivINTEL, true, true, IR(649, 10), IR(25031, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatGTINTEL, true, true, IR(659, 6), IR(25195, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatGEINTEL, true, true, IR(659, 6), IR(25173, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLTINTEL, true, true, IR(659, 6), IR(25264, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLEINTEL, true, true, IR(659, 6), IR(25242, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatEQINTEL, true, true, IR(659, 6), IR(25054, 22), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatRecipINTEL, true, true, IR(641, 8), IR(25502, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatRSqrtINTEL, true, true, IR(641, 8), IR(25477, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCbrtINTEL, true, true, IR(641, 8), IR(24959, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatHypotINTEL, true, true, IR(649, 10), IR(25217, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSqrtINTEL, true, true, IR(641, 8), IR(25629, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLogINTEL, true, true, IR(641, 8), IR(25360, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog2INTEL, true, true, IR(641, 8), IR(25336, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog10INTEL, true, true, IR(641, 8), IR(25286, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog1pINTEL, true, true, IR(641, 8), IR(25311, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExpINTEL, true, true, IR(641, 8), IR(25125, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExp2INTEL, true, true, IR(641, 8), IR(25101, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExp10INTEL, true, true, IR(641, 8), IR(25076, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExpm1INTEL, true, true, IR(641, 8), IR(25148, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinINTEL, true, true, IR(641, 8), IR(25581, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCosINTEL, true, true, IR(641, 8), IR(24983, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinCosINTEL, true, true, IR(641, 8), IR(25527, 26), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinPiINTEL, true, true, IR(641, 8), IR(25604, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCosPiINTEL, true, true, IR(641, 8), IR(25006, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatASinINTEL, true, true, IR(641, 8), IR(24727, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatASinPiINTEL, true, true, IR(641, 8), IR(24751, 26), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatACosINTEL, true, true, IR(641, 8), IR(24677, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatACosPiINTEL, true, true, IR(641, 8), IR(24701, 26), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATanINTEL, true, true, IR(641, 8), IR(24802, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATanPiINTEL, true, true, IR(641, 8), IR(24826, 26), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATan2INTEL, true, true, IR(649, 10), IR(24777, 25), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowINTEL, true, true, IR(649, 10), IR(25406, 23), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowRINTEL, true, true, IR(649, 10), IR(25453, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowNINTEL, true, true, IR(649, 10), IR(25429, 24), IR(0, 0), IR(276, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpLoopControlINTEL, false, false, IR(18, 1), IR(32982, 17), IR(0, 0), IR(277, 1), IR(101, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAliasDomainDeclINTEL, true, false, IR(665, 2), IR(24579, 21), IR(0, 0), IR(127, 1), IR(108, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAliasScopeDeclINTEL, true, false, IR(667, 3), IR(24600, 20), IR(0, 0), IR(127, 1), IR(108, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAliasScopeListDeclINTEL, true, false, IR(92, 2), IR(24620, 24), IR(0, 0), IR(127, 1), IR(108, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSqrtINTEL, true, true, IR(641, 8), IR(28655, 15), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedRecipINTEL, true, true, IR(641, 8), IR(28557, 16), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedRsqrtINTEL, true, true, IR(641, 8), IR(28573, 16), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinINTEL, true, true, IR(641, 8), IR(28625, 14), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedCosINTEL, true, true, IR(641, 8), IR(28499, 14), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinCosINTEL, true, true, IR(641, 8), IR(28589, 17), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinPiINTEL, true, true, IR(641, 8), IR(28639, 16), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedCosPiINTEL, true, true, IR(641, 8), IR(28513, 16), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinCosPiINTEL, true, true, IR(641, 8), IR(28606, 19), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedLogINTEL, true, true, IR(641, 8), IR(28543, 14), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedExpINTEL, true, true, IR(641, 8), IR(28529, 14), IR(0, 0), IR(181, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpPtrCastToCrossWorkgroupINTEL, true, true, IR(160, 3), IR(33345, 29), IR(0, 0), IR(192, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpCrossWorkgroupCastToPtrINTEL, true, true, IR(160, 3), IR(27677, 29), IR(0, 0), IR(192, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpReadPipeBlockingINTEL, true, true, IR(172, 4), IR(34581, 22), IR(0, 0), IR(278, 1), IR(115, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpWritePipeBlockingINTEL, true, true, IR(172, 4), IR(42800, 23), IR(0, 0), IR(278, 1), IR(115, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpFPGARegINTEL, true, true, IR(160, 3), IR(8630, 13), IR(0, 0), IR(279, 1), IR(116, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetRayTMinKHR, true, true, IR(160, 3), IR(34373, 22), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetRayFlagsKHR, true, true, IR(160, 3), IR(34350, 23), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTKHR, true, true, IR(172, 4), IR(34201, 28), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceCustomIndexKHR, true, true, IR(172, 4), IR(33698, 46), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceIdKHR, true, true, IR(172, 4), IR(33744, 37), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR, true, true, IR(172, 4), IR(33781, 65), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionGeometryIndexKHR, true, true, IR(172, 4), IR(33658, 40), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionPrimitiveIndexKHR, true, true, IR(172, 4), IR(34082, 41), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionBarycentricsKHR, true, true, IR(172, 4), IR(33537, 39), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionFrontFaceKHR, true, true, IR(172, 4), IR(33622, 36), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionCandidateAABBOpaqueKHR, true, true, IR(160, 3), IR(33576, 46), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectRayDirectionKHR, true, true, IR(172, 4), IR(33955, 45), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectRayOriginKHR, true, true, IR(172, 4), IR(34000, 42), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetWorldRayDirectionKHR, true, true, IR(160, 3), IR(34395, 32), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetWorldRayOriginKHR, true, true, IR(160, 3), IR(34427, 29), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectToWorldKHR, true, true, IR(172, 4), IR(34042, 40), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionWorldToObjectKHR, true, true, IR(172, 4), IR(34310, 40), IR(0, 0), IR(185, 1), IR(45, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAtomicFAddEXT, true, true, IR(235, 6), IR(25803, 14), IR(0, 0), IR(280, 4), IR(123, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpTypeBufferSurfaceINTEL, true, false, IR(100, 2), IR(41655, 23), IR(0, 0), IR(119, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeStructContinuedINTEL, false, false, IR(670, 1), IR(42051, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantCompositeContinuedINTEL, false, false, IR(670, 1), IR(26445, 32), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCompositeContinuedINTEL, false, false, IR(670, 1), IR(35338, 36), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpCompositeConstructContinuedINTEL, true, true, IR(107, 3), IR(26330, 33), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpConvertFToBF16INTEL, true, true, IR(160, 3), IR(26716, 20), IR(0, 0), IR(285, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertBF16ToFINTEL, true, true, IR(160, 3), IR(26696, 20), IR(0, 0), IR(285, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpControlBarrierArriveINTEL, false, false, IR(221, 3), IR(26646, 26), IR(0, 0), IR(286, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpControlBarrierWaitINTEL, false, false, IR(221, 3), IR(26672, 24), IR(0, 0), IR(286, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpArithmeticFenceEXT, true, true, IR(160, 3), IR(7118, 19), IR(0, 0), IR(287, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpTaskSequenceCreateINTEL, true, true, IR(671, 7), IR(40858, 24), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceAsyncINTEL, false, false, IR(168, 2), IR(40835, 23), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceGetINTEL, true, true, IR(160, 3), IR(40882, 21), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceReleaseINTEL, false, false, IR(10, 1), IR(40903, 25), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeTaskSequenceINTEL, true, false, IR(68, 1), IR(42076, 22), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpSubgroupBlockPrefetchINTEL, false, false, IR(139, 3), IR(40505, 27), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadINTEL, false, false, IR(678, 10), IR(35519, 25), IR(0, 0), IR(103, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadTransformINTEL, false, false, IR(678, 10), IR(35544, 34), IR(0, 0), IR(290, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadTransposeINTEL, false, false, IR(678, 10), IR(35578, 34), IR(0, 0), IR(291, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockPrefetchINTEL, false, false, IR(688, 9), IR(35612, 29), IR(0, 0), IR(103, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockStoreINTEL, false, false, IR(678, 10), IR(35641, 26), IR(0, 0), IR(103, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupMatrixMultiplyAccumulateINTEL, true, true, IR(697, 7), IR(12431, 38), IR(0, 0), IR(292, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpBitwiseFunctionINTEL, true, true, IR(215, 6), IR(26140, 21), IR(0, 0), IR(293, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpGroupIMulKHR, true, true, IR(283, 5), IR(29413, 13), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMulKHR, true, true, IR(283, 5), IR(29367, 13), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseAndKHR, true, true, IR(283, 5), IR(29142, 19), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseOrKHR, true, true, IR(283, 5), IR(29161, 18), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseXorKHR, true, true, IR(283, 5), IR(29179, 19), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalAndKHR, true, true, IR(283, 5), IR(29426, 19), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalOrKHR, true, true, IR(283, 5), IR(29445, 18), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalXorKHR, true, true, IR(283, 5), IR(29463, 19), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpRoundFToTF32INTEL, true, true, IR(160, 3), IR(34844, 18), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpMaskedGatherINTEL, true, true, IR(704, 6), IR(33009, 18), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpMaskedScatterINTEL, false, false, IR(710, 4), IR(33027, 19), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
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
    {1,IR(374, 5),IR(9927, 7),IR(1, 0)}, // Kernel in nonsemantic_clspvreflection
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
    {23,IR(33, 3),IR(9964, 15),IR(1, 0)}, // LiteralSampler in nonsemantic_clspvreflection
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

static const std::array<NameValue, 425> kExtInstNames{{
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
    {IR(45216, 5), 17}, // Acos in glsl_std_450
    {IR(45247, 6), 23}, // Acosh in glsl_std_450
    {IR(45211, 5), 16}, // Asin in glsl_std_450
    {IR(45241, 6), 22}, // Asinh in glsl_std_450
    {IR(45221, 5), 18}, // Atan in glsl_std_450
    {IR(45259, 6), 25}, // Atan2 in glsl_std_450
    {IR(45253, 6), 24}, // Atanh in glsl_std_450
    {IR(45172, 5), 9}, // Ceil in glsl_std_450
    {IR(45203, 4), 14}, // Cos in glsl_std_450
    {IR(45231, 5), 20}, // Cosh in glsl_std_450
    {IR(45643, 6), 68}, // Cross in glsl_std_450
    {IR(45191, 8), 12}, // Degrees in glsl_std_450
    {IR(45304, 12), 33}, // Determinant in glsl_std_450
    {IR(45634, 9), 67}, // Distance in glsl_std_450
    {IR(45269, 4), 27}, // Exp in glsl_std_450
    {IR(45277, 5), 29}, // Exp2 in glsl_std_450
    {IR(45144, 5), 4}, // FAbs in glsl_std_450
    {IR(45376, 7), 43}, // FClamp in glsl_std_450
    {IR(45361, 5), 40}, // FMax in glsl_std_450
    {IR(45346, 5), 37}, // FMin in glsl_std_450
    {IR(45397, 5), 46}, // FMix in glsl_std_450
    {IR(45154, 6), 6}, // FSign in glsl_std_450
    {IR(45659, 12), 70}, // FaceForward in glsl_std_450
    {IR(45687, 9), 73}, // FindILsb in glsl_std_450
    {IR(45696, 9), 74}, // FindSMsb in glsl_std_450
    {IR(45705, 9), 75}, // FindUMsb in glsl_std_450
    {IR(45166, 6), 8}, // Floor in glsl_std_450
    {IR(45423, 4), 50}, // Fma in glsl_std_450
    {IR(45177, 6), 10}, // Fract in glsl_std_450
    {IR(45427, 6), 51}, // Frexp in glsl_std_450
    {IR(45433, 12), 52}, // FrexpStruct in glsl_std_450
    {IR(45402, 5), 47}, // IMix in glsl_std_450
    {IR(45714, 22), 76}, // InterpolateAtCentroid in glsl_std_450
    {IR(45756, 20), 78}, // InterpolateAtOffset in glsl_std_450
    {IR(45736, 20), 77}, // InterpolateAtSample in glsl_std_450
    {IR(45292, 12), 32}, // InverseSqrt in glsl_std_450
    {IR(45445, 6), 53}, // Ldexp in glsl_std_450
    {IR(45627, 7), 66}, // Length in glsl_std_450
    {IR(45273, 4), 28}, // Log in glsl_std_450
    {IR(45282, 5), 30}, // Log2 in glsl_std_450
    {IR(45316, 14), 34}, // MatrixInverse in glsl_std_450
    {IR(45330, 5), 35}, // Modf in glsl_std_450
    {IR(45335, 11), 36}, // ModfStruct in glsl_std_450
    {IR(45786, 7), 81}, // NClamp in glsl_std_450
    {IR(45781, 5), 80}, // NMax in glsl_std_450
    {IR(45776, 5), 79}, // NMin in glsl_std_450
    {IR(45649, 10), 69}, // Normalize in glsl_std_450
    {IR(45518, 15), 59}, // PackDouble2x32 in glsl_std_450
    {IR(45505, 13), 58}, // PackHalf2x16 in glsl_std_450
    {IR(45477, 14), 56}, // PackSnorm2x16 in glsl_std_450
    {IR(45451, 13), 54}, // PackSnorm4x8 in glsl_std_450
    {IR(45491, 14), 57}, // PackUnorm2x16 in glsl_std_450
    {IR(45464, 13), 55}, // PackUnorm4x8 in glsl_std_450
    {IR(45265, 4), 26}, // Pow in glsl_std_450
    {IR(45183, 8), 11}, // Radians in glsl_std_450
    {IR(45671, 8), 71}, // Reflect in glsl_std_450
    {IR(45679, 8), 72}, // Refract in glsl_std_450
    {IR(45122, 6), 1}, // Round in glsl_std_450
    {IR(45128, 10), 2}, // RoundEven in glsl_std_450
    {IR(45149, 5), 5}, // SAbs in glsl_std_450
    {IR(45390, 7), 45}, // SClamp in glsl_std_450
    {IR(45371, 5), 42}, // SMax in glsl_std_450
    {IR(45356, 5), 39}, // SMin in glsl_std_450
    {IR(45160, 6), 7}, // SSign in glsl_std_450
    {IR(45199, 4), 13}, // Sin in glsl_std_450
    {IR(45226, 5), 19}, // Sinh in glsl_std_450
    {IR(45412, 11), 49}, // SmoothStep in glsl_std_450
    {IR(45287, 5), 31}, // Sqrt in glsl_std_450
    {IR(45407, 5), 48}, // Step in glsl_std_450
    {IR(45207, 4), 15}, // Tan in glsl_std_450
    {IR(45236, 5), 21}, // Tanh in glsl_std_450
    {IR(45138, 6), 3}, // Trunc in glsl_std_450
    {IR(45383, 7), 44}, // UClamp in glsl_std_450
    {IR(45366, 5), 41}, // UMax in glsl_std_450
    {IR(45351, 5), 38}, // UMin in glsl_std_450
    {IR(45610, 17), 65}, // UnpackDouble2x32 in glsl_std_450
    {IR(45565, 15), 62}, // UnpackHalf2x16 in glsl_std_450
    {IR(45533, 16), 60}, // UnpackSnorm2x16 in glsl_std_450
    {IR(45580, 15), 63}, // UnpackSnorm4x8 in glsl_std_450
    {IR(45549, 16), 61}, // UnpackUnorm2x16 in glsl_std_450
    {IR(45595, 15), 64}, // UnpackUnorm4x8 in glsl_std_450
    {IR(45793, 13), 2}, // ArgumentInfo in nonsemantic_clspvreflection
    {IR(45888, 24), 7}, // ArgumentPodPushConstant in nonsemantic_clspvreflection
    {IR(45844, 25), 5}, // ArgumentPodStorageBuffer in nonsemantic_clspvreflection
    {IR(45869, 19), 6}, // ArgumentPodUniform in nonsemantic_clspvreflection
    {IR(46322, 28), 26}, // ArgumentPointerPushConstant in nonsemantic_clspvreflection
    {IR(46350, 23), 27}, // ArgumentPointerUniform in nonsemantic_clspvreflection
    {IR(45912, 21), 8}, // ArgumentSampledImage in nonsemantic_clspvreflection
    {IR(45954, 16), 10}, // ArgumentSampler in nonsemantic_clspvreflection
    {IR(45806, 22), 3}, // ArgumentStorageBuffer in nonsemantic_clspvreflection
    {IR(45933, 21), 9}, // ArgumentStorageImage in nonsemantic_clspvreflection
    {IR(46610, 27), 34}, // ArgumentStorageTexelBuffer in nonsemantic_clspvreflection
    {IR(45828, 16), 4}, // ArgumentUniform in nonsemantic_clspvreflection
    {IR(46637, 27), 35}, // ArgumentUniformTexelBuffer in nonsemantic_clspvreflection
    {IR(45970, 18), 11}, // ArgumentWorkgroup in nonsemantic_clspvreflection
    {IR(46664, 32), 36}, // ConstantDataPointerPushConstant in nonsemantic_clspvreflection
    {IR(46218, 26), 21}, // ConstantDataStorageBuffer in nonsemantic_clspvreflection
    {IR(46244, 20), 22}, // ConstantDataUniform in nonsemantic_clspvreflection
    {IR(46488, 45), 31}, // ImageArgumentInfoChannelDataTypePushConstant in nonsemantic_clspvreflection
    {IR(46570, 40), 33}, // ImageArgumentInfoChannelDataTypeUniform in nonsemantic_clspvreflection
    {IR(46446, 42), 30}, // ImageArgumentInfoChannelOrderPushConstant in nonsemantic_clspvreflection
    {IR(46533, 37), 32}, // ImageArgumentInfoChannelOrderUniform in nonsemantic_clspvreflection
    {IR(9927, 7), 1}, // Kernel in nonsemantic_clspvreflection
    {IR(9964, 15), 23}, // LiteralSampler in nonsemantic_clspvreflection
    {IR(46805, 34), 41}, // NormalizedSamplerMaskPushConstant in nonsemantic_clspvreflection
    {IR(46773, 32), 40}, // PrintfBufferPointerPushConstant in nonsemantic_clspvreflection
    {IR(46747, 26), 39}, // PrintfBufferStorageBuffer in nonsemantic_clspvreflection
    {IR(46736, 11), 38}, // PrintfInfo in nonsemantic_clspvreflection
    {IR(46696, 40), 37}, // ProgramScopeVariablePointerPushConstant in nonsemantic_clspvreflection
    {IR(46408, 38), 29}, // ProgramScopeVariablePointerRelocation in nonsemantic_clspvreflection
    {IR(46373, 35), 28}, // ProgramScopeVariablesStorageBuffer in nonsemantic_clspvreflection
    {IR(46264, 30), 24}, // PropertyRequiredWorkgroupSize in nonsemantic_clspvreflection
    {IR(46084, 30), 16}, // PushConstantEnqueuedLocalSize in nonsemantic_clspvreflection
    {IR(46059, 25), 15}, // PushConstantGlobalOffset in nonsemantic_clspvreflection
    {IR(46114, 23), 17}, // PushConstantGlobalSize in nonsemantic_clspvreflection
    {IR(46162, 26), 19}, // PushConstantNumWorkgroups in nonsemantic_clspvreflection
    {IR(46188, 30), 20}, // PushConstantRegionGroupOffset in nonsemantic_clspvreflection
    {IR(46137, 25), 18}, // PushConstantRegionOffset in nonsemantic_clspvreflection
    {IR(46014, 25), 13}, // SpecConstantGlobalOffset in nonsemantic_clspvreflection
    {IR(46294, 28), 25}, // SpecConstantSubgroupMaxSize in nonsemantic_clspvreflection
    {IR(46039, 20), 14}, // SpecConstantWorkDim in nonsemantic_clspvreflection
    {IR(45988, 26), 12}, // SpecConstantWorkgroupSize in nonsemantic_clspvreflection
    {IR(46839, 22), 42}, // WorkgroupVariableSize in nonsemantic_clspvreflection
    {IR(46960, 21), 105}, // DebugBuildIdentifier in nonsemantic_shader_debuginfo_100
    {IR(44277, 21), 1}, // DebugCompilationUnit in nonsemantic_shader_debuginfo_100
    {IR(45004, 13), 28}, // DebugDeclare in nonsemantic_shader_debuginfo_100
    {IR(46998, 16), 107}, // DebugEntryPoint in nonsemantic_shader_debuginfo_100
    {IR(45076, 16), 31}, // DebugExpression in nonsemantic_shader_debuginfo_100
    {IR(44820, 14), 20}, // DebugFunction in nonsemantic_shader_debuginfo_100
    {IR(44795, 25), 19}, // DebugFunctionDeclaration in nonsemantic_shader_debuginfo_100
    {IR(46893, 24), 101}, // DebugFunctionDefinition in nonsemantic_shader_debuginfo_100
    {IR(44775, 20), 18}, // DebugGlobalVariable in nonsemantic_shader_debuginfo_100
    {IR(46861, 20), 34}, // DebugImportedEntity in nonsemantic_shader_debuginfo_100
    {IR(44263, 14), 0}, // DebugInfoNone in nonsemantic_shader_debuginfo_100
    {IR(44907, 15), 25}, // DebugInlinedAt in nonsemantic_shader_debuginfo_100
    {IR(44983, 21), 27}, // DebugInlinedVariable in nonsemantic_shader_debuginfo_100
    {IR(44834, 18), 21}, // DebugLexicalBlock in nonsemantic_shader_debuginfo_100
    {IR(44852, 31), 22}, // DebugLexicalBlockDiscriminator in nonsemantic_shader_debuginfo_100
    {IR(46938, 10), 103}, // DebugLine in nonsemantic_shader_debuginfo_100
    {IR(44964, 19), 26}, // DebugLocalVariable in nonsemantic_shader_debuginfo_100
    {IR(45092, 14), 32}, // DebugMacroDef in nonsemantic_shader_debuginfo_100
    {IR(45106, 16), 33}, // DebugMacroUndef in nonsemantic_shader_debuginfo_100
    {IR(46948, 12), 104}, // DebugNoLine in nonsemantic_shader_debuginfo_100
    {IR(44894, 13), 24}, // DebugNoScope in nonsemantic_shader_debuginfo_100
    {IR(45061, 15), 30}, // DebugOperation in nonsemantic_shader_debuginfo_100
    {IR(44883, 11), 23}, // DebugScope in nonsemantic_shader_debuginfo_100
    {IR(46881, 12), 35}, // DebugSource in nonsemantic_shader_debuginfo_100
    {IR(46917, 21), 102}, // DebugSourceContinued in nonsemantic_shader_debuginfo_100
    {IR(46981, 17), 106}, // DebugStoragePath in nonsemantic_shader_debuginfo_100
    {IR(44473, 15), 5}, // DebugTypeArray in nonsemantic_shader_debuginfo_100
    {IR(44350, 15), 2}, // DebugTypeBasic in nonsemantic_shader_debuginfo_100
    {IR(44587, 19), 10}, // DebugTypeComposite in nonsemantic_shader_debuginfo_100
    {IR(44535, 14), 9}, // DebugTypeEnum in nonsemantic_shader_debuginfo_100
    {IR(44517, 18), 8}, // DebugTypeFunction in nonsemantic_shader_debuginfo_100
    {IR(44622, 21), 12}, // DebugTypeInheritance in nonsemantic_shader_debuginfo_100
    {IR(47014, 16), 108}, // DebugTypeMatrix in nonsemantic_shader_debuginfo_100
    {IR(44606, 16), 11}, // DebugTypeMember in nonsemantic_shader_debuginfo_100
    {IR(44399, 17), 3}, // DebugTypePointer in nonsemantic_shader_debuginfo_100
    {IR(44643, 21), 13}, // DebugTypePtrToMember in nonsemantic_shader_debuginfo_100
    {IR(44454, 19), 4}, // DebugTypeQualifier in nonsemantic_shader_debuginfo_100
    {IR(44664, 18), 14}, // DebugTypeTemplate in nonsemantic_shader_debuginfo_100
    {IR(44682, 27), 15}, // DebugTypeTemplateParameter in nonsemantic_shader_debuginfo_100
    {IR(44744, 31), 17}, // DebugTypeTemplateParameterPack in nonsemantic_shader_debuginfo_100
    {IR(44709, 35), 16}, // DebugTypeTemplateTemplateParameter in nonsemantic_shader_debuginfo_100
    {IR(44488, 16), 6}, // DebugTypeVector in nonsemantic_shader_debuginfo_100
    {IR(44504, 13), 7}, // DebugTypedef in nonsemantic_shader_debuginfo_100
    {IR(45017, 11), 29}, // DebugValue in nonsemantic_shader_debuginfo_100
    {IR(47030, 14), 1}, // Configuration in nonsemantic_vkspreflection
    {IR(47106, 20), 6}, // DescriptorSetBuffer in nonsemantic_vkspreflection
    {IR(47126, 19), 7}, // DescriptorSetImage in nonsemantic_vkspreflection
    {IR(47145, 21), 8}, // DescriptorSetSampler in nonsemantic_vkspreflection
    {IR(47069, 14), 4}, // PushConstants in nonsemantic_vkspreflection
    {IR(47083, 23), 5}, // SpecializationMapEntry in nonsemantic_vkspreflection
    {IR(47044, 13), 2}, // StartCounter in nonsemantic_vkspreflection
    {IR(47057, 12), 3}, // StopCounter in nonsemantic_vkspreflection
    {IR(44277, 21), 1}, // DebugCompilationUnit in opencl_debuginfo_100
    {IR(45004, 13), 28}, // DebugDeclare in opencl_debuginfo_100
    {IR(45076, 16), 31}, // DebugExpression in opencl_debuginfo_100
    {IR(44820, 14), 20}, // DebugFunction in opencl_debuginfo_100
    {IR(44795, 25), 19}, // DebugFunctionDeclaration in opencl_debuginfo_100
    {IR(44775, 20), 18}, // DebugGlobalVariable in opencl_debuginfo_100
    {IR(46861, 20), 34}, // DebugImportedEntity in opencl_debuginfo_100
    {IR(44263, 14), 0}, // DebugInfoNone in opencl_debuginfo_100
    {IR(44907, 15), 25}, // DebugInlinedAt in opencl_debuginfo_100
    {IR(44983, 21), 27}, // DebugInlinedVariable in opencl_debuginfo_100
    {IR(44834, 18), 21}, // DebugLexicalBlock in opencl_debuginfo_100
    {IR(44852, 31), 22}, // DebugLexicalBlockDiscriminator in opencl_debuginfo_100
    {IR(44964, 19), 26}, // DebugLocalVariable in opencl_debuginfo_100
    {IR(45092, 14), 32}, // DebugMacroDef in opencl_debuginfo_100
    {IR(45106, 16), 33}, // DebugMacroUndef in opencl_debuginfo_100
    {IR(47466, 17), 36}, // DebugModuleINTEL in opencl_debuginfo_100
    {IR(44894, 13), 24}, // DebugNoScope in opencl_debuginfo_100
    {IR(45061, 15), 30}, // DebugOperation in opencl_debuginfo_100
    {IR(44883, 11), 23}, // DebugScope in opencl_debuginfo_100
    {IR(46881, 12), 35}, // DebugSource in opencl_debuginfo_100
    {IR(44473, 15), 5}, // DebugTypeArray in opencl_debuginfo_100
    {IR(44350, 15), 2}, // DebugTypeBasic in opencl_debuginfo_100
    {IR(44587, 19), 10}, // DebugTypeComposite in opencl_debuginfo_100
    {IR(44535, 14), 9}, // DebugTypeEnum in opencl_debuginfo_100
    {IR(44517, 18), 8}, // DebugTypeFunction in opencl_debuginfo_100
    {IR(44622, 21), 12}, // DebugTypeInheritance in opencl_debuginfo_100
    {IR(44606, 16), 11}, // DebugTypeMember in opencl_debuginfo_100
    {IR(44399, 17), 3}, // DebugTypePointer in opencl_debuginfo_100
    {IR(44643, 21), 13}, // DebugTypePtrToMember in opencl_debuginfo_100
    {IR(44454, 19), 4}, // DebugTypeQualifier in opencl_debuginfo_100
    {IR(44664, 18), 14}, // DebugTypeTemplate in opencl_debuginfo_100
    {IR(44682, 27), 15}, // DebugTypeTemplateParameter in opencl_debuginfo_100
    {IR(44744, 31), 17}, // DebugTypeTemplateParameterPack in opencl_debuginfo_100
    {IR(44709, 35), 16}, // DebugTypeTemplateTemplateParameter in opencl_debuginfo_100
    {IR(44488, 16), 6}, // DebugTypeVector in opencl_debuginfo_100
    {IR(44504, 13), 7}, // DebugTypedef in opencl_debuginfo_100
    {IR(45017, 11), 29}, // DebugValue in opencl_debuginfo_100
    {IR(47483, 5), 0}, // acos in opencl_std_100
    {IR(47488, 6), 1}, // acosh in opencl_std_100
    {IR(47494, 7), 2}, // acospi in opencl_std_100
    {IR(47501, 5), 3}, // asin in opencl_std_100
    {IR(47506, 6), 4}, // asinh in opencl_std_100
    {IR(47512, 7), 5}, // asinpi in opencl_std_100
    {IR(47519, 5), 6}, // atan in opencl_std_100
    {IR(47524, 6), 7}, // atan2 in opencl_std_100
    {IR(47543, 8), 10}, // atan2pi in opencl_std_100
    {IR(47530, 6), 8}, // atanh in opencl_std_100
    {IR(47536, 7), 9}, // atanpi in opencl_std_100
    {IR(48734, 10), 186}, // bitselect in opencl_std_100
    {IR(47551, 5), 11}, // cbrt in opencl_std_100
    {IR(47556, 5), 12}, // ceil in opencl_std_100
    {IR(48406, 4), 151}, // clz in opencl_std_100
    {IR(47561, 9), 13}, // copysign in opencl_std_100
    {IR(47570, 4), 14}, // cos in opencl_std_100
    {IR(47574, 5), 15}, // cosh in opencl_std_100
    {IR(47579, 6), 16}, // cospi in opencl_std_100
    {IR(48250, 6), 104}, // cross in opencl_std_100
    {IR(48410, 4), 152}, // ctz in opencl_std_100
    {IR(48185, 8), 96}, // degrees in opencl_std_100
    {IR(48256, 9), 105}, // distance in opencl_std_100
    {IR(47590, 4), 18}, // erf in opencl_std_100
    {IR(47585, 5), 17}, // erfc in opencl_std_100
    {IR(47594, 4), 19}, // exp in opencl_std_100
    {IR(47603, 6), 21}, // exp10 in opencl_std_100
    {IR(47598, 5), 20}, // exp2 in opencl_std_100
    {IR(47609, 6), 22}, // expm1 in opencl_std_100
    {IR(47615, 5), 23}, // fabs in opencl_std_100
    {IR(48282, 14), 108}, // fast_distance in opencl_std_100
    {IR(48296, 12), 109}, // fast_length in opencl_std_100
    {IR(48308, 15), 110}, // fast_normalize in opencl_std_100
    {IR(48178, 7), 95}, // fclamp in opencl_std_100
    {IR(47620, 5), 24}, // fdim in opencl_std_100
    {IR(47625, 6), 25}, // floor in opencl_std_100
    {IR(47631, 4), 26}, // fma in opencl_std_100
    {IR(47635, 5), 27}, // fmax in opencl_std_100
    {IR(48193, 12), 97}, // fmax_common in opencl_std_100
    {IR(47640, 5), 28}, // fmin in opencl_std_100
    {IR(48205, 12), 98}, // fmin_common in opencl_std_100
    {IR(47645, 5), 29}, // fmod in opencl_std_100
    {IR(47650, 6), 30}, // fract in opencl_std_100
    {IR(47656, 6), 31}, // frexp in opencl_std_100
    {IR(47868, 9), 67}, // half_cos in opencl_std_100
    {IR(47877, 12), 68}, // half_divide in opencl_std_100
    {IR(47889, 9), 69}, // half_exp in opencl_std_100
    {IR(47908, 11), 71}, // half_exp10 in opencl_std_100
    {IR(47898, 10), 70}, // half_exp2 in opencl_std_100
    {IR(47919, 9), 72}, // half_log in opencl_std_100
    {IR(47938, 11), 74}, // half_log10 in opencl_std_100
    {IR(47928, 10), 73}, // half_log2 in opencl_std_100
    {IR(47949, 10), 75}, // half_powr in opencl_std_100
    {IR(47959, 11), 76}, // half_recip in opencl_std_100
    {IR(47970, 11), 77}, // half_rsqrt in opencl_std_100
    {IR(47981, 9), 78}, // half_sin in opencl_std_100
    {IR(47990, 10), 79}, // half_sqrt in opencl_std_100
    {IR(48000, 9), 80}, // half_tan in opencl_std_100
    {IR(47662, 6), 32}, // hypot in opencl_std_100
    {IR(47668, 6), 33}, // ilogb in opencl_std_100
    {IR(47674, 6), 34}, // ldexp in opencl_std_100
    {IR(48265, 7), 106}, // length in opencl_std_100
    {IR(47680, 7), 35}, // lgamma in opencl_std_100
    {IR(47687, 9), 36}, // lgamma_r in opencl_std_100
    {IR(47696, 4), 37}, // log in opencl_std_100
    {IR(47705, 6), 39}, // log10 in opencl_std_100
    {IR(47711, 6), 40}, // log1p in opencl_std_100
    {IR(47700, 5), 38}, // log2 in opencl_std_100
    {IR(47717, 5), 41}, // logb in opencl_std_100
    {IR(47722, 4), 42}, // mad in opencl_std_100
    {IR(47726, 7), 43}, // maxmag in opencl_std_100
    {IR(47733, 7), 44}, // minmag in opencl_std_100
    {IR(48217, 4), 99}, // mix in opencl_std_100
    {IR(47740, 5), 45}, // modf in opencl_std_100
    {IR(47745, 4), 46}, // nan in opencl_std_100
    {IR(48009, 11), 81}, // native_cos in opencl_std_100
    {IR(48020, 14), 82}, // native_divide in opencl_std_100
    {IR(48034, 11), 83}, // native_exp in opencl_std_100
    {IR(48057, 13), 85}, // native_exp10 in opencl_std_100
    {IR(48045, 12), 84}, // native_exp2 in opencl_std_100
    {IR(48070, 11), 86}, // native_log in opencl_std_100
    {IR(48093, 13), 88}, // native_log10 in opencl_std_100
    {IR(48081, 12), 87}, // native_log2 in opencl_std_100
    {IR(48106, 12), 89}, // native_powr in opencl_std_100
    {IR(48118, 13), 90}, // native_recip in opencl_std_100
    {IR(48131, 13), 91}, // native_rsqrt in opencl_std_100
    {IR(48144, 11), 92}, // native_sin in opencl_std_100
    {IR(48155, 12), 93}, // native_sqrt in opencl_std_100
    {IR(48167, 11), 94}, // native_tan in opencl_std_100
    {IR(47749, 10), 47}, // nextafter in opencl_std_100
    {IR(48272, 10), 107}, // normalize in opencl_std_100
    {IR(48525, 9), 166}, // popcount in opencl_std_100
    {IR(47759, 4), 48}, // pow in opencl_std_100
    {IR(47763, 5), 49}, // pown in opencl_std_100
    {IR(47768, 5), 50}, // powr in opencl_std_100
    {IR(48725, 9), 185}, // prefetch in opencl_std_100
    {IR(48718, 7), 184}, // printf in opencl_std_100
    {IR(48221, 8), 100}, // radians in opencl_std_100
    {IR(47773, 10), 51}, // remainder in opencl_std_100
    {IR(47783, 7), 52}, // remquo in opencl_std_100
    {IR(47790, 5), 53}, // rint in opencl_std_100
    {IR(47795, 6), 54}, // rootn in opencl_std_100
    {IR(48476, 7), 161}, // rotate in opencl_std_100
    {IR(47801, 6), 55}, // round in opencl_std_100
    {IR(47807, 6), 56}, // rsqrt in opencl_std_100
    {IR(48323, 6), 141}, // s_abs in opencl_std_100
    {IR(48329, 11), 142}, // s_abs_diff in opencl_std_100
    {IR(48340, 10), 143}, // s_add_sat in opencl_std_100
    {IR(48390, 8), 149}, // s_clamp in opencl_std_100
    {IR(48360, 7), 145}, // s_hadd in opencl_std_100
    {IR(48534, 8), 167}, // s_mad24 in opencl_std_100
    {IR(48414, 9), 153}, // s_mad_hi in opencl_std_100
    {IR(48433, 10), 155}, // s_mad_sat in opencl_std_100
    {IR(48443, 6), 156}, // s_max in opencl_std_100
    {IR(48455, 6), 158}, // s_min in opencl_std_100
    {IR(48550, 8), 169}, // s_mul24 in opencl_std_100
    {IR(48467, 9), 160}, // s_mul_hi in opencl_std_100
    {IR(48374, 8), 147}, // s_rhadd in opencl_std_100
    {IR(48483, 10), 162}, // s_sub_sat in opencl_std_100
    {IR(48514, 11), 165}, // s_upsample in opencl_std_100
    {IR(48744, 7), 187}, // select in opencl_std_100
    {IR(48701, 8), 182}, // shuffle in opencl_std_100
    {IR(48709, 9), 183}, // shuffle2 in opencl_std_100
    {IR(48245, 5), 103}, // sign in opencl_std_100
    {IR(47813, 4), 57}, // sin in opencl_std_100
    {IR(47817, 7), 58}, // sincos in opencl_std_100
    {IR(47824, 5), 59}, // sinh in opencl_std_100
    {IR(47829, 6), 60}, // sinpi in opencl_std_100
    {IR(48234, 11), 102}, // smoothstep in opencl_std_100
    {IR(47835, 5), 61}, // sqrt in opencl_std_100
    {IR(48229, 5), 101}, // step in opencl_std_100
    {IR(47840, 4), 62}, // tan in opencl_std_100
    {IR(47844, 5), 63}, // tanh in opencl_std_100
    {IR(47849, 6), 64}, // tanpi in opencl_std_100
    {IR(47855, 7), 65}, // tgamma in opencl_std_100
    {IR(47862, 6), 66}, // trunc in opencl_std_100
    {IR(48751, 6), 201}, // u_abs in opencl_std_100
    {IR(48757, 11), 202}, // u_abs_diff in opencl_std_100
    {IR(48350, 10), 144}, // u_add_sat in opencl_std_100
    {IR(48398, 8), 150}, // u_clamp in opencl_std_100
    {IR(48367, 7), 146}, // u_hadd in opencl_std_100
    {IR(48542, 8), 168}, // u_mad24 in opencl_std_100
    {IR(48777, 9), 204}, // u_mad_hi in opencl_std_100
    {IR(48423, 10), 154}, // u_mad_sat in opencl_std_100
    {IR(48449, 6), 157}, // u_max in opencl_std_100
    {IR(48461, 6), 159}, // u_min in opencl_std_100
    {IR(48558, 8), 170}, // u_mul24 in opencl_std_100
    {IR(48768, 9), 203}, // u_mul_hi in opencl_std_100
    {IR(48382, 8), 148}, // u_rhadd in opencl_std_100
    {IR(48493, 10), 163}, // u_sub_sat in opencl_std_100
    {IR(48503, 11), 164}, // u_upsample in opencl_std_100
    {IR(48581, 11), 173}, // vload_half in opencl_std_100
    {IR(48592, 12), 174}, // vload_halfn in opencl_std_100
    {IR(48658, 13), 179}, // vloada_halfn in opencl_std_100
    {IR(48566, 7), 171}, // vloadn in opencl_std_100
    {IR(48604, 12), 175}, // vstore_half in opencl_std_100
    {IR(48616, 14), 176}, // vstore_half_r in opencl_std_100
    {IR(48630, 13), 177}, // vstore_halfn in opencl_std_100
    {IR(48643, 15), 178}, // vstore_halfn_r in opencl_std_100
    {IR(48671, 14), 180}, // vstorea_halfn in opencl_std_100
    {IR(48685, 16), 181}, // vstorea_halfn_r in opencl_std_100
    {IR(48573, 8), 172}, // vstoren in opencl_std_100
    {IR(48803, 17), 2}, // CubeFaceCoordAMD in spv_amd_gcn_shader
    {IR(48786, 17), 1}, // CubeFaceIndexAMD in spv_amd_gcn_shader
    {IR(48820, 8), 3}, // TimeAMD in spv_amd_gcn_shader
    {IR(48897, 9), 4}, // MbcntAMD in spv_amd_shader_ballot
    {IR(48828, 22), 1}, // SwizzleInvocationsAMD in spv_amd_shader_ballot
    {IR(48850, 28), 2}, // SwizzleInvocationsMaskedAMD in spv_amd_shader_ballot
    {IR(48878, 19), 3}, // WriteInvocationAMD in spv_amd_shader_ballot
    {IR(48906, 23), 1}, // InterpolateAtVertexAMD in spv_amd_shader_explicit_vertex_parameter
    {IR(48956, 9), 4}, // FMax3AMD in spv_amd_shader_trinary_minmax
    {IR(48983, 9), 7}, // FMid3AMD in spv_amd_shader_trinary_minmax
    {IR(48929, 9), 1}, // FMin3AMD in spv_amd_shader_trinary_minmax
    {IR(48974, 9), 6}, // SMax3AMD in spv_amd_shader_trinary_minmax
    {IR(49001, 9), 9}, // SMid3AMD in spv_amd_shader_trinary_minmax
    {IR(48947, 9), 3}, // SMin3AMD in spv_amd_shader_trinary_minmax
    {IR(48965, 9), 5}, // UMax3AMD in spv_amd_shader_trinary_minmax
    {IR(48992, 9), 8}, // UMid3AMD in spv_amd_shader_trinary_minmax
    {IR(48938, 9), 2}, // UMin3AMD in spv_amd_shader_trinary_minmax
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
  "ReadWrite\0" // IR(4477, 10)
  "WriteOnly\0" // IR(4487, 10)
  "Logical\0" // IR(4497, 8)
  "Physical32\0" // IR(4505, 11)
  "Physical64\0" // IR(4516, 11)
  "PhysicalStorageBuffer64\0" // IR(4527, 24)
  "PhysicalStorageBuffer64EXT\0" // IR(4551, 27)
  "BaryCoordKHR\0" // IR(4578, 13)
  "BaryCoordNV\0" // IR(4591, 12)
  "BaryCoordNoPerspAMD\0" // IR(4603, 20)
  "BaryCoordNoPerspCentroidAMD\0" // IR(4623, 28)
  "BaryCoordNoPerspKHR\0" // IR(4651, 20)
  "BaryCoordNoPerspNV\0" // IR(4671, 19)
  "BaryCoordNoPerspSampleAMD\0" // IR(4690, 26)
  "BaryCoordPullModelAMD\0" // IR(4716, 22)
  "BaryCoordSmoothAMD\0" // IR(4738, 19)
  "BaryCoordSmoothCentroidAMD\0" // IR(4757, 27)
  "BaryCoordSmoothSampleAMD\0" // IR(4784, 25)
  "BaseInstance\0" // IR(4809, 13)
  "BaseVertex\0" // IR(4822, 11)
  "ClipDistance\0" // IR(4833, 13)
  "ClipDistancePerViewNV\0" // IR(4846, 22)
  "ClusterIDNV\0" // IR(4868, 12)
  "CoreCountARM\0" // IR(4880, 13)
  "CoreIDARM\0" // IR(4893, 10)
  "CoreMaxIDARM\0" // IR(4903, 13)
  "CullDistance\0" // IR(4916, 13)
  "CullDistancePerViewNV\0" // IR(4929, 22)
  "CullMaskKHR\0" // IR(4951, 12)
  "CullPrimitiveEXT\0" // IR(4963, 17)
  "CurrentRayTimeNV\0" // IR(4980, 17)
  "DeviceIndex\0" // IR(4997, 12)
  "DrawIndex\0" // IR(5009, 10)
  "EnqueuedWorkgroupSize\0" // IR(5019, 22)
  "FragCoord\0" // IR(5041, 10)
  "FragDepth\0" // IR(5051, 10)
  "FragInvocationCountEXT\0" // IR(5061, 23)
  "FragSizeEXT\0" // IR(5084, 12)
  "FragStencilRefEXT\0" // IR(5096, 18)
  "FragmentSizeNV\0" // IR(5114, 15)
  "FrontFacing\0" // IR(5129, 12)
  "FullyCoveredEXT\0" // IR(5141, 16)
  "GlobalInvocationId\0" // IR(5157, 19)
  "GlobalLinearId\0" // IR(5176, 15)
  "GlobalOffset\0" // IR(5191, 13)
  "GlobalSize\0" // IR(5204, 11)
  "HelperInvocation\0" // IR(5215, 17)
  "HitIsLSSNV\0" // IR(5232, 11)
  "HitIsSphereNV\0" // IR(5243, 14)
  "HitKindBackFacingMicroTriangleNV\0" // IR(5257, 33)
  "HitKindFrontFacingMicroTriangleNV\0" // IR(5290, 34)
  "HitKindKHR\0" // IR(5324, 11)
  "HitKindNV\0" // IR(5335, 10)
  "HitLSSPositionsNV\0" // IR(5345, 18)
  "HitLSSRadiiNV\0" // IR(5363, 14)
  "HitMicroTriangleVertexBarycentricsNV\0" // IR(5377, 37)
  "HitMicroTriangleVertexPositionsNV\0" // IR(5414, 34)
  "HitSpherePositionNV\0" // IR(5448, 20)
  "HitSphereRadiusNV\0" // IR(5468, 18)
  "HitTNV\0" // IR(5486, 7)
  "HitTriangleVertexPositionsKHR\0" // IR(5493, 30)
  "IncomingRayFlagsKHR\0" // IR(5523, 20)
  "IncomingRayFlagsNV\0" // IR(5543, 19)
  "InstanceCustomIndexKHR\0" // IR(5562, 23)
  "InstanceCustomIndexNV\0" // IR(5585, 22)
  "InstanceId\0" // IR(5607, 11)
  "InstanceIndex\0" // IR(5618, 14)
  "InvocationId\0" // IR(5632, 13)
  "InvocationsPerPixelNV\0" // IR(5645, 22)
  "LaunchIdKHR\0" // IR(5667, 12)
  "LaunchIdNV\0" // IR(5679, 11)
  "LaunchSizeKHR\0" // IR(5690, 14)
  "LaunchSizeNV\0" // IR(5704, 13)
  "Layer\0" // IR(5717, 6)
  "LayerPerViewNV\0" // IR(5723, 15)
  "LocalInvocationId\0" // IR(5738, 18)
  "LocalInvocationIndex\0" // IR(5756, 21)
  "MeshViewCountNV\0" // IR(5777, 16)
  "MeshViewIndicesNV\0" // IR(5793, 18)
  "NumEnqueuedSubgroups\0" // IR(5811, 21)
  "NumSubgroups\0" // IR(5832, 13)
  "NumWorkgroups\0" // IR(5845, 14)
  "ObjectRayDirectionKHR\0" // IR(5859, 22)
  "ObjectRayDirectionNV\0" // IR(5881, 21)
  "ObjectRayOriginKHR\0" // IR(5902, 19)
  "ObjectRayOriginNV\0" // IR(5921, 18)
  "ObjectToWorldKHR\0" // IR(5939, 17)
  "ObjectToWorldNV\0" // IR(5956, 16)
  "PatchVertices\0" // IR(5972, 14)
  "PointCoord\0" // IR(5986, 11)
  "PointSize\0" // IR(5997, 10)
  "Position\0" // IR(6007, 9)
  "PositionPerViewNV\0" // IR(6016, 18)
  "PrimitiveCountNV\0" // IR(6034, 17)
  "PrimitiveId\0" // IR(6051, 12)
  "PrimitiveIndicesNV\0" // IR(6063, 19)
  "PrimitiveLineIndicesEXT\0" // IR(6082, 24)
  "PrimitivePointIndicesEXT\0" // IR(6106, 25)
  "PrimitiveShadingRateKHR\0" // IR(6131, 24)
  "PrimitiveTriangleIndicesEXT\0" // IR(6155, 28)
  "RayGeometryIndexKHR\0" // IR(6183, 20)
  "RayTmaxKHR\0" // IR(6203, 11)
  "RayTmaxNV\0" // IR(6214, 10)
  "RayTminKHR\0" // IR(6224, 11)
  "RayTminNV\0" // IR(6235, 10)
  "RemainingRecursionLevelsAMDX\0" // IR(6245, 29)
  "SMCountNV\0" // IR(6274, 10)
  "SMIDNV\0" // IR(6284, 7)
  "SampleId\0" // IR(6291, 9)
  "SampleMask\0" // IR(6300, 11)
  "SamplePosition\0" // IR(6311, 15)
  "SecondaryPositionNV\0" // IR(6326, 20)
  "SecondaryViewportMaskNV\0" // IR(6346, 24)
  "ShaderIndexAMDX\0" // IR(6370, 16)
  "ShadingRateKHR\0" // IR(6386, 15)
  "SubgroupEqMask\0" // IR(6401, 15)
  "SubgroupEqMaskKHR\0" // IR(6416, 18)
  "SubgroupGeMask\0" // IR(6434, 15)
  "SubgroupGeMaskKHR\0" // IR(6449, 18)
  "SubgroupGtMask\0" // IR(6467, 15)
  "SubgroupGtMaskKHR\0" // IR(6482, 18)
  "SubgroupId\0" // IR(6500, 11)
  "SubgroupLeMask\0" // IR(6511, 15)
  "SubgroupLeMaskKHR\0" // IR(6526, 18)
  "SubgroupLocalInvocationId\0" // IR(6544, 26)
  "SubgroupLtMask\0" // IR(6570, 15)
  "SubgroupLtMaskKHR\0" // IR(6585, 18)
  "SubgroupMaxSize\0" // IR(6603, 16)
  "SubgroupSize\0" // IR(6619, 13)
  "TaskCountNV\0" // IR(6632, 12)
  "TessCoord\0" // IR(6644, 10)
  "TessLevelInner\0" // IR(6654, 15)
  "TessLevelOuter\0" // IR(6669, 15)
  "TileApronSizeQCOM\0" // IR(6684, 18)
  "TileDimensionQCOM\0" // IR(6702, 18)
  "TileOffsetQCOM\0" // IR(6720, 15)
  "VertexId\0" // IR(6735, 9)
  "VertexIndex\0" // IR(6744, 12)
  "ViewIndex\0" // IR(6756, 10)
  "ViewportIndex\0" // IR(6766, 14)
  "ViewportMaskNV\0" // IR(6780, 15)
  "ViewportMaskPerViewNV\0" // IR(6795, 22)
  "WarpIDARM\0" // IR(6817, 10)
  "WarpIDNV\0" // IR(6827, 9)
  "WarpMaxIDARM\0" // IR(6836, 13)
  "WarpsPerSMNV\0" // IR(6849, 13)
  "WorkDim\0" // IR(6862, 8)
  "WorkgroupId\0" // IR(6870, 12)
  "WorkgroupSize\0" // IR(6882, 14)
  "WorldRayDirectionKHR\0" // IR(6896, 21)
  "WorldRayDirectionNV\0" // IR(6917, 20)
  "WorldRayOriginKHR\0" // IR(6937, 18)
  "WorldRayOriginNV\0" // IR(6955, 17)
  "WorldToObjectKHR\0" // IR(6972, 17)
  "WorldToObjectNV\0" // IR(6989, 16)
  "Addresses\0" // IR(7005, 10)
  "ArbitraryPrecisionFixedPointINTEL\0" // IR(7015, 34)
  "ArbitraryPrecisionFloatingPointINTEL\0" // IR(7049, 37)
  "ArbitraryPrecisionIntegersINTEL\0" // IR(7086, 32)
  "ArithmeticFenceEXT\0" // IR(7118, 19)
  "AsmINTEL\0" // IR(7137, 9)
  "AtomicFloat16AddEXT\0" // IR(7146, 20)
  "AtomicFloat16MinMaxEXT\0" // IR(7166, 23)
  "AtomicFloat16VectorNV\0" // IR(7189, 22)
  "AtomicFloat32AddEXT\0" // IR(7211, 20)
  "AtomicFloat32MinMaxEXT\0" // IR(7231, 23)
  "AtomicFloat64AddEXT\0" // IR(7254, 20)
  "AtomicFloat64MinMaxEXT\0" // IR(7274, 23)
  "AtomicStorage\0" // IR(7297, 14)
  "AtomicStorageOps\0" // IR(7311, 17)
  "BFloat16ConversionINTEL\0" // IR(7328, 24)
  "BFloat16CooperativeMatrixKHR\0" // IR(7352, 29)
  "BFloat16DotProductKHR\0" // IR(7381, 22)
  "BFloat16TypeKHR\0" // IR(7403, 16)
  "BindlessTextureNV\0" // IR(7419, 18)
  "BitInstructions\0" // IR(7437, 16)
  "BlockingPipesINTEL\0" // IR(7453, 19)
  "CacheControlsINTEL\0" // IR(7472, 19)
  "ComputeDerivativeGroupLinearKHR\0" // IR(7491, 32)
  "ComputeDerivativeGroupLinearNV\0" // IR(7523, 31)
  "ComputeDerivativeGroupQuadsKHR\0" // IR(7554, 31)
  "ComputeDerivativeGroupQuadsNV\0" // IR(7585, 30)
  "CooperativeMatrixBlockLoadsNV\0" // IR(7615, 30)
  "CooperativeMatrixConversionsNV\0" // IR(7645, 31)
  "CooperativeMatrixKHR\0" // IR(7676, 21)
  "CooperativeMatrixLayoutsARM\0" // IR(7697, 28)
  "CooperativeMatrixNV\0" // IR(7725, 20)
  "CooperativeMatrixPerElementOperationsNV\0" // IR(7745, 40)
  "CooperativeMatrixReductionsNV\0" // IR(7785, 30)
  "CooperativeMatrixTensorAddressingNV\0" // IR(7815, 36)
  "CooperativeVectorNV\0" // IR(7851, 20)
  "CooperativeVectorTrainingNV\0" // IR(7871, 28)
  "CoreBuiltinsARM\0" // IR(7899, 16)
  "DebugInfoModuleINTEL\0" // IR(7915, 21)
  "DemoteToHelperInvocation\0" // IR(7936, 25)
  "DemoteToHelperInvocationEXT\0" // IR(7961, 28)
  "DenormFlushToZero\0" // IR(7989, 18)
  "DenormPreserve\0" // IR(8007, 15)
  "DerivativeControl\0" // IR(8022, 18)
  "DeviceEnqueue\0" // IR(8040, 14)
  "DeviceGroup\0" // IR(8054, 12)
  "DisplacementMicromapNV\0" // IR(8066, 23)
  "DotProduct\0" // IR(8089, 11)
  "DotProductInput4x8Bit\0" // IR(8100, 22)
  "DotProductInput4x8BitKHR\0" // IR(8122, 25)
  "DotProductInput4x8BitPacked\0" // IR(8147, 28)
  "DotProductInput4x8BitPackedKHR\0" // IR(8175, 31)
  "DotProductInputAll\0" // IR(8206, 19)
  "DotProductInputAllKHR\0" // IR(8225, 22)
  "DotProductKHR\0" // IR(8247, 14)
  "DrawParameters\0" // IR(8261, 15)
  "ExpectAssumeKHR\0" // IR(8276, 16)
  "FPFastMathModeINTEL\0" // IR(8292, 20)
  "FPGAArgumentInterfacesINTEL\0" // IR(8312, 28)
  "FPGABufferLocationINTEL\0" // IR(8340, 24)
  "FPGAClusterAttributesINTEL\0" // IR(8364, 27)
  "FPGAClusterAttributesV2INTEL\0" // IR(8391, 29)
  "FPGADSPControlINTEL\0" // IR(8420, 20)
  "FPGAInvocationPipeliningAttributesINTEL\0" // IR(8440, 40)
  "FPGAKernelAttributesINTEL\0" // IR(8480, 26)
  "FPGAKernelAttributesv2INTEL\0" // IR(8506, 28)
  "FPGALatencyControlINTEL\0" // IR(8534, 24)
  "FPGALoopControlsINTEL\0" // IR(8558, 22)
  "FPGAMemoryAccessesINTEL\0" // IR(8580, 24)
  "FPGAMemoryAttributesINTEL\0" // IR(8604, 26)
  "FPGARegINTEL\0" // IR(8630, 13)
  "FPMaxErrorINTEL\0" // IR(8643, 16)
  "Float16\0" // IR(8659, 8)
  "Float16Buffer\0" // IR(8667, 14)
  "Float16ImageAMD\0" // IR(8681, 16)
  "Float64\0" // IR(8697, 8)
  "FloatControls2\0" // IR(8705, 15)
  "FloatingPointModeINTEL\0" // IR(8720, 23)
  "FragmentBarycentricKHR\0" // IR(8743, 23)
  "FragmentBarycentricNV\0" // IR(8766, 22)
  "FragmentDensityEXT\0" // IR(8788, 19)
  "FragmentFullyCoveredEXT\0" // IR(8807, 24)
  "FragmentMaskAMD\0" // IR(8831, 16)
  "FragmentShaderPixelInterlockEXT\0" // IR(8847, 32)
  "FragmentShaderSampleInterlockEXT\0" // IR(8879, 33)
  "FragmentShaderShadingRateInterlockEXT\0" // IR(8912, 38)
  "FragmentShadingRateKHR\0" // IR(8950, 23)
  "FunctionFloatControlINTEL\0" // IR(8973, 26)
  "FunctionPointersINTEL\0" // IR(8999, 22)
  "GenericPointer\0" // IR(9021, 15)
  "Geometry\0" // IR(9036, 9)
  "GeometryPointSize\0" // IR(9045, 18)
  "GeometryShaderPassthroughNV\0" // IR(9063, 28)
  "GeometryStreams\0" // IR(9091, 16)
  "GlobalVariableFPGADecorationsINTEL\0" // IR(9107, 35)
  "GlobalVariableHostAccessINTEL\0" // IR(9142, 30)
  "GroupNonUniform\0" // IR(9172, 16)
  "GroupNonUniformArithmetic\0" // IR(9188, 26)
  "GroupNonUniformBallot\0" // IR(9214, 22)
  "GroupNonUniformClustered\0" // IR(9236, 25)
  "GroupNonUniformPartitionedNV\0" // IR(9261, 29)
  "GroupNonUniformQuad\0" // IR(9290, 20)
  "GroupNonUniformRotateKHR\0" // IR(9310, 25)
  "GroupNonUniformShuffle\0" // IR(9335, 23)
  "GroupNonUniformShuffleRelative\0" // IR(9358, 31)
  "GroupNonUniformVote\0" // IR(9389, 20)
  "GroupUniformArithmeticKHR\0" // IR(9409, 26)
  "Groups\0" // IR(9435, 7)
  "IOPipesINTEL\0" // IR(9442, 13)
  "Image1D\0" // IR(9455, 8)
  "ImageBasic\0" // IR(9463, 11)
  "ImageBuffer\0" // IR(9474, 12)
  "ImageCubeArray\0" // IR(9486, 15)
  "ImageFootprintNV\0" // IR(9501, 17)
  "ImageGatherBiasLodAMD\0" // IR(9518, 22)
  "ImageGatherExtended\0" // IR(9540, 20)
  "ImageMSArray\0" // IR(9560, 13)
  "ImageMipmap\0" // IR(9573, 12)
  "ImageQuery\0" // IR(9585, 11)
  "ImageReadWrite\0" // IR(9596, 15)
  "ImageReadWriteLodAMD\0" // IR(9611, 21)
  "ImageRect\0" // IR(9632, 10)
  "IndirectReferencesINTEL\0" // IR(9642, 24)
  "InputAttachment\0" // IR(9666, 16)
  "InputAttachmentArrayDynamicIndexing\0" // IR(9682, 36)
  "InputAttachmentArrayDynamicIndexingEXT\0" // IR(9718, 39)
  "InputAttachmentArrayNonUniformIndexing\0" // IR(9757, 39)
  "InputAttachmentArrayNonUniformIndexingEXT\0" // IR(9796, 42)
  "Int16\0" // IR(9838, 6)
  "Int64\0" // IR(9844, 6)
  "Int64Atomics\0" // IR(9850, 13)
  "Int64ImageEXT\0" // IR(9863, 14)
  "Int8\0" // IR(9877, 5)
  "IntegerFunctions2INTEL\0" // IR(9882, 23)
  "InterpolationFunction\0" // IR(9905, 22)
  "Kernel\0" // IR(9927, 7)
  "KernelAttributesINTEL\0" // IR(9934, 22)
  "Linkage\0" // IR(9956, 8)
  "LiteralSampler\0" // IR(9964, 15)
  "LongCompositesINTEL\0" // IR(9979, 20)
  "LoopFuseINTEL\0" // IR(9999, 14)
  "MaskedGatherScatterINTEL\0" // IR(10013, 25)
  "Matrix\0" // IR(10038, 7)
  "MemoryAccessAliasingINTEL\0" // IR(10045, 26)
  "MeshShadingEXT\0" // IR(10071, 15)
  "MeshShadingNV\0" // IR(10086, 14)
  "MinLod\0" // IR(10100, 7)
  "MultiView\0" // IR(10107, 10)
  "MultiViewport\0" // IR(10117, 14)
  "NamedBarrier\0" // IR(10131, 13)
  "OptNoneEXT\0" // IR(10144, 11)
  "OptNoneINTEL\0" // IR(10155, 13)
  "PerViewAttributesNV\0" // IR(10168, 20)
  "PhysicalStorageBufferAddresses\0" // IR(10188, 31)
  "PhysicalStorageBufferAddressesEXT\0" // IR(10219, 34)
  "PipeStorage\0" // IR(10253, 12)
  "Pipes\0" // IR(10265, 6)
  "QuadControlKHR\0" // IR(10271, 15)
  "RawAccessChainsNV\0" // IR(10286, 18)
  "RayCullMaskKHR\0" // IR(10304, 15)
  "RayQueryKHR\0" // IR(10319, 12)
  "RayQueryPositionFetchKHR\0" // IR(10331, 25)
  "RayQueryProvisionalKHR\0" // IR(10356, 23)
  "RayTracingClusterAccelerationStructureNV\0" // IR(10379, 41)
  "RayTracingDisplacementMicromapNV\0" // IR(10420, 33)
  "RayTracingKHR\0" // IR(10453, 14)
  "RayTracingLinearSweptSpheresGeometryNV\0" // IR(10467, 39)
  "RayTracingMotionBlurNV\0" // IR(10506, 23)
  "RayTracingNV\0" // IR(10529, 13)
  "RayTracingOpacityMicromapEXT\0" // IR(10542, 29)
  "RayTracingPositionFetchKHR\0" // IR(10571, 27)
  "RayTracingProvisionalKHR\0" // IR(10598, 25)
  "RayTracingSpheresGeometryNV\0" // IR(10623, 28)
  "RayTraversalPrimitiveCullingKHR\0" // IR(10651, 32)
  "RegisterLimitsINTEL\0" // IR(10683, 20)
  "ReplicatedCompositesEXT\0" // IR(10703, 24)
  "RoundToInfinityINTEL\0" // IR(10727, 21)
  "RoundingModeRTE\0" // IR(10748, 16)
  "RoundingModeRTZ\0" // IR(10764, 16)
  "RuntimeAlignedAttributeINTEL\0" // IR(10780, 29)
  "RuntimeDescriptorArray\0" // IR(10809, 23)
  "RuntimeDescriptorArrayEXT\0" // IR(10832, 26)
  "SampleMaskOverrideCoverageNV\0" // IR(10858, 29)
  "SampleMaskPostDepthCoverage\0" // IR(10887, 28)
  "SampleRateShading\0" // IR(10915, 18)
  "Sampled1D\0" // IR(10933, 10)
  "SampledBuffer\0" // IR(10943, 14)
  "SampledCubeArray\0" // IR(10957, 17)
  "SampledImageArrayDynamicIndexing\0" // IR(10974, 33)
  "SampledImageArrayNonUniformIndexing\0" // IR(11007, 36)
  "SampledImageArrayNonUniformIndexingEXT\0" // IR(11043, 39)
  "SampledRect\0" // IR(11082, 12)
  "Shader\0" // IR(11094, 7)
  "ShaderClockKHR\0" // IR(11101, 15)
  "ShaderEnqueueAMDX\0" // IR(11116, 18)
  "ShaderInvocationReorderNV\0" // IR(11134, 26)
  "ShaderLayer\0" // IR(11160, 12)
  "ShaderNonUniform\0" // IR(11172, 17)
  "ShaderNonUniformEXT\0" // IR(11189, 20)
  "ShaderSMBuiltinsNV\0" // IR(11209, 19)
  "ShaderStereoViewNV\0" // IR(11228, 19)
  "ShaderViewportIndex\0" // IR(11247, 20)
  "ShaderViewportIndexLayerEXT\0" // IR(11267, 28)
  "ShaderViewportIndexLayerNV\0" // IR(11295, 27)
  "ShaderViewportMaskNV\0" // IR(11322, 21)
  "ShadingRateNV\0" // IR(11343, 14)
  "SignedZeroInfNanPreserve\0" // IR(11357, 25)
  "SparseResidency\0" // IR(11382, 16)
  "SplitBarrierINTEL\0" // IR(11398, 18)
  "StencilExportEXT\0" // IR(11416, 17)
  "StorageBuffer16BitAccess\0" // IR(11433, 25)
  "StorageBuffer8BitAccess\0" // IR(11458, 24)
  "StorageBufferArrayDynamicIndexing\0" // IR(11482, 34)
  "StorageBufferArrayNonUniformIndexing\0" // IR(11516, 37)
  "StorageBufferArrayNonUniformIndexingEXT\0" // IR(11553, 40)
  "StorageImageArrayDynamicIndexing\0" // IR(11593, 33)
  "StorageImageArrayNonUniformIndexing\0" // IR(11626, 36)
  "StorageImageArrayNonUniformIndexingEXT\0" // IR(11662, 39)
  "StorageImageExtendedFormats\0" // IR(11701, 28)
  "StorageImageMultisample\0" // IR(11729, 24)
  "StorageImageReadWithoutFormat\0" // IR(11753, 30)
  "StorageImageWriteWithoutFormat\0" // IR(11783, 31)
  "StorageInputOutput16\0" // IR(11814, 21)
  "StoragePushConstant16\0" // IR(11835, 22)
  "StoragePushConstant8\0" // IR(11857, 21)
  "StorageTexelBufferArrayDynamicIndexing\0" // IR(11878, 39)
  "StorageTexelBufferArrayDynamicIndexingEXT\0" // IR(11917, 42)
  "StorageTexelBufferArrayNonUniformIndexing\0" // IR(11959, 42)
  "StorageTexelBufferArrayNonUniformIndexingEXT\0" // IR(12001, 45)
  "StorageUniform16\0" // IR(12046, 17)
  "StorageUniformBufferBlock16\0" // IR(12063, 28)
  "Subgroup2DBlockIOINTEL\0" // IR(12091, 23)
  "Subgroup2DBlockTransformINTEL\0" // IR(12114, 30)
  "Subgroup2DBlockTransposeINTEL\0" // IR(12144, 30)
  "SubgroupAvcMotionEstimationChromaINTEL\0" // IR(12174, 39)
  "SubgroupAvcMotionEstimationINTEL\0" // IR(12213, 33)
  "SubgroupAvcMotionEstimationIntraINTEL\0" // IR(12246, 38)
  "SubgroupBallotKHR\0" // IR(12284, 18)
  "SubgroupBufferBlockIOINTEL\0" // IR(12302, 27)
  "SubgroupBufferPrefetchINTEL\0" // IR(12329, 28)
  "SubgroupDispatch\0" // IR(12357, 17)
  "SubgroupImageBlockIOINTEL\0" // IR(12374, 26)
  "SubgroupImageMediaBlockIOINTEL\0" // IR(12400, 31)
  "SubgroupMatrixMultiplyAccumulateINTEL\0" // IR(12431, 38)
  "SubgroupShuffleINTEL\0" // IR(12469, 21)
  "SubgroupVoteKHR\0" // IR(12490, 16)
  "TaskSequenceINTEL\0" // IR(12506, 18)
  "TensorAddressingNV\0" // IR(12524, 19)
  "TensorFloat32RoundingINTEL\0" // IR(12543, 27)
  "TernaryBitwiseFunctionINTEL\0" // IR(12570, 28)
  "Tessellation\0" // IR(12598, 13)
  "TessellationPointSize\0" // IR(12611, 22)
  "TextureBlockMatch2QCOM\0" // IR(12633, 23)
  "TextureBlockMatchQCOM\0" // IR(12656, 22)
  "TextureBoxFilterQCOM\0" // IR(12678, 21)
  "TextureSampleWeightedQCOM\0" // IR(12699, 26)
  "TileImageColorReadAccessEXT\0" // IR(12725, 28)
  "TileImageDepthReadAccessEXT\0" // IR(12753, 28)
  "TileImageStencilReadAccessEXT\0" // IR(12781, 30)
  "TileShadingQCOM\0" // IR(12811, 16)
  "TransformFeedback\0" // IR(12827, 18)
  "USMStorageClassesINTEL\0" // IR(12845, 23)
  "UniformAndStorageBuffer16BitAccess\0" // IR(12868, 35)
  "UniformAndStorageBuffer8BitAccess\0" // IR(12903, 34)
  "UniformBufferArrayDynamicIndexing\0" // IR(12937, 34)
  "UniformBufferArrayNonUniformIndexing\0" // IR(12971, 37)
  "UniformBufferArrayNonUniformIndexingEXT\0" // IR(13008, 40)
  "UniformDecoration\0" // IR(13048, 18)
  "UniformTexelBufferArrayDynamicIndexing\0" // IR(13066, 39)
  "UniformTexelBufferArrayDynamicIndexingEXT\0" // IR(13105, 42)
  "UniformTexelBufferArrayNonUniformIndexing\0" // IR(13147, 42)
  "UniformTexelBufferArrayNonUniformIndexingEXT\0" // IR(13189, 45)
  "UnstructuredLoopControlsINTEL\0" // IR(13234, 30)
  "UntypedPointersKHR\0" // IR(13264, 19)
  "VariableLengthArrayINTEL\0" // IR(13283, 25)
  "VariablePointers\0" // IR(13308, 17)
  "VariablePointersStorageBuffer\0" // IR(13325, 30)
  "Vector16\0" // IR(13355, 9)
  "VectorAnyINTEL\0" // IR(13364, 15)
  "VectorComputeINTEL\0" // IR(13379, 19)
  "VulkanMemoryModel\0" // IR(13398, 18)
  "VulkanMemoryModelDeviceScope\0" // IR(13416, 29)
  "VulkanMemoryModelDeviceScopeKHR\0" // IR(13445, 32)
  "VulkanMemoryModelKHR\0" // IR(13477, 21)
  "WorkgroupMemoryExplicitLayout16BitAccessKHR\0" // IR(13498, 44)
  "WorkgroupMemoryExplicitLayout8BitAccessKHR\0" // IR(13542, 43)
  "WorkgroupMemoryExplicitLayoutKHR\0" // IR(13585, 33)
  "Address\0" // IR(13618, 8)
  "Boolean\0" // IR(13626, 8)
  "Float\0" // IR(13634, 6)
  "Signed\0" // IR(13640, 7)
  "SignedChar\0" // IR(13647, 11)
  "Unsigned\0" // IR(13658, 9)
  "UnsignedChar\0" // IR(13667, 13)
  "Unspecified\0" // IR(13680, 12)
  "Class\0" // IR(13692, 6)
  "Structure\0" // IR(13698, 10)
  "Union\0" // IR(13708, 6)
  "ImportedDeclaration\0" // IR(13714, 20)
  "ImportedModule\0" // IR(13734, 15)
  "FlagArtificial\0" // IR(13749, 15)
  "FlagExplicit\0" // IR(13764, 13)
  "FlagFwdDecl\0" // IR(13777, 12)
  "FlagIndirectVariable\0" // IR(13789, 21)
  "FlagIsDefinition\0" // IR(13810, 17)
  "FlagIsEnumClass\0" // IR(13827, 16)
  "FlagIsLocal\0" // IR(13843, 12)
  "FlagIsOptimized\0" // IR(13855, 16)
  "FlagIsPrivate\0" // IR(13871, 14)
  "FlagIsProtected\0" // IR(13885, 16)
  "FlagIsPublic\0" // IR(13901, 13)
  "FlagLValueReference\0" // IR(13914, 20)
  "FlagObjectPointer\0" // IR(13934, 18)
  "FlagPrototyped\0" // IR(13952, 15)
  "FlagRValueReference\0" // IR(13967, 20)
  "FlagStaticMember\0" // IR(13987, 17)
  "FlagTypePassByReference\0" // IR(14004, 24)
  "FlagTypePassByValue\0" // IR(14028, 20)
  "None\0" // IR(14048, 5)
  "BitPiece\0" // IR(14053, 9)
  "Constu\0" // IR(14062, 7)
  "Deref\0" // IR(14069, 6)
  "Fragment\0" // IR(14075, 9)
  "Minus\0" // IR(14084, 6)
  "Plus\0" // IR(14090, 5)
  "PlusUconst\0" // IR(14095, 11)
  "StackValue\0" // IR(14106, 11)
  "Swap\0" // IR(14117, 5)
  "Xderef\0" // IR(14122, 7)
  "AtomicType\0" // IR(14129, 11)
  "ConstType\0" // IR(14140, 10)
  "RestrictType\0" // IR(14150, 13)
  "VolatileType\0" // IR(14163, 13)
  "Float16NV\0" // IR(14176, 10)
  "Float32NV\0" // IR(14186, 10)
  "Float64NV\0" // IR(14196, 10)
  "FloatE4M3NV\0" // IR(14206, 12)
  "FloatE5M2NV\0" // IR(14218, 12)
  "SignedInt16NV\0" // IR(14230, 14)
  "SignedInt32NV\0" // IR(14244, 14)
  "SignedInt64NV\0" // IR(14258, 14)
  "SignedInt8NV\0" // IR(14272, 13)
  "SignedInt8PackedNV\0" // IR(14285, 19)
  "UnsignedInt16NV\0" // IR(14304, 16)
  "UnsignedInt32NV\0" // IR(14320, 16)
  "UnsignedInt64NV\0" // IR(14336, 16)
  "UnsignedInt8NV\0" // IR(14352, 15)
  "UnsignedInt8PackedNV\0" // IR(14367, 21)
  "ColumnBlockedInterleavedARM\0" // IR(14388, 28)
  "ColumnMajorKHR\0" // IR(14416, 15)
  "RowBlockedInterleavedARM\0" // IR(14431, 25)
  "RowMajorKHR\0" // IR(14456, 12)
  "MatrixASignedComponentsKHR\0" // IR(14468, 27)
  "MatrixBSignedComponentsKHR\0" // IR(14495, 27)
  "MatrixCSignedComponentsKHR\0" // IR(14522, 27)
  "MatrixResultSignedComponentsKHR\0" // IR(14549, 32)
  "NoneKHR\0" // IR(14581, 8)
  "SaturatingAccumulationKHR\0" // IR(14589, 26)
  "2x2\0" // IR(14615, 4)
  "Column\0" // IR(14619, 7)
  "Row\0" // IR(14626, 4)
  "MatrixAKHR\0" // IR(14630, 11)
  "MatrixAccumulatorKHR\0" // IR(14641, 21)
  "MatrixBKHR\0" // IR(14662, 11)
  "ColumnMajorNV\0" // IR(14673, 14)
  "InferencingOptimalNV\0" // IR(14687, 21)
  "RowMajorNV\0" // IR(14708, 11)
  "TrainingOptimalNV\0" // IR(14719, 18)
  "AliasScopeINTEL\0" // IR(14737, 16)
  "Aliased\0" // IR(14753, 8)
  "AliasedPointer\0" // IR(14761, 15)
  "AliasedPointerEXT\0" // IR(14776, 18)
  "Alignment\0" // IR(14794, 10)
  "AlignmentId\0" // IR(14804, 12)
  "ArrayStride\0" // IR(14816, 12)
  "BankBitsINTEL\0" // IR(14828, 14)
  "BankwidthINTEL\0" // IR(14842, 15)
  "Binding\0" // IR(14857, 8)
  "BindlessImageNV\0" // IR(14865, 16)
  "BindlessSamplerNV\0" // IR(14881, 18)
  "Block\0" // IR(14899, 6)
  "BlockMatchSamplerQCOM\0" // IR(14905, 22)
  "BlockMatchTextureQCOM\0" // IR(14927, 22)
  "BoundImageNV\0" // IR(14949, 13)
  "BoundSamplerNV\0" // IR(14962, 15)
  "BufferBlock\0" // IR(14977, 12)
  "BufferLocationINTEL\0" // IR(14989, 20)
  "BuiltIn\0" // IR(15009, 8)
  "BurstCoalesceINTEL\0" // IR(15017, 19)
  "CPacked\0" // IR(15036, 8)
  "CacheControlLoadINTEL\0" // IR(15044, 22)
  "CacheControlStoreINTEL\0" // IR(15066, 23)
  "CacheSizeINTEL\0" // IR(15089, 15)
  "Centroid\0" // IR(15104, 9)
  "ClobberINTEL\0" // IR(15113, 13)
  "Coherent\0" // IR(15126, 9)
  "ColMajor\0" // IR(15135, 9)
  "Component\0" // IR(15144, 10)
  "ConduitKernelArgumentINTEL\0" // IR(15154, 27)
  "Constant\0" // IR(15181, 9)
  "CounterBuffer\0" // IR(15190, 14)
  "DescriptorSet\0" // IR(15204, 14)
  "DontStaticallyCoalesceINTEL\0" // IR(15218, 28)
  "DoublepumpINTEL\0" // IR(15246, 16)
  "ExplicitInterpAMD\0" // IR(15262, 18)
  "FPFastMathMode\0" // IR(15280, 15)
  "FPMaxErrorDecorationINTEL\0" // IR(15295, 26)
  "FPRoundingMode\0" // IR(15321, 15)
  "Flat\0" // IR(15336, 5)
  "ForcePow2DepthINTEL\0" // IR(15341, 20)
  "FuncParamAttr\0" // IR(15361, 14)
  "FuncParamIOKindINTEL\0" // IR(15375, 21)
  "FunctionDenormModeINTEL\0" // IR(15396, 24)
  "FunctionFloatingPointModeINTEL\0" // IR(15420, 31)
  "FunctionRoundingModeINTEL\0" // IR(15451, 26)
  "FuseLoopsInFunctionINTEL\0" // IR(15477, 25)
  "GLSLPacked\0" // IR(15502, 11)
  "GLSLShared\0" // IR(15513, 11)
  "GlobalVariableOffsetINTEL\0" // IR(15524, 26)
  "HitObjectShaderRecordBufferNV\0" // IR(15550, 30)
  "HlslCounterBufferGOOGLE\0" // IR(15580, 24)
  "HlslSemanticGOOGLE\0" // IR(15604, 19)
  "HostAccessINTEL\0" // IR(15623, 16)
  "IOPipeStorageINTEL\0" // IR(15639, 19)
  "ImplementInRegisterMapINTEL\0" // IR(15658, 28)
  "Index\0" // IR(15686, 6)
  "InitModeINTEL\0" // IR(15692, 14)
  "InitiationIntervalINTEL\0" // IR(15706, 24)
  "InputAttachmentIndex\0" // IR(15730, 21)
  "Invariant\0" // IR(15751, 10)
  "LatencyControlConstraintINTEL\0" // IR(15761, 30)
  "LatencyControlLabelINTEL\0" // IR(15791, 25)
  "LinkageAttributes\0" // IR(15816, 18)
  "Location\0" // IR(15834, 9)
  "MMHostInterfaceAddressWidthINTEL\0" // IR(15843, 33)
  "MMHostInterfaceDataWidthINTEL\0" // IR(15876, 30)
  "MMHostInterfaceLatencyINTEL\0" // IR(15906, 28)
  "MMHostInterfaceMaxBurstINTEL\0" // IR(15934, 29)
  "MMHostInterfaceReadWriteModeINTEL\0" // IR(15963, 34)
  "MMHostInterfaceWaitRequestINTEL\0" // IR(15997, 32)
  "MathOpDSPModeINTEL\0" // IR(16029, 19)
  "MatrixStride\0" // IR(16048, 13)
  "MaxByteOffset\0" // IR(16061, 14)
  "MaxByteOffsetId\0" // IR(16075, 16)
  "MaxConcurrencyINTEL\0" // IR(16091, 20)
  "MaxPrivateCopiesINTEL\0" // IR(16111, 22)
  "MaxReplicatesINTEL\0" // IR(16133, 19)
  "MediaBlockIOINTEL\0" // IR(16152, 18)
  "MemoryINTEL\0" // IR(16170, 12)
  "MergeINTEL\0" // IR(16182, 11)
  "NoAliasINTEL\0" // IR(16193, 13)
  "NoContraction\0" // IR(16206, 14)
  "NoPerspective\0" // IR(16220, 14)
  "NoSignedWrap\0" // IR(16234, 13)
  "NoUnsignedWrap\0" // IR(16247, 15)
  "NodeMaxPayloadsAMDX\0" // IR(16262, 20)
  "NodeSharesPayloadLimitsWithAMDX\0" // IR(16282, 32)
  "NonReadable\0" // IR(16314, 12)
  "NonUniform\0" // IR(16326, 11)
  "NonUniformEXT\0" // IR(16337, 14)
  "NonWritable\0" // IR(16351, 12)
  "NumbanksINTEL\0" // IR(16363, 14)
  "Offset\0" // IR(16377, 7)
  "OverrideCoverageNV\0" // IR(16384, 19)
  "PassthroughNV\0" // IR(16403, 14)
  "Patch\0" // IR(16417, 6)
  "PayloadDispatchIndirectAMDX\0" // IR(16423, 28)
  "PayloadNodeArraySizeAMDX\0" // IR(16451, 25)
  "PayloadNodeBaseIndexAMDX\0" // IR(16476, 25)
  "PayloadNodeNameAMDX\0" // IR(16501, 20)
  "PayloadNodeSparseArrayAMDX\0" // IR(16521, 27)
  "PerPrimitiveEXT\0" // IR(16548, 16)
  "PerPrimitiveNV\0" // IR(16564, 15)
  "PerTaskNV\0" // IR(16579, 10)
  "PerVertexKHR\0" // IR(16589, 13)
  "PerVertexNV\0" // IR(16602, 12)
  "PerViewNV\0" // IR(16614, 10)
  "PipelineEnableINTEL\0" // IR(16624, 20)
  "PrefetchINTEL\0" // IR(16644, 14)
  "ReferencedIndirectlyINTEL\0" // IR(16658, 26)
  "RegisterINTEL\0" // IR(16684, 14)
  "RegisterMapKernelArgumentINTEL\0" // IR(16698, 31)
  "RelaxedPrecision\0" // IR(16729, 17)
  "Restrict\0" // IR(16746, 9)
  "RestrictPointer\0" // IR(16755, 16)
  "RestrictPointerEXT\0" // IR(16771, 19)
  "RowMajor\0" // IR(16790, 9)
  "SIMTCallINTEL\0" // IR(16799, 14)
  "Sample\0" // IR(16813, 7)
  "SaturatedConversion\0" // IR(16820, 20)
  "SecondaryViewportRelativeNV\0" // IR(16840, 28)
  "SideEffectsINTEL\0" // IR(16868, 17)
  "SimpleDualPortINTEL\0" // IR(16885, 20)
  "SingleElementVectorINTEL\0" // IR(16905, 25)
  "SinglepumpINTEL\0" // IR(16930, 16)
  "SpecId\0" // IR(16946, 7)
  "StableKernelArgumentINTEL\0" // IR(16953, 26)
  "StackCallINTEL\0" // IR(16979, 15)
  "StallEnableINTEL\0" // IR(16994, 17)
  "StallFreeINTEL\0" // IR(17011, 15)
  "Stream\0" // IR(17026, 7)
  "StridesizeINTEL\0" // IR(17033, 16)
  "TrackFinishWritingAMDX\0" // IR(17049, 23)
  "TrueDualPortINTEL\0" // IR(17072, 18)
  "Uniform\0" // IR(17090, 8)
  "UniformId\0" // IR(17098, 10)
  "UserSemantic\0" // IR(17108, 13)
  "UserTypeGOOGLE\0" // IR(17121, 15)
  "VectorComputeCallableFunctionINTEL\0" // IR(17136, 35)
  "VectorComputeFunctionINTEL\0" // IR(17171, 27)
  "VectorComputeVariableINTEL\0" // IR(17198, 27)
  "ViewportRelativeNV\0" // IR(17225, 19)
  "Volatile\0" // IR(17244, 9)
  "WeightTextureQCOM\0" // IR(17253, 18)
  "WordsizeINTEL\0" // IR(17271, 14)
  "XfbBuffer\0" // IR(17285, 10)
  "XfbStride\0" // IR(17295, 10)
  "1D\0" // IR(17305, 3)
  "2D\0" // IR(17308, 3)
  "3D\0" // IR(17311, 3)
  "Buffer\0" // IR(17314, 7)
  "Cube\0" // IR(17321, 5)
  "Rect\0" // IR(17326, 5)
  "SubpassData\0" // IR(17331, 12)
  "TileImageDataEXT\0" // IR(17343, 17)
  "CoalescingAMDX\0" // IR(17360, 15)
  "ContractionOff\0" // IR(17375, 15)
  "DepthGreater\0" // IR(17390, 13)
  "DepthLess\0" // IR(17403, 10)
  "DepthReplacing\0" // IR(17413, 15)
  "DepthUnchanged\0" // IR(17428, 15)
  "DerivativeGroupLinearKHR\0" // IR(17443, 25)
  "DerivativeGroupLinearNV\0" // IR(17468, 24)
  "DerivativeGroupQuadsKHR\0" // IR(17492, 24)
  "DerivativeGroupQuadsNV\0" // IR(17516, 23)
  "EarlyAndLateFragmentTestsAMD\0" // IR(17539, 29)
  "EarlyFragmentTests\0" // IR(17568, 19)
  "FPFastMathDefault\0" // IR(17587, 18)
  "Finalizer\0" // IR(17605, 10)
  "FloatingPointModeALTINTEL\0" // IR(17615, 26)
  "FloatingPointModeIEEEINTEL\0" // IR(17641, 27)
  "Initializer\0" // IR(17668, 12)
  "InputLines\0" // IR(17680, 11)
  "InputLinesAdjacency\0" // IR(17691, 20)
  "InputPoints\0" // IR(17711, 12)
  "InputTrianglesAdjacency\0" // IR(17723, 24)
  "Invocations\0" // IR(17747, 12)
  "IsApiEntryAMDX\0" // IR(17759, 15)
  "Isolines\0" // IR(17774, 9)
  "LocalSize\0" // IR(17783, 10)
  "LocalSizeHint\0" // IR(17793, 14)
  "LocalSizeHintId\0" // IR(17807, 16)
  "LocalSizeId\0" // IR(17823, 12)
  "MaxNodeRecursionAMDX\0" // IR(17835, 21)
  "MaxNumWorkgroupsAMDX\0" // IR(17856, 21)
  "MaxWorkDimINTEL\0" // IR(17877, 16)
  "MaxWorkgroupSizeINTEL\0" // IR(17893, 22)
  "MaximallyReconvergesKHR\0" // IR(17915, 24)
  "MaximumRegistersINTEL\0" // IR(17939, 22)
  "MaximumRegistersIdINTEL\0" // IR(17961, 24)
  "NamedBarrierCountINTEL\0" // IR(17985, 23)
  "NamedMaximumRegistersINTEL\0" // IR(18008, 27)
  "NoGlobalOffsetINTEL\0" // IR(18035, 20)
  "NonCoherentColorAttachmentReadEXT\0" // IR(18055, 34)
  "NonCoherentDepthAttachmentReadEXT\0" // IR(18089, 34)
  "NonCoherentStencilAttachmentReadEXT\0" // IR(18123, 36)
  "NonCoherentTileAttachmentReadQCOM\0" // IR(18159, 34)
  "NumSIMDWorkitemsINTEL\0" // IR(18193, 22)
  "OriginLowerLeft\0" // IR(18215, 16)
  "OriginUpperLeft\0" // IR(18231, 16)
  "OutputLineStrip\0" // IR(18247, 16)
  "OutputLinesEXT\0" // IR(18263, 15)
  "OutputLinesNV\0" // IR(18278, 14)
  "OutputPoints\0" // IR(18292, 13)
  "OutputPrimitivesEXT\0" // IR(18305, 20)
  "OutputPrimitivesNV\0" // IR(18325, 19)
  "OutputTriangleStrip\0" // IR(18344, 20)
  "OutputTrianglesEXT\0" // IR(18364, 19)
  "OutputTrianglesNV\0" // IR(18383, 18)
  "OutputVertices\0" // IR(18401, 15)
  "PixelCenterInteger\0" // IR(18416, 19)
  "PixelInterlockOrderedEXT\0" // IR(18435, 25)
  "PixelInterlockUnorderedEXT\0" // IR(18460, 27)
  "PointMode\0" // IR(18487, 10)
  "PostDepthCoverage\0" // IR(18497, 18)
  "QuadDerivativesKHR\0" // IR(18515, 19)
  "Quads\0" // IR(18534, 6)
  "RegisterMapInterfaceINTEL\0" // IR(18540, 26)
  "RequireFullQuadsKHR\0" // IR(18566, 20)
  "RoundingModeRTNINTEL\0" // IR(18586, 21)
  "RoundingModeRTPINTEL\0" // IR(18607, 21)
  "SampleInterlockOrderedEXT\0" // IR(18628, 26)
  "SampleInterlockUnorderedEXT\0" // IR(18654, 28)
  "SchedulerTargetFmaxMhzINTEL\0" // IR(18682, 28)
  "ShadingRateInterlockOrderedEXT\0" // IR(18710, 31)
  "ShadingRateInterlockUnorderedEXT\0" // IR(18741, 33)
  "SharedLocalMemorySizeINTEL\0" // IR(18774, 27)
  "SharesInputWithAMDX\0" // IR(18801, 20)
  "SpacingEqual\0" // IR(18821, 13)
  "SpacingFractionalEven\0" // IR(18834, 22)
  "SpacingFractionalOdd\0" // IR(18856, 21)
  "StaticNumWorkgroupsAMDX\0" // IR(18877, 24)
  "StencilRefGreaterBackAMD\0" // IR(18901, 25)
  "StencilRefGreaterFrontAMD\0" // IR(18926, 26)
  "StencilRefLessBackAMD\0" // IR(18952, 22)
  "StencilRefLessFrontAMD\0" // IR(18974, 23)
  "StencilRefReplacingEXT\0" // IR(18997, 23)
  "StencilRefUnchangedBackAMD\0" // IR(19020, 27)
  "StencilRefUnchangedFrontAMD\0" // IR(19047, 28)
  "StreamingInterfaceINTEL\0" // IR(19075, 24)
  "SubgroupUniformControlFlowKHR\0" // IR(19099, 30)
  "SubgroupsPerWorkgroup\0" // IR(19129, 22)
  "SubgroupsPerWorkgroupId\0" // IR(19151, 24)
  "TileShadingRateQCOM\0" // IR(19175, 20)
  "Triangles\0" // IR(19195, 10)
  "VecTypeHint\0" // IR(19205, 12)
  "VertexOrderCcw\0" // IR(19217, 15)
  "VertexOrderCw\0" // IR(19232, 14)
  "Xfb\0" // IR(19246, 4)
  "AnyHitKHR\0" // IR(19250, 10)
  "AnyHitNV\0" // IR(19260, 9)
  "CallableKHR\0" // IR(19269, 12)
  "CallableNV\0" // IR(19281, 11)
  "ClosestHitKHR\0" // IR(19292, 14)
  "ClosestHitNV\0" // IR(19306, 13)
  "GLCompute\0" // IR(19319, 10)
  "IntersectionKHR\0" // IR(19329, 16)
  "IntersectionNV\0" // IR(19345, 15)
  "MeshEXT\0" // IR(19360, 8)
  "MeshNV\0" // IR(19368, 7)
  "MissKHR\0" // IR(19375, 8)
  "MissNV\0" // IR(19383, 7)
  "RayGenerationKHR\0" // IR(19390, 17)
  "RayGenerationNV\0" // IR(19407, 16)
  "TaskEXT\0" // IR(19423, 8)
  "TaskNV\0" // IR(19431, 7)
  "TessellationControl\0" // IR(19438, 20)
  "TessellationEvaluation\0" // IR(19458, 23)
  "Vertex\0" // IR(19481, 7)
  "FlushToZero\0" // IR(19488, 12)
  "Preserve\0" // IR(19500, 9)
  "BFloat16KHR\0" // IR(19509, 12)
  "ALT\0" // IR(19521, 4)
  "IEEE\0" // IR(19525, 5)
  "AllowContract\0" // IR(19530, 14)
  "AllowContractFastINTEL\0" // IR(19544, 23)
  "AllowReassoc\0" // IR(19567, 13)
  "AllowReassocINTEL\0" // IR(19580, 18)
  "AllowRecip\0" // IR(19598, 11)
  "AllowTransform\0" // IR(19609, 15)
  "Fast\0" // IR(19624, 5)
  "NSZ\0" // IR(19629, 4)
  "NotInf\0" // IR(19633, 7)
  "NotNaN\0" // IR(19640, 7)
  "RTE\0" // IR(19647, 4)
  "RTN\0" // IR(19651, 4)
  "RTP\0" // IR(19655, 4)
  "RTZ\0" // IR(19659, 4)
  "Horizontal2Pixels\0" // IR(19663, 18)
  "Horizontal4Pixels\0" // IR(19681, 18)
  "Vertical2Pixels\0" // IR(19699, 16)
  "Vertical4Pixels\0" // IR(19715, 16)
  "Const\0" // IR(19731, 6)
  "DontInline\0" // IR(19737, 11)
  "Inline\0" // IR(19748, 7)
  "Pure\0" // IR(19755, 5)
  "ByVal\0" // IR(19760, 6)
  "NoAlias\0" // IR(19766, 8)
  "NoCapture\0" // IR(19774, 10)
  "NoReadWrite\0" // IR(19784, 12)
  "NoWrite\0" // IR(19796, 8)
  "RuntimeAlignedINTEL\0" // IR(19804, 20)
  "Sext\0" // IR(19824, 5)
  "Sret\0" // IR(19829, 5)
  "Zext\0" // IR(19834, 5)
  "ClusteredReduce\0" // IR(19839, 16)
  "ExclusiveScan\0" // IR(19855, 14)
  "InclusiveScan\0" // IR(19869, 14)
  "PartitionedExclusiveScanNV\0" // IR(19883, 27)
  "PartitionedInclusiveScanNV\0" // IR(19910, 27)
  "PartitionedReduceNV\0" // IR(19937, 20)
  "Reduce\0" // IR(19957, 7)
  "NoneINTEL\0" // IR(19964, 10)
  "ReadINTEL\0" // IR(19974, 10)
  "ReadWriteINTEL\0" // IR(19984, 15)
  "WriteINTEL\0" // IR(19999, 11)
  "Bias\0" // IR(20010, 5)
  "ConstOffset\0" // IR(20015, 12)
  "ConstOffsets\0" // IR(20027, 13)
  "Grad\0" // IR(20040, 5)
  "Lod\0" // IR(20045, 4)
  "MakeTexelAvailable\0" // IR(20049, 19)
  "MakeTexelAvailableKHR\0" // IR(20068, 22)
  "MakeTexelVisible\0" // IR(20090, 17)
  "MakeTexelVisibleKHR\0" // IR(20107, 20)
  "NonPrivateTexel\0" // IR(20127, 16)
  "NonPrivateTexelKHR\0" // IR(20143, 19)
  "Nontemporal\0" // IR(20162, 12)
  "Offsets\0" // IR(20174, 8)
  "SignExtend\0" // IR(20182, 11)
  "VolatileTexel\0" // IR(20193, 14)
  "VolatileTexelKHR\0" // IR(20207, 17)
  "ZeroExtend\0" // IR(20224, 11)
  "HalfFloat\0" // IR(20235, 10)
  "SignedInt16\0" // IR(20245, 12)
  "SignedInt32\0" // IR(20257, 12)
  "SignedInt8\0" // IR(20269, 11)
  "SnormInt16\0" // IR(20280, 11)
  "SnormInt8\0" // IR(20291, 10)
  "UnormInt101010\0" // IR(20301, 15)
  "UnormInt101010_2\0" // IR(20316, 17)
  "UnormInt10X6EXT\0" // IR(20333, 16)
  "UnormInt12X4EXT\0" // IR(20349, 16)
  "UnormInt14X2EXT\0" // IR(20365, 16)
  "UnormInt16\0" // IR(20381, 11)
  "UnormInt24\0" // IR(20392, 11)
  "UnormInt2_101010EXT\0" // IR(20403, 20)
  "UnormInt8\0" // IR(20423, 10)
  "UnormShort555\0" // IR(20433, 14)
  "UnormShort565\0" // IR(20447, 14)
  "UnsignedInt10X6EXT\0" // IR(20461, 19)
  "UnsignedInt12X4EXT\0" // IR(20480, 19)
  "UnsignedInt14X2EXT\0" // IR(20499, 19)
  "UnsignedInt16\0" // IR(20518, 14)
  "UnsignedInt32\0" // IR(20532, 14)
  "UnsignedInt8\0" // IR(20546, 13)
  "UnsignedIntRaw10EXT\0" // IR(20559, 20)
  "UnsignedIntRaw12EXT\0" // IR(20579, 20)
  "A\0" // IR(20599, 2)
  "ABGR\0" // IR(20601, 5)
  "ARGB\0" // IR(20606, 5)
  "BGRA\0" // IR(20611, 5)
  "Depth\0" // IR(20616, 6)
  "DepthStencil\0" // IR(20622, 13)
  "Intensity\0" // IR(20635, 10)
  "Luminance\0" // IR(20645, 10)
  "R\0" // IR(20655, 2)
  "RA\0" // IR(20657, 3)
  "RG\0" // IR(20660, 3)
  "RGB\0" // IR(20663, 4)
  "RGBA\0" // IR(20667, 5)
  "RGBx\0" // IR(20672, 5)
  "RGx\0" // IR(20677, 4)
  "Rx\0" // IR(20681, 3)
  "sBGRA\0" // IR(20684, 6)
  "sRGB\0" // IR(20690, 5)
  "sRGBA\0" // IR(20695, 6)
  "sRGBx\0" // IR(20701, 6)
  "InitOnDeviceReprogramINTEL\0" // IR(20707, 27)
  "InitOnDeviceResetINTEL\0" // IR(20734, 23)
  "NoWait\0" // IR(20757, 7)
  "WaitKernel\0" // IR(20764, 11)
  "WaitWorkGroup\0" // IR(20775, 14)
  "CmdExecTime\0" // IR(20789, 12)
  "MayUsePrintf\0" // IR(20801, 13)
  "Export\0" // IR(20814, 7)
  "Import\0" // IR(20821, 7)
  "LinkOnceODR\0" // IR(20828, 12)
  "CachedINTEL\0" // IR(20840, 12)
  "ConstCachedINTEL\0" // IR(20852, 17)
  "InvalidateAfterReadINTEL\0" // IR(20869, 25)
  "StreamingINTEL\0" // IR(20894, 15)
  "UncachedINTEL\0" // IR(20909, 14)
  "DependencyArrayINTEL\0" // IR(20923, 21)
  "DependencyInfinite\0" // IR(20944, 19)
  "DependencyLength\0" // IR(20963, 17)
  "DontUnroll\0" // IR(20980, 11)
  "IterationMultiple\0" // IR(20991, 18)
  "LoopCoalesceINTEL\0" // IR(21009, 18)
  "LoopCountINTEL\0" // IR(21027, 15)
  "MaxInterleavingINTEL\0" // IR(21042, 21)
  "MaxIterations\0" // IR(21063, 14)
  "MaxReinvocationDelayINTEL\0" // IR(21077, 26)
  "MinIterations\0" // IR(21103, 14)
  "NoFusionINTEL\0" // IR(21117, 14)
  "PartialCount\0" // IR(21131, 13)
  "PeelCount\0" // IR(21144, 10)
  "SpeculatedIterationsINTEL\0" // IR(21154, 26)
  "Unroll\0" // IR(21180, 7)
  "MatrixAPackedBFloat16INTEL\0" // IR(21187, 27)
  "MatrixAPackedFloat16INTEL\0" // IR(21214, 26)
  "MatrixAPackedInt4INTEL\0" // IR(21240, 23)
  "MatrixAPackedInt8INTEL\0" // IR(21263, 23)
  "MatrixASignedComponentsINTEL\0" // IR(21286, 29)
  "MatrixATF32INTEL\0" // IR(21315, 17)
  "MatrixBPackedBFloat16INTEL\0" // IR(21332, 27)
  "MatrixBPackedFloat16INTEL\0" // IR(21359, 26)
  "MatrixBPackedInt4INTEL\0" // IR(21385, 23)
  "MatrixBPackedInt8INTEL\0" // IR(21408, 23)
  "MatrixBSignedComponentsINTEL\0" // IR(21431, 29)
  "MatrixBTF32INTEL\0" // IR(21460, 17)
  "MatrixCBFloat16INTEL\0" // IR(21477, 21)
  "MatrixResultBFloat16INTEL\0" // IR(21498, 26)
  "AliasScopeINTELMask\0" // IR(21524, 20)
  "Aligned\0" // IR(21544, 8)
  "MakePointerAvailable\0" // IR(21552, 21)
  "MakePointerAvailableKHR\0" // IR(21573, 24)
  "MakePointerVisible\0" // IR(21597, 19)
  "MakePointerVisibleKHR\0" // IR(21616, 22)
  "NoAliasINTELMask\0" // IR(21638, 17)
  "NonPrivatePointer\0" // IR(21655, 18)
  "NonPrivatePointerKHR\0" // IR(21673, 21)
  "GLSL450\0" // IR(21694, 8)
  "OpenCL\0" // IR(21702, 7)
  "Simple\0" // IR(21709, 7)
  "Vulkan\0" // IR(21716, 7)
  "VulkanKHR\0" // IR(21723, 10)
  "Acquire\0" // IR(21733, 8)
  "AcquireRelease\0" // IR(21741, 15)
  "AtomicCounterMemory\0" // IR(21756, 20)
  "CrossWorkgroupMemory\0" // IR(21776, 21)
  "ImageMemory\0" // IR(21797, 12)
  "MakeAvailable\0" // IR(21809, 14)
  "MakeAvailableKHR\0" // IR(21823, 17)
  "MakeVisible\0" // IR(21840, 12)
  "MakeVisibleKHR\0" // IR(21852, 15)
  "OutputMemory\0" // IR(21867, 13)
  "OutputMemoryKHR\0" // IR(21880, 16)
  "Relaxed\0" // IR(21896, 8)
  "Release\0" // IR(21904, 8)
  "SequentiallyConsistent\0" // IR(21912, 23)
  "SubgroupMemory\0" // IR(21935, 15)
  "UniformMemory\0" // IR(21950, 14)
  "WorkgroupMemory\0" // IR(21964, 16)
  "AutoINTEL\0" // IR(21980, 10)
  "SAT\0" // IR(21990, 4)
  "SAT_SYM\0" // IR(21994, 8)
  "SAT_ZERO\0" // IR(22002, 9)
  "WRAP\0" // IR(22011, 5)
  "PackedVectorFormat4x8Bit\0" // IR(22016, 25)
  "PackedVectorFormat4x8BitKHR\0" // IR(22041, 28)
  "RND\0" // IR(22069, 4)
  "RND_CONV\0" // IR(22073, 9)
  "RND_CONV_ODD\0" // IR(22082, 13)
  "RND_INF\0" // IR(22095, 8)
  "RND_MIN_INF\0" // IR(22103, 12)
  "RND_ZERO\0" // IR(22115, 9)
  "TRN\0" // IR(22124, 4)
  "TRN_ZERO\0" // IR(22128, 9)
  "RobustnessPerComponentNV\0" // IR(22137, 25)
  "RobustnessPerElementNV\0" // IR(22162, 23)
  "CullBackFacingTrianglesKHR\0" // IR(22185, 27)
  "CullFrontFacingTrianglesKHR\0" // IR(22212, 28)
  "CullNoOpaqueKHR\0" // IR(22240, 16)
  "CullOpaqueKHR\0" // IR(22256, 14)
  "ForceOpacityMicromap2StateEXT\0" // IR(22270, 30)
  "NoOpaqueKHR\0" // IR(22300, 12)
  "OpaqueKHR\0" // IR(22312, 10)
  "SkipAABBsKHR\0" // IR(22322, 13)
  "SkipBuiltinPrimitivesNV\0" // IR(22335, 24)
  "SkipClosestHitShaderKHR\0" // IR(22359, 24)
  "SkipTrianglesKHR\0" // IR(22383, 17)
  "TerminateOnFirstHitKHR\0" // IR(22400, 23)
  "RayQueryCandidateIntersectionAABBKHR\0" // IR(22423, 37)
  "RayQueryCandidateIntersectionTriangleKHR\0" // IR(22460, 41)
  "RayQueryCommittedIntersectionGeneratedKHR\0" // IR(22501, 42)
  "RayQueryCommittedIntersectionNoneKHR\0" // IR(22543, 37)
  "RayQueryCommittedIntersectionTriangleKHR\0" // IR(22580, 41)
  "RayQueryCandidateIntersectionKHR\0" // IR(22621, 33)
  "RayQueryCommittedIntersectionKHR\0" // IR(22654, 33)
  "Clamp\0" // IR(22687, 6)
  "ClampToEdge\0" // IR(22693, 12)
  "Repeat\0" // IR(22705, 7)
  "RepeatMirrored\0" // IR(22712, 15)
  "Linear\0" // IR(22727, 7)
  "Nearest\0" // IR(22734, 8)
  "R11fG11fB10f\0" // IR(22742, 13)
  "R16\0" // IR(22755, 4)
  "R16Snorm\0" // IR(22759, 9)
  "R16f\0" // IR(22768, 5)
  "R16i\0" // IR(22773, 5)
  "R16ui\0" // IR(22778, 6)
  "R32f\0" // IR(22784, 5)
  "R32i\0" // IR(22789, 5)
  "R32ui\0" // IR(22794, 6)
  "R64i\0" // IR(22800, 5)
  "R64ui\0" // IR(22805, 6)
  "R8\0" // IR(22811, 3)
  "R8Snorm\0" // IR(22814, 8)
  "R8i\0" // IR(22822, 4)
  "R8ui\0" // IR(22826, 5)
  "Rg16\0" // IR(22831, 5)
  "Rg16Snorm\0" // IR(22836, 10)
  "Rg16f\0" // IR(22846, 6)
  "Rg16i\0" // IR(22852, 6)
  "Rg16ui\0" // IR(22858, 7)
  "Rg32f\0" // IR(22865, 6)
  "Rg32i\0" // IR(22871, 6)
  "Rg32ui\0" // IR(22877, 7)
  "Rg8\0" // IR(22884, 4)
  "Rg8Snorm\0" // IR(22888, 9)
  "Rg8i\0" // IR(22897, 5)
  "Rg8ui\0" // IR(22902, 6)
  "Rgb10A2\0" // IR(22908, 8)
  "Rgb10a2ui\0" // IR(22916, 10)
  "Rgba16\0" // IR(22926, 7)
  "Rgba16Snorm\0" // IR(22933, 12)
  "Rgba16f\0" // IR(22945, 8)
  "Rgba16i\0" // IR(22953, 8)
  "Rgba16ui\0" // IR(22961, 9)
  "Rgba32f\0" // IR(22970, 8)
  "Rgba32i\0" // IR(22978, 8)
  "Rgba32ui\0" // IR(22986, 9)
  "Rgba8\0" // IR(22995, 6)
  "Rgba8Snorm\0" // IR(23001, 11)
  "Rgba8i\0" // IR(23012, 7)
  "Rgba8ui\0" // IR(23019, 8)
  "Unknown\0" // IR(23027, 8)
  "CrossDevice\0" // IR(23035, 12)
  "Device\0" // IR(23047, 7)
  "Invocation\0" // IR(23054, 11)
  "QueueFamily\0" // IR(23065, 12)
  "QueueFamilyKHR\0" // IR(23077, 15)
  "ShaderCallKHR\0" // IR(23092, 14)
  "Subgroup\0" // IR(23106, 9)
  "Workgroup\0" // IR(23115, 10)
  "DontFlatten\0" // IR(23125, 12)
  "Flatten\0" // IR(23137, 8)
  "IdentifierPossibleDuplicates\0" // IR(23145, 29)
  "FlagUnknownPhysicalLayout\0" // IR(23174, 26)
  "CPP_for_OpenCL\0" // IR(23200, 15)
  "ESSL\0" // IR(23215, 5)
  "GLSL\0" // IR(23220, 5)
  "HERO_C\0" // IR(23225, 7)
  "HLSL\0" // IR(23232, 5)
  "NZSL\0" // IR(23237, 5)
  "OpenCL_C\0" // IR(23242, 9)
  "OpenCL_CPP\0" // IR(23251, 11)
  "Rust\0" // IR(23262, 5)
  "SYCL\0" // IR(23267, 5)
  "Slang\0" // IR(23272, 6)
  "WGSL\0" // IR(23278, 5)
  "Zig\0" // IR(23283, 4)
  "AtomicCounter\0" // IR(23287, 14)
  "CallableDataKHR\0" // IR(23301, 16)
  "CallableDataNV\0" // IR(23317, 15)
  "CodeSectionINTEL\0" // IR(23332, 17)
  "CrossWorkgroup\0" // IR(23349, 15)
  "DeviceOnlyINTEL\0" // IR(23364, 16)
  "Function\0" // IR(23380, 9)
  "Generic\0" // IR(23389, 8)
  "HitAttributeKHR\0" // IR(23397, 16)
  "HitAttributeNV\0" // IR(23413, 15)
  "HitObjectAttributeNV\0" // IR(23428, 21)
  "HostOnlyINTEL\0" // IR(23449, 14)
  "Image\0" // IR(23463, 6)
  "IncomingCallableDataKHR\0" // IR(23469, 24)
  "IncomingCallableDataNV\0" // IR(23493, 23)
  "IncomingRayPayloadKHR\0" // IR(23516, 22)
  "IncomingRayPayloadNV\0" // IR(23538, 21)
  "Input\0" // IR(23559, 6)
  "NodePayloadAMDX\0" // IR(23565, 16)
  "Output\0" // IR(23581, 7)
  "PhysicalStorageBuffer\0" // IR(23588, 22)
  "PhysicalStorageBufferEXT\0" // IR(23610, 25)
  "Private\0" // IR(23635, 8)
  "PushConstant\0" // IR(23643, 13)
  "RayPayloadKHR\0" // IR(23656, 14)
  "RayPayloadNV\0" // IR(23670, 13)
  "ShaderRecordBufferKHR\0" // IR(23683, 22)
  "ShaderRecordBufferNV\0" // IR(23705, 21)
  "StorageBuffer\0" // IR(23726, 14)
  "TaskPayloadWorkgroupEXT\0" // IR(23740, 24)
  "TileAttachmentQCOM\0" // IR(23764, 19)
  "TileImageEXT\0" // IR(23783, 13)
  "UniformConstant\0" // IR(23796, 16)
  "WriteBackINTEL\0" // IR(23812, 15)
  "WriteThroughINTEL\0" // IR(23827, 18)
  "DecodeFunc\0" // IR(23845, 11)
  "TensorView\0" // IR(23856, 11)
  "Undefined\0" // IR(23867, 10)
  "SPV_OPERAND_TYPE_LITERAL_INTEGER\0" // IR(23877, 33)
  "SPV_OPERAND_TYPE_BUILT_IN\0" // IR(23910, 26)
  "SPV_OPERAND_TYPE_SCOPE_ID\0" // IR(23936, 26)
  "SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE\0" // IR(23962, 46)
  "SPV_OPERAND_TYPE_FP_ROUNDING_MODE\0" // IR(24008, 34)
  "SPV_OPERAND_TYPE_FP_FAST_MATH_MODE\0" // IR(24042, 35)
  "SPV_OPERAND_TYPE_LITERAL_STRING\0" // IR(24077, 32)
  "SPV_OPERAND_TYPE_LINKAGE_TYPE\0" // IR(24109, 30)
  "SPV_OPERAND_TYPE_ID\0" // IR(24139, 20)
  "SPV_OPERAND_TYPE_FPDENORM_MODE\0" // IR(24159, 31)
  "SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER\0" // IR(24190, 42)
  "SPV_OPERAND_TYPE_FPOPERATION_MODE\0" // IR(24232, 34)
  "SPV_OPERAND_TYPE_LITERAL_FLOAT\0" // IR(24266, 31)
  "SPV_OPERAND_TYPE_ACCESS_QUALIFIER\0" // IR(24297, 34)
  "SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER\0" // IR(24331, 39)
  "SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER\0" // IR(24370, 47)
  "SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL\0" // IR(24417, 36)
  "SPV_OPERAND_TYPE_STORE_CACHE_CONTROL\0" // IR(24453, 37)
  "SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS\0" // IR(24490, 51)
  "AbsISubINTEL\0" // IR(24541, 13)
  "AbsUSubINTEL\0" // IR(24554, 13)
  "AccessChain\0" // IR(24567, 12)
  "AliasDomainDeclINTEL\0" // IR(24579, 21)
  "AliasScopeDeclINTEL\0" // IR(24600, 20)
  "AliasScopeListDeclINTEL\0" // IR(24620, 24)
  "All\0" // IR(24644, 4)
  "AllocateNodePayloadsAMDX\0" // IR(24648, 25)
  "Any\0" // IR(24673, 4)
  "ArbitraryFloatACosINTEL\0" // IR(24677, 24)
  "ArbitraryFloatACosPiINTEL\0" // IR(24701, 26)
  "ArbitraryFloatASinINTEL\0" // IR(24727, 24)
  "ArbitraryFloatASinPiINTEL\0" // IR(24751, 26)
  "ArbitraryFloatATan2INTEL\0" // IR(24777, 25)
  "ArbitraryFloatATanINTEL\0" // IR(24802, 24)
  "ArbitraryFloatATanPiINTEL\0" // IR(24826, 26)
  "ArbitraryFloatAddINTEL\0" // IR(24852, 23)
  "ArbitraryFloatCastFromIntINTEL\0" // IR(24875, 31)
  "ArbitraryFloatCastINTEL\0" // IR(24906, 24)
  "ArbitraryFloatCastToIntINTEL\0" // IR(24930, 29)
  "ArbitraryFloatCbrtINTEL\0" // IR(24959, 24)
  "ArbitraryFloatCosINTEL\0" // IR(24983, 23)
  "ArbitraryFloatCosPiINTEL\0" // IR(25006, 25)
  "ArbitraryFloatDivINTEL\0" // IR(25031, 23)
  "ArbitraryFloatEQINTEL\0" // IR(25054, 22)
  "ArbitraryFloatExp10INTEL\0" // IR(25076, 25)
  "ArbitraryFloatExp2INTEL\0" // IR(25101, 24)
  "ArbitraryFloatExpINTEL\0" // IR(25125, 23)
  "ArbitraryFloatExpm1INTEL\0" // IR(25148, 25)
  "ArbitraryFloatGEINTEL\0" // IR(25173, 22)
  "ArbitraryFloatGTINTEL\0" // IR(25195, 22)
  "ArbitraryFloatHypotINTEL\0" // IR(25217, 25)
  "ArbitraryFloatLEINTEL\0" // IR(25242, 22)
  "ArbitraryFloatLTINTEL\0" // IR(25264, 22)
  "ArbitraryFloatLog10INTEL\0" // IR(25286, 25)
  "ArbitraryFloatLog1pINTEL\0" // IR(25311, 25)
  "ArbitraryFloatLog2INTEL\0" // IR(25336, 24)
  "ArbitraryFloatLogINTEL\0" // IR(25360, 23)
  "ArbitraryFloatMulINTEL\0" // IR(25383, 23)
  "ArbitraryFloatPowINTEL\0" // IR(25406, 23)
  "ArbitraryFloatPowNINTEL\0" // IR(25429, 24)
  "ArbitraryFloatPowRINTEL\0" // IR(25453, 24)
  "ArbitraryFloatRSqrtINTEL\0" // IR(25477, 25)
  "ArbitraryFloatRecipINTEL\0" // IR(25502, 25)
  "ArbitraryFloatSinCosINTEL\0" // IR(25527, 26)
  "ArbitraryFloatSinCosPiINTEL\0" // IR(25553, 28)
  "ArbitraryFloatSinINTEL\0" // IR(25581, 23)
  "ArbitraryFloatSinPiINTEL\0" // IR(25604, 25)
  "ArbitraryFloatSqrtINTEL\0" // IR(25629, 24)
  "ArbitraryFloatSubINTEL\0" // IR(25653, 23)
  "ArrayLength\0" // IR(25676, 12)
  "AsmCallINTEL\0" // IR(25688, 13)
  "AsmTargetINTEL\0" // IR(25701, 15)
  "AssumeTrueKHR\0" // IR(25716, 14)
  "AtomicAnd\0" // IR(25730, 10)
  "AtomicCompareExchange\0" // IR(25740, 22)
  "AtomicCompareExchangeWeak\0" // IR(25762, 26)
  "AtomicExchange\0" // IR(25788, 15)
  "AtomicFAddEXT\0" // IR(25803, 14)
  "AtomicFMaxEXT\0" // IR(25817, 14)
  "AtomicFMinEXT\0" // IR(25831, 14)
  "AtomicFlagClear\0" // IR(25845, 16)
  "AtomicFlagTestAndSet\0" // IR(25861, 21)
  "AtomicIAdd\0" // IR(25882, 11)
  "AtomicIDecrement\0" // IR(25893, 17)
  "AtomicIIncrement\0" // IR(25910, 17)
  "AtomicISub\0" // IR(25927, 11)
  "AtomicLoad\0" // IR(25938, 11)
  "AtomicOr\0" // IR(25949, 9)
  "AtomicSMax\0" // IR(25958, 11)
  "AtomicSMin\0" // IR(25969, 11)
  "AtomicStore\0" // IR(25980, 12)
  "AtomicUMax\0" // IR(25992, 11)
  "AtomicUMin\0" // IR(26003, 11)
  "AtomicXor\0" // IR(26014, 10)
  "BeginInvocationInterlockEXT\0" // IR(26024, 28)
  "BitCount\0" // IR(26052, 9)
  "BitFieldInsert\0" // IR(26061, 15)
  "BitFieldSExtract\0" // IR(26076, 17)
  "BitFieldUExtract\0" // IR(26093, 17)
  "BitReverse\0" // IR(26110, 11)
  "Bitcast\0" // IR(26121, 8)
  "BitwiseAnd\0" // IR(26129, 11)
  "BitwiseFunctionINTEL\0" // IR(26140, 21)
  "BitwiseOr\0" // IR(26161, 10)
  "BitwiseXor\0" // IR(26171, 11)
  "Branch\0" // IR(26182, 7)
  "BranchConditional\0" // IR(26189, 18)
  "BuildNDRange\0" // IR(26207, 13)
  "Capability\0" // IR(26220, 11)
  "CaptureEventProfilingInfo\0" // IR(26231, 26)
  "ColorAttachmentReadEXT\0" // IR(26257, 23)
  "CommitReadPipe\0" // IR(26280, 15)
  "CommitWritePipe\0" // IR(26295, 16)
  "CompositeConstruct\0" // IR(26311, 19)
  "CompositeConstructContinuedINTEL\0" // IR(26330, 33)
  "CompositeConstructReplicateEXT\0" // IR(26363, 31)
  "CompositeExtract\0" // IR(26394, 17)
  "CompositeInsert\0" // IR(26411, 16)
  "ConstantComposite\0" // IR(26427, 18)
  "ConstantCompositeContinuedINTEL\0" // IR(26445, 32)
  "ConstantCompositeReplicateEXT\0" // IR(26477, 30)
  "ConstantFalse\0" // IR(26507, 14)
  "ConstantFunctionPointerINTEL\0" // IR(26521, 29)
  "ConstantNull\0" // IR(26550, 13)
  "ConstantPipeStorage\0" // IR(26563, 20)
  "ConstantSampler\0" // IR(26583, 16)
  "ConstantStringAMDX\0" // IR(26599, 19)
  "ConstantTrue\0" // IR(26618, 13)
  "ControlBarrier\0" // IR(26631, 15)
  "ControlBarrierArriveINTEL\0" // IR(26646, 26)
  "ControlBarrierWaitINTEL\0" // IR(26672, 24)
  "ConvertBF16ToFINTEL\0" // IR(26696, 20)
  "ConvertFToBF16INTEL\0" // IR(26716, 20)
  "ConvertFToS\0" // IR(26736, 12)
  "ConvertFToU\0" // IR(26748, 12)
  "ConvertImageToUNV\0" // IR(26760, 18)
  "ConvertPtrToU\0" // IR(26778, 14)
  "ConvertSToF\0" // IR(26792, 12)
  "ConvertSampledImageToUNV\0" // IR(26804, 25)
  "ConvertSamplerToUNV\0" // IR(26829, 20)
  "ConvertUToAccelerationStructureKHR\0" // IR(26849, 35)
  "ConvertUToF\0" // IR(26884, 12)
  "ConvertUToImageNV\0" // IR(26896, 18)
  "ConvertUToPtr\0" // IR(26914, 14)
  "ConvertUToSampledImageNV\0" // IR(26928, 25)
  "ConvertUToSamplerNV\0" // IR(26953, 20)
  "CooperativeMatrixConvertNV\0" // IR(26973, 27)
  "CooperativeMatrixLengthKHR\0" // IR(27000, 27)
  "CooperativeMatrixLengthNV\0" // IR(27027, 26)
  "CooperativeMatrixLoadKHR\0" // IR(27053, 25)
  "CooperativeMatrixLoadNV\0" // IR(27078, 24)
  "CooperativeMatrixLoadTensorNV\0" // IR(27102, 30)
  "CooperativeMatrixMulAddKHR\0" // IR(27132, 27)
  "CooperativeMatrixMulAddNV\0" // IR(27159, 26)
  "CooperativeMatrixPerElementOpNV\0" // IR(27185, 32)
  "CooperativeMatrixReduceNV\0" // IR(27217, 26)
  "CooperativeMatrixStoreKHR\0" // IR(27243, 26)
  "CooperativeMatrixStoreNV\0" // IR(27269, 25)
  "CooperativeMatrixStoreTensorNV\0" // IR(27294, 31)
  "CooperativeMatrixTransposeNV\0" // IR(27325, 29)
  "CooperativeVectorLoadNV\0" // IR(27354, 24)
  "CooperativeVectorMatrixMulAddNV\0" // IR(27378, 32)
  "CooperativeVectorMatrixMulNV\0" // IR(27410, 29)
  "CooperativeVectorOuterProductAccumulateNV\0" // IR(27439, 42)
  "CooperativeVectorReduceSumAccumulateNV\0" // IR(27481, 39)
  "CooperativeVectorStoreNV\0" // IR(27520, 25)
  "CopyLogical\0" // IR(27545, 12)
  "CopyMemory\0" // IR(27557, 11)
  "CopyMemorySized\0" // IR(27568, 16)
  "CopyObject\0" // IR(27584, 11)
  "CreatePipeFromPipeStorage\0" // IR(27595, 26)
  "CreateTensorLayoutNV\0" // IR(27621, 21)
  "CreateTensorViewNV\0" // IR(27642, 19)
  "CreateUserEvent\0" // IR(27661, 16)
  "CrossWorkgroupCastToPtrINTEL\0" // IR(27677, 29)
  "DPdx\0" // IR(27706, 5)
  "DPdxCoarse\0" // IR(27711, 11)
  "DPdxFine\0" // IR(27722, 9)
  "DPdy\0" // IR(27731, 5)
  "DPdyCoarse\0" // IR(27736, 11)
  "DPdyFine\0" // IR(27747, 9)
  "Decorate\0" // IR(27756, 9)
  "DecorateId\0" // IR(27765, 11)
  "DecorateString\0" // IR(27776, 15)
  "DecorateStringGOOGLE\0" // IR(27791, 21)
  "DecorationGroup\0" // IR(27812, 16)
  "DepthAttachmentReadEXT\0" // IR(27828, 23)
  "Dot\0" // IR(27851, 4)
  "EmitMeshTasksEXT\0" // IR(27855, 17)
  "EmitStreamVertex\0" // IR(27872, 17)
  "EmitVertex\0" // IR(27889, 11)
  "EndInvocationInterlockEXT\0" // IR(27900, 26)
  "EndPrimitive\0" // IR(27926, 13)
  "EndStreamPrimitive\0" // IR(27939, 19)
  "EnqueueKernel\0" // IR(27958, 14)
  "EnqueueMarker\0" // IR(27972, 14)
  "EnqueueNodePayloadsAMDX\0" // IR(27986, 24)
  "EntryPoint\0" // IR(28010, 11)
  "ExecuteCallableKHR\0" // IR(28021, 19)
  "ExecuteCallableNV\0" // IR(28040, 18)
  "ExecutionMode\0" // IR(28058, 14)
  "ExecutionModeId\0" // IR(28072, 16)
  "ExpectKHR\0" // IR(28088, 10)
  "ExtInst\0" // IR(28098, 8)
  "ExtInstImport\0" // IR(28106, 14)
  "ExtInstWithForwardRefsKHR\0" // IR(28120, 26)
  "Extension\0" // IR(28146, 10)
  "FAdd\0" // IR(28156, 5)
  "FConvert\0" // IR(28161, 9)
  "FDiv\0" // IR(28170, 5)
  "FMod\0" // IR(28175, 5)
  "FMul\0" // IR(28180, 5)
  "FNegate\0" // IR(28185, 8)
  "FOrdEqual\0" // IR(28193, 10)
  "FOrdGreaterThan\0" // IR(28203, 16)
  "FOrdGreaterThanEqual\0" // IR(28219, 21)
  "FOrdLessThan\0" // IR(28240, 13)
  "FOrdLessThanEqual\0" // IR(28253, 18)
  "FOrdNotEqual\0" // IR(28271, 13)
  "FRem\0" // IR(28284, 5)
  "FSub\0" // IR(28289, 5)
  "FUnordEqual\0" // IR(28294, 12)
  "FUnordGreaterThan\0" // IR(28306, 18)
  "FUnordGreaterThanEqual\0" // IR(28324, 23)
  "FUnordLessThan\0" // IR(28347, 15)
  "FUnordLessThanEqual\0" // IR(28362, 20)
  "FUnordNotEqual\0" // IR(28382, 15)
  "FetchMicroTriangleVertexBarycentricNV\0" // IR(28397, 38)
  "FetchMicroTriangleVertexPositionNV\0" // IR(28435, 35)
  "FinishWritingNodePayloadAMDX\0" // IR(28470, 29)
  "FixedCosINTEL\0" // IR(28499, 14)
  "FixedCosPiINTEL\0" // IR(28513, 16)
  "FixedExpINTEL\0" // IR(28529, 14)
  "FixedLogINTEL\0" // IR(28543, 14)
  "FixedRecipINTEL\0" // IR(28557, 16)
  "FixedRsqrtINTEL\0" // IR(28573, 16)
  "FixedSinCosINTEL\0" // IR(28589, 17)
  "FixedSinCosPiINTEL\0" // IR(28606, 19)
  "FixedSinINTEL\0" // IR(28625, 14)
  "FixedSinPiINTEL\0" // IR(28639, 16)
  "FixedSqrtINTEL\0" // IR(28655, 15)
  "FragmentFetchAMD\0" // IR(28670, 17)
  "FragmentMaskFetchAMD\0" // IR(28687, 21)
  "FunctionCall\0" // IR(28708, 13)
  "FunctionEnd\0" // IR(28721, 12)
  "FunctionParameter\0" // IR(28733, 18)
  "FunctionPointerCallINTEL\0" // IR(28751, 25)
  "Fwidth\0" // IR(28776, 7)
  "FwidthCoarse\0" // IR(28783, 13)
  "FwidthFine\0" // IR(28796, 11)
  "GenericCastToPtr\0" // IR(28807, 17)
  "GenericCastToPtrExplicit\0" // IR(28824, 25)
  "GenericPtrMemSemantics\0" // IR(28849, 23)
  "GetDefaultQueue\0" // IR(28872, 16)
  "GetKernelLocalSizeForSubgroupCount\0" // IR(28888, 35)
  "GetKernelMaxNumSubgroups\0" // IR(28923, 25)
  "GetKernelNDrangeMaxSubGroupSize\0" // IR(28948, 32)
  "GetKernelNDrangeSubGroupCount\0" // IR(28980, 30)
  "GetKernelPreferredWorkGroupSizeMultiple\0" // IR(29010, 40)
  "GetKernelWorkGroupSize\0" // IR(29050, 23)
  "GetMaxPipePackets\0" // IR(29073, 18)
  "GetNumPipePackets\0" // IR(29091, 18)
  "GroupAll\0" // IR(29109, 9)
  "GroupAny\0" // IR(29118, 9)
  "GroupAsyncCopy\0" // IR(29127, 15)
  "GroupBitwiseAndKHR\0" // IR(29142, 19)
  "GroupBitwiseOrKHR\0" // IR(29161, 18)
  "GroupBitwiseXorKHR\0" // IR(29179, 19)
  "GroupBroadcast\0" // IR(29198, 15)
  "GroupCommitReadPipe\0" // IR(29213, 20)
  "GroupCommitWritePipe\0" // IR(29233, 21)
  "GroupDecorate\0" // IR(29254, 14)
  "GroupFAdd\0" // IR(29268, 10)
  "GroupFAddNonUniformAMD\0" // IR(29278, 23)
  "GroupFMax\0" // IR(29301, 10)
  "GroupFMaxNonUniformAMD\0" // IR(29311, 23)
  "GroupFMin\0" // IR(29334, 10)
  "GroupFMinNonUniformAMD\0" // IR(29344, 23)
  "GroupFMulKHR\0" // IR(29367, 13)
  "GroupIAdd\0" // IR(29380, 10)
  "GroupIAddNonUniformAMD\0" // IR(29390, 23)
  "GroupIMulKHR\0" // IR(29413, 13)
  "GroupLogicalAndKHR\0" // IR(29426, 19)
  "GroupLogicalOrKHR\0" // IR(29445, 18)
  "GroupLogicalXorKHR\0" // IR(29463, 19)
  "GroupMemberDecorate\0" // IR(29482, 20)
  "GroupNonUniformAll\0" // IR(29502, 19)
  "GroupNonUniformAllEqual\0" // IR(29521, 24)
  "GroupNonUniformAny\0" // IR(29545, 19)
  "GroupNonUniformBallotBitCount\0" // IR(29564, 30)
  "GroupNonUniformBallotBitExtract\0" // IR(29594, 32)
  "GroupNonUniformBallotFindLSB\0" // IR(29626, 29)
  "GroupNonUniformBallotFindMSB\0" // IR(29655, 29)
  "GroupNonUniformBitwiseAnd\0" // IR(29684, 26)
  "GroupNonUniformBitwiseOr\0" // IR(29710, 25)
  "GroupNonUniformBitwiseXor\0" // IR(29735, 26)
  "GroupNonUniformBroadcast\0" // IR(29761, 25)
  "GroupNonUniformBroadcastFirst\0" // IR(29786, 30)
  "GroupNonUniformElect\0" // IR(29816, 21)
  "GroupNonUniformFAdd\0" // IR(29837, 20)
  "GroupNonUniformFMax\0" // IR(29857, 20)
  "GroupNonUniformFMin\0" // IR(29877, 20)
  "GroupNonUniformFMul\0" // IR(29897, 20)
  "GroupNonUniformIAdd\0" // IR(29917, 20)
  "GroupNonUniformIMul\0" // IR(29937, 20)
  "GroupNonUniformInverseBallot\0" // IR(29957, 29)
  "GroupNonUniformLogicalAnd\0" // IR(29986, 26)
  "GroupNonUniformLogicalOr\0" // IR(30012, 25)
  "GroupNonUniformLogicalXor\0" // IR(30037, 26)
  "GroupNonUniformPartitionNV\0" // IR(30063, 27)
  "GroupNonUniformQuadAllKHR\0" // IR(30090, 26)
  "GroupNonUniformQuadAnyKHR\0" // IR(30116, 26)
  "GroupNonUniformQuadBroadcast\0" // IR(30142, 29)
  "GroupNonUniformQuadSwap\0" // IR(30171, 24)
  "GroupNonUniformSMax\0" // IR(30195, 20)
  "GroupNonUniformSMin\0" // IR(30215, 20)
  "GroupNonUniformShuffleDown\0" // IR(30235, 27)
  "GroupNonUniformShuffleUp\0" // IR(30262, 25)
  "GroupNonUniformShuffleXor\0" // IR(30287, 26)
  "GroupNonUniformUMax\0" // IR(30313, 20)
  "GroupNonUniformUMin\0" // IR(30333, 20)
  "GroupReserveReadPipePackets\0" // IR(30353, 28)
  "GroupReserveWritePipePackets\0" // IR(30381, 29)
  "GroupSMax\0" // IR(30410, 10)
  "GroupSMaxNonUniformAMD\0" // IR(30420, 23)
  "GroupSMin\0" // IR(30443, 10)
  "GroupSMinNonUniformAMD\0" // IR(30453, 23)
  "GroupUMax\0" // IR(30476, 10)
  "GroupUMaxNonUniformAMD\0" // IR(30486, 23)
  "GroupUMin\0" // IR(30509, 10)
  "GroupUMinNonUniformAMD\0" // IR(30519, 23)
  "GroupWaitEvents\0" // IR(30542, 16)
  "HitObjectExecuteShaderNV\0" // IR(30558, 25)
  "HitObjectGetAttributesNV\0" // IR(30583, 25)
  "HitObjectGetClusterIdNV\0" // IR(30608, 24)
  "HitObjectGetCurrentTimeNV\0" // IR(30632, 26)
  "HitObjectGetGeometryIndexNV\0" // IR(30658, 28)
  "HitObjectGetHitKindNV\0" // IR(30686, 22)
  "HitObjectGetInstanceCustomIndexNV\0" // IR(30708, 34)
  "HitObjectGetInstanceIdNV\0" // IR(30742, 25)
  "HitObjectGetLSSPositionsNV\0" // IR(30767, 27)
  "HitObjectGetLSSRadiiNV\0" // IR(30794, 23)
  "HitObjectGetObjectRayDirectionNV\0" // IR(30817, 33)
  "HitObjectGetObjectRayOriginNV\0" // IR(30850, 30)
  "HitObjectGetObjectToWorldNV\0" // IR(30880, 28)
  "HitObjectGetPrimitiveIndexNV\0" // IR(30908, 29)
  "HitObjectGetRayTMaxNV\0" // IR(30937, 22)
  "HitObjectGetRayTMinNV\0" // IR(30959, 22)
  "HitObjectGetShaderBindingTableRecordIndexNV\0" // IR(30981, 44)
  "HitObjectGetShaderRecordBufferHandleNV\0" // IR(31025, 39)
  "HitObjectGetSpherePositionNV\0" // IR(31064, 29)
  "HitObjectGetSphereRadiusNV\0" // IR(31093, 27)
  "HitObjectGetWorldRayDirectionNV\0" // IR(31120, 32)
  "HitObjectGetWorldRayOriginNV\0" // IR(31152, 29)
  "HitObjectGetWorldToObjectNV\0" // IR(31181, 28)
  "HitObjectIsEmptyNV\0" // IR(31209, 19)
  "HitObjectIsHitNV\0" // IR(31228, 17)
  "HitObjectIsLSSHitNV\0" // IR(31245, 20)
  "HitObjectIsMissNV\0" // IR(31265, 18)
  "HitObjectIsSphereHitNV\0" // IR(31283, 23)
  "HitObjectRecordEmptyNV\0" // IR(31306, 23)
  "HitObjectRecordHitMotionNV\0" // IR(31329, 27)
  "HitObjectRecordHitNV\0" // IR(31356, 21)
  "HitObjectRecordHitWithIndexMotionNV\0" // IR(31377, 36)
  "HitObjectRecordHitWithIndexNV\0" // IR(31413, 30)
  "HitObjectRecordMissMotionNV\0" // IR(31443, 28)
  "HitObjectRecordMissNV\0" // IR(31471, 22)
  "HitObjectTraceRayMotionNV\0" // IR(31493, 26)
  "HitObjectTraceRayNV\0" // IR(31519, 20)
  "IAdd\0" // IR(31539, 5)
  "IAddCarry\0" // IR(31544, 10)
  "IAddSatINTEL\0" // IR(31554, 13)
  "IAverageINTEL\0" // IR(31567, 14)
  "IAverageRoundedINTEL\0" // IR(31581, 21)
  "IEqual\0" // IR(31602, 7)
  "IMul\0" // IR(31609, 5)
  "IMul32x16INTEL\0" // IR(31614, 15)
  "INotEqual\0" // IR(31629, 10)
  "ISub\0" // IR(31639, 5)
  "ISubBorrow\0" // IR(31644, 11)
  "ISubSatINTEL\0" // IR(31655, 13)
  "IgnoreIntersectionKHR\0" // IR(31668, 22)
  "IgnoreIntersectionNV\0" // IR(31690, 21)
  "ImageBlockMatchGatherSADQCOM\0" // IR(31711, 29)
  "ImageBlockMatchGatherSSDQCOM\0" // IR(31740, 29)
  "ImageBlockMatchSADQCOM\0" // IR(31769, 23)
  "ImageBlockMatchSSDQCOM\0" // IR(31792, 23)
  "ImageBlockMatchWindowSADQCOM\0" // IR(31815, 29)
  "ImageBlockMatchWindowSSDQCOM\0" // IR(31844, 29)
  "ImageBoxFilterQCOM\0" // IR(31873, 19)
  "ImageDrefGather\0" // IR(31892, 16)
  "ImageFetch\0" // IR(31908, 11)
  "ImageGather\0" // IR(31919, 12)
  "ImageQueryFormat\0" // IR(31931, 17)
  "ImageQueryLevels\0" // IR(31948, 17)
  "ImageQueryLod\0" // IR(31965, 14)
  "ImageQueryOrder\0" // IR(31979, 16)
  "ImageQuerySamples\0" // IR(31995, 18)
  "ImageQuerySize\0" // IR(32013, 15)
  "ImageQuerySizeLod\0" // IR(32028, 18)
  "ImageRead\0" // IR(32046, 10)
  "ImageSampleDrefExplicitLod\0" // IR(32056, 27)
  "ImageSampleDrefImplicitLod\0" // IR(32083, 27)
  "ImageSampleExplicitLod\0" // IR(32110, 23)
  "ImageSampleFootprintNV\0" // IR(32133, 23)
  "ImageSampleImplicitLod\0" // IR(32156, 23)
  "ImageSampleProjDrefExplicitLod\0" // IR(32179, 31)
  "ImageSampleProjDrefImplicitLod\0" // IR(32210, 31)
  "ImageSampleProjExplicitLod\0" // IR(32241, 27)
  "ImageSampleProjImplicitLod\0" // IR(32268, 27)
  "ImageSampleWeightedQCOM\0" // IR(32295, 24)
  "ImageSparseDrefGather\0" // IR(32319, 22)
  "ImageSparseFetch\0" // IR(32341, 17)
  "ImageSparseGather\0" // IR(32358, 18)
  "ImageSparseRead\0" // IR(32376, 16)
  "ImageSparseSampleDrefExplicitLod\0" // IR(32392, 33)
  "ImageSparseSampleDrefImplicitLod\0" // IR(32425, 33)
  "ImageSparseSampleExplicitLod\0" // IR(32458, 29)
  "ImageSparseSampleImplicitLod\0" // IR(32487, 29)
  "ImageSparseSampleProjDrefExplicitLod\0" // IR(32516, 37)
  "ImageSparseSampleProjDrefImplicitLod\0" // IR(32553, 37)
  "ImageSparseSampleProjExplicitLod\0" // IR(32590, 33)
  "ImageSparseSampleProjImplicitLod\0" // IR(32623, 33)
  "ImageSparseTexelsResident\0" // IR(32656, 26)
  "ImageTexelPointer\0" // IR(32682, 18)
  "ImageWrite\0" // IR(32700, 11)
  "InBoundsAccessChain\0" // IR(32711, 20)
  "InBoundsPtrAccessChain\0" // IR(32731, 23)
  "IsFinite\0" // IR(32754, 9)
  "IsHelperInvocationEXT\0" // IR(32763, 22)
  "IsInf\0" // IR(32785, 6)
  "IsNan\0" // IR(32791, 6)
  "IsNodePayloadValidAMDX\0" // IR(32797, 23)
  "IsNormal\0" // IR(32820, 9)
  "IsValidEvent\0" // IR(32829, 13)
  "IsValidReserveId\0" // IR(32842, 17)
  "Kill\0" // IR(32859, 5)
  "Label\0" // IR(32864, 6)
  "LessOrGreater\0" // IR(32870, 14)
  "LifetimeStart\0" // IR(32884, 14)
  "LifetimeStop\0" // IR(32898, 13)
  "Line\0" // IR(32911, 5)
  "Load\0" // IR(32916, 5)
  "LogicalAnd\0" // IR(32921, 11)
  "LogicalEqual\0" // IR(32932, 13)
  "LogicalNot\0" // IR(32945, 11)
  "LogicalNotEqual\0" // IR(32956, 16)
  "LogicalOr\0" // IR(32972, 10)
  "LoopControlINTEL\0" // IR(32982, 17)
  "LoopMerge\0" // IR(32999, 10)
  "MaskedGatherINTEL\0" // IR(33009, 18)
  "MaskedScatterINTEL\0" // IR(33027, 19)
  "MatrixTimesMatrix\0" // IR(33046, 18)
  "MatrixTimesScalar\0" // IR(33064, 18)
  "MatrixTimesVector\0" // IR(33082, 18)
  "MemberDecorate\0" // IR(33100, 15)
  "MemberDecorateString\0" // IR(33115, 21)
  "MemberDecorateStringGOOGLE\0" // IR(33136, 27)
  "MemberName\0" // IR(33163, 11)
  "MemoryBarrier\0" // IR(33174, 14)
  "MemoryModel\0" // IR(33188, 12)
  "MemoryNamedBarrier\0" // IR(33200, 19)
  "ModuleProcessed\0" // IR(33219, 16)
  "Name\0" // IR(33235, 5)
  "NamedBarrierInitialize\0" // IR(33240, 23)
  "NoLine\0" // IR(33263, 7)
  "NodePayloadArrayLengthAMDX\0" // IR(33270, 27)
  "Nop\0" // IR(33297, 4)
  "Not\0" // IR(33301, 4)
  "Ordered\0" // IR(33305, 8)
  "OuterProduct\0" // IR(33313, 13)
  "Phi\0" // IR(33326, 4)
  "PtrAccessChain\0" // IR(33330, 15)
  "PtrCastToCrossWorkgroupINTEL\0" // IR(33345, 29)
  "PtrCastToGeneric\0" // IR(33374, 17)
  "PtrDiff\0" // IR(33391, 8)
  "PtrEqual\0" // IR(33399, 9)
  "PtrNotEqual\0" // IR(33408, 12)
  "QuantizeToF16\0" // IR(33420, 14)
  "RawAccessChainNV\0" // IR(33434, 17)
  "RayQueryConfirmIntersectionKHR\0" // IR(33451, 31)
  "RayQueryGenerateIntersectionKHR\0" // IR(33482, 32)
  "RayQueryGetClusterIdNV\0" // IR(33514, 23)
  "RayQueryGetIntersectionBarycentricsKHR\0" // IR(33537, 39)
  "RayQueryGetIntersectionCandidateAABBOpaqueKHR\0" // IR(33576, 46)
  "RayQueryGetIntersectionFrontFaceKHR\0" // IR(33622, 36)
  "RayQueryGetIntersectionGeometryIndexKHR\0" // IR(33658, 40)
  "RayQueryGetIntersectionInstanceCustomIndexKHR\0" // IR(33698, 46)
  "RayQueryGetIntersectionInstanceIdKHR\0" // IR(33744, 37)
  "RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR\0" // IR(33781, 65)
  "RayQueryGetIntersectionLSSHitValueNV\0" // IR(33846, 37)
  "RayQueryGetIntersectionLSSPositionsNV\0" // IR(33883, 38)
  "RayQueryGetIntersectionLSSRadiiNV\0" // IR(33921, 34)
  "RayQueryGetIntersectionObjectRayDirectionKHR\0" // IR(33955, 45)
  "RayQueryGetIntersectionObjectRayOriginKHR\0" // IR(34000, 42)
  "RayQueryGetIntersectionObjectToWorldKHR\0" // IR(34042, 40)
  "RayQueryGetIntersectionPrimitiveIndexKHR\0" // IR(34082, 41)
  "RayQueryGetIntersectionSpherePositionNV\0" // IR(34123, 40)
  "RayQueryGetIntersectionSphereRadiusNV\0" // IR(34163, 38)
  "RayQueryGetIntersectionTKHR\0" // IR(34201, 28)
  "RayQueryGetIntersectionTriangleVertexPositionsKHR\0" // IR(34229, 50)
  "RayQueryGetIntersectionTypeKHR\0" // IR(34279, 31)
  "RayQueryGetIntersectionWorldToObjectKHR\0" // IR(34310, 40)
  "RayQueryGetRayFlagsKHR\0" // IR(34350, 23)
  "RayQueryGetRayTMinKHR\0" // IR(34373, 22)
  "RayQueryGetWorldRayDirectionKHR\0" // IR(34395, 32)
  "RayQueryGetWorldRayOriginKHR\0" // IR(34427, 29)
  "RayQueryInitializeKHR\0" // IR(34456, 22)
  "RayQueryIsLSSHitNV\0" // IR(34478, 19)
  "RayQueryIsSphereHitNV\0" // IR(34497, 22)
  "RayQueryProceedKHR\0" // IR(34519, 19)
  "RayQueryTerminateKHR\0" // IR(34538, 21)
  "ReadClockKHR\0" // IR(34559, 13)
  "ReadPipe\0" // IR(34572, 9)
  "ReadPipeBlockingINTEL\0" // IR(34581, 22)
  "ReleaseEvent\0" // IR(34603, 13)
  "ReorderThreadWithHintNV\0" // IR(34616, 24)
  "ReorderThreadWithHitObjectNV\0" // IR(34640, 29)
  "ReportIntersectionKHR\0" // IR(34669, 22)
  "ReportIntersectionNV\0" // IR(34691, 21)
  "ReserveReadPipePackets\0" // IR(34712, 23)
  "ReserveWritePipePackets\0" // IR(34735, 24)
  "ReservedReadPipe\0" // IR(34759, 17)
  "ReservedWritePipe\0" // IR(34776, 18)
  "RestoreMemoryINTEL\0" // IR(34794, 19)
  "RetainEvent\0" // IR(34813, 12)
  "Return\0" // IR(34825, 7)
  "ReturnValue\0" // IR(34832, 12)
  "RoundFToTF32INTEL\0" // IR(34844, 18)
  "SConvert\0" // IR(34862, 9)
  "SDiv\0" // IR(34871, 5)
  "SDot\0" // IR(34876, 5)
  "SDotAccSat\0" // IR(34881, 11)
  "SDotAccSatKHR\0" // IR(34892, 14)
  "SDotKHR\0" // IR(34906, 8)
  "SGreaterThan\0" // IR(34914, 13)
  "SGreaterThanEqual\0" // IR(34927, 18)
  "SLessThan\0" // IR(34945, 10)
  "SLessThanEqual\0" // IR(34955, 15)
  "SMod\0" // IR(34970, 5)
  "SMulExtended\0" // IR(34975, 13)
  "SNegate\0" // IR(34988, 8)
  "SRem\0" // IR(34996, 5)
  "SUDot\0" // IR(35001, 6)
  "SUDotAccSat\0" // IR(35007, 12)
  "SUDotAccSatKHR\0" // IR(35019, 15)
  "SUDotKHR\0" // IR(35034, 9)
  "SampledImage\0" // IR(35043, 13)
  "SamplerImageAddressingModeNV\0" // IR(35056, 29)
  "SatConvertSToU\0" // IR(35085, 15)
  "SatConvertUToS\0" // IR(35100, 15)
  "SaveMemoryINTEL\0" // IR(35115, 16)
  "Select\0" // IR(35131, 7)
  "SelectionMerge\0" // IR(35138, 15)
  "SetMeshOutputsEXT\0" // IR(35153, 18)
  "SetUserEventStatus\0" // IR(35171, 19)
  "ShiftLeftLogical\0" // IR(35190, 17)
  "ShiftRightArithmetic\0" // IR(35207, 21)
  "ShiftRightLogical\0" // IR(35228, 18)
  "SignBitSet\0" // IR(35246, 11)
  "SizeOf\0" // IR(35257, 7)
  "Source\0" // IR(35264, 7)
  "SourceContinued\0" // IR(35271, 16)
  "SourceExtension\0" // IR(35287, 16)
  "SpecConstant\0" // IR(35303, 13)
  "SpecConstantComposite\0" // IR(35316, 22)
  "SpecConstantCompositeContinuedINTEL\0" // IR(35338, 36)
  "SpecConstantCompositeReplicateEXT\0" // IR(35374, 34)
  "SpecConstantFalse\0" // IR(35408, 18)
  "SpecConstantOp\0" // IR(35426, 15)
  "SpecConstantStringAMDX\0" // IR(35441, 23)
  "SpecConstantTrue\0" // IR(35464, 17)
  "StencilAttachmentReadEXT\0" // IR(35481, 25)
  "Store\0" // IR(35506, 6)
  "String\0" // IR(35512, 7)
  "Subgroup2DBlockLoadINTEL\0" // IR(35519, 25)
  "Subgroup2DBlockLoadTransformINTEL\0" // IR(35544, 34)
  "Subgroup2DBlockLoadTransposeINTEL\0" // IR(35578, 34)
  "Subgroup2DBlockPrefetchINTEL\0" // IR(35612, 29)
  "Subgroup2DBlockStoreINTEL\0" // IR(35641, 26)
  "SubgroupAllEqualKHR\0" // IR(35667, 20)
  "SubgroupAllKHR\0" // IR(35687, 15)
  "SubgroupAnyKHR\0" // IR(35702, 15)
  "SubgroupAvcBmeInitializeINTEL\0" // IR(35717, 30)
  "SubgroupAvcFmeInitializeINTEL\0" // IR(35747, 30)
  "SubgroupAvcImeAdjustRefOffsetINTEL\0" // IR(35777, 35)
  "SubgroupAvcImeConvertToMcePayloadINTEL\0" // IR(35812, 39)
  "SubgroupAvcImeConvertToMceResultINTEL\0" // IR(35851, 38)
  "SubgroupAvcImeEvaluateWithDualReferenceINTEL\0" // IR(35889, 45)
  "SubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL\0" // IR(35934, 53)
  "SubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL\0" // IR(35987, 56)
  "SubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL\0" // IR(36043, 54)
  "SubgroupAvcImeEvaluateWithSingleReferenceINTEL\0" // IR(36097, 47)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL\0" // IR(36144, 55)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL\0" // IR(36199, 58)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL\0" // IR(36257, 56)
  "SubgroupAvcImeGetBorderReachedINTEL\0" // IR(36313, 36)
  "SubgroupAvcImeGetDualReferenceStreaminINTEL\0" // IR(36349, 44)
  "SubgroupAvcImeGetSingleReferenceStreaminINTEL\0" // IR(36393, 46)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL\0" // IR(36439, 66)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL\0" // IR(36505, 68)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL\0" // IR(36573, 67)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL\0" // IR(36640, 68)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL\0" // IR(36708, 70)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL\0" // IR(36778, 69)
  "SubgroupAvcImeGetTruncatedSearchIndicationINTEL\0" // IR(36847, 48)
  "SubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL\0" // IR(36895, 59)
  "SubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL\0" // IR(36954, 56)
  "SubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL\0" // IR(37010, 58)
  "SubgroupAvcImeInitializeINTEL\0" // IR(37068, 30)
  "SubgroupAvcImeRefWindowSizeINTEL\0" // IR(37098, 33)
  "SubgroupAvcImeSetDualReferenceINTEL\0" // IR(37131, 36)
  "SubgroupAvcImeSetEarlySearchTerminationThresholdINTEL\0" // IR(37167, 54)
  "SubgroupAvcImeSetMaxMotionVectorCountINTEL\0" // IR(37221, 43)
  "SubgroupAvcImeSetSingleReferenceINTEL\0" // IR(37264, 38)
  "SubgroupAvcImeSetUnidirectionalMixDisableINTEL\0" // IR(37302, 47)
  "SubgroupAvcImeSetWeightedSadINTEL\0" // IR(37349, 34)
  "SubgroupAvcImeStripDualReferenceStreamoutINTEL\0" // IR(37383, 47)
  "SubgroupAvcImeStripSingleReferenceStreamoutINTEL\0" // IR(37430, 49)
  "SubgroupAvcMceConvertToImePayloadINTEL\0" // IR(37479, 39)
  "SubgroupAvcMceConvertToImeResultINTEL\0" // IR(37518, 38)
  "SubgroupAvcMceConvertToRefPayloadINTEL\0" // IR(37556, 39)
  "SubgroupAvcMceConvertToRefResultINTEL\0" // IR(37595, 38)
  "SubgroupAvcMceConvertToSicPayloadINTEL\0" // IR(37633, 39)
  "SubgroupAvcMceConvertToSicResultINTEL\0" // IR(37672, 38)
  "SubgroupAvcMceGetBestInterDistortionsINTEL\0" // IR(37710, 43)
  "SubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL\0" // IR(37753, 50)
  "SubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL\0" // IR(37803, 60)
  "SubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL\0" // IR(37863, 51)
  "SubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL\0" // IR(37914, 56)
  "SubgroupAvcMceGetDefaultInterShapePenaltyINTEL\0" // IR(37970, 47)
  "SubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL\0" // IR(38017, 56)
  "SubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL\0" // IR(38073, 50)
  "SubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL\0" // IR(38123, 51)
  "SubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL\0" // IR(38174, 49)
  "SubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL\0" // IR(38223, 52)
  "SubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL\0" // IR(38275, 51)
  "SubgroupAvcMceGetInterDirectionsINTEL\0" // IR(38326, 38)
  "SubgroupAvcMceGetInterDistortionsINTEL\0" // IR(38364, 39)
  "SubgroupAvcMceGetInterMajorShapeINTEL\0" // IR(38403, 38)
  "SubgroupAvcMceGetInterMinorShapeINTEL\0" // IR(38441, 38)
  "SubgroupAvcMceGetInterMotionVectorCountINTEL\0" // IR(38479, 45)
  "SubgroupAvcMceGetInterReferenceIdsINTEL\0" // IR(38524, 40)
  "SubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL\0" // IR(38564, 62)
  "SubgroupAvcMceGetMotionVectorsINTEL\0" // IR(38626, 36)
  "SubgroupAvcMceSetAcOnlyHaarINTEL\0" // IR(38662, 33)
  "SubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL\0" // IR(38695, 61)
  "SubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL\0" // IR(38756, 53)
  "SubgroupAvcMceSetInterDirectionPenaltyINTEL\0" // IR(38809, 44)
  "SubgroupAvcMceSetInterShapePenaltyINTEL\0" // IR(38853, 40)
  "SubgroupAvcMceSetMotionVectorCostFunctionINTEL\0" // IR(38893, 47)
  "SubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL\0" // IR(38940, 61)
  "SubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL\0" // IR(39001, 52)
  "SubgroupAvcRefConvertToMcePayloadINTEL\0" // IR(39053, 39)
  "SubgroupAvcRefConvertToMceResultINTEL\0" // IR(39092, 38)
  "SubgroupAvcRefEvaluateWithDualReferenceINTEL\0" // IR(39130, 45)
  "SubgroupAvcRefEvaluateWithMultiReferenceINTEL\0" // IR(39175, 46)
  "SubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL\0" // IR(39221, 56)
  "SubgroupAvcRefEvaluateWithSingleReferenceINTEL\0" // IR(39277, 47)
  "SubgroupAvcRefSetBidirectionalMixDisableINTEL\0" // IR(39324, 46)
  "SubgroupAvcRefSetBilinearFilterEnableINTEL\0" // IR(39370, 43)
  "SubgroupAvcSicConfigureIpeLumaChromaINTEL\0" // IR(39413, 42)
  "SubgroupAvcSicConfigureIpeLumaINTEL\0" // IR(39455, 36)
  "SubgroupAvcSicConfigureSkcINTEL\0" // IR(39491, 32)
  "SubgroupAvcSicConvertToMcePayloadINTEL\0" // IR(39523, 39)
  "SubgroupAvcSicConvertToMceResultINTEL\0" // IR(39562, 38)
  "SubgroupAvcSicEvaluateIpeINTEL\0" // IR(39600, 31)
  "SubgroupAvcSicEvaluateWithDualReferenceINTEL\0" // IR(39631, 45)
  "SubgroupAvcSicEvaluateWithMultiReferenceINTEL\0" // IR(39676, 46)
  "SubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL\0" // IR(39722, 56)
  "SubgroupAvcSicEvaluateWithSingleReferenceINTEL\0" // IR(39778, 47)
  "SubgroupAvcSicGetBestIpeChromaDistortionINTEL\0" // IR(39825, 46)
  "SubgroupAvcSicGetBestIpeLumaDistortionINTEL\0" // IR(39871, 44)
  "SubgroupAvcSicGetInterRawSadsINTEL\0" // IR(39915, 35)
  "SubgroupAvcSicGetIpeChromaModeINTEL\0" // IR(39950, 36)
  "SubgroupAvcSicGetIpeLumaShapeINTEL\0" // IR(39986, 35)
  "SubgroupAvcSicGetMotionVectorMaskINTEL\0" // IR(40021, 39)
  "SubgroupAvcSicGetPackedIpeLumaModesINTEL\0" // IR(40060, 41)
  "SubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL\0" // IR(40101, 50)
  "SubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL\0" // IR(40151, 48)
  "SubgroupAvcSicInitializeINTEL\0" // IR(40199, 30)
  "SubgroupAvcSicSetBilinearFilterEnableINTEL\0" // IR(40229, 43)
  "SubgroupAvcSicSetBlockBasedRawSkipSadINTEL\0" // IR(40272, 43)
  "SubgroupAvcSicSetIntraChromaModeCostFunctionINTEL\0" // IR(40315, 50)
  "SubgroupAvcSicSetIntraLumaModeCostFunctionINTEL\0" // IR(40365, 48)
  "SubgroupAvcSicSetIntraLumaShapePenaltyINTEL\0" // IR(40413, 44)
  "SubgroupAvcSicSetSkcForwardTransformEnableINTEL\0" // IR(40457, 48)
  "SubgroupBlockPrefetchINTEL\0" // IR(40505, 27)
  "SubgroupBlockReadINTEL\0" // IR(40532, 23)
  "SubgroupBlockWriteINTEL\0" // IR(40555, 24)
  "SubgroupFirstInvocationKHR\0" // IR(40579, 27)
  "SubgroupImageBlockReadINTEL\0" // IR(40606, 28)
  "SubgroupImageBlockWriteINTEL\0" // IR(40634, 29)
  "SubgroupImageMediaBlockReadINTEL\0" // IR(40663, 33)
  "SubgroupImageMediaBlockWriteINTEL\0" // IR(40696, 34)
  "SubgroupReadInvocationKHR\0" // IR(40730, 26)
  "SubgroupShuffleDownINTEL\0" // IR(40756, 25)
  "SubgroupShuffleUpINTEL\0" // IR(40781, 23)
  "SubgroupShuffleXorINTEL\0" // IR(40804, 24)
  "Switch\0" // IR(40828, 7)
  "TaskSequenceAsyncINTEL\0" // IR(40835, 23)
  "TaskSequenceCreateINTEL\0" // IR(40858, 24)
  "TaskSequenceGetINTEL\0" // IR(40882, 21)
  "TaskSequenceReleaseINTEL\0" // IR(40903, 25)
  "TensorLayoutSetBlockSizeNV\0" // IR(40928, 27)
  "TensorLayoutSetClampValueNV\0" // IR(40955, 28)
  "TensorLayoutSetDimensionNV\0" // IR(40983, 27)
  "TensorLayoutSetStrideNV\0" // IR(41010, 24)
  "TensorLayoutSliceNV\0" // IR(41034, 20)
  "TensorViewSetClipNV\0" // IR(41054, 20)
  "TensorViewSetDimensionNV\0" // IR(41074, 25)
  "TensorViewSetStrideNV\0" // IR(41099, 22)
  "TerminateInvocation\0" // IR(41121, 20)
  "TerminateRayKHR\0" // IR(41141, 16)
  "TerminateRayNV\0" // IR(41157, 15)
  "TraceMotionNV\0" // IR(41172, 14)
  "TraceNV\0" // IR(41186, 8)
  "TraceRayKHR\0" // IR(41194, 12)
  "TraceRayMotionNV\0" // IR(41206, 17)
  "Transpose\0" // IR(41223, 10)
  "TypeAccelerationStructureKHR\0" // IR(41233, 29)
  "TypeAccelerationStructureNV\0" // IR(41262, 28)
  "TypeArray\0" // IR(41290, 10)
  "TypeAvcImeDualReferenceStreaminINTEL\0" // IR(41300, 37)
  "TypeAvcImePayloadINTEL\0" // IR(41337, 23)
  "TypeAvcImeResultDualReferenceStreamoutINTEL\0" // IR(41360, 44)
  "TypeAvcImeResultINTEL\0" // IR(41404, 22)
  "TypeAvcImeResultSingleReferenceStreamoutINTEL\0" // IR(41426, 46)
  "TypeAvcImeSingleReferenceStreaminINTEL\0" // IR(41472, 39)
  "TypeAvcMcePayloadINTEL\0" // IR(41511, 23)
  "TypeAvcMceResultINTEL\0" // IR(41534, 22)
  "TypeAvcRefPayloadINTEL\0" // IR(41556, 23)
  "TypeAvcRefResultINTEL\0" // IR(41579, 22)
  "TypeAvcSicPayloadINTEL\0" // IR(41601, 23)
  "TypeAvcSicResultINTEL\0" // IR(41624, 22)
  "TypeBool\0" // IR(41646, 9)
  "TypeBufferSurfaceINTEL\0" // IR(41655, 23)
  "TypeCooperativeMatrixKHR\0" // IR(41678, 25)
  "TypeCooperativeMatrixNV\0" // IR(41703, 24)
  "TypeCooperativeVectorNV\0" // IR(41727, 24)
  "TypeDeviceEvent\0" // IR(41751, 16)
  "TypeEvent\0" // IR(41767, 10)
  "TypeFloat\0" // IR(41777, 10)
  "TypeForwardPointer\0" // IR(41787, 19)
  "TypeFunction\0" // IR(41806, 13)
  "TypeHitObjectNV\0" // IR(41819, 16)
  "TypeImage\0" // IR(41835, 10)
  "TypeInt\0" // IR(41845, 8)
  "TypeMatrix\0" // IR(41853, 11)
  "TypeNamedBarrier\0" // IR(41864, 17)
  "TypeNodePayloadArrayAMDX\0" // IR(41881, 25)
  "TypeOpaque\0" // IR(41906, 11)
  "TypePipe\0" // IR(41917, 9)
  "TypePipeStorage\0" // IR(41926, 16)
  "TypePointer\0" // IR(41942, 12)
  "TypeQueue\0" // IR(41954, 10)
  "TypeRayQueryKHR\0" // IR(41964, 16)
  "TypeReserveId\0" // IR(41980, 14)
  "TypeRuntimeArray\0" // IR(41994, 17)
  "TypeSampledImage\0" // IR(42011, 17)
  "TypeSampler\0" // IR(42028, 12)
  "TypeStruct\0" // IR(42040, 11)
  "TypeStructContinuedINTEL\0" // IR(42051, 25)
  "TypeTaskSequenceINTEL\0" // IR(42076, 22)
  "TypeTensorLayoutNV\0" // IR(42098, 19)
  "TypeTensorViewNV\0" // IR(42117, 17)
  "TypeUntypedPointerKHR\0" // IR(42134, 22)
  "TypeVector\0" // IR(42156, 11)
  "TypeVmeImageINTEL\0" // IR(42167, 18)
  "TypeVoid\0" // IR(42185, 9)
  "UAddSatINTEL\0" // IR(42194, 13)
  "UAverageINTEL\0" // IR(42207, 14)
  "UAverageRoundedINTEL\0" // IR(42221, 21)
  "UConvert\0" // IR(42242, 9)
  "UCountLeadingZerosINTEL\0" // IR(42251, 24)
  "UCountTrailingZerosINTEL\0" // IR(42275, 25)
  "UDiv\0" // IR(42300, 5)
  "UDot\0" // IR(42305, 5)
  "UDotAccSat\0" // IR(42310, 11)
  "UDotAccSatKHR\0" // IR(42321, 14)
  "UDotKHR\0" // IR(42335, 8)
  "UGreaterThan\0" // IR(42343, 13)
  "UGreaterThanEqual\0" // IR(42356, 18)
  "ULessThan\0" // IR(42374, 10)
  "ULessThanEqual\0" // IR(42384, 15)
  "UMod\0" // IR(42399, 5)
  "UMul32x16INTEL\0" // IR(42404, 15)
  "UMulExtended\0" // IR(42419, 13)
  "USubSatINTEL\0" // IR(42432, 13)
  "Undef\0" // IR(42445, 6)
  "Unordered\0" // IR(42451, 10)
  "Unreachable\0" // IR(42461, 12)
  "UntypedAccessChainKHR\0" // IR(42473, 22)
  "UntypedArrayLengthKHR\0" // IR(42495, 22)
  "UntypedInBoundsAccessChainKHR\0" // IR(42517, 30)
  "UntypedInBoundsPtrAccessChainKHR\0" // IR(42547, 33)
  "UntypedPrefetchKHR\0" // IR(42580, 19)
  "UntypedPtrAccessChainKHR\0" // IR(42599, 25)
  "UntypedVariableKHR\0" // IR(42624, 19)
  "Variable\0" // IR(42643, 9)
  "VectorExtractDynamic\0" // IR(42652, 21)
  "VectorInsertDynamic\0" // IR(42673, 20)
  "VectorShuffle\0" // IR(42693, 14)
  "VectorTimesMatrix\0" // IR(42707, 18)
  "VectorTimesScalar\0" // IR(42725, 18)
  "VmeImageINTEL\0" // IR(42743, 14)
  "WritePackedPrimitiveIndices4x8NV\0" // IR(42757, 33)
  "WritePipe\0" // IR(42790, 10)
  "WritePipeBlockingINTEL\0" // IR(42800, 23)
  "SPV_OPERAND_TYPE_TYPE_ID\0" // IR(42823, 25)
  "SPV_OPERAND_TYPE_RESULT_ID\0" // IR(42848, 27)
  "SPV_OPERAND_TYPE_SOURCE_LANGUAGE\0" // IR(42875, 33)
  "SPV_OPERAND_TYPE_OPTIONAL_ID\0" // IR(42908, 29)
  "SPV_OPERAND_TYPE_OPTIONAL_LITERAL_STRING\0" // IR(42937, 41)
  "SPV_OPERAND_TYPE_EXTENSION_INSTRUCTION_NUMBER\0" // IR(42978, 46)
  "SPV_OPERAND_TYPE_ADDRESSING_MODEL\0" // IR(43024, 34)
  "SPV_OPERAND_TYPE_MEMORY_MODEL\0" // IR(43058, 30)
  "SPV_OPERAND_TYPE_EXECUTION_MODEL\0" // IR(43088, 33)
  "SPV_OPERAND_TYPE_VARIABLE_ID\0" // IR(43121, 29)
  "SPV_OPERAND_TYPE_EXECUTION_MODE\0" // IR(43150, 32)
  "SPV_OPERAND_TYPE_CAPABILITY\0" // IR(43182, 28)
  "SPV_OPERAND_TYPE_OPTIONAL_FPENCODING\0" // IR(43210, 37)
  "SPV_OPERAND_TYPE_DIMENSIONALITY\0" // IR(43247, 32)
  "SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT\0" // IR(43279, 38)
  "SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER\0" // IR(43317, 43)
  "SPV_OPERAND_TYPE_STORAGE_CLASS\0" // IR(43360, 31)
  "SPV_OPERAND_TYPE_TYPED_LITERAL_NUMBER\0" // IR(43391, 38)
  "SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE\0" // IR(43429, 41)
  "SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE\0" // IR(43470, 37)
  "SPV_OPERAND_TYPE_SPEC_CONSTANT_OP_NUMBER\0" // IR(43507, 41)
  "SPV_OPERAND_TYPE_FUNCTION_CONTROL\0" // IR(43548, 34)
  "SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS\0" // IR(43582, 40)
  "SPV_OPERAND_TYPE_DECORATION\0" // IR(43622, 28)
  "SPV_OPERAND_TYPE_VARIABLE_ID_LITERAL_INTEGER\0" // IR(43650, 45)
  "SPV_OPERAND_TYPE_OPTIONAL_IMAGE\0" // IR(43695, 32)
  "SPV_OPERAND_TYPE_IMAGE\0" // IR(43727, 23)
  "SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID\0" // IR(43750, 37)
  "SPV_OPERAND_TYPE_LOOP_CONTROL\0" // IR(43787, 30)
  "SPV_OPERAND_TYPE_SELECTION_CONTROL\0" // IR(43817, 35)
  "SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER_ID\0" // IR(43852, 45)
  "SPV_OPERAND_TYPE_GROUP_OPERATION\0" // IR(43897, 33)
  "SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT\0" // IR(43930, 47)
  "SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS\0" // IR(43977, 54)
  "SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE\0" // IR(44031, 43)
  "SPV_OPERAND_TYPE_MEMORY_ACCESS\0" // IR(44074, 31)
  "SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS\0" // IR(44105, 44)
  "SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS\0" // IR(44149, 52)
  "SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS\0" // IR(44201, 62)
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
  IR(4551, 27), // 0 PhysicalStorageBuffer64EXT
  IR(6416, 18), // 1 SubgroupEqMaskKHR
  IR(6449, 18), // 2 SubgroupGeMaskKHR
  IR(6482, 18), // 3 SubgroupGtMaskKHR
  IR(6526, 18), // 4 SubgroupLeMaskKHR
  IR(6585, 18), // 5 SubgroupLtMaskKHR
  IR(4591, 12), // 6 BaryCoordNV
  IR(4671, 19), // 7 BaryCoordNoPerspNV
  IR(5114, 15), // 8 FragmentSizeNV
  IR(5645, 22), // 9 InvocationsPerPixelNV
  IR(5679, 11), // 10 LaunchIdNV
  IR(5704, 13), // 11 LaunchSizeNV
  IR(6955, 17), // 12 WorldRayOriginNV
  IR(6917, 20), // 13 WorldRayDirectionNV
  IR(5921, 18), // 14 ObjectRayOriginNV
  IR(5881, 21), // 15 ObjectRayDirectionNV
  IR(6235, 10), // 16 RayTminNV
  IR(6214, 10), // 17 RayTmaxNV
  IR(5585, 22), // 18 InstanceCustomIndexNV
  IR(5956, 16), // 19 ObjectToWorldNV
  IR(6989, 16), // 20 WorldToObjectNV
  IR(5335, 10), // 21 HitKindNV
  IR(5543, 19), // 22 IncomingRayFlagsNV
  IR(12063, 28), // 23 StorageUniformBufferBlock16
  IR(12046, 17), // 24 StorageUniform16
  IR(11295, 27), // 25 ShaderViewportIndexLayerNV
  IR(8766, 22), // 26 FragmentBarycentricNV
  IR(7585, 30), // 27 ComputeDerivativeGroupQuadsNV
  IR(11343, 14), // 28 ShadingRateNV
  IR(11189, 20), // 29 ShaderNonUniformEXT
  IR(10832, 26), // 30 RuntimeDescriptorArrayEXT
  IR(9718, 39), // 31 InputAttachmentArrayDynamicIndexingEXT
  IR(13105, 42), // 32 UniformTexelBufferArrayDynamicIndexingEXT
  IR(11917, 42), // 33 StorageTexelBufferArrayDynamicIndexingEXT
  IR(13008, 40), // 34 UniformBufferArrayNonUniformIndexingEXT
  IR(11043, 39), // 35 SampledImageArrayNonUniformIndexingEXT
  IR(11553, 40), // 36 StorageBufferArrayNonUniformIndexingEXT
  IR(11662, 39), // 37 StorageImageArrayNonUniformIndexingEXT
  IR(9796, 42), // 38 InputAttachmentArrayNonUniformIndexingEXT
  IR(13189, 45), // 39 UniformTexelBufferArrayNonUniformIndexingEXT
  IR(12001, 45), // 40 StorageTexelBufferArrayNonUniformIndexingEXT
  IR(13477, 21), // 41 VulkanMemoryModelKHR
  IR(13445, 32), // 42 VulkanMemoryModelDeviceScopeKHR
  IR(10219, 34), // 43 PhysicalStorageBufferAddressesEXT
  IR(7523, 31), // 44 ComputeDerivativeGroupLinearNV
  IR(7961, 28), // 45 DemoteToHelperInvocationEXT
  IR(8225, 22), // 46 DotProductInputAllKHR
  IR(8122, 25), // 47 DotProductInput4x8BitKHR
  IR(8175, 31), // 48 DotProductInput4x8BitPackedKHR
  IR(8247, 14), // 49 DotProductKHR
  IR(10155, 13), // 50 OptNoneINTEL
  IR(16564, 15), // 51 PerPrimitiveNV
  IR(16602, 12), // 52 PerVertexNV
  IR(16337, 14), // 53 NonUniformEXT
  IR(16771, 19), // 54 RestrictPointerEXT
  IR(14776, 18), // 55 AliasedPointerEXT
  IR(15580, 24), // 56 HlslCounterBufferGOOGLE
  IR(15604, 19), // 57 HlslSemanticGOOGLE
  IR(18278, 14), // 58 OutputLinesNV
  IR(18325, 19), // 59 OutputPrimitivesNV
  IR(17516, 23), // 60 DerivativeGroupQuadsNV
  IR(17468, 24), // 61 DerivativeGroupLinearNV
  IR(18383, 18), // 62 OutputTrianglesNV
  IR(19407, 16), // 63 RayGenerationNV
  IR(19345, 15), // 64 IntersectionNV
  IR(19260, 9), // 65 AnyHitNV
  IR(19306, 13), // 66 ClosestHitNV
  IR(19383, 7), // 67 MissNV
  IR(19281, 11), // 68 CallableNV
  IR(19544, 23), // 69 AllowContractFastINTEL
  IR(19580, 18), // 70 AllowReassocINTEL
  IR(20068, 22), // 71 MakeTexelAvailableKHR
  IR(20107, 20), // 72 MakeTexelVisibleKHR
  IR(20143, 19), // 73 NonPrivateTexelKHR
  IR(20207, 17), // 74 VolatileTexelKHR
  IR(21573, 24), // 75 MakePointerAvailableKHR
  IR(21616, 22), // 76 MakePointerVisibleKHR
  IR(21673, 21), // 77 NonPrivatePointerKHR
  IR(21723, 10), // 78 VulkanKHR
  IR(14048, 5), // 79 None
  IR(21880, 16), // 80 OutputMemoryKHR
  IR(21823, 17), // 81 MakeAvailableKHR
  IR(21852, 15), // 82 MakeVisibleKHR
  IR(22041, 28), // 83 PackedVectorFormat4x8BitKHR
  IR(22335, 24), // 84 SkipBuiltinPrimitivesNV
  IR(23077, 15), // 85 QueueFamilyKHR
  IR(23317, 15), // 86 CallableDataNV
  IR(23493, 23), // 87 IncomingCallableDataNV
  IR(23670, 13), // 88 RayPayloadNV
  IR(23413, 15), // 89 HitAttributeNV
  IR(23538, 21), // 90 IncomingRayPayloadNV
  IR(23705, 21), // 91 ShaderRecordBufferNV
  IR(23610, 25), // 92 PhysicalStorageBufferEXT
  IR(34906, 8), // 93 SDotKHR
  IR(42335, 8), // 94 UDotKHR
  IR(35034, 9), // 95 SUDotKHR
  IR(34892, 14), // 96 SDotAccSatKHR
  IR(42321, 14), // 97 UDotAccSatKHR
  IR(35019, 15), // 98 SUDotAccSatKHR
  IR(34691, 21), // 99 ReportIntersectionNV
  IR(41262, 28), // 100 TypeAccelerationStructureNV
  IR(27791, 21), // 101 DecorateStringGOOGLE
  IR(33136, 27), // 102 MemberDecorateStringGOOGLE
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
