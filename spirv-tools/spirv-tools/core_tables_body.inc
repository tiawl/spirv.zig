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
    case Extension::kSPV_ARM_graph: return IR(426, 14);
    case Extension::kSPV_ARM_tensors: return IR(440, 16);
    case Extension::kSPV_EXT_arithmetic_fence: return IR(456, 25);
    case Extension::kSPV_EXT_demote_to_helper_invocation: return IR(481, 36);
    case Extension::kSPV_EXT_descriptor_indexing: return IR(517, 28);
    case Extension::kSPV_EXT_float8: return IR(545, 15);
    case Extension::kSPV_EXT_fragment_fully_covered: return IR(560, 31);
    case Extension::kSPV_EXT_fragment_invocation_density: return IR(591, 36);
    case Extension::kSPV_EXT_fragment_shader_interlock: return IR(627, 34);
    case Extension::kSPV_EXT_mesh_shader: return IR(661, 20);
    case Extension::kSPV_EXT_opacity_micromap: return IR(681, 25);
    case Extension::kSPV_EXT_optnone: return IR(706, 16);
    case Extension::kSPV_EXT_physical_storage_buffer: return IR(722, 32);
    case Extension::kSPV_EXT_relaxed_printf_string_address_space: return IR(754, 44);
    case Extension::kSPV_EXT_replicated_composites: return IR(798, 30);
    case Extension::kSPV_EXT_shader_atomic_float16_add: return IR(828, 34);
    case Extension::kSPV_EXT_shader_atomic_float_add: return IR(862, 32);
    case Extension::kSPV_EXT_shader_atomic_float_min_max: return IR(894, 36);
    case Extension::kSPV_EXT_shader_image_int64: return IR(930, 27);
    case Extension::kSPV_EXT_shader_stencil_export: return IR(957, 30);
    case Extension::kSPV_EXT_shader_tile_image: return IR(987, 26);
    case Extension::kSPV_EXT_shader_viewport_index_layer: return IR(1013, 36);
    case Extension::kSPV_GOOGLE_decorate_string: return IR(1049, 27);
    case Extension::kSPV_GOOGLE_hlsl_functionality1: return IR(1076, 31);
    case Extension::kSPV_GOOGLE_user_type: return IR(1107, 21);
    case Extension::kSPV_INTEL_2d_block_io: return IR(1128, 22);
    case Extension::kSPV_INTEL_arbitrary_precision_fixed_point: return IR(1150, 42);
    case Extension::kSPV_INTEL_arbitrary_precision_floating_point: return IR(1192, 45);
    case Extension::kSPV_INTEL_arbitrary_precision_integers: return IR(1237, 39);
    case Extension::kSPV_INTEL_bfloat16_conversion: return IR(1276, 30);
    case Extension::kSPV_INTEL_bindless_images: return IR(1306, 26);
    case Extension::kSPV_INTEL_blocking_pipes: return IR(1332, 25);
    case Extension::kSPV_INTEL_cache_controls: return IR(1357, 25);
    case Extension::kSPV_INTEL_debug_module: return IR(1382, 23);
    case Extension::kSPV_INTEL_device_side_avc_motion_estimation: return IR(1405, 44);
    case Extension::kSPV_INTEL_float_controls2: return IR(1449, 26);
    case Extension::kSPV_INTEL_fp_fast_math_mode: return IR(1475, 28);
    case Extension::kSPV_INTEL_fp_max_error: return IR(1503, 23);
    case Extension::kSPV_INTEL_fpga_argument_interfaces: return IR(1526, 35);
    case Extension::kSPV_INTEL_fpga_buffer_location: return IR(1561, 31);
    case Extension::kSPV_INTEL_fpga_cluster_attributes: return IR(1592, 34);
    case Extension::kSPV_INTEL_fpga_dsp_control: return IR(1626, 27);
    case Extension::kSPV_INTEL_fpga_invocation_pipelining_attributes: return IR(1653, 48);
    case Extension::kSPV_INTEL_fpga_latency_control: return IR(1701, 31);
    case Extension::kSPV_INTEL_fpga_loop_controls: return IR(1732, 29);
    case Extension::kSPV_INTEL_fpga_memory_accesses: return IR(1761, 31);
    case Extension::kSPV_INTEL_fpga_memory_attributes: return IR(1792, 33);
    case Extension::kSPV_INTEL_fpga_reg: return IR(1825, 19);
    case Extension::kSPV_INTEL_function_pointers: return IR(1844, 28);
    case Extension::kSPV_INTEL_function_variants: return IR(1872, 28);
    case Extension::kSPV_INTEL_global_variable_fpga_decorations: return IR(1900, 43);
    case Extension::kSPV_INTEL_global_variable_host_access: return IR(1943, 38);
    case Extension::kSPV_INTEL_inline_assembly: return IR(1981, 26);
    case Extension::kSPV_INTEL_int4: return IR(2007, 15);
    case Extension::kSPV_INTEL_io_pipes: return IR(2022, 19);
    case Extension::kSPV_INTEL_kernel_attributes: return IR(2041, 28);
    case Extension::kSPV_INTEL_long_composites: return IR(2069, 26);
    case Extension::kSPV_INTEL_loop_fuse: return IR(2095, 20);
    case Extension::kSPV_INTEL_masked_gather_scatter: return IR(2115, 32);
    case Extension::kSPV_INTEL_maximum_registers: return IR(2147, 28);
    case Extension::kSPV_INTEL_media_block_io: return IR(2175, 25);
    case Extension::kSPV_INTEL_memory_access_aliasing: return IR(2200, 33);
    case Extension::kSPV_INTEL_optnone: return IR(2233, 18);
    case Extension::kSPV_INTEL_runtime_aligned: return IR(2251, 26);
    case Extension::kSPV_INTEL_shader_integer_functions2: return IR(2277, 36);
    case Extension::kSPV_INTEL_split_barrier: return IR(2313, 24);
    case Extension::kSPV_INTEL_subgroup_buffer_prefetch: return IR(2337, 35);
    case Extension::kSPV_INTEL_subgroup_matrix_multiply_accumulate: return IR(2372, 46);
    case Extension::kSPV_INTEL_subgroups: return IR(2418, 20);
    case Extension::kSPV_INTEL_task_sequence: return IR(2438, 24);
    case Extension::kSPV_INTEL_tensor_float32_conversion: return IR(2462, 36);
    case Extension::kSPV_INTEL_ternary_bitwise_function: return IR(2498, 35);
    case Extension::kSPV_INTEL_unstructured_loop_controls: return IR(2533, 37);
    case Extension::kSPV_INTEL_usm_storage_classes: return IR(2570, 30);
    case Extension::kSPV_INTEL_variable_length_array: return IR(2600, 32);
    case Extension::kSPV_INTEL_vector_compute: return IR(2632, 25);
    case Extension::kSPV_KHR_16bit_storage: return IR(2657, 22);
    case Extension::kSPV_KHR_8bit_storage: return IR(2679, 21);
    case Extension::kSPV_KHR_bfloat16: return IR(2700, 17);
    case Extension::kSPV_KHR_bit_instructions: return IR(2717, 25);
    case Extension::kSPV_KHR_compute_shader_derivatives: return IR(2742, 35);
    case Extension::kSPV_KHR_cooperative_matrix: return IR(2777, 27);
    case Extension::kSPV_KHR_device_group: return IR(2804, 21);
    case Extension::kSPV_KHR_expect_assume: return IR(2825, 22);
    case Extension::kSPV_KHR_float_controls: return IR(2847, 23);
    case Extension::kSPV_KHR_float_controls2: return IR(2870, 24);
    case Extension::kSPV_KHR_fragment_shader_barycentric: return IR(2894, 36);
    case Extension::kSPV_KHR_fragment_shading_rate: return IR(2930, 30);
    case Extension::kSPV_KHR_integer_dot_product: return IR(2960, 28);
    case Extension::kSPV_KHR_linkonce_odr: return IR(2988, 21);
    case Extension::kSPV_KHR_maximal_reconvergence: return IR(3009, 30);
    case Extension::kSPV_KHR_multiview: return IR(3039, 18);
    case Extension::kSPV_KHR_no_integer_wrap_decoration: return IR(3057, 35);
    case Extension::kSPV_KHR_non_semantic_info: return IR(3092, 26);
    case Extension::kSPV_KHR_physical_storage_buffer: return IR(3118, 32);
    case Extension::kSPV_KHR_post_depth_coverage: return IR(3150, 28);
    case Extension::kSPV_KHR_quad_control: return IR(3178, 21);
    case Extension::kSPV_KHR_ray_cull_mask: return IR(3199, 22);
    case Extension::kSPV_KHR_ray_query: return IR(3221, 18);
    case Extension::kSPV_KHR_ray_tracing: return IR(3239, 20);
    case Extension::kSPV_KHR_ray_tracing_position_fetch: return IR(3259, 35);
    case Extension::kSPV_KHR_relaxed_extended_instruction: return IR(3294, 37);
    case Extension::kSPV_KHR_shader_atomic_counter_ops: return IR(3331, 34);
    case Extension::kSPV_KHR_shader_ballot: return IR(3365, 22);
    case Extension::kSPV_KHR_shader_clock: return IR(3387, 21);
    case Extension::kSPV_KHR_shader_draw_parameters: return IR(3408, 31);
    case Extension::kSPV_KHR_storage_buffer_storage_class: return IR(3439, 37);
    case Extension::kSPV_KHR_subgroup_rotate: return IR(3476, 24);
    case Extension::kSPV_KHR_subgroup_uniform_control_flow: return IR(3500, 38);
    case Extension::kSPV_KHR_subgroup_vote: return IR(3538, 22);
    case Extension::kSPV_KHR_terminate_invocation: return IR(3560, 29);
    case Extension::kSPV_KHR_uniform_group_instructions: return IR(3589, 35);
    case Extension::kSPV_KHR_untyped_pointers: return IR(3624, 25);
    case Extension::kSPV_KHR_variable_pointers: return IR(3649, 26);
    case Extension::kSPV_KHR_vulkan_memory_model: return IR(3675, 28);
    case Extension::kSPV_KHR_workgroup_memory_explicit_layout: return IR(3703, 41);
    case Extension::kSPV_NVX_multiview_per_view_attributes: return IR(3744, 38);
    case Extension::kSPV_NV_bindless_texture: return IR(3782, 24);
    case Extension::kSPV_NV_cluster_acceleration_structure: return IR(3806, 38);
    case Extension::kSPV_NV_compute_shader_derivatives: return IR(3844, 34);
    case Extension::kSPV_NV_cooperative_matrix: return IR(3878, 26);
    case Extension::kSPV_NV_cooperative_matrix2: return IR(3904, 27);
    case Extension::kSPV_NV_cooperative_vector: return IR(3931, 26);
    case Extension::kSPV_NV_displacement_micromap: return IR(3957, 29);
    case Extension::kSPV_NV_fragment_shader_barycentric: return IR(3986, 35);
    case Extension::kSPV_NV_geometry_shader_passthrough: return IR(4021, 35);
    case Extension::kSPV_NV_linear_swept_spheres: return IR(4056, 28);
    case Extension::kSPV_NV_mesh_shader: return IR(4084, 19);
    case Extension::kSPV_NV_raw_access_chains: return IR(4103, 25);
    case Extension::kSPV_NV_ray_tracing: return IR(4128, 19);
    case Extension::kSPV_NV_ray_tracing_motion_blur: return IR(4147, 31);
    case Extension::kSPV_NV_sample_mask_override_coverage: return IR(4178, 37);
    case Extension::kSPV_NV_shader_atomic_fp16_vector: return IR(4215, 33);
    case Extension::kSPV_NV_shader_image_footprint: return IR(4248, 30);
    case Extension::kSPV_NV_shader_invocation_reorder: return IR(4278, 33);
    case Extension::kSPV_NV_shader_sm_builtins: return IR(4311, 26);
    case Extension::kSPV_NV_shader_subgroup_partitioned: return IR(4337, 35);
    case Extension::kSPV_NV_shading_rate: return IR(4372, 20);
    case Extension::kSPV_NV_stereo_view_rendering: return IR(4392, 29);
    case Extension::kSPV_NV_tensor_addressing: return IR(4421, 25);
    case Extension::kSPV_NV_viewport_array2: return IR(4446, 23);
    case Extension::kSPV_QCOM_image_processing: return IR(4469, 26);
    case Extension::kSPV_QCOM_image_processing2: return IR(4495, 27);
    case Extension::kSPV_QCOM_tile_shading: return IR(4522, 22);
    case Extension::kSPV_VALIDATOR_ignore_type_decl_unique: return IR(4544, 38);
    default: break;
  }
  return {};
}

// Extension names and values, ordered by name
// The fields in order are:
//   name, indexing into kStrings
//   enum value
static const std::array<NameValue,159> kExtensionNames{{
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
    {IR(426, 14), static_cast<uint32_t>(kSPV_ARM_graph)},
    {IR(440, 16), static_cast<uint32_t>(kSPV_ARM_tensors)},
    {IR(456, 25), static_cast<uint32_t>(kSPV_EXT_arithmetic_fence)},
    {IR(481, 36), static_cast<uint32_t>(kSPV_EXT_demote_to_helper_invocation)},
    {IR(517, 28), static_cast<uint32_t>(kSPV_EXT_descriptor_indexing)},
    {IR(545, 15), static_cast<uint32_t>(kSPV_EXT_float8)},
    {IR(560, 31), static_cast<uint32_t>(kSPV_EXT_fragment_fully_covered)},
    {IR(591, 36), static_cast<uint32_t>(kSPV_EXT_fragment_invocation_density)},
    {IR(627, 34), static_cast<uint32_t>(kSPV_EXT_fragment_shader_interlock)},
    {IR(661, 20), static_cast<uint32_t>(kSPV_EXT_mesh_shader)},
    {IR(681, 25), static_cast<uint32_t>(kSPV_EXT_opacity_micromap)},
    {IR(706, 16), static_cast<uint32_t>(kSPV_EXT_optnone)},
    {IR(722, 32), static_cast<uint32_t>(kSPV_EXT_physical_storage_buffer)},
    {IR(754, 44), static_cast<uint32_t>(kSPV_EXT_relaxed_printf_string_address_space)},
    {IR(798, 30), static_cast<uint32_t>(kSPV_EXT_replicated_composites)},
    {IR(828, 34), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float16_add)},
    {IR(862, 32), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float_add)},
    {IR(894, 36), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float_min_max)},
    {IR(930, 27), static_cast<uint32_t>(kSPV_EXT_shader_image_int64)},
    {IR(957, 30), static_cast<uint32_t>(kSPV_EXT_shader_stencil_export)},
    {IR(987, 26), static_cast<uint32_t>(kSPV_EXT_shader_tile_image)},
    {IR(1013, 36), static_cast<uint32_t>(kSPV_EXT_shader_viewport_index_layer)},
    {IR(1049, 27), static_cast<uint32_t>(kSPV_GOOGLE_decorate_string)},
    {IR(1076, 31), static_cast<uint32_t>(kSPV_GOOGLE_hlsl_functionality1)},
    {IR(1107, 21), static_cast<uint32_t>(kSPV_GOOGLE_user_type)},
    {IR(1128, 22), static_cast<uint32_t>(kSPV_INTEL_2d_block_io)},
    {IR(1150, 42), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_fixed_point)},
    {IR(1192, 45), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_floating_point)},
    {IR(1237, 39), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_integers)},
    {IR(1276, 30), static_cast<uint32_t>(kSPV_INTEL_bfloat16_conversion)},
    {IR(1306, 26), static_cast<uint32_t>(kSPV_INTEL_bindless_images)},
    {IR(1332, 25), static_cast<uint32_t>(kSPV_INTEL_blocking_pipes)},
    {IR(1357, 25), static_cast<uint32_t>(kSPV_INTEL_cache_controls)},
    {IR(1382, 23), static_cast<uint32_t>(kSPV_INTEL_debug_module)},
    {IR(1405, 44), static_cast<uint32_t>(kSPV_INTEL_device_side_avc_motion_estimation)},
    {IR(1449, 26), static_cast<uint32_t>(kSPV_INTEL_float_controls2)},
    {IR(1475, 28), static_cast<uint32_t>(kSPV_INTEL_fp_fast_math_mode)},
    {IR(1503, 23), static_cast<uint32_t>(kSPV_INTEL_fp_max_error)},
    {IR(1526, 35), static_cast<uint32_t>(kSPV_INTEL_fpga_argument_interfaces)},
    {IR(1561, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_buffer_location)},
    {IR(1592, 34), static_cast<uint32_t>(kSPV_INTEL_fpga_cluster_attributes)},
    {IR(1626, 27), static_cast<uint32_t>(kSPV_INTEL_fpga_dsp_control)},
    {IR(1653, 48), static_cast<uint32_t>(kSPV_INTEL_fpga_invocation_pipelining_attributes)},
    {IR(1701, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_latency_control)},
    {IR(1732, 29), static_cast<uint32_t>(kSPV_INTEL_fpga_loop_controls)},
    {IR(1761, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_memory_accesses)},
    {IR(1792, 33), static_cast<uint32_t>(kSPV_INTEL_fpga_memory_attributes)},
    {IR(1825, 19), static_cast<uint32_t>(kSPV_INTEL_fpga_reg)},
    {IR(1844, 28), static_cast<uint32_t>(kSPV_INTEL_function_pointers)},
    {IR(1872, 28), static_cast<uint32_t>(kSPV_INTEL_function_variants)},
    {IR(1900, 43), static_cast<uint32_t>(kSPV_INTEL_global_variable_fpga_decorations)},
    {IR(1943, 38), static_cast<uint32_t>(kSPV_INTEL_global_variable_host_access)},
    {IR(1981, 26), static_cast<uint32_t>(kSPV_INTEL_inline_assembly)},
    {IR(2007, 15), static_cast<uint32_t>(kSPV_INTEL_int4)},
    {IR(2022, 19), static_cast<uint32_t>(kSPV_INTEL_io_pipes)},
    {IR(2041, 28), static_cast<uint32_t>(kSPV_INTEL_kernel_attributes)},
    {IR(2069, 26), static_cast<uint32_t>(kSPV_INTEL_long_composites)},
    {IR(2095, 20), static_cast<uint32_t>(kSPV_INTEL_loop_fuse)},
    {IR(2115, 32), static_cast<uint32_t>(kSPV_INTEL_masked_gather_scatter)},
    {IR(2147, 28), static_cast<uint32_t>(kSPV_INTEL_maximum_registers)},
    {IR(2175, 25), static_cast<uint32_t>(kSPV_INTEL_media_block_io)},
    {IR(2200, 33), static_cast<uint32_t>(kSPV_INTEL_memory_access_aliasing)},
    {IR(2233, 18), static_cast<uint32_t>(kSPV_INTEL_optnone)},
    {IR(2251, 26), static_cast<uint32_t>(kSPV_INTEL_runtime_aligned)},
    {IR(2277, 36), static_cast<uint32_t>(kSPV_INTEL_shader_integer_functions2)},
    {IR(2313, 24), static_cast<uint32_t>(kSPV_INTEL_split_barrier)},
    {IR(2337, 35), static_cast<uint32_t>(kSPV_INTEL_subgroup_buffer_prefetch)},
    {IR(2372, 46), static_cast<uint32_t>(kSPV_INTEL_subgroup_matrix_multiply_accumulate)},
    {IR(2418, 20), static_cast<uint32_t>(kSPV_INTEL_subgroups)},
    {IR(2438, 24), static_cast<uint32_t>(kSPV_INTEL_task_sequence)},
    {IR(2462, 36), static_cast<uint32_t>(kSPV_INTEL_tensor_float32_conversion)},
    {IR(2498, 35), static_cast<uint32_t>(kSPV_INTEL_ternary_bitwise_function)},
    {IR(2533, 37), static_cast<uint32_t>(kSPV_INTEL_unstructured_loop_controls)},
    {IR(2570, 30), static_cast<uint32_t>(kSPV_INTEL_usm_storage_classes)},
    {IR(2600, 32), static_cast<uint32_t>(kSPV_INTEL_variable_length_array)},
    {IR(2632, 25), static_cast<uint32_t>(kSPV_INTEL_vector_compute)},
    {IR(2657, 22), static_cast<uint32_t>(kSPV_KHR_16bit_storage)},
    {IR(2679, 21), static_cast<uint32_t>(kSPV_KHR_8bit_storage)},
    {IR(2700, 17), static_cast<uint32_t>(kSPV_KHR_bfloat16)},
    {IR(2717, 25), static_cast<uint32_t>(kSPV_KHR_bit_instructions)},
    {IR(2742, 35), static_cast<uint32_t>(kSPV_KHR_compute_shader_derivatives)},
    {IR(2777, 27), static_cast<uint32_t>(kSPV_KHR_cooperative_matrix)},
    {IR(2804, 21), static_cast<uint32_t>(kSPV_KHR_device_group)},
    {IR(2825, 22), static_cast<uint32_t>(kSPV_KHR_expect_assume)},
    {IR(2847, 23), static_cast<uint32_t>(kSPV_KHR_float_controls)},
    {IR(2870, 24), static_cast<uint32_t>(kSPV_KHR_float_controls2)},
    {IR(2894, 36), static_cast<uint32_t>(kSPV_KHR_fragment_shader_barycentric)},
    {IR(2930, 30), static_cast<uint32_t>(kSPV_KHR_fragment_shading_rate)},
    {IR(2960, 28), static_cast<uint32_t>(kSPV_KHR_integer_dot_product)},
    {IR(2988, 21), static_cast<uint32_t>(kSPV_KHR_linkonce_odr)},
    {IR(3009, 30), static_cast<uint32_t>(kSPV_KHR_maximal_reconvergence)},
    {IR(3039, 18), static_cast<uint32_t>(kSPV_KHR_multiview)},
    {IR(3057, 35), static_cast<uint32_t>(kSPV_KHR_no_integer_wrap_decoration)},
    {IR(3092, 26), static_cast<uint32_t>(kSPV_KHR_non_semantic_info)},
    {IR(3118, 32), static_cast<uint32_t>(kSPV_KHR_physical_storage_buffer)},
    {IR(3150, 28), static_cast<uint32_t>(kSPV_KHR_post_depth_coverage)},
    {IR(3178, 21), static_cast<uint32_t>(kSPV_KHR_quad_control)},
    {IR(3199, 22), static_cast<uint32_t>(kSPV_KHR_ray_cull_mask)},
    {IR(3221, 18), static_cast<uint32_t>(kSPV_KHR_ray_query)},
    {IR(3239, 20), static_cast<uint32_t>(kSPV_KHR_ray_tracing)},
    {IR(3259, 35), static_cast<uint32_t>(kSPV_KHR_ray_tracing_position_fetch)},
    {IR(3294, 37), static_cast<uint32_t>(kSPV_KHR_relaxed_extended_instruction)},
    {IR(3331, 34), static_cast<uint32_t>(kSPV_KHR_shader_atomic_counter_ops)},
    {IR(3365, 22), static_cast<uint32_t>(kSPV_KHR_shader_ballot)},
    {IR(3387, 21), static_cast<uint32_t>(kSPV_KHR_shader_clock)},
    {IR(3408, 31), static_cast<uint32_t>(kSPV_KHR_shader_draw_parameters)},
    {IR(3439, 37), static_cast<uint32_t>(kSPV_KHR_storage_buffer_storage_class)},
    {IR(3476, 24), static_cast<uint32_t>(kSPV_KHR_subgroup_rotate)},
    {IR(3500, 38), static_cast<uint32_t>(kSPV_KHR_subgroup_uniform_control_flow)},
    {IR(3538, 22), static_cast<uint32_t>(kSPV_KHR_subgroup_vote)},
    {IR(3560, 29), static_cast<uint32_t>(kSPV_KHR_terminate_invocation)},
    {IR(3589, 35), static_cast<uint32_t>(kSPV_KHR_uniform_group_instructions)},
    {IR(3624, 25), static_cast<uint32_t>(kSPV_KHR_untyped_pointers)},
    {IR(3649, 26), static_cast<uint32_t>(kSPV_KHR_variable_pointers)},
    {IR(3675, 28), static_cast<uint32_t>(kSPV_KHR_vulkan_memory_model)},
    {IR(3703, 41), static_cast<uint32_t>(kSPV_KHR_workgroup_memory_explicit_layout)},
    {IR(3744, 38), static_cast<uint32_t>(kSPV_NVX_multiview_per_view_attributes)},
    {IR(3782, 24), static_cast<uint32_t>(kSPV_NV_bindless_texture)},
    {IR(3806, 38), static_cast<uint32_t>(kSPV_NV_cluster_acceleration_structure)},
    {IR(3844, 34), static_cast<uint32_t>(kSPV_NV_compute_shader_derivatives)},
    {IR(3878, 26), static_cast<uint32_t>(kSPV_NV_cooperative_matrix)},
    {IR(3904, 27), static_cast<uint32_t>(kSPV_NV_cooperative_matrix2)},
    {IR(3931, 26), static_cast<uint32_t>(kSPV_NV_cooperative_vector)},
    {IR(3957, 29), static_cast<uint32_t>(kSPV_NV_displacement_micromap)},
    {IR(3986, 35), static_cast<uint32_t>(kSPV_NV_fragment_shader_barycentric)},
    {IR(4021, 35), static_cast<uint32_t>(kSPV_NV_geometry_shader_passthrough)},
    {IR(4056, 28), static_cast<uint32_t>(kSPV_NV_linear_swept_spheres)},
    {IR(4084, 19), static_cast<uint32_t>(kSPV_NV_mesh_shader)},
    {IR(4103, 25), static_cast<uint32_t>(kSPV_NV_raw_access_chains)},
    {IR(4128, 19), static_cast<uint32_t>(kSPV_NV_ray_tracing)},
    {IR(4147, 31), static_cast<uint32_t>(kSPV_NV_ray_tracing_motion_blur)},
    {IR(4178, 37), static_cast<uint32_t>(kSPV_NV_sample_mask_override_coverage)},
    {IR(4215, 33), static_cast<uint32_t>(kSPV_NV_shader_atomic_fp16_vector)},
    {IR(4248, 30), static_cast<uint32_t>(kSPV_NV_shader_image_footprint)},
    {IR(4278, 33), static_cast<uint32_t>(kSPV_NV_shader_invocation_reorder)},
    {IR(4311, 26), static_cast<uint32_t>(kSPV_NV_shader_sm_builtins)},
    {IR(4337, 35), static_cast<uint32_t>(kSPV_NV_shader_subgroup_partitioned)},
    {IR(4372, 20), static_cast<uint32_t>(kSPV_NV_shading_rate)},
    {IR(4392, 29), static_cast<uint32_t>(kSPV_NV_stereo_view_rendering)},
    {IR(4421, 25), static_cast<uint32_t>(kSPV_NV_tensor_addressing)},
    {IR(4446, 23), static_cast<uint32_t>(kSPV_NV_viewport_array2)},
    {IR(4469, 26), static_cast<uint32_t>(kSPV_QCOM_image_processing)},
    {IR(4495, 27), static_cast<uint32_t>(kSPV_QCOM_image_processing2)},
    {IR(4522, 22), static_cast<uint32_t>(kSPV_QCOM_tile_shading)},
    {IR(4544, 38), static_cast<uint32_t>(kSPV_VALIDATOR_ignore_type_decl_unique)},
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
static const std::array<OperandDesc, 1186> kOperandsByValue{{
  {0,IR(0, 0),IR(4582, 9)/* ReadOnly */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {1,IR(0, 0),IR(4598, 10)/* WriteOnly */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {2,IR(0, 0),IR(4608, 10)/* ReadWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {0,IR(0, 0),IR(4618, 8)/* Logical */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {1,IR(0, 0),IR(4626, 11)/* Physical32 */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {2,IR(0, 0),IR(4647, 11)/* Physical64 */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {5348,IR(0, 0),IR(4658, 24)/* PhysicalStorageBuffer64 */,IR(0, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {0,IR(0, 0),IR(4740, 9)/* Position */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {1,IR(0, 0),IR(4756, 10)/* PointSize */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {3,IR(0, 0),IR(4766, 13)/* ClipDistance */,IR(0, 0),IR(4, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4,IR(0, 0),IR(4779, 13)/* CullDistance */,IR(0, 0),IR(5, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5,IR(0, 0),IR(4792, 9)/* VertexId */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {6,IR(0, 0),IR(4801, 11)/* InstanceId */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {7,IR(0, 0),IR(4812, 12)/* PrimitiveId */,IR(0, 0),IR(6, 6),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {8,IR(0, 0),IR(4902, 13)/* InvocationId */,IR(0, 0),IR(12, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {9,IR(0, 0),IR(4915, 6)/* Layer */,IR(0, 0),IR(14, 5),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {10,IR(0, 0),IR(4961, 14)/* ViewportIndex */,IR(0, 0),IR(19, 5),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {11,IR(0, 0),IR(5009, 15)/* TessLevelOuter */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {12,IR(0, 0),IR(5024, 15)/* TessLevelInner */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {13,IR(0, 0),IR(5039, 10)/* TessCoord */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {14,IR(0, 0),IR(5049, 14)/* PatchVertices */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {15,IR(0, 0),IR(5063, 10)/* FragCoord */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {16,IR(0, 0),IR(5073, 11)/* PointCoord */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {17,IR(0, 0),IR(5084, 12)/* FrontFacing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {18,IR(0, 0),IR(5096, 9)/* SampleId */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {19,IR(0, 0),IR(5123, 15)/* SamplePosition */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {20,IR(0, 0),IR(5138, 11)/* SampleMask */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {22,IR(0, 0),IR(5149, 10)/* FragDepth */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {23,IR(0, 0),IR(5159, 17)/* HelperInvocation */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {24,IR(0, 0),IR(5176, 14)/* NumWorkgroups */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {25,IR(0, 0),IR(5190, 14)/* WorkgroupSize */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {26,IR(0, 0),IR(5204, 12)/* WorkgroupId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {27,IR(0, 0),IR(5216, 18)/* LocalInvocationId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {28,IR(0, 0),IR(5234, 19)/* GlobalInvocationId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {29,IR(0, 0),IR(5253, 21)/* LocalInvocationIndex */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {30,IR(0, 0),IR(5274, 8)/* WorkDim */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {31,IR(0, 0),IR(5282, 11)/* GlobalSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {32,IR(0, 0),IR(5293, 22)/* EnqueuedWorkgroupSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {33,IR(0, 0),IR(5315, 13)/* GlobalOffset */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {34,IR(0, 0),IR(5328, 15)/* GlobalLinearId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {36,IR(0, 0),IR(5343, 13)/* SubgroupSize */,IR(0, 0),IR(26, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {37,IR(0, 0),IR(5390, 16)/* SubgroupMaxSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {38,IR(0, 0),IR(5406, 13)/* NumSubgroups */,IR(0, 0),IR(29, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {39,IR(0, 0),IR(5419, 21)/* NumEnqueuedSubgroups */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {40,IR(0, 0),IR(5440, 11)/* SubgroupId */,IR(0, 0),IR(29, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {41,IR(0, 0),IR(5451, 26)/* SubgroupLocalInvocationId */,IR(0, 0),IR(26, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {42,IR(0, 0),IR(5477, 12)/* VertexIndex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {43,IR(0, 0),IR(5489, 14)/* InstanceIndex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4160,IR(0, 0),IR(5503, 10)/* CoreIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4161,IR(0, 0),IR(5529, 13)/* CoreCountARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4162,IR(0, 0),IR(5542, 13)/* CoreMaxIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4163,IR(0, 0),IR(5555, 10)/* WarpIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4164,IR(0, 0),IR(5565, 13)/* WarpMaxIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4416,IR(0, 0),IR(5578, 15)/* SubgroupEqMask */,IR(1, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4417,IR(0, 0),IR(5633, 15)/* SubgroupGeMask */,IR(2, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4418,IR(0, 0),IR(5666, 15)/* SubgroupGtMask */,IR(3, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4419,IR(0, 0),IR(5699, 15)/* SubgroupLeMask */,IR(4, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4420,IR(0, 0),IR(5732, 15)/* SubgroupLtMask */,IR(5, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4424,IR(0, 0),IR(5765, 11)/* BaseVertex */,IR(0, 0),IR(34, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4425,IR(0, 0),IR(5791, 13)/* BaseInstance */,IR(0, 0),IR(34, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4426,IR(0, 0),IR(5804, 10)/* DrawIndex */,IR(0, 0),IR(35, 3),IR(4, 3),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4432,IR(0, 0),IR(5814, 24)/* PrimitiveShadingRateKHR */,IR(0, 0),IR(38, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4438,IR(0, 0),IR(5861, 12)/* DeviceIndex */,IR(0, 0),IR(39, 1),IR(8, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4440,IR(0, 0),IR(5885, 10)/* ViewIndex */,IR(0, 0),IR(40, 1),IR(9, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4444,IR(0, 0),IR(5905, 15)/* ShadingRateKHR */,IR(0, 0),IR(38, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4492,IR(0, 0),IR(5920, 15)/* TileOffsetQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4493,IR(0, 0),IR(5951, 18)/* TileDimensionQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4494,IR(0, 0),IR(5969, 18)/* TileApronSizeQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4992,IR(0, 0),IR(5987, 20)/* BaryCoordNoPerspAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4993,IR(0, 0),IR(6007, 28)/* BaryCoordNoPerspCentroidAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4994,IR(0, 0),IR(6035, 26)/* BaryCoordNoPerspSampleAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4995,IR(0, 0),IR(6061, 19)/* BaryCoordSmoothAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4996,IR(0, 0),IR(6080, 27)/* BaryCoordSmoothCentroidAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4997,IR(0, 0),IR(6107, 25)/* BaryCoordSmoothSampleAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4998,IR(0, 0),IR(6132, 22)/* BaryCoordPullModelAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5014,IR(0, 0),IR(6154, 18)/* FragStencilRefEXT */,IR(0, 0),IR(42, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5021,IR(0, 0),IR(6189, 29)/* RemainingRecursionLevelsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5073,IR(0, 0),IR(6236, 16)/* ShaderIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5253,IR(0, 0),IR(6252, 15)/* ViewportMaskNV */,IR(0, 0),IR(44, 2),IR(12, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5257,IR(0, 0),IR(6288, 20)/* SecondaryPositionNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5258,IR(0, 0),IR(6327, 24)/* SecondaryViewportMaskNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5261,IR(0, 0),IR(6351, 18)/* PositionPerViewNV */,IR(0, 0),IR(47, 2),IR(15, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5262,IR(0, 0),IR(6389, 22)/* ViewportMaskPerViewNV */,IR(0, 0),IR(47, 2),IR(15, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5264,IR(0, 0),IR(6411, 16)/* FullyCoveredEXT */,IR(0, 0),IR(49, 1),IR(17, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5274,IR(0, 0),IR(6451, 12)/* TaskCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5275,IR(0, 0),IR(6463, 17)/* PrimitiveCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5276,IR(0, 0),IR(6480, 19)/* PrimitiveIndicesNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5277,IR(0, 0),IR(6499, 22)/* ClipDistancePerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5278,IR(0, 0),IR(6521, 22)/* CullDistancePerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5279,IR(0, 0),IR(6543, 15)/* LayerPerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5280,IR(0, 0),IR(6558, 16)/* MeshViewCountNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5281,IR(0, 0),IR(6574, 18)/* MeshViewIndicesNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5286,IR(0, 0),IR(6592, 13)/* BaryCoordKHR */,IR(6, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5287,IR(0, 0),IR(6640, 20)/* BaryCoordNoPerspKHR */,IR(7, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5292,IR(0, 0),IR(6679, 12)/* FragSizeEXT */,IR(8, 1),IR(52, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5293,IR(0, 0),IR(6725, 23)/* FragInvocationCountEXT */,IR(9, 1),IR(52, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5294,IR(0, 0),IR(6770, 25)/* PrimitivePointIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5295,IR(0, 0),IR(6795, 24)/* PrimitiveLineIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5296,IR(0, 0),IR(6819, 28)/* PrimitiveTriangleIndicesEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5299,IR(0, 0),IR(6847, 17)/* CullPrimitiveEXT */,IR(0, 0),IR(53, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5319,IR(0, 0),IR(6864, 12)/* LaunchIdKHR */,IR(10, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5320,IR(0, 0),IR(6887, 14)/* LaunchSizeKHR */,IR(11, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5321,IR(0, 0),IR(6914, 18)/* WorldRayOriginKHR */,IR(12, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5322,IR(0, 0),IR(6949, 21)/* WorldRayDirectionKHR */,IR(13, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5323,IR(0, 0),IR(6990, 19)/* ObjectRayOriginKHR */,IR(14, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5324,IR(0, 0),IR(7027, 22)/* ObjectRayDirectionKHR */,IR(15, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5325,IR(0, 0),IR(7070, 11)/* RayTminKHR */,IR(16, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5326,IR(0, 0),IR(7091, 11)/* RayTmaxKHR */,IR(17, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5327,IR(0, 0),IR(7112, 23)/* InstanceCustomIndexKHR */,IR(18, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5330,IR(0, 0),IR(7157, 17)/* ObjectToWorldKHR */,IR(19, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5331,IR(0, 0),IR(7190, 17)/* WorldToObjectKHR */,IR(20, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5332,IR(0, 0),IR(7223, 7)/* HitTNV */,IR(0, 0),IR(56, 1),IR(26, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5333,IR(0, 0),IR(7230, 11)/* HitKindKHR */,IR(21, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5334,IR(0, 0),IR(7251, 17)/* CurrentRayTimeNV */,IR(0, 0),IR(57, 1),IR(27, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5335,IR(0, 0),IR(7291, 30)/* HitTriangleVertexPositionsKHR */,IR(0, 0),IR(58, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5337,IR(0, 0),IR(7348, 34)/* HitMicroTriangleVertexPositionsNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5344,IR(0, 0),IR(7415, 37)/* HitMicroTriangleVertexBarycentricsNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5351,IR(0, 0),IR(7452, 20)/* IncomingRayFlagsKHR */,IR(22, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5352,IR(0, 0),IR(7491, 20)/* RayGeometryIndexKHR */,IR(0, 0),IR(60, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5359,IR(0, 0),IR(7511, 14)/* HitIsSphereNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5360,IR(0, 0),IR(7553, 11)/* HitIsLSSNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5361,IR(0, 0),IR(7603, 20)/* HitSpherePositionNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5374,IR(0, 0),IR(7623, 13)/* WarpsPerSMNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5375,IR(0, 0),IR(7655, 10)/* SMCountNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5376,IR(0, 0),IR(7665, 9)/* WarpIDNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5377,IR(0, 0),IR(7674, 7)/* SMIDNV */,IR(0, 0),IR(63, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5396,IR(0, 0),IR(7681, 18)/* HitLSSPositionsNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5405,IR(0, 0),IR(7699, 34)/* HitKindFrontFacingMicroTriangleNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5406,IR(0, 0),IR(7733, 33)/* HitKindBackFacingMicroTriangleNV */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5420,IR(0, 0),IR(7766, 18)/* HitSphereRadiusNV */,IR(0, 0),IR(61, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5421,IR(0, 0),IR(7784, 14)/* HitLSSRadiiNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5436,IR(0, 0),IR(7798, 12)/* ClusterIDNV */,IR(0, 0),IR(64, 1),IR(31, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {6021,IR(0, 0),IR(7851, 12)/* CullMaskKHR */,IR(0, 0),IR(65, 1),IR(32, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {0,IR(0, 0),IR(7878, 7)/* Matrix */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {1,IR(0, 0),IR(4749, 7)/* Shader */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {2,IR(0, 0),IR(4824, 9)/* Geometry */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {3,IR(0, 0),IR(4833, 13)/* Tessellation */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4,IR(0, 0),IR(4637, 10)/* Addresses */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5,IR(0, 0),IR(7885, 8)/* Linkage */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6,IR(0, 0),IR(4591, 7)/* Kernel */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {7,IR(0, 0),IR(7893, 9)/* Vector16 */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {8,IR(0, 0),IR(7902, 14)/* Float16Buffer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {9,IR(0, 0),IR(7916, 8)/* Float16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {10,IR(0, 0),IR(7924, 8)/* Float64 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {11,IR(0, 0),IR(7932, 6)/* Int64 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {12,IR(0, 0),IR(7938, 13)/* Int64Atomics */,IR(0, 0),IR(67, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {13,IR(0, 0),IR(7951, 11)/* ImageBasic */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {14,IR(0, 0),IR(7962, 15)/* ImageReadWrite */,IR(0, 0),IR(68, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {15,IR(0, 0),IR(7977, 12)/* ImageMipmap */,IR(0, 0),IR(68, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {17,IR(0, 0),IR(7989, 6)/* Pipes */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {18,IR(0, 0),IR(7995, 7)/* Groups */,IR(0, 0),IR(1, 0),IR(33, 1),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {19,IR(0, 0),IR(8002, 14)/* DeviceEnqueue */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {20,IR(0, 0),IR(8016, 15)/* LiteralSampler */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {21,IR(0, 0),IR(8031, 14)/* AtomicStorage */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {22,IR(0, 0),IR(8045, 6)/* Int16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {23,IR(0, 0),IR(8051, 22)/* TessellationPointSize */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {24,IR(0, 0),IR(8073, 18)/* GeometryPointSize */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {25,IR(0, 0),IR(8091, 20)/* ImageGatherExtended */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {27,IR(0, 0),IR(8111, 24)/* StorageImageMultisample */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {28,IR(0, 0),IR(8135, 34)/* UniformBufferArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {29,IR(0, 0),IR(8169, 33)/* SampledImageArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {30,IR(0, 0),IR(8202, 34)/* StorageBufferArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {31,IR(0, 0),IR(8236, 33)/* StorageImageArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {32,IR(0, 0),IR(4766, 13)/* ClipDistance */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {33,IR(0, 0),IR(4779, 13)/* CullDistance */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {34,IR(0, 0),IR(8269, 15)/* ImageCubeArray */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {35,IR(0, 0),IR(5105, 18)/* SampleRateShading */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {36,IR(0, 0),IR(8301, 10)/* ImageRect */,IR(0, 0),IR(71, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {37,IR(0, 0),IR(8311, 12)/* SampledRect */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {38,IR(0, 0),IR(8323, 15)/* GenericPointer */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {39,IR(0, 0),IR(8338, 5)/* Int8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {40,IR(0, 0),IR(8343, 16)/* InputAttachment */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {41,IR(0, 0),IR(8359, 16)/* SparseResidency */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {42,IR(0, 0),IR(8375, 7)/* MinLod */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {43,IR(0, 0),IR(8382, 10)/* Sampled1D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {44,IR(0, 0),IR(8392, 8)/* Image1D */,IR(0, 0),IR(72, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {45,IR(0, 0),IR(8284, 17)/* SampledCubeArray */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {46,IR(0, 0),IR(8400, 14)/* SampledBuffer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {47,IR(0, 0),IR(8414, 12)/* ImageBuffer */,IR(0, 0),IR(73, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {48,IR(0, 0),IR(8426, 13)/* ImageMSArray */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {49,IR(0, 0),IR(8439, 28)/* StorageImageExtendedFormats */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {50,IR(0, 0),IR(8467, 11)/* ImageQuery */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {51,IR(0, 0),IR(8478, 18)/* DerivativeControl */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {52,IR(0, 0),IR(8496, 22)/* InterpolationFunction */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {53,IR(0, 0),IR(8518, 18)/* TransformFeedback */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {54,IR(0, 0),IR(8536, 16)/* GeometryStreams */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {55,IR(0, 0),IR(8552, 30)/* StorageImageReadWithoutFormat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {56,IR(0, 0),IR(8582, 31)/* StorageImageWriteWithoutFormat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {57,IR(0, 0),IR(4975, 14)/* MultiViewport */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {58,IR(0, 0),IR(8613, 17)/* SubgroupDispatch */,IR(0, 0),IR(74, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {59,IR(0, 0),IR(8630, 13)/* NamedBarrier */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {60,IR(0, 0),IR(8643, 12)/* PipeStorage */,IR(0, 0),IR(75, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {61,IR(0, 0),IR(5356, 16)/* GroupNonUniform */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {62,IR(0, 0),IR(8655, 20)/* GroupNonUniformVote */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {63,IR(0, 0),IR(8675, 26)/* GroupNonUniformArithmetic */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {64,IR(0, 0),IR(5611, 22)/* GroupNonUniformBallot */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {65,IR(0, 0),IR(8701, 23)/* GroupNonUniformShuffle */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {66,IR(0, 0),IR(8724, 31)/* GroupNonUniformShuffleRelative */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {67,IR(0, 0),IR(8755, 25)/* GroupNonUniformClustered */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {68,IR(0, 0),IR(8780, 20)/* GroupNonUniformQuad */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {69,IR(0, 0),IR(4921, 12)/* ShaderLayer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {70,IR(0, 0),IR(4989, 20)/* ShaderViewportIndex */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {71,IR(0, 0),IR(8800, 18)/* UniformDecoration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4165,IR(0, 0),IR(5513, 16)/* CoreBuiltinsARM */,IR(0, 0),IR(1, 0),IR(34, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4166,IR(0, 0),IR(8818, 28)/* TileImageColorReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4167,IR(0, 0),IR(8846, 28)/* TileImageDepthReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4168,IR(0, 0),IR(8874, 30)/* TileImageStencilReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4174,IR(0, 0),IR(8904, 11)/* TensorsARM */,IR(0, 0),IR(1, 0),IR(36, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4175,IR(0, 0),IR(8915, 37)/* StorageTensorArrayDynamicIndexingARM */,IR(0, 0),IR(1, 0),IR(36, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4176,IR(0, 0),IR(8952, 40)/* StorageTensorArrayNonUniformIndexingARM */,IR(0, 0),IR(1, 0),IR(36, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4191,IR(0, 0),IR(8992, 9)/* GraphARM */,IR(0, 0),IR(1, 0),IR(37, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4201,IR(0, 0),IR(9001, 28)/* CooperativeMatrixLayoutsARM */,IR(0, 0),IR(1, 0),IR(38, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4212,IR(0, 0),IR(9029, 10)/* Float8EXT */,IR(0, 0),IR(1, 0),IR(39, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4213,IR(0, 0),IR(9039, 27)/* Float8CooperativeMatrixEXT */,IR(0, 0),IR(77, 2),IR(39, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4422,IR(0, 0),IR(5838, 23)/* FragmentShadingRateKHR */,IR(0, 0),IR(3, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4423,IR(0, 0),IR(5372, 18)/* SubgroupBallotKHR */,IR(0, 0),IR(1, 0),IR(2, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4427,IR(0, 0),IR(5776, 15)/* DrawParameters */,IR(0, 0),IR(3, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4428,IR(0, 0),IR(9087, 33)/* WorkgroupMemoryExplicitLayoutKHR */,IR(0, 0),IR(3, 1),IR(40, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4429,IR(0, 0),IR(9120, 43)/* WorkgroupMemoryExplicitLayout8BitAccessKHR */,IR(0, 0),IR(79, 1),IR(40, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4430,IR(0, 0),IR(9163, 44)/* WorkgroupMemoryExplicitLayout16BitAccessKHR */,IR(0, 0),IR(79, 1),IR(40, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4431,IR(0, 0),IR(9207, 16)/* SubgroupVoteKHR */,IR(0, 0),IR(1, 0),IR(41, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4433,IR(0, 0),IR(9223, 25)/* StorageBuffer16BitAccess */,IR(23, 1),IR(1, 0),IR(42, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4434,IR(0, 0),IR(9276, 35)/* UniformAndStorageBuffer16BitAccess */,IR(24, 1),IR(80, 1),IR(42, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4435,IR(0, 0),IR(9328, 22)/* StoragePushConstant16 */,IR(0, 0),IR(1, 0),IR(42, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4436,IR(0, 0),IR(9350, 21)/* StorageInputOutput16 */,IR(0, 0),IR(1, 0),IR(42, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4437,IR(0, 0),IR(5873, 12)/* DeviceGroup */,IR(0, 0),IR(1, 0),IR(8, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4439,IR(0, 0),IR(5895, 10)/* MultiView */,IR(0, 0),IR(3, 1),IR(9, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4441,IR(0, 0),IR(9371, 30)/* VariablePointersStorageBuffer */,IR(0, 0),IR(3, 1),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4442,IR(0, 0),IR(9401, 17)/* VariablePointers */,IR(0, 0),IR(81, 1),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4445,IR(0, 0),IR(9418, 17)/* AtomicStorageOps */,IR(0, 0),IR(82, 1),IR(44, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4447,IR(0, 0),IR(9435, 28)/* SampleMaskPostDepthCoverage */,IR(0, 0),IR(1, 0),IR(45, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4448,IR(0, 0),IR(9463, 24)/* StorageBuffer8BitAccess */,IR(0, 0),IR(1, 0),IR(46, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4449,IR(0, 0),IR(9487, 34)/* UniformAndStorageBuffer8BitAccess */,IR(0, 0),IR(83, 1),IR(46, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4450,IR(0, 0),IR(9521, 21)/* StoragePushConstant8 */,IR(0, 0),IR(1, 0),IR(46, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4464,IR(0, 0),IR(9542, 15)/* DenormPreserve */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4465,IR(0, 0),IR(9557, 18)/* DenormFlushToZero */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4466,IR(0, 0),IR(9575, 25)/* SignedZeroInfNanPreserve */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4467,IR(0, 0),IR(9600, 16)/* RoundingModeRTE */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4468,IR(0, 0),IR(9616, 16)/* RoundingModeRTZ */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4471,IR(0, 0),IR(9632, 23)/* RayQueryProvisionalKHR */,IR(0, 0),IR(3, 1),IR(48, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4472,IR(0, 0),IR(9655, 12)/* RayQueryKHR */,IR(0, 0),IR(3, 1),IR(48, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4473,IR(0, 0),IR(9667, 19)/* UntypedPointersKHR */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4478,IR(0, 0),IR(9686, 32)/* RayTraversalPrimitiveCullingKHR */,IR(0, 0),IR(84, 2),IR(50, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4479,IR(0, 0),IR(4859, 14)/* RayTracingKHR */,IR(0, 0),IR(3, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4484,IR(0, 0),IR(9718, 26)/* TextureSampleWeightedQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4485,IR(0, 0),IR(9744, 21)/* TextureBoxFilterQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4486,IR(0, 0),IR(9765, 22)/* TextureBlockMatchQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4495,IR(0, 0),IR(5935, 16)/* TileShadingQCOM */,IR(0, 0),IR(3, 1),IR(53, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4498,IR(0, 0),IR(9787, 23)/* TextureBlockMatch2QCOM */,IR(0, 0),IR(1, 0),IR(54, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5008,IR(0, 0),IR(9810, 16)/* Float16ImageAMD */,IR(0, 0),IR(3, 1),IR(55, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5009,IR(0, 0),IR(9826, 22)/* ImageGatherBiasLodAMD */,IR(0, 0),IR(3, 1),IR(56, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5010,IR(0, 0),IR(9848, 16)/* FragmentMaskAMD */,IR(0, 0),IR(3, 1),IR(57, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5013,IR(0, 0),IR(6172, 17)/* StencilExportEXT */,IR(0, 0),IR(3, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5015,IR(0, 0),IR(9864, 21)/* ImageReadWriteLodAMD */,IR(0, 0),IR(3, 1),IR(58, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5016,IR(0, 0),IR(9885, 14)/* Int64ImageEXT */,IR(0, 0),IR(3, 1),IR(59, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5055,IR(0, 0),IR(9899, 15)/* ShaderClockKHR */,IR(0, 0),IR(1, 0),IR(60, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5067,IR(0, 0),IR(6218, 18)/* ShaderEnqueueAMDX */,IR(0, 0),IR(3, 1),IR(61, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5087,IR(0, 0),IR(9914, 15)/* QuadControlKHR */,IR(0, 0),IR(1, 0),IR(62, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5112,IR(0, 0),IR(9929, 14)/* Int4TypeINTEL */,IR(0, 0),IR(1, 0),IR(63, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5114,IR(0, 0),IR(9943, 27)/* Int4CooperativeMatrixINTEL */,IR(0, 0),IR(86, 2),IR(63, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5116,IR(0, 0),IR(9970, 16)/* BFloat16TypeKHR */,IR(0, 0),IR(1, 0),IR(64, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5117,IR(0, 0),IR(9986, 22)/* BFloat16DotProductKHR */,IR(0, 0),IR(88, 1),IR(64, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5118,IR(0, 0),IR(10008, 29)/* BFloat16CooperativeMatrixKHR */,IR(0, 0),IR(89, 2),IR(64, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5249,IR(0, 0),IR(10037, 29)/* SampleMaskOverrideCoverageNV */,IR(0, 0),IR(25, 1),IR(65, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5251,IR(0, 0),IR(10066, 28)/* GeometryShaderPassthroughNV */,IR(0, 0),IR(69, 1),IR(66, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5254,IR(0, 0),IR(4933, 28)/* ShaderViewportIndexLayerEXT */,IR(25, 1),IR(91, 1),IR(67, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5255,IR(0, 0),IR(6267, 21)/* ShaderViewportMaskNV */,IR(0, 0),IR(92, 1),IR(69, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5259,IR(0, 0),IR(6308, 19)/* ShaderStereoViewNV */,IR(0, 0),IR(93, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5260,IR(0, 0),IR(6369, 20)/* PerViewAttributesNV */,IR(0, 0),IR(40, 1),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5265,IR(0, 0),IR(6427, 24)/* FragmentFullyCoveredEXT */,IR(0, 0),IR(3, 1),IR(17, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5266,IR(0, 0),IR(4873, 14)/* MeshShadingNV */,IR(0, 0),IR(3, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5282,IR(0, 0),IR(10121, 17)/* ImageFootprintNV */,IR(0, 0),IR(1, 0),IR(71, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5283,IR(0, 0),IR(4887, 15)/* MeshShadingEXT */,IR(0, 0),IR(3, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5284,IR(0, 0),IR(6617, 23)/* FragmentBarycentricKHR */,IR(26, 1),IR(1, 0),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5288,IR(0, 0),IR(10160, 31)/* ComputeDerivativeGroupQuadsKHR */,IR(27, 1),IR(3, 1),IR(72, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5291,IR(0, 0),IR(6706, 19)/* FragmentDensityEXT */,IR(28, 1),IR(3, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5297,IR(0, 0),IR(10235, 29)/* GroupNonUniformPartitionedNV */,IR(0, 0),IR(1, 0),IR(74, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5301,IR(0, 0),IR(10264, 17)/* ShaderNonUniform */,IR(29, 1),IR(3, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5302,IR(0, 0),IR(10301, 23)/* RuntimeDescriptorArray */,IR(30, 1),IR(3, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5303,IR(0, 0),IR(10350, 36)/* InputAttachmentArrayDynamicIndexing */,IR(31, 1),IR(94, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5304,IR(0, 0),IR(10425, 39)/* UniformTexelBufferArrayDynamicIndexing */,IR(32, 1),IR(73, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5305,IR(0, 0),IR(10506, 39)/* StorageTexelBufferArrayDynamicIndexing */,IR(33, 1),IR(95, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5306,IR(0, 0),IR(10587, 37)/* UniformBufferArrayNonUniformIndexing */,IR(34, 1),IR(96, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5307,IR(0, 0),IR(10664, 36)/* SampledImageArrayNonUniformIndexing */,IR(35, 1),IR(96, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5308,IR(0, 0),IR(10739, 37)/* StorageBufferArrayNonUniformIndexing */,IR(36, 1),IR(96, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5309,IR(0, 0),IR(10816, 36)/* StorageImageArrayNonUniformIndexing */,IR(37, 1),IR(96, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5310,IR(0, 0),IR(10891, 39)/* InputAttachmentArrayNonUniformIndexing */,IR(38, 1),IR(97, 2),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5311,IR(0, 0),IR(10972, 42)/* UniformTexelBufferArrayNonUniformIndexing */,IR(39, 1),IR(99, 2),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5312,IR(0, 0),IR(11059, 42)/* StorageTexelBufferArrayNonUniformIndexing */,IR(40, 1),IR(101, 2),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5336,IR(0, 0),IR(7321, 27)/* RayTracingPositionFetchKHR */,IR(0, 0),IR(3, 1),IR(76, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5340,IR(0, 0),IR(4846, 13)/* RayTracingNV */,IR(0, 0),IR(3, 1),IR(26, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5341,IR(0, 0),IR(7268, 23)/* RayTracingMotionBlurNV */,IR(0, 0),IR(3, 1),IR(27, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5345,IR(0, 0),IR(11146, 18)/* VulkanMemoryModel */,IR(41, 1),IR(1, 0),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5346,IR(0, 0),IR(11185, 29)/* VulkanMemoryModelDeviceScope */,IR(42, 1),IR(1, 0),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5347,IR(0, 0),IR(4709, 31)/* PhysicalStorageBufferAddresses */,IR(43, 1),IR(3, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5350,IR(0, 0),IR(11280, 32)/* ComputeDerivativeGroupLinearKHR */,IR(44, 1),IR(3, 1),IR(72, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5353,IR(0, 0),IR(11343, 25)/* RayTracingProvisionalKHR */,IR(0, 0),IR(3, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5357,IR(0, 0),IR(11368, 20)/* CooperativeMatrixNV */,IR(0, 0),IR(3, 1),IR(78, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5363,IR(0, 0),IR(11388, 33)/* FragmentShaderSampleInterlockEXT */,IR(0, 0),IR(3, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5372,IR(0, 0),IR(11421, 38)/* FragmentShaderShadingRateInterlockEXT */,IR(0, 0),IR(3, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5373,IR(0, 0),IR(7636, 19)/* ShaderSMBuiltinsNV */,IR(0, 0),IR(3, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5378,IR(0, 0),IR(11459, 32)/* FragmentShaderPixelInterlockEXT */,IR(0, 0),IR(3, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5379,IR(0, 0),IR(11491, 25)/* DemoteToHelperInvocation */,IR(45, 1),IR(3, 1),IR(80, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5380,IR(0, 0),IR(11544, 23)/* DisplacementMicromapNV */,IR(0, 0),IR(3, 1),IR(81, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5381,IR(0, 0),IR(11567, 29)/* RayTracingOpacityMicromapEXT */,IR(0, 0),IR(3, 1),IR(82, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5383,IR(0, 0),IR(11596, 26)/* ShaderInvocationReorderNV */,IR(0, 0),IR(60, 1),IR(83, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5390,IR(0, 0),IR(11622, 18)/* BindlessTextureNV */,IR(0, 0),IR(1, 0),IR(84, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5391,IR(0, 0),IR(11640, 25)/* RayQueryPositionFetchKHR */,IR(0, 0),IR(3, 1),IR(76, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5394,IR(0, 0),IR(11665, 20)/* CooperativeVectorNV */,IR(0, 0),IR(1, 0),IR(85, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5404,IR(0, 0),IR(11685, 22)/* AtomicFloat16VectorNV */,IR(0, 0),IR(1, 0),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5409,IR(0, 0),IR(7382, 33)/* RayTracingDisplacementMicromapNV */,IR(0, 0),IR(60, 1),IR(81, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5414,IR(0, 0),IR(11707, 18)/* RawAccessChainsNV */,IR(0, 0),IR(1, 0),IR(87, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5418,IR(0, 0),IR(7525, 28)/* RayTracingSpheresGeometryNV */,IR(0, 0),IR(1, 0),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5419,IR(0, 0),IR(7564, 39)/* RayTracingLinearSweptSpheresGeometryNV */,IR(0, 0),IR(1, 0),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5430,IR(0, 0),IR(11725, 30)/* CooperativeMatrixReductionsNV */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5431,IR(0, 0),IR(11755, 31)/* CooperativeMatrixConversionsNV */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5432,IR(0, 0),IR(11786, 40)/* CooperativeMatrixPerElementOperationsNV */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5433,IR(0, 0),IR(11826, 36)/* CooperativeMatrixTensorAddressingNV */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5434,IR(0, 0),IR(11862, 30)/* CooperativeMatrixBlockLoadsNV */,IR(0, 0),IR(1, 0),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5435,IR(0, 0),IR(11892, 28)/* CooperativeVectorTrainingNV */,IR(0, 0),IR(1, 0),IR(85, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5437,IR(0, 0),IR(7810, 41)/* RayTracingClusterAccelerationStructureNV */,IR(0, 0),IR(60, 1),IR(31, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5439,IR(0, 0),IR(11920, 19)/* TensorAddressingNV */,IR(0, 0),IR(1, 0),IR(89, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5568,IR(0, 0),IR(11939, 21)/* SubgroupShuffleINTEL */,IR(0, 0),IR(1, 0),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5569,IR(0, 0),IR(11960, 27)/* SubgroupBufferBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5570,IR(0, 0),IR(11987, 26)/* SubgroupImageBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(90, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5579,IR(0, 0),IR(12013, 31)/* SubgroupImageMediaBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(91, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5582,IR(0, 0),IR(12044, 21)/* RoundToInfinityINTEL */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5583,IR(0, 0),IR(12065, 23)/* FloatingPointModeINTEL */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5584,IR(0, 0),IR(12088, 23)/* IntegerFunctions2INTEL */,IR(0, 0),IR(1, 0),IR(93, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5603,IR(0, 0),IR(12111, 22)/* FunctionPointersINTEL */,IR(0, 0),IR(1, 0),IR(94, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5604,IR(0, 0),IR(12133, 24)/* IndirectReferencesINTEL */,IR(0, 0),IR(1, 0),IR(94, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5606,IR(0, 0),IR(12157, 9)/* AsmINTEL */,IR(0, 0),IR(1, 0),IR(95, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5612,IR(0, 0),IR(12166, 23)/* AtomicFloat32MinMaxEXT */,IR(0, 0),IR(1, 0),IR(96, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5613,IR(0, 0),IR(12189, 23)/* AtomicFloat64MinMaxEXT */,IR(0, 0),IR(1, 0),IR(96, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5616,IR(0, 0),IR(12212, 23)/* AtomicFloat16MinMaxEXT */,IR(0, 0),IR(1, 0),IR(96, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5617,IR(0, 0),IR(12235, 19)/* VectorComputeINTEL */,IR(0, 0),IR(103, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5619,IR(0, 0),IR(12254, 15)/* VectorAnyINTEL */,IR(0, 0),IR(1, 0),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5629,IR(0, 0),IR(12269, 16)/* ExpectAssumeKHR */,IR(0, 0),IR(1, 0),IR(98, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5696,IR(0, 0),IR(12285, 33)/* SubgroupAvcMotionEstimationINTEL */,IR(0, 0),IR(1, 0),IR(99, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5697,IR(0, 0),IR(12318, 38)/* SubgroupAvcMotionEstimationIntraINTEL */,IR(0, 0),IR(1, 0),IR(99, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5698,IR(0, 0),IR(12356, 39)/* SubgroupAvcMotionEstimationChromaINTEL */,IR(0, 0),IR(1, 0),IR(99, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5817,IR(0, 0),IR(12395, 25)/* VariableLengthArrayINTEL */,IR(0, 0),IR(1, 0),IR(100, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5821,IR(0, 0),IR(12420, 26)/* FunctionFloatControlINTEL */,IR(0, 0),IR(1, 0),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5824,IR(0, 0),IR(12446, 26)/* FPGAMemoryAttributesINTEL */,IR(0, 0),IR(1, 0),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5837,IR(0, 0),IR(12472, 20)/* FPFastMathModeINTEL */,IR(0, 0),IR(0, 1),IR(102, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5844,IR(0, 0),IR(12492, 32)/* ArbitraryPrecisionIntegersINTEL */,IR(0, 0),IR(1, 0),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5845,IR(0, 0),IR(12524, 37)/* ArbitraryPrecisionFloatingPointINTEL */,IR(0, 0),IR(1, 0),IR(104, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5886,IR(0, 0),IR(12561, 30)/* UnstructuredLoopControlsINTEL */,IR(0, 0),IR(1, 0),IR(105, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5888,IR(0, 0),IR(12591, 22)/* FPGALoopControlsINTEL */,IR(0, 0),IR(1, 0),IR(106, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5892,IR(0, 0),IR(12613, 22)/* KernelAttributesINTEL */,IR(0, 0),IR(1, 0),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5897,IR(0, 0),IR(12635, 26)/* FPGAKernelAttributesINTEL */,IR(0, 0),IR(1, 0),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5898,IR(0, 0),IR(12661, 24)/* FPGAMemoryAccessesINTEL */,IR(0, 0),IR(1, 0),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5904,IR(0, 0),IR(12685, 27)/* FPGAClusterAttributesINTEL */,IR(0, 0),IR(1, 0),IR(109, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5906,IR(0, 0),IR(12712, 14)/* LoopFuseINTEL */,IR(0, 0),IR(1, 0),IR(110, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5908,IR(0, 0),IR(12726, 20)/* FPGADSPControlINTEL */,IR(0, 0),IR(1, 0),IR(111, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5910,IR(0, 0),IR(12746, 26)/* MemoryAccessAliasingINTEL */,IR(0, 0),IR(1, 0),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5916,IR(0, 0),IR(12772, 40)/* FPGAInvocationPipeliningAttributesINTEL */,IR(0, 0),IR(1, 0),IR(113, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5920,IR(0, 0),IR(12812, 24)/* FPGABufferLocationINTEL */,IR(0, 0),IR(1, 0),IR(114, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5922,IR(0, 0),IR(12836, 34)/* ArbitraryPrecisionFixedPointINTEL */,IR(0, 0),IR(1, 0),IR(115, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5935,IR(0, 0),IR(12870, 23)/* USMStorageClassesINTEL */,IR(0, 0),IR(1, 0),IR(116, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5939,IR(0, 0),IR(12893, 29)/* RuntimeAlignedAttributeINTEL */,IR(0, 0),IR(1, 0),IR(117, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5943,IR(0, 0),IR(12922, 13)/* IOPipesINTEL */,IR(0, 0),IR(1, 0),IR(118, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5945,IR(0, 0),IR(12935, 19)/* BlockingPipesINTEL */,IR(0, 0),IR(1, 0),IR(119, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5948,IR(0, 0),IR(12954, 13)/* FPGARegINTEL */,IR(0, 0),IR(1, 0),IR(120, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6016,IR(0, 0),IR(12967, 19)/* DotProductInputAll */,IR(46, 1),IR(1, 0),IR(121, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6017,IR(0, 0),IR(13008, 22)/* DotProductInput4x8Bit */,IR(47, 1),IR(104, 1),IR(121, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6018,IR(0, 0),IR(13055, 28)/* DotProductInput4x8BitPacked */,IR(48, 1),IR(1, 0),IR(121, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6019,IR(0, 0),IR(13114, 11)/* DotProduct */,IR(49, 1),IR(1, 0),IR(121, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6020,IR(0, 0),IR(7863, 15)/* RayCullMaskKHR */,IR(0, 0),IR(1, 0),IR(32, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6022,IR(0, 0),IR(9066, 21)/* CooperativeMatrixKHR */,IR(0, 0),IR(1, 0),IR(122, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6024,IR(0, 0),IR(13139, 24)/* ReplicatedCompositesEXT */,IR(0, 0),IR(1, 0),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6025,IR(0, 0),IR(13163, 16)/* BitInstructions */,IR(0, 0),IR(1, 0),IR(124, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6026,IR(0, 0),IR(13179, 25)/* GroupNonUniformRotateKHR */,IR(0, 0),IR(76, 1),IR(125, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6029,IR(0, 0),IR(13204, 15)/* FloatControls2 */,IR(0, 0),IR(1, 0),IR(126, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6033,IR(0, 0),IR(13219, 20)/* AtomicFloat32AddEXT */,IR(0, 0),IR(1, 0),IR(127, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6034,IR(0, 0),IR(13239, 20)/* AtomicFloat64AddEXT */,IR(0, 0),IR(1, 0),IR(127, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6089,IR(0, 0),IR(13259, 20)/* LongCompositesINTEL */,IR(0, 0),IR(1, 0),IR(128, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6094,IR(0, 0),IR(13279, 11)/* OptNoneEXT */,IR(50, 1),IR(1, 0),IR(129, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6095,IR(0, 0),IR(13303, 20)/* AtomicFloat16AddEXT */,IR(0, 0),IR(1, 0),IR(131, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6114,IR(0, 0),IR(13323, 21)/* DebugInfoModuleINTEL */,IR(0, 0),IR(1, 0),IR(132, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6115,IR(0, 0),IR(13344, 24)/* BFloat16ConversionINTEL */,IR(0, 0),IR(1, 0),IR(133, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6141,IR(0, 0),IR(13368, 18)/* SplitBarrierINTEL */,IR(0, 0),IR(1, 0),IR(134, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6144,IR(0, 0),IR(13386, 19)/* ArithmeticFenceEXT */,IR(0, 0),IR(1, 0),IR(135, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6150,IR(0, 0),IR(13405, 29)/* FPGAClusterAttributesV2INTEL */,IR(0, 0),IR(105, 1),IR(109, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6161,IR(0, 0),IR(13434, 28)/* FPGAKernelAttributesv2INTEL */,IR(0, 0),IR(106, 1),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6162,IR(0, 0),IR(13462, 18)/* TaskSequenceINTEL */,IR(0, 0),IR(1, 0),IR(136, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6169,IR(0, 0),IR(13480, 16)/* FPMaxErrorINTEL */,IR(0, 0),IR(1, 0),IR(137, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6171,IR(0, 0),IR(13496, 24)/* FPGALatencyControlINTEL */,IR(0, 0),IR(1, 0),IR(138, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6174,IR(0, 0),IR(13520, 28)/* FPGAArgumentInterfacesINTEL */,IR(0, 0),IR(1, 0),IR(139, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6187,IR(0, 0),IR(13548, 30)/* GlobalVariableHostAccessINTEL */,IR(0, 0),IR(1, 0),IR(140, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6189,IR(0, 0),IR(13578, 35)/* GlobalVariableFPGADecorationsINTEL */,IR(0, 0),IR(1, 0),IR(141, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6220,IR(0, 0),IR(13613, 28)/* SubgroupBufferPrefetchINTEL */,IR(0, 0),IR(1, 0),IR(142, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6228,IR(0, 0),IR(13641, 23)/* Subgroup2DBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(143, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6229,IR(0, 0),IR(13664, 30)/* Subgroup2DBlockTransformINTEL */,IR(0, 0),IR(107, 1),IR(143, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6230,IR(0, 0),IR(13694, 30)/* Subgroup2DBlockTransposeINTEL */,IR(0, 0),IR(107, 1),IR(143, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6236,IR(0, 0),IR(13724, 38)/* SubgroupMatrixMultiplyAccumulateINTEL */,IR(0, 0),IR(1, 0),IR(144, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6241,IR(0, 0),IR(13762, 28)/* TernaryBitwiseFunctionINTEL */,IR(0, 0),IR(1, 0),IR(145, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6245,IR(0, 0),IR(13790, 21)/* SpecConditionalINTEL */,IR(0, 0),IR(1, 0),IR(146, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6246,IR(0, 0),IR(13811, 22)/* FunctionVariantsINTEL */,IR(0, 0),IR(108, 1),IR(146, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6400,IR(0, 0),IR(13833, 26)/* GroupUniformArithmeticKHR */,IR(0, 0),IR(1, 0),IR(147, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6425,IR(0, 0),IR(13859, 27)/* TensorFloat32RoundingINTEL */,IR(0, 0),IR(1, 0),IR(148, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6427,IR(0, 0),IR(13886, 25)/* MaskedGatherScatterINTEL */,IR(0, 0),IR(1, 0),IR(149, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6441,IR(0, 0),IR(13911, 19)/* CacheControlsINTEL */,IR(0, 0),IR(1, 0),IR(150, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6460,IR(0, 0),IR(13930, 20)/* RegisterLimitsINTEL */,IR(0, 0),IR(1, 0),IR(151, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6528,IR(0, 0),IR(13950, 20)/* BindlessImagesINTEL */,IR(0, 0),IR(1, 0),IR(152, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {0,IR(0, 0),IR(13970, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13982, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13990, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {3,IR(0, 0),IR(13998, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(14004, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(14011, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(14022, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(14031, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(14044, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(14050, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(14060, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(14066, 15)/* ImportedModule */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {1,IR(0, 0),IR(14081, 20)/* ImportedDeclaration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(14106, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(14122, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(14136, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(14149, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(14161, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(14178, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(14190, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(14205, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(14218, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(14233, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(14251, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(14268, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(14289, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(14309, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(14329, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {16384,IR(0, 0),IR(14345, 16)/* FlagIsEnumClass */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {32768,IR(0, 0),IR(14361, 20)/* FlagTypePassByValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {65536,IR(0, 0),IR(14381, 24)/* FlagTypePassByReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14405, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {1,IR(0, 0),IR(14411, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {2,IR(0, 0),IR(14416, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {3,IR(0, 1),IR(14455, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {4,IR(1, 2),IR(14466, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {5,IR(0, 0),IR(14475, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {6,IR(0, 0),IR(14480, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {7,IR(0, 0),IR(14487, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {8,IR(0, 1),IR(14498, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {9,IR(1, 2),IR(14505, 9)/* Fragment */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {0,IR(0, 0),IR(14514, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14524, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14537, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {3,IR(0, 0),IR(14550, 11)/* AtomicType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(14561, 10)/* Float16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1,IR(0, 0),IR(14571, 10)/* Float32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {2,IR(0, 0),IR(14581, 10)/* Float64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {3,IR(0, 0),IR(14591, 13)/* SignedInt8NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {4,IR(0, 0),IR(14604, 14)/* SignedInt16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {5,IR(0, 0),IR(14618, 14)/* SignedInt32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {6,IR(0, 0),IR(14632, 14)/* SignedInt64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {7,IR(0, 0),IR(14646, 15)/* UnsignedInt8NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {8,IR(0, 0),IR(14661, 16)/* UnsignedInt16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {9,IR(0, 0),IR(14677, 16)/* UnsignedInt32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {10,IR(0, 0),IR(14693, 16)/* UnsignedInt64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491000,IR(0, 0),IR(14709, 19)/* SignedInt8PackedNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491001,IR(0, 0),IR(14728, 21)/* UnsignedInt8PackedNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491002,IR(0, 0),IR(14749, 12)/* FloatE4M3NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491003,IR(0, 0),IR(14761, 12)/* FloatE5M2NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {0,IR(0, 0),IR(14773, 12)/* RowMajorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {1,IR(0, 0),IR(14785, 15)/* ColumnMajorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {4202,IR(0, 0),IR(14800, 25)/* RowBlockedInterleavedARM */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {4203,IR(0, 0),IR(14825, 28)/* ColumnBlockedInterleavedARM */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {0,IR(0, 0),IR(14853, 8)/* NoneKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {1,IR(0, 0),IR(14861, 27)/* MatrixASignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {2,IR(0, 0),IR(14888, 27)/* MatrixBSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {4,IR(0, 0),IR(14915, 27)/* MatrixCSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {8,IR(0, 0),IR(14942, 32)/* MatrixResultSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {16,IR(0, 0),IR(14974, 26)/* SaturatingAccumulationKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {1,IR(0, 0),IR(15000, 4)/* Row */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {2,IR(0, 0),IR(15004, 7)/* Column */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {4,IR(0, 0),IR(15011, 4)/* 2x2 */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {0,IR(0, 0),IR(15015, 11)/* MatrixAKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {1,IR(0, 0),IR(15026, 11)/* MatrixBKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {2,IR(0, 0),IR(15037, 21)/* MatrixAccumulatorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {0,IR(0, 0),IR(15058, 11)/* RowMajorNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {1,IR(0, 0),IR(15069, 14)/* ColumnMajorNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {2,IR(0, 0),IR(15083, 21)/* InferencingOptimalNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {3,IR(0, 0),IR(15104, 18)/* TrainingOptimalNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {0,IR(0, 0),IR(13970, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13982, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13990, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(13998, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(14004, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(14011, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(14022, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {8,IR(0, 0),IR(14031, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(14044, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(14050, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(14060, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(14106, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(14122, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(14136, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(14149, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(14161, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(14178, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(14190, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(14205, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(14218, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(14233, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(14251, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(14268, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(14289, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(14309, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(14329, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14405, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {1,IR(0, 0),IR(14411, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {2,IR(0, 0),IR(14416, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {3,IR(0, 1),IR(14455, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {4,IR(1, 2),IR(14466, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {5,IR(0, 0),IR(14475, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {6,IR(0, 0),IR(14480, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {7,IR(0, 0),IR(14487, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {8,IR(0, 1),IR(14498, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {0,IR(0, 0),IR(14514, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14524, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14537, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(15122, 17)/* RelaxedPrecision */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {1,IR(0, 1),IR(15139, 7)/* SpecId */,IR(0, 0),IR(109, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {2,IR(0, 0),IR(15146, 6)/* Block */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {3,IR(0, 0),IR(15152, 12)/* BufferBlock */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),SPV_SPIRV_VERSION_WORD(1,3)}, // SPV_OPERAND_TYPE_DECORATION
  {4,IR(0, 0),IR(15164, 9)/* RowMajor */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5,IR(0, 0),IR(15173, 9)/* ColMajor */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6,IR(0, 1),IR(15182, 12)/* ArrayStride */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {7,IR(0, 1),IR(15194, 13)/* MatrixStride */,IR(0, 0),IR(66, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {8,IR(0, 0),IR(15207, 11)/* GLSLShared */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {9,IR(0, 0),IR(15218, 11)/* GLSLPacked */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {10,IR(0, 0),IR(15229, 8)/* CPacked */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {11,IR(3, 1),IR(15263, 8)/* BuiltIn */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {13,IR(0, 0),IR(15271, 14)/* NoPerspective */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {14,IR(0, 0),IR(15285, 5)/* Flat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {15,IR(0, 0),IR(15290, 6)/* Patch */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {16,IR(0, 0),IR(15296, 9)/* Centroid */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {17,IR(0, 0),IR(15305, 7)/* Sample */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {18,IR(0, 0),IR(15312, 10)/* Invariant */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {19,IR(0, 0),IR(15322, 9)/* Restrict */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {20,IR(0, 0),IR(15331, 8)/* Aliased */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {21,IR(0, 0),IR(15339, 9)/* Volatile */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {22,IR(0, 0),IR(15348, 9)/* Constant */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {23,IR(0, 0),IR(15357, 9)/* Coherent */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {24,IR(0, 0),IR(15366, 12)/* NonWritable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {25,IR(0, 0),IR(15378, 12)/* NonReadable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {26,IR(0, 0),IR(15390, 8)/* Uniform */,IR(0, 0),IR(111, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {27,IR(4, 1),IR(15424, 10)/* UniformId */,IR(0, 0),IR(111, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {28,IR(0, 0),IR(15434, 20)/* SaturatedConversion */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {29,IR(0, 1),IR(15454, 7)/* Stream */,IR(0, 0),IR(113, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {30,IR(0, 1),IR(15461, 9)/* Location */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {31,IR(0, 1),IR(15470, 10)/* Component */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {32,IR(0, 1),IR(15480, 6)/* Index */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {33,IR(0, 1),IR(15486, 8)/* Binding */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {34,IR(0, 1),IR(15494, 14)/* DescriptorSet */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {35,IR(0, 1),IR(15508, 7)/* Offset */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {36,IR(0, 1),IR(15515, 10)/* XfbBuffer */,IR(0, 0),IR(114, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {37,IR(0, 1),IR(15525, 10)/* XfbStride */,IR(0, 0),IR(114, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {38,IR(5, 1),IR(15581, 14)/* FuncParamAttr */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {39,IR(6, 1),IR(15629, 15)/* FPRoundingMode */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {40,IR(7, 1),IR(15679, 15)/* FPFastMathMode */,IR(0, 0),IR(115, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {41,IR(8, 2),IR(15756, 18)/* LinkageAttributes */,IR(0, 0),IR(117, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {42,IR(0, 0),IR(15774, 14)/* NoContraction */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {43,IR(0, 1),IR(15788, 21)/* InputAttachmentIndex */,IR(0, 0),IR(94, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {44,IR(0, 1),IR(15809, 10)/* Alignment */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {45,IR(0, 1),IR(15819, 14)/* MaxByteOffset */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {46,IR(10, 1),IR(15853, 12)/* AlignmentId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {47,IR(10, 1),IR(15865, 16)/* MaxByteOffsetId */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4216,IR(0, 0),IR(15881, 44)/* SaturatedToLargestFloat8NormalConversionEXT */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4469,IR(0, 0),IR(15925, 13)/* NoSignedWrap */,IR(0, 0),IR(1, 0),IR(153, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4470,IR(0, 0),IR(15938, 15)/* NoUnsignedWrap */,IR(0, 0),IR(1, 0),IR(153, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4487,IR(0, 0),IR(15953, 18)/* WeightTextureQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4488,IR(0, 0),IR(15971, 22)/* BlockMatchTextureQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4499,IR(0, 0),IR(15993, 22)/* BlockMatchSamplerQCOM */,IR(0, 0),IR(1, 0),IR(54, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4999,IR(0, 0),IR(16015, 18)/* ExplicitInterpAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5019,IR(10, 1),IR(16033, 32)/* NodeSharesPayloadLimitsWithAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5020,IR(10, 1),IR(16065, 20)/* NodeMaxPayloadsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5078,IR(0, 0),IR(16085, 23)/* TrackFinishWritingAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5091,IR(10, 1),IR(16108, 20)/* PayloadNodeNameAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5098,IR(10, 1),IR(16128, 25)/* PayloadNodeBaseIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5099,IR(0, 0),IR(16153, 27)/* PayloadNodeSparseArrayAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5100,IR(10, 1),IR(16180, 25)/* PayloadNodeArraySizeAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5105,IR(0, 0),IR(16205, 28)/* PayloadDispatchIndirectAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5248,IR(0, 0),IR(16233, 19)/* OverrideCoverageNV */,IR(0, 0),IR(119, 1),IR(65, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5250,IR(0, 0),IR(16252, 14)/* PassthroughNV */,IR(0, 0),IR(120, 1),IR(66, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5252,IR(0, 0),IR(16266, 19)/* ViewportRelativeNV */,IR(0, 0),IR(93, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5256,IR(0, 1),IR(16285, 28)/* SecondaryViewportRelativeNV */,IR(0, 0),IR(46, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5271,IR(0, 0),IR(16313, 16)/* PerPrimitiveEXT */,IR(51, 1),IR(121, 2),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5272,IR(0, 0),IR(16344, 10)/* PerViewNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5273,IR(0, 0),IR(16354, 10)/* PerTaskNV */,IR(0, 0),IR(50, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5285,IR(0, 0),IR(16364, 13)/* PerVertexKHR */,IR(52, 1),IR(51, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5300,IR(0, 0),IR(16389, 11)/* NonUniform */,IR(53, 1),IR(96, 1),IR(75, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5355,IR(0, 0),IR(16414, 16)/* RestrictPointer */,IR(54, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5356,IR(0, 0),IR(16449, 15)/* AliasedPointer */,IR(55, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5386,IR(0, 0),IR(16482, 30)/* HitObjectShaderRecordBufferNV */,IR(0, 0),IR(123, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5398,IR(0, 0),IR(16512, 18)/* BindlessSamplerNV */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5399,IR(0, 0),IR(16530, 16)/* BindlessImageNV */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5400,IR(0, 0),IR(16546, 15)/* BoundSamplerNV */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5401,IR(0, 0),IR(16561, 13)/* BoundImageNV */,IR(0, 0),IR(124, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5599,IR(0, 1),IR(16574, 14)/* SIMTCallINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5602,IR(0, 0),IR(16588, 26)/* ReferencedIndirectlyINTEL */,IR(0, 0),IR(126, 1),IR(94, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5607,IR(11, 1),IR(16614, 13)/* ClobberINTEL */,IR(0, 0),IR(127, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5608,IR(0, 0),IR(16627, 17)/* SideEffectsINTEL */,IR(0, 0),IR(127, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5624,IR(0, 0),IR(16644, 27)/* VectorComputeVariableINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5625,IR(0, 1),IR(16671, 21)/* FuncParamIOKindINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5626,IR(0, 0),IR(16692, 27)/* VectorComputeFunctionINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5627,IR(0, 0),IR(16719, 15)/* StackCallINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5628,IR(0, 1),IR(16734, 26)/* GlobalVariableOffsetINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5634,IR(10, 1),IR(16760, 14)/* CounterBuffer */,IR(56, 1),IR(1, 0),IR(156, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5635,IR(11, 1),IR(16798, 13)/* UserSemantic */,IR(57, 1),IR(1, 0),IR(156, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5636,IR(11, 1),IR(16830, 15)/* UserTypeGOOGLE */,IR(0, 0),IR(1, 0),IR(157, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5822,IR(12, 2),IR(16845, 26)/* FunctionRoundingModeINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5823,IR(14, 2),IR(16902, 24)/* FunctionDenormModeINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5825,IR(0, 0),IR(16926, 14)/* RegisterINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5826,IR(11, 1),IR(16940, 12)/* MemoryINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5827,IR(0, 1),IR(16952, 14)/* NumbanksINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5828,IR(0, 1),IR(16966, 15)/* BankwidthINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5829,IR(0, 1),IR(16981, 22)/* MaxPrivateCopiesINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5830,IR(0, 0),IR(17003, 16)/* SinglepumpINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5831,IR(0, 0),IR(17019, 16)/* DoublepumpINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5832,IR(0, 1),IR(17035, 19)/* MaxReplicatesINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5833,IR(0, 0),IR(17054, 20)/* SimpleDualPortINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5834,IR(16, 2),IR(17074, 11)/* MergeINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5835,IR(18, 1),IR(17127, 14)/* BankBitsINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5836,IR(0, 1),IR(17141, 20)/* ForcePow2DepthINTEL */,IR(0, 0),IR(129, 1),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5883,IR(0, 1),IR(17161, 16)/* StridesizeINTEL */,IR(0, 0),IR(129, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5884,IR(0, 1),IR(17177, 14)/* WordsizeINTEL */,IR(0, 0),IR(129, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5885,IR(0, 0),IR(17191, 18)/* TrueDualPortINTEL */,IR(0, 0),IR(129, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5899,IR(0, 0),IR(17209, 19)/* BurstCoalesceINTEL */,IR(0, 0),IR(130, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5900,IR(0, 1),IR(17228, 15)/* CacheSizeINTEL */,IR(0, 0),IR(130, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5901,IR(0, 0),IR(17243, 28)/* DontStaticallyCoalesceINTEL */,IR(0, 0),IR(130, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5902,IR(0, 1),IR(17271, 14)/* PrefetchINTEL */,IR(0, 0),IR(130, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5905,IR(0, 0),IR(17285, 17)/* StallEnableINTEL */,IR(0, 0),IR(105, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5907,IR(0, 0),IR(17302, 25)/* FuseLoopsInFunctionINTEL */,IR(0, 0),IR(131, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5909,IR(1, 2),IR(17327, 19)/* MathOpDSPModeINTEL */,IR(0, 0),IR(132, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5914,IR(10, 1),IR(17346, 16)/* AliasScopeINTEL */,IR(0, 0),IR(133, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5915,IR(10, 1),IR(17362, 13)/* NoAliasINTEL */,IR(0, 0),IR(133, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5917,IR(0, 1),IR(17375, 24)/* InitiationIntervalINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5918,IR(0, 1),IR(17399, 20)/* MaxConcurrencyINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5919,IR(0, 1),IR(17419, 20)/* PipelineEnableINTEL */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5921,IR(0, 1),IR(17439, 20)/* BufferLocationINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5944,IR(0, 1),IR(17459, 19)/* IOPipeStorageINTEL */,IR(0, 0),IR(136, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6080,IR(19, 2),IR(17512, 31)/* FunctionFloatingPointModeINTEL */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6085,IR(0, 0),IR(17543, 25)/* SingleElementVectorINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6087,IR(0, 0),IR(17568, 35)/* VectorComputeCallableFunctionINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6140,IR(0, 0),IR(17603, 18)/* MediaBlockIOINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6151,IR(0, 0),IR(17621, 15)/* StallFreeINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6170,IR(21, 1),IR(17667, 26)/* FPMaxErrorDecorationINTEL */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6172,IR(0, 1),IR(17693, 25)/* LatencyControlLabelINTEL */,IR(0, 0),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6173,IR(22, 3),IR(17718, 30)/* LatencyControlConstraintINTEL */,IR(0, 0),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6175,IR(0, 0),IR(17748, 27)/* ConduitKernelArgumentINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6176,IR(0, 0),IR(17775, 31)/* RegisterMapKernelArgumentINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6177,IR(0, 1),IR(17806, 33)/* MMHostInterfaceAddressWidthINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6178,IR(0, 1),IR(17839, 30)/* MMHostInterfaceDataWidthINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6179,IR(0, 1),IR(17869, 28)/* MMHostInterfaceLatencyINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6180,IR(25, 1),IR(17931, 34)/* MMHostInterfaceReadWriteModeINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6181,IR(0, 1),IR(17965, 29)/* MMHostInterfaceMaxBurstINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6182,IR(0, 1),IR(17994, 32)/* MMHostInterfaceWaitRequestINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6183,IR(0, 0),IR(18026, 26)/* StableKernelArgumentINTEL */,IR(0, 0),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6188,IR(26, 2),IR(18091, 16)/* HostAccessINTEL */,IR(0, 0),IR(141, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6190,IR(28, 1),IR(18154, 14)/* InitModeINTEL */,IR(0, 0),IR(142, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6191,IR(0, 1),IR(18168, 28)/* ImplementInRegisterMapINTEL */,IR(0, 0),IR(142, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6247,IR(10, 1),IR(18196, 17)/* ConditionalINTEL */,IR(0, 0),IR(108, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6442,IR(29, 2),IR(18249, 22)/* CacheControlLoadINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6443,IR(31, 2),IR(18308, 23)/* CacheControlStoreINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {0,IR(0, 0),IR(18331, 3)/* 1D */,IR(0, 0),IR(72, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {1,IR(0, 0),IR(18334, 3)/* 2D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {2,IR(0, 0),IR(18337, 3)/* 3D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {3,IR(0, 0),IR(18340, 5)/* Cube */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {4,IR(0, 0),IR(18345, 5)/* Rect */,IR(0, 0),IR(71, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {5,IR(0, 0),IR(18350, 7)/* Buffer */,IR(0, 0),IR(73, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {6,IR(0, 0),IR(18357, 12)/* SubpassData */,IR(0, 0),IR(94, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {4173,IR(0, 0),IR(18369, 17)/* TileImageDataEXT */,IR(0, 0),IR(144, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {0,IR(0, 1),IR(18386, 12)/* Invocations */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {1,IR(0, 0),IR(18398, 13)/* SpacingEqual */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {2,IR(0, 0),IR(18411, 22)/* SpacingFractionalEven */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {3,IR(0, 0),IR(18433, 21)/* SpacingFractionalOdd */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4,IR(0, 0),IR(18454, 14)/* VertexOrderCw */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5,IR(0, 0),IR(18468, 15)/* VertexOrderCcw */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6,IR(0, 0),IR(18483, 19)/* PixelCenterInteger */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {7,IR(0, 0),IR(18502, 16)/* OriginUpperLeft */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {8,IR(0, 0),IR(18518, 16)/* OriginLowerLeft */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {9,IR(0, 0),IR(18534, 19)/* EarlyFragmentTests */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {10,IR(0, 0),IR(18553, 10)/* PointMode */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {11,IR(0, 0),IR(18563, 4)/* Xfb */,IR(0, 0),IR(114, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {12,IR(0, 0),IR(18567, 15)/* DepthReplacing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {14,IR(0, 0),IR(18582, 13)/* DepthGreater */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {15,IR(0, 0),IR(18595, 10)/* DepthLess */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {16,IR(0, 0),IR(18605, 15)/* DepthUnchanged */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {17,IR(22, 3),IR(18620, 10)/* LocalSize */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {18,IR(22, 3),IR(18630, 14)/* LocalSizeHint */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {19,IR(0, 0),IR(18644, 12)/* InputPoints */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {20,IR(0, 0),IR(18656, 11)/* InputLines */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {21,IR(0, 0),IR(18667, 20)/* InputLinesAdjacency */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {22,IR(0, 0),IR(18687, 10)/* Triangles */,IR(0, 0),IR(12, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {23,IR(0, 0),IR(18697, 24)/* InputTrianglesAdjacency */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {24,IR(0, 0),IR(18721, 6)/* Quads */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {25,IR(0, 0),IR(18727, 9)/* Isolines */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {26,IR(0, 1),IR(18736, 15)/* OutputVertices */,IR(0, 0),IR(145, 4),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {27,IR(0, 0),IR(18751, 13)/* OutputPoints */,IR(0, 0),IR(149, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {28,IR(0, 0),IR(18764, 16)/* OutputLineStrip */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {29,IR(0, 0),IR(18780, 20)/* OutputTriangleStrip */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {30,IR(0, 1),IR(18800, 12)/* VecTypeHint */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {31,IR(0, 0),IR(18812, 15)/* ContractionOff */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {33,IR(0, 0),IR(18827, 12)/* Initializer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {34,IR(0, 0),IR(18839, 10)/* Finalizer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {35,IR(0, 1),IR(5343, 13)/* SubgroupSize */,IR(0, 0),IR(152, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {36,IR(0, 1),IR(18849, 22)/* SubgroupsPerWorkgroup */,IR(0, 0),IR(152, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {37,IR(10, 1),IR(18871, 24)/* SubgroupsPerWorkgroupId */,IR(0, 0),IR(152, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {38,IR(33, 3),IR(18895, 12)/* LocalSizeId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {39,IR(33, 3),IR(18907, 16)/* LocalSizeHintId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4169,IR(0, 0),IR(18923, 34)/* NonCoherentColorAttachmentReadEXT */,IR(0, 0),IR(144, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4170,IR(0, 0),IR(18957, 34)/* NonCoherentDepthAttachmentReadEXT */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4171,IR(0, 0),IR(18991, 36)/* NonCoherentStencilAttachmentReadEXT */,IR(0, 0),IR(154, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4421,IR(0, 0),IR(19027, 30)/* SubgroupUniformControlFlowKHR */,IR(0, 0),IR(3, 1),IR(158, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4446,IR(0, 0),IR(19057, 18)/* PostDepthCoverage */,IR(0, 0),IR(155, 1),IR(45, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4459,IR(0, 1),IR(9542, 15)/* DenormPreserve */,IR(0, 0),IR(156, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4460,IR(0, 1),IR(9557, 18)/* DenormFlushToZero */,IR(0, 0),IR(157, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4461,IR(0, 1),IR(9575, 25)/* SignedZeroInfNanPreserve */,IR(0, 0),IR(158, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4462,IR(0, 1),IR(9600, 16)/* RoundingModeRTE */,IR(0, 0),IR(159, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4463,IR(0, 1),IR(9616, 16)/* RoundingModeRTZ */,IR(0, 0),IR(160, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4489,IR(0, 0),IR(19075, 34)/* NonCoherentTileAttachmentReadQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4490,IR(22, 3),IR(19109, 20)/* TileShadingRateQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5017,IR(0, 0),IR(19129, 29)/* EarlyAndLateFragmentTestsAMD */,IR(0, 0),IR(3, 1),IR(159, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5027,IR(0, 0),IR(19158, 23)/* StencilRefReplacingEXT */,IR(0, 0),IR(42, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5069,IR(0, 0),IR(19181, 15)/* CoalescingAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5070,IR(10, 1),IR(19196, 15)/* IsApiEntryAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5071,IR(10, 1),IR(19211, 21)/* MaxNodeRecursionAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5072,IR(33, 3),IR(19232, 24)/* StaticNumWorkgroupsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5073,IR(10, 1),IR(6236, 16)/* ShaderIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5077,IR(33, 3),IR(19256, 21)/* MaxNumWorkgroupsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5079,IR(0, 0),IR(19277, 28)/* StencilRefUnchangedFrontAMD */,IR(0, 0),IR(42, 1),IR(160, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5080,IR(0, 0),IR(19305, 26)/* StencilRefGreaterFrontAMD */,IR(0, 0),IR(42, 1),IR(160, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5081,IR(0, 0),IR(19331, 23)/* StencilRefLessFrontAMD */,IR(0, 0),IR(42, 1),IR(160, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5082,IR(0, 0),IR(19354, 27)/* StencilRefUnchangedBackAMD */,IR(0, 0),IR(42, 1),IR(160, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5083,IR(0, 0),IR(19381, 25)/* StencilRefGreaterBackAMD */,IR(0, 0),IR(42, 1),IR(160, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5084,IR(0, 0),IR(19406, 22)/* StencilRefLessBackAMD */,IR(0, 0),IR(42, 1),IR(160, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5088,IR(0, 0),IR(19428, 19)/* QuadDerivativesKHR */,IR(0, 0),IR(161, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5089,IR(0, 0),IR(19447, 20)/* RequireFullQuadsKHR */,IR(0, 0),IR(161, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5102,IR(36, 2),IR(19467, 20)/* SharesInputWithAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5269,IR(0, 0),IR(19487, 15)/* OutputLinesEXT */,IR(58, 1),IR(121, 2),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5270,IR(0, 1),IR(19516, 20)/* OutputPrimitivesEXT */,IR(59, 1),IR(121, 2),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5289,IR(0, 0),IR(19555, 24)/* DerivativeGroupQuadsKHR */,IR(60, 1),IR(162, 2),IR(72, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5290,IR(0, 0),IR(19602, 25)/* DerivativeGroupLinearKHR */,IR(61, 1),IR(164, 2),IR(72, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5298,IR(0, 0),IR(19651, 19)/* OutputTrianglesEXT */,IR(62, 1),IR(121, 2),IR(154, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5366,IR(0, 0),IR(19688, 25)/* PixelInterlockOrderedEXT */,IR(0, 0),IR(166, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5367,IR(0, 0),IR(19713, 27)/* PixelInterlockUnorderedEXT */,IR(0, 0),IR(166, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5368,IR(0, 0),IR(19740, 26)/* SampleInterlockOrderedEXT */,IR(0, 0),IR(167, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5369,IR(0, 0),IR(19766, 28)/* SampleInterlockUnorderedEXT */,IR(0, 0),IR(167, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5370,IR(0, 0),IR(19794, 31)/* ShadingRateInterlockOrderedEXT */,IR(0, 0),IR(168, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5371,IR(0, 0),IR(19825, 33)/* ShadingRateInterlockUnorderedEXT */,IR(0, 0),IR(168, 1),IR(79, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5618,IR(0, 1),IR(19858, 27)/* SharedLocalMemorySizeINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5620,IR(0, 1),IR(19885, 21)/* RoundingModeRTPINTEL */,IR(0, 0),IR(169, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5621,IR(0, 1),IR(19906, 21)/* RoundingModeRTNINTEL */,IR(0, 0),IR(169, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5622,IR(0, 1),IR(19927, 26)/* FloatingPointModeALTINTEL */,IR(0, 0),IR(169, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5623,IR(0, 1),IR(19953, 27)/* FloatingPointModeIEEEINTEL */,IR(0, 0),IR(169, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5893,IR(22, 3),IR(19980, 22)/* MaxWorkgroupSizeINTEL */,IR(0, 0),IR(170, 1),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5894,IR(0, 1),IR(20002, 16)/* MaxWorkDimINTEL */,IR(0, 0),IR(170, 1),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5895,IR(0, 0),IR(20018, 20)/* NoGlobalOffsetINTEL */,IR(0, 0),IR(170, 1),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5896,IR(0, 1),IR(20038, 22)/* NumSIMDWorkitemsINTEL */,IR(0, 0),IR(106, 1),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5903,IR(0, 1),IR(20060, 28)/* SchedulerTargetFmaxMhzINTEL */,IR(0, 0),IR(106, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6023,IR(0, 0),IR(20088, 24)/* MaximallyReconvergesKHR */,IR(0, 0),IR(3, 1),IR(162, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6028,IR(36, 2),IR(20112, 18)/* FPFastMathDefault */,IR(0, 0),IR(171, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6154,IR(0, 1),IR(20130, 24)/* StreamingInterfaceINTEL */,IR(0, 0),IR(106, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6160,IR(0, 1),IR(20154, 26)/* RegisterMapInterfaceINTEL */,IR(0, 0),IR(172, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6417,IR(0, 1),IR(20180, 23)/* NamedBarrierCountINTEL */,IR(0, 0),IR(125, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6461,IR(0, 1),IR(20203, 22)/* MaximumRegistersINTEL */,IR(0, 0),IR(173, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6462,IR(10, 1),IR(20225, 24)/* MaximumRegistersIdINTEL */,IR(0, 0),IR(173, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6463,IR(38, 1),IR(20300, 27)/* NamedMaximumRegistersINTEL */,IR(0, 0),IR(173, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {0,IR(0, 0),IR(20327, 7)/* Vertex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {1,IR(0, 0),IR(20334, 20)/* TessellationControl */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {2,IR(0, 0),IR(20354, 23)/* TessellationEvaluation */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {3,IR(0, 0),IR(4824, 9)/* Geometry */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {4,IR(0, 0),IR(14505, 9)/* Fragment */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5,IR(0, 0),IR(20377, 10)/* GLCompute */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {6,IR(0, 0),IR(4591, 7)/* Kernel */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5267,IR(0, 0),IR(20387, 7)/* TaskNV */,IR(0, 0),IR(50, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5268,IR(0, 0),IR(20394, 7)/* MeshNV */,IR(0, 0),IR(50, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5313,IR(0, 0),IR(20401, 17)/* RayGenerationKHR */,IR(63, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5314,IR(0, 0),IR(20434, 16)/* IntersectionKHR */,IR(64, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5315,IR(0, 0),IR(20465, 10)/* AnyHitKHR */,IR(65, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5316,IR(0, 0),IR(20484, 14)/* ClosestHitKHR */,IR(66, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5317,IR(0, 0),IR(20511, 8)/* MissKHR */,IR(67, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5318,IR(0, 0),IR(20526, 12)/* CallableKHR */,IR(68, 1),IR(54, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5364,IR(0, 0),IR(20549, 8)/* TaskEXT */,IR(0, 0),IR(53, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5365,IR(0, 0),IR(20557, 8)/* MeshEXT */,IR(0, 0),IR(53, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {0,IR(0, 0),IR(20565, 9)/* Preserve */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPDENORM_MODE
  {1,IR(0, 0),IR(20574, 12)/* FlushToZero */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPDENORM_MODE
  {0,IR(0, 0),IR(20586, 12)/* BFloat16KHR */,IR(0, 0),IR(88, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPENCODING
  {4214,IR(0, 0),IR(20598, 14)/* Float8E4M3EXT */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPENCODING
  {4215,IR(0, 0),IR(20612, 14)/* Float8E5M2EXT */,IR(0, 0),IR(118, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPENCODING
  {0,IR(0, 0),IR(20626, 5)/* IEEE */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPOPERATION_MODE
  {1,IR(0, 0),IR(20631, 4)/* ALT */,IR(0, 0),IR(128, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPOPERATION_MODE
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {1,IR(0, 0),IR(20635, 7)/* NotNaN */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {2,IR(0, 0),IR(20642, 7)/* NotInf */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {4,IR(0, 0),IR(20649, 4)/* NSZ */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {8,IR(0, 0),IR(20653, 11)/* AllowRecip */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {16,IR(0, 0),IR(20664, 5)/* Fast */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {65536,IR(0, 0),IR(20669, 14)/* AllowContract */,IR(69, 1),IR(174, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {131072,IR(0, 0),IR(20706, 13)/* AllowReassoc */,IR(70, 1),IR(174, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {262144,IR(0, 0),IR(20737, 15)/* AllowTransform */,IR(0, 0),IR(171, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {0,IR(0, 0),IR(20752, 4)/* RTE */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {1,IR(0, 0),IR(20756, 4)/* RTZ */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {2,IR(0, 0),IR(20760, 4)/* RTP */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {3,IR(0, 0),IR(20764, 4)/* RTN */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {1,IR(0, 0),IR(20768, 16)/* Vertical2Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {2,IR(0, 0),IR(20784, 16)/* Vertical4Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {4,IR(0, 0),IR(20800, 18)/* Horizontal2Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {8,IR(0, 0),IR(20818, 18)/* Horizontal4Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {1,IR(0, 0),IR(20836, 7)/* Inline */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {2,IR(0, 0),IR(20843, 11)/* DontInline */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {4,IR(0, 0),IR(20854, 5)/* Pure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {8,IR(0, 0),IR(20859, 6)/* Const */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {65536,IR(0, 0),IR(13279, 11)/* OptNoneEXT */,IR(50, 1),IR(176, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {0,IR(0, 0),IR(20865, 5)/* Zext */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {1,IR(0, 0),IR(20870, 5)/* Sext */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {2,IR(0, 0),IR(20875, 6)/* ByVal */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {3,IR(0, 0),IR(20881, 5)/* Sret */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {4,IR(0, 0),IR(20886, 8)/* NoAlias */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {5,IR(0, 0),IR(20894, 10)/* NoCapture */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {6,IR(0, 0),IR(20904, 8)/* NoWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {7,IR(0, 0),IR(20912, 12)/* NoReadWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {5940,IR(0, 0),IR(20924, 20)/* RuntimeAlignedINTEL */,IR(0, 0),IR(177, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {0,IR(0, 0),IR(20944, 7)/* Reduce */,IR(0, 0),IR(178, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {1,IR(0, 0),IR(20951, 14)/* InclusiveScan */,IR(0, 0),IR(178, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {2,IR(0, 0),IR(20965, 14)/* ExclusiveScan */,IR(0, 0),IR(178, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {3,IR(0, 0),IR(20979, 16)/* ClusteredReduce */,IR(0, 0),IR(181, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {6,IR(0, 0),IR(20995, 20)/* PartitionedReduceNV */,IR(0, 0),IR(182, 1),IR(74, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {7,IR(0, 0),IR(21015, 27)/* PartitionedInclusiveScanNV */,IR(0, 0),IR(182, 1),IR(74, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {8,IR(0, 0),IR(21042, 27)/* PartitionedExclusiveScanNV */,IR(0, 0),IR(182, 1),IR(74, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {0,IR(0, 0),IR(21069, 10)/* NoneINTEL */,IR(0, 0),IR(141, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {1,IR(0, 0),IR(21079, 10)/* ReadINTEL */,IR(0, 0),IR(141, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {2,IR(0, 0),IR(21089, 11)/* WriteINTEL */,IR(0, 0),IR(141, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {3,IR(0, 0),IR(21100, 15)/* ReadWriteINTEL */,IR(0, 0),IR(141, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {1,IR(10, 1),IR(21115, 5)/* Bias */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {2,IR(10, 1),IR(21120, 4)/* Lod */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {4,IR(36, 2),IR(21124, 5)/* Grad */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {8,IR(10, 1),IR(21129, 12)/* ConstOffset */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {16,IR(10, 1),IR(15508, 7)/* Offset */,IR(0, 0),IR(183, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {32,IR(10, 1),IR(21141, 13)/* ConstOffsets */,IR(0, 0),IR(183, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {64,IR(10, 1),IR(15305, 7)/* Sample */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {128,IR(10, 1),IR(8375, 7)/* MinLod */,IR(0, 0),IR(184, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {256,IR(4, 1),IR(21154, 19)/* MakeTexelAvailable */,IR(71, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {512,IR(4, 1),IR(21195, 17)/* MakeTexelVisible */,IR(72, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {1024,IR(0, 0),IR(21232, 16)/* NonPrivateTexel */,IR(73, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {2048,IR(0, 0),IR(21267, 14)/* VolatileTexel */,IR(74, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {4096,IR(0, 0),IR(21298, 11)/* SignExtend */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {8192,IR(0, 0),IR(21309, 11)/* ZeroExtend */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {16384,IR(0, 0),IR(21320, 12)/* Nontemporal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {65536,IR(10, 1),IR(21332, 8)/* Offsets */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {0,IR(0, 0),IR(21340, 10)/* SnormInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {1,IR(0, 0),IR(21350, 11)/* SnormInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {2,IR(0, 0),IR(21361, 10)/* UnormInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {3,IR(0, 0),IR(21371, 11)/* UnormInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {4,IR(0, 0),IR(21382, 14)/* UnormShort565 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {5,IR(0, 0),IR(21396, 14)/* UnormShort555 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {6,IR(0, 0),IR(21410, 15)/* UnormInt101010 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {7,IR(0, 0),IR(21425, 11)/* SignedInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {8,IR(0, 0),IR(21436, 12)/* SignedInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {9,IR(0, 0),IR(21448, 12)/* SignedInt32 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {10,IR(0, 0),IR(21460, 13)/* UnsignedInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {11,IR(0, 0),IR(21473, 14)/* UnsignedInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {12,IR(0, 0),IR(21487, 14)/* UnsignedInt32 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {13,IR(0, 0),IR(21501, 10)/* HalfFloat */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {14,IR(0, 0),IR(13998, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {15,IR(0, 0),IR(21511, 11)/* UnormInt24 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {16,IR(0, 0),IR(21522, 17)/* UnormInt101010_2 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {17,IR(0, 0),IR(21539, 16)/* UnormInt10X6EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {19,IR(0, 0),IR(21555, 20)/* UnsignedIntRaw10EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {20,IR(0, 0),IR(21575, 20)/* UnsignedIntRaw12EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {21,IR(0, 0),IR(21595, 20)/* UnormInt2_101010EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {22,IR(0, 0),IR(21615, 19)/* UnsignedInt10X6EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {23,IR(0, 0),IR(21634, 19)/* UnsignedInt12X4EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {24,IR(0, 0),IR(21653, 19)/* UnsignedInt14X2EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {25,IR(0, 0),IR(21672, 16)/* UnormInt12X4EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {26,IR(0, 0),IR(21688, 16)/* UnormInt14X2EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {0,IR(0, 0),IR(21704, 2)/* R */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {1,IR(0, 0),IR(21706, 2)/* A */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {2,IR(0, 0),IR(21708, 3)/* RG */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {3,IR(0, 0),IR(21711, 3)/* RA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {4,IR(0, 0),IR(21714, 4)/* RGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {5,IR(0, 0),IR(21718, 5)/* RGBA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {6,IR(0, 0),IR(21723, 5)/* BGRA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {7,IR(0, 0),IR(21728, 5)/* ARGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {8,IR(0, 0),IR(21733, 10)/* Intensity */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {9,IR(0, 0),IR(21743, 10)/* Luminance */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {10,IR(0, 0),IR(21753, 3)/* Rx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {11,IR(0, 0),IR(21756, 4)/* RGx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {12,IR(0, 0),IR(21760, 5)/* RGBx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {13,IR(0, 0),IR(21765, 6)/* Depth */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {14,IR(0, 0),IR(21771, 13)/* DepthStencil */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {15,IR(0, 0),IR(21784, 5)/* sRGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {16,IR(0, 0),IR(21789, 6)/* sRGBx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {17,IR(0, 0),IR(21795, 6)/* sRGBA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {18,IR(0, 0),IR(21801, 6)/* sBGRA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {19,IR(0, 0),IR(21807, 5)/* ABGR */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {0,IR(0, 0),IR(21812, 27)/* InitOnDeviceReprogramINTEL */,IR(0, 0),IR(142, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {1,IR(0, 0),IR(21839, 23)/* InitOnDeviceResetINTEL */,IR(0, 0),IR(142, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {0,IR(0, 0),IR(21862, 7)/* NoWait */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {1,IR(0, 0),IR(21869, 11)/* WaitKernel */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {2,IR(0, 0),IR(21880, 14)/* WaitWorkGroup */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {1,IR(0, 0),IR(21894, 12)/* CmdExecTime */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {1,IR(0, 0),IR(21906, 13)/* MayUsePrintf */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {0,IR(0, 0),IR(21919, 7)/* Export */,IR(0, 0),IR(117, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {1,IR(0, 0),IR(21926, 7)/* Import */,IR(0, 0),IR(117, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {2,IR(0, 0),IR(21933, 12)/* LinkOnceODR */,IR(0, 0),IR(117, 1),IR(163, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {0,IR(0, 0),IR(21945, 14)/* UncachedINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {1,IR(0, 0),IR(21959, 12)/* CachedINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {2,IR(0, 0),IR(21971, 15)/* StreamingINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {3,IR(0, 0),IR(21986, 25)/* InvalidateAfterReadINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {4,IR(0, 0),IR(22011, 17)/* ConstCachedINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {1,IR(0, 0),IR(22028, 7)/* Unroll */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {2,IR(0, 0),IR(22035, 11)/* DontUnroll */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {4,IR(0, 0),IR(22046, 19)/* DependencyInfinite */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {8,IR(0, 1),IR(22065, 17)/* DependencyLength */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {16,IR(0, 1),IR(22082, 14)/* MinIterations */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {32,IR(0, 1),IR(22096, 14)/* MaxIterations */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {64,IR(0, 1),IR(22110, 18)/* IterationMultiple */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {128,IR(0, 1),IR(22128, 10)/* PeelCount */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {256,IR(0, 1),IR(22138, 13)/* PartialCount */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {65536,IR(0, 1),IR(17375, 24)/* InitiationIntervalINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {131072,IR(0, 1),IR(17399, 20)/* MaxConcurrencyINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {262144,IR(0, 1),IR(22151, 21)/* DependencyArrayINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {524288,IR(0, 1),IR(17419, 20)/* PipelineEnableINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {1048576,IR(0, 1),IR(22172, 18)/* LoopCoalesceINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {2097152,IR(0, 1),IR(22190, 21)/* MaxInterleavingINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {4194304,IR(0, 1),IR(22211, 26)/* SpeculatedIterationsINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {8388608,IR(0, 0),IR(22237, 14)/* NoFusionINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {16777216,IR(0, 1),IR(22251, 15)/* LoopCountINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {33554432,IR(0, 1),IR(22266, 26)/* MaxReinvocationDelayINTEL */,IR(0, 0),IR(186, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {1,IR(0, 0),IR(22292, 29)/* MatrixASignedComponentsINTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {2,IR(0, 0),IR(22321, 29)/* MatrixBSignedComponentsINTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {4,IR(0, 0),IR(22350, 21)/* MatrixCBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {8,IR(0, 0),IR(22371, 26)/* MatrixResultBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {16,IR(0, 0),IR(22397, 23)/* MatrixAPackedInt8INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {32,IR(0, 0),IR(22420, 23)/* MatrixBPackedInt8INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {64,IR(0, 0),IR(22443, 23)/* MatrixAPackedInt4INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {128,IR(0, 0),IR(22466, 23)/* MatrixBPackedInt4INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {256,IR(0, 0),IR(22489, 17)/* MatrixATF32INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {512,IR(0, 0),IR(22506, 17)/* MatrixBTF32INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {1024,IR(0, 0),IR(22523, 26)/* MatrixAPackedFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {2048,IR(0, 0),IR(22549, 26)/* MatrixBPackedFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {4096,IR(0, 0),IR(22575, 27)/* MatrixAPackedBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {8192,IR(0, 0),IR(22602, 27)/* MatrixBPackedBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {1,IR(0, 0),IR(15339, 9)/* Volatile */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {2,IR(0, 1),IR(22629, 8)/* Aligned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {4,IR(0, 0),IR(21320, 12)/* Nontemporal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {8,IR(4, 1),IR(22637, 21)/* MakePointerAvailable */,IR(75, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {16,IR(4, 1),IR(22682, 19)/* MakePointerVisible */,IR(76, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {32,IR(0, 0),IR(22723, 18)/* NonPrivatePointer */,IR(77, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {65536,IR(10, 1),IR(22762, 20)/* AliasScopeINTELMask */,IR(0, 0),IR(133, 1),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {131072,IR(10, 1),IR(22782, 17)/* NoAliasINTELMask */,IR(0, 0),IR(133, 1),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {0,IR(0, 0),IR(22799, 7)/* Simple */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {1,IR(0, 0),IR(22806, 8)/* GLSL450 */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {2,IR(0, 0),IR(22814, 7)/* OpenCL */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {3,IR(0, 0),IR(22821, 7)/* Vulkan */,IR(78, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {0,IR(0, 0),IR(22838, 8)/* Relaxed */,IR(79, 1),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {2,IR(0, 0),IR(22846, 8)/* Acquire */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {4,IR(0, 0),IR(22854, 8)/* Release */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {8,IR(0, 0),IR(22862, 15)/* AcquireRelease */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {16,IR(0, 0),IR(22877, 23)/* SequentiallyConsistent */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {64,IR(0, 0),IR(22900, 14)/* UniformMemory */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {128,IR(0, 0),IR(22914, 15)/* SubgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {256,IR(0, 0),IR(22929, 16)/* WorkgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {512,IR(0, 0),IR(22945, 21)/* CrossWorkgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {1024,IR(0, 0),IR(22966, 20)/* AtomicCounterMemory */,IR(0, 0),IR(82, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {2048,IR(0, 0),IR(22986, 12)/* ImageMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {4096,IR(0, 0),IR(22998, 13)/* OutputMemory */,IR(80, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {8192,IR(0, 0),IR(23027, 14)/* MakeAvailable */,IR(81, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {16384,IR(0, 0),IR(23058, 12)/* MakeVisible */,IR(82, 1),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {32768,IR(0, 0),IR(15339, 9)/* Volatile */,IR(0, 0),IR(185, 1),IR(77, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {0,IR(0, 0),IR(23085, 10)/* AutoINTEL */,IR(0, 0),IR(173, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS
  {0,IR(0, 0),IR(23095, 5)/* WRAP */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {1,IR(0, 0),IR(23100, 4)/* SAT */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {2,IR(0, 0),IR(23104, 9)/* SAT_ZERO */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {3,IR(0, 0),IR(23113, 8)/* SAT_SYM */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {0,IR(0, 0),IR(23121, 25)/* PackedVectorFormat4x8Bit */,IR(83, 1),IR(1, 0),IR(121, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {0,IR(0, 0),IR(23174, 4)/* TRN */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {1,IR(0, 0),IR(23178, 9)/* TRN_ZERO */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {2,IR(0, 0),IR(23187, 4)/* RND */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {3,IR(0, 0),IR(23191, 9)/* RND_ZERO */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {4,IR(0, 0),IR(23200, 8)/* RND_INF */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {5,IR(0, 0),IR(23208, 12)/* RND_MIN_INF */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {6,IR(0, 0),IR(23220, 9)/* RND_CONV */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {7,IR(0, 0),IR(23229, 13)/* RND_CONV_ODD */,IR(0, 0),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {1,IR(0, 0),IR(23242, 25)/* RobustnessPerComponentNV */,IR(0, 0),IR(188, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {2,IR(0, 0),IR(23267, 23)/* RobustnessPerElementNV */,IR(0, 0),IR(188, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {0,IR(0, 0),IR(14853, 8)/* NoneKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {1,IR(0, 0),IR(23290, 10)/* OpaqueKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {2,IR(0, 0),IR(23300, 12)/* NoOpaqueKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {4,IR(0, 0),IR(23312, 23)/* TerminateOnFirstHitKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {8,IR(0, 0),IR(23335, 24)/* SkipClosestHitShaderKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {16,IR(0, 0),IR(23359, 27)/* CullBackFacingTrianglesKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {32,IR(0, 0),IR(23386, 28)/* CullFrontFacingTrianglesKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {64,IR(0, 0),IR(23414, 14)/* CullOpaqueKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {128,IR(0, 0),IR(23428, 16)/* CullNoOpaqueKHR */,IR(0, 0),IR(84, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {256,IR(0, 0),IR(23444, 17)/* SkipTrianglesKHR */,IR(84, 1),IR(189, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {512,IR(0, 0),IR(23485, 13)/* SkipAABBsKHR */,IR(0, 0),IR(189, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {1024,IR(0, 0),IR(23498, 30)/* ForceOpacityMicromap2StateEXT */,IR(0, 0),IR(190, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {0,IR(0, 0),IR(23528, 41)/* RayQueryCandidateIntersectionTriangleKHR */,IR(0, 0),IR(191, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {1,IR(0, 0),IR(23569, 37)/* RayQueryCandidateIntersectionAABBKHR */,IR(0, 0),IR(191, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {0,IR(0, 0),IR(23606, 37)/* RayQueryCommittedIntersectionNoneKHR */,IR(0, 0),IR(191, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {1,IR(0, 0),IR(23643, 41)/* RayQueryCommittedIntersectionTriangleKHR */,IR(0, 0),IR(191, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {2,IR(0, 0),IR(23684, 42)/* RayQueryCommittedIntersectionGeneratedKHR */,IR(0, 0),IR(191, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {0,IR(0, 0),IR(23726, 33)/* RayQueryCandidateIntersectionKHR */,IR(0, 0),IR(191, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {1,IR(0, 0),IR(23759, 33)/* RayQueryCommittedIntersectionKHR */,IR(0, 0),IR(191, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {1,IR(0, 0),IR(23792, 12)/* ClampToEdge */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {2,IR(0, 0),IR(23804, 6)/* Clamp */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {3,IR(0, 0),IR(23810, 7)/* Repeat */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {4,IR(0, 0),IR(23817, 15)/* RepeatMirrored */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {0,IR(0, 0),IR(23832, 8)/* Nearest */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {1,IR(0, 0),IR(23840, 7)/* Linear */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {0,IR(0, 0),IR(23847, 8)/* Unknown */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {1,IR(0, 0),IR(23855, 8)/* Rgba32f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {2,IR(0, 0),IR(23863, 8)/* Rgba16f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {3,IR(0, 0),IR(23871, 5)/* R32f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {4,IR(0, 0),IR(23876, 6)/* Rgba8 */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {5,IR(0, 0),IR(23882, 11)/* Rgba8Snorm */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {6,IR(0, 0),IR(23893, 6)/* Rg32f */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {7,IR(0, 0),IR(23899, 6)/* Rg16f */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {8,IR(0, 0),IR(23905, 13)/* R11fG11fB10f */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {9,IR(0, 0),IR(23918, 5)/* R16f */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {10,IR(0, 0),IR(23923, 7)/* Rgba16 */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {11,IR(0, 0),IR(23930, 8)/* Rgb10A2 */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {12,IR(0, 0),IR(23938, 5)/* Rg16 */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {13,IR(0, 0),IR(23943, 4)/* Rg8 */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {14,IR(0, 0),IR(23947, 4)/* R16 */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {15,IR(0, 0),IR(23951, 3)/* R8 */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {16,IR(0, 0),IR(23954, 12)/* Rgba16Snorm */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {17,IR(0, 0),IR(23966, 10)/* Rg16Snorm */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {18,IR(0, 0),IR(23976, 9)/* Rg8Snorm */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {19,IR(0, 0),IR(23985, 9)/* R16Snorm */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {20,IR(0, 0),IR(23994, 8)/* R8Snorm */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {21,IR(0, 0),IR(24002, 8)/* Rgba32i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {22,IR(0, 0),IR(24010, 8)/* Rgba16i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {23,IR(0, 0),IR(24018, 7)/* Rgba8i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {24,IR(0, 0),IR(24025, 5)/* R32i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {25,IR(0, 0),IR(24030, 6)/* Rg32i */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {26,IR(0, 0),IR(24036, 6)/* Rg16i */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {27,IR(0, 0),IR(24042, 5)/* Rg8i */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {28,IR(0, 0),IR(24047, 5)/* R16i */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {29,IR(0, 0),IR(24052, 4)/* R8i */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {30,IR(0, 0),IR(24056, 9)/* Rgba32ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {31,IR(0, 0),IR(24065, 9)/* Rgba16ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {32,IR(0, 0),IR(24074, 8)/* Rgba8ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {33,IR(0, 0),IR(24082, 6)/* R32ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {34,IR(0, 0),IR(24088, 10)/* Rgb10a2ui */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {35,IR(0, 0),IR(24098, 7)/* Rg32ui */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {36,IR(0, 0),IR(24105, 7)/* Rg16ui */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {37,IR(0, 0),IR(24112, 6)/* Rg8ui */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {38,IR(0, 0),IR(24118, 6)/* R16ui */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {39,IR(0, 0),IR(24124, 5)/* R8ui */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {40,IR(0, 0),IR(24129, 6)/* R64ui */,IR(0, 0),IR(193, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {41,IR(0, 0),IR(24135, 5)/* R64i */,IR(0, 0),IR(193, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {0,IR(0, 0),IR(24140, 12)/* CrossDevice */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {1,IR(0, 0),IR(24152, 7)/* Device */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {2,IR(0, 0),IR(24159, 10)/* Workgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {3,IR(0, 0),IR(24169, 9)/* Subgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {4,IR(0, 0),IR(24178, 11)/* Invocation */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {5,IR(0, 0),IR(24189, 12)/* QueueFamily */,IR(85, 1),IR(185, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {6,IR(0, 0),IR(24216, 14)/* ShaderCallKHR */,IR(0, 0),IR(60, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {1,IR(0, 0),IR(24230, 8)/* Flatten */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {2,IR(0, 0),IR(24238, 12)/* DontFlatten */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {1,IR(0, 0),IR(24250, 29)/* IdentifierPossibleDuplicates */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS
  {0,IR(0, 0),IR(13970, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(13982, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(13990, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {3,IR(0, 0),IR(13998, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(14004, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(14011, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(14022, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(14031, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(14044, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(14050, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(14060, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(14066, 15)/* ImportedModule */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {1,IR(0, 0),IR(14081, 20)/* ImportedDeclaration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(14106, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(14122, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(14136, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(14149, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(14161, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(14178, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(14190, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(14205, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(14218, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(14233, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(14251, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(14268, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(14289, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(14309, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(14329, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {16384,IR(0, 0),IR(14345, 16)/* FlagIsEnumClass */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {32768,IR(0, 0),IR(14361, 20)/* FlagTypePassByValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {65536,IR(0, 0),IR(14381, 24)/* FlagTypePassByReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {131072,IR(0, 0),IR(24279, 26)/* FlagUnknownPhysicalLayout */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(14405, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {1,IR(0, 0),IR(14411, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {2,IR(0, 0),IR(14416, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {3,IR(10, 1),IR(14455, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {4,IR(36, 2),IR(14466, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {5,IR(0, 0),IR(14475, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {6,IR(0, 0),IR(14480, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {7,IR(0, 0),IR(14487, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {8,IR(10, 1),IR(14498, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {9,IR(36, 2),IR(14505, 9)/* Fragment */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {0,IR(0, 0),IR(14514, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(14524, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(14537, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {3,IR(0, 0),IR(14550, 11)/* AtomicType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(23847, 8)/* Unknown */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {1,IR(0, 0),IR(24305, 5)/* ESSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {2,IR(0, 0),IR(24310, 5)/* GLSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {3,IR(0, 0),IR(24315, 9)/* OpenCL_C */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {4,IR(0, 0),IR(24324, 11)/* OpenCL_CPP */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {5,IR(0, 0),IR(24335, 5)/* HLSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {6,IR(0, 0),IR(24340, 15)/* CPP_for_OpenCL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {7,IR(0, 0),IR(24355, 5)/* SYCL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {8,IR(0, 0),IR(24360, 7)/* HERO_C */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {9,IR(0, 0),IR(24367, 5)/* NZSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {10,IR(0, 0),IR(24372, 5)/* WGSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {11,IR(0, 0),IR(24377, 6)/* Slang */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {12,IR(0, 0),IR(24383, 4)/* Zig */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {13,IR(0, 0),IR(24387, 5)/* Rust */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {0,IR(0, 0),IR(24392, 16)/* UniformConstant */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {1,IR(0, 0),IR(24408, 6)/* Input */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {2,IR(0, 0),IR(15390, 8)/* Uniform */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {3,IR(0, 0),IR(24414, 7)/* Output */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4,IR(0, 0),IR(24159, 10)/* Workgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5,IR(0, 0),IR(24421, 15)/* CrossWorkgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {6,IR(0, 0),IR(24436, 8)/* Private */,IR(0, 0),IR(194, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {7,IR(0, 0),IR(24444, 9)/* Function */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {8,IR(0, 0),IR(24453, 8)/* Generic */,IR(0, 0),IR(196, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {9,IR(0, 0),IR(24461, 13)/* PushConstant */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {10,IR(0, 0),IR(24474, 14)/* AtomicCounter */,IR(0, 0),IR(82, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {11,IR(0, 0),IR(24488, 6)/* Image */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {12,IR(0, 0),IR(24494, 14)/* StorageBuffer */,IR(0, 0),IR(3, 1),IR(164, 2),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4172,IR(0, 0),IR(24508, 13)/* TileImageEXT */,IR(0, 0),IR(144, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4491,IR(0, 0),IR(24521, 19)/* TileAttachmentQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5068,IR(0, 0),IR(24540, 16)/* NodePayloadAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5328,IR(0, 0),IR(24556, 16)/* CallableDataKHR */,IR(86, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5329,IR(0, 0),IR(24587, 24)/* IncomingCallableDataKHR */,IR(87, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5338,IR(0, 0),IR(24634, 14)/* RayPayloadKHR */,IR(88, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5339,IR(0, 0),IR(24661, 16)/* HitAttributeKHR */,IR(89, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5342,IR(0, 0),IR(24692, 22)/* IncomingRayPayloadKHR */,IR(90, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5343,IR(0, 0),IR(24735, 22)/* ShaderRecordBufferKHR */,IR(91, 1),IR(54, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5349,IR(0, 0),IR(24778, 22)/* PhysicalStorageBuffer */,IR(92, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5385,IR(0, 0),IR(24825, 21)/* HitObjectAttributeNV */,IR(0, 0),IR(123, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5402,IR(0, 0),IR(24846, 24)/* TaskPayloadWorkgroupEXT */,IR(0, 0),IR(53, 1),IR(23, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5605,IR(0, 0),IR(24870, 17)/* CodeSectionINTEL */,IR(0, 0),IR(197, 1),IR(94, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5936,IR(0, 0),IR(24887, 16)/* DeviceOnlyINTEL */,IR(0, 0),IR(198, 1),IR(116, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5937,IR(0, 0),IR(24903, 14)/* HostOnlyINTEL */,IR(0, 0),IR(198, 1),IR(116, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {0,IR(0, 0),IR(21945, 14)/* UncachedINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {1,IR(0, 0),IR(24917, 18)/* WriteThroughINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {2,IR(0, 0),IR(24935, 15)/* WriteBackINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {3,IR(0, 0),IR(21971, 15)/* StreamingINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {0,IR(0, 0),IR(14101, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {1,IR(10, 1),IR(24950, 11)/* TensorView */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {2,IR(10, 1),IR(24961, 11)/* DecodeFunc */,IR(0, 0),IR(200, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {0,IR(0, 0),IR(24972, 10)/* Undefined */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {1,IR(0, 0),IR(15348, 9)/* Constant */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {2,IR(0, 0),IR(23792, 12)/* ClampToEdge */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {3,IR(0, 0),IR(23810, 7)/* Repeat */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {4,IR(0, 0),IR(23817, 15)/* RepeatMirrored */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {0,IR(0, 0),IR(24982, 8)/* NoneARM */,IR(0, 0),IR(201, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {1,IR(0, 0),IR(24990, 15)/* NontemporalARM */,IR(0, 0),IR(201, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {2,IR(10, 1),IR(25005, 20)/* OutOfBoundsValueARM */,IR(0, 0),IR(201, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {4,IR(10, 1),IR(25025, 24)/* MakeElementAvailableARM */,IR(0, 0),IR(201, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {8,IR(10, 1),IR(25049, 22)/* MakeElementVisibleARM */,IR(0, 0),IR(201, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {16,IR(0, 0),IR(25071, 21)/* NonPrivateElementARM */,IR(0, 0),IR(201, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
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
    case SPV_OPERAND_TYPE_CAPABILITY: return IR(133, 272);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(405, 8);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(413, 3);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(416, 2);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS: return IR(418, 19);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION: return IR(437, 10);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(447, 4);
    case SPV_OPERAND_TYPE_COMPONENT_TYPE: return IR(451, 15);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT: return IR(466, 4);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS: return IR(470, 6);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE: return IR(476, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE: return IR(479, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT: return IR(482, 4);
    case SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(486, 8);
    case SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE: return IR(494, 3);
    case SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS: return IR(497, 16);
    case SPV_OPERAND_TYPE_DEBUG_OPERATION: return IR(513, 9);
    case SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER: return IR(522, 3);
    case SPV_OPERAND_TYPE_DECORATION: return IR(525, 144);
    case SPV_OPERAND_TYPE_DIMENSIONALITY: return IR(669, 8);
    case SPV_OPERAND_TYPE_EXECUTION_MODE: return IR(677, 96);
    case SPV_OPERAND_TYPE_EXECUTION_MODEL: return IR(773, 17);
    case SPV_OPERAND_TYPE_FPDENORM_MODE: return IR(790, 2);
    case SPV_OPERAND_TYPE_FPENCODING: return IR(792, 3);
    case SPV_OPERAND_TYPE_FPOPERATION_MODE: return IR(795, 2);
    case SPV_OPERAND_TYPE_FP_FAST_MATH_MODE: return IR(797, 9);
    case SPV_OPERAND_TYPE_FP_ROUNDING_MODE: return IR(806, 4);
    case SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE: return IR(810, 4);
    case SPV_OPERAND_TYPE_FUNCTION_CONTROL: return IR(814, 6);
    case SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE: return IR(820, 9);
    case SPV_OPERAND_TYPE_GROUP_OPERATION: return IR(829, 7);
    case SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER: return IR(836, 4);
    case SPV_OPERAND_TYPE_IMAGE: return IR(840, 17);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE: return IR(857, 26);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER: return IR(883, 20);
    case SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER: return IR(903, 2);
    case SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS: return IR(905, 3);
    case SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO: return IR(908, 2);
    case SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS: return IR(910, 2);
    case SPV_OPERAND_TYPE_LINKAGE_TYPE: return IR(912, 3);
    case SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL: return IR(915, 5);
    case SPV_OPERAND_TYPE_LOOP_CONTROL: return IR(920, 20);
    case SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(940, 15);
    case SPV_OPERAND_TYPE_MEMORY_ACCESS: return IR(955, 9);
    case SPV_OPERAND_TYPE_MEMORY_MODEL: return IR(964, 4);
    case SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID: return IR(968, 15);
    case SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS: return IR(983, 1);
    case SPV_OPERAND_TYPE_OVERFLOW_MODES: return IR(984, 4);
    case SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT: return IR(988, 1);
    case SPV_OPERAND_TYPE_QUANTIZATION_MODES: return IR(989, 8);
    case SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS: return IR(997, 3);
    case SPV_OPERAND_TYPE_RAY_FLAGS: return IR(1000, 12);
    case SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE: return IR(1012, 2);
    case SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE: return IR(1014, 3);
    case SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION: return IR(1017, 2);
    case SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE: return IR(1019, 5);
    case SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE: return IR(1024, 2);
    case SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT: return IR(1026, 42);
    case SPV_OPERAND_TYPE_SCOPE_ID: return IR(1068, 7);
    case SPV_OPERAND_TYPE_SELECTION_CONTROL: return IR(1075, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS: return IR(1078, 1);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(1079, 8);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(1087, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(1090, 2);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS: return IR(1092, 20);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION: return IR(1112, 10);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(1122, 4);
    case SPV_OPERAND_TYPE_SOURCE_LANGUAGE: return IR(1126, 14);
    case SPV_OPERAND_TYPE_STORAGE_CLASS: return IR(1140, 28);
    case SPV_OPERAND_TYPE_STORE_CACHE_CONTROL: return IR(1168, 4);
    case SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS: return IR(1172, 3);
    case SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE: return IR(1175, 5);
    case SPV_OPERAND_TYPE_TENSOR_OPERANDS: return IR(1180, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_IMAGE: return IR(840, 17);
    case SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS: return IR(955, 9);
    case SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT: return IR(988, 1);
    case SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS: return IR(470, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(940, 15);
    case SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS: return IR(997, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_FPENCODING: return IR(792, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_TENSOR_OPERANDS: return IR(1180, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_CAPABILITY: return IR(133, 272);
    default: break;
  }
  return IR(0,0);
}

// Operand names and index into kOperandsByValue, ordered by (operand kind, name)
// The fields in order are:
//   name, either the primary name or an alias, indexing into kStrings
//   index into the kOperandsByValue array
static const std::array<NameIndex, 1280> kOperandNames{{
  {IR(4582, 9), 0}, // 0 ReadOnly in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4608, 10), 2}, // 1 ReadWrite in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4598, 10), 1}, // 2 WriteOnly in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(4618, 8), 3}, // 3 Logical in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4626, 11), 4}, // 4 Physical32 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4647, 11), 5}, // 5 Physical64 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4658, 24), 6}, // 6 PhysicalStorageBuffer64 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(4682, 27), 6}, // 7 PhysicalStorageBuffer64EXT in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(6592, 13), 92}, // 8 BaryCoordKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6605, 12), 92}, // 9 BaryCoordNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5987, 20), 68}, // 10 BaryCoordNoPerspAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6007, 28), 69}, // 11 BaryCoordNoPerspCentroidAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6640, 20), 93}, // 12 BaryCoordNoPerspKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6660, 19), 93}, // 13 BaryCoordNoPerspNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6035, 26), 70}, // 14 BaryCoordNoPerspSampleAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6132, 22), 74}, // 15 BaryCoordPullModelAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6061, 19), 71}, // 16 BaryCoordSmoothAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6080, 27), 72}, // 17 BaryCoordSmoothCentroidAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6107, 25), 73}, // 18 BaryCoordSmoothSampleAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5791, 13), 59}, // 19 BaseInstance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5765, 11), 58}, // 20 BaseVertex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4766, 13), 9}, // 21 ClipDistance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6499, 22), 87}, // 22 ClipDistancePerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7798, 12), 131}, // 23 ClusterIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5529, 13), 49}, // 24 CoreCountARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5503, 10), 48}, // 25 CoreIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5542, 13), 50}, // 26 CoreMaxIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4779, 13), 10}, // 27 CullDistance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6521, 22), 88}, // 28 CullDistancePerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7851, 12), 132}, // 29 CullMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6847, 17), 99}, // 30 CullPrimitiveEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7251, 17), 113}, // 31 CurrentRayTimeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5861, 12), 62}, // 32 DeviceIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5804, 10), 60}, // 33 DrawIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5293, 22), 37}, // 34 EnqueuedWorkgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5063, 10), 21}, // 35 FragCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5149, 10), 27}, // 36 FragDepth in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6725, 23), 95}, // 37 FragInvocationCountEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6679, 12), 94}, // 38 FragSizeEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6154, 18), 75}, // 39 FragStencilRefEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6691, 15), 94}, // 40 FragmentSizeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5084, 12), 23}, // 41 FrontFacing in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6411, 16), 83}, // 42 FullyCoveredEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5234, 19), 33}, // 43 GlobalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5328, 15), 39}, // 44 GlobalLinearId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5315, 13), 38}, // 45 GlobalOffset in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5282, 11), 36}, // 46 GlobalSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5159, 17), 28}, // 47 HelperInvocation in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7553, 11), 120}, // 48 HitIsLSSNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7511, 14), 119}, // 49 HitIsSphereNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7733, 33), 128}, // 50 HitKindBackFacingMicroTriangleNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7699, 34), 127}, // 51 HitKindFrontFacingMicroTriangleNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7230, 11), 112}, // 52 HitKindKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7241, 10), 112}, // 53 HitKindNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7681, 18), 126}, // 54 HitLSSPositionsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7784, 14), 130}, // 55 HitLSSRadiiNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7415, 37), 116}, // 56 HitMicroTriangleVertexBarycentricsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7348, 34), 115}, // 57 HitMicroTriangleVertexPositionsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7603, 20), 121}, // 58 HitSpherePositionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7766, 18), 129}, // 59 HitSphereRadiusNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7223, 7), 111}, // 60 HitTNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7291, 30), 114}, // 61 HitTriangleVertexPositionsKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7452, 20), 117}, // 62 IncomingRayFlagsKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7472, 19), 117}, // 63 IncomingRayFlagsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7112, 23), 108}, // 64 InstanceCustomIndexKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7135, 22), 108}, // 65 InstanceCustomIndexNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4801, 11), 12}, // 66 InstanceId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5489, 14), 47}, // 67 InstanceIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4902, 13), 14}, // 68 InvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6748, 22), 95}, // 69 InvocationsPerPixelNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6864, 12), 100}, // 70 LaunchIdKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6876, 11), 100}, // 71 LaunchIdNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6887, 14), 101}, // 72 LaunchSizeKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6901, 13), 101}, // 73 LaunchSizeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4915, 6), 15}, // 74 Layer in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6543, 15), 89}, // 75 LayerPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5216, 18), 32}, // 76 LocalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5253, 21), 34}, // 77 LocalInvocationIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6558, 16), 90}, // 78 MeshViewCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6574, 18), 91}, // 79 MeshViewIndicesNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5419, 21), 43}, // 80 NumEnqueuedSubgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5406, 13), 42}, // 81 NumSubgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5176, 14), 29}, // 82 NumWorkgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7027, 22), 105}, // 83 ObjectRayDirectionKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7049, 21), 105}, // 84 ObjectRayDirectionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6990, 19), 104}, // 85 ObjectRayOriginKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7009, 18), 104}, // 86 ObjectRayOriginNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7157, 17), 109}, // 87 ObjectToWorldKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7174, 16), 109}, // 88 ObjectToWorldNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5049, 14), 20}, // 89 PatchVertices in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5073, 11), 22}, // 90 PointCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4756, 10), 8}, // 91 PointSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4740, 9), 7}, // 92 Position in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6351, 18), 81}, // 93 PositionPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6463, 17), 85}, // 94 PrimitiveCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4812, 12), 13}, // 95 PrimitiveId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6480, 19), 86}, // 96 PrimitiveIndicesNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6795, 24), 97}, // 97 PrimitiveLineIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6770, 25), 96}, // 98 PrimitivePointIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5814, 24), 61}, // 99 PrimitiveShadingRateKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6819, 28), 98}, // 100 PrimitiveTriangleIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7491, 20), 118}, // 101 RayGeometryIndexKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7091, 11), 107}, // 102 RayTmaxKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7102, 10), 107}, // 103 RayTmaxNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7070, 11), 106}, // 104 RayTminKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7081, 10), 106}, // 105 RayTminNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6189, 29), 76}, // 106 RemainingRecursionLevelsAMDX in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7655, 10), 123}, // 107 SMCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7674, 7), 125}, // 108 SMIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5096, 9), 24}, // 109 SampleId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5138, 11), 26}, // 110 SampleMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5123, 15), 25}, // 111 SamplePosition in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6288, 20), 79}, // 112 SecondaryPositionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6327, 24), 80}, // 113 SecondaryViewportMaskNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6236, 16), 77}, // 114 ShaderIndexAMDX in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5905, 15), 64}, // 115 ShadingRateKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5578, 15), 53}, // 116 SubgroupEqMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5593, 18), 53}, // 117 SubgroupEqMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5633, 15), 54}, // 118 SubgroupGeMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5648, 18), 54}, // 119 SubgroupGeMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5666, 15), 55}, // 120 SubgroupGtMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5681, 18), 55}, // 121 SubgroupGtMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5440, 11), 44}, // 122 SubgroupId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5699, 15), 56}, // 123 SubgroupLeMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5714, 18), 56}, // 124 SubgroupLeMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5451, 26), 45}, // 125 SubgroupLocalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5732, 15), 57}, // 126 SubgroupLtMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5747, 18), 57}, // 127 SubgroupLtMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5390, 16), 41}, // 128 SubgroupMaxSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5343, 13), 40}, // 129 SubgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6451, 12), 84}, // 130 TaskCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5039, 10), 19}, // 131 TessCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5024, 15), 18}, // 132 TessLevelInner in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5009, 15), 17}, // 133 TessLevelOuter in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5969, 18), 67}, // 134 TileApronSizeQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5951, 18), 66}, // 135 TileDimensionQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5920, 15), 65}, // 136 TileOffsetQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4792, 9), 11}, // 137 VertexId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5477, 12), 46}, // 138 VertexIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5885, 10), 63}, // 139 ViewIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4961, 14), 16}, // 140 ViewportIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6252, 15), 78}, // 141 ViewportMaskNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6389, 22), 82}, // 142 ViewportMaskPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5555, 10), 51}, // 143 WarpIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7665, 9), 124}, // 144 WarpIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5565, 13), 52}, // 145 WarpMaxIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7623, 13), 122}, // 146 WarpsPerSMNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5274, 8), 35}, // 147 WorkDim in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5204, 12), 31}, // 148 WorkgroupId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5190, 14), 30}, // 149 WorkgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6949, 21), 103}, // 150 WorldRayDirectionKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6970, 20), 103}, // 151 WorldRayDirectionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6914, 18), 102}, // 152 WorldRayOriginKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6932, 17), 102}, // 153 WorldRayOriginNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7190, 17), 110}, // 154 WorldToObjectKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7207, 16), 110}, // 155 WorldToObjectNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(4637, 10), 137}, // 156 Addresses in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12836, 34), 358}, // 157 ArbitraryPrecisionFixedPointINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12524, 37), 346}, // 158 ArbitraryPrecisionFloatingPointINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12492, 32), 345}, // 159 ArbitraryPrecisionIntegersINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13386, 19), 382}, // 160 ArithmeticFenceEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12157, 9), 331}, // 161 AsmINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13303, 20), 378}, // 162 AtomicFloat16AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12212, 23), 334}, // 163 AtomicFloat16MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11685, 22), 309}, // 164 AtomicFloat16VectorNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13219, 20), 374}, // 165 AtomicFloat32AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12166, 23), 332}, // 166 AtomicFloat32MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13239, 20), 375}, // 167 AtomicFloat64AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12189, 23), 333}, // 168 AtomicFloat64MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8031, 14), 153}, // 169 AtomicStorage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9418, 17), 229}, // 170 AtomicStorageOps in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13344, 24), 380}, // 171 BFloat16ConversionINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10008, 29), 262}, // 172 BFloat16CooperativeMatrixKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9986, 22), 261}, // 173 BFloat16DotProductKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9970, 16), 260}, // 174 BFloat16TypeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13950, 20), 404}, // 175 BindlessImagesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11622, 18), 306}, // 176 BindlessTextureNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13163, 16), 371}, // 177 BitInstructions in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12935, 19), 362}, // 178 BlockingPipesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13911, 19), 402}, // 179 CacheControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4766, 13), 163}, // 180 ClipDistance in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11280, 32), 295}, // 181 ComputeDerivativeGroupLinearKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11312, 31), 295}, // 182 ComputeDerivativeGroupLinearNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10160, 31), 274}, // 183 ComputeDerivativeGroupQuadsKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10191, 30), 274}, // 184 ComputeDerivativeGroupQuadsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11862, 30), 318}, // 185 CooperativeMatrixBlockLoadsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11755, 31), 315}, // 186 CooperativeMatrixConversionsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9066, 21), 369}, // 187 CooperativeMatrixKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9001, 28), 211}, // 188 CooperativeMatrixLayoutsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11368, 20), 297}, // 189 CooperativeMatrixNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11786, 40), 316}, // 190 CooperativeMatrixPerElementOperationsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11725, 30), 314}, // 191 CooperativeMatrixReductionsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11826, 36), 317}, // 192 CooperativeMatrixTensorAddressingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11665, 20), 308}, // 193 CooperativeVectorNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11892, 28), 319}, // 194 CooperativeVectorTrainingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5513, 16), 203}, // 195 CoreBuiltinsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4779, 13), 164}, // 196 CullDistance in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13323, 21), 379}, // 197 DebugInfoModuleINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11491, 25), 302}, // 198 DemoteToHelperInvocation in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11516, 28), 302}, // 199 DemoteToHelperInvocationEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9557, 18), 235}, // 200 DenormFlushToZero in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9542, 15), 234}, // 201 DenormPreserve in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8478, 18), 182}, // 202 DerivativeControl in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8002, 14), 151}, // 203 DeviceEnqueue in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5873, 12), 225}, // 204 DeviceGroup in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11544, 23), 303}, // 205 DisplacementMicromapNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13114, 11), 367}, // 206 DotProduct in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13008, 22), 365}, // 207 DotProductInput4x8Bit in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13030, 25), 365}, // 208 DotProductInput4x8BitKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13055, 28), 366}, // 209 DotProductInput4x8BitPacked in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13083, 31), 366}, // 210 DotProductInput4x8BitPackedKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12967, 19), 364}, // 211 DotProductInputAll in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12986, 22), 364}, // 212 DotProductInputAllKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13125, 14), 367}, // 213 DotProductKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5776, 15), 216}, // 214 DrawParameters in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12269, 16), 337}, // 215 ExpectAssumeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12472, 20), 344}, // 216 FPFastMathModeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13520, 28), 388}, // 217 FPGAArgumentInterfacesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12812, 24), 357}, // 218 FPGABufferLocationINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12685, 27), 352}, // 219 FPGAClusterAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13405, 29), 383}, // 220 FPGAClusterAttributesV2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12726, 20), 354}, // 221 FPGADSPControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12772, 40), 356}, // 222 FPGAInvocationPipeliningAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12635, 26), 350}, // 223 FPGAKernelAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13434, 28), 384}, // 224 FPGAKernelAttributesv2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13496, 24), 387}, // 225 FPGALatencyControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12591, 22), 348}, // 226 FPGALoopControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12661, 24), 351}, // 227 FPGAMemoryAccessesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12446, 26), 343}, // 228 FPGAMemoryAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12954, 13), 363}, // 229 FPGARegINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13480, 16), 386}, // 230 FPMaxErrorINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7916, 8), 142}, // 231 Float16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7902, 14), 141}, // 232 Float16Buffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9810, 16), 249}, // 233 Float16ImageAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7924, 8), 143}, // 234 Float64 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9039, 27), 213}, // 235 Float8CooperativeMatrixEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9029, 10), 212}, // 236 Float8EXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13204, 15), 373}, // 237 FloatControls2 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12065, 23), 327}, // 238 FloatingPointModeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6617, 23), 273}, // 239 FragmentBarycentricKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10138, 22), 273}, // 240 FragmentBarycentricNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6706, 19), 275}, // 241 FragmentDensityEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6427, 24), 269}, // 242 FragmentFullyCoveredEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9848, 16), 251}, // 243 FragmentMaskAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11459, 32), 301}, // 244 FragmentShaderPixelInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11388, 33), 298}, // 245 FragmentShaderSampleInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11421, 38), 299}, // 246 FragmentShaderShadingRateInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5838, 23), 214}, // 247 FragmentShadingRateKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12420, 26), 342}, // 248 FunctionFloatControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12111, 22), 329}, // 249 FunctionPointersINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13811, 22), 398}, // 250 FunctionVariantsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8323, 15), 169}, // 251 GenericPointer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4824, 9), 135}, // 252 Geometry in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8073, 18), 156}, // 253 GeometryPointSize in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10066, 28), 264}, // 254 GeometryShaderPassthroughNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8536, 16), 185}, // 255 GeometryStreams in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13578, 35), 390}, // 256 GlobalVariableFPGADecorationsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13548, 30), 389}, // 257 GlobalVariableHostAccessINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8992, 9), 210}, // 258 GraphARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5356, 16), 192}, // 259 GroupNonUniform in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8675, 26), 194}, // 260 GroupNonUniformArithmetic in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5611, 22), 195}, // 261 GroupNonUniformBallot in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8755, 25), 198}, // 262 GroupNonUniformClustered in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10235, 29), 276}, // 263 GroupNonUniformPartitionedNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8780, 20), 199}, // 264 GroupNonUniformQuad in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13179, 25), 372}, // 265 GroupNonUniformRotateKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8701, 23), 196}, // 266 GroupNonUniformShuffle in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8724, 31), 197}, // 267 GroupNonUniformShuffleRelative in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8655, 20), 193}, // 268 GroupNonUniformVote in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13833, 26), 399}, // 269 GroupUniformArithmeticKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7995, 7), 150}, // 270 Groups in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12922, 13), 361}, // 271 IOPipesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8392, 8), 175}, // 272 Image1D in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7951, 11), 146}, // 273 ImageBasic in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8414, 12), 178}, // 274 ImageBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8269, 15), 165}, // 275 ImageCubeArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10121, 17), 271}, // 276 ImageFootprintNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9826, 22), 250}, // 277 ImageGatherBiasLodAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8091, 20), 157}, // 278 ImageGatherExtended in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8426, 13), 179}, // 279 ImageMSArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7977, 12), 148}, // 280 ImageMipmap in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8467, 11), 181}, // 281 ImageQuery in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7962, 15), 147}, // 282 ImageReadWrite in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9864, 21), 253}, // 283 ImageReadWriteLodAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8301, 10), 167}, // 284 ImageRect in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12133, 24), 330}, // 285 IndirectReferencesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8343, 16), 171}, // 286 InputAttachment in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10350, 36), 279}, // 287 InputAttachmentArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10386, 39), 279}, // 288 InputAttachmentArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10891, 39), 286}, // 289 InputAttachmentArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10930, 42), 286}, // 290 InputAttachmentArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8045, 6), 154}, // 291 Int16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9943, 27), 259}, // 292 Int4CooperativeMatrixINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9929, 14), 258}, // 293 Int4TypeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7932, 6), 144}, // 294 Int64 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7938, 13), 145}, // 295 Int64Atomics in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9885, 14), 254}, // 296 Int64ImageEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8338, 5), 170}, // 297 Int8 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12088, 23), 328}, // 298 IntegerFunctions2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8496, 22), 183}, // 299 InterpolationFunction in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4591, 7), 139}, // 300 Kernel in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12613, 22), 349}, // 301 KernelAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7885, 8), 138}, // 302 Linkage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8016, 15), 152}, // 303 LiteralSampler in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13259, 20), 376}, // 304 LongCompositesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12712, 14), 353}, // 305 LoopFuseINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13886, 25), 401}, // 306 MaskedGatherScatterINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7878, 7), 133}, // 307 Matrix in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12746, 26), 355}, // 308 MemoryAccessAliasingINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4887, 15), 272}, // 309 MeshShadingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4873, 14), 270}, // 310 MeshShadingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8375, 7), 173}, // 311 MinLod in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5895, 10), 226}, // 312 MultiView in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4975, 14), 188}, // 313 MultiViewport in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8630, 13), 190}, // 314 NamedBarrier in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13279, 11), 377}, // 315 OptNoneEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13290, 13), 377}, // 316 OptNoneINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6369, 20), 268}, // 317 PerViewAttributesNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4709, 31), 294}, // 318 PhysicalStorageBufferAddresses in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11246, 34), 294}, // 319 PhysicalStorageBufferAddressesEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8643, 12), 191}, // 320 PipeStorage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7989, 6), 149}, // 321 Pipes in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9914, 15), 257}, // 322 QuadControlKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11707, 18), 311}, // 323 RawAccessChainsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7863, 15), 368}, // 324 RayCullMaskKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9655, 12), 240}, // 325 RayQueryKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11640, 25), 307}, // 326 RayQueryPositionFetchKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9632, 23), 239}, // 327 RayQueryProvisionalKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7810, 41), 320}, // 328 RayTracingClusterAccelerationStructureNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7382, 33), 310}, // 329 RayTracingDisplacementMicromapNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4859, 14), 243}, // 330 RayTracingKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7564, 39), 313}, // 331 RayTracingLinearSweptSpheresGeometryNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7268, 23), 291}, // 332 RayTracingMotionBlurNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4846, 13), 290}, // 333 RayTracingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11567, 29), 304}, // 334 RayTracingOpacityMicromapEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7321, 27), 289}, // 335 RayTracingPositionFetchKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11343, 25), 296}, // 336 RayTracingProvisionalKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7525, 28), 312}, // 337 RayTracingSpheresGeometryNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9686, 32), 242}, // 338 RayTraversalPrimitiveCullingKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13930, 20), 403}, // 339 RegisterLimitsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13139, 24), 370}, // 340 ReplicatedCompositesEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12044, 21), 326}, // 341 RoundToInfinityINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9600, 16), 237}, // 342 RoundingModeRTE in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9616, 16), 238}, // 343 RoundingModeRTZ in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12893, 29), 360}, // 344 RuntimeAlignedAttributeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10301, 23), 278}, // 345 RuntimeDescriptorArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10324, 26), 278}, // 346 RuntimeDescriptorArrayEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10037, 29), 263}, // 347 SampleMaskOverrideCoverageNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9435, 28), 230}, // 348 SampleMaskPostDepthCoverage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5105, 18), 166}, // 349 SampleRateShading in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8382, 10), 174}, // 350 Sampled1D in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8400, 14), 177}, // 351 SampledBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8284, 17), 176}, // 352 SampledCubeArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8169, 33), 160}, // 353 SampledImageArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10664, 36), 283}, // 354 SampledImageArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10700, 39), 283}, // 355 SampledImageArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8311, 12), 168}, // 356 SampledRect in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4749, 7), 134}, // 357 Shader in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9899, 15), 255}, // 358 ShaderClockKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6218, 18), 256}, // 359 ShaderEnqueueAMDX in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11596, 26), 305}, // 360 ShaderInvocationReorderNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4921, 12), 200}, // 361 ShaderLayer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10264, 17), 277}, // 362 ShaderNonUniform in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10281, 20), 277}, // 363 ShaderNonUniformEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7636, 19), 300}, // 364 ShaderSMBuiltinsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6308, 19), 267}, // 365 ShaderStereoViewNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4989, 20), 201}, // 366 ShaderViewportIndex in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4933, 28), 265}, // 367 ShaderViewportIndexLayerEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10094, 27), 265}, // 368 ShaderViewportIndexLayerNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6267, 21), 266}, // 369 ShaderViewportMaskNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10221, 14), 275}, // 370 ShadingRateNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9575, 25), 236}, // 371 SignedZeroInfNanPreserve in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8359, 16), 172}, // 372 SparseResidency in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13790, 21), 397}, // 373 SpecConditionalINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13368, 18), 381}, // 374 SplitBarrierINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6172, 17), 252}, // 375 StencilExportEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9223, 25), 221}, // 376 StorageBuffer16BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9463, 24), 231}, // 377 StorageBuffer8BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8202, 34), 161}, // 378 StorageBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10739, 37), 284}, // 379 StorageBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10776, 40), 284}, // 380 StorageBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8236, 33), 162}, // 381 StorageImageArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10816, 36), 285}, // 382 StorageImageArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10852, 39), 285}, // 383 StorageImageArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8439, 28), 180}, // 384 StorageImageExtendedFormats in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8111, 24), 158}, // 385 StorageImageMultisample in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8552, 30), 186}, // 386 StorageImageReadWithoutFormat in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8582, 31), 187}, // 387 StorageImageWriteWithoutFormat in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9350, 21), 224}, // 388 StorageInputOutput16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9328, 22), 223}, // 389 StoragePushConstant16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9521, 21), 233}, // 390 StoragePushConstant8 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8915, 37), 208}, // 391 StorageTensorArrayDynamicIndexingARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8952, 40), 209}, // 392 StorageTensorArrayNonUniformIndexingARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10506, 39), 281}, // 393 StorageTexelBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10545, 42), 281}, // 394 StorageTexelBufferArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11059, 42), 288}, // 395 StorageTexelBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11101, 45), 288}, // 396 StorageTexelBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9311, 17), 222}, // 397 StorageUniform16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9248, 28), 221}, // 398 StorageUniformBufferBlock16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13641, 23), 392}, // 399 Subgroup2DBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13664, 30), 393}, // 400 Subgroup2DBlockTransformINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13694, 30), 394}, // 401 Subgroup2DBlockTransposeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12356, 39), 340}, // 402 SubgroupAvcMotionEstimationChromaINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12285, 33), 338}, // 403 SubgroupAvcMotionEstimationINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12318, 38), 339}, // 404 SubgroupAvcMotionEstimationIntraINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5372, 18), 215}, // 405 SubgroupBallotKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11960, 27), 323}, // 406 SubgroupBufferBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13613, 28), 391}, // 407 SubgroupBufferPrefetchINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8613, 17), 189}, // 408 SubgroupDispatch in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11987, 26), 324}, // 409 SubgroupImageBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12013, 31), 325}, // 410 SubgroupImageMediaBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13724, 38), 395}, // 411 SubgroupMatrixMultiplyAccumulateINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11939, 21), 322}, // 412 SubgroupShuffleINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9207, 16), 220}, // 413 SubgroupVoteKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13462, 18), 385}, // 414 TaskSequenceINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11920, 19), 321}, // 415 TensorAddressingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13859, 27), 400}, // 416 TensorFloat32RoundingINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8904, 11), 207}, // 417 TensorsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13762, 28), 396}, // 418 TernaryBitwiseFunctionINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(4833, 13), 136}, // 419 Tessellation in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8051, 22), 155}, // 420 TessellationPointSize in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9787, 23), 248}, // 421 TextureBlockMatch2QCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9765, 22), 246}, // 422 TextureBlockMatchQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9744, 21), 245}, // 423 TextureBoxFilterQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9718, 26), 244}, // 424 TextureSampleWeightedQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8818, 28), 204}, // 425 TileImageColorReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8846, 28), 205}, // 426 TileImageDepthReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8874, 30), 206}, // 427 TileImageStencilReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5935, 16), 247}, // 428 TileShadingQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8518, 18), 184}, // 429 TransformFeedback in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12870, 23), 359}, // 430 USMStorageClassesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9276, 35), 222}, // 431 UniformAndStorageBuffer16BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9487, 34), 232}, // 432 UniformAndStorageBuffer8BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8135, 34), 159}, // 433 UniformBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10587, 37), 282}, // 434 UniformBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10624, 40), 282}, // 435 UniformBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8800, 18), 202}, // 436 UniformDecoration in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10425, 39), 280}, // 437 UniformTexelBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10464, 42), 280}, // 438 UniformTexelBufferArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10972, 42), 287}, // 439 UniformTexelBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11014, 45), 287}, // 440 UniformTexelBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12561, 30), 347}, // 441 UnstructuredLoopControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9667, 19), 241}, // 442 UntypedPointersKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12395, 25), 341}, // 443 VariableLengthArrayINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9401, 17), 228}, // 444 VariablePointers in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9371, 30), 227}, // 445 VariablePointersStorageBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7893, 9), 140}, // 446 Vector16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12254, 15), 336}, // 447 VectorAnyINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12235, 19), 335}, // 448 VectorComputeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11146, 18), 292}, // 449 VulkanMemoryModel in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11185, 29), 293}, // 450 VulkanMemoryModelDeviceScope in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11214, 32), 293}, // 451 VulkanMemoryModelDeviceScopeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11164, 21), 292}, // 452 VulkanMemoryModelKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9163, 44), 219}, // 453 WorkgroupMemoryExplicitLayout16BitAccessKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9120, 43), 218}, // 454 WorkgroupMemoryExplicitLayout8BitAccessKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9087, 33), 217}, // 455 WorkgroupMemoryExplicitLayoutKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13982, 8), 406}, // 456 Address in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13990, 8), 407}, // 457 Boolean in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13998, 6), 408}, // 458 Float in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14004, 7), 409}, // 459 Signed in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14011, 11), 410}, // 460 SignedChar in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14022, 9), 411}, // 461 Unsigned in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14031, 13), 412}, // 462 UnsignedChar in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13970, 12), 405}, // 463 Unspecified in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14044, 6), 413}, // 464 Class in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(14050, 10), 414}, // 465 Structure in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(14060, 6), 415}, // 466 Union in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(14081, 20), 417}, // 467 ImportedDeclaration in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(14066, 15), 416}, // 468 ImportedModule in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(14190, 15), 425}, // 469 FlagArtificial in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14205, 13), 426}, // 470 FlagExplicit in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14178, 12), 424}, // 471 FlagFwdDecl in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14268, 21), 430}, // 472 FlagIndirectVariable in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14161, 17), 423}, // 473 FlagIsDefinition in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14345, 16), 434}, // 474 FlagIsEnumClass in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14149, 12), 422}, // 475 FlagIsLocal in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14329, 16), 433}, // 476 FlagIsOptimized in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14122, 14), 420}, // 477 FlagIsPrivate in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14106, 16), 419}, // 478 FlagIsProtected in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14136, 13), 421}, // 479 FlagIsPublic in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14289, 20), 431}, // 480 FlagLValueReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14233, 18), 428}, // 481 FlagObjectPointer in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14218, 15), 427}, // 482 FlagPrototyped in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14309, 20), 432}, // 483 FlagRValueReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14251, 17), 429}, // 484 FlagStaticMember in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14381, 24), 436}, // 485 FlagTypePassByReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14361, 20), 435}, // 486 FlagTypePassByValue in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14101, 5), 418}, // 487 None in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(14466, 9), 441}, // 488 BitPiece in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14498, 7), 445}, // 489 Constu in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14405, 6), 437}, // 490 Deref in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14505, 9), 446}, // 491 Fragment in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14416, 6), 439}, // 492 Minus in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14411, 5), 438}, // 493 Plus in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14455, 11), 440}, // 494 PlusUconst in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14487, 11), 444}, // 495 StackValue in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14475, 5), 442}, // 496 Swap in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14480, 7), 443}, // 497 Xderef in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(14550, 11), 450}, // 498 AtomicType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14514, 10), 447}, // 499 ConstType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14537, 13), 449}, // 500 RestrictType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14524, 13), 448}, // 501 VolatileType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14561, 10), 451}, // 502 Float16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14571, 10), 452}, // 503 Float32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14581, 10), 453}, // 504 Float64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14749, 12), 464}, // 505 FloatE4M3NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14761, 12), 465}, // 506 FloatE5M2NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14604, 14), 455}, // 507 SignedInt16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14618, 14), 456}, // 508 SignedInt32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14632, 14), 457}, // 509 SignedInt64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14591, 13), 454}, // 510 SignedInt8NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14709, 19), 462}, // 511 SignedInt8PackedNV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14661, 16), 459}, // 512 UnsignedInt16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14677, 16), 460}, // 513 UnsignedInt32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14693, 16), 461}, // 514 UnsignedInt64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14646, 15), 458}, // 515 UnsignedInt8NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14728, 21), 463}, // 516 UnsignedInt8PackedNV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(14825, 28), 469}, // 517 ColumnBlockedInterleavedARM in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14785, 15), 467}, // 518 ColumnMajorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14800, 25), 468}, // 519 RowBlockedInterleavedARM in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14773, 12), 466}, // 520 RowMajorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(14861, 27), 471}, // 521 MatrixASignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14888, 27), 472}, // 522 MatrixBSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14915, 27), 473}, // 523 MatrixCSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14942, 32), 474}, // 524 MatrixResultSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14853, 8), 470}, // 525 NoneKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(14974, 26), 475}, // 526 SaturatingAccumulationKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(15011, 4), 478}, // 527 2x2 in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(15004, 7), 477}, // 528 Column in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(15000, 4), 476}, // 529 Row in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(15015, 11), 479}, // 530 MatrixAKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(15037, 21), 481}, // 531 MatrixAccumulatorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(15026, 11), 480}, // 532 MatrixBKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(15069, 14), 483}, // 533 ColumnMajorNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(15083, 21), 484}, // 534 InferencingOptimalNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(15058, 11), 482}, // 535 RowMajorNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(15104, 18), 485}, // 536 TrainingOptimalNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(13982, 8), 487}, // 537 Address in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13990, 8), 488}, // 538 Boolean in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13998, 6), 489}, // 539 Float in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14004, 7), 490}, // 540 Signed in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14011, 11), 491}, // 541 SignedChar in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14022, 9), 492}, // 542 Unsigned in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14031, 13), 493}, // 543 UnsignedChar in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13970, 12), 486}, // 544 Unspecified in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14044, 6), 494}, // 545 Class in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(14050, 10), 495}, // 546 Structure in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(14060, 6), 496}, // 547 Union in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(14190, 15), 504}, // 548 FlagArtificial in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14205, 13), 505}, // 549 FlagExplicit in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14178, 12), 503}, // 550 FlagFwdDecl in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14268, 21), 509}, // 551 FlagIndirectVariable in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14161, 17), 502}, // 552 FlagIsDefinition in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14149, 12), 501}, // 553 FlagIsLocal in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14329, 16), 512}, // 554 FlagIsOptimized in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14122, 14), 499}, // 555 FlagIsPrivate in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14106, 16), 498}, // 556 FlagIsProtected in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14136, 13), 500}, // 557 FlagIsPublic in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14289, 20), 510}, // 558 FlagLValueReference in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14233, 18), 507}, // 559 FlagObjectPointer in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14218, 15), 506}, // 560 FlagPrototyped in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14309, 20), 511}, // 561 FlagRValueReference in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14251, 17), 508}, // 562 FlagStaticMember in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14101, 5), 497}, // 563 None in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(14466, 9), 517}, // 564 BitPiece in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14498, 7), 521}, // 565 Constu in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14405, 6), 513}, // 566 Deref in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14416, 6), 515}, // 567 Minus in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14411, 5), 514}, // 568 Plus in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14455, 11), 516}, // 569 PlusUconst in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14487, 11), 520}, // 570 StackValue in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14475, 5), 518}, // 571 Swap in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14480, 7), 519}, // 572 Xderef in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(14514, 10), 522}, // 573 ConstType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(14537, 13), 524}, // 574 RestrictType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(14524, 13), 523}, // 575 VolatileType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(17346, 16), 639}, // 576 AliasScopeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15331, 8), 544}, // 577 Aliased in SPV_OPERAND_TYPE_DECORATION
  {IR(16449, 15), 597}, // 578 AliasedPointer in SPV_OPERAND_TYPE_DECORATION
  {IR(16464, 18), 597}, // 579 AliasedPointerEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(15809, 10), 568}, // 580 Alignment in SPV_OPERAND_TYPE_DECORATION
  {IR(15853, 12), 570}, // 581 AlignmentId in SPV_OPERAND_TYPE_DECORATION
  {IR(15182, 12), 531}, // 582 ArrayStride in SPV_OPERAND_TYPE_DECORATION
  {IR(17127, 14), 627}, // 583 BankBitsINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16966, 15), 620}, // 584 BankwidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15486, 8), 557}, // 585 Binding in SPV_OPERAND_TYPE_DECORATION
  {IR(16530, 16), 600}, // 586 BindlessImageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16512, 18), 599}, // 587 BindlessSamplerNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15146, 6), 527}, // 588 Block in SPV_OPERAND_TYPE_DECORATION
  {IR(15993, 22), 577}, // 589 BlockMatchSamplerQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(15971, 22), 576}, // 590 BlockMatchTextureQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(16561, 13), 602}, // 591 BoundImageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16546, 15), 601}, // 592 BoundSamplerNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15152, 12), 528}, // 593 BufferBlock in SPV_OPERAND_TYPE_DECORATION
  {IR(17439, 20), 644}, // 594 BufferLocationINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15263, 8), 536}, // 595 BuiltIn in SPV_OPERAND_TYPE_DECORATION
  {IR(17209, 19), 632}, // 596 BurstCoalesceINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15229, 8), 535}, // 597 CPacked in SPV_OPERAND_TYPE_DECORATION
  {IR(18249, 22), 667}, // 598 CacheControlLoadINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18308, 23), 668}, // 599 CacheControlStoreINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17228, 15), 633}, // 600 CacheSizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15296, 9), 540}, // 601 Centroid in SPV_OPERAND_TYPE_DECORATION
  {IR(16614, 13), 605}, // 602 ClobberINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15357, 9), 547}, // 603 Coherent in SPV_OPERAND_TYPE_DECORATION
  {IR(15173, 9), 530}, // 604 ColMajor in SPV_OPERAND_TYPE_DECORATION
  {IR(15470, 10), 555}, // 605 Component in SPV_OPERAND_TYPE_DECORATION
  {IR(18196, 17), 666}, // 606 ConditionalINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17748, 27), 654}, // 607 ConduitKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15348, 9), 546}, // 608 Constant in SPV_OPERAND_TYPE_DECORATION
  {IR(16760, 14), 612}, // 609 CounterBuffer in SPV_OPERAND_TYPE_DECORATION
  {IR(15494, 14), 558}, // 610 DescriptorSet in SPV_OPERAND_TYPE_DECORATION
  {IR(17243, 28), 634}, // 611 DontStaticallyCoalesceINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17019, 16), 623}, // 612 DoublepumpINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16015, 18), 578}, // 613 ExplicitInterpAMD in SPV_OPERAND_TYPE_DECORATION
  {IR(15679, 15), 564}, // 614 FPFastMathMode in SPV_OPERAND_TYPE_DECORATION
  {IR(17667, 26), 651}, // 615 FPMaxErrorDecorationINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15629, 15), 563}, // 616 FPRoundingMode in SPV_OPERAND_TYPE_DECORATION
  {IR(15285, 5), 538}, // 617 Flat in SPV_OPERAND_TYPE_DECORATION
  {IR(17141, 20), 628}, // 618 ForcePow2DepthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15581, 14), 562}, // 619 FuncParamAttr in SPV_OPERAND_TYPE_DECORATION
  {IR(16671, 21), 608}, // 620 FuncParamIOKindINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16902, 24), 616}, // 621 FunctionDenormModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17512, 31), 646}, // 622 FunctionFloatingPointModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16845, 26), 615}, // 623 FunctionRoundingModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17302, 25), 637}, // 624 FuseLoopsInFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15218, 11), 534}, // 625 GLSLPacked in SPV_OPERAND_TYPE_DECORATION
  {IR(15207, 11), 533}, // 626 GLSLShared in SPV_OPERAND_TYPE_DECORATION
  {IR(16734, 26), 611}, // 627 GlobalVariableOffsetINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16482, 30), 598}, // 628 HitObjectShaderRecordBufferNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16774, 24), 612}, // 629 HlslCounterBufferGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(16811, 19), 613}, // 630 HlslSemanticGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(18091, 16), 663}, // 631 HostAccessINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17459, 19), 645}, // 632 IOPipeStorageINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18168, 28), 665}, // 633 ImplementInRegisterMapINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15480, 6), 556}, // 634 Index in SPV_OPERAND_TYPE_DECORATION
  {IR(18154, 14), 664}, // 635 InitModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17375, 24), 641}, // 636 InitiationIntervalINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15788, 21), 567}, // 637 InputAttachmentIndex in SPV_OPERAND_TYPE_DECORATION
  {IR(15312, 10), 542}, // 638 Invariant in SPV_OPERAND_TYPE_DECORATION
  {IR(17718, 30), 653}, // 639 LatencyControlConstraintINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17693, 25), 652}, // 640 LatencyControlLabelINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15756, 18), 565}, // 641 LinkageAttributes in SPV_OPERAND_TYPE_DECORATION
  {IR(15461, 9), 554}, // 642 Location in SPV_OPERAND_TYPE_DECORATION
  {IR(17806, 33), 656}, // 643 MMHostInterfaceAddressWidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17839, 30), 657}, // 644 MMHostInterfaceDataWidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17869, 28), 658}, // 645 MMHostInterfaceLatencyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17965, 29), 660}, // 646 MMHostInterfaceMaxBurstINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17931, 34), 659}, // 647 MMHostInterfaceReadWriteModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17994, 32), 661}, // 648 MMHostInterfaceWaitRequestINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17327, 19), 638}, // 649 MathOpDSPModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15194, 13), 532}, // 650 MatrixStride in SPV_OPERAND_TYPE_DECORATION
  {IR(15819, 14), 569}, // 651 MaxByteOffset in SPV_OPERAND_TYPE_DECORATION
  {IR(15865, 16), 571}, // 652 MaxByteOffsetId in SPV_OPERAND_TYPE_DECORATION
  {IR(17399, 20), 642}, // 653 MaxConcurrencyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16981, 22), 621}, // 654 MaxPrivateCopiesINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17035, 19), 624}, // 655 MaxReplicatesINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17603, 18), 649}, // 656 MediaBlockIOINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16940, 12), 618}, // 657 MemoryINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17074, 11), 626}, // 658 MergeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17362, 13), 640}, // 659 NoAliasINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15774, 14), 566}, // 660 NoContraction in SPV_OPERAND_TYPE_DECORATION
  {IR(15271, 14), 537}, // 661 NoPerspective in SPV_OPERAND_TYPE_DECORATION
  {IR(15925, 13), 573}, // 662 NoSignedWrap in SPV_OPERAND_TYPE_DECORATION
  {IR(15938, 15), 574}, // 663 NoUnsignedWrap in SPV_OPERAND_TYPE_DECORATION
  {IR(16065, 20), 580}, // 664 NodeMaxPayloadsAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16033, 32), 579}, // 665 NodeSharesPayloadLimitsWithAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(15378, 12), 549}, // 666 NonReadable in SPV_OPERAND_TYPE_DECORATION
  {IR(16389, 11), 595}, // 667 NonUniform in SPV_OPERAND_TYPE_DECORATION
  {IR(16400, 14), 595}, // 668 NonUniformEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(15366, 12), 548}, // 669 NonWritable in SPV_OPERAND_TYPE_DECORATION
  {IR(16952, 14), 619}, // 670 NumbanksINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15508, 7), 559}, // 671 Offset in SPV_OPERAND_TYPE_DECORATION
  {IR(16233, 19), 587}, // 672 OverrideCoverageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16252, 14), 588}, // 673 PassthroughNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15290, 6), 539}, // 674 Patch in SPV_OPERAND_TYPE_DECORATION
  {IR(16205, 28), 586}, // 675 PayloadDispatchIndirectAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16180, 25), 585}, // 676 PayloadNodeArraySizeAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16128, 25), 583}, // 677 PayloadNodeBaseIndexAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16108, 20), 582}, // 678 PayloadNodeNameAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16153, 27), 584}, // 679 PayloadNodeSparseArrayAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(16313, 16), 591}, // 680 PerPrimitiveEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(16329, 15), 591}, // 681 PerPrimitiveNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16354, 10), 593}, // 682 PerTaskNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16364, 13), 594}, // 683 PerVertexKHR in SPV_OPERAND_TYPE_DECORATION
  {IR(16377, 12), 594}, // 684 PerVertexNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16344, 10), 592}, // 685 PerViewNV in SPV_OPERAND_TYPE_DECORATION
  {IR(17419, 20), 643}, // 686 PipelineEnableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17271, 14), 635}, // 687 PrefetchINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16588, 26), 604}, // 688 ReferencedIndirectlyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16926, 14), 617}, // 689 RegisterINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17775, 31), 655}, // 690 RegisterMapKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15122, 17), 525}, // 691 RelaxedPrecision in SPV_OPERAND_TYPE_DECORATION
  {IR(15322, 9), 543}, // 692 Restrict in SPV_OPERAND_TYPE_DECORATION
  {IR(16414, 16), 596}, // 693 RestrictPointer in SPV_OPERAND_TYPE_DECORATION
  {IR(16430, 19), 596}, // 694 RestrictPointerEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(15164, 9), 529}, // 695 RowMajor in SPV_OPERAND_TYPE_DECORATION
  {IR(16574, 14), 603}, // 696 SIMTCallINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15305, 7), 541}, // 697 Sample in SPV_OPERAND_TYPE_DECORATION
  {IR(15434, 20), 552}, // 698 SaturatedConversion in SPV_OPERAND_TYPE_DECORATION
  {IR(15881, 44), 572}, // 699 SaturatedToLargestFloat8NormalConversionEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(16285, 28), 590}, // 700 SecondaryViewportRelativeNV in SPV_OPERAND_TYPE_DECORATION
  {IR(16627, 17), 606}, // 701 SideEffectsINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17054, 20), 625}, // 702 SimpleDualPortINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17543, 25), 647}, // 703 SingleElementVectorINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17003, 16), 622}, // 704 SinglepumpINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15139, 7), 526}, // 705 SpecId in SPV_OPERAND_TYPE_DECORATION
  {IR(18026, 26), 662}, // 706 StableKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16719, 15), 610}, // 707 StackCallINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17285, 17), 636}, // 708 StallEnableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17621, 15), 650}, // 709 StallFreeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15454, 7), 553}, // 710 Stream in SPV_OPERAND_TYPE_DECORATION
  {IR(17161, 16), 629}, // 711 StridesizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16085, 23), 581}, // 712 TrackFinishWritingAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(17191, 18), 631}, // 713 TrueDualPortINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15390, 8), 550}, // 714 Uniform in SPV_OPERAND_TYPE_DECORATION
  {IR(15424, 10), 551}, // 715 UniformId in SPV_OPERAND_TYPE_DECORATION
  {IR(16798, 13), 613}, // 716 UserSemantic in SPV_OPERAND_TYPE_DECORATION
  {IR(16830, 15), 614}, // 717 UserTypeGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(17568, 35), 648}, // 718 VectorComputeCallableFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16692, 27), 609}, // 719 VectorComputeFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16644, 27), 607}, // 720 VectorComputeVariableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(16266, 19), 589}, // 721 ViewportRelativeNV in SPV_OPERAND_TYPE_DECORATION
  {IR(15339, 9), 545}, // 722 Volatile in SPV_OPERAND_TYPE_DECORATION
  {IR(15953, 18), 575}, // 723 WeightTextureQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(17177, 14), 630}, // 724 WordsizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(15515, 10), 560}, // 725 XfbBuffer in SPV_OPERAND_TYPE_DECORATION
  {IR(15525, 10), 561}, // 726 XfbStride in SPV_OPERAND_TYPE_DECORATION
  {IR(18331, 3), 669}, // 727 1D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(18334, 3), 670}, // 728 2D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(18337, 3), 671}, // 729 3D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(18350, 7), 674}, // 730 Buffer in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(18340, 5), 672}, // 731 Cube in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(18345, 5), 673}, // 732 Rect in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(18357, 12), 675}, // 733 SubpassData in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(18369, 17), 676}, // 734 TileImageDataEXT in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(19181, 15), 729}, // 735 CoalescingAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18812, 15), 707}, // 736 ContractionOff in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9557, 18), 721}, // 737 DenormFlushToZero in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9542, 15), 720}, // 738 DenormPreserve in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18582, 13), 690}, // 739 DepthGreater in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18595, 10), 691}, // 740 DepthLess in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18567, 15), 689}, // 741 DepthReplacing in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18605, 15), 692}, // 742 DepthUnchanged in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19602, 25), 747}, // 743 DerivativeGroupLinearKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19627, 24), 747}, // 744 DerivativeGroupLinearNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19555, 24), 746}, // 745 DerivativeGroupQuadsKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19579, 23), 746}, // 746 DerivativeGroupQuadsNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19129, 29), 727}, // 747 EarlyAndLateFragmentTestsAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18534, 19), 686}, // 748 EarlyFragmentTests in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20112, 18), 766}, // 749 FPFastMathDefault in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18839, 10), 709}, // 750 Finalizer in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19927, 26), 758}, // 751 FloatingPointModeALTINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19953, 27), 759}, // 752 FloatingPointModeIEEEINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18827, 12), 708}, // 753 Initializer in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18656, 11), 696}, // 754 InputLines in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18667, 20), 697}, // 755 InputLinesAdjacency in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18644, 12), 695}, // 756 InputPoints in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18697, 24), 699}, // 757 InputTrianglesAdjacency in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18386, 12), 677}, // 758 Invocations in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19196, 15), 730}, // 759 IsApiEntryAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18727, 9), 701}, // 760 Isolines in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18620, 10), 693}, // 761 LocalSize in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18630, 14), 694}, // 762 LocalSizeHint in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18907, 16), 714}, // 763 LocalSizeHintId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18895, 12), 713}, // 764 LocalSizeId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19211, 21), 731}, // 765 MaxNodeRecursionAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19256, 21), 734}, // 766 MaxNumWorkgroupsAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20002, 16), 761}, // 767 MaxWorkDimINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19980, 22), 760}, // 768 MaxWorkgroupSizeINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20088, 24), 765}, // 769 MaximallyReconvergesKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20203, 22), 770}, // 770 MaximumRegistersINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20225, 24), 771}, // 771 MaximumRegistersIdINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20180, 23), 769}, // 772 NamedBarrierCountINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20300, 27), 772}, // 773 NamedMaximumRegistersINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20018, 20), 762}, // 774 NoGlobalOffsetINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18923, 34), 715}, // 775 NonCoherentColorAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18957, 34), 716}, // 776 NonCoherentDepthAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18991, 36), 717}, // 777 NonCoherentStencilAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19075, 34), 725}, // 778 NonCoherentTileAttachmentReadQCOM in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20038, 22), 763}, // 779 NumSIMDWorkitemsINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18518, 16), 685}, // 780 OriginLowerLeft in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18502, 16), 684}, // 781 OriginUpperLeft in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18764, 16), 704}, // 782 OutputLineStrip in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19487, 15), 744}, // 783 OutputLinesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19502, 14), 744}, // 784 OutputLinesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18751, 13), 703}, // 785 OutputPoints in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19516, 20), 745}, // 786 OutputPrimitivesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19536, 19), 745}, // 787 OutputPrimitivesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18780, 20), 705}, // 788 OutputTriangleStrip in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19651, 19), 748}, // 789 OutputTrianglesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19670, 18), 748}, // 790 OutputTrianglesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18736, 15), 702}, // 791 OutputVertices in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18483, 19), 683}, // 792 PixelCenterInteger in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19688, 25), 749}, // 793 PixelInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19713, 27), 750}, // 794 PixelInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18553, 10), 687}, // 795 PointMode in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19057, 18), 719}, // 796 PostDepthCoverage in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19428, 19), 741}, // 797 QuadDerivativesKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18721, 6), 700}, // 798 Quads in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20154, 26), 768}, // 799 RegisterMapInterfaceINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19447, 20), 742}, // 800 RequireFullQuadsKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9600, 16), 723}, // 801 RoundingModeRTE in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19906, 21), 757}, // 802 RoundingModeRTNINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19885, 21), 756}, // 803 RoundingModeRTPINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9616, 16), 724}, // 804 RoundingModeRTZ in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19740, 26), 751}, // 805 SampleInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19766, 28), 752}, // 806 SampleInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20060, 28), 764}, // 807 SchedulerTargetFmaxMhzINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(6236, 16), 733}, // 808 ShaderIndexAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19794, 31), 753}, // 809 ShadingRateInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19825, 33), 754}, // 810 ShadingRateInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19858, 27), 755}, // 811 SharedLocalMemorySizeINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19467, 20), 743}, // 812 SharesInputWithAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(9575, 25), 722}, // 813 SignedZeroInfNanPreserve in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18398, 13), 678}, // 814 SpacingEqual in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18411, 22), 679}, // 815 SpacingFractionalEven in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18433, 21), 680}, // 816 SpacingFractionalOdd in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19232, 24), 732}, // 817 StaticNumWorkgroupsAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19381, 25), 739}, // 818 StencilRefGreaterBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19305, 26), 736}, // 819 StencilRefGreaterFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19406, 22), 740}, // 820 StencilRefLessBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19331, 23), 737}, // 821 StencilRefLessFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19158, 23), 728}, // 822 StencilRefReplacingEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19354, 27), 738}, // 823 StencilRefUnchangedBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19277, 28), 735}, // 824 StencilRefUnchangedFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20130, 24), 767}, // 825 StreamingInterfaceINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(5343, 13), 710}, // 826 SubgroupSize in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19027, 30), 718}, // 827 SubgroupUniformControlFlowKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18849, 22), 711}, // 828 SubgroupsPerWorkgroup in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18871, 24), 712}, // 829 SubgroupsPerWorkgroupId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(19109, 20), 726}, // 830 TileShadingRateQCOM in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18687, 10), 698}, // 831 Triangles in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18800, 12), 706}, // 832 VecTypeHint in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18468, 15), 682}, // 833 VertexOrderCcw in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18454, 14), 681}, // 834 VertexOrderCw in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(18563, 4), 688}, // 835 Xfb in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(20465, 10), 784}, // 836 AnyHitKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20475, 9), 784}, // 837 AnyHitNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20526, 12), 787}, // 838 CallableKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20538, 11), 787}, // 839 CallableNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20484, 14), 785}, // 840 ClosestHitKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20498, 13), 785}, // 841 ClosestHitNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(14505, 9), 777}, // 842 Fragment in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20377, 10), 778}, // 843 GLCompute in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(4824, 9), 776}, // 844 Geometry in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20434, 16), 783}, // 845 IntersectionKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20450, 15), 783}, // 846 IntersectionNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(4591, 7), 779}, // 847 Kernel in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20557, 8), 789}, // 848 MeshEXT in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20394, 7), 781}, // 849 MeshNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20511, 8), 786}, // 850 MissKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20519, 7), 786}, // 851 MissNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20401, 17), 782}, // 852 RayGenerationKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20418, 16), 782}, // 853 RayGenerationNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20549, 8), 788}, // 854 TaskEXT in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20387, 7), 780}, // 855 TaskNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20334, 20), 774}, // 856 TessellationControl in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20354, 23), 775}, // 857 TessellationEvaluation in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20327, 7), 773}, // 858 Vertex in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(20574, 12), 791}, // 859 FlushToZero in SPV_OPERAND_TYPE_FPDENORM_MODE
  {IR(20565, 9), 790}, // 860 Preserve in SPV_OPERAND_TYPE_FPDENORM_MODE
  {IR(20586, 12), 792}, // 861 BFloat16KHR in SPV_OPERAND_TYPE_FPENCODING
  {IR(20598, 14), 793}, // 862 Float8E4M3EXT in SPV_OPERAND_TYPE_FPENCODING
  {IR(20612, 14), 794}, // 863 Float8E5M2EXT in SPV_OPERAND_TYPE_FPENCODING
  {IR(20631, 4), 796}, // 864 ALT in SPV_OPERAND_TYPE_FPOPERATION_MODE
  {IR(20626, 5), 795}, // 865 IEEE in SPV_OPERAND_TYPE_FPOPERATION_MODE
  {IR(20669, 14), 803}, // 866 AllowContract in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20683, 23), 803}, // 867 AllowContractFastINTEL in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20706, 13), 804}, // 868 AllowReassoc in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20719, 18), 804}, // 869 AllowReassocINTEL in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20653, 11), 801}, // 870 AllowRecip in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20737, 15), 805}, // 871 AllowTransform in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20664, 5), 802}, // 872 Fast in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20649, 4), 800}, // 873 NSZ in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(14101, 5), 797}, // 874 None in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20642, 7), 799}, // 875 NotInf in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20635, 7), 798}, // 876 NotNaN in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(20752, 4), 806}, // 877 RTE in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(20764, 4), 809}, // 878 RTN in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(20760, 4), 808}, // 879 RTP in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(20756, 4), 807}, // 880 RTZ in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(20800, 18), 812}, // 881 Horizontal2Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(20818, 18), 813}, // 882 Horizontal4Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(20768, 16), 810}, // 883 Vertical2Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(20784, 16), 811}, // 884 Vertical4Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(20859, 6), 818}, // 885 Const in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(20843, 11), 816}, // 886 DontInline in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(20836, 7), 815}, // 887 Inline in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(14101, 5), 814}, // 888 None in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(13279, 11), 819}, // 889 OptNoneEXT in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(13290, 13), 819}, // 890 OptNoneINTEL in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(20854, 5), 817}, // 891 Pure in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(20875, 6), 822}, // 892 ByVal in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20886, 8), 824}, // 893 NoAlias in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20894, 10), 825}, // 894 NoCapture in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20912, 12), 827}, // 895 NoReadWrite in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20904, 8), 826}, // 896 NoWrite in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20924, 20), 828}, // 897 RuntimeAlignedINTEL in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20870, 5), 821}, // 898 Sext in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20881, 5), 823}, // 899 Sret in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20865, 5), 820}, // 900 Zext in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(20979, 16), 832}, // 901 ClusteredReduce in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20965, 14), 831}, // 902 ExclusiveScan in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20951, 14), 830}, // 903 InclusiveScan in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(21042, 27), 835}, // 904 PartitionedExclusiveScanNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(21015, 27), 834}, // 905 PartitionedInclusiveScanNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20995, 20), 833}, // 906 PartitionedReduceNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(20944, 7), 829}, // 907 Reduce in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(21069, 10), 836}, // 908 NoneINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(21079, 10), 837}, // 909 ReadINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(21100, 15), 839}, // 910 ReadWriteINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(21089, 11), 838}, // 911 WriteINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(21115, 5), 841}, // 912 Bias in SPV_OPERAND_TYPE_IMAGE
  {IR(21129, 12), 844}, // 913 ConstOffset in SPV_OPERAND_TYPE_IMAGE
  {IR(21141, 13), 846}, // 914 ConstOffsets in SPV_OPERAND_TYPE_IMAGE
  {IR(21124, 5), 843}, // 915 Grad in SPV_OPERAND_TYPE_IMAGE
  {IR(21120, 4), 842}, // 916 Lod in SPV_OPERAND_TYPE_IMAGE
  {IR(21154, 19), 849}, // 917 MakeTexelAvailable in SPV_OPERAND_TYPE_IMAGE
  {IR(21173, 22), 849}, // 918 MakeTexelAvailableKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(21195, 17), 850}, // 919 MakeTexelVisible in SPV_OPERAND_TYPE_IMAGE
  {IR(21212, 20), 850}, // 920 MakeTexelVisibleKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(8375, 7), 848}, // 921 MinLod in SPV_OPERAND_TYPE_IMAGE
  {IR(21232, 16), 851}, // 922 NonPrivateTexel in SPV_OPERAND_TYPE_IMAGE
  {IR(21248, 19), 851}, // 923 NonPrivateTexelKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(14101, 5), 840}, // 924 None in SPV_OPERAND_TYPE_IMAGE
  {IR(21320, 12), 855}, // 925 Nontemporal in SPV_OPERAND_TYPE_IMAGE
  {IR(15508, 7), 845}, // 926 Offset in SPV_OPERAND_TYPE_IMAGE
  {IR(21332, 8), 856}, // 927 Offsets in SPV_OPERAND_TYPE_IMAGE
  {IR(15305, 7), 847}, // 928 Sample in SPV_OPERAND_TYPE_IMAGE
  {IR(21298, 11), 853}, // 929 SignExtend in SPV_OPERAND_TYPE_IMAGE
  {IR(21267, 14), 852}, // 930 VolatileTexel in SPV_OPERAND_TYPE_IMAGE
  {IR(21281, 17), 852}, // 931 VolatileTexelKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(21309, 11), 854}, // 932 ZeroExtend in SPV_OPERAND_TYPE_IMAGE
  {IR(13998, 6), 871}, // 933 Float in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21501, 10), 870}, // 934 HalfFloat in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21436, 12), 865}, // 935 SignedInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21448, 12), 866}, // 936 SignedInt32 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21425, 11), 864}, // 937 SignedInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21350, 11), 858}, // 938 SnormInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21340, 10), 857}, // 939 SnormInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21410, 15), 863}, // 940 UnormInt101010 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21522, 17), 873}, // 941 UnormInt101010_2 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21539, 16), 874}, // 942 UnormInt10X6EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21672, 16), 881}, // 943 UnormInt12X4EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21688, 16), 882}, // 944 UnormInt14X2EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21371, 11), 860}, // 945 UnormInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21511, 11), 872}, // 946 UnormInt24 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21595, 20), 877}, // 947 UnormInt2_101010EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21361, 10), 859}, // 948 UnormInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21396, 14), 862}, // 949 UnormShort555 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21382, 14), 861}, // 950 UnormShort565 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21615, 19), 878}, // 951 UnsignedInt10X6EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21634, 19), 879}, // 952 UnsignedInt12X4EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21653, 19), 880}, // 953 UnsignedInt14X2EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21473, 14), 868}, // 954 UnsignedInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21487, 14), 869}, // 955 UnsignedInt32 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21460, 13), 867}, // 956 UnsignedInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21555, 20), 875}, // 957 UnsignedIntRaw10EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21575, 20), 876}, // 958 UnsignedIntRaw12EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(21706, 2), 884}, // 959 A in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21807, 5), 902}, // 960 ABGR in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21728, 5), 890}, // 961 ARGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21723, 5), 889}, // 962 BGRA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21765, 6), 896}, // 963 Depth in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21771, 13), 897}, // 964 DepthStencil in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21733, 10), 891}, // 965 Intensity in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21743, 10), 892}, // 966 Luminance in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21704, 2), 883}, // 967 R in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21711, 3), 886}, // 968 RA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21708, 3), 885}, // 969 RG in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21714, 4), 887}, // 970 RGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21718, 5), 888}, // 971 RGBA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21760, 5), 895}, // 972 RGBx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21756, 4), 894}, // 973 RGx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21753, 3), 893}, // 974 Rx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21801, 6), 901}, // 975 sBGRA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21784, 5), 898}, // 976 sRGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21795, 6), 900}, // 977 sRGBA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21789, 6), 899}, // 978 sRGBx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(21812, 27), 903}, // 979 InitOnDeviceReprogramINTEL in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(21839, 23), 904}, // 980 InitOnDeviceResetINTEL in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(21862, 7), 905}, // 981 NoWait in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(21869, 11), 906}, // 982 WaitKernel in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(21880, 14), 907}, // 983 WaitWorkGroup in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(21894, 12), 909}, // 984 CmdExecTime in SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {IR(14101, 5), 908}, // 985 None in SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {IR(21906, 13), 911}, // 986 MayUsePrintf in SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {IR(14101, 5), 910}, // 987 None in SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {IR(21919, 7), 912}, // 988 Export in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(21926, 7), 913}, // 989 Import in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(21933, 12), 914}, // 990 LinkOnceODR in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(21959, 12), 916}, // 991 CachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(22011, 17), 919}, // 992 ConstCachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(21986, 25), 918}, // 993 InvalidateAfterReadINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(21971, 15), 917}, // 994 StreamingINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(21945, 14), 915}, // 995 UncachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(22151, 21), 932}, // 996 DependencyArrayINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22046, 19), 923}, // 997 DependencyInfinite in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22065, 17), 924}, // 998 DependencyLength in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22035, 11), 922}, // 999 DontUnroll in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(17375, 24), 930}, // 1000 InitiationIntervalINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22110, 18), 927}, // 1001 IterationMultiple in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22172, 18), 934}, // 1002 LoopCoalesceINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22251, 15), 938}, // 1003 LoopCountINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(17399, 20), 931}, // 1004 MaxConcurrencyINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22190, 21), 935}, // 1005 MaxInterleavingINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22096, 14), 926}, // 1006 MaxIterations in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22266, 26), 939}, // 1007 MaxReinvocationDelayINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22082, 14), 925}, // 1008 MinIterations in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22237, 14), 937}, // 1009 NoFusionINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(14101, 5), 920}, // 1010 None in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22138, 13), 929}, // 1011 PartialCount in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22128, 10), 928}, // 1012 PeelCount in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(17419, 20), 933}, // 1013 PipelineEnableINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22211, 26), 936}, // 1014 SpeculatedIterationsINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22028, 7), 921}, // 1015 Unroll in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(22575, 27), 953}, // 1016 MatrixAPackedBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22523, 26), 951}, // 1017 MatrixAPackedFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22443, 23), 947}, // 1018 MatrixAPackedInt4INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22397, 23), 945}, // 1019 MatrixAPackedInt8INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22292, 29), 941}, // 1020 MatrixASignedComponentsINTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22489, 17), 949}, // 1021 MatrixATF32INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22602, 27), 954}, // 1022 MatrixBPackedBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22549, 26), 952}, // 1023 MatrixBPackedFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22466, 23), 948}, // 1024 MatrixBPackedInt4INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22420, 23), 946}, // 1025 MatrixBPackedInt8INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22321, 29), 942}, // 1026 MatrixBSignedComponentsINTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22506, 17), 950}, // 1027 MatrixBTF32INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22350, 21), 943}, // 1028 MatrixCBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22371, 26), 944}, // 1029 MatrixResultBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(14101, 5), 940}, // 1030 None in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(22762, 20), 962}, // 1031 AliasScopeINTELMask in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22629, 8), 957}, // 1032 Aligned in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22637, 21), 959}, // 1033 MakePointerAvailable in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22658, 24), 959}, // 1034 MakePointerAvailableKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22682, 19), 960}, // 1035 MakePointerVisible in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22701, 22), 960}, // 1036 MakePointerVisibleKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22782, 17), 963}, // 1037 NoAliasINTELMask in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22723, 18), 961}, // 1038 NonPrivatePointer in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22741, 21), 961}, // 1039 NonPrivatePointerKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(14101, 5), 955}, // 1040 None in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(21320, 12), 958}, // 1041 Nontemporal in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(15339, 9), 956}, // 1042 Volatile in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(22806, 8), 965}, // 1043 GLSL450 in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22814, 7), 966}, // 1044 OpenCL in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22799, 7), 964}, // 1045 Simple in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22821, 7), 967}, // 1046 Vulkan in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22828, 10), 967}, // 1047 VulkanKHR in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(22846, 8), 969}, // 1048 Acquire in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22862, 15), 971}, // 1049 AcquireRelease in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22966, 20), 977}, // 1050 AtomicCounterMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22945, 21), 976}, // 1051 CrossWorkgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22986, 12), 978}, // 1052 ImageMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(23027, 14), 980}, // 1053 MakeAvailable in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(23041, 17), 980}, // 1054 MakeAvailableKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(23058, 12), 981}, // 1055 MakeVisible in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(23070, 15), 981}, // 1056 MakeVisibleKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(14101, 5), 968}, // 1057 None in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22998, 13), 979}, // 1058 OutputMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(23011, 16), 979}, // 1059 OutputMemoryKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22838, 8), 968}, // 1060 Relaxed in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22854, 8), 970}, // 1061 Release in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22877, 23), 972}, // 1062 SequentiallyConsistent in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22914, 15), 974}, // 1063 SubgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22900, 14), 973}, // 1064 UniformMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(15339, 9), 982}, // 1065 Volatile in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(22929, 16), 975}, // 1066 WorkgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(23085, 10), 983}, // 1067 AutoINTEL in SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS
  {IR(23100, 4), 985}, // 1068 SAT in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(23113, 8), 987}, // 1069 SAT_SYM in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(23104, 9), 986}, // 1070 SAT_ZERO in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(23095, 5), 984}, // 1071 WRAP in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(23121, 25), 988}, // 1072 PackedVectorFormat4x8Bit in SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {IR(23146, 28), 988}, // 1073 PackedVectorFormat4x8BitKHR in SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {IR(23187, 4), 991}, // 1074 RND in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(23220, 9), 995}, // 1075 RND_CONV in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(23229, 13), 996}, // 1076 RND_CONV_ODD in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(23200, 8), 993}, // 1077 RND_INF in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(23208, 12), 994}, // 1078 RND_MIN_INF in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(23191, 9), 992}, // 1079 RND_ZERO in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(23174, 4), 989}, // 1080 TRN in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(23178, 9), 990}, // 1081 TRN_ZERO in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(14101, 5), 997}, // 1082 None in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(23242, 25), 998}, // 1083 RobustnessPerComponentNV in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(23267, 23), 999}, // 1084 RobustnessPerElementNV in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(23359, 27), 1005}, // 1085 CullBackFacingTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23386, 28), 1006}, // 1086 CullFrontFacingTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23428, 16), 1008}, // 1087 CullNoOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23414, 14), 1007}, // 1088 CullOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23498, 30), 1011}, // 1089 ForceOpacityMicromap2StateEXT in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23300, 12), 1002}, // 1090 NoOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(14853, 8), 1000}, // 1091 NoneKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23290, 10), 1001}, // 1092 OpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23485, 13), 1010}, // 1093 SkipAABBsKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23461, 24), 1009}, // 1094 SkipBuiltinPrimitivesNV in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23335, 24), 1004}, // 1095 SkipClosestHitShaderKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23444, 17), 1009}, // 1096 SkipTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23312, 23), 1003}, // 1097 TerminateOnFirstHitKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(23569, 37), 1013}, // 1098 RayQueryCandidateIntersectionAABBKHR in SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {IR(23528, 41), 1012}, // 1099 RayQueryCandidateIntersectionTriangleKHR in SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {IR(23684, 42), 1016}, // 1100 RayQueryCommittedIntersectionGeneratedKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(23606, 37), 1014}, // 1101 RayQueryCommittedIntersectionNoneKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(23643, 41), 1015}, // 1102 RayQueryCommittedIntersectionTriangleKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(23726, 33), 1017}, // 1103 RayQueryCandidateIntersectionKHR in SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {IR(23759, 33), 1018}, // 1104 RayQueryCommittedIntersectionKHR in SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {IR(23804, 6), 1021}, // 1105 Clamp in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(23792, 12), 1020}, // 1106 ClampToEdge in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(14101, 5), 1019}, // 1107 None in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(23810, 7), 1022}, // 1108 Repeat in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(23817, 15), 1023}, // 1109 RepeatMirrored in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(23840, 7), 1025}, // 1110 Linear in SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {IR(23832, 8), 1024}, // 1111 Nearest in SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {IR(23905, 13), 1034}, // 1112 R11fG11fB10f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23947, 4), 1040}, // 1113 R16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23985, 9), 1045}, // 1114 R16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23918, 5), 1035}, // 1115 R16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24047, 5), 1054}, // 1116 R16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24118, 6), 1064}, // 1117 R16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23871, 5), 1029}, // 1118 R32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24025, 5), 1050}, // 1119 R32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24082, 6), 1059}, // 1120 R32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24135, 5), 1067}, // 1121 R64i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24129, 6), 1066}, // 1122 R64ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23951, 3), 1041}, // 1123 R8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23994, 8), 1046}, // 1124 R8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24052, 4), 1055}, // 1125 R8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24124, 5), 1065}, // 1126 R8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23938, 5), 1038}, // 1127 Rg16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23966, 10), 1043}, // 1128 Rg16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23899, 6), 1033}, // 1129 Rg16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24036, 6), 1052}, // 1130 Rg16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24105, 7), 1062}, // 1131 Rg16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23893, 6), 1032}, // 1132 Rg32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24030, 6), 1051}, // 1133 Rg32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24098, 7), 1061}, // 1134 Rg32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23943, 4), 1039}, // 1135 Rg8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23976, 9), 1044}, // 1136 Rg8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24042, 5), 1053}, // 1137 Rg8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24112, 6), 1063}, // 1138 Rg8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23930, 8), 1037}, // 1139 Rgb10A2 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24088, 10), 1060}, // 1140 Rgb10a2ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23923, 7), 1036}, // 1141 Rgba16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23954, 12), 1042}, // 1142 Rgba16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23863, 8), 1028}, // 1143 Rgba16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24010, 8), 1048}, // 1144 Rgba16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24065, 9), 1057}, // 1145 Rgba16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23855, 8), 1027}, // 1146 Rgba32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24002, 8), 1047}, // 1147 Rgba32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24056, 9), 1056}, // 1148 Rgba32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23876, 6), 1030}, // 1149 Rgba8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23882, 11), 1031}, // 1150 Rgba8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24018, 7), 1049}, // 1151 Rgba8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24074, 8), 1058}, // 1152 Rgba8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(23847, 8), 1026}, // 1153 Unknown in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(24140, 12), 1068}, // 1154 CrossDevice in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(24152, 7), 1069}, // 1155 Device in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(24178, 11), 1072}, // 1156 Invocation in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(24189, 12), 1073}, // 1157 QueueFamily in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(24201, 15), 1073}, // 1158 QueueFamilyKHR in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(24216, 14), 1074}, // 1159 ShaderCallKHR in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(24169, 9), 1071}, // 1160 Subgroup in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(24159, 10), 1070}, // 1161 Workgroup in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(24238, 12), 1077}, // 1162 DontFlatten in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(24230, 8), 1076}, // 1163 Flatten in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(14101, 5), 1075}, // 1164 None in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(24250, 29), 1078}, // 1165 IdentifierPossibleDuplicates in SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS
  {IR(13982, 8), 1080}, // 1166 Address in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13990, 8), 1081}, // 1167 Boolean in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13998, 6), 1082}, // 1168 Float in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14004, 7), 1083}, // 1169 Signed in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14011, 11), 1084}, // 1170 SignedChar in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14022, 9), 1085}, // 1171 Unsigned in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14031, 13), 1086}, // 1172 UnsignedChar in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(13970, 12), 1079}, // 1173 Unspecified in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(14044, 6), 1087}, // 1174 Class in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(14050, 10), 1088}, // 1175 Structure in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(14060, 6), 1089}, // 1176 Union in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(14081, 20), 1091}, // 1177 ImportedDeclaration in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(14066, 15), 1090}, // 1178 ImportedModule in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(14190, 15), 1099}, // 1179 FlagArtificial in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14205, 13), 1100}, // 1180 FlagExplicit in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14178, 12), 1098}, // 1181 FlagFwdDecl in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14268, 21), 1104}, // 1182 FlagIndirectVariable in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14161, 17), 1097}, // 1183 FlagIsDefinition in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14345, 16), 1108}, // 1184 FlagIsEnumClass in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14149, 12), 1096}, // 1185 FlagIsLocal in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14329, 16), 1107}, // 1186 FlagIsOptimized in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14122, 14), 1094}, // 1187 FlagIsPrivate in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14106, 16), 1093}, // 1188 FlagIsProtected in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14136, 13), 1095}, // 1189 FlagIsPublic in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14289, 20), 1105}, // 1190 FlagLValueReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14233, 18), 1102}, // 1191 FlagObjectPointer in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14218, 15), 1101}, // 1192 FlagPrototyped in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14309, 20), 1106}, // 1193 FlagRValueReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14251, 17), 1103}, // 1194 FlagStaticMember in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14381, 24), 1110}, // 1195 FlagTypePassByReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14361, 20), 1109}, // 1196 FlagTypePassByValue in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(24279, 26), 1111}, // 1197 FlagUnknownPhysicalLayout in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14101, 5), 1092}, // 1198 None in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(14466, 9), 1116}, // 1199 BitPiece in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14498, 7), 1120}, // 1200 Constu in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14405, 6), 1112}, // 1201 Deref in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14505, 9), 1121}, // 1202 Fragment in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14416, 6), 1114}, // 1203 Minus in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14411, 5), 1113}, // 1204 Plus in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14455, 11), 1115}, // 1205 PlusUconst in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14487, 11), 1119}, // 1206 StackValue in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14475, 5), 1117}, // 1207 Swap in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14480, 7), 1118}, // 1208 Xderef in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(14550, 11), 1125}, // 1209 AtomicType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14514, 10), 1122}, // 1210 ConstType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14537, 13), 1124}, // 1211 RestrictType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(14524, 13), 1123}, // 1212 VolatileType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(24340, 15), 1132}, // 1213 CPP_for_OpenCL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24305, 5), 1127}, // 1214 ESSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24310, 5), 1128}, // 1215 GLSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24360, 7), 1134}, // 1216 HERO_C in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24335, 5), 1131}, // 1217 HLSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24367, 5), 1135}, // 1218 NZSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24315, 9), 1129}, // 1219 OpenCL_C in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24324, 11), 1130}, // 1220 OpenCL_CPP in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24387, 5), 1139}, // 1221 Rust in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24355, 5), 1133}, // 1222 SYCL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24377, 6), 1137}, // 1223 Slang in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(23847, 8), 1126}, // 1224 Unknown in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24372, 5), 1136}, // 1225 WGSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24383, 4), 1138}, // 1226 Zig in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(24474, 14), 1150}, // 1227 AtomicCounter in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24556, 16), 1156}, // 1228 CallableDataKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24572, 15), 1156}, // 1229 CallableDataNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24870, 17), 1165}, // 1230 CodeSectionINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24421, 15), 1145}, // 1231 CrossWorkgroup in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24887, 16), 1166}, // 1232 DeviceOnlyINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24444, 9), 1147}, // 1233 Function in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24453, 8), 1148}, // 1234 Generic in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24661, 16), 1159}, // 1235 HitAttributeKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24677, 15), 1159}, // 1236 HitAttributeNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24825, 21), 1163}, // 1237 HitObjectAttributeNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24903, 14), 1167}, // 1238 HostOnlyINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24488, 6), 1151}, // 1239 Image in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24587, 24), 1157}, // 1240 IncomingCallableDataKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24611, 23), 1157}, // 1241 IncomingCallableDataNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24692, 22), 1160}, // 1242 IncomingRayPayloadKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24714, 21), 1160}, // 1243 IncomingRayPayloadNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24408, 6), 1141}, // 1244 Input in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24540, 16), 1155}, // 1245 NodePayloadAMDX in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24414, 7), 1143}, // 1246 Output in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24778, 22), 1162}, // 1247 PhysicalStorageBuffer in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24800, 25), 1162}, // 1248 PhysicalStorageBufferEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24436, 8), 1146}, // 1249 Private in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24461, 13), 1149}, // 1250 PushConstant in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24634, 14), 1158}, // 1251 RayPayloadKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24648, 13), 1158}, // 1252 RayPayloadNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24735, 22), 1161}, // 1253 ShaderRecordBufferKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24757, 21), 1161}, // 1254 ShaderRecordBufferNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24494, 14), 1152}, // 1255 StorageBuffer in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24846, 24), 1164}, // 1256 TaskPayloadWorkgroupEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24521, 19), 1154}, // 1257 TileAttachmentQCOM in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24508, 13), 1153}, // 1258 TileImageEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(15390, 8), 1142}, // 1259 Uniform in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24392, 16), 1140}, // 1260 UniformConstant in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(24159, 10), 1144}, // 1261 Workgroup in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(21971, 15), 1171}, // 1262 StreamingINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(21945, 14), 1168}, // 1263 UncachedINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(24935, 15), 1170}, // 1264 WriteBackINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(24917, 18), 1169}, // 1265 WriteThroughINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(24961, 11), 1174}, // 1266 DecodeFunc in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(14101, 5), 1172}, // 1267 None in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(24950, 11), 1173}, // 1268 TensorView in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(23792, 12), 1177}, // 1269 ClampToEdge in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(15348, 9), 1176}, // 1270 Constant in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(23810, 7), 1178}, // 1271 Repeat in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(23817, 15), 1179}, // 1272 RepeatMirrored in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(24972, 10), 1175}, // 1273 Undefined in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(25025, 24), 1183}, // 1274 MakeElementAvailableARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(25049, 22), 1184}, // 1275 MakeElementVisibleARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(25071, 21), 1185}, // 1276 NonPrivateElementARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(24982, 8), 1180}, // 1277 NoneARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(24990, 15), 1181}, // 1278 NontemporalARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(25005, 20), 1182}, // 1279 OutOfBoundsValueARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
}};

IndexRange OperandNameRangeForKind(spv_operand_type_t type) {
  switch(type) {
    case SPV_OPERAND_TYPE_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_ADDRESSING_MODEL: return IR(3, 5);
    case SPV_OPERAND_TYPE_BUILT_IN: return IR(8, 148);
    case SPV_OPERAND_TYPE_CAPABILITY: return IR(156, 300);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(456, 8);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(464, 3);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(467, 2);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS: return IR(469, 19);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION: return IR(488, 10);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(498, 4);
    case SPV_OPERAND_TYPE_COMPONENT_TYPE: return IR(502, 15);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT: return IR(517, 4);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS: return IR(521, 6);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE: return IR(527, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE: return IR(530, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT: return IR(533, 4);
    case SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(537, 8);
    case SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE: return IR(545, 3);
    case SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS: return IR(548, 16);
    case SPV_OPERAND_TYPE_DEBUG_OPERATION: return IR(564, 9);
    case SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER: return IR(573, 3);
    case SPV_OPERAND_TYPE_DECORATION: return IR(576, 151);
    case SPV_OPERAND_TYPE_DIMENSIONALITY: return IR(727, 8);
    case SPV_OPERAND_TYPE_EXECUTION_MODE: return IR(735, 101);
    case SPV_OPERAND_TYPE_EXECUTION_MODEL: return IR(836, 23);
    case SPV_OPERAND_TYPE_FPDENORM_MODE: return IR(859, 2);
    case SPV_OPERAND_TYPE_FPENCODING: return IR(861, 3);
    case SPV_OPERAND_TYPE_FPOPERATION_MODE: return IR(864, 2);
    case SPV_OPERAND_TYPE_FP_FAST_MATH_MODE: return IR(866, 11);
    case SPV_OPERAND_TYPE_FP_ROUNDING_MODE: return IR(877, 4);
    case SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE: return IR(881, 4);
    case SPV_OPERAND_TYPE_FUNCTION_CONTROL: return IR(885, 7);
    case SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE: return IR(892, 9);
    case SPV_OPERAND_TYPE_GROUP_OPERATION: return IR(901, 7);
    case SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER: return IR(908, 4);
    case SPV_OPERAND_TYPE_IMAGE: return IR(912, 21);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE: return IR(933, 26);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER: return IR(959, 20);
    case SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER: return IR(979, 2);
    case SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS: return IR(981, 3);
    case SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO: return IR(984, 2);
    case SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS: return IR(986, 2);
    case SPV_OPERAND_TYPE_LINKAGE_TYPE: return IR(988, 3);
    case SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL: return IR(991, 5);
    case SPV_OPERAND_TYPE_LOOP_CONTROL: return IR(996, 20);
    case SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(1016, 15);
    case SPV_OPERAND_TYPE_MEMORY_ACCESS: return IR(1031, 12);
    case SPV_OPERAND_TYPE_MEMORY_MODEL: return IR(1043, 5);
    case SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID: return IR(1048, 19);
    case SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS: return IR(1067, 1);
    case SPV_OPERAND_TYPE_OVERFLOW_MODES: return IR(1068, 4);
    case SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT: return IR(1072, 2);
    case SPV_OPERAND_TYPE_QUANTIZATION_MODES: return IR(1074, 8);
    case SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS: return IR(1082, 3);
    case SPV_OPERAND_TYPE_RAY_FLAGS: return IR(1085, 13);
    case SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE: return IR(1098, 2);
    case SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE: return IR(1100, 3);
    case SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION: return IR(1103, 2);
    case SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE: return IR(1105, 5);
    case SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE: return IR(1110, 2);
    case SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT: return IR(1112, 42);
    case SPV_OPERAND_TYPE_SCOPE_ID: return IR(1154, 8);
    case SPV_OPERAND_TYPE_SELECTION_CONTROL: return IR(1162, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS: return IR(1165, 1);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(1166, 8);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(1174, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(1177, 2);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS: return IR(1179, 20);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION: return IR(1199, 10);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(1209, 4);
    case SPV_OPERAND_TYPE_SOURCE_LANGUAGE: return IR(1213, 14);
    case SPV_OPERAND_TYPE_STORAGE_CLASS: return IR(1227, 35);
    case SPV_OPERAND_TYPE_STORE_CACHE_CONTROL: return IR(1262, 4);
    case SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS: return IR(1266, 3);
    case SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE: return IR(1269, 5);
    case SPV_OPERAND_TYPE_TENSOR_OPERANDS: return IR(1274, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_IMAGE: return IR(912, 21);
    case SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS: return IR(1031, 12);
    case SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT: return IR(1072, 2);
    case SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS: return IR(521, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(1016, 15);
    case SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS: return IR(1082, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_FPENCODING: return IR(861, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_TENSOR_OPERANDS: return IR(1274, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_CAPABILITY: return IR(156, 300);
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
static const std::array<InstructionDesc, 815> kInstructionDesc{{
  {spv::Op::OpNop, false, false, IR(0, 0), IR(25092, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpUndef, true, true, IR(39, 2), IR(25148, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpSourceContinued, false, false, IR(11, 1), IR(25154, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpSource, false, false, IR(41, 4), IR(25273, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpSourceExtension, false, false, IR(11, 1), IR(25280, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpName, false, false, IR(45, 2), IR(25296, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpMemberName, false, false, IR(47, 3), IR(25301, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpString, true, false, IR(50, 2), IR(25312, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpLine, false, false, IR(52, 3), IR(25319, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpExtension, false, false, IR(11, 1), IR(25324, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpExtInstImport, true, false, IR(50, 2), IR(25334, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpExtInst, true, true, IR(55, 4), IR(25394, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpMemoryModel, false, false, IR(59, 2), IR(25466, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpEntryPoint, false, false, IR(61, 4), IR(25540, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpExecutionMode, false, false, IR(65, 2), IR(25583, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpCapability, false, false, IR(67, 1), IR(25625, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpTypeVoid, true, false, IR(68, 1), IR(25636, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeBool, true, false, IR(68, 1), IR(25645, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeInt, true, false, IR(69, 3), IR(25654, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeFloat, true, false, IR(72, 3), IR(25699, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeVector, true, false, IR(75, 3), IR(25709, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeMatrix, true, false, IR(75, 3), IR(25720, 11), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeImage, true, false, IR(78, 9), IR(25844, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeSampler, true, false, IR(68, 1), IR(25854, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeSampledImage, true, false, IR(87, 2), IR(25866, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeArray, true, false, IR(89, 3), IR(25883, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeRuntimeArray, true, false, IR(87, 2), IR(25893, 17), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeStruct, true, false, IR(92, 2), IR(25910, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeOpaque, true, false, IR(50, 2), IR(25921, 11), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypePointer, true, false, IR(94, 3), IR(25963, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeFunction, true, false, IR(97, 3), IR(25975, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeEvent, true, false, IR(68, 1), IR(25988, 10), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeDeviceEvent, true, false, IR(68, 1), IR(25998, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeReserveId, true, false, IR(68, 1), IR(26014, 14), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeQueue, true, false, IR(68, 1), IR(26028, 10), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypePipe, true, false, IR(100, 2), IR(26038, 9), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeForwardPointer, false, false, IR(102, 2), IR(26047, 19), IR(0, 0), IR(202, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantTrue, true, true, IR(39, 2), IR(26066, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantFalse, true, true, IR(39, 2), IR(26079, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstant, true, true, IR(104, 3), IR(15348, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantComposite, true, true, IR(107, 3), IR(26131, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantSampler, true, true, IR(110, 5), IR(26227, 16), IR(0, 0), IR(204, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantNull, true, true, IR(39, 2), IR(26243, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantTrue, true, true, IR(39, 2), IR(26256, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantFalse, true, true, IR(39, 2), IR(26273, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstant, true, true, IR(104, 3), IR(26291, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantComposite, true, true, IR(107, 3), IR(26304, 22), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantOp, true, true, IR(115, 3), IR(26367, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpFunction, true, true, IR(118, 4), IR(24444, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionParameter, true, true, IR(39, 2), IR(26416, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionEnd, false, false, IR(0, 0), IR(26434, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionCall, true, true, IR(122, 4), IR(26446, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpVariable, true, true, IR(126, 4), IR(26459, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpImageTexelPointer, true, true, IR(130, 5), IR(26468, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpLoad, true, true, IR(135, 4), IR(26526, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpStore, false, false, IR(139, 3), IR(26531, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCopyMemory, false, false, IR(142, 4), IR(26537, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCopyMemorySized, false, false, IR(146, 5), IR(26548, 16), IR(0, 0), IR(205, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpAccessChain, true, true, IR(122, 4), IR(26564, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpInBoundsAccessChain, true, true, IR(122, 4), IR(26576, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrAccessChain, true, true, IR(151, 5), IR(26596, 15), IR(0, 0), IR(207, 4), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpArrayLength, true, true, IR(156, 4), IR(26611, 12), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpGenericPtrMemSemantics, true, true, IR(160, 3), IR(26623, 23), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpInBoundsPtrAccessChain, true, true, IR(151, 5), IR(26646, 23), IR(0, 0), IR(1, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpDecorate, false, false, IR(163, 2), IR(26697, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpMemberDecorate, false, false, IR(165, 3), IR(26706, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpDecorationGroup, true, false, IR(68, 1), IR(26721, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupDecorate, false, false, IR(168, 2), IR(26737, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupMemberDecorate, false, false, IR(170, 2), IR(26796, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpVectorExtractDynamic, true, true, IR(172, 4), IR(26816, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpVectorInsertDynamic, true, true, IR(130, 5), IR(26837, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpVectorShuffle, true, true, IR(176, 5), IR(26857, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeConstruct, true, true, IR(107, 3), IR(26871, 19), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeExtract, true, true, IR(181, 4), IR(26890, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeInsert, true, true, IR(176, 5), IR(26907, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCopyObject, true, true, IR(160, 3), IR(26923, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpTranspose, true, true, IR(160, 3), IR(26934, 10), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpSampledImage, true, true, IR(172, 4), IR(26944, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleImplicitLod, true, true, IR(185, 5), IR(26989, 23), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleExplicitLod, true, true, IR(190, 5), IR(27035, 23), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleDrefImplicitLod, true, true, IR(195, 6), IR(27058, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleDrefExplicitLod, true, true, IR(201, 6), IR(27085, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjImplicitLod, true, true, IR(185, 5), IR(27112, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjExplicitLod, true, true, IR(190, 5), IR(27139, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjDrefImplicitLod, true, true, IR(195, 6), IR(27166, 31), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjDrefExplicitLod, true, true, IR(201, 6), IR(27197, 31), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageFetch, true, true, IR(185, 5), IR(27228, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageGather, true, true, IR(195, 6), IR(27239, 12), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageDrefGather, true, true, IR(195, 6), IR(27251, 16), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageRead, true, true, IR(185, 5), IR(27267, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageWrite, false, false, IR(207, 4), IR(27277, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImage, true, true, IR(160, 3), IR(24488, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryFormat, true, true, IR(160, 3), IR(27288, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryOrder, true, true, IR(160, 3), IR(27305, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySizeLod, true, true, IR(172, 4), IR(27321, 18), IR(0, 0), IR(211, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySize, true, true, IR(160, 3), IR(27339, 15), IR(0, 0), IR(211, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryLod, true, true, IR(172, 4), IR(27354, 14), IR(0, 0), IR(213, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryLevels, true, true, IR(160, 3), IR(27368, 17), IR(0, 0), IR(211, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySamples, true, true, IR(160, 3), IR(27385, 18), IR(0, 0), IR(211, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpConvertFToU, true, true, IR(160, 3), IR(27403, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertFToS, true, true, IR(160, 3), IR(27415, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertSToF, true, true, IR(160, 3), IR(27427, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToF, true, true, IR(160, 3), IR(27439, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpUConvert, true, true, IR(160, 3), IR(27451, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSConvert, true, true, IR(160, 3), IR(27460, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpFConvert, true, true, IR(160, 3), IR(27469, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpQuantizeToF16, true, true, IR(160, 3), IR(27478, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertPtrToU, true, true, IR(160, 3), IR(27492, 14), IR(0, 0), IR(202, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSatConvertSToU, true, true, IR(160, 3), IR(27506, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSatConvertUToS, true, true, IR(160, 3), IR(27521, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToPtr, true, true, IR(160, 3), IR(27536, 14), IR(0, 0), IR(202, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpPtrCastToGeneric, true, true, IR(160, 3), IR(27550, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpGenericCastToPtr, true, true, IR(160, 3), IR(27567, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpGenericCastToPtrExplicit, true, true, IR(211, 4), IR(27584, 25), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpBitcast, true, true, IR(160, 3), IR(27609, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSNegate, true, true, IR(160, 3), IR(27617, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFNegate, true, true, IR(160, 3), IR(27625, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIAdd, true, true, IR(172, 4), IR(27633, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFAdd, true, true, IR(172, 4), IR(27638, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpISub, true, true, IR(172, 4), IR(27643, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFSub, true, true, IR(172, 4), IR(27648, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIMul, true, true, IR(172, 4), IR(27653, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFMul, true, true, IR(172, 4), IR(27658, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDiv, true, true, IR(172, 4), IR(27663, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSDiv, true, true, IR(172, 4), IR(27668, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFDiv, true, true, IR(172, 4), IR(27673, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUMod, true, true, IR(172, 4), IR(27678, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSRem, true, true, IR(172, 4), IR(27683, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSMod, true, true, IR(172, 4), IR(27688, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFRem, true, true, IR(172, 4), IR(27693, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFMod, true, true, IR(172, 4), IR(27698, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpVectorTimesScalar, true, true, IR(172, 4), IR(27703, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesScalar, true, true, IR(172, 4), IR(27721, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpVectorTimesMatrix, true, true, IR(172, 4), IR(27739, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesVector, true, true, IR(172, 4), IR(27757, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesMatrix, true, true, IR(172, 4), IR(27775, 18), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpOuterProduct, true, true, IR(172, 4), IR(27793, 13), IR(0, 0), IR(66, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpDot, true, true, IR(172, 4), IR(27806, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIAddCarry, true, true, IR(172, 4), IR(27810, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpISubBorrow, true, true, IR(172, 4), IR(27820, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUMulExtended, true, true, IR(172, 4), IR(27831, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSMulExtended, true, true, IR(172, 4), IR(27844, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpAny, true, true, IR(160, 3), IR(27857, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpAll, true, true, IR(160, 3), IR(27861, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsNan, true, true, IR(160, 3), IR(27865, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsInf, true, true, IR(160, 3), IR(27871, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsFinite, true, true, IR(160, 3), IR(27877, 9), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsNormal, true, true, IR(160, 3), IR(27886, 9), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSignBitSet, true, true, IR(160, 3), IR(27895, 11), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLessOrGreater, true, true, IR(172, 4), IR(27906, 14), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), SPV_SPIRV_VERSION_WORD(1,5), PrintingClass::kRelational_and_Logical},
  {spv::Op::OpOrdered, true, true, IR(172, 4), IR(27920, 8), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUnordered, true, true, IR(172, 4), IR(27928, 10), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalEqual, true, true, IR(172, 4), IR(27938, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalNotEqual, true, true, IR(172, 4), IR(27951, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalOr, true, true, IR(172, 4), IR(27967, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalAnd, true, true, IR(172, 4), IR(27977, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalNot, true, true, IR(160, 3), IR(27988, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSelect, true, true, IR(130, 5), IR(27999, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIEqual, true, true, IR(172, 4), IR(28006, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpINotEqual, true, true, IR(172, 4), IR(28013, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUGreaterThan, true, true, IR(172, 4), IR(28023, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSGreaterThan, true, true, IR(172, 4), IR(28036, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUGreaterThanEqual, true, true, IR(172, 4), IR(28049, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSGreaterThanEqual, true, true, IR(172, 4), IR(28067, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpULessThan, true, true, IR(172, 4), IR(28085, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSLessThan, true, true, IR(172, 4), IR(28095, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpULessThanEqual, true, true, IR(172, 4), IR(28105, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSLessThanEqual, true, true, IR(172, 4), IR(28120, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdEqual, true, true, IR(172, 4), IR(28135, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordEqual, true, true, IR(172, 4), IR(28145, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdNotEqual, true, true, IR(172, 4), IR(28157, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordNotEqual, true, true, IR(172, 4), IR(28170, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdLessThan, true, true, IR(172, 4), IR(28185, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordLessThan, true, true, IR(172, 4), IR(28198, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdGreaterThan, true, true, IR(172, 4), IR(28213, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordGreaterThan, true, true, IR(172, 4), IR(28229, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdLessThanEqual, true, true, IR(172, 4), IR(28247, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordLessThanEqual, true, true, IR(172, 4), IR(28265, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdGreaterThanEqual, true, true, IR(172, 4), IR(28285, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordGreaterThanEqual, true, true, IR(172, 4), IR(28306, 23), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpShiftRightLogical, true, true, IR(172, 4), IR(28329, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpShiftRightArithmetic, true, true, IR(172, 4), IR(28347, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpShiftLeftLogical, true, true, IR(172, 4), IR(28368, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseOr, true, true, IR(172, 4), IR(28385, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseXor, true, true, IR(172, 4), IR(28395, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseAnd, true, true, IR(172, 4), IR(28406, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpNot, true, true, IR(160, 3), IR(28417, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldInsert, true, true, IR(215, 6), IR(28421, 15), IR(0, 0), IR(214, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldSExtract, true, true, IR(130, 5), IR(28436, 17), IR(0, 0), IR(214, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldUExtract, true, true, IR(130, 5), IR(28453, 17), IR(0, 0), IR(214, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitReverse, true, true, IR(160, 3), IR(28470, 11), IR(0, 0), IR(214, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitCount, true, true, IR(160, 3), IR(28481, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpDPdx, true, true, IR(160, 3), IR(28490, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdy, true, true, IR(160, 3), IR(28495, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidth, true, true, IR(160, 3), IR(28500, 7), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdxFine, true, true, IR(160, 3), IR(28507, 9), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdyFine, true, true, IR(160, 3), IR(28516, 9), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidthFine, true, true, IR(160, 3), IR(28525, 11), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdxCoarse, true, true, IR(160, 3), IR(28536, 11), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdyCoarse, true, true, IR(160, 3), IR(28547, 11), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidthCoarse, true, true, IR(160, 3), IR(28558, 13), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpEmitVertex, false, false, IR(0, 0), IR(28571, 11), IR(0, 0), IR(69, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEndPrimitive, false, false, IR(0, 0), IR(28582, 13), IR(0, 0), IR(69, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEmitStreamVertex, false, false, IR(10, 1), IR(28595, 17), IR(0, 0), IR(113, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEndStreamPrimitive, false, false, IR(10, 1), IR(28612, 19), IR(0, 0), IR(113, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpControlBarrier, false, false, IR(221, 3), IR(28668, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpMemoryBarrier, false, false, IR(224, 2), IR(28683, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpAtomicLoad, true, true, IR(226, 5), IR(28697, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicStore, false, false, IR(231, 4), IR(28708, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicExchange, true, true, IR(235, 6), IR(28720, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicCompareExchange, true, true, IR(241, 8), IR(28735, 22), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicCompareExchangeWeak, true, true, IR(241, 8), IR(28757, 26), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), SPV_SPIRV_VERSION_WORD(1,3), PrintingClass::kAtomic},
  {spv::Op::OpAtomicIIncrement, true, true, IR(226, 5), IR(28783, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicIDecrement, true, true, IR(226, 5), IR(28800, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicIAdd, true, true, IR(235, 6), IR(28817, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicISub, true, true, IR(235, 6), IR(28828, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicSMin, true, true, IR(235, 6), IR(28839, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicUMin, true, true, IR(235, 6), IR(28850, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicSMax, true, true, IR(235, 6), IR(28861, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicUMax, true, true, IR(235, 6), IR(28872, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicAnd, true, true, IR(235, 6), IR(28883, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicOr, true, true, IR(235, 6), IR(28893, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicXor, true, true, IR(235, 6), IR(28902, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpPhi, true, true, IR(107, 3), IR(28912, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLoopMerge, false, false, IR(249, 3), IR(28946, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpSelectionMerge, false, false, IR(252, 2), IR(28991, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLabel, true, false, IR(68, 1), IR(29006, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpBranch, false, false, IR(10, 1), IR(29012, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpBranchConditional, false, false, IR(254, 4), IR(29019, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpSwitch, false, false, IR(258, 3), IR(29082, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpKill, false, false, IR(0, 0), IR(29089, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpReturn, false, false, IR(0, 0), IR(29094, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpReturnValue, false, false, IR(10, 1), IR(29101, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpUnreachable, false, false, IR(0, 0), IR(29113, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLifetimeStart, false, false, IR(261, 2), IR(29125, 14), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLifetimeStop, false, false, IR(261, 2), IR(29139, 13), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpGroupAsyncCopy, true, true, IR(263, 8), IR(29152, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupWaitEvents, false, false, IR(271, 3), IR(29167, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupAll, true, true, IR(274, 4), IR(29183, 9), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupAny, true, true, IR(274, 4), IR(29192, 9), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBroadcast, true, true, IR(278, 5), IR(29201, 15), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupIAdd, true, true, IR(283, 5), IR(29249, 10), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFAdd, true, true, IR(283, 5), IR(29259, 10), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMin, true, true, IR(283, 5), IR(29269, 10), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMin, true, true, IR(283, 5), IR(29279, 10), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMin, true, true, IR(283, 5), IR(29289, 10), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMax, true, true, IR(283, 5), IR(29299, 10), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMax, true, true, IR(283, 5), IR(29309, 10), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMax, true, true, IR(283, 5), IR(29319, 10), IR(0, 0), IR(217, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpReadPipe, true, true, IR(215, 6), IR(29329, 9), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpWritePipe, true, true, IR(215, 6), IR(29338, 10), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReservedReadPipe, true, true, IR(288, 8), IR(29348, 17), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReservedWritePipe, true, true, IR(288, 8), IR(29365, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReserveReadPipePackets, true, true, IR(215, 6), IR(29383, 23), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReserveWritePipePackets, true, true, IR(215, 6), IR(29406, 24), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCommitReadPipe, false, false, IR(296, 4), IR(29430, 15), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCommitWritePipe, false, false, IR(296, 4), IR(29445, 16), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpIsValidReserveId, true, true, IR(160, 3), IR(29461, 17), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetNumPipePackets, true, true, IR(130, 5), IR(29478, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetMaxPipePackets, true, true, IR(130, 5), IR(29496, 18), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupReserveReadPipePackets, true, true, IR(300, 7), IR(29514, 28), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupReserveWritePipePackets, true, true, IR(300, 7), IR(29542, 29), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupCommitReadPipe, false, false, IR(307, 5), IR(29571, 20), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupCommitWritePipe, false, false, IR(307, 5), IR(29591, 21), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpEnqueueMarker, true, true, IR(215, 6), IR(29612, 14), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpEnqueueKernel, true, true, IR(312, 13), IR(29626, 14), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelNDrangeSubGroupCount, true, true, IR(325, 7), IR(29640, 30), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelNDrangeMaxSubGroupSize, true, true, IR(325, 7), IR(29670, 32), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelWorkGroupSize, true, true, IR(215, 6), IR(29702, 23), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelPreferredWorkGroupSizeMultiple, true, true, IR(215, 6), IR(29725, 40), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpRetainEvent, false, false, IR(10, 1), IR(29765, 12), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpReleaseEvent, false, false, IR(10, 1), IR(29777, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpCreateUserEvent, true, true, IR(39, 2), IR(29790, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpIsValidEvent, true, true, IR(160, 3), IR(29806, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpSetUserEventStatus, false, false, IR(36, 2), IR(29819, 19), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpCaptureEventProfilingInfo, false, false, IR(33, 3), IR(29838, 26), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetDefaultQueue, true, true, IR(39, 2), IR(29864, 16), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpBuildNDRange, true, true, IR(130, 5), IR(29880, 13), IR(0, 0), IR(74, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpImageSparseSampleImplicitLod, true, true, IR(185, 5), IR(29893, 29), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleExplicitLod, true, true, IR(190, 5), IR(29922, 29), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleDrefImplicitLod, true, true, IR(195, 6), IR(29951, 33), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleDrefExplicitLod, true, true, IR(201, 6), IR(29984, 33), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjImplicitLod, true, true, IR(185, 5), IR(30017, 33), IR(0, 0), IR(218, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjExplicitLod, true, true, IR(190, 5), IR(30050, 33), IR(0, 0), IR(218, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjDrefImplicitLod, true, true, IR(195, 6), IR(30083, 37), IR(0, 0), IR(218, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjDrefExplicitLod, true, true, IR(201, 6), IR(30120, 37), IR(0, 0), IR(218, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseFetch, true, true, IR(185, 5), IR(30157, 17), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseGather, true, true, IR(195, 6), IR(30174, 18), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseDrefGather, true, true, IR(195, 6), IR(30192, 22), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseTexelsResident, true, true, IR(160, 3), IR(30214, 26), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpNoLine, false, false, IR(0, 0), IR(30240, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpAtomicFlagTestAndSet, true, true, IR(226, 5), IR(30247, 21), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicFlagClear, false, false, IR(332, 3), IR(30268, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpImageSparseRead, true, true, IR(185, 5), IR(30284, 16), IR(0, 0), IR(218, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpSizeOf, true, true, IR(160, 3), IR(30300, 7), IR(0, 0), IR(1, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpTypePipeStorage, true, false, IR(68, 1), IR(30307, 16), IR(0, 0), IR(219, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantPipeStorage, true, true, IR(335, 5), IR(30323, 20), IR(0, 0), IR(219, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCreatePipeFromPipeStorage, true, true, IR(160, 3), IR(30343, 26), IR(0, 0), IR(219, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetKernelLocalSizeForSubgroupCount, true, true, IR(325, 7), IR(30369, 35), IR(0, 0), IR(152, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelMaxNumSubgroups, true, true, IR(215, 6), IR(30404, 25), IR(0, 0), IR(152, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpTypeNamedBarrier, true, false, IR(68, 1), IR(30429, 17), IR(0, 0), IR(220, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpNamedBarrierInitialize, true, true, IR(160, 3), IR(30446, 23), IR(0, 0), IR(220, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpMemoryNamedBarrier, false, false, IR(332, 3), IR(30469, 19), IR(0, 0), IR(220, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpModuleProcessed, false, false, IR(11, 1), IR(30488, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpExecutionModeId, false, false, IR(65, 2), IR(30504, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,2), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpDecorateId, false, false, IR(163, 2), IR(30520, 11), IR(0, 0), IR(1, 0), IR(156, 1), SPV_SPIRV_VERSION_WORD(1,2), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupNonUniformElect, true, true, IR(340, 3), IR(30531, 21), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAll, true, true, IR(274, 4), IR(30552, 19), IR(0, 0), IR(221, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAny, true, true, IR(274, 4), IR(30571, 19), IR(0, 0), IR(221, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAllEqual, true, true, IR(274, 4), IR(30590, 24), IR(0, 0), IR(221, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBroadcast, true, true, IR(278, 5), IR(30614, 25), IR(0, 0), IR(222, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBroadcastFirst, true, true, IR(274, 4), IR(30639, 30), IR(0, 0), IR(222, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallot, true, true, IR(274, 4), IR(5611, 22), IR(0, 0), IR(222, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformInverseBallot, true, true, IR(274, 4), IR(30669, 29), IR(0, 0), IR(222, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotBitExtract, true, true, IR(278, 5), IR(30698, 32), IR(0, 0), IR(222, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotBitCount, true, true, IR(283, 5), IR(30730, 30), IR(0, 0), IR(222, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotFindLSB, true, true, IR(274, 4), IR(30760, 29), IR(0, 0), IR(222, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotFindMSB, true, true, IR(274, 4), IR(30789, 29), IR(0, 0), IR(222, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffle, true, true, IR(278, 5), IR(8701, 23), IR(0, 0), IR(223, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleXor, true, true, IR(278, 5), IR(30818, 26), IR(0, 0), IR(223, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleUp, true, true, IR(278, 5), IR(30844, 25), IR(0, 0), IR(224, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleDown, true, true, IR(278, 5), IR(30869, 27), IR(0, 0), IR(224, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformIAdd, true, true, IR(343, 6), IR(30896, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFAdd, true, true, IR(343, 6), IR(30916, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformIMul, true, true, IR(343, 6), IR(30936, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMul, true, true, IR(343, 6), IR(30956, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformSMin, true, true, IR(343, 6), IR(30976, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformUMin, true, true, IR(343, 6), IR(30996, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMin, true, true, IR(343, 6), IR(31016, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformSMax, true, true, IR(343, 6), IR(31036, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformUMax, true, true, IR(343, 6), IR(31056, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMax, true, true, IR(343, 6), IR(31076, 20), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseAnd, true, true, IR(343, 6), IR(31096, 26), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseOr, true, true, IR(343, 6), IR(31122, 25), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseXor, true, true, IR(343, 6), IR(31147, 26), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalAnd, true, true, IR(343, 6), IR(31173, 26), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalOr, true, true, IR(343, 6), IR(31199, 25), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalXor, true, true, IR(343, 6), IR(31224, 26), IR(0, 0), IR(225, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadBroadcast, true, true, IR(278, 5), IR(31250, 29), IR(0, 0), IR(228, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadSwap, true, true, IR(278, 5), IR(31279, 24), IR(0, 0), IR(228, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpCopyLogical, true, true, IR(160, 3), IR(31303, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpPtrEqual, true, true, IR(172, 4), IR(31315, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrNotEqual, true, true, IR(172, 4), IR(31324, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrDiff, true, true, IR(172, 4), IR(31336, 8), IR(0, 0), IR(229, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpColorAttachmentReadEXT, true, true, IR(349, 4), IR(31344, 23), IR(0, 0), IR(144, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpDepthAttachmentReadEXT, true, true, IR(353, 3), IR(31367, 23), IR(0, 0), IR(153, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpStencilAttachmentReadEXT, true, true, IR(353, 3), IR(31390, 25), IR(0, 0), IR(154, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpTypeTensorARM, true, false, IR(356, 4), IR(31415, 14), IR(0, 0), IR(201, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTensorReadARM, true, true, IR(360, 5), IR(31471, 14), IR(0, 0), IR(201, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kTensor},
  {spv::Op::OpTensorWriteARM, false, false, IR(365, 4), IR(31485, 15), IR(0, 0), IR(201, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kTensor},
  {spv::Op::OpTensorQuerySizeARM, true, true, IR(172, 4), IR(31500, 19), IR(0, 0), IR(201, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kTensor},
  {spv::Op::OpGraphConstantARM, true, true, IR(369, 3), IR(31519, 17), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphEntryPointARM, false, false, IR(372, 3), IR(31536, 19), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphARM, true, true, IR(39, 2), IR(8992, 9), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphInputARM, true, true, IR(122, 4), IR(31555, 14), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphSetOutputARM, false, false, IR(375, 3), IR(31569, 18), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphEndARM, false, false, IR(0, 0), IR(31587, 12), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpTypeGraphARM, true, false, IR(378, 3), IR(31599, 13), IR(0, 0), IR(232, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTerminateInvocation, false, false, IR(0, 0), IR(31612, 20), IR(0, 0), IR(3, 1), IR(166, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpTypeUntypedPointerKHR, true, false, IR(381, 2), IR(31632, 22), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpUntypedVariableKHR, true, true, IR(383, 5), IR(31654, 19), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedAccessChainKHR, true, true, IR(151, 5), IR(31673, 22), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedInBoundsAccessChainKHR, true, true, IR(151, 5), IR(31695, 30), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpSubgroupBallotKHR, true, true, IR(160, 3), IR(5372, 18), IR(0, 0), IR(234, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupFirstInvocationKHR, true, true, IR(160, 3), IR(31725, 27), IR(0, 0), IR(234, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpUntypedPtrAccessChainKHR, true, true, IR(388, 6), IR(31752, 25), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedInBoundsPtrAccessChainKHR, true, true, IR(388, 6), IR(31777, 33), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedArrayLengthKHR, true, true, IR(394, 5), IR(31810, 22), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedPrefetchKHR, false, false, IR(399, 5), IR(31832, 19), IR(0, 0), IR(233, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpSubgroupAllKHR, true, true, IR(160, 3), IR(31851, 15), IR(0, 0), IR(235, 1), IR(41, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupAnyKHR, true, true, IR(160, 3), IR(31866, 15), IR(0, 0), IR(235, 1), IR(41, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupAllEqualKHR, true, true, IR(160, 3), IR(31881, 20), IR(0, 0), IR(235, 1), IR(41, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupNonUniformRotateKHR, true, true, IR(404, 6), IR(13179, 25), IR(0, 0), IR(236, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupReadInvocationKHR, true, true, IR(172, 4), IR(31901, 26), IR(0, 0), IR(234, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpExtInstWithForwardRefsKHR, true, true, IR(410, 5), IR(31927, 26), IR(0, 0), IR(1, 0), IR(167, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpTraceRayKHR, false, false, IR(415, 11), IR(31953, 12), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpExecuteCallableKHR, false, false, IR(36, 2), IR(31965, 19), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToAccelerationStructureKHR, true, true, IR(160, 3), IR(31984, 35), IR(0, 0), IR(237, 2), IR(168, 2), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIgnoreIntersectionKHR, false, false, IR(0, 0), IR(32019, 22), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTerminateRayKHR, false, false, IR(0, 0), IR(32041, 16), IR(0, 0), IR(60, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSDot, true, true, IR(426, 5), IR(32104, 5), IR(93, 1), IR(239, 1), IR(121, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDot, true, true, IR(426, 5), IR(32117, 5), IR(94, 1), IR(239, 1), IR(121, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSUDot, true, true, IR(426, 5), IR(32130, 6), IR(95, 1), IR(239, 1), IR(121, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSDotAccSat, true, true, IR(431, 6), IR(32145, 11), IR(96, 1), IR(239, 1), IR(121, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDotAccSat, true, true, IR(431, 6), IR(32170, 11), IR(97, 1), IR(239, 1), IR(121, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSUDotAccSat, true, true, IR(431, 6), IR(32195, 12), IR(98, 1), IR(239, 1), IR(121, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpTypeCooperativeMatrixKHR, true, false, IR(437, 6), IR(32222, 25), IR(0, 0), IR(240, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeMatrixLoadKHR, true, true, IR(443, 6), IR(32247, 25), IR(0, 0), IR(240, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixStoreKHR, false, false, IR(449, 5), IR(32272, 26), IR(0, 0), IR(240, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixMulAddKHR, true, true, IR(454, 6), IR(32352, 27), IR(0, 0), IR(240, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpCooperativeMatrixLengthKHR, true, true, IR(160, 3), IR(32379, 27), IR(0, 0), IR(240, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpConstantCompositeReplicateEXT, true, true, IR(160, 3), IR(32406, 30), IR(0, 0), IR(241, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCompositeReplicateEXT, true, true, IR(160, 3), IR(32436, 34), IR(0, 0), IR(241, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpCompositeConstructReplicateEXT, true, true, IR(160, 3), IR(32470, 31), IR(0, 0), IR(241, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpTypeRayQueryKHR, true, false, IR(68, 1), IR(32501, 16), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpRayQueryInitializeKHR, false, false, IR(460, 8), IR(32517, 22), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryTerminateKHR, false, false, IR(10, 1), IR(32539, 21), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGenerateIntersectionKHR, false, false, IR(36, 2), IR(32560, 32), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryConfirmIntersectionKHR, false, false, IR(10, 1), IR(32592, 31), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryProceedKHR, true, true, IR(160, 3), IR(32623, 19), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTypeKHR, true, true, IR(172, 4), IR(32642, 31), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpImageSampleWeightedQCOM, true, true, IR(130, 5), IR(32673, 24), IR(0, 0), IR(242, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBoxFilterQCOM, true, true, IR(130, 5), IR(32697, 19), IR(0, 0), IR(243, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchSSDQCOM, true, true, IR(325, 7), IR(32716, 23), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchSADQCOM, true, true, IR(325, 7), IR(32739, 23), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchWindowSSDQCOM, true, true, IR(325, 7), IR(32762, 29), IR(0, 0), IR(245, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchWindowSADQCOM, true, true, IR(325, 7), IR(32791, 29), IR(0, 0), IR(245, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchGatherSSDQCOM, true, true, IR(325, 7), IR(32820, 29), IR(0, 0), IR(245, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchGatherSADQCOM, true, true, IR(325, 7), IR(32849, 29), IR(0, 0), IR(245, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpGroupIAddNonUniformAMD, true, true, IR(283, 5), IR(32878, 23), IR(0, 0), IR(217, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFAddNonUniformAMD, true, true, IR(283, 5), IR(32901, 23), IR(0, 0), IR(217, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMinNonUniformAMD, true, true, IR(283, 5), IR(32924, 23), IR(0, 0), IR(217, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMinNonUniformAMD, true, true, IR(283, 5), IR(32947, 23), IR(0, 0), IR(217, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMinNonUniformAMD, true, true, IR(283, 5), IR(32970, 23), IR(0, 0), IR(217, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMaxNonUniformAMD, true, true, IR(283, 5), IR(32993, 23), IR(0, 0), IR(217, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMaxNonUniformAMD, true, true, IR(283, 5), IR(33016, 23), IR(0, 0), IR(217, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMaxNonUniformAMD, true, true, IR(283, 5), IR(33039, 23), IR(0, 0), IR(217, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpFragmentMaskFetchAMD, true, true, IR(172, 4), IR(33062, 21), IR(0, 0), IR(246, 1), IR(57, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFragmentFetchAMD, true, true, IR(130, 5), IR(33083, 17), IR(0, 0), IR(246, 1), IR(57, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReadClockKHR, true, true, IR(340, 3), IR(33100, 13), IR(0, 0), IR(247, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAllocateNodePayloadsAMDX, true, true, IR(278, 5), IR(33113, 25), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpEnqueueNodePayloadsAMDX, false, false, IR(10, 1), IR(33138, 24), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeNodePayloadArrayAMDX, true, false, IR(87, 2), IR(33162, 25), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFinishWritingNodePayloadAMDX, true, true, IR(160, 3), IR(33187, 29), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpNodePayloadArrayLengthAMDX, true, true, IR(160, 3), IR(33216, 27), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIsNodePayloadValidAMDX, true, true, IR(172, 4), IR(33243, 23), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConstantStringAMDX, true, false, IR(50, 2), IR(33266, 19), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSpecConstantStringAMDX, true, false, IR(50, 2), IR(33285, 23), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpGroupNonUniformQuadAllKHR, true, true, IR(160, 3), IR(33308, 26), IR(0, 0), IR(161, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadAnyKHR, true, true, IR(160, 3), IR(33334, 26), IR(0, 0), IR(161, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpHitObjectRecordHitMotionNV, false, false, IR(468, 14), IR(33360, 27), IR(0, 0), IR(248, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitWithIndexMotionNV, false, false, IR(482, 13), IR(33387, 36), IR(0, 0), IR(248, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissMotionNV, false, false, IR(495, 7), IR(33423, 28), IR(0, 0), IR(248, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldToObjectNV, true, true, IR(160, 3), IR(33451, 28), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectToWorldNV, true, true, IR(160, 3), IR(33479, 28), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayDirectionNV, true, true, IR(160, 3), IR(33507, 33), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayOriginNV, true, true, IR(160, 3), IR(33540, 30), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayMotionNV, false, false, IR(482, 13), IR(33570, 26), IR(0, 0), IR(248, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderRecordBufferHandleNV, true, true, IR(160, 3), IR(33596, 39), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderBindingTableRecordIndexNV, true, true, IR(160, 3), IR(33635, 44), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordEmptyNV, false, false, IR(10, 1), IR(33679, 23), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayNV, false, false, IR(502, 12), IR(33702, 20), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitNV, false, false, IR(482, 13), IR(33722, 21), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitWithIndexNV, false, false, IR(502, 12), IR(33743, 30), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissNV, false, false, IR(514, 6), IR(33773, 22), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectExecuteShaderNV, false, false, IR(36, 2), IR(33795, 25), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetCurrentTimeNV, true, true, IR(160, 3), IR(33820, 26), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetAttributesNV, false, false, IR(36, 2), IR(33846, 25), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetHitKindNV, true, true, IR(160, 3), IR(33871, 22), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetPrimitiveIndexNV, true, true, IR(160, 3), IR(33893, 29), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetGeometryIndexNV, true, true, IR(160, 3), IR(33922, 28), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceIdNV, true, true, IR(160, 3), IR(33950, 25), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceCustomIndexNV, true, true, IR(160, 3), IR(33975, 34), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayDirectionNV, true, true, IR(160, 3), IR(34009, 32), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayOriginNV, true, true, IR(160, 3), IR(34041, 29), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMaxNV, true, true, IR(160, 3), IR(34070, 22), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMinNV, true, true, IR(160, 3), IR(34092, 22), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsEmptyNV, true, true, IR(160, 3), IR(34114, 19), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsHitNV, true, true, IR(160, 3), IR(34133, 17), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsMissNV, true, true, IR(160, 3), IR(34150, 18), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHitObjectNV, false, false, IR(520, 3), IR(34168, 29), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHintNV, false, false, IR(36, 2), IR(34197, 24), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeHitObjectNV, true, false, IR(68, 1), IR(34221, 16), IR(0, 0), IR(123, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpImageSampleFootprintNV, true, true, IR(523, 7), IR(34237, 23), IR(0, 0), IR(250, 1), IR(71, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpTypeCooperativeVectorNV, true, false, IR(89, 3), IR(34260, 24), IR(0, 0), IR(251, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeVectorMatrixMulNV, true, true, IR(530, 13), IR(34284, 29), IR(0, 0), IR(251, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorOuterProductAccumulateNV, false, false, IR(543, 7), IR(34313, 42), IR(0, 0), IR(252, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorReduceSumAccumulateNV, false, false, IR(33, 3), IR(34355, 39), IR(0, 0), IR(252, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorMatrixMulAddNV, true, true, IR(550, 16), IR(34394, 32), IR(0, 0), IR(251, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixConvertNV, true, true, IR(160, 3), IR(34426, 27), IR(0, 0), IR(253, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpEmitMeshTasksEXT, false, false, IR(566, 4), IR(34453, 17), IR(0, 0), IR(53, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSetMeshOutputsEXT, false, false, IR(36, 2), IR(34470, 18), IR(0, 0), IR(53, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpGroupNonUniformPartitionNV, true, true, IR(160, 3), IR(34488, 27), IR(0, 0), IR(182, 1), IR(74, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpWritePackedPrimitiveIndices4x8NV, false, false, IR(36, 2), IR(34515, 33), IR(0, 0), IR(50, 1), IR(18, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFetchMicroTriangleVertexPositionNV, true, true, IR(325, 7), IR(34548, 35), IR(0, 0), IR(254, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFetchMicroTriangleVertexBarycentricNV, true, true, IR(325, 7), IR(34583, 38), IR(0, 0), IR(254, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorLoadNV, true, true, IR(570, 5), IR(34621, 24), IR(0, 0), IR(251, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeVectorStoreNV, false, false, IR(575, 4), IR(34645, 25), IR(0, 0), IR(251, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpReportIntersectionKHR, true, true, IR(172, 4), IR(34670, 22), IR(99, 1), IR(54, 2), IR(24, 2), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIgnoreIntersectionNV, false, false, IR(0, 0), IR(34713, 21), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTerminateRayNV, false, false, IR(0, 0), IR(34734, 15), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceNV, false, false, IR(415, 11), IR(34749, 8), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceMotionNV, false, false, IR(502, 12), IR(34757, 14), IR(0, 0), IR(57, 1), IR(27, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceRayMotionNV, false, false, IR(502, 12), IR(34771, 17), IR(0, 0), IR(57, 1), IR(27, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTriangleVertexPositionsKHR, true, true, IR(172, 4), IR(34788, 50), IR(0, 0), IR(255, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeAccelerationStructureKHR, true, false, IR(68, 1), IR(34838, 29), IR(100, 1), IR(256, 4), IR(170, 4), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpExecuteCallableNV, false, false, IR(36, 2), IR(34895, 18), IR(0, 0), IR(56, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetClusterIdNV, true, true, IR(172, 4), IR(34913, 23), IR(0, 0), IR(64, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetClusterIdNV, true, true, IR(160, 3), IR(34936, 24), IR(0, 0), IR(64, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeCooperativeMatrixNV, true, false, IR(579, 5), IR(34960, 24), IR(0, 0), IR(260, 1), IR(78, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeMatrixLoadNV, true, true, IR(584, 6), IR(34984, 24), IR(0, 0), IR(260, 1), IR(78, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixStoreNV, false, false, IR(590, 5), IR(35008, 25), IR(0, 0), IR(260, 1), IR(78, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixMulAddNV, true, true, IR(130, 5), IR(35033, 26), IR(0, 0), IR(260, 1), IR(78, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixLengthNV, true, true, IR(160, 3), IR(35059, 26), IR(0, 0), IR(260, 1), IR(78, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpBeginInvocationInterlockEXT, false, false, IR(0, 0), IR(35085, 28), IR(0, 0), IR(261, 3), IR(79, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpEndInvocationInterlockEXT, false, false, IR(0, 0), IR(35113, 26), IR(0, 0), IR(261, 3), IR(79, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixReduceNV, true, true, IR(595, 5), IR(35182, 26), IR(0, 0), IR(264, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpCooperativeMatrixLoadTensorNV, true, true, IR(600, 7), IR(35283, 30), IR(0, 0), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixStoreTensorNV, false, false, IR(607, 5), IR(35313, 31), IR(0, 0), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixPerElementOpNV, true, true, IR(151, 5), IR(35344, 32), IR(0, 0), IR(265, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpTypeTensorLayoutNV, true, false, IR(89, 3), IR(35376, 19), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeTensorViewNV, true, false, IR(612, 4), IR(35395, 17), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCreateTensorLayoutNV, true, true, IR(39, 2), IR(35412, 21), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetDimensionNV, true, true, IR(122, 4), IR(35433, 27), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetStrideNV, true, true, IR(122, 4), IR(35460, 24), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSliceNV, true, true, IR(122, 4), IR(35484, 20), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetClampValueNV, true, true, IR(172, 4), IR(35504, 28), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCreateTensorViewNV, true, true, IR(39, 2), IR(35532, 19), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetDimensionNV, true, true, IR(122, 4), IR(35551, 25), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetStrideNV, true, true, IR(122, 4), IR(35576, 22), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpDemoteToHelperInvocation, false, false, IR(0, 0), IR(11491, 25), IR(45, 1), IR(267, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpIsHelperInvocationEXT, true, true, IR(39, 2), IR(35598, 22), IR(0, 0), IR(267, 1), IR(80, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetClipNV, true, true, IR(325, 7), IR(35620, 20), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetBlockSizeNV, true, true, IR(122, 4), IR(35640, 27), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixTransposeNV, true, true, IR(160, 3), IR(35667, 29), IR(0, 0), IR(253, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToImageNV, true, true, IR(160, 3), IR(35696, 18), IR(0, 0), IR(124, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToSamplerNV, true, true, IR(160, 3), IR(35714, 20), IR(0, 0), IR(124, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertImageToUNV, true, true, IR(160, 3), IR(35734, 18), IR(0, 0), IR(124, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertSamplerToUNV, true, true, IR(160, 3), IR(35752, 20), IR(0, 0), IR(124, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToSampledImageNV, true, true, IR(160, 3), IR(35772, 25), IR(0, 0), IR(124, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertSampledImageToUNV, true, true, IR(160, 3), IR(35797, 25), IR(0, 0), IR(124, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSamplerImageAddressingModeNV, false, false, IR(0, 1), IR(35822, 29), IR(0, 0), IR(124, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRawAccessChainNV, true, true, IR(616, 7), IR(35903, 17), IR(0, 0), IR(188, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpRayQueryGetIntersectionSpherePositionNV, true, true, IR(172, 4), IR(35920, 40), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionSphereRadiusNV, true, true, IR(172, 4), IR(35960, 38), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSPositionsNV, true, true, IR(172, 4), IR(35998, 38), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSRadiiNV, true, true, IR(172, 4), IR(36036, 34), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSHitValueNV, true, true, IR(172, 4), IR(36070, 37), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetSpherePositionNV, true, true, IR(160, 3), IR(36107, 29), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetSphereRadiusNV, true, true, IR(160, 3), IR(36136, 27), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetLSSPositionsNV, true, true, IR(160, 3), IR(36163, 27), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetLSSRadiiNV, true, true, IR(160, 3), IR(36190, 23), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsSphereHitNV, true, true, IR(160, 3), IR(36213, 23), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsLSSHitNV, true, true, IR(160, 3), IR(36236, 20), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryIsSphereHitNV, true, true, IR(172, 4), IR(36256, 22), IR(0, 0), IR(61, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryIsLSSHitNV, true, true, IR(172, 4), IR(36278, 19), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSubgroupShuffleINTEL, true, true, IR(172, 4), IR(11939, 21), IR(0, 0), IR(268, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleDownINTEL, true, true, IR(130, 5), IR(36297, 25), IR(0, 0), IR(268, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleUpINTEL, true, true, IR(130, 5), IR(36322, 23), IR(0, 0), IR(268, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleXorINTEL, true, true, IR(172, 4), IR(36345, 24), IR(0, 0), IR(268, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupBlockReadINTEL, true, true, IR(160, 3), IR(36369, 23), IR(0, 0), IR(269, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupBlockWriteINTEL, false, false, IR(36, 2), IR(36392, 24), IR(0, 0), IR(269, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageBlockReadINTEL, true, true, IR(172, 4), IR(36416, 28), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageBlockWriteINTEL, false, false, IR(33, 3), IR(36444, 29), IR(0, 0), IR(270, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageMediaBlockReadINTEL, true, true, IR(215, 6), IR(36473, 33), IR(0, 0), IR(271, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageMediaBlockWriteINTEL, false, false, IR(623, 5), IR(36506, 34), IR(0, 0), IR(271, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpUCountLeadingZerosINTEL, true, true, IR(160, 3), IR(36540, 24), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUCountTrailingZerosINTEL, true, true, IR(160, 3), IR(36564, 25), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAbsISubINTEL, true, true, IR(172, 4), IR(36589, 13), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAbsUSubINTEL, true, true, IR(172, 4), IR(36602, 13), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAddSatINTEL, true, true, IR(172, 4), IR(36615, 13), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAddSatINTEL, true, true, IR(172, 4), IR(36628, 13), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAverageINTEL, true, true, IR(172, 4), IR(36641, 14), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAverageINTEL, true, true, IR(172, 4), IR(36655, 14), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAverageRoundedINTEL, true, true, IR(172, 4), IR(36669, 21), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAverageRoundedINTEL, true, true, IR(172, 4), IR(36690, 21), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpISubSatINTEL, true, true, IR(172, 4), IR(36711, 13), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUSubSatINTEL, true, true, IR(172, 4), IR(36724, 13), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIMul32x16INTEL, true, true, IR(172, 4), IR(36737, 15), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUMul32x16INTEL, true, true, IR(172, 4), IR(36752, 15), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConstantFunctionPointerINTEL, true, true, IR(160, 3), IR(36767, 29), IR(0, 0), IR(197, 1), IR(94, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFunctionPointerCallINTEL, true, true, IR(107, 3), IR(36796, 25), IR(0, 0), IR(197, 1), IR(94, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmTargetINTEL, true, false, IR(50, 2), IR(36821, 15), IR(0, 0), IR(127, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmINTEL, true, true, IR(628, 6), IR(12157, 9), IR(0, 0), IR(127, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmCallINTEL, true, true, IR(122, 4), IR(36836, 13), IR(0, 0), IR(127, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAtomicFMinEXT, true, true, IR(235, 6), IR(36849, 14), IR(0, 0), IR(273, 4), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicFMaxEXT, true, true, IR(235, 6), IR(36863, 14), IR(0, 0), IR(273, 4), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAssumeTrueKHR, false, false, IR(10, 1), IR(36877, 14), IR(0, 0), IR(277, 1), IR(98, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpExpectKHR, true, true, IR(172, 4), IR(36891, 10), IR(0, 0), IR(277, 1), IR(98, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpDecorateString, false, false, IR(163, 2), IR(36901, 15), IR(101, 1), IR(1, 0), IR(174, 2), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpMemberDecorateString, false, false, IR(165, 3), IR(36937, 21), IR(102, 1), IR(1, 0), IR(174, 2), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpVmeImageINTEL, true, true, IR(172, 4), IR(36985, 14), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeVmeImageINTEL, true, false, IR(87, 2), IR(36999, 18), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImePayloadINTEL, true, false, IR(68, 1), IR(37017, 23), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcRefPayloadINTEL, true, false, IR(68, 1), IR(37040, 23), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcSicPayloadINTEL, true, false, IR(68, 1), IR(37063, 23), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcMcePayloadINTEL, true, false, IR(68, 1), IR(37086, 23), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcMceResultINTEL, true, false, IR(68, 1), IR(37109, 22), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultINTEL, true, false, IR(68, 1), IR(37131, 22), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultSingleReferenceStreamoutINTEL, true, false, IR(68, 1), IR(37153, 46), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultDualReferenceStreamoutINTEL, true, false, IR(68, 1), IR(37199, 44), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeSingleReferenceStreaminINTEL, true, false, IR(68, 1), IR(37243, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeDualReferenceStreaminINTEL, true, false, IR(68, 1), IR(37282, 37), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcRefResultINTEL, true, false, IR(68, 1), IR(37319, 22), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcSicResultINTEL, true, false, IR(68, 1), IR(37341, 22), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL, true, true, IR(172, 4), IR(37363, 60), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL, true, true, IR(172, 4), IR(37423, 53), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterShapePenaltyINTEL, true, true, IR(172, 4), IR(37476, 47), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterShapePenaltyINTEL, true, true, IR(172, 4), IR(37523, 40), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL, true, true, IR(172, 4), IR(37563, 51), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterDirectionPenaltyINTEL, true, true, IR(172, 4), IR(37614, 44), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL, true, true, IR(172, 4), IR(37658, 51), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL, true, true, IR(172, 4), IR(37709, 56), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL, true, true, IR(39, 2), IR(37765, 50), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL, true, true, IR(39, 2), IR(37815, 52), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL, true, true, IR(39, 2), IR(37867, 49), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetMotionVectorCostFunctionINTEL, true, true, IR(215, 6), IR(37916, 47), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL, true, true, IR(172, 4), IR(37963, 50), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL, true, true, IR(39, 2), IR(38013, 51), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL, true, true, IR(39, 2), IR(38064, 56), IR(0, 0), IR(281, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetAcOnlyHaarINTEL, true, true, IR(160, 3), IR(38120, 33), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL, true, true, IR(172, 4), IR(38153, 52), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL, true, true, IR(172, 4), IR(38205, 61), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL, true, true, IR(130, 5), IR(38266, 61), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToImePayloadINTEL, true, true, IR(160, 3), IR(38327, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToImeResultINTEL, true, true, IR(160, 3), IR(38366, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToRefPayloadINTEL, true, true, IR(160, 3), IR(38404, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToRefResultINTEL, true, true, IR(160, 3), IR(38443, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToSicPayloadINTEL, true, true, IR(160, 3), IR(38481, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToSicResultINTEL, true, true, IR(160, 3), IR(38520, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetMotionVectorsINTEL, true, true, IR(160, 3), IR(38558, 36), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterDistortionsINTEL, true, true, IR(160, 3), IR(38594, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetBestInterDistortionsINTEL, true, true, IR(160, 3), IR(38633, 43), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMajorShapeINTEL, true, true, IR(160, 3), IR(38676, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMinorShapeINTEL, true, true, IR(160, 3), IR(38714, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterDirectionsINTEL, true, true, IR(160, 3), IR(38752, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMotionVectorCountINTEL, true, true, IR(160, 3), IR(38790, 45), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterReferenceIdsINTEL, true, true, IR(160, 3), IR(38835, 40), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL, true, true, IR(130, 5), IR(38875, 62), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeInitializeINTEL, true, true, IR(130, 5), IR(38937, 30), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetSingleReferenceINTEL, true, true, IR(130, 5), IR(38967, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetDualReferenceINTEL, true, true, IR(215, 6), IR(39005, 36), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeRefWindowSizeINTEL, true, true, IR(172, 4), IR(39041, 33), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeAdjustRefOffsetINTEL, true, true, IR(215, 6), IR(39074, 35), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(39109, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetMaxMotionVectorCountINTEL, true, true, IR(172, 4), IR(39148, 43), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetUnidirectionalMixDisableINTEL, true, true, IR(160, 3), IR(39191, 47), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetEarlySearchTerminationThresholdINTEL, true, true, IR(172, 4), IR(39238, 54), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetWeightedSadINTEL, true, true, IR(172, 4), IR(39292, 34), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(39326, 47), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(39373, 45), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL, true, true, IR(215, 6), IR(39418, 55), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL, true, true, IR(325, 7), IR(39473, 53), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL, true, true, IR(130, 5), IR(39526, 56), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL, true, true, IR(215, 6), IR(39582, 54), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL, true, true, IR(215, 6), IR(39636, 58), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL, true, true, IR(325, 7), IR(39694, 56), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeConvertToMceResultINTEL, true, true, IR(160, 3), IR(39750, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetSingleReferenceStreaminINTEL, true, true, IR(160, 3), IR(39788, 46), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetDualReferenceStreaminINTEL, true, true, IR(160, 3), IR(39834, 44), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeStripSingleReferenceStreamoutINTEL, true, true, IR(160, 3), IR(39878, 49), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeStripDualReferenceStreamoutINTEL, true, true, IR(160, 3), IR(39927, 47), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL, true, true, IR(172, 4), IR(39974, 70), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL, true, true, IR(172, 4), IR(40044, 68), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL, true, true, IR(172, 4), IR(40112, 69), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL, true, true, IR(130, 5), IR(40181, 68), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL, true, true, IR(130, 5), IR(40249, 66), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL, true, true, IR(130, 5), IR(40315, 67), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetBorderReachedINTEL, true, true, IR(172, 4), IR(40382, 36), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetTruncatedSearchIndicationINTEL, true, true, IR(160, 3), IR(40418, 48), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL, true, true, IR(160, 3), IR(40466, 59), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL, true, true, IR(160, 3), IR(40525, 58), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL, true, true, IR(160, 3), IR(40583, 56), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcFmeInitializeINTEL, true, true, IR(634, 9), IR(40639, 30), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcBmeInitializeINTEL, true, true, IR(643, 10), IR(40669, 30), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(40699, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefSetBidirectionalMixDisableINTEL, true, true, IR(160, 3), IR(40738, 46), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefSetBilinearFilterEnableINTEL, true, true, IR(160, 3), IR(40784, 43), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(40827, 47), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(40874, 45), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithMultiReferenceINTEL, true, true, IR(130, 5), IR(40919, 46), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL, true, true, IR(215, 6), IR(40965, 56), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefConvertToMceResultINTEL, true, true, IR(160, 3), IR(41021, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicInitializeINTEL, true, true, IR(160, 3), IR(41059, 30), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureSkcINTEL, true, true, IR(288, 8), IR(41089, 32), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureIpeLumaINTEL, true, true, IR(643, 10), IR(41121, 36), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureIpeLumaChromaINTEL, true, true, IR(653, 13), IR(41157, 42), IR(0, 0), IR(281, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetMotionVectorMaskINTEL, true, true, IR(172, 4), IR(41199, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(41238, 39), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraLumaShapePenaltyINTEL, true, true, IR(172, 4), IR(41277, 44), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraLumaModeCostFunctionINTEL, true, true, IR(215, 6), IR(41321, 48), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraChromaModeCostFunctionINTEL, true, true, IR(172, 4), IR(41369, 50), IR(0, 0), IR(281, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetBilinearFilterEnableINTEL, true, true, IR(160, 3), IR(41419, 43), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetSkcForwardTransformEnableINTEL, true, true, IR(172, 4), IR(41462, 48), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetBlockBasedRawSkipSadINTEL, true, true, IR(172, 4), IR(41510, 43), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateIpeINTEL, true, true, IR(172, 4), IR(41553, 31), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(41584, 47), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(41631, 45), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithMultiReferenceINTEL, true, true, IR(130, 5), IR(41676, 46), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL, true, true, IR(215, 6), IR(41722, 56), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConvertToMceResultINTEL, true, true, IR(160, 3), IR(41778, 38), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetIpeLumaShapeINTEL, true, true, IR(160, 3), IR(41816, 35), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetBestIpeLumaDistortionINTEL, true, true, IR(160, 3), IR(41851, 44), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetBestIpeChromaDistortionINTEL, true, true, IR(160, 3), IR(41895, 46), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedIpeLumaModesINTEL, true, true, IR(160, 3), IR(41941, 41), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetIpeChromaModeINTEL, true, true, IR(160, 3), IR(41982, 36), IR(0, 0), IR(281, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL, true, true, IR(160, 3), IR(42018, 50), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL, true, true, IR(160, 3), IR(42068, 48), IR(0, 0), IR(279, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetInterRawSadsINTEL, true, true, IR(160, 3), IR(42116, 35), IR(0, 0), IR(278, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpVariableLengthArrayINTEL, true, true, IR(160, 3), IR(12395, 25), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSaveMemoryINTEL, true, true, IR(39, 2), IR(42151, 16), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpRestoreMemoryINTEL, false, false, IR(10, 1), IR(42167, 19), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinCosPiINTEL, true, true, IR(666, 8), IR(42186, 28), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastINTEL, true, true, IR(666, 8), IR(42214, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastFromIntINTEL, true, true, IR(666, 8), IR(42238, 31), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastToIntINTEL, true, true, IR(666, 8), IR(42269, 29), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatAddINTEL, true, true, IR(674, 10), IR(42298, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSubINTEL, true, true, IR(674, 10), IR(42321, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatMulINTEL, true, true, IR(674, 10), IR(42344, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatDivINTEL, true, true, IR(674, 10), IR(42367, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatGTINTEL, true, true, IR(684, 6), IR(42390, 22), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatGEINTEL, true, true, IR(684, 6), IR(42412, 22), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLTINTEL, true, true, IR(684, 6), IR(42434, 22), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLEINTEL, true, true, IR(684, 6), IR(42456, 22), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatEQINTEL, true, true, IR(684, 6), IR(42478, 22), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatRecipINTEL, true, true, IR(666, 8), IR(42500, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatRSqrtINTEL, true, true, IR(666, 8), IR(42525, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCbrtINTEL, true, true, IR(666, 8), IR(42550, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatHypotINTEL, true, true, IR(674, 10), IR(42574, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSqrtINTEL, true, true, IR(666, 8), IR(42599, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLogINTEL, true, true, IR(666, 8), IR(42623, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog2INTEL, true, true, IR(666, 8), IR(42646, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog10INTEL, true, true, IR(666, 8), IR(42670, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog1pINTEL, true, true, IR(666, 8), IR(42695, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExpINTEL, true, true, IR(666, 8), IR(42720, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExp2INTEL, true, true, IR(666, 8), IR(42743, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExp10INTEL, true, true, IR(666, 8), IR(42767, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExpm1INTEL, true, true, IR(666, 8), IR(42792, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinINTEL, true, true, IR(666, 8), IR(42817, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCosINTEL, true, true, IR(666, 8), IR(42840, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinCosINTEL, true, true, IR(666, 8), IR(42863, 26), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinPiINTEL, true, true, IR(666, 8), IR(42889, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCosPiINTEL, true, true, IR(666, 8), IR(42914, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatASinINTEL, true, true, IR(666, 8), IR(42939, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatASinPiINTEL, true, true, IR(666, 8), IR(42963, 26), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatACosINTEL, true, true, IR(666, 8), IR(42989, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatACosPiINTEL, true, true, IR(666, 8), IR(43013, 26), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATanINTEL, true, true, IR(666, 8), IR(43039, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATanPiINTEL, true, true, IR(666, 8), IR(43063, 26), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATan2INTEL, true, true, IR(674, 10), IR(43089, 25), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowINTEL, true, true, IR(674, 10), IR(43114, 23), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowRINTEL, true, true, IR(674, 10), IR(43137, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowNINTEL, true, true, IR(674, 10), IR(43161, 24), IR(0, 0), IR(284, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpLoopControlINTEL, false, false, IR(18, 1), IR(43185, 17), IR(0, 0), IR(285, 1), IR(105, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAliasDomainDeclINTEL, true, false, IR(690, 2), IR(43202, 21), IR(0, 0), IR(133, 1), IR(112, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAliasScopeDeclINTEL, true, false, IR(692, 3), IR(43223, 20), IR(0, 0), IR(133, 1), IR(112, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAliasScopeListDeclINTEL, true, false, IR(92, 2), IR(43243, 24), IR(0, 0), IR(133, 1), IR(112, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSqrtINTEL, true, true, IR(666, 8), IR(43267, 15), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedRecipINTEL, true, true, IR(666, 8), IR(43282, 16), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedRsqrtINTEL, true, true, IR(666, 8), IR(43298, 16), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinINTEL, true, true, IR(666, 8), IR(43314, 14), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedCosINTEL, true, true, IR(666, 8), IR(43328, 14), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinCosINTEL, true, true, IR(666, 8), IR(43342, 17), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinPiINTEL, true, true, IR(666, 8), IR(43359, 16), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedCosPiINTEL, true, true, IR(666, 8), IR(43375, 16), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinCosPiINTEL, true, true, IR(666, 8), IR(43391, 19), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedLogINTEL, true, true, IR(666, 8), IR(43410, 14), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedExpINTEL, true, true, IR(666, 8), IR(43424, 14), IR(0, 0), IR(187, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpPtrCastToCrossWorkgroupINTEL, true, true, IR(160, 3), IR(43438, 29), IR(0, 0), IR(198, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpCrossWorkgroupCastToPtrINTEL, true, true, IR(160, 3), IR(43467, 29), IR(0, 0), IR(198, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpReadPipeBlockingINTEL, true, true, IR(172, 4), IR(43496, 22), IR(0, 0), IR(286, 1), IR(119, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpWritePipeBlockingINTEL, true, true, IR(172, 4), IR(43518, 23), IR(0, 0), IR(286, 1), IR(119, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpFPGARegINTEL, true, true, IR(160, 3), IR(12954, 13), IR(0, 0), IR(287, 1), IR(120, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetRayTMinKHR, true, true, IR(160, 3), IR(43541, 22), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetRayFlagsKHR, true, true, IR(160, 3), IR(43563, 23), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTKHR, true, true, IR(172, 4), IR(43586, 28), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceCustomIndexKHR, true, true, IR(172, 4), IR(43614, 46), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceIdKHR, true, true, IR(172, 4), IR(43660, 37), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR, true, true, IR(172, 4), IR(43697, 65), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionGeometryIndexKHR, true, true, IR(172, 4), IR(43762, 40), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionPrimitiveIndexKHR, true, true, IR(172, 4), IR(43802, 41), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionBarycentricsKHR, true, true, IR(172, 4), IR(43843, 39), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionFrontFaceKHR, true, true, IR(172, 4), IR(43882, 36), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionCandidateAABBOpaqueKHR, true, true, IR(160, 3), IR(43918, 46), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectRayDirectionKHR, true, true, IR(172, 4), IR(43964, 45), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectRayOriginKHR, true, true, IR(172, 4), IR(44009, 42), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetWorldRayDirectionKHR, true, true, IR(160, 3), IR(44051, 32), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetWorldRayOriginKHR, true, true, IR(160, 3), IR(44083, 29), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectToWorldKHR, true, true, IR(172, 4), IR(44112, 40), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionWorldToObjectKHR, true, true, IR(172, 4), IR(44152, 40), IR(0, 0), IR(191, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAtomicFAddEXT, true, true, IR(235, 6), IR(44192, 14), IR(0, 0), IR(288, 4), IR(127, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpTypeBufferSurfaceINTEL, true, false, IR(100, 2), IR(44206, 23), IR(0, 0), IR(125, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeStructContinuedINTEL, false, false, IR(695, 1), IR(44229, 25), IR(0, 0), IR(292, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantCompositeContinuedINTEL, false, false, IR(695, 1), IR(44254, 32), IR(0, 0), IR(292, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCompositeContinuedINTEL, false, false, IR(695, 1), IR(44286, 36), IR(0, 0), IR(292, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpCompositeConstructContinuedINTEL, true, true, IR(107, 3), IR(44322, 33), IR(0, 0), IR(292, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpConvertFToBF16INTEL, true, true, IR(160, 3), IR(44355, 20), IR(0, 0), IR(293, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertBF16ToFINTEL, true, true, IR(160, 3), IR(44375, 20), IR(0, 0), IR(293, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpControlBarrierArriveINTEL, false, false, IR(221, 3), IR(44395, 26), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpControlBarrierWaitINTEL, false, false, IR(221, 3), IR(44421, 24), IR(0, 0), IR(294, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpArithmeticFenceEXT, true, true, IR(160, 3), IR(13386, 19), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpTaskSequenceCreateINTEL, true, true, IR(696, 7), IR(44445, 24), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceAsyncINTEL, false, false, IR(168, 2), IR(44469, 23), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceGetINTEL, true, true, IR(160, 3), IR(44492, 21), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTaskSequenceReleaseINTEL, false, false, IR(10, 1), IR(44513, 25), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeTaskSequenceINTEL, true, false, IR(68, 1), IR(44538, 22), IR(0, 0), IR(296, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpSubgroupBlockPrefetchINTEL, false, false, IR(139, 3), IR(44560, 27), IR(0, 0), IR(297, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadINTEL, false, false, IR(703, 10), IR(44587, 25), IR(0, 0), IR(107, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadTransformINTEL, false, false, IR(703, 10), IR(44612, 34), IR(0, 0), IR(298, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadTransposeINTEL, false, false, IR(703, 10), IR(44646, 34), IR(0, 0), IR(299, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockPrefetchINTEL, false, false, IR(713, 9), IR(44680, 29), IR(0, 0), IR(107, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockStoreINTEL, false, false, IR(703, 10), IR(44709, 26), IR(0, 0), IR(107, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupMatrixMultiplyAccumulateINTEL, true, true, IR(722, 7), IR(13724, 38), IR(0, 0), IR(300, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpBitwiseFunctionINTEL, true, true, IR(215, 6), IR(44797, 21), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpConditionalExtensionINTEL, false, false, IR(45, 2), IR(44818, 26), IR(0, 0), IR(108, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpConditionalEntryPointINTEL, false, false, IR(729, 5), IR(44844, 27), IR(0, 0), IR(108, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpConditionalCapabilityINTEL, false, false, IR(734, 2), IR(44871, 27), IR(0, 0), IR(108, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpSpecConstantTargetINTEL, true, true, IR(736, 4), IR(44898, 24), IR(0, 0), IR(302, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantArchitectureINTEL, true, true, IR(740, 6), IR(44922, 30), IR(0, 0), IR(302, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCapabilitiesINTEL, true, true, IR(746, 3), IR(44989, 30), IR(0, 0), IR(302, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConditionalCopyObjectINTEL, true, true, IR(107, 3), IR(45019, 27), IR(0, 0), IR(108, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpGroupIMulKHR, true, true, IR(283, 5), IR(45046, 13), IR(0, 0), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMulKHR, true, true, IR(283, 5), IR(45059, 13), IR(0, 0), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseAndKHR, true, true, IR(283, 5), IR(45072, 19), IR(0, 0), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseOrKHR, true, true, IR(283, 5), IR(45091, 18), IR(0, 0), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseXorKHR, true, true, IR(283, 5), IR(45109, 19), IR(0, 0), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalAndKHR, true, true, IR(283, 5), IR(45128, 19), IR(0, 0), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalOrKHR, true, true, IR(283, 5), IR(45147, 18), IR(0, 0), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalXorKHR, true, true, IR(283, 5), IR(45165, 19), IR(0, 0), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpRoundFToTF32INTEL, true, true, IR(160, 3), IR(45184, 18), IR(0, 0), IR(304, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpMaskedGatherINTEL, true, true, IR(749, 6), IR(45202, 18), IR(0, 0), IR(305, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpMaskedScatterINTEL, false, false, IR(755, 4), IR(45220, 19), IR(0, 0), IR(305, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpConvertHandleToImageINTEL, true, true, IR(160, 3), IR(45239, 26), IR(0, 0), IR(306, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpConvertHandleToSamplerINTEL, true, true, IR(160, 3), IR(45265, 28), IR(0, 0), IR(306, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpConvertHandleToSampledImageINTEL, true, true, IR(160, 3), IR(45293, 33), IR(0, 0), IR(306, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
}};

// Opcode strings (without the 'Op' prefix) and opcode values, ordered by name.
// The fields in order are:
//   name, either the primary name or an alias, indexing into kStrings
//   index into kInstructionDesc
static const std::array<NameIndex, 826> kInstructionNames{{
  {IR(36589, 13), 548}, // 0 AbsISubINTEL
  {IR(36602, 13), 549}, // 1 AbsUSubINTEL
  {IR(26564, 12), 58}, // 2 AccessChain
  {IR(43202, 21), 734}, // 3 AliasDomainDeclINTEL
  {IR(43223, 20), 735}, // 4 AliasScopeDeclINTEL
  {IR(43243, 24), 736}, // 5 AliasScopeListDeclINTEL
  {IR(27861, 4), 143}, // 6 All
  {IR(33113, 25), 420}, // 7 AllocateNodePayloadsAMDX
  {IR(27857, 4), 142}, // 8 Any
  {IR(42989, 24), 725}, // 9 ArbitraryFloatACosINTEL
  {IR(43013, 26), 726}, // 10 ArbitraryFloatACosPiINTEL
  {IR(42939, 24), 723}, // 11 ArbitraryFloatASinINTEL
  {IR(42963, 26), 724}, // 12 ArbitraryFloatASinPiINTEL
  {IR(43089, 25), 729}, // 13 ArbitraryFloatATan2INTEL
  {IR(43039, 24), 727}, // 14 ArbitraryFloatATanINTEL
  {IR(43063, 26), 728}, // 15 ArbitraryFloatATanPiINTEL
  {IR(42298, 23), 696}, // 16 ArbitraryFloatAddINTEL
  {IR(42238, 31), 694}, // 17 ArbitraryFloatCastFromIntINTEL
  {IR(42214, 24), 693}, // 18 ArbitraryFloatCastINTEL
  {IR(42269, 29), 695}, // 19 ArbitraryFloatCastToIntINTEL
  {IR(42550, 24), 707}, // 20 ArbitraryFloatCbrtINTEL
  {IR(42840, 23), 719}, // 21 ArbitraryFloatCosINTEL
  {IR(42914, 25), 722}, // 22 ArbitraryFloatCosPiINTEL
  {IR(42367, 23), 699}, // 23 ArbitraryFloatDivINTEL
  {IR(42478, 22), 704}, // 24 ArbitraryFloatEQINTEL
  {IR(42767, 25), 716}, // 25 ArbitraryFloatExp10INTEL
  {IR(42743, 24), 715}, // 26 ArbitraryFloatExp2INTEL
  {IR(42720, 23), 714}, // 27 ArbitraryFloatExpINTEL
  {IR(42792, 25), 717}, // 28 ArbitraryFloatExpm1INTEL
  {IR(42412, 22), 701}, // 29 ArbitraryFloatGEINTEL
  {IR(42390, 22), 700}, // 30 ArbitraryFloatGTINTEL
  {IR(42574, 25), 708}, // 31 ArbitraryFloatHypotINTEL
  {IR(42456, 22), 703}, // 32 ArbitraryFloatLEINTEL
  {IR(42434, 22), 702}, // 33 ArbitraryFloatLTINTEL
  {IR(42670, 25), 712}, // 34 ArbitraryFloatLog10INTEL
  {IR(42695, 25), 713}, // 35 ArbitraryFloatLog1pINTEL
  {IR(42646, 24), 711}, // 36 ArbitraryFloatLog2INTEL
  {IR(42623, 23), 710}, // 37 ArbitraryFloatLogINTEL
  {IR(42344, 23), 698}, // 38 ArbitraryFloatMulINTEL
  {IR(43114, 23), 730}, // 39 ArbitraryFloatPowINTEL
  {IR(43161, 24), 732}, // 40 ArbitraryFloatPowNINTEL
  {IR(43137, 24), 731}, // 41 ArbitraryFloatPowRINTEL
  {IR(42525, 25), 706}, // 42 ArbitraryFloatRSqrtINTEL
  {IR(42500, 25), 705}, // 43 ArbitraryFloatRecipINTEL
  {IR(42863, 26), 720}, // 44 ArbitraryFloatSinCosINTEL
  {IR(42186, 28), 692}, // 45 ArbitraryFloatSinCosPiINTEL
  {IR(42817, 23), 718}, // 46 ArbitraryFloatSinINTEL
  {IR(42889, 25), 721}, // 47 ArbitraryFloatSinPiINTEL
  {IR(42599, 24), 709}, // 48 ArbitraryFloatSqrtINTEL
  {IR(42321, 23), 697}, // 49 ArbitraryFloatSubINTEL
  {IR(13386, 19), 780}, // 50 ArithmeticFenceEXT
  {IR(26611, 12), 61}, // 51 ArrayLength
  {IR(36836, 13), 564}, // 52 AsmCallINTEL
  {IR(12157, 9), 563}, // 53 AsmINTEL
  {IR(36821, 15), 562}, // 54 AsmTargetINTEL
  {IR(36877, 14), 567}, // 55 AssumeTrueKHR
  {IR(28883, 10), 220}, // 56 AtomicAnd
  {IR(28735, 22), 210}, // 57 AtomicCompareExchange
  {IR(28757, 26), 211}, // 58 AtomicCompareExchangeWeak
  {IR(28720, 15), 209}, // 59 AtomicExchange
  {IR(44192, 14), 770}, // 60 AtomicFAddEXT
  {IR(36863, 14), 566}, // 61 AtomicFMaxEXT
  {IR(36849, 14), 565}, // 62 AtomicFMinEXT
  {IR(30268, 16), 292}, // 63 AtomicFlagClear
  {IR(30247, 21), 291}, // 64 AtomicFlagTestAndSet
  {IR(28817, 11), 214}, // 65 AtomicIAdd
  {IR(28800, 17), 213}, // 66 AtomicIDecrement
  {IR(28783, 17), 212}, // 67 AtomicIIncrement
  {IR(28828, 11), 215}, // 68 AtomicISub
  {IR(28697, 11), 207}, // 69 AtomicLoad
  {IR(28893, 9), 221}, // 70 AtomicOr
  {IR(28861, 11), 218}, // 71 AtomicSMax
  {IR(28839, 11), 216}, // 72 AtomicSMin
  {IR(28708, 12), 208}, // 73 AtomicStore
  {IR(28872, 11), 219}, // 74 AtomicUMax
  {IR(28850, 11), 217}, // 75 AtomicUMin
  {IR(28902, 10), 222}, // 76 AtomicXor
  {IR(35085, 28), 494}, // 77 BeginInvocationInterlockEXT
  {IR(28481, 9), 191}, // 78 BitCount
  {IR(28421, 15), 187}, // 79 BitFieldInsert
  {IR(28436, 17), 188}, // 80 BitFieldSExtract
  {IR(28453, 17), 189}, // 81 BitFieldUExtract
  {IR(28470, 11), 190}, // 82 BitReverse
  {IR(27609, 8), 114}, // 83 Bitcast
  {IR(28406, 11), 185}, // 84 BitwiseAnd
  {IR(44797, 21), 793}, // 85 BitwiseFunctionINTEL
  {IR(28385, 10), 183}, // 86 BitwiseOr
  {IR(28395, 11), 184}, // 87 BitwiseXor
  {IR(29012, 7), 227}, // 88 Branch
  {IR(29019, 18), 228}, // 89 BranchConditional
  {IR(29880, 13), 277}, // 90 BuildNDRange
  {IR(25625, 11), 15}, // 91 Capability
  {IR(29838, 26), 275}, // 92 CaptureEventProfilingInfo
  {IR(31344, 23), 344}, // 93 ColorAttachmentReadEXT
  {IR(29430, 15), 255}, // 94 CommitReadPipe
  {IR(29445, 16), 256}, // 95 CommitWritePipe
  {IR(26871, 19), 72}, // 96 CompositeConstruct
  {IR(44322, 33), 775}, // 97 CompositeConstructContinuedINTEL
  {IR(32470, 31), 393}, // 98 CompositeConstructReplicateEXT
  {IR(26890, 17), 73}, // 99 CompositeExtract
  {IR(26907, 16), 74}, // 100 CompositeInsert
  {IR(44871, 27), 796}, // 101 ConditionalCapabilityINTEL
  {IR(45019, 27), 800}, // 102 ConditionalCopyObjectINTEL
  {IR(44844, 27), 795}, // 103 ConditionalEntryPointINTEL
  {IR(44818, 26), 794}, // 104 ConditionalExtensionINTEL
  {IR(15348, 9), 39}, // 105 Constant
  {IR(26131, 18), 40}, // 106 ConstantComposite
  {IR(44254, 32), 773}, // 107 ConstantCompositeContinuedINTEL
  {IR(32406, 30), 391}, // 108 ConstantCompositeReplicateEXT
  {IR(26079, 14), 38}, // 109 ConstantFalse
  {IR(36767, 29), 560}, // 110 ConstantFunctionPointerINTEL
  {IR(26243, 13), 42}, // 111 ConstantNull
  {IR(30323, 20), 296}, // 112 ConstantPipeStorage
  {IR(26227, 16), 41}, // 113 ConstantSampler
  {IR(33266, 19), 426}, // 114 ConstantStringAMDX
  {IR(26066, 13), 37}, // 115 ConstantTrue
  {IR(28668, 15), 205}, // 116 ControlBarrier
  {IR(44395, 26), 778}, // 117 ControlBarrierArriveINTEL
  {IR(44421, 24), 779}, // 118 ControlBarrierWaitINTEL
  {IR(44375, 20), 777}, // 119 ConvertBF16ToFINTEL
  {IR(44355, 20), 776}, // 120 ConvertFToBF16INTEL
  {IR(27415, 12), 100}, // 121 ConvertFToS
  {IR(27403, 12), 99}, // 122 ConvertFToU
  {IR(45239, 26), 812}, // 123 ConvertHandleToImageINTEL
  {IR(45293, 33), 814}, // 124 ConvertHandleToSampledImageINTEL
  {IR(45265, 28), 813}, // 125 ConvertHandleToSamplerINTEL
  {IR(35734, 18), 517}, // 126 ConvertImageToUNV
  {IR(27492, 14), 107}, // 127 ConvertPtrToU
  {IR(27427, 12), 101}, // 128 ConvertSToF
  {IR(35797, 25), 520}, // 129 ConvertSampledImageToUNV
  {IR(35752, 20), 518}, // 130 ConvertSamplerToUNV
  {IR(31984, 35), 377}, // 131 ConvertUToAccelerationStructureKHR
  {IR(27439, 12), 102}, // 132 ConvertUToF
  {IR(35696, 18), 515}, // 133 ConvertUToImageNV
  {IR(27536, 14), 110}, // 134 ConvertUToPtr
  {IR(35772, 25), 519}, // 135 ConvertUToSampledImageNV
  {IR(35714, 20), 516}, // 136 ConvertUToSamplerNV
  {IR(34426, 27), 469}, // 137 CooperativeMatrixConvertNV
  {IR(32379, 27), 390}, // 138 CooperativeMatrixLengthKHR
  {IR(35059, 26), 493}, // 139 CooperativeMatrixLengthNV
  {IR(32247, 25), 387}, // 140 CooperativeMatrixLoadKHR
  {IR(34984, 24), 490}, // 141 CooperativeMatrixLoadNV
  {IR(35283, 30), 497}, // 142 CooperativeMatrixLoadTensorNV
  {IR(32352, 27), 389}, // 143 CooperativeMatrixMulAddKHR
  {IR(35033, 26), 492}, // 144 CooperativeMatrixMulAddNV
  {IR(35344, 32), 499}, // 145 CooperativeMatrixPerElementOpNV
  {IR(35182, 26), 496}, // 146 CooperativeMatrixReduceNV
  {IR(32272, 26), 388}, // 147 CooperativeMatrixStoreKHR
  {IR(35008, 25), 491}, // 148 CooperativeMatrixStoreNV
  {IR(35313, 31), 498}, // 149 CooperativeMatrixStoreTensorNV
  {IR(35667, 29), 514}, // 150 CooperativeMatrixTransposeNV
  {IR(34621, 24), 476}, // 151 CooperativeVectorLoadNV
  {IR(34394, 32), 468}, // 152 CooperativeVectorMatrixMulAddNV
  {IR(34284, 29), 465}, // 153 CooperativeVectorMatrixMulNV
  {IR(34313, 42), 466}, // 154 CooperativeVectorOuterProductAccumulateNV
  {IR(34355, 39), 467}, // 155 CooperativeVectorReduceSumAccumulateNV
  {IR(34645, 25), 477}, // 156 CooperativeVectorStoreNV
  {IR(31303, 12), 340}, // 157 CopyLogical
  {IR(26537, 11), 56}, // 158 CopyMemory
  {IR(26548, 16), 57}, // 159 CopyMemorySized
  {IR(26923, 11), 75}, // 160 CopyObject
  {IR(30343, 26), 297}, // 161 CreatePipeFromPipeStorage
  {IR(35412, 21), 502}, // 162 CreateTensorLayoutNV
  {IR(35532, 19), 507}, // 163 CreateTensorViewNV
  {IR(29790, 16), 272}, // 164 CreateUserEvent
  {IR(43467, 29), 749}, // 165 CrossWorkgroupCastToPtrINTEL
  {IR(28490, 5), 192}, // 166 DPdx
  {IR(28536, 11), 198}, // 167 DPdxCoarse
  {IR(28507, 9), 195}, // 168 DPdxFine
  {IR(28495, 5), 193}, // 169 DPdy
  {IR(28547, 11), 199}, // 170 DPdyCoarse
  {IR(28516, 9), 196}, // 171 DPdyFine
  {IR(26697, 9), 64}, // 172 Decorate
  {IR(30520, 11), 305}, // 173 DecorateId
  {IR(36901, 15), 569}, // 174 DecorateString
  {IR(36916, 21), 569}, // 175 DecorateStringGOOGLE
  {IR(26721, 16), 66}, // 176 DecorationGroup
  {IR(11491, 25), 510}, // 177 DemoteToHelperInvocation
  {IR(11516, 28), 510}, // 178 DemoteToHelperInvocationEXT
  {IR(31367, 23), 345}, // 179 DepthAttachmentReadEXT
  {IR(27806, 4), 137}, // 180 Dot
  {IR(34453, 17), 470}, // 181 EmitMeshTasksEXT
  {IR(28595, 17), 203}, // 182 EmitStreamVertex
  {IR(28571, 11), 201}, // 183 EmitVertex
  {IR(35113, 26), 495}, // 184 EndInvocationInterlockEXT
  {IR(28582, 13), 202}, // 185 EndPrimitive
  {IR(28612, 19), 204}, // 186 EndStreamPrimitive
  {IR(29626, 14), 265}, // 187 EnqueueKernel
  {IR(29612, 14), 264}, // 188 EnqueueMarker
  {IR(33138, 24), 421}, // 189 EnqueueNodePayloadsAMDX
  {IR(25540, 11), 13}, // 190 EntryPoint
  {IR(31965, 19), 376}, // 191 ExecuteCallableKHR
  {IR(34895, 18), 486}, // 192 ExecuteCallableNV
  {IR(25583, 14), 14}, // 193 ExecutionMode
  {IR(30504, 16), 304}, // 194 ExecutionModeId
  {IR(36891, 10), 568}, // 195 ExpectKHR
  {IR(25394, 8), 11}, // 196 ExtInst
  {IR(25334, 14), 10}, // 197 ExtInstImport
  {IR(31927, 26), 374}, // 198 ExtInstWithForwardRefsKHR
  {IR(25324, 10), 9}, // 199 Extension
  {IR(27638, 5), 118}, // 200 FAdd
  {IR(27469, 9), 105}, // 201 FConvert
  {IR(27673, 5), 125}, // 202 FDiv
  {IR(27698, 5), 130}, // 203 FMod
  {IR(27658, 5), 122}, // 204 FMul
  {IR(27625, 8), 116}, // 205 FNegate
  {IR(28135, 10), 168}, // 206 FOrdEqual
  {IR(28213, 16), 174}, // 207 FOrdGreaterThan
  {IR(28285, 21), 178}, // 208 FOrdGreaterThanEqual
  {IR(28185, 13), 172}, // 209 FOrdLessThan
  {IR(28247, 18), 176}, // 210 FOrdLessThanEqual
  {IR(28157, 13), 170}, // 211 FOrdNotEqual
  {IR(12954, 13), 752}, // 212 FPGARegINTEL
  {IR(27693, 5), 129}, // 213 FRem
  {IR(27648, 5), 120}, // 214 FSub
  {IR(28145, 12), 169}, // 215 FUnordEqual
  {IR(28229, 18), 175}, // 216 FUnordGreaterThan
  {IR(28306, 23), 179}, // 217 FUnordGreaterThanEqual
  {IR(28198, 15), 173}, // 218 FUnordLessThan
  {IR(28265, 20), 177}, // 219 FUnordLessThanEqual
  {IR(28170, 15), 171}, // 220 FUnordNotEqual
  {IR(34583, 38), 475}, // 221 FetchMicroTriangleVertexBarycentricNV
  {IR(34548, 35), 474}, // 222 FetchMicroTriangleVertexPositionNV
  {IR(33187, 29), 423}, // 223 FinishWritingNodePayloadAMDX
  {IR(43328, 14), 741}, // 224 FixedCosINTEL
  {IR(43375, 16), 744}, // 225 FixedCosPiINTEL
  {IR(43424, 14), 747}, // 226 FixedExpINTEL
  {IR(43410, 14), 746}, // 227 FixedLogINTEL
  {IR(43282, 16), 738}, // 228 FixedRecipINTEL
  {IR(43298, 16), 739}, // 229 FixedRsqrtINTEL
  {IR(43342, 17), 742}, // 230 FixedSinCosINTEL
  {IR(43391, 19), 745}, // 231 FixedSinCosPiINTEL
  {IR(43314, 14), 740}, // 232 FixedSinINTEL
  {IR(43359, 16), 743}, // 233 FixedSinPiINTEL
  {IR(43267, 15), 737}, // 234 FixedSqrtINTEL
  {IR(33083, 17), 418}, // 235 FragmentFetchAMD
  {IR(33062, 21), 417}, // 236 FragmentMaskFetchAMD
  {IR(24444, 9), 48}, // 237 Function
  {IR(26446, 13), 51}, // 238 FunctionCall
  {IR(26434, 12), 50}, // 239 FunctionEnd
  {IR(26416, 18), 49}, // 240 FunctionParameter
  {IR(36796, 25), 561}, // 241 FunctionPointerCallINTEL
  {IR(28500, 7), 194}, // 242 Fwidth
  {IR(28558, 13), 200}, // 243 FwidthCoarse
  {IR(28525, 11), 197}, // 244 FwidthFine
  {IR(27567, 17), 112}, // 245 GenericCastToPtr
  {IR(27584, 25), 113}, // 246 GenericCastToPtrExplicit
  {IR(26623, 23), 62}, // 247 GenericPtrMemSemantics
  {IR(29864, 16), 276}, // 248 GetDefaultQueue
  {IR(30369, 35), 298}, // 249 GetKernelLocalSizeForSubgroupCount
  {IR(30404, 25), 299}, // 250 GetKernelMaxNumSubgroups
  {IR(29670, 32), 267}, // 251 GetKernelNDrangeMaxSubGroupSize
  {IR(29640, 30), 266}, // 252 GetKernelNDrangeSubGroupCount
  {IR(29725, 40), 269}, // 253 GetKernelPreferredWorkGroupSizeMultiple
  {IR(29702, 23), 268}, // 254 GetKernelWorkGroupSize
  {IR(29496, 18), 259}, // 255 GetMaxPipePackets
  {IR(29478, 18), 258}, // 256 GetNumPipePackets
  {IR(8992, 9), 353}, // 257 GraphARM
  {IR(31519, 17), 351}, // 258 GraphConstantARM
  {IR(31587, 12), 356}, // 259 GraphEndARM
  {IR(31536, 19), 352}, // 260 GraphEntryPointARM
  {IR(31555, 14), 354}, // 261 GraphInputARM
  {IR(31569, 18), 355}, // 262 GraphSetOutputARM
  {IR(29183, 9), 238}, // 263 GroupAll
  {IR(29192, 9), 239}, // 264 GroupAny
  {IR(29152, 15), 236}, // 265 GroupAsyncCopy
  {IR(45072, 19), 803}, // 266 GroupBitwiseAndKHR
  {IR(45091, 18), 804}, // 267 GroupBitwiseOrKHR
  {IR(45109, 19), 805}, // 268 GroupBitwiseXorKHR
  {IR(29201, 15), 240}, // 269 GroupBroadcast
  {IR(29571, 20), 262}, // 270 GroupCommitReadPipe
  {IR(29591, 21), 263}, // 271 GroupCommitWritePipe
  {IR(26737, 14), 67}, // 272 GroupDecorate
  {IR(29259, 10), 242}, // 273 GroupFAdd
  {IR(32901, 23), 410}, // 274 GroupFAddNonUniformAMD
  {IR(29299, 10), 246}, // 275 GroupFMax
  {IR(32993, 23), 414}, // 276 GroupFMaxNonUniformAMD
  {IR(29269, 10), 243}, // 277 GroupFMin
  {IR(32924, 23), 411}, // 278 GroupFMinNonUniformAMD
  {IR(45059, 13), 802}, // 279 GroupFMulKHR
  {IR(29249, 10), 241}, // 280 GroupIAdd
  {IR(32878, 23), 409}, // 281 GroupIAddNonUniformAMD
  {IR(45046, 13), 801}, // 282 GroupIMulKHR
  {IR(45128, 19), 806}, // 283 GroupLogicalAndKHR
  {IR(45147, 18), 807}, // 284 GroupLogicalOrKHR
  {IR(45165, 19), 808}, // 285 GroupLogicalXorKHR
  {IR(26796, 20), 68}, // 286 GroupMemberDecorate
  {IR(30552, 19), 307}, // 287 GroupNonUniformAll
  {IR(30590, 24), 309}, // 288 GroupNonUniformAllEqual
  {IR(30571, 19), 308}, // 289 GroupNonUniformAny
  {IR(5611, 22), 312}, // 290 GroupNonUniformBallot
  {IR(30730, 30), 315}, // 291 GroupNonUniformBallotBitCount
  {IR(30698, 32), 314}, // 292 GroupNonUniformBallotBitExtract
  {IR(30760, 29), 316}, // 293 GroupNonUniformBallotFindLSB
  {IR(30789, 29), 317}, // 294 GroupNonUniformBallotFindMSB
  {IR(31096, 26), 332}, // 295 GroupNonUniformBitwiseAnd
  {IR(31122, 25), 333}, // 296 GroupNonUniformBitwiseOr
  {IR(31147, 26), 334}, // 297 GroupNonUniformBitwiseXor
  {IR(30614, 25), 310}, // 298 GroupNonUniformBroadcast
  {IR(30639, 30), 311}, // 299 GroupNonUniformBroadcastFirst
  {IR(30531, 21), 306}, // 300 GroupNonUniformElect
  {IR(30916, 20), 323}, // 301 GroupNonUniformFAdd
  {IR(31076, 20), 331}, // 302 GroupNonUniformFMax
  {IR(31016, 20), 328}, // 303 GroupNonUniformFMin
  {IR(30956, 20), 325}, // 304 GroupNonUniformFMul
  {IR(30896, 20), 322}, // 305 GroupNonUniformIAdd
  {IR(30936, 20), 324}, // 306 GroupNonUniformIMul
  {IR(30669, 29), 313}, // 307 GroupNonUniformInverseBallot
  {IR(31173, 26), 335}, // 308 GroupNonUniformLogicalAnd
  {IR(31199, 25), 336}, // 309 GroupNonUniformLogicalOr
  {IR(31224, 26), 337}, // 310 GroupNonUniformLogicalXor
  {IR(34488, 27), 472}, // 311 GroupNonUniformPartitionNV
  {IR(33308, 26), 428}, // 312 GroupNonUniformQuadAllKHR
  {IR(33334, 26), 429}, // 313 GroupNonUniformQuadAnyKHR
  {IR(31250, 29), 338}, // 314 GroupNonUniformQuadBroadcast
  {IR(31279, 24), 339}, // 315 GroupNonUniformQuadSwap
  {IR(13179, 25), 372}, // 316 GroupNonUniformRotateKHR
  {IR(31036, 20), 329}, // 317 GroupNonUniformSMax
  {IR(30976, 20), 326}, // 318 GroupNonUniformSMin
  {IR(8701, 23), 318}, // 319 GroupNonUniformShuffle
  {IR(30869, 27), 321}, // 320 GroupNonUniformShuffleDown
  {IR(30844, 25), 320}, // 321 GroupNonUniformShuffleUp
  {IR(30818, 26), 319}, // 322 GroupNonUniformShuffleXor
  {IR(31056, 20), 330}, // 323 GroupNonUniformUMax
  {IR(30996, 20), 327}, // 324 GroupNonUniformUMin
  {IR(29514, 28), 260}, // 325 GroupReserveReadPipePackets
  {IR(29542, 29), 261}, // 326 GroupReserveWritePipePackets
  {IR(29319, 10), 248}, // 327 GroupSMax
  {IR(33039, 23), 416}, // 328 GroupSMaxNonUniformAMD
  {IR(29289, 10), 245}, // 329 GroupSMin
  {IR(32970, 23), 413}, // 330 GroupSMinNonUniformAMD
  {IR(29309, 10), 247}, // 331 GroupUMax
  {IR(33016, 23), 415}, // 332 GroupUMaxNonUniformAMD
  {IR(29279, 10), 244}, // 333 GroupUMin
  {IR(32947, 23), 412}, // 334 GroupUMinNonUniformAMD
  {IR(29167, 16), 237}, // 335 GroupWaitEvents
  {IR(33795, 25), 445}, // 336 HitObjectExecuteShaderNV
  {IR(33846, 25), 447}, // 337 HitObjectGetAttributesNV
  {IR(34936, 24), 488}, // 338 HitObjectGetClusterIdNV
  {IR(33820, 26), 446}, // 339 HitObjectGetCurrentTimeNV
  {IR(33922, 28), 450}, // 340 HitObjectGetGeometryIndexNV
  {IR(33871, 22), 448}, // 341 HitObjectGetHitKindNV
  {IR(33975, 34), 452}, // 342 HitObjectGetInstanceCustomIndexNV
  {IR(33950, 25), 451}, // 343 HitObjectGetInstanceIdNV
  {IR(36163, 27), 530}, // 344 HitObjectGetLSSPositionsNV
  {IR(36190, 23), 531}, // 345 HitObjectGetLSSRadiiNV
  {IR(33507, 33), 435}, // 346 HitObjectGetObjectRayDirectionNV
  {IR(33540, 30), 436}, // 347 HitObjectGetObjectRayOriginNV
  {IR(33479, 28), 434}, // 348 HitObjectGetObjectToWorldNV
  {IR(33893, 29), 449}, // 349 HitObjectGetPrimitiveIndexNV
  {IR(34070, 22), 455}, // 350 HitObjectGetRayTMaxNV
  {IR(34092, 22), 456}, // 351 HitObjectGetRayTMinNV
  {IR(33635, 44), 439}, // 352 HitObjectGetShaderBindingTableRecordIndexNV
  {IR(33596, 39), 438}, // 353 HitObjectGetShaderRecordBufferHandleNV
  {IR(36107, 29), 528}, // 354 HitObjectGetSpherePositionNV
  {IR(36136, 27), 529}, // 355 HitObjectGetSphereRadiusNV
  {IR(34009, 32), 453}, // 356 HitObjectGetWorldRayDirectionNV
  {IR(34041, 29), 454}, // 357 HitObjectGetWorldRayOriginNV
  {IR(33451, 28), 433}, // 358 HitObjectGetWorldToObjectNV
  {IR(34114, 19), 457}, // 359 HitObjectIsEmptyNV
  {IR(34133, 17), 458}, // 360 HitObjectIsHitNV
  {IR(36236, 20), 533}, // 361 HitObjectIsLSSHitNV
  {IR(34150, 18), 459}, // 362 HitObjectIsMissNV
  {IR(36213, 23), 532}, // 363 HitObjectIsSphereHitNV
  {IR(33679, 23), 440}, // 364 HitObjectRecordEmptyNV
  {IR(33360, 27), 430}, // 365 HitObjectRecordHitMotionNV
  {IR(33722, 21), 442}, // 366 HitObjectRecordHitNV
  {IR(33387, 36), 431}, // 367 HitObjectRecordHitWithIndexMotionNV
  {IR(33743, 30), 443}, // 368 HitObjectRecordHitWithIndexNV
  {IR(33423, 28), 432}, // 369 HitObjectRecordMissMotionNV
  {IR(33773, 22), 444}, // 370 HitObjectRecordMissNV
  {IR(33570, 26), 437}, // 371 HitObjectTraceRayMotionNV
  {IR(33702, 20), 441}, // 372 HitObjectTraceRayNV
  {IR(27633, 5), 117}, // 373 IAdd
  {IR(27810, 10), 138}, // 374 IAddCarry
  {IR(36615, 13), 550}, // 375 IAddSatINTEL
  {IR(36641, 14), 552}, // 376 IAverageINTEL
  {IR(36669, 21), 554}, // 377 IAverageRoundedINTEL
  {IR(28006, 7), 158}, // 378 IEqual
  {IR(27653, 5), 121}, // 379 IMul
  {IR(36737, 15), 558}, // 380 IMul32x16INTEL
  {IR(28013, 10), 159}, // 381 INotEqual
  {IR(27643, 5), 119}, // 382 ISub
  {IR(27820, 11), 139}, // 383 ISubBorrow
  {IR(36711, 13), 556}, // 384 ISubSatINTEL
  {IR(32019, 22), 378}, // 385 IgnoreIntersectionKHR
  {IR(34713, 21), 479}, // 386 IgnoreIntersectionNV
  {IR(24488, 6), 91}, // 387 Image
  {IR(32849, 29), 408}, // 388 ImageBlockMatchGatherSADQCOM
  {IR(32820, 29), 407}, // 389 ImageBlockMatchGatherSSDQCOM
  {IR(32739, 23), 404}, // 390 ImageBlockMatchSADQCOM
  {IR(32716, 23), 403}, // 391 ImageBlockMatchSSDQCOM
  {IR(32791, 29), 406}, // 392 ImageBlockMatchWindowSADQCOM
  {IR(32762, 29), 405}, // 393 ImageBlockMatchWindowSSDQCOM
  {IR(32697, 19), 402}, // 394 ImageBoxFilterQCOM
  {IR(27251, 16), 88}, // 395 ImageDrefGather
  {IR(27228, 11), 86}, // 396 ImageFetch
  {IR(27239, 12), 87}, // 397 ImageGather
  {IR(27288, 17), 92}, // 398 ImageQueryFormat
  {IR(27368, 17), 97}, // 399 ImageQueryLevels
  {IR(27354, 14), 96}, // 400 ImageQueryLod
  {IR(27305, 16), 93}, // 401 ImageQueryOrder
  {IR(27385, 18), 98}, // 402 ImageQuerySamples
  {IR(27339, 15), 95}, // 403 ImageQuerySize
  {IR(27321, 18), 94}, // 404 ImageQuerySizeLod
  {IR(27267, 10), 89}, // 405 ImageRead
  {IR(27085, 27), 81}, // 406 ImageSampleDrefExplicitLod
  {IR(27058, 27), 80}, // 407 ImageSampleDrefImplicitLod
  {IR(27035, 23), 79}, // 408 ImageSampleExplicitLod
  {IR(34237, 23), 463}, // 409 ImageSampleFootprintNV
  {IR(26989, 23), 78}, // 410 ImageSampleImplicitLod
  {IR(27197, 31), 85}, // 411 ImageSampleProjDrefExplicitLod
  {IR(27166, 31), 84}, // 412 ImageSampleProjDrefImplicitLod
  {IR(27139, 27), 83}, // 413 ImageSampleProjExplicitLod
  {IR(27112, 27), 82}, // 414 ImageSampleProjImplicitLod
  {IR(32673, 24), 401}, // 415 ImageSampleWeightedQCOM
  {IR(30192, 22), 288}, // 416 ImageSparseDrefGather
  {IR(30157, 17), 286}, // 417 ImageSparseFetch
  {IR(30174, 18), 287}, // 418 ImageSparseGather
  {IR(30284, 16), 293}, // 419 ImageSparseRead
  {IR(29984, 33), 281}, // 420 ImageSparseSampleDrefExplicitLod
  {IR(29951, 33), 280}, // 421 ImageSparseSampleDrefImplicitLod
  {IR(29922, 29), 279}, // 422 ImageSparseSampleExplicitLod
  {IR(29893, 29), 278}, // 423 ImageSparseSampleImplicitLod
  {IR(30120, 37), 285}, // 424 ImageSparseSampleProjDrefExplicitLod
  {IR(30083, 37), 284}, // 425 ImageSparseSampleProjDrefImplicitLod
  {IR(30050, 33), 283}, // 426 ImageSparseSampleProjExplicitLod
  {IR(30017, 33), 282}, // 427 ImageSparseSampleProjImplicitLod
  {IR(30214, 26), 289}, // 428 ImageSparseTexelsResident
  {IR(26468, 18), 53}, // 429 ImageTexelPointer
  {IR(27277, 11), 90}, // 430 ImageWrite
  {IR(26576, 20), 59}, // 431 InBoundsAccessChain
  {IR(26646, 23), 63}, // 432 InBoundsPtrAccessChain
  {IR(27877, 9), 146}, // 433 IsFinite
  {IR(35598, 22), 511}, // 434 IsHelperInvocationEXT
  {IR(27871, 6), 145}, // 435 IsInf
  {IR(27865, 6), 144}, // 436 IsNan
  {IR(33243, 23), 425}, // 437 IsNodePayloadValidAMDX
  {IR(27886, 9), 147}, // 438 IsNormal
  {IR(29806, 13), 273}, // 439 IsValidEvent
  {IR(29461, 17), 257}, // 440 IsValidReserveId
  {IR(29089, 5), 230}, // 441 Kill
  {IR(29006, 6), 226}, // 442 Label
  {IR(27906, 14), 149}, // 443 LessOrGreater
  {IR(29125, 14), 234}, // 444 LifetimeStart
  {IR(29139, 13), 235}, // 445 LifetimeStop
  {IR(25319, 5), 8}, // 446 Line
  {IR(26526, 5), 54}, // 447 Load
  {IR(27977, 11), 155}, // 448 LogicalAnd
  {IR(27938, 13), 152}, // 449 LogicalEqual
  {IR(27988, 11), 156}, // 450 LogicalNot
  {IR(27951, 16), 153}, // 451 LogicalNotEqual
  {IR(27967, 10), 154}, // 452 LogicalOr
  {IR(43185, 17), 733}, // 453 LoopControlINTEL
  {IR(28946, 10), 224}, // 454 LoopMerge
  {IR(45202, 18), 810}, // 455 MaskedGatherINTEL
  {IR(45220, 19), 811}, // 456 MaskedScatterINTEL
  {IR(27775, 18), 135}, // 457 MatrixTimesMatrix
  {IR(27721, 18), 132}, // 458 MatrixTimesScalar
  {IR(27757, 18), 134}, // 459 MatrixTimesVector
  {IR(26706, 15), 65}, // 460 MemberDecorate
  {IR(36937, 21), 570}, // 461 MemberDecorateString
  {IR(36958, 27), 570}, // 462 MemberDecorateStringGOOGLE
  {IR(25301, 11), 6}, // 463 MemberName
  {IR(28683, 14), 206}, // 464 MemoryBarrier
  {IR(25466, 12), 12}, // 465 MemoryModel
  {IR(30469, 19), 302}, // 466 MemoryNamedBarrier
  {IR(30488, 16), 303}, // 467 ModuleProcessed
  {IR(25296, 5), 5}, // 468 Name
  {IR(30446, 23), 301}, // 469 NamedBarrierInitialize
  {IR(30240, 7), 290}, // 470 NoLine
  {IR(33216, 27), 424}, // 471 NodePayloadArrayLengthAMDX
  {IR(25092, 4), 0}, // 472 Nop
  {IR(28417, 4), 186}, // 473 Not
  {IR(27920, 8), 150}, // 474 Ordered
  {IR(27793, 13), 136}, // 475 OuterProduct
  {IR(28912, 4), 223}, // 476 Phi
  {IR(26596, 15), 60}, // 477 PtrAccessChain
  {IR(43438, 29), 748}, // 478 PtrCastToCrossWorkgroupINTEL
  {IR(27550, 17), 111}, // 479 PtrCastToGeneric
  {IR(31336, 8), 343}, // 480 PtrDiff
  {IR(31315, 9), 341}, // 481 PtrEqual
  {IR(31324, 12), 342}, // 482 PtrNotEqual
  {IR(27478, 14), 106}, // 483 QuantizeToF16
  {IR(35903, 17), 522}, // 484 RawAccessChainNV
  {IR(32592, 31), 398}, // 485 RayQueryConfirmIntersectionKHR
  {IR(32560, 32), 397}, // 486 RayQueryGenerateIntersectionKHR
  {IR(34913, 23), 487}, // 487 RayQueryGetClusterIdNV
  {IR(43843, 39), 761}, // 488 RayQueryGetIntersectionBarycentricsKHR
  {IR(43918, 46), 763}, // 489 RayQueryGetIntersectionCandidateAABBOpaqueKHR
  {IR(43882, 36), 762}, // 490 RayQueryGetIntersectionFrontFaceKHR
  {IR(43762, 40), 759}, // 491 RayQueryGetIntersectionGeometryIndexKHR
  {IR(43614, 46), 756}, // 492 RayQueryGetIntersectionInstanceCustomIndexKHR
  {IR(43660, 37), 757}, // 493 RayQueryGetIntersectionInstanceIdKHR
  {IR(43697, 65), 758}, // 494 RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR
  {IR(36070, 37), 527}, // 495 RayQueryGetIntersectionLSSHitValueNV
  {IR(35998, 38), 525}, // 496 RayQueryGetIntersectionLSSPositionsNV
  {IR(36036, 34), 526}, // 497 RayQueryGetIntersectionLSSRadiiNV
  {IR(43964, 45), 764}, // 498 RayQueryGetIntersectionObjectRayDirectionKHR
  {IR(44009, 42), 765}, // 499 RayQueryGetIntersectionObjectRayOriginKHR
  {IR(44112, 40), 768}, // 500 RayQueryGetIntersectionObjectToWorldKHR
  {IR(43802, 41), 760}, // 501 RayQueryGetIntersectionPrimitiveIndexKHR
  {IR(35920, 40), 523}, // 502 RayQueryGetIntersectionSpherePositionNV
  {IR(35960, 38), 524}, // 503 RayQueryGetIntersectionSphereRadiusNV
  {IR(43586, 28), 755}, // 504 RayQueryGetIntersectionTKHR
  {IR(34788, 50), 484}, // 505 RayQueryGetIntersectionTriangleVertexPositionsKHR
  {IR(32642, 31), 400}, // 506 RayQueryGetIntersectionTypeKHR
  {IR(44152, 40), 769}, // 507 RayQueryGetIntersectionWorldToObjectKHR
  {IR(43563, 23), 754}, // 508 RayQueryGetRayFlagsKHR
  {IR(43541, 22), 753}, // 509 RayQueryGetRayTMinKHR
  {IR(44051, 32), 766}, // 510 RayQueryGetWorldRayDirectionKHR
  {IR(44083, 29), 767}, // 511 RayQueryGetWorldRayOriginKHR
  {IR(32517, 22), 395}, // 512 RayQueryInitializeKHR
  {IR(36278, 19), 535}, // 513 RayQueryIsLSSHitNV
  {IR(36256, 22), 534}, // 514 RayQueryIsSphereHitNV
  {IR(32623, 19), 399}, // 515 RayQueryProceedKHR
  {IR(32539, 21), 396}, // 516 RayQueryTerminateKHR
  {IR(33100, 13), 419}, // 517 ReadClockKHR
  {IR(29329, 9), 249}, // 518 ReadPipe
  {IR(43496, 22), 750}, // 519 ReadPipeBlockingINTEL
  {IR(29777, 13), 271}, // 520 ReleaseEvent
  {IR(34197, 24), 461}, // 521 ReorderThreadWithHintNV
  {IR(34168, 29), 460}, // 522 ReorderThreadWithHitObjectNV
  {IR(34670, 22), 478}, // 523 ReportIntersectionKHR
  {IR(34692, 21), 478}, // 524 ReportIntersectionNV
  {IR(29383, 23), 253}, // 525 ReserveReadPipePackets
  {IR(29406, 24), 254}, // 526 ReserveWritePipePackets
  {IR(29348, 17), 251}, // 527 ReservedReadPipe
  {IR(29365, 18), 252}, // 528 ReservedWritePipe
  {IR(42167, 19), 691}, // 529 RestoreMemoryINTEL
  {IR(29765, 12), 270}, // 530 RetainEvent
  {IR(29094, 7), 231}, // 531 Return
  {IR(29101, 12), 232}, // 532 ReturnValue
  {IR(45184, 18), 809}, // 533 RoundFToTF32INTEL
  {IR(27460, 9), 104}, // 534 SConvert
  {IR(27668, 5), 124}, // 535 SDiv
  {IR(32104, 5), 380}, // 536 SDot
  {IR(32145, 11), 383}, // 537 SDotAccSat
  {IR(32156, 14), 383}, // 538 SDotAccSatKHR
  {IR(32109, 8), 380}, // 539 SDotKHR
  {IR(28036, 13), 161}, // 540 SGreaterThan
  {IR(28067, 18), 163}, // 541 SGreaterThanEqual
  {IR(28095, 10), 165}, // 542 SLessThan
  {IR(28120, 15), 167}, // 543 SLessThanEqual
  {IR(27688, 5), 128}, // 544 SMod
  {IR(27844, 13), 141}, // 545 SMulExtended
  {IR(27617, 8), 115}, // 546 SNegate
  {IR(27683, 5), 127}, // 547 SRem
  {IR(32130, 6), 382}, // 548 SUDot
  {IR(32195, 12), 385}, // 549 SUDotAccSat
  {IR(32207, 15), 385}, // 550 SUDotAccSatKHR
  {IR(32136, 9), 382}, // 551 SUDotKHR
  {IR(26944, 13), 77}, // 552 SampledImage
  {IR(35822, 29), 521}, // 553 SamplerImageAddressingModeNV
  {IR(27506, 15), 108}, // 554 SatConvertSToU
  {IR(27521, 15), 109}, // 555 SatConvertUToS
  {IR(42151, 16), 690}, // 556 SaveMemoryINTEL
  {IR(27999, 7), 157}, // 557 Select
  {IR(28991, 15), 225}, // 558 SelectionMerge
  {IR(34470, 18), 471}, // 559 SetMeshOutputsEXT
  {IR(29819, 19), 274}, // 560 SetUserEventStatus
  {IR(28368, 17), 182}, // 561 ShiftLeftLogical
  {IR(28347, 21), 181}, // 562 ShiftRightArithmetic
  {IR(28329, 18), 180}, // 563 ShiftRightLogical
  {IR(27895, 11), 148}, // 564 SignBitSet
  {IR(30300, 7), 294}, // 565 SizeOf
  {IR(25273, 7), 3}, // 566 Source
  {IR(25154, 16), 2}, // 567 SourceContinued
  {IR(25280, 16), 4}, // 568 SourceExtension
  {IR(26291, 13), 45}, // 569 SpecConstant
  {IR(44922, 30), 798}, // 570 SpecConstantArchitectureINTEL
  {IR(44989, 30), 799}, // 571 SpecConstantCapabilitiesINTEL
  {IR(26304, 22), 46}, // 572 SpecConstantComposite
  {IR(44286, 36), 774}, // 573 SpecConstantCompositeContinuedINTEL
  {IR(32436, 34), 392}, // 574 SpecConstantCompositeReplicateEXT
  {IR(26273, 18), 44}, // 575 SpecConstantFalse
  {IR(26367, 15), 47}, // 576 SpecConstantOp
  {IR(33285, 23), 427}, // 577 SpecConstantStringAMDX
  {IR(44898, 24), 797}, // 578 SpecConstantTargetINTEL
  {IR(26256, 17), 43}, // 579 SpecConstantTrue
  {IR(31390, 25), 346}, // 580 StencilAttachmentReadEXT
  {IR(26531, 6), 55}, // 581 Store
  {IR(25312, 7), 7}, // 582 String
  {IR(44587, 25), 787}, // 583 Subgroup2DBlockLoadINTEL
  {IR(44612, 34), 788}, // 584 Subgroup2DBlockLoadTransformINTEL
  {IR(44646, 34), 789}, // 585 Subgroup2DBlockLoadTransposeINTEL
  {IR(44680, 29), 790}, // 586 Subgroup2DBlockPrefetchINTEL
  {IR(44709, 26), 791}, // 587 Subgroup2DBlockStoreINTEL
  {IR(31881, 20), 371}, // 588 SubgroupAllEqualKHR
  {IR(31851, 15), 369}, // 589 SubgroupAllKHR
  {IR(31866, 15), 370}, // 590 SubgroupAnyKHR
  {IR(40669, 30), 654}, // 591 SubgroupAvcBmeInitializeINTEL
  {IR(40639, 30), 653}, // 592 SubgroupAvcFmeInitializeINTEL
  {IR(39074, 35), 623}, // 593 SubgroupAvcImeAdjustRefOffsetINTEL
  {IR(39109, 39), 624}, // 594 SubgroupAvcImeConvertToMcePayloadINTEL
  {IR(39750, 38), 637}, // 595 SubgroupAvcImeConvertToMceResultINTEL
  {IR(39373, 45), 630}, // 596 SubgroupAvcImeEvaluateWithDualReferenceINTEL
  {IR(39473, 53), 632}, // 597 SubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL
  {IR(39694, 56), 636}, // 598 SubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL
  {IR(39582, 54), 634}, // 599 SubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL
  {IR(39326, 47), 629}, // 600 SubgroupAvcImeEvaluateWithSingleReferenceINTEL
  {IR(39418, 55), 631}, // 601 SubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL
  {IR(39636, 58), 635}, // 602 SubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL
  {IR(39526, 56), 633}, // 603 SubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL
  {IR(40382, 36), 648}, // 604 SubgroupAvcImeGetBorderReachedINTEL
  {IR(39834, 44), 639}, // 605 SubgroupAvcImeGetDualReferenceStreaminINTEL
  {IR(39788, 46), 638}, // 606 SubgroupAvcImeGetSingleReferenceStreaminINTEL
  {IR(40249, 66), 646}, // 607 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL
  {IR(40181, 68), 645}, // 608 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL
  {IR(40315, 67), 647}, // 609 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL
  {IR(40044, 68), 643}, // 610 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL
  {IR(39974, 70), 642}, // 611 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL
  {IR(40112, 69), 644}, // 612 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL
  {IR(40418, 48), 649}, // 613 SubgroupAvcImeGetTruncatedSearchIndicationINTEL
  {IR(40466, 59), 650}, // 614 SubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL
  {IR(40583, 56), 652}, // 615 SubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL
  {IR(40525, 58), 651}, // 616 SubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL
  {IR(38937, 30), 619}, // 617 SubgroupAvcImeInitializeINTEL
  {IR(39041, 33), 622}, // 618 SubgroupAvcImeRefWindowSizeINTEL
  {IR(39005, 36), 621}, // 619 SubgroupAvcImeSetDualReferenceINTEL
  {IR(39238, 54), 627}, // 620 SubgroupAvcImeSetEarlySearchTerminationThresholdINTEL
  {IR(39148, 43), 625}, // 621 SubgroupAvcImeSetMaxMotionVectorCountINTEL
  {IR(38967, 38), 620}, // 622 SubgroupAvcImeSetSingleReferenceINTEL
  {IR(39191, 47), 626}, // 623 SubgroupAvcImeSetUnidirectionalMixDisableINTEL
  {IR(39292, 34), 628}, // 624 SubgroupAvcImeSetWeightedSadINTEL
  {IR(39927, 47), 641}, // 625 SubgroupAvcImeStripDualReferenceStreamoutINTEL
  {IR(39878, 49), 640}, // 626 SubgroupAvcImeStripSingleReferenceStreamoutINTEL
  {IR(38327, 39), 604}, // 627 SubgroupAvcMceConvertToImePayloadINTEL
  {IR(38366, 38), 605}, // 628 SubgroupAvcMceConvertToImeResultINTEL
  {IR(38404, 39), 606}, // 629 SubgroupAvcMceConvertToRefPayloadINTEL
  {IR(38443, 38), 607}, // 630 SubgroupAvcMceConvertToRefResultINTEL
  {IR(38481, 39), 608}, // 631 SubgroupAvcMceConvertToSicPayloadINTEL
  {IR(38520, 38), 609}, // 632 SubgroupAvcMceConvertToSicResultINTEL
  {IR(38633, 43), 612}, // 633 SubgroupAvcMceGetBestInterDistortionsINTEL
  {IR(37765, 50), 593}, // 634 SubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL
  {IR(37363, 60), 585}, // 635 SubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL
  {IR(37563, 51), 589}, // 636 SubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL
  {IR(37709, 56), 592}, // 637 SubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL
  {IR(37476, 47), 587}, // 638 SubgroupAvcMceGetDefaultInterShapePenaltyINTEL
  {IR(38064, 56), 599}, // 639 SubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL
  {IR(37963, 50), 597}, // 640 SubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL
  {IR(37658, 51), 591}, // 641 SubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL
  {IR(37867, 49), 595}, // 642 SubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL
  {IR(37815, 52), 594}, // 643 SubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL
  {IR(38013, 51), 598}, // 644 SubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL
  {IR(38752, 38), 615}, // 645 SubgroupAvcMceGetInterDirectionsINTEL
  {IR(38594, 39), 611}, // 646 SubgroupAvcMceGetInterDistortionsINTEL
  {IR(38676, 38), 613}, // 647 SubgroupAvcMceGetInterMajorShapeINTEL
  {IR(38714, 38), 614}, // 648 SubgroupAvcMceGetInterMinorShapeINTEL
  {IR(38790, 45), 616}, // 649 SubgroupAvcMceGetInterMotionVectorCountINTEL
  {IR(38835, 40), 617}, // 650 SubgroupAvcMceGetInterReferenceIdsINTEL
  {IR(38875, 62), 618}, // 651 SubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL
  {IR(38558, 36), 610}, // 652 SubgroupAvcMceGetMotionVectorsINTEL
  {IR(38120, 33), 600}, // 653 SubgroupAvcMceSetAcOnlyHaarINTEL
  {IR(38266, 61), 603}, // 654 SubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL
  {IR(37423, 53), 586}, // 655 SubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL
  {IR(37614, 44), 590}, // 656 SubgroupAvcMceSetInterDirectionPenaltyINTEL
  {IR(37523, 40), 588}, // 657 SubgroupAvcMceSetInterShapePenaltyINTEL
  {IR(37916, 47), 596}, // 658 SubgroupAvcMceSetMotionVectorCostFunctionINTEL
  {IR(38205, 61), 602}, // 659 SubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL
  {IR(38153, 52), 601}, // 660 SubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL
  {IR(40699, 39), 655}, // 661 SubgroupAvcRefConvertToMcePayloadINTEL
  {IR(41021, 38), 662}, // 662 SubgroupAvcRefConvertToMceResultINTEL
  {IR(40874, 45), 659}, // 663 SubgroupAvcRefEvaluateWithDualReferenceINTEL
  {IR(40919, 46), 660}, // 664 SubgroupAvcRefEvaluateWithMultiReferenceINTEL
  {IR(40965, 56), 661}, // 665 SubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL
  {IR(40827, 47), 658}, // 666 SubgroupAvcRefEvaluateWithSingleReferenceINTEL
  {IR(40738, 46), 656}, // 667 SubgroupAvcRefSetBidirectionalMixDisableINTEL
  {IR(40784, 43), 657}, // 668 SubgroupAvcRefSetBilinearFilterEnableINTEL
  {IR(41157, 42), 666}, // 669 SubgroupAvcSicConfigureIpeLumaChromaINTEL
  {IR(41121, 36), 665}, // 670 SubgroupAvcSicConfigureIpeLumaINTEL
  {IR(41089, 32), 664}, // 671 SubgroupAvcSicConfigureSkcINTEL
  {IR(41238, 39), 668}, // 672 SubgroupAvcSicConvertToMcePayloadINTEL
  {IR(41778, 38), 680}, // 673 SubgroupAvcSicConvertToMceResultINTEL
  {IR(41553, 31), 675}, // 674 SubgroupAvcSicEvaluateIpeINTEL
  {IR(41631, 45), 677}, // 675 SubgroupAvcSicEvaluateWithDualReferenceINTEL
  {IR(41676, 46), 678}, // 676 SubgroupAvcSicEvaluateWithMultiReferenceINTEL
  {IR(41722, 56), 679}, // 677 SubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL
  {IR(41584, 47), 676}, // 678 SubgroupAvcSicEvaluateWithSingleReferenceINTEL
  {IR(41895, 46), 683}, // 679 SubgroupAvcSicGetBestIpeChromaDistortionINTEL
  {IR(41851, 44), 682}, // 680 SubgroupAvcSicGetBestIpeLumaDistortionINTEL
  {IR(42116, 35), 688}, // 681 SubgroupAvcSicGetInterRawSadsINTEL
  {IR(41982, 36), 685}, // 682 SubgroupAvcSicGetIpeChromaModeINTEL
  {IR(41816, 35), 681}, // 683 SubgroupAvcSicGetIpeLumaShapeINTEL
  {IR(41199, 39), 667}, // 684 SubgroupAvcSicGetMotionVectorMaskINTEL
  {IR(41941, 41), 684}, // 685 SubgroupAvcSicGetPackedIpeLumaModesINTEL
  {IR(42018, 50), 686}, // 686 SubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL
  {IR(42068, 48), 687}, // 687 SubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL
  {IR(41059, 30), 663}, // 688 SubgroupAvcSicInitializeINTEL
  {IR(41419, 43), 672}, // 689 SubgroupAvcSicSetBilinearFilterEnableINTEL
  {IR(41510, 43), 674}, // 690 SubgroupAvcSicSetBlockBasedRawSkipSadINTEL
  {IR(41369, 50), 671}, // 691 SubgroupAvcSicSetIntraChromaModeCostFunctionINTEL
  {IR(41321, 48), 670}, // 692 SubgroupAvcSicSetIntraLumaModeCostFunctionINTEL
  {IR(41277, 44), 669}, // 693 SubgroupAvcSicSetIntraLumaShapePenaltyINTEL
  {IR(41462, 48), 673}, // 694 SubgroupAvcSicSetSkcForwardTransformEnableINTEL
  {IR(5372, 18), 363}, // 695 SubgroupBallotKHR
  {IR(44560, 27), 786}, // 696 SubgroupBlockPrefetchINTEL
  {IR(36369, 23), 540}, // 697 SubgroupBlockReadINTEL
  {IR(36392, 24), 541}, // 698 SubgroupBlockWriteINTEL
  {IR(31725, 27), 364}, // 699 SubgroupFirstInvocationKHR
  {IR(36416, 28), 542}, // 700 SubgroupImageBlockReadINTEL
  {IR(36444, 29), 543}, // 701 SubgroupImageBlockWriteINTEL
  {IR(36473, 33), 544}, // 702 SubgroupImageMediaBlockReadINTEL
  {IR(36506, 34), 545}, // 703 SubgroupImageMediaBlockWriteINTEL
  {IR(13724, 38), 792}, // 704 SubgroupMatrixMultiplyAccumulateINTEL
  {IR(31901, 26), 373}, // 705 SubgroupReadInvocationKHR
  {IR(36297, 25), 537}, // 706 SubgroupShuffleDownINTEL
  {IR(11939, 21), 536}, // 707 SubgroupShuffleINTEL
  {IR(36322, 23), 538}, // 708 SubgroupShuffleUpINTEL
  {IR(36345, 24), 539}, // 709 SubgroupShuffleXorINTEL
  {IR(29082, 7), 229}, // 710 Switch
  {IR(44469, 23), 782}, // 711 TaskSequenceAsyncINTEL
  {IR(44445, 24), 781}, // 712 TaskSequenceCreateINTEL
  {IR(44492, 21), 783}, // 713 TaskSequenceGetINTEL
  {IR(44513, 25), 784}, // 714 TaskSequenceReleaseINTEL
  {IR(35640, 27), 513}, // 715 TensorLayoutSetBlockSizeNV
  {IR(35504, 28), 506}, // 716 TensorLayoutSetClampValueNV
  {IR(35433, 27), 503}, // 717 TensorLayoutSetDimensionNV
  {IR(35460, 24), 504}, // 718 TensorLayoutSetStrideNV
  {IR(35484, 20), 505}, // 719 TensorLayoutSliceNV
  {IR(31500, 19), 350}, // 720 TensorQuerySizeARM
  {IR(31471, 14), 348}, // 721 TensorReadARM
  {IR(35620, 20), 512}, // 722 TensorViewSetClipNV
  {IR(35551, 25), 508}, // 723 TensorViewSetDimensionNV
  {IR(35576, 22), 509}, // 724 TensorViewSetStrideNV
  {IR(31485, 15), 349}, // 725 TensorWriteARM
  {IR(31612, 20), 358}, // 726 TerminateInvocation
  {IR(32041, 16), 379}, // 727 TerminateRayKHR
  {IR(34734, 15), 480}, // 728 TerminateRayNV
  {IR(34757, 14), 482}, // 729 TraceMotionNV
  {IR(34749, 8), 481}, // 730 TraceNV
  {IR(31953, 12), 375}, // 731 TraceRayKHR
  {IR(34771, 17), 483}, // 732 TraceRayMotionNV
  {IR(26934, 10), 76}, // 733 Transpose
  {IR(34838, 29), 485}, // 734 TypeAccelerationStructureKHR
  {IR(34867, 28), 485}, // 735 TypeAccelerationStructureNV
  {IR(25883, 10), 25}, // 736 TypeArray
  {IR(37282, 37), 582}, // 737 TypeAvcImeDualReferenceStreaminINTEL
  {IR(37017, 23), 573}, // 738 TypeAvcImePayloadINTEL
  {IR(37199, 44), 580}, // 739 TypeAvcImeResultDualReferenceStreamoutINTEL
  {IR(37131, 22), 578}, // 740 TypeAvcImeResultINTEL
  {IR(37153, 46), 579}, // 741 TypeAvcImeResultSingleReferenceStreamoutINTEL
  {IR(37243, 39), 581}, // 742 TypeAvcImeSingleReferenceStreaminINTEL
  {IR(37086, 23), 576}, // 743 TypeAvcMcePayloadINTEL
  {IR(37109, 22), 577}, // 744 TypeAvcMceResultINTEL
  {IR(37040, 23), 574}, // 745 TypeAvcRefPayloadINTEL
  {IR(37319, 22), 583}, // 746 TypeAvcRefResultINTEL
  {IR(37063, 23), 575}, // 747 TypeAvcSicPayloadINTEL
  {IR(37341, 22), 584}, // 748 TypeAvcSicResultINTEL
  {IR(25645, 9), 17}, // 749 TypeBool
  {IR(44206, 23), 771}, // 750 TypeBufferSurfaceINTEL
  {IR(32222, 25), 386}, // 751 TypeCooperativeMatrixKHR
  {IR(34960, 24), 489}, // 752 TypeCooperativeMatrixNV
  {IR(34260, 24), 464}, // 753 TypeCooperativeVectorNV
  {IR(25998, 16), 32}, // 754 TypeDeviceEvent
  {IR(25988, 10), 31}, // 755 TypeEvent
  {IR(25699, 10), 19}, // 756 TypeFloat
  {IR(26047, 19), 36}, // 757 TypeForwardPointer
  {IR(25975, 13), 30}, // 758 TypeFunction
  {IR(31599, 13), 357}, // 759 TypeGraphARM
  {IR(34221, 16), 462}, // 760 TypeHitObjectNV
  {IR(25844, 10), 22}, // 761 TypeImage
  {IR(25654, 8), 18}, // 762 TypeInt
  {IR(25720, 11), 21}, // 763 TypeMatrix
  {IR(30429, 17), 300}, // 764 TypeNamedBarrier
  {IR(33162, 25), 422}, // 765 TypeNodePayloadArrayAMDX
  {IR(25921, 11), 28}, // 766 TypeOpaque
  {IR(26038, 9), 35}, // 767 TypePipe
  {IR(30307, 16), 295}, // 768 TypePipeStorage
  {IR(25963, 12), 29}, // 769 TypePointer
  {IR(26028, 10), 34}, // 770 TypeQueue
  {IR(32501, 16), 394}, // 771 TypeRayQueryKHR
  {IR(26014, 14), 33}, // 772 TypeReserveId
  {IR(25893, 17), 26}, // 773 TypeRuntimeArray
  {IR(25866, 17), 24}, // 774 TypeSampledImage
  {IR(25854, 12), 23}, // 775 TypeSampler
  {IR(25910, 11), 27}, // 776 TypeStruct
  {IR(44229, 25), 772}, // 777 TypeStructContinuedINTEL
  {IR(44538, 22), 785}, // 778 TypeTaskSequenceINTEL
  {IR(31415, 14), 347}, // 779 TypeTensorARM
  {IR(35376, 19), 500}, // 780 TypeTensorLayoutNV
  {IR(35395, 17), 501}, // 781 TypeTensorViewNV
  {IR(31632, 22), 359}, // 782 TypeUntypedPointerKHR
  {IR(25709, 11), 20}, // 783 TypeVector
  {IR(36999, 18), 572}, // 784 TypeVmeImageINTEL
  {IR(25636, 9), 16}, // 785 TypeVoid
  {IR(36628, 13), 551}, // 786 UAddSatINTEL
  {IR(36655, 14), 553}, // 787 UAverageINTEL
  {IR(36690, 21), 555}, // 788 UAverageRoundedINTEL
  {IR(27451, 9), 103}, // 789 UConvert
  {IR(36540, 24), 546}, // 790 UCountLeadingZerosINTEL
  {IR(36564, 25), 547}, // 791 UCountTrailingZerosINTEL
  {IR(27663, 5), 123}, // 792 UDiv
  {IR(32117, 5), 381}, // 793 UDot
  {IR(32170, 11), 384}, // 794 UDotAccSat
  {IR(32181, 14), 384}, // 795 UDotAccSatKHR
  {IR(32122, 8), 381}, // 796 UDotKHR
  {IR(28023, 13), 160}, // 797 UGreaterThan
  {IR(28049, 18), 162}, // 798 UGreaterThanEqual
  {IR(28085, 10), 164}, // 799 ULessThan
  {IR(28105, 15), 166}, // 800 ULessThanEqual
  {IR(27678, 5), 126}, // 801 UMod
  {IR(36752, 15), 559}, // 802 UMul32x16INTEL
  {IR(27831, 13), 140}, // 803 UMulExtended
  {IR(36724, 13), 557}, // 804 USubSatINTEL
  {IR(25148, 6), 1}, // 805 Undef
  {IR(27928, 10), 151}, // 806 Unordered
  {IR(29113, 12), 233}, // 807 Unreachable
  {IR(31673, 22), 361}, // 808 UntypedAccessChainKHR
  {IR(31810, 22), 367}, // 809 UntypedArrayLengthKHR
  {IR(31695, 30), 362}, // 810 UntypedInBoundsAccessChainKHR
  {IR(31777, 33), 366}, // 811 UntypedInBoundsPtrAccessChainKHR
  {IR(31832, 19), 368}, // 812 UntypedPrefetchKHR
  {IR(31752, 25), 365}, // 813 UntypedPtrAccessChainKHR
  {IR(31654, 19), 360}, // 814 UntypedVariableKHR
  {IR(26459, 9), 52}, // 815 Variable
  {IR(12395, 25), 689}, // 816 VariableLengthArrayINTEL
  {IR(26816, 21), 69}, // 817 VectorExtractDynamic
  {IR(26837, 20), 70}, // 818 VectorInsertDynamic
  {IR(26857, 14), 71}, // 819 VectorShuffle
  {IR(27739, 18), 133}, // 820 VectorTimesMatrix
  {IR(27703, 18), 131}, // 821 VectorTimesScalar
  {IR(36985, 14), 571}, // 822 VmeImageINTEL
  {IR(34515, 33), 473}, // 823 WritePackedPrimitiveIndices4x8NV
  {IR(29338, 10), 250}, // 824 WritePipe
  {IR(43518, 23), 751}, // 825 WritePipeBlockingINTEL
}};

// Extended instruction descriptions, ordered by (extinst enum, opcode value).
// The fields in order are:
//   enum value
//   operands, an IndexRange into kOperandSpans
//   name, a character-counting IndexRange into kStrings
//   capabilities, an IndexRange into kCapabilitySpans
static const std::array<ExtInstDesc, 491> kExtInstByValue{{
    {0,IR(0, 0),IR(45326, 14),IR(1, 0)}, // DebugInfoNone in debuginfo
    {1,IR(52, 3),IR(45340, 21),IR(1, 0)}, // DebugCompilationUnit in debuginfo
    {2,IR(759, 3),IR(45413, 15),IR(1, 0)}, // DebugTypeBasic in debuginfo
    {3,IR(762, 3),IR(45462, 17),IR(1, 0)}, // DebugTypePointer in debuginfo
    {4,IR(765, 2),IR(45517, 19),IR(1, 0)}, // DebugTypeQualifier in debuginfo
    {5,IR(168, 2),IR(45536, 15),IR(1, 0)}, // DebugTypeArray in debuginfo
    {6,IR(261, 2),IR(45551, 16),IR(1, 0)}, // DebugTypeVector in debuginfo
    {7,IR(767, 6),IR(45567, 13),IR(1, 0)}, // DebugTypedef in debuginfo
    {8,IR(168, 2),IR(45580, 18),IR(1, 0)}, // DebugTypeFunction in debuginfo
    {9,IR(773, 9),IR(45598, 14),IR(1, 0)}, // DebugTypeEnum in debuginfo
    {10,IR(782, 9),IR(45650, 19),IR(1, 0)}, // DebugTypeComposite in debuginfo
    {11,IR(791, 10),IR(45669, 16),IR(1, 0)}, // DebugTypeMember in debuginfo
    {12,IR(801, 5),IR(45685, 21),IR(1, 0)}, // DebugTypeInheritance in debuginfo
    {13,IR(36, 2),IR(45706, 21),IR(1, 0)}, // DebugTypePtrToMember in debuginfo
    {14,IR(168, 2),IR(45727, 18),IR(1, 0)}, // DebugTypeTemplate in debuginfo
    {15,IR(806, 6),IR(45745, 27),IR(1, 0)}, // DebugTypeTemplateParameter in debuginfo
    {16,IR(812, 5),IR(45772, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in debuginfo
    {17,IR(817, 5),IR(45807, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in debuginfo
    {18,IR(791, 10),IR(45838, 20),IR(1, 0)}, // DebugGlobalVariable in debuginfo
    {19,IR(822, 8),IR(45858, 25),IR(1, 0)}, // DebugFunctionDeclaration in debuginfo
    {20,IR(830, 11),IR(45883, 14),IR(1, 0)}, // DebugFunction in debuginfo
    {21,IR(841, 5),IR(45897, 18),IR(1, 0)}, // DebugLexicalBlock in debuginfo
    {22,IR(846, 3),IR(45915, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in debuginfo
    {23,IR(849, 2),IR(45946, 11),IR(1, 0)}, // DebugScope in debuginfo
    {24,IR(0, 0),IR(45957, 13),IR(1, 0)}, // DebugNoScope in debuginfo
    {25,IR(851, 3),IR(45970, 15),IR(1, 0)}, // DebugInlinedAt in debuginfo
    {26,IR(854, 7),IR(46027, 19),IR(1, 0)}, // DebugLocalVariable in debuginfo
    {27,IR(36, 2),IR(46046, 21),IR(1, 0)}, // DebugInlinedVariable in debuginfo
    {28,IR(33, 3),IR(46067, 13),IR(1, 0)}, // DebugDeclare in debuginfo
    {29,IR(375, 3),IR(46080, 11),IR(1, 0)}, // DebugValue in debuginfo
    {30,IR(861, 2),IR(46124, 15),IR(1, 0)}, // DebugOperation in debuginfo
    {31,IR(695, 1),IR(46139, 16),IR(1, 0)}, // DebugExpression in debuginfo
    {32,IR(863, 4),IR(46155, 14),IR(1, 0)}, // DebugMacroDef in debuginfo
    {33,IR(846, 3),IR(46169, 16),IR(1, 0)}, // DebugMacroUndef in debuginfo
    {1,IR(10, 1),IR(46185, 6),IR(1, 0)}, // Round in glsl_std_450
    {2,IR(10, 1),IR(46191, 10),IR(1, 0)}, // RoundEven in glsl_std_450
    {3,IR(10, 1),IR(46201, 6),IR(1, 0)}, // Trunc in glsl_std_450
    {4,IR(10, 1),IR(46207, 5),IR(1, 0)}, // FAbs in glsl_std_450
    {5,IR(10, 1),IR(46212, 5),IR(1, 0)}, // SAbs in glsl_std_450
    {6,IR(10, 1),IR(46217, 6),IR(1, 0)}, // FSign in glsl_std_450
    {7,IR(10, 1),IR(46223, 6),IR(1, 0)}, // SSign in glsl_std_450
    {8,IR(10, 1),IR(46229, 6),IR(1, 0)}, // Floor in glsl_std_450
    {9,IR(10, 1),IR(46235, 5),IR(1, 0)}, // Ceil in glsl_std_450
    {10,IR(10, 1),IR(46240, 6),IR(1, 0)}, // Fract in glsl_std_450
    {11,IR(10, 1),IR(46246, 8),IR(1, 0)}, // Radians in glsl_std_450
    {12,IR(10, 1),IR(46254, 8),IR(1, 0)}, // Degrees in glsl_std_450
    {13,IR(10, 1),IR(46262, 4),IR(1, 0)}, // Sin in glsl_std_450
    {14,IR(10, 1),IR(46266, 4),IR(1, 0)}, // Cos in glsl_std_450
    {15,IR(10, 1),IR(46270, 4),IR(1, 0)}, // Tan in glsl_std_450
    {16,IR(10, 1),IR(46274, 5),IR(1, 0)}, // Asin in glsl_std_450
    {17,IR(10, 1),IR(46279, 5),IR(1, 0)}, // Acos in glsl_std_450
    {18,IR(10, 1),IR(46284, 5),IR(1, 0)}, // Atan in glsl_std_450
    {19,IR(10, 1),IR(46289, 5),IR(1, 0)}, // Sinh in glsl_std_450
    {20,IR(10, 1),IR(46294, 5),IR(1, 0)}, // Cosh in glsl_std_450
    {21,IR(10, 1),IR(46299, 5),IR(1, 0)}, // Tanh in glsl_std_450
    {22,IR(10, 1),IR(46304, 6),IR(1, 0)}, // Asinh in glsl_std_450
    {23,IR(10, 1),IR(46310, 6),IR(1, 0)}, // Acosh in glsl_std_450
    {24,IR(10, 1),IR(46316, 6),IR(1, 0)}, // Atanh in glsl_std_450
    {25,IR(36, 2),IR(46322, 6),IR(1, 0)}, // Atan2 in glsl_std_450
    {26,IR(36, 2),IR(46328, 4),IR(1, 0)}, // Pow in glsl_std_450
    {27,IR(10, 1),IR(46332, 4),IR(1, 0)}, // Exp in glsl_std_450
    {28,IR(10, 1),IR(46336, 4),IR(1, 0)}, // Log in glsl_std_450
    {29,IR(10, 1),IR(46340, 5),IR(1, 0)}, // Exp2 in glsl_std_450
    {30,IR(10, 1),IR(46345, 5),IR(1, 0)}, // Log2 in glsl_std_450
    {31,IR(10, 1),IR(46350, 5),IR(1, 0)}, // Sqrt in glsl_std_450
    {32,IR(10, 1),IR(46355, 12),IR(1, 0)}, // InverseSqrt in glsl_std_450
    {33,IR(10, 1),IR(46367, 12),IR(1, 0)}, // Determinant in glsl_std_450
    {34,IR(10, 1),IR(46379, 14),IR(1, 0)}, // MatrixInverse in glsl_std_450
    {35,IR(36, 2),IR(46393, 5),IR(1, 0)}, // Modf in glsl_std_450
    {36,IR(10, 1),IR(46398, 11),IR(1, 0)}, // ModfStruct in glsl_std_450
    {37,IR(36, 2),IR(46409, 5),IR(1, 0)}, // FMin in glsl_std_450
    {38,IR(36, 2),IR(46414, 5),IR(1, 0)}, // UMin in glsl_std_450
    {39,IR(36, 2),IR(46419, 5),IR(1, 0)}, // SMin in glsl_std_450
    {40,IR(36, 2),IR(46424, 5),IR(1, 0)}, // FMax in glsl_std_450
    {41,IR(36, 2),IR(46429, 5),IR(1, 0)}, // UMax in glsl_std_450
    {42,IR(36, 2),IR(46434, 5),IR(1, 0)}, // SMax in glsl_std_450
    {43,IR(33, 3),IR(46439, 7),IR(1, 0)}, // FClamp in glsl_std_450
    {44,IR(33, 3),IR(46446, 7),IR(1, 0)}, // UClamp in glsl_std_450
    {45,IR(33, 3),IR(46453, 7),IR(1, 0)}, // SClamp in glsl_std_450
    {46,IR(33, 3),IR(46460, 5),IR(1, 0)}, // FMix in glsl_std_450
    {47,IR(33, 3),IR(46465, 5),IR(1, 0)}, // IMix in glsl_std_450
    {48,IR(36, 2),IR(46470, 5),IR(1, 0)}, // Step in glsl_std_450
    {49,IR(33, 3),IR(46475, 11),IR(1, 0)}, // SmoothStep in glsl_std_450
    {50,IR(33, 3),IR(46486, 4),IR(1, 0)}, // Fma in glsl_std_450
    {51,IR(36, 2),IR(46490, 6),IR(1, 0)}, // Frexp in glsl_std_450
    {52,IR(10, 1),IR(46496, 12),IR(1, 0)}, // FrexpStruct in glsl_std_450
    {53,IR(36, 2),IR(46508, 6),IR(1, 0)}, // Ldexp in glsl_std_450
    {54,IR(10, 1),IR(46514, 13),IR(1, 0)}, // PackSnorm4x8 in glsl_std_450
    {55,IR(10, 1),IR(46527, 13),IR(1, 0)}, // PackUnorm4x8 in glsl_std_450
    {56,IR(10, 1),IR(46540, 14),IR(1, 0)}, // PackSnorm2x16 in glsl_std_450
    {57,IR(10, 1),IR(46554, 14),IR(1, 0)}, // PackUnorm2x16 in glsl_std_450
    {58,IR(10, 1),IR(46568, 13),IR(1, 0)}, // PackHalf2x16 in glsl_std_450
    {59,IR(10, 1),IR(46581, 15),IR(307, 1)}, // PackDouble2x32 in glsl_std_450
    {60,IR(10, 1),IR(46596, 16),IR(1, 0)}, // UnpackSnorm2x16 in glsl_std_450
    {61,IR(10, 1),IR(46612, 16),IR(1, 0)}, // UnpackUnorm2x16 in glsl_std_450
    {62,IR(10, 1),IR(46628, 15),IR(1, 0)}, // UnpackHalf2x16 in glsl_std_450
    {63,IR(10, 1),IR(46643, 15),IR(1, 0)}, // UnpackSnorm4x8 in glsl_std_450
    {64,IR(10, 1),IR(46658, 15),IR(1, 0)}, // UnpackUnorm4x8 in glsl_std_450
    {65,IR(10, 1),IR(46673, 17),IR(307, 1)}, // UnpackDouble2x32 in glsl_std_450
    {66,IR(10, 1),IR(46690, 7),IR(1, 0)}, // Length in glsl_std_450
    {67,IR(36, 2),IR(46697, 9),IR(1, 0)}, // Distance in glsl_std_450
    {68,IR(36, 2),IR(46706, 6),IR(1, 0)}, // Cross in glsl_std_450
    {69,IR(10, 1),IR(46712, 10),IR(1, 0)}, // Normalize in glsl_std_450
    {70,IR(33, 3),IR(46722, 12),IR(1, 0)}, // FaceForward in glsl_std_450
    {71,IR(36, 2),IR(46734, 8),IR(1, 0)}, // Reflect in glsl_std_450
    {72,IR(33, 3),IR(46742, 8),IR(1, 0)}, // Refract in glsl_std_450
    {73,IR(10, 1),IR(46750, 9),IR(1, 0)}, // FindILsb in glsl_std_450
    {74,IR(10, 1),IR(46759, 9),IR(1, 0)}, // FindSMsb in glsl_std_450
    {75,IR(10, 1),IR(46768, 9),IR(1, 0)}, // FindUMsb in glsl_std_450
    {76,IR(10, 1),IR(46777, 22),IR(308, 1)}, // InterpolateAtCentroid in glsl_std_450
    {77,IR(36, 2),IR(46799, 20),IR(308, 1)}, // InterpolateAtSample in glsl_std_450
    {78,IR(36, 2),IR(46819, 20),IR(308, 1)}, // InterpolateAtOffset in glsl_std_450
    {79,IR(36, 2),IR(46839, 5),IR(1, 0)}, // NMin in glsl_std_450
    {80,IR(36, 2),IR(46844, 5),IR(1, 0)}, // NMax in glsl_std_450
    {81,IR(33, 3),IR(46849, 7),IR(1, 0)}, // NClamp in glsl_std_450
    {1,IR(399, 5),IR(4591, 7),IR(1, 0)}, // Kernel in nonsemantic_clspvreflection
    {2,IR(867, 5),IR(46856, 13),IR(1, 0)}, // ArgumentInfo in nonsemantic_clspvreflection
    {3,IR(872, 5),IR(46869, 22),IR(1, 0)}, // ArgumentStorageBuffer in nonsemantic_clspvreflection
    {4,IR(872, 5),IR(46891, 16),IR(1, 0)}, // ArgumentUniform in nonsemantic_clspvreflection
    {5,IR(543, 7),IR(46907, 25),IR(1, 0)}, // ArgumentPodStorageBuffer in nonsemantic_clspvreflection
    {6,IR(543, 7),IR(46932, 19),IR(1, 0)}, // ArgumentPodUniform in nonsemantic_clspvreflection
    {7,IR(872, 5),IR(46951, 24),IR(1, 0)}, // ArgumentPodPushConstant in nonsemantic_clspvreflection
    {8,IR(872, 5),IR(46975, 21),IR(1, 0)}, // ArgumentSampledImage in nonsemantic_clspvreflection
    {9,IR(872, 5),IR(46996, 21),IR(1, 0)}, // ArgumentStorageImage in nonsemantic_clspvreflection
    {10,IR(872, 5),IR(47017, 16),IR(1, 0)}, // ArgumentSampler in nonsemantic_clspvreflection
    {11,IR(872, 5),IR(47033, 18),IR(1, 0)}, // ArgumentWorkgroup in nonsemantic_clspvreflection
    {12,IR(33, 3),IR(47051, 26),IR(1, 0)}, // SpecConstantWorkgroupSize in nonsemantic_clspvreflection
    {13,IR(33, 3),IR(47077, 25),IR(1, 0)}, // SpecConstantGlobalOffset in nonsemantic_clspvreflection
    {14,IR(10, 1),IR(47102, 20),IR(1, 0)}, // SpecConstantWorkDim in nonsemantic_clspvreflection
    {15,IR(36, 2),IR(47122, 25),IR(1, 0)}, // PushConstantGlobalOffset in nonsemantic_clspvreflection
    {16,IR(36, 2),IR(47147, 30),IR(1, 0)}, // PushConstantEnqueuedLocalSize in nonsemantic_clspvreflection
    {17,IR(36, 2),IR(47177, 23),IR(1, 0)}, // PushConstantGlobalSize in nonsemantic_clspvreflection
    {18,IR(36, 2),IR(47200, 25),IR(1, 0)}, // PushConstantRegionOffset in nonsemantic_clspvreflection
    {19,IR(36, 2),IR(47225, 26),IR(1, 0)}, // PushConstantNumWorkgroups in nonsemantic_clspvreflection
    {20,IR(36, 2),IR(47251, 30),IR(1, 0)}, // PushConstantRegionGroupOffset in nonsemantic_clspvreflection
    {21,IR(33, 3),IR(47281, 26),IR(1, 0)}, // ConstantDataStorageBuffer in nonsemantic_clspvreflection
    {22,IR(33, 3),IR(47307, 20),IR(1, 0)}, // ConstantDataUniform in nonsemantic_clspvreflection
    {23,IR(33, 3),IR(8016, 15),IR(1, 0)}, // LiteralSampler in nonsemantic_clspvreflection
    {24,IR(296, 4),IR(47327, 30),IR(1, 0)}, // PropertyRequiredWorkgroupSize in nonsemantic_clspvreflection
    {25,IR(10, 1),IR(47357, 28),IR(1, 0)}, // SpecConstantSubgroupMaxSize in nonsemantic_clspvreflection
    {26,IR(872, 5),IR(47385, 28),IR(1, 0)}, // ArgumentPointerPushConstant in nonsemantic_clspvreflection
    {27,IR(543, 7),IR(47413, 23),IR(1, 0)}, // ArgumentPointerUniform in nonsemantic_clspvreflection
    {28,IR(33, 3),IR(47436, 35),IR(1, 0)}, // ProgramScopeVariablesStorageBuffer in nonsemantic_clspvreflection
    {29,IR(33, 3),IR(47471, 38),IR(1, 0)}, // ProgramScopeVariablePointerRelocation in nonsemantic_clspvreflection
    {30,IR(296, 4),IR(47509, 42),IR(1, 0)}, // ImageArgumentInfoChannelOrderPushConstant in nonsemantic_clspvreflection
    {31,IR(296, 4),IR(47551, 45),IR(1, 0)}, // ImageArgumentInfoChannelDataTypePushConstant in nonsemantic_clspvreflection
    {32,IR(514, 6),IR(47596, 37),IR(1, 0)}, // ImageArgumentInfoChannelOrderUniform in nonsemantic_clspvreflection
    {33,IR(514, 6),IR(47633, 40),IR(1, 0)}, // ImageArgumentInfoChannelDataTypeUniform in nonsemantic_clspvreflection
    {34,IR(872, 5),IR(47673, 27),IR(1, 0)}, // ArgumentStorageTexelBuffer in nonsemantic_clspvreflection
    {35,IR(872, 5),IR(47700, 27),IR(1, 0)}, // ArgumentUniformTexelBuffer in nonsemantic_clspvreflection
    {36,IR(33, 3),IR(47727, 32),IR(1, 0)}, // ConstantDataPointerPushConstant in nonsemantic_clspvreflection
    {37,IR(33, 3),IR(47759, 40),IR(1, 0)}, // ProgramScopeVariablePointerPushConstant in nonsemantic_clspvreflection
    {38,IR(375, 3),IR(47799, 11),IR(1, 0)}, // PrintfInfo in nonsemantic_clspvreflection
    {39,IR(33, 3),IR(47810, 26),IR(1, 0)}, // PrintfBufferStorageBuffer in nonsemantic_clspvreflection
    {40,IR(33, 3),IR(47836, 32),IR(1, 0)}, // PrintfBufferPointerPushConstant in nonsemantic_clspvreflection
    {41,IR(296, 4),IR(47868, 34),IR(1, 0)}, // NormalizedSamplerMaskPushConstant in nonsemantic_clspvreflection
    {42,IR(36, 2),IR(47902, 22),IR(1, 0)}, // WorkgroupVariableSize in nonsemantic_clspvreflection
    {0,IR(0, 0),IR(45326, 14),IR(1, 0)}, // DebugInfoNone in nonsemantic_shader_debuginfo_100
    {1,IR(296, 4),IR(45340, 21),IR(1, 0)}, // DebugCompilationUnit in nonsemantic_shader_debuginfo_100
    {2,IR(296, 4),IR(45413, 15),IR(1, 0)}, // DebugTypeBasic in nonsemantic_shader_debuginfo_100
    {3,IR(33, 3),IR(45462, 17),IR(1, 0)}, // DebugTypePointer in nonsemantic_shader_debuginfo_100
    {4,IR(36, 2),IR(45517, 19),IR(1, 0)}, // DebugTypeQualifier in nonsemantic_shader_debuginfo_100
    {5,IR(168, 2),IR(45536, 15),IR(1, 0)}, // DebugTypeArray in nonsemantic_shader_debuginfo_100
    {6,IR(36, 2),IR(45551, 16),IR(1, 0)}, // DebugTypeVector in nonsemantic_shader_debuginfo_100
    {7,IR(514, 6),IR(45567, 13),IR(1, 0)}, // DebugTypedef in nonsemantic_shader_debuginfo_100
    {8,IR(375, 3),IR(45580, 18),IR(1, 0)}, // DebugTypeFunction in nonsemantic_shader_debuginfo_100
    {9,IR(877, 9),IR(45598, 14),IR(1, 0)}, // DebugTypeEnum in nonsemantic_shader_debuginfo_100
    {10,IR(886, 10),IR(45650, 19),IR(1, 0)}, // DebugTypeComposite in nonsemantic_shader_debuginfo_100
    {11,IR(896, 9),IR(45669, 16),IR(1, 0)}, // DebugTypeMember in nonsemantic_shader_debuginfo_100
    {12,IR(296, 4),IR(45685, 21),IR(1, 0)}, // DebugTypeInheritance in nonsemantic_shader_debuginfo_100
    {13,IR(36, 2),IR(45706, 21),IR(1, 0)}, // DebugTypePtrToMember in nonsemantic_shader_debuginfo_100
    {14,IR(168, 2),IR(45727, 18),IR(1, 0)}, // DebugTypeTemplate in nonsemantic_shader_debuginfo_100
    {15,IR(514, 6),IR(45745, 27),IR(1, 0)}, // DebugTypeTemplateParameter in nonsemantic_shader_debuginfo_100
    {16,IR(623, 5),IR(45772, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in nonsemantic_shader_debuginfo_100
    {17,IR(905, 5),IR(45807, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in nonsemantic_shader_debuginfo_100
    {18,IR(910, 10),IR(45838, 20),IR(1, 0)}, // DebugGlobalVariable in nonsemantic_shader_debuginfo_100
    {19,IR(460, 8),IR(45858, 25),IR(1, 0)}, // DebugFunctionDeclaration in nonsemantic_shader_debuginfo_100
    {20,IR(910, 10),IR(45883, 14),IR(1, 0)}, // DebugFunction in nonsemantic_shader_debuginfo_100
    {21,IR(872, 5),IR(45897, 18),IR(1, 0)}, // DebugLexicalBlock in nonsemantic_shader_debuginfo_100
    {22,IR(33, 3),IR(45915, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in nonsemantic_shader_debuginfo_100
    {23,IR(849, 2),IR(45946, 11),IR(1, 0)}, // DebugScope in nonsemantic_shader_debuginfo_100
    {24,IR(0, 0),IR(45957, 13),IR(1, 0)}, // DebugNoScope in nonsemantic_shader_debuginfo_100
    {25,IR(920, 3),IR(45970, 15),IR(1, 0)}, // DebugInlinedAt in nonsemantic_shader_debuginfo_100
    {26,IR(923, 8),IR(46027, 19),IR(1, 0)}, // DebugLocalVariable in nonsemantic_shader_debuginfo_100
    {27,IR(36, 2),IR(46046, 21),IR(1, 0)}, // DebugInlinedVariable in nonsemantic_shader_debuginfo_100
    {28,IR(931, 4),IR(46067, 13),IR(1, 0)}, // DebugDeclare in nonsemantic_shader_debuginfo_100
    {29,IR(931, 4),IR(46080, 11),IR(1, 0)}, // DebugValue in nonsemantic_shader_debuginfo_100
    {30,IR(168, 2),IR(46124, 15),IR(1, 0)}, // DebugOperation in nonsemantic_shader_debuginfo_100
    {31,IR(695, 1),IR(46139, 16),IR(1, 0)}, // DebugExpression in nonsemantic_shader_debuginfo_100
    {32,IR(566, 4),IR(46155, 14),IR(1, 0)}, // DebugMacroDef in nonsemantic_shader_debuginfo_100
    {33,IR(33, 3),IR(46169, 16),IR(1, 0)}, // DebugMacroUndef in nonsemantic_shader_debuginfo_100
    {34,IR(495, 7),IR(47924, 20),IR(1, 0)}, // DebugImportedEntity in nonsemantic_shader_debuginfo_100
    {35,IR(849, 2),IR(47944, 12),IR(1, 0)}, // DebugSource in nonsemantic_shader_debuginfo_100
    {101,IR(36, 2),IR(47956, 24),IR(1, 0)}, // DebugFunctionDefinition in nonsemantic_shader_debuginfo_100
    {102,IR(10, 1),IR(47980, 21),IR(1, 0)}, // DebugSourceContinued in nonsemantic_shader_debuginfo_100
    {103,IR(623, 5),IR(48001, 10),IR(1, 0)}, // DebugLine in nonsemantic_shader_debuginfo_100
    {104,IR(0, 0),IR(48011, 12),IR(1, 0)}, // DebugNoLine in nonsemantic_shader_debuginfo_100
    {105,IR(36, 2),IR(48023, 21),IR(1, 0)}, // DebugBuildIdentifier in nonsemantic_shader_debuginfo_100
    {106,IR(10, 1),IR(48044, 17),IR(1, 0)}, // DebugStoragePath in nonsemantic_shader_debuginfo_100
    {107,IR(296, 4),IR(48061, 16),IR(1, 0)}, // DebugEntryPoint in nonsemantic_shader_debuginfo_100
    {108,IR(33, 3),IR(48077, 16),IR(1, 0)}, // DebugTypeMatrix in nonsemantic_shader_debuginfo_100
    {1,IR(713, 9),IR(48093, 14),IR(1, 0)}, // Configuration in nonsemantic_vkspreflection
    {2,IR(10, 1),IR(48107, 13),IR(1, 0)}, // StartCounter in nonsemantic_vkspreflection
    {3,IR(10, 1),IR(48120, 12),IR(1, 0)}, // StopCounter in nonsemantic_vkspreflection
    {4,IR(296, 4),IR(48132, 14),IR(1, 0)}, // PushConstants in nonsemantic_vkspreflection
    {5,IR(33, 3),IR(48146, 23),IR(1, 0)}, // SpecializationMapEntry in nonsemantic_vkspreflection
    {6,IR(935, 15),IR(48169, 20),IR(1, 0)}, // DescriptorSetBuffer in nonsemantic_vkspreflection
    {7,IR(950, 33),IR(48189, 19),IR(1, 0)}, // DescriptorSetImage in nonsemantic_vkspreflection
    {8,IR(983, 19),IR(48208, 21),IR(1, 0)}, // DescriptorSetSampler in nonsemantic_vkspreflection
    {0,IR(0, 0),IR(45326, 14),IR(1, 0)}, // DebugInfoNone in opencl_debuginfo_100
    {1,IR(1002, 4),IR(45340, 21),IR(1, 0)}, // DebugCompilationUnit in opencl_debuginfo_100
    {2,IR(1006, 3),IR(45413, 15),IR(1, 0)}, // DebugTypeBasic in opencl_debuginfo_100
    {3,IR(1009, 3),IR(45462, 17),IR(1, 0)}, // DebugTypePointer in opencl_debuginfo_100
    {4,IR(1012, 2),IR(45517, 19),IR(1, 0)}, // DebugTypeQualifier in opencl_debuginfo_100
    {5,IR(168, 2),IR(45536, 15),IR(1, 0)}, // DebugTypeArray in opencl_debuginfo_100
    {6,IR(261, 2),IR(45551, 16),IR(1, 0)}, // DebugTypeVector in opencl_debuginfo_100
    {7,IR(767, 6),IR(45567, 13),IR(1, 0)}, // DebugTypedef in opencl_debuginfo_100
    {8,IR(1014, 3),IR(45580, 18),IR(1, 0)}, // DebugTypeFunction in opencl_debuginfo_100
    {9,IR(1017, 9),IR(45598, 14),IR(1, 0)}, // DebugTypeEnum in opencl_debuginfo_100
    {10,IR(1026, 10),IR(45650, 19),IR(1, 0)}, // DebugTypeComposite in opencl_debuginfo_100
    {11,IR(1036, 10),IR(45669, 16),IR(1, 0)}, // DebugTypeMember in opencl_debuginfo_100
    {12,IR(1046, 5),IR(45685, 21),IR(1, 0)}, // DebugTypeInheritance in opencl_debuginfo_100
    {13,IR(36, 2),IR(45706, 21),IR(1, 0)}, // DebugTypePtrToMember in opencl_debuginfo_100
    {14,IR(168, 2),IR(45727, 18),IR(1, 0)}, // DebugTypeTemplate in opencl_debuginfo_100
    {15,IR(806, 6),IR(45745, 27),IR(1, 0)}, // DebugTypeTemplateParameter in opencl_debuginfo_100
    {16,IR(812, 5),IR(45772, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in opencl_debuginfo_100
    {17,IR(817, 5),IR(45807, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in opencl_debuginfo_100
    {18,IR(1036, 10),IR(45838, 20),IR(1, 0)}, // DebugGlobalVariable in opencl_debuginfo_100
    {19,IR(1051, 8),IR(45858, 25),IR(1, 0)}, // DebugFunctionDeclaration in opencl_debuginfo_100
    {20,IR(1059, 11),IR(45883, 14),IR(1, 0)}, // DebugFunction in opencl_debuginfo_100
    {21,IR(841, 5),IR(45897, 18),IR(1, 0)}, // DebugLexicalBlock in opencl_debuginfo_100
    {22,IR(846, 3),IR(45915, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in opencl_debuginfo_100
    {23,IR(849, 2),IR(45946, 11),IR(1, 0)}, // DebugScope in opencl_debuginfo_100
    {24,IR(0, 0),IR(45957, 13),IR(1, 0)}, // DebugNoScope in opencl_debuginfo_100
    {25,IR(851, 3),IR(45970, 15),IR(1, 0)}, // DebugInlinedAt in opencl_debuginfo_100
    {26,IR(1070, 8),IR(46027, 19),IR(1, 0)}, // DebugLocalVariable in opencl_debuginfo_100
    {27,IR(36, 2),IR(46046, 21),IR(1, 0)}, // DebugInlinedVariable in opencl_debuginfo_100
    {28,IR(33, 3),IR(46067, 13),IR(1, 0)}, // DebugDeclare in opencl_debuginfo_100
    {29,IR(931, 4),IR(46080, 11),IR(1, 0)}, // DebugValue in opencl_debuginfo_100
    {30,IR(1078, 2),IR(46124, 15),IR(1, 0)}, // DebugOperation in opencl_debuginfo_100
    {31,IR(695, 1),IR(46139, 16),IR(1, 0)}, // DebugExpression in opencl_debuginfo_100
    {32,IR(863, 4),IR(46155, 14),IR(1, 0)}, // DebugMacroDef in opencl_debuginfo_100
    {33,IR(846, 3),IR(46169, 16),IR(1, 0)}, // DebugMacroUndef in opencl_debuginfo_100
    {34,IR(1080, 7),IR(47924, 20),IR(1, 0)}, // DebugImportedEntity in opencl_debuginfo_100
    {35,IR(849, 2),IR(47944, 12),IR(1, 0)}, // DebugSource in opencl_debuginfo_100
    {36,IR(1087, 8),IR(48529, 17),IR(1, 0)}, // DebugModuleINTEL in opencl_debuginfo_100
    {0,IR(10, 1),IR(48546, 5),IR(1, 0)}, // acos in opencl_std_100
    {1,IR(10, 1),IR(48551, 6),IR(1, 0)}, // acosh in opencl_std_100
    {2,IR(10, 1),IR(48557, 7),IR(1, 0)}, // acospi in opencl_std_100
    {3,IR(10, 1),IR(48564, 5),IR(1, 0)}, // asin in opencl_std_100
    {4,IR(10, 1),IR(48569, 6),IR(1, 0)}, // asinh in opencl_std_100
    {5,IR(10, 1),IR(48575, 7),IR(1, 0)}, // asinpi in opencl_std_100
    {6,IR(10, 1),IR(48582, 5),IR(1, 0)}, // atan in opencl_std_100
    {7,IR(36, 2),IR(48587, 6),IR(1, 0)}, // atan2 in opencl_std_100
    {8,IR(10, 1),IR(48593, 6),IR(1, 0)}, // atanh in opencl_std_100
    {9,IR(10, 1),IR(48599, 7),IR(1, 0)}, // atanpi in opencl_std_100
    {10,IR(36, 2),IR(48606, 8),IR(1, 0)}, // atan2pi in opencl_std_100
    {11,IR(10, 1),IR(48614, 5),IR(1, 0)}, // cbrt in opencl_std_100
    {12,IR(10, 1),IR(48619, 5),IR(1, 0)}, // ceil in opencl_std_100
    {13,IR(36, 2),IR(48624, 9),IR(1, 0)}, // copysign in opencl_std_100
    {14,IR(10, 1),IR(48633, 4),IR(1, 0)}, // cos in opencl_std_100
    {15,IR(10, 1),IR(48637, 5),IR(1, 0)}, // cosh in opencl_std_100
    {16,IR(10, 1),IR(48642, 6),IR(1, 0)}, // cospi in opencl_std_100
    {17,IR(10, 1),IR(48648, 5),IR(1, 0)}, // erfc in opencl_std_100
    {18,IR(10, 1),IR(48653, 4),IR(1, 0)}, // erf in opencl_std_100
    {19,IR(10, 1),IR(48657, 4),IR(1, 0)}, // exp in opencl_std_100
    {20,IR(10, 1),IR(48661, 5),IR(1, 0)}, // exp2 in opencl_std_100
    {21,IR(10, 1),IR(48666, 6),IR(1, 0)}, // exp10 in opencl_std_100
    {22,IR(10, 1),IR(48672, 6),IR(1, 0)}, // expm1 in opencl_std_100
    {23,IR(10, 1),IR(48678, 5),IR(1, 0)}, // fabs in opencl_std_100
    {24,IR(36, 2),IR(48683, 5),IR(1, 0)}, // fdim in opencl_std_100
    {25,IR(10, 1),IR(48688, 6),IR(1, 0)}, // floor in opencl_std_100
    {26,IR(33, 3),IR(48694, 4),IR(1, 0)}, // fma in opencl_std_100
    {27,IR(36, 2),IR(48698, 5),IR(1, 0)}, // fmax in opencl_std_100
    {28,IR(36, 2),IR(48703, 5),IR(1, 0)}, // fmin in opencl_std_100
    {29,IR(36, 2),IR(48708, 5),IR(1, 0)}, // fmod in opencl_std_100
    {30,IR(36, 2),IR(48713, 6),IR(1, 0)}, // fract in opencl_std_100
    {31,IR(36, 2),IR(48719, 6),IR(1, 0)}, // frexp in opencl_std_100
    {32,IR(36, 2),IR(48725, 6),IR(1, 0)}, // hypot in opencl_std_100
    {33,IR(10, 1),IR(48731, 6),IR(1, 0)}, // ilogb in opencl_std_100
    {34,IR(36, 2),IR(48737, 6),IR(1, 0)}, // ldexp in opencl_std_100
    {35,IR(10, 1),IR(48743, 7),IR(1, 0)}, // lgamma in opencl_std_100
    {36,IR(36, 2),IR(48750, 9),IR(1, 0)}, // lgamma_r in opencl_std_100
    {37,IR(10, 1),IR(48759, 4),IR(1, 0)}, // log in opencl_std_100
    {38,IR(10, 1),IR(48763, 5),IR(1, 0)}, // log2 in opencl_std_100
    {39,IR(10, 1),IR(48768, 6),IR(1, 0)}, // log10 in opencl_std_100
    {40,IR(10, 1),IR(48774, 6),IR(1, 0)}, // log1p in opencl_std_100
    {41,IR(10, 1),IR(48780, 5),IR(1, 0)}, // logb in opencl_std_100
    {42,IR(33, 3),IR(48785, 4),IR(1, 0)}, // mad in opencl_std_100
    {43,IR(36, 2),IR(48789, 7),IR(1, 0)}, // maxmag in opencl_std_100
    {44,IR(36, 2),IR(48796, 7),IR(1, 0)}, // minmag in opencl_std_100
    {45,IR(36, 2),IR(48803, 5),IR(1, 0)}, // modf in opencl_std_100
    {46,IR(10, 1),IR(48808, 4),IR(1, 0)}, // nan in opencl_std_100
    {47,IR(36, 2),IR(48812, 10),IR(1, 0)}, // nextafter in opencl_std_100
    {48,IR(36, 2),IR(48822, 4),IR(1, 0)}, // pow in opencl_std_100
    {49,IR(36, 2),IR(48826, 5),IR(1, 0)}, // pown in opencl_std_100
    {50,IR(36, 2),IR(48831, 5),IR(1, 0)}, // powr in opencl_std_100
    {51,IR(36, 2),IR(48836, 10),IR(1, 0)}, // remainder in opencl_std_100
    {52,IR(33, 3),IR(48846, 7),IR(1, 0)}, // remquo in opencl_std_100
    {53,IR(10, 1),IR(48853, 5),IR(1, 0)}, // rint in opencl_std_100
    {54,IR(36, 2),IR(48858, 6),IR(1, 0)}, // rootn in opencl_std_100
    {55,IR(10, 1),IR(48864, 6),IR(1, 0)}, // round in opencl_std_100
    {56,IR(10, 1),IR(48870, 6),IR(1, 0)}, // rsqrt in opencl_std_100
    {57,IR(10, 1),IR(48876, 4),IR(1, 0)}, // sin in opencl_std_100
    {58,IR(36, 2),IR(48880, 7),IR(1, 0)}, // sincos in opencl_std_100
    {59,IR(10, 1),IR(48887, 5),IR(1, 0)}, // sinh in opencl_std_100
    {60,IR(10, 1),IR(48892, 6),IR(1, 0)}, // sinpi in opencl_std_100
    {61,IR(10, 1),IR(48898, 5),IR(1, 0)}, // sqrt in opencl_std_100
    {62,IR(10, 1),IR(48903, 4),IR(1, 0)}, // tan in opencl_std_100
    {63,IR(10, 1),IR(48907, 5),IR(1, 0)}, // tanh in opencl_std_100
    {64,IR(10, 1),IR(48912, 6),IR(1, 0)}, // tanpi in opencl_std_100
    {65,IR(10, 1),IR(48918, 7),IR(1, 0)}, // tgamma in opencl_std_100
    {66,IR(10, 1),IR(48925, 6),IR(1, 0)}, // trunc in opencl_std_100
    {67,IR(10, 1),IR(48931, 9),IR(1, 0)}, // half_cos in opencl_std_100
    {68,IR(36, 2),IR(48940, 12),IR(1, 0)}, // half_divide in opencl_std_100
    {69,IR(10, 1),IR(48952, 9),IR(1, 0)}, // half_exp in opencl_std_100
    {70,IR(10, 1),IR(48961, 10),IR(1, 0)}, // half_exp2 in opencl_std_100
    {71,IR(10, 1),IR(48971, 11),IR(1, 0)}, // half_exp10 in opencl_std_100
    {72,IR(10, 1),IR(48982, 9),IR(1, 0)}, // half_log in opencl_std_100
    {73,IR(10, 1),IR(48991, 10),IR(1, 0)}, // half_log2 in opencl_std_100
    {74,IR(10, 1),IR(49001, 11),IR(1, 0)}, // half_log10 in opencl_std_100
    {75,IR(36, 2),IR(49012, 10),IR(1, 0)}, // half_powr in opencl_std_100
    {76,IR(10, 1),IR(49022, 11),IR(1, 0)}, // half_recip in opencl_std_100
    {77,IR(10, 1),IR(49033, 11),IR(1, 0)}, // half_rsqrt in opencl_std_100
    {78,IR(10, 1),IR(49044, 9),IR(1, 0)}, // half_sin in opencl_std_100
    {79,IR(10, 1),IR(49053, 10),IR(1, 0)}, // half_sqrt in opencl_std_100
    {80,IR(10, 1),IR(49063, 9),IR(1, 0)}, // half_tan in opencl_std_100
    {81,IR(10, 1),IR(49072, 11),IR(1, 0)}, // native_cos in opencl_std_100
    {82,IR(36, 2),IR(49083, 14),IR(1, 0)}, // native_divide in opencl_std_100
    {83,IR(10, 1),IR(49097, 11),IR(1, 0)}, // native_exp in opencl_std_100
    {84,IR(10, 1),IR(49108, 12),IR(1, 0)}, // native_exp2 in opencl_std_100
    {85,IR(10, 1),IR(49120, 13),IR(1, 0)}, // native_exp10 in opencl_std_100
    {86,IR(10, 1),IR(49133, 11),IR(1, 0)}, // native_log in opencl_std_100
    {87,IR(10, 1),IR(49144, 12),IR(1, 0)}, // native_log2 in opencl_std_100
    {88,IR(10, 1),IR(49156, 13),IR(1, 0)}, // native_log10 in opencl_std_100
    {89,IR(36, 2),IR(49169, 12),IR(1, 0)}, // native_powr in opencl_std_100
    {90,IR(10, 1),IR(49181, 13),IR(1, 0)}, // native_recip in opencl_std_100
    {91,IR(10, 1),IR(49194, 13),IR(1, 0)}, // native_rsqrt in opencl_std_100
    {92,IR(10, 1),IR(49207, 11),IR(1, 0)}, // native_sin in opencl_std_100
    {93,IR(10, 1),IR(49218, 12),IR(1, 0)}, // native_sqrt in opencl_std_100
    {94,IR(10, 1),IR(49230, 11),IR(1, 0)}, // native_tan in opencl_std_100
    {95,IR(33, 3),IR(49241, 7),IR(1, 0)}, // fclamp in opencl_std_100
    {96,IR(10, 1),IR(49248, 8),IR(1, 0)}, // degrees in opencl_std_100
    {97,IR(36, 2),IR(49256, 12),IR(1, 0)}, // fmax_common in opencl_std_100
    {98,IR(36, 2),IR(49268, 12),IR(1, 0)}, // fmin_common in opencl_std_100
    {99,IR(33, 3),IR(49280, 4),IR(1, 0)}, // mix in opencl_std_100
    {100,IR(10, 1),IR(49284, 8),IR(1, 0)}, // radians in opencl_std_100
    {101,IR(36, 2),IR(49292, 5),IR(1, 0)}, // step in opencl_std_100
    {102,IR(33, 3),IR(49297, 11),IR(1, 0)}, // smoothstep in opencl_std_100
    {103,IR(10, 1),IR(49308, 5),IR(1, 0)}, // sign in opencl_std_100
    {104,IR(36, 2),IR(49313, 6),IR(1, 0)}, // cross in opencl_std_100
    {105,IR(36, 2),IR(49319, 9),IR(1, 0)}, // distance in opencl_std_100
    {106,IR(10, 1),IR(49328, 7),IR(1, 0)}, // length in opencl_std_100
    {107,IR(10, 1),IR(49335, 10),IR(1, 0)}, // normalize in opencl_std_100
    {108,IR(36, 2),IR(49345, 14),IR(1, 0)}, // fast_distance in opencl_std_100
    {109,IR(10, 1),IR(49359, 12),IR(1, 0)}, // fast_length in opencl_std_100
    {110,IR(10, 1),IR(49371, 15),IR(1, 0)}, // fast_normalize in opencl_std_100
    {141,IR(10, 1),IR(49386, 6),IR(1, 0)}, // s_abs in opencl_std_100
    {142,IR(36, 2),IR(49392, 11),IR(1, 0)}, // s_abs_diff in opencl_std_100
    {143,IR(36, 2),IR(49403, 10),IR(1, 0)}, // s_add_sat in opencl_std_100
    {144,IR(36, 2),IR(49413, 10),IR(1, 0)}, // u_add_sat in opencl_std_100
    {145,IR(36, 2),IR(49423, 7),IR(1, 0)}, // s_hadd in opencl_std_100
    {146,IR(36, 2),IR(49430, 7),IR(1, 0)}, // u_hadd in opencl_std_100
    {147,IR(36, 2),IR(49437, 8),IR(1, 0)}, // s_rhadd in opencl_std_100
    {148,IR(36, 2),IR(49445, 8),IR(1, 0)}, // u_rhadd in opencl_std_100
    {149,IR(33, 3),IR(49453, 8),IR(1, 0)}, // s_clamp in opencl_std_100
    {150,IR(33, 3),IR(49461, 8),IR(1, 0)}, // u_clamp in opencl_std_100
    {151,IR(10, 1),IR(49469, 4),IR(1, 0)}, // clz in opencl_std_100
    {152,IR(10, 1),IR(49473, 4),IR(1, 0)}, // ctz in opencl_std_100
    {153,IR(33, 3),IR(49477, 9),IR(1, 0)}, // s_mad_hi in opencl_std_100
    {154,IR(33, 3),IR(49486, 10),IR(1, 0)}, // u_mad_sat in opencl_std_100
    {155,IR(33, 3),IR(49496, 10),IR(1, 0)}, // s_mad_sat in opencl_std_100
    {156,IR(36, 2),IR(49506, 6),IR(1, 0)}, // s_max in opencl_std_100
    {157,IR(36, 2),IR(49512, 6),IR(1, 0)}, // u_max in opencl_std_100
    {158,IR(36, 2),IR(49518, 6),IR(1, 0)}, // s_min in opencl_std_100
    {159,IR(36, 2),IR(49524, 6),IR(1, 0)}, // u_min in opencl_std_100
    {160,IR(36, 2),IR(49530, 9),IR(1, 0)}, // s_mul_hi in opencl_std_100
    {161,IR(36, 2),IR(49539, 7),IR(1, 0)}, // rotate in opencl_std_100
    {162,IR(36, 2),IR(49546, 10),IR(1, 0)}, // s_sub_sat in opencl_std_100
    {163,IR(36, 2),IR(49556, 10),IR(1, 0)}, // u_sub_sat in opencl_std_100
    {164,IR(36, 2),IR(49566, 11),IR(1, 0)}, // u_upsample in opencl_std_100
    {165,IR(36, 2),IR(49577, 11),IR(1, 0)}, // s_upsample in opencl_std_100
    {166,IR(10, 1),IR(49588, 9),IR(1, 0)}, // popcount in opencl_std_100
    {167,IR(33, 3),IR(49597, 8),IR(1, 0)}, // s_mad24 in opencl_std_100
    {168,IR(33, 3),IR(49605, 8),IR(1, 0)}, // u_mad24 in opencl_std_100
    {169,IR(36, 2),IR(49613, 8),IR(1, 0)}, // s_mul24 in opencl_std_100
    {170,IR(36, 2),IR(49621, 8),IR(1, 0)}, // u_mul24 in opencl_std_100
    {171,IR(1095, 3),IR(49629, 7),IR(1, 0)}, // vloadn in opencl_std_100
    {172,IR(33, 3),IR(49636, 8),IR(1, 0)}, // vstoren in opencl_std_100
    {173,IR(36, 2),IR(49644, 11),IR(1, 0)}, // vload_half in opencl_std_100
    {174,IR(1095, 3),IR(49655, 12),IR(1, 0)}, // vload_halfn in opencl_std_100
    {175,IR(33, 3),IR(49667, 12),IR(1, 0)}, // vstore_half in opencl_std_100
    {176,IR(1098, 4),IR(49679, 14),IR(1, 0)}, // vstore_half_r in opencl_std_100
    {177,IR(33, 3),IR(49693, 13),IR(1, 0)}, // vstore_halfn in opencl_std_100
    {178,IR(1098, 4),IR(49706, 15),IR(1, 0)}, // vstore_halfn_r in opencl_std_100
    {179,IR(1095, 3),IR(49721, 13),IR(1, 0)}, // vloada_halfn in opencl_std_100
    {180,IR(33, 3),IR(49734, 14),IR(1, 0)}, // vstorea_halfn in opencl_std_100
    {181,IR(1098, 4),IR(49748, 16),IR(1, 0)}, // vstorea_halfn_r in opencl_std_100
    {182,IR(36, 2),IR(49764, 8),IR(1, 0)}, // shuffle in opencl_std_100
    {183,IR(33, 3),IR(49772, 9),IR(1, 0)}, // shuffle2 in opencl_std_100
    {184,IR(168, 2),IR(49781, 7),IR(1, 0)}, // printf in opencl_std_100
    {185,IR(36, 2),IR(49788, 9),IR(1, 0)}, // prefetch in opencl_std_100
    {186,IR(33, 3),IR(49797, 10),IR(1, 0)}, // bitselect in opencl_std_100
    {187,IR(33, 3),IR(49807, 7),IR(1, 0)}, // select in opencl_std_100
    {201,IR(10, 1),IR(49814, 6),IR(1, 0)}, // u_abs in opencl_std_100
    {202,IR(36, 2),IR(49820, 11),IR(1, 0)}, // u_abs_diff in opencl_std_100
    {203,IR(36, 2),IR(49831, 9),IR(1, 0)}, // u_mul_hi in opencl_std_100
    {204,IR(33, 3),IR(49840, 9),IR(1, 0)}, // u_mad_hi in opencl_std_100
    {1,IR(10, 1),IR(49849, 17),IR(1, 0)}, // CubeFaceIndexAMD in spv_amd_gcn_shader
    {2,IR(10, 1),IR(49866, 17),IR(1, 0)}, // CubeFaceCoordAMD in spv_amd_gcn_shader
    {3,IR(0, 0),IR(49883, 8),IR(1, 0)}, // TimeAMD in spv_amd_gcn_shader
    {1,IR(36, 2),IR(49891, 22),IR(1, 0)}, // SwizzleInvocationsAMD in spv_amd_shader_ballot
    {2,IR(36, 2),IR(49913, 28),IR(1, 0)}, // SwizzleInvocationsMaskedAMD in spv_amd_shader_ballot
    {3,IR(33, 3),IR(49941, 19),IR(1, 0)}, // WriteInvocationAMD in spv_amd_shader_ballot
    {4,IR(10, 1),IR(49960, 9),IR(1, 0)}, // MbcntAMD in spv_amd_shader_ballot
    {1,IR(36, 2),IR(49969, 23),IR(1, 0)}, // InterpolateAtVertexAMD in spv_amd_shader_explicit_vertex_parameter
    {1,IR(33, 3),IR(49992, 9),IR(1, 0)}, // FMin3AMD in spv_amd_shader_trinary_minmax
    {2,IR(33, 3),IR(50001, 9),IR(1, 0)}, // UMin3AMD in spv_amd_shader_trinary_minmax
    {3,IR(33, 3),IR(50010, 9),IR(1, 0)}, // SMin3AMD in spv_amd_shader_trinary_minmax
    {4,IR(33, 3),IR(50019, 9),IR(1, 0)}, // FMax3AMD in spv_amd_shader_trinary_minmax
    {5,IR(33, 3),IR(50028, 9),IR(1, 0)}, // UMax3AMD in spv_amd_shader_trinary_minmax
    {6,IR(33, 3),IR(50037, 9),IR(1, 0)}, // SMax3AMD in spv_amd_shader_trinary_minmax
    {7,IR(33, 3),IR(50046, 9),IR(1, 0)}, // FMid3AMD in spv_amd_shader_trinary_minmax
    {8,IR(33, 3),IR(50055, 9),IR(1, 0)}, // UMid3AMD in spv_amd_shader_trinary_minmax
    {9,IR(33, 3),IR(50064, 9),IR(1, 0)}, // SMid3AMD in spv_amd_shader_trinary_minmax
    {0,IR(33, 3),IR(50073, 7),IR(1, 0)}, // ARGMAX in tosa_001000_1
    {1,IR(495, 7),IR(50080, 11),IR(1, 0)}, // AVG_POOL2D in tosa_001000_1
    {2,IR(703, 10),IR(50091, 7),IR(1, 0)}, // CONV2D in tosa_001000_1
    {3,IR(703, 10),IR(50098, 7),IR(1, 0)}, // CONV3D in tosa_001000_1
    {4,IR(703, 10),IR(50105, 17),IR(1, 0)}, // DEPTHWISE_CONV2D in tosa_001000_1
    {5,IR(296, 4),IR(50122, 6),IR(1, 0)}, // FFT2D in tosa_001000_1
    {6,IR(296, 4),IR(50128, 7),IR(1, 0)}, // MATMUL in tosa_001000_1
    {7,IR(623, 5),IR(50135, 11),IR(1, 0)}, // MAX_POOL2D in tosa_001000_1
    {8,IR(36, 2),IR(50146, 7),IR(1, 0)}, // RFFT2D in tosa_001000_1
    {9,IR(713, 9),IR(50153, 17),IR(1, 0)}, // TRANSPOSE_CONV2D in tosa_001000_1
    {10,IR(296, 4),IR(50170, 6),IR(1, 0)}, // CLAMP in tosa_001000_1
    {11,IR(10, 1),IR(50176, 4),IR(1, 0)}, // ERF in tosa_001000_1
    {12,IR(10, 1),IR(50180, 8),IR(1, 0)}, // SIGMOID in tosa_001000_1
    {13,IR(10, 1),IR(50188, 5),IR(1, 0)}, // TANH in tosa_001000_1
    {14,IR(36, 2),IR(50193, 4),IR(1, 0)}, // ADD in tosa_001000_1
    {15,IR(33, 3),IR(50197, 23),IR(1, 0)}, // ARITHMETIC_RIGHT_SHIFT in tosa_001000_1
    {16,IR(36, 2),IR(50220, 12),IR(1, 0)}, // BITWISE_AND in tosa_001000_1
    {17,IR(36, 2),IR(50232, 11),IR(1, 0)}, // BITWISE_OR in tosa_001000_1
    {18,IR(36, 2),IR(50243, 12),IR(1, 0)}, // BITWISE_XOR in tosa_001000_1
    {19,IR(36, 2),IR(50255, 7),IR(1, 0)}, // INTDIV in tosa_001000_1
    {20,IR(36, 2),IR(50262, 12),IR(1, 0)}, // LOGICAL_AND in tosa_001000_1
    {21,IR(36, 2),IR(50274, 19),IR(1, 0)}, // LOGICAL_LEFT_SHIFT in tosa_001000_1
    {22,IR(36, 2),IR(50293, 20),IR(1, 0)}, // LOGICAL_RIGHT_SHIFT in tosa_001000_1
    {23,IR(36, 2),IR(50313, 11),IR(1, 0)}, // LOGICAL_OR in tosa_001000_1
    {24,IR(36, 2),IR(50324, 12),IR(1, 0)}, // LOGICAL_XOR in tosa_001000_1
    {25,IR(33, 3),IR(50336, 8),IR(1, 0)}, // MAXIMUM in tosa_001000_1
    {26,IR(33, 3),IR(50344, 8),IR(1, 0)}, // MINIMUM in tosa_001000_1
    {27,IR(33, 3),IR(50352, 4),IR(1, 0)}, // MUL in tosa_001000_1
    {28,IR(36, 2),IR(50356, 4),IR(1, 0)}, // POW in tosa_001000_1
    {29,IR(36, 2),IR(50360, 4),IR(1, 0)}, // SUB in tosa_001000_1
    {30,IR(36, 2),IR(50364, 6),IR(1, 0)}, // TABLE in tosa_001000_1
    {31,IR(10, 1),IR(50370, 4),IR(1, 0)}, // ABS in tosa_001000_1
    {32,IR(10, 1),IR(50374, 12),IR(1, 0)}, // BITWISE_NOT in tosa_001000_1
    {33,IR(10, 1),IR(50386, 5),IR(1, 0)}, // CEIL in tosa_001000_1
    {34,IR(10, 1),IR(50391, 4),IR(1, 0)}, // CLZ in tosa_001000_1
    {35,IR(10, 1),IR(50395, 4),IR(1, 0)}, // COS in tosa_001000_1
    {36,IR(10, 1),IR(50399, 4),IR(1, 0)}, // EXP in tosa_001000_1
    {37,IR(10, 1),IR(50403, 6),IR(1, 0)}, // FLOOR in tosa_001000_1
    {38,IR(10, 1),IR(50409, 4),IR(1, 0)}, // LOG in tosa_001000_1
    {39,IR(10, 1),IR(50413, 12),IR(1, 0)}, // LOGICAL_NOT in tosa_001000_1
    {40,IR(33, 3),IR(50425, 7),IR(1, 0)}, // NEGATE in tosa_001000_1
    {41,IR(10, 1),IR(50432, 11),IR(1, 0)}, // RECIPROCAL in tosa_001000_1
    {42,IR(10, 1),IR(50443, 6),IR(1, 0)}, // RSQRT in tosa_001000_1
    {43,IR(10, 1),IR(50449, 4),IR(1, 0)}, // SIN in tosa_001000_1
    {44,IR(33, 3),IR(50453, 7),IR(1, 0)}, // SELECT in tosa_001000_1
    {45,IR(36, 2),IR(50460, 6),IR(1, 0)}, // EQUAL in tosa_001000_1
    {46,IR(36, 2),IR(50466, 8),IR(1, 0)}, // GREATER in tosa_001000_1
    {47,IR(36, 2),IR(50474, 14),IR(1, 0)}, // GREATER_EQUAL in tosa_001000_1
    {48,IR(36, 2),IR(50488, 11),IR(1, 0)}, // REDUCE_ALL in tosa_001000_1
    {49,IR(36, 2),IR(50499, 11),IR(1, 0)}, // REDUCE_ANY in tosa_001000_1
    {50,IR(33, 3),IR(50510, 11),IR(1, 0)}, // REDUCE_MAX in tosa_001000_1
    {51,IR(33, 3),IR(50521, 11),IR(1, 0)}, // REDUCE_MIN in tosa_001000_1
    {52,IR(36, 2),IR(50532, 15),IR(1, 0)}, // REDUCE_PRODUCT in tosa_001000_1
    {53,IR(36, 2),IR(50547, 11),IR(1, 0)}, // REDUCE_SUM in tosa_001000_1
    {54,IR(168, 2),IR(50558, 7),IR(1, 0)}, // CONCAT in tosa_001000_1
    {55,IR(33, 3),IR(50565, 4),IR(1, 0)}, // PAD in tosa_001000_1
    {56,IR(36, 2),IR(50569, 8),IR(1, 0)}, // RESHAPE in tosa_001000_1
    {57,IR(36, 2),IR(50577, 8),IR(1, 0)}, // REVERSE in tosa_001000_1
    {58,IR(33, 3),IR(50585, 6),IR(1, 0)}, // SLICE in tosa_001000_1
    {59,IR(36, 2),IR(50591, 5),IR(1, 0)}, // TILE in tosa_001000_1
    {60,IR(36, 2),IR(50596, 10),IR(1, 0)}, // TRANSPOSE in tosa_001000_1
    {61,IR(36, 2),IR(50606, 7),IR(1, 0)}, // GATHER in tosa_001000_1
    {62,IR(33, 3),IR(50613, 8),IR(1, 0)}, // SCATTER in tosa_001000_1
    {63,IR(623, 5),IR(50621, 7),IR(1, 0)}, // RESIZE in tosa_001000_1
    {64,IR(10, 1),IR(50628, 5),IR(1, 0)}, // CAST in tosa_001000_1
    {65,IR(703, 10),IR(50633, 8),IR(1, 0)}, // RESCALE in tosa_001000_1
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
    case SPV_EXT_INST_TYPE_TOSA_001000_1: return IR(425, 66);
    default: break;
  }
  return IR(0,0);
}

// Extended instruction opcode names sorted by extended instruction kind, then opcode name.
// The fields in order are:
//   name
//   index into kExtInstByValue
static const std::array<NameIndex, 491> kExtInstNames{{
    {IR(45340, 21), 1}, // DebugCompilationUnit in debuginfo
    {IR(46067, 13), 28}, // DebugDeclare in debuginfo
    {IR(46139, 16), 31}, // DebugExpression in debuginfo
    {IR(45883, 14), 20}, // DebugFunction in debuginfo
    {IR(45858, 25), 19}, // DebugFunctionDeclaration in debuginfo
    {IR(45838, 20), 18}, // DebugGlobalVariable in debuginfo
    {IR(45326, 14), 0}, // DebugInfoNone in debuginfo
    {IR(45970, 15), 25}, // DebugInlinedAt in debuginfo
    {IR(46046, 21), 27}, // DebugInlinedVariable in debuginfo
    {IR(45897, 18), 21}, // DebugLexicalBlock in debuginfo
    {IR(45915, 31), 22}, // DebugLexicalBlockDiscriminator in debuginfo
    {IR(46027, 19), 26}, // DebugLocalVariable in debuginfo
    {IR(46155, 14), 32}, // DebugMacroDef in debuginfo
    {IR(46169, 16), 33}, // DebugMacroUndef in debuginfo
    {IR(45957, 13), 24}, // DebugNoScope in debuginfo
    {IR(46124, 15), 30}, // DebugOperation in debuginfo
    {IR(45946, 11), 23}, // DebugScope in debuginfo
    {IR(45536, 15), 5}, // DebugTypeArray in debuginfo
    {IR(45413, 15), 2}, // DebugTypeBasic in debuginfo
    {IR(45650, 19), 10}, // DebugTypeComposite in debuginfo
    {IR(45598, 14), 9}, // DebugTypeEnum in debuginfo
    {IR(45580, 18), 8}, // DebugTypeFunction in debuginfo
    {IR(45685, 21), 12}, // DebugTypeInheritance in debuginfo
    {IR(45669, 16), 11}, // DebugTypeMember in debuginfo
    {IR(45462, 17), 3}, // DebugTypePointer in debuginfo
    {IR(45706, 21), 13}, // DebugTypePtrToMember in debuginfo
    {IR(45517, 19), 4}, // DebugTypeQualifier in debuginfo
    {IR(45727, 18), 14}, // DebugTypeTemplate in debuginfo
    {IR(45745, 27), 15}, // DebugTypeTemplateParameter in debuginfo
    {IR(45807, 31), 17}, // DebugTypeTemplateParameterPack in debuginfo
    {IR(45772, 35), 16}, // DebugTypeTemplateTemplateParameter in debuginfo
    {IR(45551, 16), 6}, // DebugTypeVector in debuginfo
    {IR(45567, 13), 7}, // DebugTypedef in debuginfo
    {IR(46080, 11), 29}, // DebugValue in debuginfo
    {IR(46279, 5), 50}, // Acos in glsl_std_450
    {IR(46310, 6), 56}, // Acosh in glsl_std_450
    {IR(46274, 5), 49}, // Asin in glsl_std_450
    {IR(46304, 6), 55}, // Asinh in glsl_std_450
    {IR(46284, 5), 51}, // Atan in glsl_std_450
    {IR(46322, 6), 58}, // Atan2 in glsl_std_450
    {IR(46316, 6), 57}, // Atanh in glsl_std_450
    {IR(46235, 5), 42}, // Ceil in glsl_std_450
    {IR(46266, 4), 47}, // Cos in glsl_std_450
    {IR(46294, 5), 53}, // Cosh in glsl_std_450
    {IR(46706, 6), 101}, // Cross in glsl_std_450
    {IR(46254, 8), 45}, // Degrees in glsl_std_450
    {IR(46367, 12), 66}, // Determinant in glsl_std_450
    {IR(46697, 9), 100}, // Distance in glsl_std_450
    {IR(46332, 4), 60}, // Exp in glsl_std_450
    {IR(46340, 5), 62}, // Exp2 in glsl_std_450
    {IR(46207, 5), 37}, // FAbs in glsl_std_450
    {IR(46439, 7), 76}, // FClamp in glsl_std_450
    {IR(46424, 5), 73}, // FMax in glsl_std_450
    {IR(46409, 5), 70}, // FMin in glsl_std_450
    {IR(46460, 5), 79}, // FMix in glsl_std_450
    {IR(46217, 6), 39}, // FSign in glsl_std_450
    {IR(46722, 12), 103}, // FaceForward in glsl_std_450
    {IR(46750, 9), 106}, // FindILsb in glsl_std_450
    {IR(46759, 9), 107}, // FindSMsb in glsl_std_450
    {IR(46768, 9), 108}, // FindUMsb in glsl_std_450
    {IR(46229, 6), 41}, // Floor in glsl_std_450
    {IR(46486, 4), 83}, // Fma in glsl_std_450
    {IR(46240, 6), 43}, // Fract in glsl_std_450
    {IR(46490, 6), 84}, // Frexp in glsl_std_450
    {IR(46496, 12), 85}, // FrexpStruct in glsl_std_450
    {IR(46465, 5), 80}, // IMix in glsl_std_450
    {IR(46777, 22), 109}, // InterpolateAtCentroid in glsl_std_450
    {IR(46819, 20), 111}, // InterpolateAtOffset in glsl_std_450
    {IR(46799, 20), 110}, // InterpolateAtSample in glsl_std_450
    {IR(46355, 12), 65}, // InverseSqrt in glsl_std_450
    {IR(46508, 6), 86}, // Ldexp in glsl_std_450
    {IR(46690, 7), 99}, // Length in glsl_std_450
    {IR(46336, 4), 61}, // Log in glsl_std_450
    {IR(46345, 5), 63}, // Log2 in glsl_std_450
    {IR(46379, 14), 67}, // MatrixInverse in glsl_std_450
    {IR(46393, 5), 68}, // Modf in glsl_std_450
    {IR(46398, 11), 69}, // ModfStruct in glsl_std_450
    {IR(46849, 7), 114}, // NClamp in glsl_std_450
    {IR(46844, 5), 113}, // NMax in glsl_std_450
    {IR(46839, 5), 112}, // NMin in glsl_std_450
    {IR(46712, 10), 102}, // Normalize in glsl_std_450
    {IR(46581, 15), 92}, // PackDouble2x32 in glsl_std_450
    {IR(46568, 13), 91}, // PackHalf2x16 in glsl_std_450
    {IR(46540, 14), 89}, // PackSnorm2x16 in glsl_std_450
    {IR(46514, 13), 87}, // PackSnorm4x8 in glsl_std_450
    {IR(46554, 14), 90}, // PackUnorm2x16 in glsl_std_450
    {IR(46527, 13), 88}, // PackUnorm4x8 in glsl_std_450
    {IR(46328, 4), 59}, // Pow in glsl_std_450
    {IR(46246, 8), 44}, // Radians in glsl_std_450
    {IR(46734, 8), 104}, // Reflect in glsl_std_450
    {IR(46742, 8), 105}, // Refract in glsl_std_450
    {IR(46185, 6), 34}, // Round in glsl_std_450
    {IR(46191, 10), 35}, // RoundEven in glsl_std_450
    {IR(46212, 5), 38}, // SAbs in glsl_std_450
    {IR(46453, 7), 78}, // SClamp in glsl_std_450
    {IR(46434, 5), 75}, // SMax in glsl_std_450
    {IR(46419, 5), 72}, // SMin in glsl_std_450
    {IR(46223, 6), 40}, // SSign in glsl_std_450
    {IR(46262, 4), 46}, // Sin in glsl_std_450
    {IR(46289, 5), 52}, // Sinh in glsl_std_450
    {IR(46475, 11), 82}, // SmoothStep in glsl_std_450
    {IR(46350, 5), 64}, // Sqrt in glsl_std_450
    {IR(46470, 5), 81}, // Step in glsl_std_450
    {IR(46270, 4), 48}, // Tan in glsl_std_450
    {IR(46299, 5), 54}, // Tanh in glsl_std_450
    {IR(46201, 6), 36}, // Trunc in glsl_std_450
    {IR(46446, 7), 77}, // UClamp in glsl_std_450
    {IR(46429, 5), 74}, // UMax in glsl_std_450
    {IR(46414, 5), 71}, // UMin in glsl_std_450
    {IR(46673, 17), 98}, // UnpackDouble2x32 in glsl_std_450
    {IR(46628, 15), 95}, // UnpackHalf2x16 in glsl_std_450
    {IR(46596, 16), 93}, // UnpackSnorm2x16 in glsl_std_450
    {IR(46643, 15), 96}, // UnpackSnorm4x8 in glsl_std_450
    {IR(46612, 16), 94}, // UnpackUnorm2x16 in glsl_std_450
    {IR(46658, 15), 97}, // UnpackUnorm4x8 in glsl_std_450
    {IR(46856, 13), 116}, // ArgumentInfo in nonsemantic_clspvreflection
    {IR(46951, 24), 121}, // ArgumentPodPushConstant in nonsemantic_clspvreflection
    {IR(46907, 25), 119}, // ArgumentPodStorageBuffer in nonsemantic_clspvreflection
    {IR(46932, 19), 120}, // ArgumentPodUniform in nonsemantic_clspvreflection
    {IR(47385, 28), 140}, // ArgumentPointerPushConstant in nonsemantic_clspvreflection
    {IR(47413, 23), 141}, // ArgumentPointerUniform in nonsemantic_clspvreflection
    {IR(46975, 21), 122}, // ArgumentSampledImage in nonsemantic_clspvreflection
    {IR(47017, 16), 124}, // ArgumentSampler in nonsemantic_clspvreflection
    {IR(46869, 22), 117}, // ArgumentStorageBuffer in nonsemantic_clspvreflection
    {IR(46996, 21), 123}, // ArgumentStorageImage in nonsemantic_clspvreflection
    {IR(47673, 27), 148}, // ArgumentStorageTexelBuffer in nonsemantic_clspvreflection
    {IR(46891, 16), 118}, // ArgumentUniform in nonsemantic_clspvreflection
    {IR(47700, 27), 149}, // ArgumentUniformTexelBuffer in nonsemantic_clspvreflection
    {IR(47033, 18), 125}, // ArgumentWorkgroup in nonsemantic_clspvreflection
    {IR(47727, 32), 150}, // ConstantDataPointerPushConstant in nonsemantic_clspvreflection
    {IR(47281, 26), 135}, // ConstantDataStorageBuffer in nonsemantic_clspvreflection
    {IR(47307, 20), 136}, // ConstantDataUniform in nonsemantic_clspvreflection
    {IR(47551, 45), 145}, // ImageArgumentInfoChannelDataTypePushConstant in nonsemantic_clspvreflection
    {IR(47633, 40), 147}, // ImageArgumentInfoChannelDataTypeUniform in nonsemantic_clspvreflection
    {IR(47509, 42), 144}, // ImageArgumentInfoChannelOrderPushConstant in nonsemantic_clspvreflection
    {IR(47596, 37), 146}, // ImageArgumentInfoChannelOrderUniform in nonsemantic_clspvreflection
    {IR(4591, 7), 115}, // Kernel in nonsemantic_clspvreflection
    {IR(8016, 15), 137}, // LiteralSampler in nonsemantic_clspvreflection
    {IR(47868, 34), 155}, // NormalizedSamplerMaskPushConstant in nonsemantic_clspvreflection
    {IR(47836, 32), 154}, // PrintfBufferPointerPushConstant in nonsemantic_clspvreflection
    {IR(47810, 26), 153}, // PrintfBufferStorageBuffer in nonsemantic_clspvreflection
    {IR(47799, 11), 152}, // PrintfInfo in nonsemantic_clspvreflection
    {IR(47759, 40), 151}, // ProgramScopeVariablePointerPushConstant in nonsemantic_clspvreflection
    {IR(47471, 38), 143}, // ProgramScopeVariablePointerRelocation in nonsemantic_clspvreflection
    {IR(47436, 35), 142}, // ProgramScopeVariablesStorageBuffer in nonsemantic_clspvreflection
    {IR(47327, 30), 138}, // PropertyRequiredWorkgroupSize in nonsemantic_clspvreflection
    {IR(47147, 30), 130}, // PushConstantEnqueuedLocalSize in nonsemantic_clspvreflection
    {IR(47122, 25), 129}, // PushConstantGlobalOffset in nonsemantic_clspvreflection
    {IR(47177, 23), 131}, // PushConstantGlobalSize in nonsemantic_clspvreflection
    {IR(47225, 26), 133}, // PushConstantNumWorkgroups in nonsemantic_clspvreflection
    {IR(47251, 30), 134}, // PushConstantRegionGroupOffset in nonsemantic_clspvreflection
    {IR(47200, 25), 132}, // PushConstantRegionOffset in nonsemantic_clspvreflection
    {IR(47077, 25), 127}, // SpecConstantGlobalOffset in nonsemantic_clspvreflection
    {IR(47357, 28), 139}, // SpecConstantSubgroupMaxSize in nonsemantic_clspvreflection
    {IR(47102, 20), 128}, // SpecConstantWorkDim in nonsemantic_clspvreflection
    {IR(47051, 26), 126}, // SpecConstantWorkgroupSize in nonsemantic_clspvreflection
    {IR(47902, 22), 156}, // WorkgroupVariableSize in nonsemantic_clspvreflection
    {IR(48023, 21), 197}, // DebugBuildIdentifier in nonsemantic_shader_debuginfo_100
    {IR(45340, 21), 158}, // DebugCompilationUnit in nonsemantic_shader_debuginfo_100
    {IR(46067, 13), 185}, // DebugDeclare in nonsemantic_shader_debuginfo_100
    {IR(48061, 16), 199}, // DebugEntryPoint in nonsemantic_shader_debuginfo_100
    {IR(46139, 16), 188}, // DebugExpression in nonsemantic_shader_debuginfo_100
    {IR(45883, 14), 177}, // DebugFunction in nonsemantic_shader_debuginfo_100
    {IR(45858, 25), 176}, // DebugFunctionDeclaration in nonsemantic_shader_debuginfo_100
    {IR(47956, 24), 193}, // DebugFunctionDefinition in nonsemantic_shader_debuginfo_100
    {IR(45838, 20), 175}, // DebugGlobalVariable in nonsemantic_shader_debuginfo_100
    {IR(47924, 20), 191}, // DebugImportedEntity in nonsemantic_shader_debuginfo_100
    {IR(45326, 14), 157}, // DebugInfoNone in nonsemantic_shader_debuginfo_100
    {IR(45970, 15), 182}, // DebugInlinedAt in nonsemantic_shader_debuginfo_100
    {IR(46046, 21), 184}, // DebugInlinedVariable in nonsemantic_shader_debuginfo_100
    {IR(45897, 18), 178}, // DebugLexicalBlock in nonsemantic_shader_debuginfo_100
    {IR(45915, 31), 179}, // DebugLexicalBlockDiscriminator in nonsemantic_shader_debuginfo_100
    {IR(48001, 10), 195}, // DebugLine in nonsemantic_shader_debuginfo_100
    {IR(46027, 19), 183}, // DebugLocalVariable in nonsemantic_shader_debuginfo_100
    {IR(46155, 14), 189}, // DebugMacroDef in nonsemantic_shader_debuginfo_100
    {IR(46169, 16), 190}, // DebugMacroUndef in nonsemantic_shader_debuginfo_100
    {IR(48011, 12), 196}, // DebugNoLine in nonsemantic_shader_debuginfo_100
    {IR(45957, 13), 181}, // DebugNoScope in nonsemantic_shader_debuginfo_100
    {IR(46124, 15), 187}, // DebugOperation in nonsemantic_shader_debuginfo_100
    {IR(45946, 11), 180}, // DebugScope in nonsemantic_shader_debuginfo_100
    {IR(47944, 12), 192}, // DebugSource in nonsemantic_shader_debuginfo_100
    {IR(47980, 21), 194}, // DebugSourceContinued in nonsemantic_shader_debuginfo_100
    {IR(48044, 17), 198}, // DebugStoragePath in nonsemantic_shader_debuginfo_100
    {IR(45536, 15), 162}, // DebugTypeArray in nonsemantic_shader_debuginfo_100
    {IR(45413, 15), 159}, // DebugTypeBasic in nonsemantic_shader_debuginfo_100
    {IR(45650, 19), 167}, // DebugTypeComposite in nonsemantic_shader_debuginfo_100
    {IR(45598, 14), 166}, // DebugTypeEnum in nonsemantic_shader_debuginfo_100
    {IR(45580, 18), 165}, // DebugTypeFunction in nonsemantic_shader_debuginfo_100
    {IR(45685, 21), 169}, // DebugTypeInheritance in nonsemantic_shader_debuginfo_100
    {IR(48077, 16), 200}, // DebugTypeMatrix in nonsemantic_shader_debuginfo_100
    {IR(45669, 16), 168}, // DebugTypeMember in nonsemantic_shader_debuginfo_100
    {IR(45462, 17), 160}, // DebugTypePointer in nonsemantic_shader_debuginfo_100
    {IR(45706, 21), 170}, // DebugTypePtrToMember in nonsemantic_shader_debuginfo_100
    {IR(45517, 19), 161}, // DebugTypeQualifier in nonsemantic_shader_debuginfo_100
    {IR(45727, 18), 171}, // DebugTypeTemplate in nonsemantic_shader_debuginfo_100
    {IR(45745, 27), 172}, // DebugTypeTemplateParameter in nonsemantic_shader_debuginfo_100
    {IR(45807, 31), 174}, // DebugTypeTemplateParameterPack in nonsemantic_shader_debuginfo_100
    {IR(45772, 35), 173}, // DebugTypeTemplateTemplateParameter in nonsemantic_shader_debuginfo_100
    {IR(45551, 16), 163}, // DebugTypeVector in nonsemantic_shader_debuginfo_100
    {IR(45567, 13), 164}, // DebugTypedef in nonsemantic_shader_debuginfo_100
    {IR(46080, 11), 186}, // DebugValue in nonsemantic_shader_debuginfo_100
    {IR(48093, 14), 201}, // Configuration in nonsemantic_vkspreflection
    {IR(48169, 20), 206}, // DescriptorSetBuffer in nonsemantic_vkspreflection
    {IR(48189, 19), 207}, // DescriptorSetImage in nonsemantic_vkspreflection
    {IR(48208, 21), 208}, // DescriptorSetSampler in nonsemantic_vkspreflection
    {IR(48132, 14), 204}, // PushConstants in nonsemantic_vkspreflection
    {IR(48146, 23), 205}, // SpecializationMapEntry in nonsemantic_vkspreflection
    {IR(48107, 13), 202}, // StartCounter in nonsemantic_vkspreflection
    {IR(48120, 12), 203}, // StopCounter in nonsemantic_vkspreflection
    {IR(45340, 21), 210}, // DebugCompilationUnit in opencl_debuginfo_100
    {IR(46067, 13), 237}, // DebugDeclare in opencl_debuginfo_100
    {IR(46139, 16), 240}, // DebugExpression in opencl_debuginfo_100
    {IR(45883, 14), 229}, // DebugFunction in opencl_debuginfo_100
    {IR(45858, 25), 228}, // DebugFunctionDeclaration in opencl_debuginfo_100
    {IR(45838, 20), 227}, // DebugGlobalVariable in opencl_debuginfo_100
    {IR(47924, 20), 243}, // DebugImportedEntity in opencl_debuginfo_100
    {IR(45326, 14), 209}, // DebugInfoNone in opencl_debuginfo_100
    {IR(45970, 15), 234}, // DebugInlinedAt in opencl_debuginfo_100
    {IR(46046, 21), 236}, // DebugInlinedVariable in opencl_debuginfo_100
    {IR(45897, 18), 230}, // DebugLexicalBlock in opencl_debuginfo_100
    {IR(45915, 31), 231}, // DebugLexicalBlockDiscriminator in opencl_debuginfo_100
    {IR(46027, 19), 235}, // DebugLocalVariable in opencl_debuginfo_100
    {IR(46155, 14), 241}, // DebugMacroDef in opencl_debuginfo_100
    {IR(46169, 16), 242}, // DebugMacroUndef in opencl_debuginfo_100
    {IR(48529, 17), 245}, // DebugModuleINTEL in opencl_debuginfo_100
    {IR(45957, 13), 233}, // DebugNoScope in opencl_debuginfo_100
    {IR(46124, 15), 239}, // DebugOperation in opencl_debuginfo_100
    {IR(45946, 11), 232}, // DebugScope in opencl_debuginfo_100
    {IR(47944, 12), 244}, // DebugSource in opencl_debuginfo_100
    {IR(45536, 15), 214}, // DebugTypeArray in opencl_debuginfo_100
    {IR(45413, 15), 211}, // DebugTypeBasic in opencl_debuginfo_100
    {IR(45650, 19), 219}, // DebugTypeComposite in opencl_debuginfo_100
    {IR(45598, 14), 218}, // DebugTypeEnum in opencl_debuginfo_100
    {IR(45580, 18), 217}, // DebugTypeFunction in opencl_debuginfo_100
    {IR(45685, 21), 221}, // DebugTypeInheritance in opencl_debuginfo_100
    {IR(45669, 16), 220}, // DebugTypeMember in opencl_debuginfo_100
    {IR(45462, 17), 212}, // DebugTypePointer in opencl_debuginfo_100
    {IR(45706, 21), 222}, // DebugTypePtrToMember in opencl_debuginfo_100
    {IR(45517, 19), 213}, // DebugTypeQualifier in opencl_debuginfo_100
    {IR(45727, 18), 223}, // DebugTypeTemplate in opencl_debuginfo_100
    {IR(45745, 27), 224}, // DebugTypeTemplateParameter in opencl_debuginfo_100
    {IR(45807, 31), 226}, // DebugTypeTemplateParameterPack in opencl_debuginfo_100
    {IR(45772, 35), 225}, // DebugTypeTemplateTemplateParameter in opencl_debuginfo_100
    {IR(45551, 16), 215}, // DebugTypeVector in opencl_debuginfo_100
    {IR(45567, 13), 216}, // DebugTypedef in opencl_debuginfo_100
    {IR(46080, 11), 238}, // DebugValue in opencl_debuginfo_100
    {IR(48546, 5), 246}, // acos in opencl_std_100
    {IR(48551, 6), 247}, // acosh in opencl_std_100
    {IR(48557, 7), 248}, // acospi in opencl_std_100
    {IR(48564, 5), 249}, // asin in opencl_std_100
    {IR(48569, 6), 250}, // asinh in opencl_std_100
    {IR(48575, 7), 251}, // asinpi in opencl_std_100
    {IR(48582, 5), 252}, // atan in opencl_std_100
    {IR(48587, 6), 253}, // atan2 in opencl_std_100
    {IR(48606, 8), 256}, // atan2pi in opencl_std_100
    {IR(48593, 6), 254}, // atanh in opencl_std_100
    {IR(48599, 7), 255}, // atanpi in opencl_std_100
    {IR(49797, 10), 402}, // bitselect in opencl_std_100
    {IR(48614, 5), 257}, // cbrt in opencl_std_100
    {IR(48619, 5), 258}, // ceil in opencl_std_100
    {IR(49469, 4), 367}, // clz in opencl_std_100
    {IR(48624, 9), 259}, // copysign in opencl_std_100
    {IR(48633, 4), 260}, // cos in opencl_std_100
    {IR(48637, 5), 261}, // cosh in opencl_std_100
    {IR(48642, 6), 262}, // cospi in opencl_std_100
    {IR(49313, 6), 350}, // cross in opencl_std_100
    {IR(49473, 4), 368}, // ctz in opencl_std_100
    {IR(49248, 8), 342}, // degrees in opencl_std_100
    {IR(49319, 9), 351}, // distance in opencl_std_100
    {IR(48653, 4), 264}, // erf in opencl_std_100
    {IR(48648, 5), 263}, // erfc in opencl_std_100
    {IR(48657, 4), 265}, // exp in opencl_std_100
    {IR(48666, 6), 267}, // exp10 in opencl_std_100
    {IR(48661, 5), 266}, // exp2 in opencl_std_100
    {IR(48672, 6), 268}, // expm1 in opencl_std_100
    {IR(48678, 5), 269}, // fabs in opencl_std_100
    {IR(49345, 14), 354}, // fast_distance in opencl_std_100
    {IR(49359, 12), 355}, // fast_length in opencl_std_100
    {IR(49371, 15), 356}, // fast_normalize in opencl_std_100
    {IR(49241, 7), 341}, // fclamp in opencl_std_100
    {IR(48683, 5), 270}, // fdim in opencl_std_100
    {IR(48688, 6), 271}, // floor in opencl_std_100
    {IR(48694, 4), 272}, // fma in opencl_std_100
    {IR(48698, 5), 273}, // fmax in opencl_std_100
    {IR(49256, 12), 343}, // fmax_common in opencl_std_100
    {IR(48703, 5), 274}, // fmin in opencl_std_100
    {IR(49268, 12), 344}, // fmin_common in opencl_std_100
    {IR(48708, 5), 275}, // fmod in opencl_std_100
    {IR(48713, 6), 276}, // fract in opencl_std_100
    {IR(48719, 6), 277}, // frexp in opencl_std_100
    {IR(48931, 9), 313}, // half_cos in opencl_std_100
    {IR(48940, 12), 314}, // half_divide in opencl_std_100
    {IR(48952, 9), 315}, // half_exp in opencl_std_100
    {IR(48971, 11), 317}, // half_exp10 in opencl_std_100
    {IR(48961, 10), 316}, // half_exp2 in opencl_std_100
    {IR(48982, 9), 318}, // half_log in opencl_std_100
    {IR(49001, 11), 320}, // half_log10 in opencl_std_100
    {IR(48991, 10), 319}, // half_log2 in opencl_std_100
    {IR(49012, 10), 321}, // half_powr in opencl_std_100
    {IR(49022, 11), 322}, // half_recip in opencl_std_100
    {IR(49033, 11), 323}, // half_rsqrt in opencl_std_100
    {IR(49044, 9), 324}, // half_sin in opencl_std_100
    {IR(49053, 10), 325}, // half_sqrt in opencl_std_100
    {IR(49063, 9), 326}, // half_tan in opencl_std_100
    {IR(48725, 6), 278}, // hypot in opencl_std_100
    {IR(48731, 6), 279}, // ilogb in opencl_std_100
    {IR(48737, 6), 280}, // ldexp in opencl_std_100
    {IR(49328, 7), 352}, // length in opencl_std_100
    {IR(48743, 7), 281}, // lgamma in opencl_std_100
    {IR(48750, 9), 282}, // lgamma_r in opencl_std_100
    {IR(48759, 4), 283}, // log in opencl_std_100
    {IR(48768, 6), 285}, // log10 in opencl_std_100
    {IR(48774, 6), 286}, // log1p in opencl_std_100
    {IR(48763, 5), 284}, // log2 in opencl_std_100
    {IR(48780, 5), 287}, // logb in opencl_std_100
    {IR(48785, 4), 288}, // mad in opencl_std_100
    {IR(48789, 7), 289}, // maxmag in opencl_std_100
    {IR(48796, 7), 290}, // minmag in opencl_std_100
    {IR(49280, 4), 345}, // mix in opencl_std_100
    {IR(48803, 5), 291}, // modf in opencl_std_100
    {IR(48808, 4), 292}, // nan in opencl_std_100
    {IR(49072, 11), 327}, // native_cos in opencl_std_100
    {IR(49083, 14), 328}, // native_divide in opencl_std_100
    {IR(49097, 11), 329}, // native_exp in opencl_std_100
    {IR(49120, 13), 331}, // native_exp10 in opencl_std_100
    {IR(49108, 12), 330}, // native_exp2 in opencl_std_100
    {IR(49133, 11), 332}, // native_log in opencl_std_100
    {IR(49156, 13), 334}, // native_log10 in opencl_std_100
    {IR(49144, 12), 333}, // native_log2 in opencl_std_100
    {IR(49169, 12), 335}, // native_powr in opencl_std_100
    {IR(49181, 13), 336}, // native_recip in opencl_std_100
    {IR(49194, 13), 337}, // native_rsqrt in opencl_std_100
    {IR(49207, 11), 338}, // native_sin in opencl_std_100
    {IR(49218, 12), 339}, // native_sqrt in opencl_std_100
    {IR(49230, 11), 340}, // native_tan in opencl_std_100
    {IR(48812, 10), 293}, // nextafter in opencl_std_100
    {IR(49335, 10), 353}, // normalize in opencl_std_100
    {IR(49588, 9), 382}, // popcount in opencl_std_100
    {IR(48822, 4), 294}, // pow in opencl_std_100
    {IR(48826, 5), 295}, // pown in opencl_std_100
    {IR(48831, 5), 296}, // powr in opencl_std_100
    {IR(49788, 9), 401}, // prefetch in opencl_std_100
    {IR(49781, 7), 400}, // printf in opencl_std_100
    {IR(49284, 8), 346}, // radians in opencl_std_100
    {IR(48836, 10), 297}, // remainder in opencl_std_100
    {IR(48846, 7), 298}, // remquo in opencl_std_100
    {IR(48853, 5), 299}, // rint in opencl_std_100
    {IR(48858, 6), 300}, // rootn in opencl_std_100
    {IR(49539, 7), 377}, // rotate in opencl_std_100
    {IR(48864, 6), 301}, // round in opencl_std_100
    {IR(48870, 6), 302}, // rsqrt in opencl_std_100
    {IR(49386, 6), 357}, // s_abs in opencl_std_100
    {IR(49392, 11), 358}, // s_abs_diff in opencl_std_100
    {IR(49403, 10), 359}, // s_add_sat in opencl_std_100
    {IR(49453, 8), 365}, // s_clamp in opencl_std_100
    {IR(49423, 7), 361}, // s_hadd in opencl_std_100
    {IR(49597, 8), 383}, // s_mad24 in opencl_std_100
    {IR(49477, 9), 369}, // s_mad_hi in opencl_std_100
    {IR(49496, 10), 371}, // s_mad_sat in opencl_std_100
    {IR(49506, 6), 372}, // s_max in opencl_std_100
    {IR(49518, 6), 374}, // s_min in opencl_std_100
    {IR(49613, 8), 385}, // s_mul24 in opencl_std_100
    {IR(49530, 9), 376}, // s_mul_hi in opencl_std_100
    {IR(49437, 8), 363}, // s_rhadd in opencl_std_100
    {IR(49546, 10), 378}, // s_sub_sat in opencl_std_100
    {IR(49577, 11), 381}, // s_upsample in opencl_std_100
    {IR(49807, 7), 403}, // select in opencl_std_100
    {IR(49764, 8), 398}, // shuffle in opencl_std_100
    {IR(49772, 9), 399}, // shuffle2 in opencl_std_100
    {IR(49308, 5), 349}, // sign in opencl_std_100
    {IR(48876, 4), 303}, // sin in opencl_std_100
    {IR(48880, 7), 304}, // sincos in opencl_std_100
    {IR(48887, 5), 305}, // sinh in opencl_std_100
    {IR(48892, 6), 306}, // sinpi in opencl_std_100
    {IR(49297, 11), 348}, // smoothstep in opencl_std_100
    {IR(48898, 5), 307}, // sqrt in opencl_std_100
    {IR(49292, 5), 347}, // step in opencl_std_100
    {IR(48903, 4), 308}, // tan in opencl_std_100
    {IR(48907, 5), 309}, // tanh in opencl_std_100
    {IR(48912, 6), 310}, // tanpi in opencl_std_100
    {IR(48918, 7), 311}, // tgamma in opencl_std_100
    {IR(48925, 6), 312}, // trunc in opencl_std_100
    {IR(49814, 6), 404}, // u_abs in opencl_std_100
    {IR(49820, 11), 405}, // u_abs_diff in opencl_std_100
    {IR(49413, 10), 360}, // u_add_sat in opencl_std_100
    {IR(49461, 8), 366}, // u_clamp in opencl_std_100
    {IR(49430, 7), 362}, // u_hadd in opencl_std_100
    {IR(49605, 8), 384}, // u_mad24 in opencl_std_100
    {IR(49840, 9), 407}, // u_mad_hi in opencl_std_100
    {IR(49486, 10), 370}, // u_mad_sat in opencl_std_100
    {IR(49512, 6), 373}, // u_max in opencl_std_100
    {IR(49524, 6), 375}, // u_min in opencl_std_100
    {IR(49621, 8), 386}, // u_mul24 in opencl_std_100
    {IR(49831, 9), 406}, // u_mul_hi in opencl_std_100
    {IR(49445, 8), 364}, // u_rhadd in opencl_std_100
    {IR(49556, 10), 379}, // u_sub_sat in opencl_std_100
    {IR(49566, 11), 380}, // u_upsample in opencl_std_100
    {IR(49644, 11), 389}, // vload_half in opencl_std_100
    {IR(49655, 12), 390}, // vload_halfn in opencl_std_100
    {IR(49721, 13), 395}, // vloada_halfn in opencl_std_100
    {IR(49629, 7), 387}, // vloadn in opencl_std_100
    {IR(49667, 12), 391}, // vstore_half in opencl_std_100
    {IR(49679, 14), 392}, // vstore_half_r in opencl_std_100
    {IR(49693, 13), 393}, // vstore_halfn in opencl_std_100
    {IR(49706, 15), 394}, // vstore_halfn_r in opencl_std_100
    {IR(49734, 14), 396}, // vstorea_halfn in opencl_std_100
    {IR(49748, 16), 397}, // vstorea_halfn_r in opencl_std_100
    {IR(49636, 8), 388}, // vstoren in opencl_std_100
    {IR(49866, 17), 409}, // CubeFaceCoordAMD in spv_amd_gcn_shader
    {IR(49849, 17), 408}, // CubeFaceIndexAMD in spv_amd_gcn_shader
    {IR(49883, 8), 410}, // TimeAMD in spv_amd_gcn_shader
    {IR(49960, 9), 414}, // MbcntAMD in spv_amd_shader_ballot
    {IR(49891, 22), 411}, // SwizzleInvocationsAMD in spv_amd_shader_ballot
    {IR(49913, 28), 412}, // SwizzleInvocationsMaskedAMD in spv_amd_shader_ballot
    {IR(49941, 19), 413}, // WriteInvocationAMD in spv_amd_shader_ballot
    {IR(49969, 23), 415}, // InterpolateAtVertexAMD in spv_amd_shader_explicit_vertex_parameter
    {IR(50019, 9), 419}, // FMax3AMD in spv_amd_shader_trinary_minmax
    {IR(50046, 9), 422}, // FMid3AMD in spv_amd_shader_trinary_minmax
    {IR(49992, 9), 416}, // FMin3AMD in spv_amd_shader_trinary_minmax
    {IR(50037, 9), 421}, // SMax3AMD in spv_amd_shader_trinary_minmax
    {IR(50064, 9), 424}, // SMid3AMD in spv_amd_shader_trinary_minmax
    {IR(50010, 9), 418}, // SMin3AMD in spv_amd_shader_trinary_minmax
    {IR(50028, 9), 420}, // UMax3AMD in spv_amd_shader_trinary_minmax
    {IR(50055, 9), 423}, // UMid3AMD in spv_amd_shader_trinary_minmax
    {IR(50001, 9), 417}, // UMin3AMD in spv_amd_shader_trinary_minmax
    {IR(50370, 4), 456}, // ABS in tosa_001000_1
    {IR(50193, 4), 439}, // ADD in tosa_001000_1
    {IR(50073, 7), 425}, // ARGMAX in tosa_001000_1
    {IR(50197, 23), 440}, // ARITHMETIC_RIGHT_SHIFT in tosa_001000_1
    {IR(50080, 11), 426}, // AVG_POOL2D in tosa_001000_1
    {IR(50220, 12), 441}, // BITWISE_AND in tosa_001000_1
    {IR(50374, 12), 457}, // BITWISE_NOT in tosa_001000_1
    {IR(50232, 11), 442}, // BITWISE_OR in tosa_001000_1
    {IR(50243, 12), 443}, // BITWISE_XOR in tosa_001000_1
    {IR(50628, 5), 489}, // CAST in tosa_001000_1
    {IR(50386, 5), 458}, // CEIL in tosa_001000_1
    {IR(50170, 6), 435}, // CLAMP in tosa_001000_1
    {IR(50391, 4), 459}, // CLZ in tosa_001000_1
    {IR(50558, 7), 479}, // CONCAT in tosa_001000_1
    {IR(50091, 7), 427}, // CONV2D in tosa_001000_1
    {IR(50098, 7), 428}, // CONV3D in tosa_001000_1
    {IR(50395, 4), 460}, // COS in tosa_001000_1
    {IR(50105, 17), 429}, // DEPTHWISE_CONV2D in tosa_001000_1
    {IR(50460, 6), 470}, // EQUAL in tosa_001000_1
    {IR(50176, 4), 436}, // ERF in tosa_001000_1
    {IR(50399, 4), 461}, // EXP in tosa_001000_1
    {IR(50122, 6), 430}, // FFT2D in tosa_001000_1
    {IR(50403, 6), 462}, // FLOOR in tosa_001000_1
    {IR(50606, 7), 486}, // GATHER in tosa_001000_1
    {IR(50466, 8), 471}, // GREATER in tosa_001000_1
    {IR(50474, 14), 472}, // GREATER_EQUAL in tosa_001000_1
    {IR(50255, 7), 444}, // INTDIV in tosa_001000_1
    {IR(50409, 4), 463}, // LOG in tosa_001000_1
    {IR(50262, 12), 445}, // LOGICAL_AND in tosa_001000_1
    {IR(50274, 19), 446}, // LOGICAL_LEFT_SHIFT in tosa_001000_1
    {IR(50413, 12), 464}, // LOGICAL_NOT in tosa_001000_1
    {IR(50313, 11), 448}, // LOGICAL_OR in tosa_001000_1
    {IR(50293, 20), 447}, // LOGICAL_RIGHT_SHIFT in tosa_001000_1
    {IR(50324, 12), 449}, // LOGICAL_XOR in tosa_001000_1
    {IR(50128, 7), 431}, // MATMUL in tosa_001000_1
    {IR(50336, 8), 450}, // MAXIMUM in tosa_001000_1
    {IR(50135, 11), 432}, // MAX_POOL2D in tosa_001000_1
    {IR(50344, 8), 451}, // MINIMUM in tosa_001000_1
    {IR(50352, 4), 452}, // MUL in tosa_001000_1
    {IR(50425, 7), 465}, // NEGATE in tosa_001000_1
    {IR(50565, 4), 480}, // PAD in tosa_001000_1
    {IR(50356, 4), 453}, // POW in tosa_001000_1
    {IR(50432, 11), 466}, // RECIPROCAL in tosa_001000_1
    {IR(50488, 11), 473}, // REDUCE_ALL in tosa_001000_1
    {IR(50499, 11), 474}, // REDUCE_ANY in tosa_001000_1
    {IR(50510, 11), 475}, // REDUCE_MAX in tosa_001000_1
    {IR(50521, 11), 476}, // REDUCE_MIN in tosa_001000_1
    {IR(50532, 15), 477}, // REDUCE_PRODUCT in tosa_001000_1
    {IR(50547, 11), 478}, // REDUCE_SUM in tosa_001000_1
    {IR(50633, 8), 490}, // RESCALE in tosa_001000_1
    {IR(50569, 8), 481}, // RESHAPE in tosa_001000_1
    {IR(50621, 7), 488}, // RESIZE in tosa_001000_1
    {IR(50577, 8), 482}, // REVERSE in tosa_001000_1
    {IR(50146, 7), 433}, // RFFT2D in tosa_001000_1
    {IR(50443, 6), 467}, // RSQRT in tosa_001000_1
    {IR(50613, 8), 487}, // SCATTER in tosa_001000_1
    {IR(50453, 7), 469}, // SELECT in tosa_001000_1
    {IR(50180, 8), 437}, // SIGMOID in tosa_001000_1
    {IR(50449, 4), 468}, // SIN in tosa_001000_1
    {IR(50585, 6), 483}, // SLICE in tosa_001000_1
    {IR(50360, 4), 454}, // SUB in tosa_001000_1
    {IR(50364, 6), 455}, // TABLE in tosa_001000_1
    {IR(50188, 5), 438}, // TANH in tosa_001000_1
    {IR(50591, 5), 484}, // TILE in tosa_001000_1
    {IR(50596, 10), 485}, // TRANSPOSE in tosa_001000_1
    {IR(50153, 17), 434}, // TRANSPOSE_CONV2D in tosa_001000_1
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
    case SPV_EXT_INST_TYPE_TOSA_001000_1: return IR(425, 66);
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
  "SPV_ARM_graph\0" // IR(426, 14)
  "SPV_ARM_tensors\0" // IR(440, 16)
  "SPV_EXT_arithmetic_fence\0" // IR(456, 25)
  "SPV_EXT_demote_to_helper_invocation\0" // IR(481, 36)
  "SPV_EXT_descriptor_indexing\0" // IR(517, 28)
  "SPV_EXT_float8\0" // IR(545, 15)
  "SPV_EXT_fragment_fully_covered\0" // IR(560, 31)
  "SPV_EXT_fragment_invocation_density\0" // IR(591, 36)
  "SPV_EXT_fragment_shader_interlock\0" // IR(627, 34)
  "SPV_EXT_mesh_shader\0" // IR(661, 20)
  "SPV_EXT_opacity_micromap\0" // IR(681, 25)
  "SPV_EXT_optnone\0" // IR(706, 16)
  "SPV_EXT_physical_storage_buffer\0" // IR(722, 32)
  "SPV_EXT_relaxed_printf_string_address_space\0" // IR(754, 44)
  "SPV_EXT_replicated_composites\0" // IR(798, 30)
  "SPV_EXT_shader_atomic_float16_add\0" // IR(828, 34)
  "SPV_EXT_shader_atomic_float_add\0" // IR(862, 32)
  "SPV_EXT_shader_atomic_float_min_max\0" // IR(894, 36)
  "SPV_EXT_shader_image_int64\0" // IR(930, 27)
  "SPV_EXT_shader_stencil_export\0" // IR(957, 30)
  "SPV_EXT_shader_tile_image\0" // IR(987, 26)
  "SPV_EXT_shader_viewport_index_layer\0" // IR(1013, 36)
  "SPV_GOOGLE_decorate_string\0" // IR(1049, 27)
  "SPV_GOOGLE_hlsl_functionality1\0" // IR(1076, 31)
  "SPV_GOOGLE_user_type\0" // IR(1107, 21)
  "SPV_INTEL_2d_block_io\0" // IR(1128, 22)
  "SPV_INTEL_arbitrary_precision_fixed_point\0" // IR(1150, 42)
  "SPV_INTEL_arbitrary_precision_floating_point\0" // IR(1192, 45)
  "SPV_INTEL_arbitrary_precision_integers\0" // IR(1237, 39)
  "SPV_INTEL_bfloat16_conversion\0" // IR(1276, 30)
  "SPV_INTEL_bindless_images\0" // IR(1306, 26)
  "SPV_INTEL_blocking_pipes\0" // IR(1332, 25)
  "SPV_INTEL_cache_controls\0" // IR(1357, 25)
  "SPV_INTEL_debug_module\0" // IR(1382, 23)
  "SPV_INTEL_device_side_avc_motion_estimation\0" // IR(1405, 44)
  "SPV_INTEL_float_controls2\0" // IR(1449, 26)
  "SPV_INTEL_fp_fast_math_mode\0" // IR(1475, 28)
  "SPV_INTEL_fp_max_error\0" // IR(1503, 23)
  "SPV_INTEL_fpga_argument_interfaces\0" // IR(1526, 35)
  "SPV_INTEL_fpga_buffer_location\0" // IR(1561, 31)
  "SPV_INTEL_fpga_cluster_attributes\0" // IR(1592, 34)
  "SPV_INTEL_fpga_dsp_control\0" // IR(1626, 27)
  "SPV_INTEL_fpga_invocation_pipelining_attributes\0" // IR(1653, 48)
  "SPV_INTEL_fpga_latency_control\0" // IR(1701, 31)
  "SPV_INTEL_fpga_loop_controls\0" // IR(1732, 29)
  "SPV_INTEL_fpga_memory_accesses\0" // IR(1761, 31)
  "SPV_INTEL_fpga_memory_attributes\0" // IR(1792, 33)
  "SPV_INTEL_fpga_reg\0" // IR(1825, 19)
  "SPV_INTEL_function_pointers\0" // IR(1844, 28)
  "SPV_INTEL_function_variants\0" // IR(1872, 28)
  "SPV_INTEL_global_variable_fpga_decorations\0" // IR(1900, 43)
  "SPV_INTEL_global_variable_host_access\0" // IR(1943, 38)
  "SPV_INTEL_inline_assembly\0" // IR(1981, 26)
  "SPV_INTEL_int4\0" // IR(2007, 15)
  "SPV_INTEL_io_pipes\0" // IR(2022, 19)
  "SPV_INTEL_kernel_attributes\0" // IR(2041, 28)
  "SPV_INTEL_long_composites\0" // IR(2069, 26)
  "SPV_INTEL_loop_fuse\0" // IR(2095, 20)
  "SPV_INTEL_masked_gather_scatter\0" // IR(2115, 32)
  "SPV_INTEL_maximum_registers\0" // IR(2147, 28)
  "SPV_INTEL_media_block_io\0" // IR(2175, 25)
  "SPV_INTEL_memory_access_aliasing\0" // IR(2200, 33)
  "SPV_INTEL_optnone\0" // IR(2233, 18)
  "SPV_INTEL_runtime_aligned\0" // IR(2251, 26)
  "SPV_INTEL_shader_integer_functions2\0" // IR(2277, 36)
  "SPV_INTEL_split_barrier\0" // IR(2313, 24)
  "SPV_INTEL_subgroup_buffer_prefetch\0" // IR(2337, 35)
  "SPV_INTEL_subgroup_matrix_multiply_accumulate\0" // IR(2372, 46)
  "SPV_INTEL_subgroups\0" // IR(2418, 20)
  "SPV_INTEL_task_sequence\0" // IR(2438, 24)
  "SPV_INTEL_tensor_float32_conversion\0" // IR(2462, 36)
  "SPV_INTEL_ternary_bitwise_function\0" // IR(2498, 35)
  "SPV_INTEL_unstructured_loop_controls\0" // IR(2533, 37)
  "SPV_INTEL_usm_storage_classes\0" // IR(2570, 30)
  "SPV_INTEL_variable_length_array\0" // IR(2600, 32)
  "SPV_INTEL_vector_compute\0" // IR(2632, 25)
  "SPV_KHR_16bit_storage\0" // IR(2657, 22)
  "SPV_KHR_8bit_storage\0" // IR(2679, 21)
  "SPV_KHR_bfloat16\0" // IR(2700, 17)
  "SPV_KHR_bit_instructions\0" // IR(2717, 25)
  "SPV_KHR_compute_shader_derivatives\0" // IR(2742, 35)
  "SPV_KHR_cooperative_matrix\0" // IR(2777, 27)
  "SPV_KHR_device_group\0" // IR(2804, 21)
  "SPV_KHR_expect_assume\0" // IR(2825, 22)
  "SPV_KHR_float_controls\0" // IR(2847, 23)
  "SPV_KHR_float_controls2\0" // IR(2870, 24)
  "SPV_KHR_fragment_shader_barycentric\0" // IR(2894, 36)
  "SPV_KHR_fragment_shading_rate\0" // IR(2930, 30)
  "SPV_KHR_integer_dot_product\0" // IR(2960, 28)
  "SPV_KHR_linkonce_odr\0" // IR(2988, 21)
  "SPV_KHR_maximal_reconvergence\0" // IR(3009, 30)
  "SPV_KHR_multiview\0" // IR(3039, 18)
  "SPV_KHR_no_integer_wrap_decoration\0" // IR(3057, 35)
  "SPV_KHR_non_semantic_info\0" // IR(3092, 26)
  "SPV_KHR_physical_storage_buffer\0" // IR(3118, 32)
  "SPV_KHR_post_depth_coverage\0" // IR(3150, 28)
  "SPV_KHR_quad_control\0" // IR(3178, 21)
  "SPV_KHR_ray_cull_mask\0" // IR(3199, 22)
  "SPV_KHR_ray_query\0" // IR(3221, 18)
  "SPV_KHR_ray_tracing\0" // IR(3239, 20)
  "SPV_KHR_ray_tracing_position_fetch\0" // IR(3259, 35)
  "SPV_KHR_relaxed_extended_instruction\0" // IR(3294, 37)
  "SPV_KHR_shader_atomic_counter_ops\0" // IR(3331, 34)
  "SPV_KHR_shader_ballot\0" // IR(3365, 22)
  "SPV_KHR_shader_clock\0" // IR(3387, 21)
  "SPV_KHR_shader_draw_parameters\0" // IR(3408, 31)
  "SPV_KHR_storage_buffer_storage_class\0" // IR(3439, 37)
  "SPV_KHR_subgroup_rotate\0" // IR(3476, 24)
  "SPV_KHR_subgroup_uniform_control_flow\0" // IR(3500, 38)
  "SPV_KHR_subgroup_vote\0" // IR(3538, 22)
  "SPV_KHR_terminate_invocation\0" // IR(3560, 29)
  "SPV_KHR_uniform_group_instructions\0" // IR(3589, 35)
  "SPV_KHR_untyped_pointers\0" // IR(3624, 25)
  "SPV_KHR_variable_pointers\0" // IR(3649, 26)
  "SPV_KHR_vulkan_memory_model\0" // IR(3675, 28)
  "SPV_KHR_workgroup_memory_explicit_layout\0" // IR(3703, 41)
  "SPV_NVX_multiview_per_view_attributes\0" // IR(3744, 38)
  "SPV_NV_bindless_texture\0" // IR(3782, 24)
  "SPV_NV_cluster_acceleration_structure\0" // IR(3806, 38)
  "SPV_NV_compute_shader_derivatives\0" // IR(3844, 34)
  "SPV_NV_cooperative_matrix\0" // IR(3878, 26)
  "SPV_NV_cooperative_matrix2\0" // IR(3904, 27)
  "SPV_NV_cooperative_vector\0" // IR(3931, 26)
  "SPV_NV_displacement_micromap\0" // IR(3957, 29)
  "SPV_NV_fragment_shader_barycentric\0" // IR(3986, 35)
  "SPV_NV_geometry_shader_passthrough\0" // IR(4021, 35)
  "SPV_NV_linear_swept_spheres\0" // IR(4056, 28)
  "SPV_NV_mesh_shader\0" // IR(4084, 19)
  "SPV_NV_raw_access_chains\0" // IR(4103, 25)
  "SPV_NV_ray_tracing\0" // IR(4128, 19)
  "SPV_NV_ray_tracing_motion_blur\0" // IR(4147, 31)
  "SPV_NV_sample_mask_override_coverage\0" // IR(4178, 37)
  "SPV_NV_shader_atomic_fp16_vector\0" // IR(4215, 33)
  "SPV_NV_shader_image_footprint\0" // IR(4248, 30)
  "SPV_NV_shader_invocation_reorder\0" // IR(4278, 33)
  "SPV_NV_shader_sm_builtins\0" // IR(4311, 26)
  "SPV_NV_shader_subgroup_partitioned\0" // IR(4337, 35)
  "SPV_NV_shading_rate\0" // IR(4372, 20)
  "SPV_NV_stereo_view_rendering\0" // IR(4392, 29)
  "SPV_NV_tensor_addressing\0" // IR(4421, 25)
  "SPV_NV_viewport_array2\0" // IR(4446, 23)
  "SPV_QCOM_image_processing\0" // IR(4469, 26)
  "SPV_QCOM_image_processing2\0" // IR(4495, 27)
  "SPV_QCOM_tile_shading\0" // IR(4522, 22)
  "SPV_VALIDATOR_ignore_type_decl_unique\0" // IR(4544, 38)
  "ReadOnly\0" // IR(4582, 9)
  "Kernel\0" // IR(4591, 7)
  "WriteOnly\0" // IR(4598, 10)
  "ReadWrite\0" // IR(4608, 10)
  "Logical\0" // IR(4618, 8)
  "Physical32\0" // IR(4626, 11)
  "Addresses\0" // IR(4637, 10)
  "Physical64\0" // IR(4647, 11)
  "PhysicalStorageBuffer64\0" // IR(4658, 24)
  "PhysicalStorageBuffer64EXT\0" // IR(4682, 27)
  "PhysicalStorageBufferAddresses\0" // IR(4709, 31)
  "Position\0" // IR(4740, 9)
  "Shader\0" // IR(4749, 7)
  "PointSize\0" // IR(4756, 10)
  "ClipDistance\0" // IR(4766, 13)
  "CullDistance\0" // IR(4779, 13)
  "VertexId\0" // IR(4792, 9)
  "InstanceId\0" // IR(4801, 11)
  "PrimitiveId\0" // IR(4812, 12)
  "Geometry\0" // IR(4824, 9)
  "Tessellation\0" // IR(4833, 13)
  "RayTracingNV\0" // IR(4846, 13)
  "RayTracingKHR\0" // IR(4859, 14)
  "MeshShadingNV\0" // IR(4873, 14)
  "MeshShadingEXT\0" // IR(4887, 15)
  "InvocationId\0" // IR(4902, 13)
  "Layer\0" // IR(4915, 6)
  "ShaderLayer\0" // IR(4921, 12)
  "ShaderViewportIndexLayerEXT\0" // IR(4933, 28)
  "ViewportIndex\0" // IR(4961, 14)
  "MultiViewport\0" // IR(4975, 14)
  "ShaderViewportIndex\0" // IR(4989, 20)
  "TessLevelOuter\0" // IR(5009, 15)
  "TessLevelInner\0" // IR(5024, 15)
  "TessCoord\0" // IR(5039, 10)
  "PatchVertices\0" // IR(5049, 14)
  "FragCoord\0" // IR(5063, 10)
  "PointCoord\0" // IR(5073, 11)
  "FrontFacing\0" // IR(5084, 12)
  "SampleId\0" // IR(5096, 9)
  "SampleRateShading\0" // IR(5105, 18)
  "SamplePosition\0" // IR(5123, 15)
  "SampleMask\0" // IR(5138, 11)
  "FragDepth\0" // IR(5149, 10)
  "HelperInvocation\0" // IR(5159, 17)
  "NumWorkgroups\0" // IR(5176, 14)
  "WorkgroupSize\0" // IR(5190, 14)
  "WorkgroupId\0" // IR(5204, 12)
  "LocalInvocationId\0" // IR(5216, 18)
  "GlobalInvocationId\0" // IR(5234, 19)
  "LocalInvocationIndex\0" // IR(5253, 21)
  "WorkDim\0" // IR(5274, 8)
  "GlobalSize\0" // IR(5282, 11)
  "EnqueuedWorkgroupSize\0" // IR(5293, 22)
  "GlobalOffset\0" // IR(5315, 13)
  "GlobalLinearId\0" // IR(5328, 15)
  "SubgroupSize\0" // IR(5343, 13)
  "GroupNonUniform\0" // IR(5356, 16)
  "SubgroupBallotKHR\0" // IR(5372, 18)
  "SubgroupMaxSize\0" // IR(5390, 16)
  "NumSubgroups\0" // IR(5406, 13)
  "NumEnqueuedSubgroups\0" // IR(5419, 21)
  "SubgroupId\0" // IR(5440, 11)
  "SubgroupLocalInvocationId\0" // IR(5451, 26)
  "VertexIndex\0" // IR(5477, 12)
  "InstanceIndex\0" // IR(5489, 14)
  "CoreIDARM\0" // IR(5503, 10)
  "CoreBuiltinsARM\0" // IR(5513, 16)
  "CoreCountARM\0" // IR(5529, 13)
  "CoreMaxIDARM\0" // IR(5542, 13)
  "WarpIDARM\0" // IR(5555, 10)
  "WarpMaxIDARM\0" // IR(5565, 13)
  "SubgroupEqMask\0" // IR(5578, 15)
  "SubgroupEqMaskKHR\0" // IR(5593, 18)
  "GroupNonUniformBallot\0" // IR(5611, 22)
  "SubgroupGeMask\0" // IR(5633, 15)
  "SubgroupGeMaskKHR\0" // IR(5648, 18)
  "SubgroupGtMask\0" // IR(5666, 15)
  "SubgroupGtMaskKHR\0" // IR(5681, 18)
  "SubgroupLeMask\0" // IR(5699, 15)
  "SubgroupLeMaskKHR\0" // IR(5714, 18)
  "SubgroupLtMask\0" // IR(5732, 15)
  "SubgroupLtMaskKHR\0" // IR(5747, 18)
  "BaseVertex\0" // IR(5765, 11)
  "DrawParameters\0" // IR(5776, 15)
  "BaseInstance\0" // IR(5791, 13)
  "DrawIndex\0" // IR(5804, 10)
  "PrimitiveShadingRateKHR\0" // IR(5814, 24)
  "FragmentShadingRateKHR\0" // IR(5838, 23)
  "DeviceIndex\0" // IR(5861, 12)
  "DeviceGroup\0" // IR(5873, 12)
  "ViewIndex\0" // IR(5885, 10)
  "MultiView\0" // IR(5895, 10)
  "ShadingRateKHR\0" // IR(5905, 15)
  "TileOffsetQCOM\0" // IR(5920, 15)
  "TileShadingQCOM\0" // IR(5935, 16)
  "TileDimensionQCOM\0" // IR(5951, 18)
  "TileApronSizeQCOM\0" // IR(5969, 18)
  "BaryCoordNoPerspAMD\0" // IR(5987, 20)
  "BaryCoordNoPerspCentroidAMD\0" // IR(6007, 28)
  "BaryCoordNoPerspSampleAMD\0" // IR(6035, 26)
  "BaryCoordSmoothAMD\0" // IR(6061, 19)
  "BaryCoordSmoothCentroidAMD\0" // IR(6080, 27)
  "BaryCoordSmoothSampleAMD\0" // IR(6107, 25)
  "BaryCoordPullModelAMD\0" // IR(6132, 22)
  "FragStencilRefEXT\0" // IR(6154, 18)
  "StencilExportEXT\0" // IR(6172, 17)
  "RemainingRecursionLevelsAMDX\0" // IR(6189, 29)
  "ShaderEnqueueAMDX\0" // IR(6218, 18)
  "ShaderIndexAMDX\0" // IR(6236, 16)
  "ViewportMaskNV\0" // IR(6252, 15)
  "ShaderViewportMaskNV\0" // IR(6267, 21)
  "SecondaryPositionNV\0" // IR(6288, 20)
  "ShaderStereoViewNV\0" // IR(6308, 19)
  "SecondaryViewportMaskNV\0" // IR(6327, 24)
  "PositionPerViewNV\0" // IR(6351, 18)
  "PerViewAttributesNV\0" // IR(6369, 20)
  "ViewportMaskPerViewNV\0" // IR(6389, 22)
  "FullyCoveredEXT\0" // IR(6411, 16)
  "FragmentFullyCoveredEXT\0" // IR(6427, 24)
  "TaskCountNV\0" // IR(6451, 12)
  "PrimitiveCountNV\0" // IR(6463, 17)
  "PrimitiveIndicesNV\0" // IR(6480, 19)
  "ClipDistancePerViewNV\0" // IR(6499, 22)
  "CullDistancePerViewNV\0" // IR(6521, 22)
  "LayerPerViewNV\0" // IR(6543, 15)
  "MeshViewCountNV\0" // IR(6558, 16)
  "MeshViewIndicesNV\0" // IR(6574, 18)
  "BaryCoordKHR\0" // IR(6592, 13)
  "BaryCoordNV\0" // IR(6605, 12)
  "FragmentBarycentricKHR\0" // IR(6617, 23)
  "BaryCoordNoPerspKHR\0" // IR(6640, 20)
  "BaryCoordNoPerspNV\0" // IR(6660, 19)
  "FragSizeEXT\0" // IR(6679, 12)
  "FragmentSizeNV\0" // IR(6691, 15)
  "FragmentDensityEXT\0" // IR(6706, 19)
  "FragInvocationCountEXT\0" // IR(6725, 23)
  "InvocationsPerPixelNV\0" // IR(6748, 22)
  "PrimitivePointIndicesEXT\0" // IR(6770, 25)
  "PrimitiveLineIndicesEXT\0" // IR(6795, 24)
  "PrimitiveTriangleIndicesEXT\0" // IR(6819, 28)
  "CullPrimitiveEXT\0" // IR(6847, 17)
  "LaunchIdKHR\0" // IR(6864, 12)
  "LaunchIdNV\0" // IR(6876, 11)
  "LaunchSizeKHR\0" // IR(6887, 14)
  "LaunchSizeNV\0" // IR(6901, 13)
  "WorldRayOriginKHR\0" // IR(6914, 18)
  "WorldRayOriginNV\0" // IR(6932, 17)
  "WorldRayDirectionKHR\0" // IR(6949, 21)
  "WorldRayDirectionNV\0" // IR(6970, 20)
  "ObjectRayOriginKHR\0" // IR(6990, 19)
  "ObjectRayOriginNV\0" // IR(7009, 18)
  "ObjectRayDirectionKHR\0" // IR(7027, 22)
  "ObjectRayDirectionNV\0" // IR(7049, 21)
  "RayTminKHR\0" // IR(7070, 11)
  "RayTminNV\0" // IR(7081, 10)
  "RayTmaxKHR\0" // IR(7091, 11)
  "RayTmaxNV\0" // IR(7102, 10)
  "InstanceCustomIndexKHR\0" // IR(7112, 23)
  "InstanceCustomIndexNV\0" // IR(7135, 22)
  "ObjectToWorldKHR\0" // IR(7157, 17)
  "ObjectToWorldNV\0" // IR(7174, 16)
  "WorldToObjectKHR\0" // IR(7190, 17)
  "WorldToObjectNV\0" // IR(7207, 16)
  "HitTNV\0" // IR(7223, 7)
  "HitKindKHR\0" // IR(7230, 11)
  "HitKindNV\0" // IR(7241, 10)
  "CurrentRayTimeNV\0" // IR(7251, 17)
  "RayTracingMotionBlurNV\0" // IR(7268, 23)
  "HitTriangleVertexPositionsKHR\0" // IR(7291, 30)
  "RayTracingPositionFetchKHR\0" // IR(7321, 27)
  "HitMicroTriangleVertexPositionsNV\0" // IR(7348, 34)
  "RayTracingDisplacementMicromapNV\0" // IR(7382, 33)
  "HitMicroTriangleVertexBarycentricsNV\0" // IR(7415, 37)
  "IncomingRayFlagsKHR\0" // IR(7452, 20)
  "IncomingRayFlagsNV\0" // IR(7472, 19)
  "RayGeometryIndexKHR\0" // IR(7491, 20)
  "HitIsSphereNV\0" // IR(7511, 14)
  "RayTracingSpheresGeometryNV\0" // IR(7525, 28)
  "HitIsLSSNV\0" // IR(7553, 11)
  "RayTracingLinearSweptSpheresGeometryNV\0" // IR(7564, 39)
  "HitSpherePositionNV\0" // IR(7603, 20)
  "WarpsPerSMNV\0" // IR(7623, 13)
  "ShaderSMBuiltinsNV\0" // IR(7636, 19)
  "SMCountNV\0" // IR(7655, 10)
  "WarpIDNV\0" // IR(7665, 9)
  "SMIDNV\0" // IR(7674, 7)
  "HitLSSPositionsNV\0" // IR(7681, 18)
  "HitKindFrontFacingMicroTriangleNV\0" // IR(7699, 34)
  "HitKindBackFacingMicroTriangleNV\0" // IR(7733, 33)
  "HitSphereRadiusNV\0" // IR(7766, 18)
  "HitLSSRadiiNV\0" // IR(7784, 14)
  "ClusterIDNV\0" // IR(7798, 12)
  "RayTracingClusterAccelerationStructureNV\0" // IR(7810, 41)
  "CullMaskKHR\0" // IR(7851, 12)
  "RayCullMaskKHR\0" // IR(7863, 15)
  "Matrix\0" // IR(7878, 7)
  "Linkage\0" // IR(7885, 8)
  "Vector16\0" // IR(7893, 9)
  "Float16Buffer\0" // IR(7902, 14)
  "Float16\0" // IR(7916, 8)
  "Float64\0" // IR(7924, 8)
  "Int64\0" // IR(7932, 6)
  "Int64Atomics\0" // IR(7938, 13)
  "ImageBasic\0" // IR(7951, 11)
  "ImageReadWrite\0" // IR(7962, 15)
  "ImageMipmap\0" // IR(7977, 12)
  "Pipes\0" // IR(7989, 6)
  "Groups\0" // IR(7995, 7)
  "DeviceEnqueue\0" // IR(8002, 14)
  "LiteralSampler\0" // IR(8016, 15)
  "AtomicStorage\0" // IR(8031, 14)
  "Int16\0" // IR(8045, 6)
  "TessellationPointSize\0" // IR(8051, 22)
  "GeometryPointSize\0" // IR(8073, 18)
  "ImageGatherExtended\0" // IR(8091, 20)
  "StorageImageMultisample\0" // IR(8111, 24)
  "UniformBufferArrayDynamicIndexing\0" // IR(8135, 34)
  "SampledImageArrayDynamicIndexing\0" // IR(8169, 33)
  "StorageBufferArrayDynamicIndexing\0" // IR(8202, 34)
  "StorageImageArrayDynamicIndexing\0" // IR(8236, 33)
  "ImageCubeArray\0" // IR(8269, 15)
  "SampledCubeArray\0" // IR(8284, 17)
  "ImageRect\0" // IR(8301, 10)
  "SampledRect\0" // IR(8311, 12)
  "GenericPointer\0" // IR(8323, 15)
  "Int8\0" // IR(8338, 5)
  "InputAttachment\0" // IR(8343, 16)
  "SparseResidency\0" // IR(8359, 16)
  "MinLod\0" // IR(8375, 7)
  "Sampled1D\0" // IR(8382, 10)
  "Image1D\0" // IR(8392, 8)
  "SampledBuffer\0" // IR(8400, 14)
  "ImageBuffer\0" // IR(8414, 12)
  "ImageMSArray\0" // IR(8426, 13)
  "StorageImageExtendedFormats\0" // IR(8439, 28)
  "ImageQuery\0" // IR(8467, 11)
  "DerivativeControl\0" // IR(8478, 18)
  "InterpolationFunction\0" // IR(8496, 22)
  "TransformFeedback\0" // IR(8518, 18)
  "GeometryStreams\0" // IR(8536, 16)
  "StorageImageReadWithoutFormat\0" // IR(8552, 30)
  "StorageImageWriteWithoutFormat\0" // IR(8582, 31)
  "SubgroupDispatch\0" // IR(8613, 17)
  "NamedBarrier\0" // IR(8630, 13)
  "PipeStorage\0" // IR(8643, 12)
  "GroupNonUniformVote\0" // IR(8655, 20)
  "GroupNonUniformArithmetic\0" // IR(8675, 26)
  "GroupNonUniformShuffle\0" // IR(8701, 23)
  "GroupNonUniformShuffleRelative\0" // IR(8724, 31)
  "GroupNonUniformClustered\0" // IR(8755, 25)
  "GroupNonUniformQuad\0" // IR(8780, 20)
  "UniformDecoration\0" // IR(8800, 18)
  "TileImageColorReadAccessEXT\0" // IR(8818, 28)
  "TileImageDepthReadAccessEXT\0" // IR(8846, 28)
  "TileImageStencilReadAccessEXT\0" // IR(8874, 30)
  "TensorsARM\0" // IR(8904, 11)
  "StorageTensorArrayDynamicIndexingARM\0" // IR(8915, 37)
  "StorageTensorArrayNonUniformIndexingARM\0" // IR(8952, 40)
  "GraphARM\0" // IR(8992, 9)
  "CooperativeMatrixLayoutsARM\0" // IR(9001, 28)
  "Float8EXT\0" // IR(9029, 10)
  "Float8CooperativeMatrixEXT\0" // IR(9039, 27)
  "CooperativeMatrixKHR\0" // IR(9066, 21)
  "WorkgroupMemoryExplicitLayoutKHR\0" // IR(9087, 33)
  "WorkgroupMemoryExplicitLayout8BitAccessKHR\0" // IR(9120, 43)
  "WorkgroupMemoryExplicitLayout16BitAccessKHR\0" // IR(9163, 44)
  "SubgroupVoteKHR\0" // IR(9207, 16)
  "StorageBuffer16BitAccess\0" // IR(9223, 25)
  "StorageUniformBufferBlock16\0" // IR(9248, 28)
  "UniformAndStorageBuffer16BitAccess\0" // IR(9276, 35)
  "StorageUniform16\0" // IR(9311, 17)
  "StoragePushConstant16\0" // IR(9328, 22)
  "StorageInputOutput16\0" // IR(9350, 21)
  "VariablePointersStorageBuffer\0" // IR(9371, 30)
  "VariablePointers\0" // IR(9401, 17)
  "AtomicStorageOps\0" // IR(9418, 17)
  "SampleMaskPostDepthCoverage\0" // IR(9435, 28)
  "StorageBuffer8BitAccess\0" // IR(9463, 24)
  "UniformAndStorageBuffer8BitAccess\0" // IR(9487, 34)
  "StoragePushConstant8\0" // IR(9521, 21)
  "DenormPreserve\0" // IR(9542, 15)
  "DenormFlushToZero\0" // IR(9557, 18)
  "SignedZeroInfNanPreserve\0" // IR(9575, 25)
  "RoundingModeRTE\0" // IR(9600, 16)
  "RoundingModeRTZ\0" // IR(9616, 16)
  "RayQueryProvisionalKHR\0" // IR(9632, 23)
  "RayQueryKHR\0" // IR(9655, 12)
  "UntypedPointersKHR\0" // IR(9667, 19)
  "RayTraversalPrimitiveCullingKHR\0" // IR(9686, 32)
  "TextureSampleWeightedQCOM\0" // IR(9718, 26)
  "TextureBoxFilterQCOM\0" // IR(9744, 21)
  "TextureBlockMatchQCOM\0" // IR(9765, 22)
  "TextureBlockMatch2QCOM\0" // IR(9787, 23)
  "Float16ImageAMD\0" // IR(9810, 16)
  "ImageGatherBiasLodAMD\0" // IR(9826, 22)
  "FragmentMaskAMD\0" // IR(9848, 16)
  "ImageReadWriteLodAMD\0" // IR(9864, 21)
  "Int64ImageEXT\0" // IR(9885, 14)
  "ShaderClockKHR\0" // IR(9899, 15)
  "QuadControlKHR\0" // IR(9914, 15)
  "Int4TypeINTEL\0" // IR(9929, 14)
  "Int4CooperativeMatrixINTEL\0" // IR(9943, 27)
  "BFloat16TypeKHR\0" // IR(9970, 16)
  "BFloat16DotProductKHR\0" // IR(9986, 22)
  "BFloat16CooperativeMatrixKHR\0" // IR(10008, 29)
  "SampleMaskOverrideCoverageNV\0" // IR(10037, 29)
  "GeometryShaderPassthroughNV\0" // IR(10066, 28)
  "ShaderViewportIndexLayerNV\0" // IR(10094, 27)
  "ImageFootprintNV\0" // IR(10121, 17)
  "FragmentBarycentricNV\0" // IR(10138, 22)
  "ComputeDerivativeGroupQuadsKHR\0" // IR(10160, 31)
  "ComputeDerivativeGroupQuadsNV\0" // IR(10191, 30)
  "ShadingRateNV\0" // IR(10221, 14)
  "GroupNonUniformPartitionedNV\0" // IR(10235, 29)
  "ShaderNonUniform\0" // IR(10264, 17)
  "ShaderNonUniformEXT\0" // IR(10281, 20)
  "RuntimeDescriptorArray\0" // IR(10301, 23)
  "RuntimeDescriptorArrayEXT\0" // IR(10324, 26)
  "InputAttachmentArrayDynamicIndexing\0" // IR(10350, 36)
  "InputAttachmentArrayDynamicIndexingEXT\0" // IR(10386, 39)
  "UniformTexelBufferArrayDynamicIndexing\0" // IR(10425, 39)
  "UniformTexelBufferArrayDynamicIndexingEXT\0" // IR(10464, 42)
  "StorageTexelBufferArrayDynamicIndexing\0" // IR(10506, 39)
  "StorageTexelBufferArrayDynamicIndexingEXT\0" // IR(10545, 42)
  "UniformBufferArrayNonUniformIndexing\0" // IR(10587, 37)
  "UniformBufferArrayNonUniformIndexingEXT\0" // IR(10624, 40)
  "SampledImageArrayNonUniformIndexing\0" // IR(10664, 36)
  "SampledImageArrayNonUniformIndexingEXT\0" // IR(10700, 39)
  "StorageBufferArrayNonUniformIndexing\0" // IR(10739, 37)
  "StorageBufferArrayNonUniformIndexingEXT\0" // IR(10776, 40)
  "StorageImageArrayNonUniformIndexing\0" // IR(10816, 36)
  "StorageImageArrayNonUniformIndexingEXT\0" // IR(10852, 39)
  "InputAttachmentArrayNonUniformIndexing\0" // IR(10891, 39)
  "InputAttachmentArrayNonUniformIndexingEXT\0" // IR(10930, 42)
  "UniformTexelBufferArrayNonUniformIndexing\0" // IR(10972, 42)
  "UniformTexelBufferArrayNonUniformIndexingEXT\0" // IR(11014, 45)
  "StorageTexelBufferArrayNonUniformIndexing\0" // IR(11059, 42)
  "StorageTexelBufferArrayNonUniformIndexingEXT\0" // IR(11101, 45)
  "VulkanMemoryModel\0" // IR(11146, 18)
  "VulkanMemoryModelKHR\0" // IR(11164, 21)
  "VulkanMemoryModelDeviceScope\0" // IR(11185, 29)
  "VulkanMemoryModelDeviceScopeKHR\0" // IR(11214, 32)
  "PhysicalStorageBufferAddressesEXT\0" // IR(11246, 34)
  "ComputeDerivativeGroupLinearKHR\0" // IR(11280, 32)
  "ComputeDerivativeGroupLinearNV\0" // IR(11312, 31)
  "RayTracingProvisionalKHR\0" // IR(11343, 25)
  "CooperativeMatrixNV\0" // IR(11368, 20)
  "FragmentShaderSampleInterlockEXT\0" // IR(11388, 33)
  "FragmentShaderShadingRateInterlockEXT\0" // IR(11421, 38)
  "FragmentShaderPixelInterlockEXT\0" // IR(11459, 32)
  "DemoteToHelperInvocation\0" // IR(11491, 25)
  "DemoteToHelperInvocationEXT\0" // IR(11516, 28)
  "DisplacementMicromapNV\0" // IR(11544, 23)
  "RayTracingOpacityMicromapEXT\0" // IR(11567, 29)
  "ShaderInvocationReorderNV\0" // IR(11596, 26)
  "BindlessTextureNV\0" // IR(11622, 18)
  "RayQueryPositionFetchKHR\0" // IR(11640, 25)
  "CooperativeVectorNV\0" // IR(11665, 20)
  "AtomicFloat16VectorNV\0" // IR(11685, 22)
  "RawAccessChainsNV\0" // IR(11707, 18)
  "CooperativeMatrixReductionsNV\0" // IR(11725, 30)
  "CooperativeMatrixConversionsNV\0" // IR(11755, 31)
  "CooperativeMatrixPerElementOperationsNV\0" // IR(11786, 40)
  "CooperativeMatrixTensorAddressingNV\0" // IR(11826, 36)
  "CooperativeMatrixBlockLoadsNV\0" // IR(11862, 30)
  "CooperativeVectorTrainingNV\0" // IR(11892, 28)
  "TensorAddressingNV\0" // IR(11920, 19)
  "SubgroupShuffleINTEL\0" // IR(11939, 21)
  "SubgroupBufferBlockIOINTEL\0" // IR(11960, 27)
  "SubgroupImageBlockIOINTEL\0" // IR(11987, 26)
  "SubgroupImageMediaBlockIOINTEL\0" // IR(12013, 31)
  "RoundToInfinityINTEL\0" // IR(12044, 21)
  "FloatingPointModeINTEL\0" // IR(12065, 23)
  "IntegerFunctions2INTEL\0" // IR(12088, 23)
  "FunctionPointersINTEL\0" // IR(12111, 22)
  "IndirectReferencesINTEL\0" // IR(12133, 24)
  "AsmINTEL\0" // IR(12157, 9)
  "AtomicFloat32MinMaxEXT\0" // IR(12166, 23)
  "AtomicFloat64MinMaxEXT\0" // IR(12189, 23)
  "AtomicFloat16MinMaxEXT\0" // IR(12212, 23)
  "VectorComputeINTEL\0" // IR(12235, 19)
  "VectorAnyINTEL\0" // IR(12254, 15)
  "ExpectAssumeKHR\0" // IR(12269, 16)
  "SubgroupAvcMotionEstimationINTEL\0" // IR(12285, 33)
  "SubgroupAvcMotionEstimationIntraINTEL\0" // IR(12318, 38)
  "SubgroupAvcMotionEstimationChromaINTEL\0" // IR(12356, 39)
  "VariableLengthArrayINTEL\0" // IR(12395, 25)
  "FunctionFloatControlINTEL\0" // IR(12420, 26)
  "FPGAMemoryAttributesINTEL\0" // IR(12446, 26)
  "FPFastMathModeINTEL\0" // IR(12472, 20)
  "ArbitraryPrecisionIntegersINTEL\0" // IR(12492, 32)
  "ArbitraryPrecisionFloatingPointINTEL\0" // IR(12524, 37)
  "UnstructuredLoopControlsINTEL\0" // IR(12561, 30)
  "FPGALoopControlsINTEL\0" // IR(12591, 22)
  "KernelAttributesINTEL\0" // IR(12613, 22)
  "FPGAKernelAttributesINTEL\0" // IR(12635, 26)
  "FPGAMemoryAccessesINTEL\0" // IR(12661, 24)
  "FPGAClusterAttributesINTEL\0" // IR(12685, 27)
  "LoopFuseINTEL\0" // IR(12712, 14)
  "FPGADSPControlINTEL\0" // IR(12726, 20)
  "MemoryAccessAliasingINTEL\0" // IR(12746, 26)
  "FPGAInvocationPipeliningAttributesINTEL\0" // IR(12772, 40)
  "FPGABufferLocationINTEL\0" // IR(12812, 24)
  "ArbitraryPrecisionFixedPointINTEL\0" // IR(12836, 34)
  "USMStorageClassesINTEL\0" // IR(12870, 23)
  "RuntimeAlignedAttributeINTEL\0" // IR(12893, 29)
  "IOPipesINTEL\0" // IR(12922, 13)
  "BlockingPipesINTEL\0" // IR(12935, 19)
  "FPGARegINTEL\0" // IR(12954, 13)
  "DotProductInputAll\0" // IR(12967, 19)
  "DotProductInputAllKHR\0" // IR(12986, 22)
  "DotProductInput4x8Bit\0" // IR(13008, 22)
  "DotProductInput4x8BitKHR\0" // IR(13030, 25)
  "DotProductInput4x8BitPacked\0" // IR(13055, 28)
  "DotProductInput4x8BitPackedKHR\0" // IR(13083, 31)
  "DotProduct\0" // IR(13114, 11)
  "DotProductKHR\0" // IR(13125, 14)
  "ReplicatedCompositesEXT\0" // IR(13139, 24)
  "BitInstructions\0" // IR(13163, 16)
  "GroupNonUniformRotateKHR\0" // IR(13179, 25)
  "FloatControls2\0" // IR(13204, 15)
  "AtomicFloat32AddEXT\0" // IR(13219, 20)
  "AtomicFloat64AddEXT\0" // IR(13239, 20)
  "LongCompositesINTEL\0" // IR(13259, 20)
  "OptNoneEXT\0" // IR(13279, 11)
  "OptNoneINTEL\0" // IR(13290, 13)
  "AtomicFloat16AddEXT\0" // IR(13303, 20)
  "DebugInfoModuleINTEL\0" // IR(13323, 21)
  "BFloat16ConversionINTEL\0" // IR(13344, 24)
  "SplitBarrierINTEL\0" // IR(13368, 18)
  "ArithmeticFenceEXT\0" // IR(13386, 19)
  "FPGAClusterAttributesV2INTEL\0" // IR(13405, 29)
  "FPGAKernelAttributesv2INTEL\0" // IR(13434, 28)
  "TaskSequenceINTEL\0" // IR(13462, 18)
  "FPMaxErrorINTEL\0" // IR(13480, 16)
  "FPGALatencyControlINTEL\0" // IR(13496, 24)
  "FPGAArgumentInterfacesINTEL\0" // IR(13520, 28)
  "GlobalVariableHostAccessINTEL\0" // IR(13548, 30)
  "GlobalVariableFPGADecorationsINTEL\0" // IR(13578, 35)
  "SubgroupBufferPrefetchINTEL\0" // IR(13613, 28)
  "Subgroup2DBlockIOINTEL\0" // IR(13641, 23)
  "Subgroup2DBlockTransformINTEL\0" // IR(13664, 30)
  "Subgroup2DBlockTransposeINTEL\0" // IR(13694, 30)
  "SubgroupMatrixMultiplyAccumulateINTEL\0" // IR(13724, 38)
  "TernaryBitwiseFunctionINTEL\0" // IR(13762, 28)
  "SpecConditionalINTEL\0" // IR(13790, 21)
  "FunctionVariantsINTEL\0" // IR(13811, 22)
  "GroupUniformArithmeticKHR\0" // IR(13833, 26)
  "TensorFloat32RoundingINTEL\0" // IR(13859, 27)
  "MaskedGatherScatterINTEL\0" // IR(13886, 25)
  "CacheControlsINTEL\0" // IR(13911, 19)
  "RegisterLimitsINTEL\0" // IR(13930, 20)
  "BindlessImagesINTEL\0" // IR(13950, 20)
  "Unspecified\0" // IR(13970, 12)
  "Address\0" // IR(13982, 8)
  "Boolean\0" // IR(13990, 8)
  "Float\0" // IR(13998, 6)
  "Signed\0" // IR(14004, 7)
  "SignedChar\0" // IR(14011, 11)
  "Unsigned\0" // IR(14022, 9)
  "UnsignedChar\0" // IR(14031, 13)
  "Class\0" // IR(14044, 6)
  "Structure\0" // IR(14050, 10)
  "Union\0" // IR(14060, 6)
  "ImportedModule\0" // IR(14066, 15)
  "ImportedDeclaration\0" // IR(14081, 20)
  "None\0" // IR(14101, 5)
  "FlagIsProtected\0" // IR(14106, 16)
  "FlagIsPrivate\0" // IR(14122, 14)
  "FlagIsPublic\0" // IR(14136, 13)
  "FlagIsLocal\0" // IR(14149, 12)
  "FlagIsDefinition\0" // IR(14161, 17)
  "FlagFwdDecl\0" // IR(14178, 12)
  "FlagArtificial\0" // IR(14190, 15)
  "FlagExplicit\0" // IR(14205, 13)
  "FlagPrototyped\0" // IR(14218, 15)
  "FlagObjectPointer\0" // IR(14233, 18)
  "FlagStaticMember\0" // IR(14251, 17)
  "FlagIndirectVariable\0" // IR(14268, 21)
  "FlagLValueReference\0" // IR(14289, 20)
  "FlagRValueReference\0" // IR(14309, 20)
  "FlagIsOptimized\0" // IR(14329, 16)
  "FlagIsEnumClass\0" // IR(14345, 16)
  "FlagTypePassByValue\0" // IR(14361, 20)
  "FlagTypePassByReference\0" // IR(14381, 24)
  "Deref\0" // IR(14405, 6)
  "Plus\0" // IR(14411, 5)
  "Minus\0" // IR(14416, 6)
  "SPV_OPERAND_TYPE_LITERAL_INTEGER\0" // IR(14422, 33)
  "PlusUconst\0" // IR(14455, 11)
  "BitPiece\0" // IR(14466, 9)
  "Swap\0" // IR(14475, 5)
  "Xderef\0" // IR(14480, 7)
  "StackValue\0" // IR(14487, 11)
  "Constu\0" // IR(14498, 7)
  "Fragment\0" // IR(14505, 9)
  "ConstType\0" // IR(14514, 10)
  "VolatileType\0" // IR(14524, 13)
  "RestrictType\0" // IR(14537, 13)
  "AtomicType\0" // IR(14550, 11)
  "Float16NV\0" // IR(14561, 10)
  "Float32NV\0" // IR(14571, 10)
  "Float64NV\0" // IR(14581, 10)
  "SignedInt8NV\0" // IR(14591, 13)
  "SignedInt16NV\0" // IR(14604, 14)
  "SignedInt32NV\0" // IR(14618, 14)
  "SignedInt64NV\0" // IR(14632, 14)
  "UnsignedInt8NV\0" // IR(14646, 15)
  "UnsignedInt16NV\0" // IR(14661, 16)
  "UnsignedInt32NV\0" // IR(14677, 16)
  "UnsignedInt64NV\0" // IR(14693, 16)
  "SignedInt8PackedNV\0" // IR(14709, 19)
  "UnsignedInt8PackedNV\0" // IR(14728, 21)
  "FloatE4M3NV\0" // IR(14749, 12)
  "FloatE5M2NV\0" // IR(14761, 12)
  "RowMajorKHR\0" // IR(14773, 12)
  "ColumnMajorKHR\0" // IR(14785, 15)
  "RowBlockedInterleavedARM\0" // IR(14800, 25)
  "ColumnBlockedInterleavedARM\0" // IR(14825, 28)
  "NoneKHR\0" // IR(14853, 8)
  "MatrixASignedComponentsKHR\0" // IR(14861, 27)
  "MatrixBSignedComponentsKHR\0" // IR(14888, 27)
  "MatrixCSignedComponentsKHR\0" // IR(14915, 27)
  "MatrixResultSignedComponentsKHR\0" // IR(14942, 32)
  "SaturatingAccumulationKHR\0" // IR(14974, 26)
  "Row\0" // IR(15000, 4)
  "Column\0" // IR(15004, 7)
  "2x2\0" // IR(15011, 4)
  "MatrixAKHR\0" // IR(15015, 11)
  "MatrixBKHR\0" // IR(15026, 11)
  "MatrixAccumulatorKHR\0" // IR(15037, 21)
  "RowMajorNV\0" // IR(15058, 11)
  "ColumnMajorNV\0" // IR(15069, 14)
  "InferencingOptimalNV\0" // IR(15083, 21)
  "TrainingOptimalNV\0" // IR(15104, 18)
  "RelaxedPrecision\0" // IR(15122, 17)
  "SpecId\0" // IR(15139, 7)
  "Block\0" // IR(15146, 6)
  "BufferBlock\0" // IR(15152, 12)
  "RowMajor\0" // IR(15164, 9)
  "ColMajor\0" // IR(15173, 9)
  "ArrayStride\0" // IR(15182, 12)
  "MatrixStride\0" // IR(15194, 13)
  "GLSLShared\0" // IR(15207, 11)
  "GLSLPacked\0" // IR(15218, 11)
  "CPacked\0" // IR(15229, 8)
  "SPV_OPERAND_TYPE_BUILT_IN\0" // IR(15237, 26)
  "BuiltIn\0" // IR(15263, 8)
  "NoPerspective\0" // IR(15271, 14)
  "Flat\0" // IR(15285, 5)
  "Patch\0" // IR(15290, 6)
  "Centroid\0" // IR(15296, 9)
  "Sample\0" // IR(15305, 7)
  "Invariant\0" // IR(15312, 10)
  "Restrict\0" // IR(15322, 9)
  "Aliased\0" // IR(15331, 8)
  "Volatile\0" // IR(15339, 9)
  "Constant\0" // IR(15348, 9)
  "Coherent\0" // IR(15357, 9)
  "NonWritable\0" // IR(15366, 12)
  "NonReadable\0" // IR(15378, 12)
  "Uniform\0" // IR(15390, 8)
  "SPV_OPERAND_TYPE_SCOPE_ID\0" // IR(15398, 26)
  "UniformId\0" // IR(15424, 10)
  "SaturatedConversion\0" // IR(15434, 20)
  "Stream\0" // IR(15454, 7)
  "Location\0" // IR(15461, 9)
  "Component\0" // IR(15470, 10)
  "Index\0" // IR(15480, 6)
  "Binding\0" // IR(15486, 8)
  "DescriptorSet\0" // IR(15494, 14)
  "Offset\0" // IR(15508, 7)
  "XfbBuffer\0" // IR(15515, 10)
  "XfbStride\0" // IR(15525, 10)
  "SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE\0" // IR(15535, 46)
  "FuncParamAttr\0" // IR(15581, 14)
  "SPV_OPERAND_TYPE_FP_ROUNDING_MODE\0" // IR(15595, 34)
  "FPRoundingMode\0" // IR(15629, 15)
  "SPV_OPERAND_TYPE_FP_FAST_MATH_MODE\0" // IR(15644, 35)
  "FPFastMathMode\0" // IR(15679, 15)
  "SPV_OPERAND_TYPE_LITERAL_STRING\0" // IR(15694, 32)
  "SPV_OPERAND_TYPE_LINKAGE_TYPE\0" // IR(15726, 30)
  "LinkageAttributes\0" // IR(15756, 18)
  "NoContraction\0" // IR(15774, 14)
  "InputAttachmentIndex\0" // IR(15788, 21)
  "Alignment\0" // IR(15809, 10)
  "MaxByteOffset\0" // IR(15819, 14)
  "SPV_OPERAND_TYPE_ID\0" // IR(15833, 20)
  "AlignmentId\0" // IR(15853, 12)
  "MaxByteOffsetId\0" // IR(15865, 16)
  "SaturatedToLargestFloat8NormalConversionEXT\0" // IR(15881, 44)
  "NoSignedWrap\0" // IR(15925, 13)
  "NoUnsignedWrap\0" // IR(15938, 15)
  "WeightTextureQCOM\0" // IR(15953, 18)
  "BlockMatchTextureQCOM\0" // IR(15971, 22)
  "BlockMatchSamplerQCOM\0" // IR(15993, 22)
  "ExplicitInterpAMD\0" // IR(16015, 18)
  "NodeSharesPayloadLimitsWithAMDX\0" // IR(16033, 32)
  "NodeMaxPayloadsAMDX\0" // IR(16065, 20)
  "TrackFinishWritingAMDX\0" // IR(16085, 23)
  "PayloadNodeNameAMDX\0" // IR(16108, 20)
  "PayloadNodeBaseIndexAMDX\0" // IR(16128, 25)
  "PayloadNodeSparseArrayAMDX\0" // IR(16153, 27)
  "PayloadNodeArraySizeAMDX\0" // IR(16180, 25)
  "PayloadDispatchIndirectAMDX\0" // IR(16205, 28)
  "OverrideCoverageNV\0" // IR(16233, 19)
  "PassthroughNV\0" // IR(16252, 14)
  "ViewportRelativeNV\0" // IR(16266, 19)
  "SecondaryViewportRelativeNV\0" // IR(16285, 28)
  "PerPrimitiveEXT\0" // IR(16313, 16)
  "PerPrimitiveNV\0" // IR(16329, 15)
  "PerViewNV\0" // IR(16344, 10)
  "PerTaskNV\0" // IR(16354, 10)
  "PerVertexKHR\0" // IR(16364, 13)
  "PerVertexNV\0" // IR(16377, 12)
  "NonUniform\0" // IR(16389, 11)
  "NonUniformEXT\0" // IR(16400, 14)
  "RestrictPointer\0" // IR(16414, 16)
  "RestrictPointerEXT\0" // IR(16430, 19)
  "AliasedPointer\0" // IR(16449, 15)
  "AliasedPointerEXT\0" // IR(16464, 18)
  "HitObjectShaderRecordBufferNV\0" // IR(16482, 30)
  "BindlessSamplerNV\0" // IR(16512, 18)
  "BindlessImageNV\0" // IR(16530, 16)
  "BoundSamplerNV\0" // IR(16546, 15)
  "BoundImageNV\0" // IR(16561, 13)
  "SIMTCallINTEL\0" // IR(16574, 14)
  "ReferencedIndirectlyINTEL\0" // IR(16588, 26)
  "ClobberINTEL\0" // IR(16614, 13)
  "SideEffectsINTEL\0" // IR(16627, 17)
  "VectorComputeVariableINTEL\0" // IR(16644, 27)
  "FuncParamIOKindINTEL\0" // IR(16671, 21)
  "VectorComputeFunctionINTEL\0" // IR(16692, 27)
  "StackCallINTEL\0" // IR(16719, 15)
  "GlobalVariableOffsetINTEL\0" // IR(16734, 26)
  "CounterBuffer\0" // IR(16760, 14)
  "HlslCounterBufferGOOGLE\0" // IR(16774, 24)
  "UserSemantic\0" // IR(16798, 13)
  "HlslSemanticGOOGLE\0" // IR(16811, 19)
  "UserTypeGOOGLE\0" // IR(16830, 15)
  "FunctionRoundingModeINTEL\0" // IR(16845, 26)
  "SPV_OPERAND_TYPE_FPDENORM_MODE\0" // IR(16871, 31)
  "FunctionDenormModeINTEL\0" // IR(16902, 24)
  "RegisterINTEL\0" // IR(16926, 14)
  "MemoryINTEL\0" // IR(16940, 12)
  "NumbanksINTEL\0" // IR(16952, 14)
  "BankwidthINTEL\0" // IR(16966, 15)
  "MaxPrivateCopiesINTEL\0" // IR(16981, 22)
  "SinglepumpINTEL\0" // IR(17003, 16)
  "DoublepumpINTEL\0" // IR(17019, 16)
  "MaxReplicatesINTEL\0" // IR(17035, 19)
  "SimpleDualPortINTEL\0" // IR(17054, 20)
  "MergeINTEL\0" // IR(17074, 11)
  "SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER\0" // IR(17085, 42)
  "BankBitsINTEL\0" // IR(17127, 14)
  "ForcePow2DepthINTEL\0" // IR(17141, 20)
  "StridesizeINTEL\0" // IR(17161, 16)
  "WordsizeINTEL\0" // IR(17177, 14)
  "TrueDualPortINTEL\0" // IR(17191, 18)
  "BurstCoalesceINTEL\0" // IR(17209, 19)
  "CacheSizeINTEL\0" // IR(17228, 15)
  "DontStaticallyCoalesceINTEL\0" // IR(17243, 28)
  "PrefetchINTEL\0" // IR(17271, 14)
  "StallEnableINTEL\0" // IR(17285, 17)
  "FuseLoopsInFunctionINTEL\0" // IR(17302, 25)
  "MathOpDSPModeINTEL\0" // IR(17327, 19)
  "AliasScopeINTEL\0" // IR(17346, 16)
  "NoAliasINTEL\0" // IR(17362, 13)
  "InitiationIntervalINTEL\0" // IR(17375, 24)
  "MaxConcurrencyINTEL\0" // IR(17399, 20)
  "PipelineEnableINTEL\0" // IR(17419, 20)
  "BufferLocationINTEL\0" // IR(17439, 20)
  "IOPipeStorageINTEL\0" // IR(17459, 19)
  "SPV_OPERAND_TYPE_FPOPERATION_MODE\0" // IR(17478, 34)
  "FunctionFloatingPointModeINTEL\0" // IR(17512, 31)
  "SingleElementVectorINTEL\0" // IR(17543, 25)
  "VectorComputeCallableFunctionINTEL\0" // IR(17568, 35)
  "MediaBlockIOINTEL\0" // IR(17603, 18)
  "StallFreeINTEL\0" // IR(17621, 15)
  "SPV_OPERAND_TYPE_LITERAL_FLOAT\0" // IR(17636, 31)
  "FPMaxErrorDecorationINTEL\0" // IR(17667, 26)
  "LatencyControlLabelINTEL\0" // IR(17693, 25)
  "LatencyControlConstraintINTEL\0" // IR(17718, 30)
  "ConduitKernelArgumentINTEL\0" // IR(17748, 27)
  "RegisterMapKernelArgumentINTEL\0" // IR(17775, 31)
  "MMHostInterfaceAddressWidthINTEL\0" // IR(17806, 33)
  "MMHostInterfaceDataWidthINTEL\0" // IR(17839, 30)
  "MMHostInterfaceLatencyINTEL\0" // IR(17869, 28)
  "SPV_OPERAND_TYPE_ACCESS_QUALIFIER\0" // IR(17897, 34)
  "MMHostInterfaceReadWriteModeINTEL\0" // IR(17931, 34)
  "MMHostInterfaceMaxBurstINTEL\0" // IR(17965, 29)
  "MMHostInterfaceWaitRequestINTEL\0" // IR(17994, 32)
  "StableKernelArgumentINTEL\0" // IR(18026, 26)
  "SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER\0" // IR(18052, 39)
  "HostAccessINTEL\0" // IR(18091, 16)
  "SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER\0" // IR(18107, 47)
  "InitModeINTEL\0" // IR(18154, 14)
  "ImplementInRegisterMapINTEL\0" // IR(18168, 28)
  "ConditionalINTEL\0" // IR(18196, 17)
  "SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL\0" // IR(18213, 36)
  "CacheControlLoadINTEL\0" // IR(18249, 22)
  "SPV_OPERAND_TYPE_STORE_CACHE_CONTROL\0" // IR(18271, 37)
  "CacheControlStoreINTEL\0" // IR(18308, 23)
  "1D\0" // IR(18331, 3)
  "2D\0" // IR(18334, 3)
  "3D\0" // IR(18337, 3)
  "Cube\0" // IR(18340, 5)
  "Rect\0" // IR(18345, 5)
  "Buffer\0" // IR(18350, 7)
  "SubpassData\0" // IR(18357, 12)
  "TileImageDataEXT\0" // IR(18369, 17)
  "Invocations\0" // IR(18386, 12)
  "SpacingEqual\0" // IR(18398, 13)
  "SpacingFractionalEven\0" // IR(18411, 22)
  "SpacingFractionalOdd\0" // IR(18433, 21)
  "VertexOrderCw\0" // IR(18454, 14)
  "VertexOrderCcw\0" // IR(18468, 15)
  "PixelCenterInteger\0" // IR(18483, 19)
  "OriginUpperLeft\0" // IR(18502, 16)
  "OriginLowerLeft\0" // IR(18518, 16)
  "EarlyFragmentTests\0" // IR(18534, 19)
  "PointMode\0" // IR(18553, 10)
  "Xfb\0" // IR(18563, 4)
  "DepthReplacing\0" // IR(18567, 15)
  "DepthGreater\0" // IR(18582, 13)
  "DepthLess\0" // IR(18595, 10)
  "DepthUnchanged\0" // IR(18605, 15)
  "LocalSize\0" // IR(18620, 10)
  "LocalSizeHint\0" // IR(18630, 14)
  "InputPoints\0" // IR(18644, 12)
  "InputLines\0" // IR(18656, 11)
  "InputLinesAdjacency\0" // IR(18667, 20)
  "Triangles\0" // IR(18687, 10)
  "InputTrianglesAdjacency\0" // IR(18697, 24)
  "Quads\0" // IR(18721, 6)
  "Isolines\0" // IR(18727, 9)
  "OutputVertices\0" // IR(18736, 15)
  "OutputPoints\0" // IR(18751, 13)
  "OutputLineStrip\0" // IR(18764, 16)
  "OutputTriangleStrip\0" // IR(18780, 20)
  "VecTypeHint\0" // IR(18800, 12)
  "ContractionOff\0" // IR(18812, 15)
  "Initializer\0" // IR(18827, 12)
  "Finalizer\0" // IR(18839, 10)
  "SubgroupsPerWorkgroup\0" // IR(18849, 22)
  "SubgroupsPerWorkgroupId\0" // IR(18871, 24)
  "LocalSizeId\0" // IR(18895, 12)
  "LocalSizeHintId\0" // IR(18907, 16)
  "NonCoherentColorAttachmentReadEXT\0" // IR(18923, 34)
  "NonCoherentDepthAttachmentReadEXT\0" // IR(18957, 34)
  "NonCoherentStencilAttachmentReadEXT\0" // IR(18991, 36)
  "SubgroupUniformControlFlowKHR\0" // IR(19027, 30)
  "PostDepthCoverage\0" // IR(19057, 18)
  "NonCoherentTileAttachmentReadQCOM\0" // IR(19075, 34)
  "TileShadingRateQCOM\0" // IR(19109, 20)
  "EarlyAndLateFragmentTestsAMD\0" // IR(19129, 29)
  "StencilRefReplacingEXT\0" // IR(19158, 23)
  "CoalescingAMDX\0" // IR(19181, 15)
  "IsApiEntryAMDX\0" // IR(19196, 15)
  "MaxNodeRecursionAMDX\0" // IR(19211, 21)
  "StaticNumWorkgroupsAMDX\0" // IR(19232, 24)
  "MaxNumWorkgroupsAMDX\0" // IR(19256, 21)
  "StencilRefUnchangedFrontAMD\0" // IR(19277, 28)
  "StencilRefGreaterFrontAMD\0" // IR(19305, 26)
  "StencilRefLessFrontAMD\0" // IR(19331, 23)
  "StencilRefUnchangedBackAMD\0" // IR(19354, 27)
  "StencilRefGreaterBackAMD\0" // IR(19381, 25)
  "StencilRefLessBackAMD\0" // IR(19406, 22)
  "QuadDerivativesKHR\0" // IR(19428, 19)
  "RequireFullQuadsKHR\0" // IR(19447, 20)
  "SharesInputWithAMDX\0" // IR(19467, 20)
  "OutputLinesEXT\0" // IR(19487, 15)
  "OutputLinesNV\0" // IR(19502, 14)
  "OutputPrimitivesEXT\0" // IR(19516, 20)
  "OutputPrimitivesNV\0" // IR(19536, 19)
  "DerivativeGroupQuadsKHR\0" // IR(19555, 24)
  "DerivativeGroupQuadsNV\0" // IR(19579, 23)
  "DerivativeGroupLinearKHR\0" // IR(19602, 25)
  "DerivativeGroupLinearNV\0" // IR(19627, 24)
  "OutputTrianglesEXT\0" // IR(19651, 19)
  "OutputTrianglesNV\0" // IR(19670, 18)
  "PixelInterlockOrderedEXT\0" // IR(19688, 25)
  "PixelInterlockUnorderedEXT\0" // IR(19713, 27)
  "SampleInterlockOrderedEXT\0" // IR(19740, 26)
  "SampleInterlockUnorderedEXT\0" // IR(19766, 28)
  "ShadingRateInterlockOrderedEXT\0" // IR(19794, 31)
  "ShadingRateInterlockUnorderedEXT\0" // IR(19825, 33)
  "SharedLocalMemorySizeINTEL\0" // IR(19858, 27)
  "RoundingModeRTPINTEL\0" // IR(19885, 21)
  "RoundingModeRTNINTEL\0" // IR(19906, 21)
  "FloatingPointModeALTINTEL\0" // IR(19927, 26)
  "FloatingPointModeIEEEINTEL\0" // IR(19953, 27)
  "MaxWorkgroupSizeINTEL\0" // IR(19980, 22)
  "MaxWorkDimINTEL\0" // IR(20002, 16)
  "NoGlobalOffsetINTEL\0" // IR(20018, 20)
  "NumSIMDWorkitemsINTEL\0" // IR(20038, 22)
  "SchedulerTargetFmaxMhzINTEL\0" // IR(20060, 28)
  "MaximallyReconvergesKHR\0" // IR(20088, 24)
  "FPFastMathDefault\0" // IR(20112, 18)
  "StreamingInterfaceINTEL\0" // IR(20130, 24)
  "RegisterMapInterfaceINTEL\0" // IR(20154, 26)
  "NamedBarrierCountINTEL\0" // IR(20180, 23)
  "MaximumRegistersINTEL\0" // IR(20203, 22)
  "MaximumRegistersIdINTEL\0" // IR(20225, 24)
  "SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS\0" // IR(20249, 51)
  "NamedMaximumRegistersINTEL\0" // IR(20300, 27)
  "Vertex\0" // IR(20327, 7)
  "TessellationControl\0" // IR(20334, 20)
  "TessellationEvaluation\0" // IR(20354, 23)
  "GLCompute\0" // IR(20377, 10)
  "TaskNV\0" // IR(20387, 7)
  "MeshNV\0" // IR(20394, 7)
  "RayGenerationKHR\0" // IR(20401, 17)
  "RayGenerationNV\0" // IR(20418, 16)
  "IntersectionKHR\0" // IR(20434, 16)
  "IntersectionNV\0" // IR(20450, 15)
  "AnyHitKHR\0" // IR(20465, 10)
  "AnyHitNV\0" // IR(20475, 9)
  "ClosestHitKHR\0" // IR(20484, 14)
  "ClosestHitNV\0" // IR(20498, 13)
  "MissKHR\0" // IR(20511, 8)
  "MissNV\0" // IR(20519, 7)
  "CallableKHR\0" // IR(20526, 12)
  "CallableNV\0" // IR(20538, 11)
  "TaskEXT\0" // IR(20549, 8)
  "MeshEXT\0" // IR(20557, 8)
  "Preserve\0" // IR(20565, 9)
  "FlushToZero\0" // IR(20574, 12)
  "BFloat16KHR\0" // IR(20586, 12)
  "Float8E4M3EXT\0" // IR(20598, 14)
  "Float8E5M2EXT\0" // IR(20612, 14)
  "IEEE\0" // IR(20626, 5)
  "ALT\0" // IR(20631, 4)
  "NotNaN\0" // IR(20635, 7)
  "NotInf\0" // IR(20642, 7)
  "NSZ\0" // IR(20649, 4)
  "AllowRecip\0" // IR(20653, 11)
  "Fast\0" // IR(20664, 5)
  "AllowContract\0" // IR(20669, 14)
  "AllowContractFastINTEL\0" // IR(20683, 23)
  "AllowReassoc\0" // IR(20706, 13)
  "AllowReassocINTEL\0" // IR(20719, 18)
  "AllowTransform\0" // IR(20737, 15)
  "RTE\0" // IR(20752, 4)
  "RTZ\0" // IR(20756, 4)
  "RTP\0" // IR(20760, 4)
  "RTN\0" // IR(20764, 4)
  "Vertical2Pixels\0" // IR(20768, 16)
  "Vertical4Pixels\0" // IR(20784, 16)
  "Horizontal2Pixels\0" // IR(20800, 18)
  "Horizontal4Pixels\0" // IR(20818, 18)
  "Inline\0" // IR(20836, 7)
  "DontInline\0" // IR(20843, 11)
  "Pure\0" // IR(20854, 5)
  "Const\0" // IR(20859, 6)
  "Zext\0" // IR(20865, 5)
  "Sext\0" // IR(20870, 5)
  "ByVal\0" // IR(20875, 6)
  "Sret\0" // IR(20881, 5)
  "NoAlias\0" // IR(20886, 8)
  "NoCapture\0" // IR(20894, 10)
  "NoWrite\0" // IR(20904, 8)
  "NoReadWrite\0" // IR(20912, 12)
  "RuntimeAlignedINTEL\0" // IR(20924, 20)
  "Reduce\0" // IR(20944, 7)
  "InclusiveScan\0" // IR(20951, 14)
  "ExclusiveScan\0" // IR(20965, 14)
  "ClusteredReduce\0" // IR(20979, 16)
  "PartitionedReduceNV\0" // IR(20995, 20)
  "PartitionedInclusiveScanNV\0" // IR(21015, 27)
  "PartitionedExclusiveScanNV\0" // IR(21042, 27)
  "NoneINTEL\0" // IR(21069, 10)
  "ReadINTEL\0" // IR(21079, 10)
  "WriteINTEL\0" // IR(21089, 11)
  "ReadWriteINTEL\0" // IR(21100, 15)
  "Bias\0" // IR(21115, 5)
  "Lod\0" // IR(21120, 4)
  "Grad\0" // IR(21124, 5)
  "ConstOffset\0" // IR(21129, 12)
  "ConstOffsets\0" // IR(21141, 13)
  "MakeTexelAvailable\0" // IR(21154, 19)
  "MakeTexelAvailableKHR\0" // IR(21173, 22)
  "MakeTexelVisible\0" // IR(21195, 17)
  "MakeTexelVisibleKHR\0" // IR(21212, 20)
  "NonPrivateTexel\0" // IR(21232, 16)
  "NonPrivateTexelKHR\0" // IR(21248, 19)
  "VolatileTexel\0" // IR(21267, 14)
  "VolatileTexelKHR\0" // IR(21281, 17)
  "SignExtend\0" // IR(21298, 11)
  "ZeroExtend\0" // IR(21309, 11)
  "Nontemporal\0" // IR(21320, 12)
  "Offsets\0" // IR(21332, 8)
  "SnormInt8\0" // IR(21340, 10)
  "SnormInt16\0" // IR(21350, 11)
  "UnormInt8\0" // IR(21361, 10)
  "UnormInt16\0" // IR(21371, 11)
  "UnormShort565\0" // IR(21382, 14)
  "UnormShort555\0" // IR(21396, 14)
  "UnormInt101010\0" // IR(21410, 15)
  "SignedInt8\0" // IR(21425, 11)
  "SignedInt16\0" // IR(21436, 12)
  "SignedInt32\0" // IR(21448, 12)
  "UnsignedInt8\0" // IR(21460, 13)
  "UnsignedInt16\0" // IR(21473, 14)
  "UnsignedInt32\0" // IR(21487, 14)
  "HalfFloat\0" // IR(21501, 10)
  "UnormInt24\0" // IR(21511, 11)
  "UnormInt101010_2\0" // IR(21522, 17)
  "UnormInt10X6EXT\0" // IR(21539, 16)
  "UnsignedIntRaw10EXT\0" // IR(21555, 20)
  "UnsignedIntRaw12EXT\0" // IR(21575, 20)
  "UnormInt2_101010EXT\0" // IR(21595, 20)
  "UnsignedInt10X6EXT\0" // IR(21615, 19)
  "UnsignedInt12X4EXT\0" // IR(21634, 19)
  "UnsignedInt14X2EXT\0" // IR(21653, 19)
  "UnormInt12X4EXT\0" // IR(21672, 16)
  "UnormInt14X2EXT\0" // IR(21688, 16)
  "R\0" // IR(21704, 2)
  "A\0" // IR(21706, 2)
  "RG\0" // IR(21708, 3)
  "RA\0" // IR(21711, 3)
  "RGB\0" // IR(21714, 4)
  "RGBA\0" // IR(21718, 5)
  "BGRA\0" // IR(21723, 5)
  "ARGB\0" // IR(21728, 5)
  "Intensity\0" // IR(21733, 10)
  "Luminance\0" // IR(21743, 10)
  "Rx\0" // IR(21753, 3)
  "RGx\0" // IR(21756, 4)
  "RGBx\0" // IR(21760, 5)
  "Depth\0" // IR(21765, 6)
  "DepthStencil\0" // IR(21771, 13)
  "sRGB\0" // IR(21784, 5)
  "sRGBx\0" // IR(21789, 6)
  "sRGBA\0" // IR(21795, 6)
  "sBGRA\0" // IR(21801, 6)
  "ABGR\0" // IR(21807, 5)
  "InitOnDeviceReprogramINTEL\0" // IR(21812, 27)
  "InitOnDeviceResetINTEL\0" // IR(21839, 23)
  "NoWait\0" // IR(21862, 7)
  "WaitKernel\0" // IR(21869, 11)
  "WaitWorkGroup\0" // IR(21880, 14)
  "CmdExecTime\0" // IR(21894, 12)
  "MayUsePrintf\0" // IR(21906, 13)
  "Export\0" // IR(21919, 7)
  "Import\0" // IR(21926, 7)
  "LinkOnceODR\0" // IR(21933, 12)
  "UncachedINTEL\0" // IR(21945, 14)
  "CachedINTEL\0" // IR(21959, 12)
  "StreamingINTEL\0" // IR(21971, 15)
  "InvalidateAfterReadINTEL\0" // IR(21986, 25)
  "ConstCachedINTEL\0" // IR(22011, 17)
  "Unroll\0" // IR(22028, 7)
  "DontUnroll\0" // IR(22035, 11)
  "DependencyInfinite\0" // IR(22046, 19)
  "DependencyLength\0" // IR(22065, 17)
  "MinIterations\0" // IR(22082, 14)
  "MaxIterations\0" // IR(22096, 14)
  "IterationMultiple\0" // IR(22110, 18)
  "PeelCount\0" // IR(22128, 10)
  "PartialCount\0" // IR(22138, 13)
  "DependencyArrayINTEL\0" // IR(22151, 21)
  "LoopCoalesceINTEL\0" // IR(22172, 18)
  "MaxInterleavingINTEL\0" // IR(22190, 21)
  "SpeculatedIterationsINTEL\0" // IR(22211, 26)
  "NoFusionINTEL\0" // IR(22237, 14)
  "LoopCountINTEL\0" // IR(22251, 15)
  "MaxReinvocationDelayINTEL\0" // IR(22266, 26)
  "MatrixASignedComponentsINTEL\0" // IR(22292, 29)
  "MatrixBSignedComponentsINTEL\0" // IR(22321, 29)
  "MatrixCBFloat16INTEL\0" // IR(22350, 21)
  "MatrixResultBFloat16INTEL\0" // IR(22371, 26)
  "MatrixAPackedInt8INTEL\0" // IR(22397, 23)
  "MatrixBPackedInt8INTEL\0" // IR(22420, 23)
  "MatrixAPackedInt4INTEL\0" // IR(22443, 23)
  "MatrixBPackedInt4INTEL\0" // IR(22466, 23)
  "MatrixATF32INTEL\0" // IR(22489, 17)
  "MatrixBTF32INTEL\0" // IR(22506, 17)
  "MatrixAPackedFloat16INTEL\0" // IR(22523, 26)
  "MatrixBPackedFloat16INTEL\0" // IR(22549, 26)
  "MatrixAPackedBFloat16INTEL\0" // IR(22575, 27)
  "MatrixBPackedBFloat16INTEL\0" // IR(22602, 27)
  "Aligned\0" // IR(22629, 8)
  "MakePointerAvailable\0" // IR(22637, 21)
  "MakePointerAvailableKHR\0" // IR(22658, 24)
  "MakePointerVisible\0" // IR(22682, 19)
  "MakePointerVisibleKHR\0" // IR(22701, 22)
  "NonPrivatePointer\0" // IR(22723, 18)
  "NonPrivatePointerKHR\0" // IR(22741, 21)
  "AliasScopeINTELMask\0" // IR(22762, 20)
  "NoAliasINTELMask\0" // IR(22782, 17)
  "Simple\0" // IR(22799, 7)
  "GLSL450\0" // IR(22806, 8)
  "OpenCL\0" // IR(22814, 7)
  "Vulkan\0" // IR(22821, 7)
  "VulkanKHR\0" // IR(22828, 10)
  "Relaxed\0" // IR(22838, 8)
  "Acquire\0" // IR(22846, 8)
  "Release\0" // IR(22854, 8)
  "AcquireRelease\0" // IR(22862, 15)
  "SequentiallyConsistent\0" // IR(22877, 23)
  "UniformMemory\0" // IR(22900, 14)
  "SubgroupMemory\0" // IR(22914, 15)
  "WorkgroupMemory\0" // IR(22929, 16)
  "CrossWorkgroupMemory\0" // IR(22945, 21)
  "AtomicCounterMemory\0" // IR(22966, 20)
  "ImageMemory\0" // IR(22986, 12)
  "OutputMemory\0" // IR(22998, 13)
  "OutputMemoryKHR\0" // IR(23011, 16)
  "MakeAvailable\0" // IR(23027, 14)
  "MakeAvailableKHR\0" // IR(23041, 17)
  "MakeVisible\0" // IR(23058, 12)
  "MakeVisibleKHR\0" // IR(23070, 15)
  "AutoINTEL\0" // IR(23085, 10)
  "WRAP\0" // IR(23095, 5)
  "SAT\0" // IR(23100, 4)
  "SAT_ZERO\0" // IR(23104, 9)
  "SAT_SYM\0" // IR(23113, 8)
  "PackedVectorFormat4x8Bit\0" // IR(23121, 25)
  "PackedVectorFormat4x8BitKHR\0" // IR(23146, 28)
  "TRN\0" // IR(23174, 4)
  "TRN_ZERO\0" // IR(23178, 9)
  "RND\0" // IR(23187, 4)
  "RND_ZERO\0" // IR(23191, 9)
  "RND_INF\0" // IR(23200, 8)
  "RND_MIN_INF\0" // IR(23208, 12)
  "RND_CONV\0" // IR(23220, 9)
  "RND_CONV_ODD\0" // IR(23229, 13)
  "RobustnessPerComponentNV\0" // IR(23242, 25)
  "RobustnessPerElementNV\0" // IR(23267, 23)
  "OpaqueKHR\0" // IR(23290, 10)
  "NoOpaqueKHR\0" // IR(23300, 12)
  "TerminateOnFirstHitKHR\0" // IR(23312, 23)
  "SkipClosestHitShaderKHR\0" // IR(23335, 24)
  "CullBackFacingTrianglesKHR\0" // IR(23359, 27)
  "CullFrontFacingTrianglesKHR\0" // IR(23386, 28)
  "CullOpaqueKHR\0" // IR(23414, 14)
  "CullNoOpaqueKHR\0" // IR(23428, 16)
  "SkipTrianglesKHR\0" // IR(23444, 17)
  "SkipBuiltinPrimitivesNV\0" // IR(23461, 24)
  "SkipAABBsKHR\0" // IR(23485, 13)
  "ForceOpacityMicromap2StateEXT\0" // IR(23498, 30)
  "RayQueryCandidateIntersectionTriangleKHR\0" // IR(23528, 41)
  "RayQueryCandidateIntersectionAABBKHR\0" // IR(23569, 37)
  "RayQueryCommittedIntersectionNoneKHR\0" // IR(23606, 37)
  "RayQueryCommittedIntersectionTriangleKHR\0" // IR(23643, 41)
  "RayQueryCommittedIntersectionGeneratedKHR\0" // IR(23684, 42)
  "RayQueryCandidateIntersectionKHR\0" // IR(23726, 33)
  "RayQueryCommittedIntersectionKHR\0" // IR(23759, 33)
  "ClampToEdge\0" // IR(23792, 12)
  "Clamp\0" // IR(23804, 6)
  "Repeat\0" // IR(23810, 7)
  "RepeatMirrored\0" // IR(23817, 15)
  "Nearest\0" // IR(23832, 8)
  "Linear\0" // IR(23840, 7)
  "Unknown\0" // IR(23847, 8)
  "Rgba32f\0" // IR(23855, 8)
  "Rgba16f\0" // IR(23863, 8)
  "R32f\0" // IR(23871, 5)
  "Rgba8\0" // IR(23876, 6)
  "Rgba8Snorm\0" // IR(23882, 11)
  "Rg32f\0" // IR(23893, 6)
  "Rg16f\0" // IR(23899, 6)
  "R11fG11fB10f\0" // IR(23905, 13)
  "R16f\0" // IR(23918, 5)
  "Rgba16\0" // IR(23923, 7)
  "Rgb10A2\0" // IR(23930, 8)
  "Rg16\0" // IR(23938, 5)
  "Rg8\0" // IR(23943, 4)
  "R16\0" // IR(23947, 4)
  "R8\0" // IR(23951, 3)
  "Rgba16Snorm\0" // IR(23954, 12)
  "Rg16Snorm\0" // IR(23966, 10)
  "Rg8Snorm\0" // IR(23976, 9)
  "R16Snorm\0" // IR(23985, 9)
  "R8Snorm\0" // IR(23994, 8)
  "Rgba32i\0" // IR(24002, 8)
  "Rgba16i\0" // IR(24010, 8)
  "Rgba8i\0" // IR(24018, 7)
  "R32i\0" // IR(24025, 5)
  "Rg32i\0" // IR(24030, 6)
  "Rg16i\0" // IR(24036, 6)
  "Rg8i\0" // IR(24042, 5)
  "R16i\0" // IR(24047, 5)
  "R8i\0" // IR(24052, 4)
  "Rgba32ui\0" // IR(24056, 9)
  "Rgba16ui\0" // IR(24065, 9)
  "Rgba8ui\0" // IR(24074, 8)
  "R32ui\0" // IR(24082, 6)
  "Rgb10a2ui\0" // IR(24088, 10)
  "Rg32ui\0" // IR(24098, 7)
  "Rg16ui\0" // IR(24105, 7)
  "Rg8ui\0" // IR(24112, 6)
  "R16ui\0" // IR(24118, 6)
  "R8ui\0" // IR(24124, 5)
  "R64ui\0" // IR(24129, 6)
  "R64i\0" // IR(24135, 5)
  "CrossDevice\0" // IR(24140, 12)
  "Device\0" // IR(24152, 7)
  "Workgroup\0" // IR(24159, 10)
  "Subgroup\0" // IR(24169, 9)
  "Invocation\0" // IR(24178, 11)
  "QueueFamily\0" // IR(24189, 12)
  "QueueFamilyKHR\0" // IR(24201, 15)
  "ShaderCallKHR\0" // IR(24216, 14)
  "Flatten\0" // IR(24230, 8)
  "DontFlatten\0" // IR(24238, 12)
  "IdentifierPossibleDuplicates\0" // IR(24250, 29)
  "FlagUnknownPhysicalLayout\0" // IR(24279, 26)
  "ESSL\0" // IR(24305, 5)
  "GLSL\0" // IR(24310, 5)
  "OpenCL_C\0" // IR(24315, 9)
  "OpenCL_CPP\0" // IR(24324, 11)
  "HLSL\0" // IR(24335, 5)
  "CPP_for_OpenCL\0" // IR(24340, 15)
  "SYCL\0" // IR(24355, 5)
  "HERO_C\0" // IR(24360, 7)
  "NZSL\0" // IR(24367, 5)
  "WGSL\0" // IR(24372, 5)
  "Slang\0" // IR(24377, 6)
  "Zig\0" // IR(24383, 4)
  "Rust\0" // IR(24387, 5)
  "UniformConstant\0" // IR(24392, 16)
  "Input\0" // IR(24408, 6)
  "Output\0" // IR(24414, 7)
  "CrossWorkgroup\0" // IR(24421, 15)
  "Private\0" // IR(24436, 8)
  "Function\0" // IR(24444, 9)
  "Generic\0" // IR(24453, 8)
  "PushConstant\0" // IR(24461, 13)
  "AtomicCounter\0" // IR(24474, 14)
  "Image\0" // IR(24488, 6)
  "StorageBuffer\0" // IR(24494, 14)
  "TileImageEXT\0" // IR(24508, 13)
  "TileAttachmentQCOM\0" // IR(24521, 19)
  "NodePayloadAMDX\0" // IR(24540, 16)
  "CallableDataKHR\0" // IR(24556, 16)
  "CallableDataNV\0" // IR(24572, 15)
  "IncomingCallableDataKHR\0" // IR(24587, 24)
  "IncomingCallableDataNV\0" // IR(24611, 23)
  "RayPayloadKHR\0" // IR(24634, 14)
  "RayPayloadNV\0" // IR(24648, 13)
  "HitAttributeKHR\0" // IR(24661, 16)
  "HitAttributeNV\0" // IR(24677, 15)
  "IncomingRayPayloadKHR\0" // IR(24692, 22)
  "IncomingRayPayloadNV\0" // IR(24714, 21)
  "ShaderRecordBufferKHR\0" // IR(24735, 22)
  "ShaderRecordBufferNV\0" // IR(24757, 21)
  "PhysicalStorageBuffer\0" // IR(24778, 22)
  "PhysicalStorageBufferEXT\0" // IR(24800, 25)
  "HitObjectAttributeNV\0" // IR(24825, 21)
  "TaskPayloadWorkgroupEXT\0" // IR(24846, 24)
  "CodeSectionINTEL\0" // IR(24870, 17)
  "DeviceOnlyINTEL\0" // IR(24887, 16)
  "HostOnlyINTEL\0" // IR(24903, 14)
  "WriteThroughINTEL\0" // IR(24917, 18)
  "WriteBackINTEL\0" // IR(24935, 15)
  "TensorView\0" // IR(24950, 11)
  "DecodeFunc\0" // IR(24961, 11)
  "Undefined\0" // IR(24972, 10)
  "NoneARM\0" // IR(24982, 8)
  "NontemporalARM\0" // IR(24990, 15)
  "OutOfBoundsValueARM\0" // IR(25005, 20)
  "MakeElementAvailableARM\0" // IR(25025, 24)
  "MakeElementVisibleARM\0" // IR(25049, 22)
  "NonPrivateElementARM\0" // IR(25071, 21)
  "Nop\0" // IR(25092, 4)
  "SPV_OPERAND_TYPE_TYPE_ID\0" // IR(25096, 25)
  "SPV_OPERAND_TYPE_RESULT_ID\0" // IR(25121, 27)
  "Undef\0" // IR(25148, 6)
  "SourceContinued\0" // IR(25154, 16)
  "SPV_OPERAND_TYPE_SOURCE_LANGUAGE\0" // IR(25170, 33)
  "SPV_OPERAND_TYPE_OPTIONAL_ID\0" // IR(25203, 29)
  "SPV_OPERAND_TYPE_OPTIONAL_LITERAL_STRING\0" // IR(25232, 41)
  "Source\0" // IR(25273, 7)
  "SourceExtension\0" // IR(25280, 16)
  "Name\0" // IR(25296, 5)
  "MemberName\0" // IR(25301, 11)
  "String\0" // IR(25312, 7)
  "Line\0" // IR(25319, 5)
  "Extension\0" // IR(25324, 10)
  "ExtInstImport\0" // IR(25334, 14)
  "SPV_OPERAND_TYPE_EXTENSION_INSTRUCTION_NUMBER\0" // IR(25348, 46)
  "ExtInst\0" // IR(25394, 8)
  "SPV_OPERAND_TYPE_ADDRESSING_MODEL\0" // IR(25402, 34)
  "SPV_OPERAND_TYPE_MEMORY_MODEL\0" // IR(25436, 30)
  "MemoryModel\0" // IR(25466, 12)
  "SPV_OPERAND_TYPE_EXECUTION_MODEL\0" // IR(25478, 33)
  "SPV_OPERAND_TYPE_VARIABLE_ID\0" // IR(25511, 29)
  "EntryPoint\0" // IR(25540, 11)
  "SPV_OPERAND_TYPE_EXECUTION_MODE\0" // IR(25551, 32)
  "ExecutionMode\0" // IR(25583, 14)
  "SPV_OPERAND_TYPE_CAPABILITY\0" // IR(25597, 28)
  "Capability\0" // IR(25625, 11)
  "TypeVoid\0" // IR(25636, 9)
  "TypeBool\0" // IR(25645, 9)
  "TypeInt\0" // IR(25654, 8)
  "SPV_OPERAND_TYPE_OPTIONAL_FPENCODING\0" // IR(25662, 37)
  "TypeFloat\0" // IR(25699, 10)
  "TypeVector\0" // IR(25709, 11)
  "TypeMatrix\0" // IR(25720, 11)
  "SPV_OPERAND_TYPE_DIMENSIONALITY\0" // IR(25731, 32)
  "SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT\0" // IR(25763, 38)
  "SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER\0" // IR(25801, 43)
  "TypeImage\0" // IR(25844, 10)
  "TypeSampler\0" // IR(25854, 12)
  "TypeSampledImage\0" // IR(25866, 17)
  "TypeArray\0" // IR(25883, 10)
  "TypeRuntimeArray\0" // IR(25893, 17)
  "TypeStruct\0" // IR(25910, 11)
  "TypeOpaque\0" // IR(25921, 11)
  "SPV_OPERAND_TYPE_STORAGE_CLASS\0" // IR(25932, 31)
  "TypePointer\0" // IR(25963, 12)
  "TypeFunction\0" // IR(25975, 13)
  "TypeEvent\0" // IR(25988, 10)
  "TypeDeviceEvent\0" // IR(25998, 16)
  "TypeReserveId\0" // IR(26014, 14)
  "TypeQueue\0" // IR(26028, 10)
  "TypePipe\0" // IR(26038, 9)
  "TypeForwardPointer\0" // IR(26047, 19)
  "ConstantTrue\0" // IR(26066, 13)
  "ConstantFalse\0" // IR(26079, 14)
  "SPV_OPERAND_TYPE_TYPED_LITERAL_NUMBER\0" // IR(26093, 38)
  "ConstantComposite\0" // IR(26131, 18)
  "SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE\0" // IR(26149, 41)
  "SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE\0" // IR(26190, 37)
  "ConstantSampler\0" // IR(26227, 16)
  "ConstantNull\0" // IR(26243, 13)
  "SpecConstantTrue\0" // IR(26256, 17)
  "SpecConstantFalse\0" // IR(26273, 18)
  "SpecConstant\0" // IR(26291, 13)
  "SpecConstantComposite\0" // IR(26304, 22)
  "SPV_OPERAND_TYPE_SPEC_CONSTANT_OP_NUMBER\0" // IR(26326, 41)
  "SpecConstantOp\0" // IR(26367, 15)
  "SPV_OPERAND_TYPE_FUNCTION_CONTROL\0" // IR(26382, 34)
  "FunctionParameter\0" // IR(26416, 18)
  "FunctionEnd\0" // IR(26434, 12)
  "FunctionCall\0" // IR(26446, 13)
  "Variable\0" // IR(26459, 9)
  "ImageTexelPointer\0" // IR(26468, 18)
  "SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS\0" // IR(26486, 40)
  "Load\0" // IR(26526, 5)
  "Store\0" // IR(26531, 6)
  "CopyMemory\0" // IR(26537, 11)
  "CopyMemorySized\0" // IR(26548, 16)
  "AccessChain\0" // IR(26564, 12)
  "InBoundsAccessChain\0" // IR(26576, 20)
  "PtrAccessChain\0" // IR(26596, 15)
  "ArrayLength\0" // IR(26611, 12)
  "GenericPtrMemSemantics\0" // IR(26623, 23)
  "InBoundsPtrAccessChain\0" // IR(26646, 23)
  "SPV_OPERAND_TYPE_DECORATION\0" // IR(26669, 28)
  "Decorate\0" // IR(26697, 9)
  "MemberDecorate\0" // IR(26706, 15)
  "DecorationGroup\0" // IR(26721, 16)
  "GroupDecorate\0" // IR(26737, 14)
  "SPV_OPERAND_TYPE_VARIABLE_ID_LITERAL_INTEGER\0" // IR(26751, 45)
  "GroupMemberDecorate\0" // IR(26796, 20)
  "VectorExtractDynamic\0" // IR(26816, 21)
  "VectorInsertDynamic\0" // IR(26837, 20)
  "VectorShuffle\0" // IR(26857, 14)
  "CompositeConstruct\0" // IR(26871, 19)
  "CompositeExtract\0" // IR(26890, 17)
  "CompositeInsert\0" // IR(26907, 16)
  "CopyObject\0" // IR(26923, 11)
  "Transpose\0" // IR(26934, 10)
  "SampledImage\0" // IR(26944, 13)
  "SPV_OPERAND_TYPE_OPTIONAL_IMAGE\0" // IR(26957, 32)
  "ImageSampleImplicitLod\0" // IR(26989, 23)
  "SPV_OPERAND_TYPE_IMAGE\0" // IR(27012, 23)
  "ImageSampleExplicitLod\0" // IR(27035, 23)
  "ImageSampleDrefImplicitLod\0" // IR(27058, 27)
  "ImageSampleDrefExplicitLod\0" // IR(27085, 27)
  "ImageSampleProjImplicitLod\0" // IR(27112, 27)
  "ImageSampleProjExplicitLod\0" // IR(27139, 27)
  "ImageSampleProjDrefImplicitLod\0" // IR(27166, 31)
  "ImageSampleProjDrefExplicitLod\0" // IR(27197, 31)
  "ImageFetch\0" // IR(27228, 11)
  "ImageGather\0" // IR(27239, 12)
  "ImageDrefGather\0" // IR(27251, 16)
  "ImageRead\0" // IR(27267, 10)
  "ImageWrite\0" // IR(27277, 11)
  "ImageQueryFormat\0" // IR(27288, 17)
  "ImageQueryOrder\0" // IR(27305, 16)
  "ImageQuerySizeLod\0" // IR(27321, 18)
  "ImageQuerySize\0" // IR(27339, 15)
  "ImageQueryLod\0" // IR(27354, 14)
  "ImageQueryLevels\0" // IR(27368, 17)
  "ImageQuerySamples\0" // IR(27385, 18)
  "ConvertFToU\0" // IR(27403, 12)
  "ConvertFToS\0" // IR(27415, 12)
  "ConvertSToF\0" // IR(27427, 12)
  "ConvertUToF\0" // IR(27439, 12)
  "UConvert\0" // IR(27451, 9)
  "SConvert\0" // IR(27460, 9)
  "FConvert\0" // IR(27469, 9)
  "QuantizeToF16\0" // IR(27478, 14)
  "ConvertPtrToU\0" // IR(27492, 14)
  "SatConvertSToU\0" // IR(27506, 15)
  "SatConvertUToS\0" // IR(27521, 15)
  "ConvertUToPtr\0" // IR(27536, 14)
  "PtrCastToGeneric\0" // IR(27550, 17)
  "GenericCastToPtr\0" // IR(27567, 17)
  "GenericCastToPtrExplicit\0" // IR(27584, 25)
  "Bitcast\0" // IR(27609, 8)
  "SNegate\0" // IR(27617, 8)
  "FNegate\0" // IR(27625, 8)
  "IAdd\0" // IR(27633, 5)
  "FAdd\0" // IR(27638, 5)
  "ISub\0" // IR(27643, 5)
  "FSub\0" // IR(27648, 5)
  "IMul\0" // IR(27653, 5)
  "FMul\0" // IR(27658, 5)
  "UDiv\0" // IR(27663, 5)
  "SDiv\0" // IR(27668, 5)
  "FDiv\0" // IR(27673, 5)
  "UMod\0" // IR(27678, 5)
  "SRem\0" // IR(27683, 5)
  "SMod\0" // IR(27688, 5)
  "FRem\0" // IR(27693, 5)
  "FMod\0" // IR(27698, 5)
  "VectorTimesScalar\0" // IR(27703, 18)
  "MatrixTimesScalar\0" // IR(27721, 18)
  "VectorTimesMatrix\0" // IR(27739, 18)
  "MatrixTimesVector\0" // IR(27757, 18)
  "MatrixTimesMatrix\0" // IR(27775, 18)
  "OuterProduct\0" // IR(27793, 13)
  "Dot\0" // IR(27806, 4)
  "IAddCarry\0" // IR(27810, 10)
  "ISubBorrow\0" // IR(27820, 11)
  "UMulExtended\0" // IR(27831, 13)
  "SMulExtended\0" // IR(27844, 13)
  "Any\0" // IR(27857, 4)
  "All\0" // IR(27861, 4)
  "IsNan\0" // IR(27865, 6)
  "IsInf\0" // IR(27871, 6)
  "IsFinite\0" // IR(27877, 9)
  "IsNormal\0" // IR(27886, 9)
  "SignBitSet\0" // IR(27895, 11)
  "LessOrGreater\0" // IR(27906, 14)
  "Ordered\0" // IR(27920, 8)
  "Unordered\0" // IR(27928, 10)
  "LogicalEqual\0" // IR(27938, 13)
  "LogicalNotEqual\0" // IR(27951, 16)
  "LogicalOr\0" // IR(27967, 10)
  "LogicalAnd\0" // IR(27977, 11)
  "LogicalNot\0" // IR(27988, 11)
  "Select\0" // IR(27999, 7)
  "IEqual\0" // IR(28006, 7)
  "INotEqual\0" // IR(28013, 10)
  "UGreaterThan\0" // IR(28023, 13)
  "SGreaterThan\0" // IR(28036, 13)
  "UGreaterThanEqual\0" // IR(28049, 18)
  "SGreaterThanEqual\0" // IR(28067, 18)
  "ULessThan\0" // IR(28085, 10)
  "SLessThan\0" // IR(28095, 10)
  "ULessThanEqual\0" // IR(28105, 15)
  "SLessThanEqual\0" // IR(28120, 15)
  "FOrdEqual\0" // IR(28135, 10)
  "FUnordEqual\0" // IR(28145, 12)
  "FOrdNotEqual\0" // IR(28157, 13)
  "FUnordNotEqual\0" // IR(28170, 15)
  "FOrdLessThan\0" // IR(28185, 13)
  "FUnordLessThan\0" // IR(28198, 15)
  "FOrdGreaterThan\0" // IR(28213, 16)
  "FUnordGreaterThan\0" // IR(28229, 18)
  "FOrdLessThanEqual\0" // IR(28247, 18)
  "FUnordLessThanEqual\0" // IR(28265, 20)
  "FOrdGreaterThanEqual\0" // IR(28285, 21)
  "FUnordGreaterThanEqual\0" // IR(28306, 23)
  "ShiftRightLogical\0" // IR(28329, 18)
  "ShiftRightArithmetic\0" // IR(28347, 21)
  "ShiftLeftLogical\0" // IR(28368, 17)
  "BitwiseOr\0" // IR(28385, 10)
  "BitwiseXor\0" // IR(28395, 11)
  "BitwiseAnd\0" // IR(28406, 11)
  "Not\0" // IR(28417, 4)
  "BitFieldInsert\0" // IR(28421, 15)
  "BitFieldSExtract\0" // IR(28436, 17)
  "BitFieldUExtract\0" // IR(28453, 17)
  "BitReverse\0" // IR(28470, 11)
  "BitCount\0" // IR(28481, 9)
  "DPdx\0" // IR(28490, 5)
  "DPdy\0" // IR(28495, 5)
  "Fwidth\0" // IR(28500, 7)
  "DPdxFine\0" // IR(28507, 9)
  "DPdyFine\0" // IR(28516, 9)
  "FwidthFine\0" // IR(28525, 11)
  "DPdxCoarse\0" // IR(28536, 11)
  "DPdyCoarse\0" // IR(28547, 11)
  "FwidthCoarse\0" // IR(28558, 13)
  "EmitVertex\0" // IR(28571, 11)
  "EndPrimitive\0" // IR(28582, 13)
  "EmitStreamVertex\0" // IR(28595, 17)
  "EndStreamPrimitive\0" // IR(28612, 19)
  "SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID\0" // IR(28631, 37)
  "ControlBarrier\0" // IR(28668, 15)
  "MemoryBarrier\0" // IR(28683, 14)
  "AtomicLoad\0" // IR(28697, 11)
  "AtomicStore\0" // IR(28708, 12)
  "AtomicExchange\0" // IR(28720, 15)
  "AtomicCompareExchange\0" // IR(28735, 22)
  "AtomicCompareExchangeWeak\0" // IR(28757, 26)
  "AtomicIIncrement\0" // IR(28783, 17)
  "AtomicIDecrement\0" // IR(28800, 17)
  "AtomicIAdd\0" // IR(28817, 11)
  "AtomicISub\0" // IR(28828, 11)
  "AtomicSMin\0" // IR(28839, 11)
  "AtomicUMin\0" // IR(28850, 11)
  "AtomicSMax\0" // IR(28861, 11)
  "AtomicUMax\0" // IR(28872, 11)
  "AtomicAnd\0" // IR(28883, 10)
  "AtomicOr\0" // IR(28893, 9)
  "AtomicXor\0" // IR(28902, 10)
  "Phi\0" // IR(28912, 4)
  "SPV_OPERAND_TYPE_LOOP_CONTROL\0" // IR(28916, 30)
  "LoopMerge\0" // IR(28946, 10)
  "SPV_OPERAND_TYPE_SELECTION_CONTROL\0" // IR(28956, 35)
  "SelectionMerge\0" // IR(28991, 15)
  "Label\0" // IR(29006, 6)
  "Branch\0" // IR(29012, 7)
  "BranchConditional\0" // IR(29019, 18)
  "SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER_ID\0" // IR(29037, 45)
  "Switch\0" // IR(29082, 7)
  "Kill\0" // IR(29089, 5)
  "Return\0" // IR(29094, 7)
  "ReturnValue\0" // IR(29101, 12)
  "Unreachable\0" // IR(29113, 12)
  "LifetimeStart\0" // IR(29125, 14)
  "LifetimeStop\0" // IR(29139, 13)
  "GroupAsyncCopy\0" // IR(29152, 15)
  "GroupWaitEvents\0" // IR(29167, 16)
  "GroupAll\0" // IR(29183, 9)
  "GroupAny\0" // IR(29192, 9)
  "GroupBroadcast\0" // IR(29201, 15)
  "SPV_OPERAND_TYPE_GROUP_OPERATION\0" // IR(29216, 33)
  "GroupIAdd\0" // IR(29249, 10)
  "GroupFAdd\0" // IR(29259, 10)
  "GroupFMin\0" // IR(29269, 10)
  "GroupUMin\0" // IR(29279, 10)
  "GroupSMin\0" // IR(29289, 10)
  "GroupFMax\0" // IR(29299, 10)
  "GroupUMax\0" // IR(29309, 10)
  "GroupSMax\0" // IR(29319, 10)
  "ReadPipe\0" // IR(29329, 9)
  "WritePipe\0" // IR(29338, 10)
  "ReservedReadPipe\0" // IR(29348, 17)
  "ReservedWritePipe\0" // IR(29365, 18)
  "ReserveReadPipePackets\0" // IR(29383, 23)
  "ReserveWritePipePackets\0" // IR(29406, 24)
  "CommitReadPipe\0" // IR(29430, 15)
  "CommitWritePipe\0" // IR(29445, 16)
  "IsValidReserveId\0" // IR(29461, 17)
  "GetNumPipePackets\0" // IR(29478, 18)
  "GetMaxPipePackets\0" // IR(29496, 18)
  "GroupReserveReadPipePackets\0" // IR(29514, 28)
  "GroupReserveWritePipePackets\0" // IR(29542, 29)
  "GroupCommitReadPipe\0" // IR(29571, 20)
  "GroupCommitWritePipe\0" // IR(29591, 21)
  "EnqueueMarker\0" // IR(29612, 14)
  "EnqueueKernel\0" // IR(29626, 14)
  "GetKernelNDrangeSubGroupCount\0" // IR(29640, 30)
  "GetKernelNDrangeMaxSubGroupSize\0" // IR(29670, 32)
  "GetKernelWorkGroupSize\0" // IR(29702, 23)
  "GetKernelPreferredWorkGroupSizeMultiple\0" // IR(29725, 40)
  "RetainEvent\0" // IR(29765, 12)
  "ReleaseEvent\0" // IR(29777, 13)
  "CreateUserEvent\0" // IR(29790, 16)
  "IsValidEvent\0" // IR(29806, 13)
  "SetUserEventStatus\0" // IR(29819, 19)
  "CaptureEventProfilingInfo\0" // IR(29838, 26)
  "GetDefaultQueue\0" // IR(29864, 16)
  "BuildNDRange\0" // IR(29880, 13)
  "ImageSparseSampleImplicitLod\0" // IR(29893, 29)
  "ImageSparseSampleExplicitLod\0" // IR(29922, 29)
  "ImageSparseSampleDrefImplicitLod\0" // IR(29951, 33)
  "ImageSparseSampleDrefExplicitLod\0" // IR(29984, 33)
  "ImageSparseSampleProjImplicitLod\0" // IR(30017, 33)
  "ImageSparseSampleProjExplicitLod\0" // IR(30050, 33)
  "ImageSparseSampleProjDrefImplicitLod\0" // IR(30083, 37)
  "ImageSparseSampleProjDrefExplicitLod\0" // IR(30120, 37)
  "ImageSparseFetch\0" // IR(30157, 17)
  "ImageSparseGather\0" // IR(30174, 18)
  "ImageSparseDrefGather\0" // IR(30192, 22)
  "ImageSparseTexelsResident\0" // IR(30214, 26)
  "NoLine\0" // IR(30240, 7)
  "AtomicFlagTestAndSet\0" // IR(30247, 21)
  "AtomicFlagClear\0" // IR(30268, 16)
  "ImageSparseRead\0" // IR(30284, 16)
  "SizeOf\0" // IR(30300, 7)
  "TypePipeStorage\0" // IR(30307, 16)
  "ConstantPipeStorage\0" // IR(30323, 20)
  "CreatePipeFromPipeStorage\0" // IR(30343, 26)
  "GetKernelLocalSizeForSubgroupCount\0" // IR(30369, 35)
  "GetKernelMaxNumSubgroups\0" // IR(30404, 25)
  "TypeNamedBarrier\0" // IR(30429, 17)
  "NamedBarrierInitialize\0" // IR(30446, 23)
  "MemoryNamedBarrier\0" // IR(30469, 19)
  "ModuleProcessed\0" // IR(30488, 16)
  "ExecutionModeId\0" // IR(30504, 16)
  "DecorateId\0" // IR(30520, 11)
  "GroupNonUniformElect\0" // IR(30531, 21)
  "GroupNonUniformAll\0" // IR(30552, 19)
  "GroupNonUniformAny\0" // IR(30571, 19)
  "GroupNonUniformAllEqual\0" // IR(30590, 24)
  "GroupNonUniformBroadcast\0" // IR(30614, 25)
  "GroupNonUniformBroadcastFirst\0" // IR(30639, 30)
  "GroupNonUniformInverseBallot\0" // IR(30669, 29)
  "GroupNonUniformBallotBitExtract\0" // IR(30698, 32)
  "GroupNonUniformBallotBitCount\0" // IR(30730, 30)
  "GroupNonUniformBallotFindLSB\0" // IR(30760, 29)
  "GroupNonUniformBallotFindMSB\0" // IR(30789, 29)
  "GroupNonUniformShuffleXor\0" // IR(30818, 26)
  "GroupNonUniformShuffleUp\0" // IR(30844, 25)
  "GroupNonUniformShuffleDown\0" // IR(30869, 27)
  "GroupNonUniformIAdd\0" // IR(30896, 20)
  "GroupNonUniformFAdd\0" // IR(30916, 20)
  "GroupNonUniformIMul\0" // IR(30936, 20)
  "GroupNonUniformFMul\0" // IR(30956, 20)
  "GroupNonUniformSMin\0" // IR(30976, 20)
  "GroupNonUniformUMin\0" // IR(30996, 20)
  "GroupNonUniformFMin\0" // IR(31016, 20)
  "GroupNonUniformSMax\0" // IR(31036, 20)
  "GroupNonUniformUMax\0" // IR(31056, 20)
  "GroupNonUniformFMax\0" // IR(31076, 20)
  "GroupNonUniformBitwiseAnd\0" // IR(31096, 26)
  "GroupNonUniformBitwiseOr\0" // IR(31122, 25)
  "GroupNonUniformBitwiseXor\0" // IR(31147, 26)
  "GroupNonUniformLogicalAnd\0" // IR(31173, 26)
  "GroupNonUniformLogicalOr\0" // IR(31199, 25)
  "GroupNonUniformLogicalXor\0" // IR(31224, 26)
  "GroupNonUniformQuadBroadcast\0" // IR(31250, 29)
  "GroupNonUniformQuadSwap\0" // IR(31279, 24)
  "CopyLogical\0" // IR(31303, 12)
  "PtrEqual\0" // IR(31315, 9)
  "PtrNotEqual\0" // IR(31324, 12)
  "PtrDiff\0" // IR(31336, 8)
  "ColorAttachmentReadEXT\0" // IR(31344, 23)
  "DepthAttachmentReadEXT\0" // IR(31367, 23)
  "StencilAttachmentReadEXT\0" // IR(31390, 25)
  "TypeTensorARM\0" // IR(31415, 14)
  "SPV_OPERAND_TYPE_OPTIONAL_TENSOR_OPERANDS\0" // IR(31429, 42)
  "TensorReadARM\0" // IR(31471, 14)
  "TensorWriteARM\0" // IR(31485, 15)
  "TensorQuerySizeARM\0" // IR(31500, 19)
  "GraphConstantARM\0" // IR(31519, 17)
  "GraphEntryPointARM\0" // IR(31536, 19)
  "GraphInputARM\0" // IR(31555, 14)
  "GraphSetOutputARM\0" // IR(31569, 18)
  "GraphEndARM\0" // IR(31587, 12)
  "TypeGraphARM\0" // IR(31599, 13)
  "TerminateInvocation\0" // IR(31612, 20)
  "TypeUntypedPointerKHR\0" // IR(31632, 22)
  "UntypedVariableKHR\0" // IR(31654, 19)
  "UntypedAccessChainKHR\0" // IR(31673, 22)
  "UntypedInBoundsAccessChainKHR\0" // IR(31695, 30)
  "SubgroupFirstInvocationKHR\0" // IR(31725, 27)
  "UntypedPtrAccessChainKHR\0" // IR(31752, 25)
  "UntypedInBoundsPtrAccessChainKHR\0" // IR(31777, 33)
  "UntypedArrayLengthKHR\0" // IR(31810, 22)
  "UntypedPrefetchKHR\0" // IR(31832, 19)
  "SubgroupAllKHR\0" // IR(31851, 15)
  "SubgroupAnyKHR\0" // IR(31866, 15)
  "SubgroupAllEqualKHR\0" // IR(31881, 20)
  "SubgroupReadInvocationKHR\0" // IR(31901, 26)
  "ExtInstWithForwardRefsKHR\0" // IR(31927, 26)
  "TraceRayKHR\0" // IR(31953, 12)
  "ExecuteCallableKHR\0" // IR(31965, 19)
  "ConvertUToAccelerationStructureKHR\0" // IR(31984, 35)
  "IgnoreIntersectionKHR\0" // IR(32019, 22)
  "TerminateRayKHR\0" // IR(32041, 16)
  "SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT\0" // IR(32057, 47)
  "SDot\0" // IR(32104, 5)
  "SDotKHR\0" // IR(32109, 8)
  "UDot\0" // IR(32117, 5)
  "UDotKHR\0" // IR(32122, 8)
  "SUDot\0" // IR(32130, 6)
  "SUDotKHR\0" // IR(32136, 9)
  "SDotAccSat\0" // IR(32145, 11)
  "SDotAccSatKHR\0" // IR(32156, 14)
  "UDotAccSat\0" // IR(32170, 11)
  "UDotAccSatKHR\0" // IR(32181, 14)
  "SUDotAccSat\0" // IR(32195, 12)
  "SUDotAccSatKHR\0" // IR(32207, 15)
  "TypeCooperativeMatrixKHR\0" // IR(32222, 25)
  "CooperativeMatrixLoadKHR\0" // IR(32247, 25)
  "CooperativeMatrixStoreKHR\0" // IR(32272, 26)
  "SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS\0" // IR(32298, 54)
  "CooperativeMatrixMulAddKHR\0" // IR(32352, 27)
  "CooperativeMatrixLengthKHR\0" // IR(32379, 27)
  "ConstantCompositeReplicateEXT\0" // IR(32406, 30)
  "SpecConstantCompositeReplicateEXT\0" // IR(32436, 34)
  "CompositeConstructReplicateEXT\0" // IR(32470, 31)
  "TypeRayQueryKHR\0" // IR(32501, 16)
  "RayQueryInitializeKHR\0" // IR(32517, 22)
  "RayQueryTerminateKHR\0" // IR(32539, 21)
  "RayQueryGenerateIntersectionKHR\0" // IR(32560, 32)
  "RayQueryConfirmIntersectionKHR\0" // IR(32592, 31)
  "RayQueryProceedKHR\0" // IR(32623, 19)
  "RayQueryGetIntersectionTypeKHR\0" // IR(32642, 31)
  "ImageSampleWeightedQCOM\0" // IR(32673, 24)
  "ImageBoxFilterQCOM\0" // IR(32697, 19)
  "ImageBlockMatchSSDQCOM\0" // IR(32716, 23)
  "ImageBlockMatchSADQCOM\0" // IR(32739, 23)
  "ImageBlockMatchWindowSSDQCOM\0" // IR(32762, 29)
  "ImageBlockMatchWindowSADQCOM\0" // IR(32791, 29)
  "ImageBlockMatchGatherSSDQCOM\0" // IR(32820, 29)
  "ImageBlockMatchGatherSADQCOM\0" // IR(32849, 29)
  "GroupIAddNonUniformAMD\0" // IR(32878, 23)
  "GroupFAddNonUniformAMD\0" // IR(32901, 23)
  "GroupFMinNonUniformAMD\0" // IR(32924, 23)
  "GroupUMinNonUniformAMD\0" // IR(32947, 23)
  "GroupSMinNonUniformAMD\0" // IR(32970, 23)
  "GroupFMaxNonUniformAMD\0" // IR(32993, 23)
  "GroupUMaxNonUniformAMD\0" // IR(33016, 23)
  "GroupSMaxNonUniformAMD\0" // IR(33039, 23)
  "FragmentMaskFetchAMD\0" // IR(33062, 21)
  "FragmentFetchAMD\0" // IR(33083, 17)
  "ReadClockKHR\0" // IR(33100, 13)
  "AllocateNodePayloadsAMDX\0" // IR(33113, 25)
  "EnqueueNodePayloadsAMDX\0" // IR(33138, 24)
  "TypeNodePayloadArrayAMDX\0" // IR(33162, 25)
  "FinishWritingNodePayloadAMDX\0" // IR(33187, 29)
  "NodePayloadArrayLengthAMDX\0" // IR(33216, 27)
  "IsNodePayloadValidAMDX\0" // IR(33243, 23)
  "ConstantStringAMDX\0" // IR(33266, 19)
  "SpecConstantStringAMDX\0" // IR(33285, 23)
  "GroupNonUniformQuadAllKHR\0" // IR(33308, 26)
  "GroupNonUniformQuadAnyKHR\0" // IR(33334, 26)
  "HitObjectRecordHitMotionNV\0" // IR(33360, 27)
  "HitObjectRecordHitWithIndexMotionNV\0" // IR(33387, 36)
  "HitObjectRecordMissMotionNV\0" // IR(33423, 28)
  "HitObjectGetWorldToObjectNV\0" // IR(33451, 28)
  "HitObjectGetObjectToWorldNV\0" // IR(33479, 28)
  "HitObjectGetObjectRayDirectionNV\0" // IR(33507, 33)
  "HitObjectGetObjectRayOriginNV\0" // IR(33540, 30)
  "HitObjectTraceRayMotionNV\0" // IR(33570, 26)
  "HitObjectGetShaderRecordBufferHandleNV\0" // IR(33596, 39)
  "HitObjectGetShaderBindingTableRecordIndexNV\0" // IR(33635, 44)
  "HitObjectRecordEmptyNV\0" // IR(33679, 23)
  "HitObjectTraceRayNV\0" // IR(33702, 20)
  "HitObjectRecordHitNV\0" // IR(33722, 21)
  "HitObjectRecordHitWithIndexNV\0" // IR(33743, 30)
  "HitObjectRecordMissNV\0" // IR(33773, 22)
  "HitObjectExecuteShaderNV\0" // IR(33795, 25)
  "HitObjectGetCurrentTimeNV\0" // IR(33820, 26)
  "HitObjectGetAttributesNV\0" // IR(33846, 25)
  "HitObjectGetHitKindNV\0" // IR(33871, 22)
  "HitObjectGetPrimitiveIndexNV\0" // IR(33893, 29)
  "HitObjectGetGeometryIndexNV\0" // IR(33922, 28)
  "HitObjectGetInstanceIdNV\0" // IR(33950, 25)
  "HitObjectGetInstanceCustomIndexNV\0" // IR(33975, 34)
  "HitObjectGetWorldRayDirectionNV\0" // IR(34009, 32)
  "HitObjectGetWorldRayOriginNV\0" // IR(34041, 29)
  "HitObjectGetRayTMaxNV\0" // IR(34070, 22)
  "HitObjectGetRayTMinNV\0" // IR(34092, 22)
  "HitObjectIsEmptyNV\0" // IR(34114, 19)
  "HitObjectIsHitNV\0" // IR(34133, 17)
  "HitObjectIsMissNV\0" // IR(34150, 18)
  "ReorderThreadWithHitObjectNV\0" // IR(34168, 29)
  "ReorderThreadWithHintNV\0" // IR(34197, 24)
  "TypeHitObjectNV\0" // IR(34221, 16)
  "ImageSampleFootprintNV\0" // IR(34237, 23)
  "TypeCooperativeVectorNV\0" // IR(34260, 24)
  "CooperativeVectorMatrixMulNV\0" // IR(34284, 29)
  "CooperativeVectorOuterProductAccumulateNV\0" // IR(34313, 42)
  "CooperativeVectorReduceSumAccumulateNV\0" // IR(34355, 39)
  "CooperativeVectorMatrixMulAddNV\0" // IR(34394, 32)
  "CooperativeMatrixConvertNV\0" // IR(34426, 27)
  "EmitMeshTasksEXT\0" // IR(34453, 17)
  "SetMeshOutputsEXT\0" // IR(34470, 18)
  "GroupNonUniformPartitionNV\0" // IR(34488, 27)
  "WritePackedPrimitiveIndices4x8NV\0" // IR(34515, 33)
  "FetchMicroTriangleVertexPositionNV\0" // IR(34548, 35)
  "FetchMicroTriangleVertexBarycentricNV\0" // IR(34583, 38)
  "CooperativeVectorLoadNV\0" // IR(34621, 24)
  "CooperativeVectorStoreNV\0" // IR(34645, 25)
  "ReportIntersectionKHR\0" // IR(34670, 22)
  "ReportIntersectionNV\0" // IR(34692, 21)
  "IgnoreIntersectionNV\0" // IR(34713, 21)
  "TerminateRayNV\0" // IR(34734, 15)
  "TraceNV\0" // IR(34749, 8)
  "TraceMotionNV\0" // IR(34757, 14)
  "TraceRayMotionNV\0" // IR(34771, 17)
  "RayQueryGetIntersectionTriangleVertexPositionsKHR\0" // IR(34788, 50)
  "TypeAccelerationStructureKHR\0" // IR(34838, 29)
  "TypeAccelerationStructureNV\0" // IR(34867, 28)
  "ExecuteCallableNV\0" // IR(34895, 18)
  "RayQueryGetClusterIdNV\0" // IR(34913, 23)
  "HitObjectGetClusterIdNV\0" // IR(34936, 24)
  "TypeCooperativeMatrixNV\0" // IR(34960, 24)
  "CooperativeMatrixLoadNV\0" // IR(34984, 24)
  "CooperativeMatrixStoreNV\0" // IR(35008, 25)
  "CooperativeMatrixMulAddNV\0" // IR(35033, 26)
  "CooperativeMatrixLengthNV\0" // IR(35059, 26)
  "BeginInvocationInterlockEXT\0" // IR(35085, 28)
  "EndInvocationInterlockEXT\0" // IR(35113, 26)
  "SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE\0" // IR(35139, 43)
  "CooperativeMatrixReduceNV\0" // IR(35182, 26)
  "SPV_OPERAND_TYPE_MEMORY_ACCESS\0" // IR(35208, 31)
  "SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS\0" // IR(35239, 44)
  "CooperativeMatrixLoadTensorNV\0" // IR(35283, 30)
  "CooperativeMatrixStoreTensorNV\0" // IR(35313, 31)
  "CooperativeMatrixPerElementOpNV\0" // IR(35344, 32)
  "TypeTensorLayoutNV\0" // IR(35376, 19)
  "TypeTensorViewNV\0" // IR(35395, 17)
  "CreateTensorLayoutNV\0" // IR(35412, 21)
  "TensorLayoutSetDimensionNV\0" // IR(35433, 27)
  "TensorLayoutSetStrideNV\0" // IR(35460, 24)
  "TensorLayoutSliceNV\0" // IR(35484, 20)
  "TensorLayoutSetClampValueNV\0" // IR(35504, 28)
  "CreateTensorViewNV\0" // IR(35532, 19)
  "TensorViewSetDimensionNV\0" // IR(35551, 25)
  "TensorViewSetStrideNV\0" // IR(35576, 22)
  "IsHelperInvocationEXT\0" // IR(35598, 22)
  "TensorViewSetClipNV\0" // IR(35620, 20)
  "TensorLayoutSetBlockSizeNV\0" // IR(35640, 27)
  "CooperativeMatrixTransposeNV\0" // IR(35667, 29)
  "ConvertUToImageNV\0" // IR(35696, 18)
  "ConvertUToSamplerNV\0" // IR(35714, 20)
  "ConvertImageToUNV\0" // IR(35734, 18)
  "ConvertSamplerToUNV\0" // IR(35752, 20)
  "ConvertUToSampledImageNV\0" // IR(35772, 25)
  "ConvertSampledImageToUNV\0" // IR(35797, 25)
  "SamplerImageAddressingModeNV\0" // IR(35822, 29)
  "SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS\0" // IR(35851, 52)
  "RawAccessChainNV\0" // IR(35903, 17)
  "RayQueryGetIntersectionSpherePositionNV\0" // IR(35920, 40)
  "RayQueryGetIntersectionSphereRadiusNV\0" // IR(35960, 38)
  "RayQueryGetIntersectionLSSPositionsNV\0" // IR(35998, 38)
  "RayQueryGetIntersectionLSSRadiiNV\0" // IR(36036, 34)
  "RayQueryGetIntersectionLSSHitValueNV\0" // IR(36070, 37)
  "HitObjectGetSpherePositionNV\0" // IR(36107, 29)
  "HitObjectGetSphereRadiusNV\0" // IR(36136, 27)
  "HitObjectGetLSSPositionsNV\0" // IR(36163, 27)
  "HitObjectGetLSSRadiiNV\0" // IR(36190, 23)
  "HitObjectIsSphereHitNV\0" // IR(36213, 23)
  "HitObjectIsLSSHitNV\0" // IR(36236, 20)
  "RayQueryIsSphereHitNV\0" // IR(36256, 22)
  "RayQueryIsLSSHitNV\0" // IR(36278, 19)
  "SubgroupShuffleDownINTEL\0" // IR(36297, 25)
  "SubgroupShuffleUpINTEL\0" // IR(36322, 23)
  "SubgroupShuffleXorINTEL\0" // IR(36345, 24)
  "SubgroupBlockReadINTEL\0" // IR(36369, 23)
  "SubgroupBlockWriteINTEL\0" // IR(36392, 24)
  "SubgroupImageBlockReadINTEL\0" // IR(36416, 28)
  "SubgroupImageBlockWriteINTEL\0" // IR(36444, 29)
  "SubgroupImageMediaBlockReadINTEL\0" // IR(36473, 33)
  "SubgroupImageMediaBlockWriteINTEL\0" // IR(36506, 34)
  "UCountLeadingZerosINTEL\0" // IR(36540, 24)
  "UCountTrailingZerosINTEL\0" // IR(36564, 25)
  "AbsISubINTEL\0" // IR(36589, 13)
  "AbsUSubINTEL\0" // IR(36602, 13)
  "IAddSatINTEL\0" // IR(36615, 13)
  "UAddSatINTEL\0" // IR(36628, 13)
  "IAverageINTEL\0" // IR(36641, 14)
  "UAverageINTEL\0" // IR(36655, 14)
  "IAverageRoundedINTEL\0" // IR(36669, 21)
  "UAverageRoundedINTEL\0" // IR(36690, 21)
  "ISubSatINTEL\0" // IR(36711, 13)
  "USubSatINTEL\0" // IR(36724, 13)
  "IMul32x16INTEL\0" // IR(36737, 15)
  "UMul32x16INTEL\0" // IR(36752, 15)
  "ConstantFunctionPointerINTEL\0" // IR(36767, 29)
  "FunctionPointerCallINTEL\0" // IR(36796, 25)
  "AsmTargetINTEL\0" // IR(36821, 15)
  "AsmCallINTEL\0" // IR(36836, 13)
  "AtomicFMinEXT\0" // IR(36849, 14)
  "AtomicFMaxEXT\0" // IR(36863, 14)
  "AssumeTrueKHR\0" // IR(36877, 14)
  "ExpectKHR\0" // IR(36891, 10)
  "DecorateString\0" // IR(36901, 15)
  "DecorateStringGOOGLE\0" // IR(36916, 21)
  "MemberDecorateString\0" // IR(36937, 21)
  "MemberDecorateStringGOOGLE\0" // IR(36958, 27)
  "VmeImageINTEL\0" // IR(36985, 14)
  "TypeVmeImageINTEL\0" // IR(36999, 18)
  "TypeAvcImePayloadINTEL\0" // IR(37017, 23)
  "TypeAvcRefPayloadINTEL\0" // IR(37040, 23)
  "TypeAvcSicPayloadINTEL\0" // IR(37063, 23)
  "TypeAvcMcePayloadINTEL\0" // IR(37086, 23)
  "TypeAvcMceResultINTEL\0" // IR(37109, 22)
  "TypeAvcImeResultINTEL\0" // IR(37131, 22)
  "TypeAvcImeResultSingleReferenceStreamoutINTEL\0" // IR(37153, 46)
  "TypeAvcImeResultDualReferenceStreamoutINTEL\0" // IR(37199, 44)
  "TypeAvcImeSingleReferenceStreaminINTEL\0" // IR(37243, 39)
  "TypeAvcImeDualReferenceStreaminINTEL\0" // IR(37282, 37)
  "TypeAvcRefResultINTEL\0" // IR(37319, 22)
  "TypeAvcSicResultINTEL\0" // IR(37341, 22)
  "SubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL\0" // IR(37363, 60)
  "SubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL\0" // IR(37423, 53)
  "SubgroupAvcMceGetDefaultInterShapePenaltyINTEL\0" // IR(37476, 47)
  "SubgroupAvcMceSetInterShapePenaltyINTEL\0" // IR(37523, 40)
  "SubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL\0" // IR(37563, 51)
  "SubgroupAvcMceSetInterDirectionPenaltyINTEL\0" // IR(37614, 44)
  "SubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL\0" // IR(37658, 51)
  "SubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL\0" // IR(37709, 56)
  "SubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL\0" // IR(37765, 50)
  "SubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL\0" // IR(37815, 52)
  "SubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL\0" // IR(37867, 49)
  "SubgroupAvcMceSetMotionVectorCostFunctionINTEL\0" // IR(37916, 47)
  "SubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL\0" // IR(37963, 50)
  "SubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL\0" // IR(38013, 51)
  "SubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL\0" // IR(38064, 56)
  "SubgroupAvcMceSetAcOnlyHaarINTEL\0" // IR(38120, 33)
  "SubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL\0" // IR(38153, 52)
  "SubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL\0" // IR(38205, 61)
  "SubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL\0" // IR(38266, 61)
  "SubgroupAvcMceConvertToImePayloadINTEL\0" // IR(38327, 39)
  "SubgroupAvcMceConvertToImeResultINTEL\0" // IR(38366, 38)
  "SubgroupAvcMceConvertToRefPayloadINTEL\0" // IR(38404, 39)
  "SubgroupAvcMceConvertToRefResultINTEL\0" // IR(38443, 38)
  "SubgroupAvcMceConvertToSicPayloadINTEL\0" // IR(38481, 39)
  "SubgroupAvcMceConvertToSicResultINTEL\0" // IR(38520, 38)
  "SubgroupAvcMceGetMotionVectorsINTEL\0" // IR(38558, 36)
  "SubgroupAvcMceGetInterDistortionsINTEL\0" // IR(38594, 39)
  "SubgroupAvcMceGetBestInterDistortionsINTEL\0" // IR(38633, 43)
  "SubgroupAvcMceGetInterMajorShapeINTEL\0" // IR(38676, 38)
  "SubgroupAvcMceGetInterMinorShapeINTEL\0" // IR(38714, 38)
  "SubgroupAvcMceGetInterDirectionsINTEL\0" // IR(38752, 38)
  "SubgroupAvcMceGetInterMotionVectorCountINTEL\0" // IR(38790, 45)
  "SubgroupAvcMceGetInterReferenceIdsINTEL\0" // IR(38835, 40)
  "SubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL\0" // IR(38875, 62)
  "SubgroupAvcImeInitializeINTEL\0" // IR(38937, 30)
  "SubgroupAvcImeSetSingleReferenceINTEL\0" // IR(38967, 38)
  "SubgroupAvcImeSetDualReferenceINTEL\0" // IR(39005, 36)
  "SubgroupAvcImeRefWindowSizeINTEL\0" // IR(39041, 33)
  "SubgroupAvcImeAdjustRefOffsetINTEL\0" // IR(39074, 35)
  "SubgroupAvcImeConvertToMcePayloadINTEL\0" // IR(39109, 39)
  "SubgroupAvcImeSetMaxMotionVectorCountINTEL\0" // IR(39148, 43)
  "SubgroupAvcImeSetUnidirectionalMixDisableINTEL\0" // IR(39191, 47)
  "SubgroupAvcImeSetEarlySearchTerminationThresholdINTEL\0" // IR(39238, 54)
  "SubgroupAvcImeSetWeightedSadINTEL\0" // IR(39292, 34)
  "SubgroupAvcImeEvaluateWithSingleReferenceINTEL\0" // IR(39326, 47)
  "SubgroupAvcImeEvaluateWithDualReferenceINTEL\0" // IR(39373, 45)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL\0" // IR(39418, 55)
  "SubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL\0" // IR(39473, 53)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL\0" // IR(39526, 56)
  "SubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL\0" // IR(39582, 54)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL\0" // IR(39636, 58)
  "SubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL\0" // IR(39694, 56)
  "SubgroupAvcImeConvertToMceResultINTEL\0" // IR(39750, 38)
  "SubgroupAvcImeGetSingleReferenceStreaminINTEL\0" // IR(39788, 46)
  "SubgroupAvcImeGetDualReferenceStreaminINTEL\0" // IR(39834, 44)
  "SubgroupAvcImeStripSingleReferenceStreamoutINTEL\0" // IR(39878, 49)
  "SubgroupAvcImeStripDualReferenceStreamoutINTEL\0" // IR(39927, 47)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL\0" // IR(39974, 70)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL\0" // IR(40044, 68)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL\0" // IR(40112, 69)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL\0" // IR(40181, 68)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL\0" // IR(40249, 66)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL\0" // IR(40315, 67)
  "SubgroupAvcImeGetBorderReachedINTEL\0" // IR(40382, 36)
  "SubgroupAvcImeGetTruncatedSearchIndicationINTEL\0" // IR(40418, 48)
  "SubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL\0" // IR(40466, 59)
  "SubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL\0" // IR(40525, 58)
  "SubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL\0" // IR(40583, 56)
  "SubgroupAvcFmeInitializeINTEL\0" // IR(40639, 30)
  "SubgroupAvcBmeInitializeINTEL\0" // IR(40669, 30)
  "SubgroupAvcRefConvertToMcePayloadINTEL\0" // IR(40699, 39)
  "SubgroupAvcRefSetBidirectionalMixDisableINTEL\0" // IR(40738, 46)
  "SubgroupAvcRefSetBilinearFilterEnableINTEL\0" // IR(40784, 43)
  "SubgroupAvcRefEvaluateWithSingleReferenceINTEL\0" // IR(40827, 47)
  "SubgroupAvcRefEvaluateWithDualReferenceINTEL\0" // IR(40874, 45)
  "SubgroupAvcRefEvaluateWithMultiReferenceINTEL\0" // IR(40919, 46)
  "SubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL\0" // IR(40965, 56)
  "SubgroupAvcRefConvertToMceResultINTEL\0" // IR(41021, 38)
  "SubgroupAvcSicInitializeINTEL\0" // IR(41059, 30)
  "SubgroupAvcSicConfigureSkcINTEL\0" // IR(41089, 32)
  "SubgroupAvcSicConfigureIpeLumaINTEL\0" // IR(41121, 36)
  "SubgroupAvcSicConfigureIpeLumaChromaINTEL\0" // IR(41157, 42)
  "SubgroupAvcSicGetMotionVectorMaskINTEL\0" // IR(41199, 39)
  "SubgroupAvcSicConvertToMcePayloadINTEL\0" // IR(41238, 39)
  "SubgroupAvcSicSetIntraLumaShapePenaltyINTEL\0" // IR(41277, 44)
  "SubgroupAvcSicSetIntraLumaModeCostFunctionINTEL\0" // IR(41321, 48)
  "SubgroupAvcSicSetIntraChromaModeCostFunctionINTEL\0" // IR(41369, 50)
  "SubgroupAvcSicSetBilinearFilterEnableINTEL\0" // IR(41419, 43)
  "SubgroupAvcSicSetSkcForwardTransformEnableINTEL\0" // IR(41462, 48)
  "SubgroupAvcSicSetBlockBasedRawSkipSadINTEL\0" // IR(41510, 43)
  "SubgroupAvcSicEvaluateIpeINTEL\0" // IR(41553, 31)
  "SubgroupAvcSicEvaluateWithSingleReferenceINTEL\0" // IR(41584, 47)
  "SubgroupAvcSicEvaluateWithDualReferenceINTEL\0" // IR(41631, 45)
  "SubgroupAvcSicEvaluateWithMultiReferenceINTEL\0" // IR(41676, 46)
  "SubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL\0" // IR(41722, 56)
  "SubgroupAvcSicConvertToMceResultINTEL\0" // IR(41778, 38)
  "SubgroupAvcSicGetIpeLumaShapeINTEL\0" // IR(41816, 35)
  "SubgroupAvcSicGetBestIpeLumaDistortionINTEL\0" // IR(41851, 44)
  "SubgroupAvcSicGetBestIpeChromaDistortionINTEL\0" // IR(41895, 46)
  "SubgroupAvcSicGetPackedIpeLumaModesINTEL\0" // IR(41941, 41)
  "SubgroupAvcSicGetIpeChromaModeINTEL\0" // IR(41982, 36)
  "SubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL\0" // IR(42018, 50)
  "SubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL\0" // IR(42068, 48)
  "SubgroupAvcSicGetInterRawSadsINTEL\0" // IR(42116, 35)
  "SaveMemoryINTEL\0" // IR(42151, 16)
  "RestoreMemoryINTEL\0" // IR(42167, 19)
  "ArbitraryFloatSinCosPiINTEL\0" // IR(42186, 28)
  "ArbitraryFloatCastINTEL\0" // IR(42214, 24)
  "ArbitraryFloatCastFromIntINTEL\0" // IR(42238, 31)
  "ArbitraryFloatCastToIntINTEL\0" // IR(42269, 29)
  "ArbitraryFloatAddINTEL\0" // IR(42298, 23)
  "ArbitraryFloatSubINTEL\0" // IR(42321, 23)
  "ArbitraryFloatMulINTEL\0" // IR(42344, 23)
  "ArbitraryFloatDivINTEL\0" // IR(42367, 23)
  "ArbitraryFloatGTINTEL\0" // IR(42390, 22)
  "ArbitraryFloatGEINTEL\0" // IR(42412, 22)
  "ArbitraryFloatLTINTEL\0" // IR(42434, 22)
  "ArbitraryFloatLEINTEL\0" // IR(42456, 22)
  "ArbitraryFloatEQINTEL\0" // IR(42478, 22)
  "ArbitraryFloatRecipINTEL\0" // IR(42500, 25)
  "ArbitraryFloatRSqrtINTEL\0" // IR(42525, 25)
  "ArbitraryFloatCbrtINTEL\0" // IR(42550, 24)
  "ArbitraryFloatHypotINTEL\0" // IR(42574, 25)
  "ArbitraryFloatSqrtINTEL\0" // IR(42599, 24)
  "ArbitraryFloatLogINTEL\0" // IR(42623, 23)
  "ArbitraryFloatLog2INTEL\0" // IR(42646, 24)
  "ArbitraryFloatLog10INTEL\0" // IR(42670, 25)
  "ArbitraryFloatLog1pINTEL\0" // IR(42695, 25)
  "ArbitraryFloatExpINTEL\0" // IR(42720, 23)
  "ArbitraryFloatExp2INTEL\0" // IR(42743, 24)
  "ArbitraryFloatExp10INTEL\0" // IR(42767, 25)
  "ArbitraryFloatExpm1INTEL\0" // IR(42792, 25)
  "ArbitraryFloatSinINTEL\0" // IR(42817, 23)
  "ArbitraryFloatCosINTEL\0" // IR(42840, 23)
  "ArbitraryFloatSinCosINTEL\0" // IR(42863, 26)
  "ArbitraryFloatSinPiINTEL\0" // IR(42889, 25)
  "ArbitraryFloatCosPiINTEL\0" // IR(42914, 25)
  "ArbitraryFloatASinINTEL\0" // IR(42939, 24)
  "ArbitraryFloatASinPiINTEL\0" // IR(42963, 26)
  "ArbitraryFloatACosINTEL\0" // IR(42989, 24)
  "ArbitraryFloatACosPiINTEL\0" // IR(43013, 26)
  "ArbitraryFloatATanINTEL\0" // IR(43039, 24)
  "ArbitraryFloatATanPiINTEL\0" // IR(43063, 26)
  "ArbitraryFloatATan2INTEL\0" // IR(43089, 25)
  "ArbitraryFloatPowINTEL\0" // IR(43114, 23)
  "ArbitraryFloatPowRINTEL\0" // IR(43137, 24)
  "ArbitraryFloatPowNINTEL\0" // IR(43161, 24)
  "LoopControlINTEL\0" // IR(43185, 17)
  "AliasDomainDeclINTEL\0" // IR(43202, 21)
  "AliasScopeDeclINTEL\0" // IR(43223, 20)
  "AliasScopeListDeclINTEL\0" // IR(43243, 24)
  "FixedSqrtINTEL\0" // IR(43267, 15)
  "FixedRecipINTEL\0" // IR(43282, 16)
  "FixedRsqrtINTEL\0" // IR(43298, 16)
  "FixedSinINTEL\0" // IR(43314, 14)
  "FixedCosINTEL\0" // IR(43328, 14)
  "FixedSinCosINTEL\0" // IR(43342, 17)
  "FixedSinPiINTEL\0" // IR(43359, 16)
  "FixedCosPiINTEL\0" // IR(43375, 16)
  "FixedSinCosPiINTEL\0" // IR(43391, 19)
  "FixedLogINTEL\0" // IR(43410, 14)
  "FixedExpINTEL\0" // IR(43424, 14)
  "PtrCastToCrossWorkgroupINTEL\0" // IR(43438, 29)
  "CrossWorkgroupCastToPtrINTEL\0" // IR(43467, 29)
  "ReadPipeBlockingINTEL\0" // IR(43496, 22)
  "WritePipeBlockingINTEL\0" // IR(43518, 23)
  "RayQueryGetRayTMinKHR\0" // IR(43541, 22)
  "RayQueryGetRayFlagsKHR\0" // IR(43563, 23)
  "RayQueryGetIntersectionTKHR\0" // IR(43586, 28)
  "RayQueryGetIntersectionInstanceCustomIndexKHR\0" // IR(43614, 46)
  "RayQueryGetIntersectionInstanceIdKHR\0" // IR(43660, 37)
  "RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR\0" // IR(43697, 65)
  "RayQueryGetIntersectionGeometryIndexKHR\0" // IR(43762, 40)
  "RayQueryGetIntersectionPrimitiveIndexKHR\0" // IR(43802, 41)
  "RayQueryGetIntersectionBarycentricsKHR\0" // IR(43843, 39)
  "RayQueryGetIntersectionFrontFaceKHR\0" // IR(43882, 36)
  "RayQueryGetIntersectionCandidateAABBOpaqueKHR\0" // IR(43918, 46)
  "RayQueryGetIntersectionObjectRayDirectionKHR\0" // IR(43964, 45)
  "RayQueryGetIntersectionObjectRayOriginKHR\0" // IR(44009, 42)
  "RayQueryGetWorldRayDirectionKHR\0" // IR(44051, 32)
  "RayQueryGetWorldRayOriginKHR\0" // IR(44083, 29)
  "RayQueryGetIntersectionObjectToWorldKHR\0" // IR(44112, 40)
  "RayQueryGetIntersectionWorldToObjectKHR\0" // IR(44152, 40)
  "AtomicFAddEXT\0" // IR(44192, 14)
  "TypeBufferSurfaceINTEL\0" // IR(44206, 23)
  "TypeStructContinuedINTEL\0" // IR(44229, 25)
  "ConstantCompositeContinuedINTEL\0" // IR(44254, 32)
  "SpecConstantCompositeContinuedINTEL\0" // IR(44286, 36)
  "CompositeConstructContinuedINTEL\0" // IR(44322, 33)
  "ConvertFToBF16INTEL\0" // IR(44355, 20)
  "ConvertBF16ToFINTEL\0" // IR(44375, 20)
  "ControlBarrierArriveINTEL\0" // IR(44395, 26)
  "ControlBarrierWaitINTEL\0" // IR(44421, 24)
  "TaskSequenceCreateINTEL\0" // IR(44445, 24)
  "TaskSequenceAsyncINTEL\0" // IR(44469, 23)
  "TaskSequenceGetINTEL\0" // IR(44492, 21)
  "TaskSequenceReleaseINTEL\0" // IR(44513, 25)
  "TypeTaskSequenceINTEL\0" // IR(44538, 22)
  "SubgroupBlockPrefetchINTEL\0" // IR(44560, 27)
  "Subgroup2DBlockLoadINTEL\0" // IR(44587, 25)
  "Subgroup2DBlockLoadTransformINTEL\0" // IR(44612, 34)
  "Subgroup2DBlockLoadTransposeINTEL\0" // IR(44646, 34)
  "Subgroup2DBlockPrefetchINTEL\0" // IR(44680, 29)
  "Subgroup2DBlockStoreINTEL\0" // IR(44709, 26)
  "SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS\0" // IR(44735, 62)
  "BitwiseFunctionINTEL\0" // IR(44797, 21)
  "ConditionalExtensionINTEL\0" // IR(44818, 26)
  "ConditionalEntryPointINTEL\0" // IR(44844, 27)
  "ConditionalCapabilityINTEL\0" // IR(44871, 27)
  "SpecConstantTargetINTEL\0" // IR(44898, 24)
  "SpecConstantArchitectureINTEL\0" // IR(44922, 30)
  "SPV_OPERAND_TYPE_VARIABLE_CAPABILITY\0" // IR(44952, 37)
  "SpecConstantCapabilitiesINTEL\0" // IR(44989, 30)
  "ConditionalCopyObjectINTEL\0" // IR(45019, 27)
  "GroupIMulKHR\0" // IR(45046, 13)
  "GroupFMulKHR\0" // IR(45059, 13)
  "GroupBitwiseAndKHR\0" // IR(45072, 19)
  "GroupBitwiseOrKHR\0" // IR(45091, 18)
  "GroupBitwiseXorKHR\0" // IR(45109, 19)
  "GroupLogicalAndKHR\0" // IR(45128, 19)
  "GroupLogicalOrKHR\0" // IR(45147, 18)
  "GroupLogicalXorKHR\0" // IR(45165, 19)
  "RoundFToTF32INTEL\0" // IR(45184, 18)
  "MaskedGatherINTEL\0" // IR(45202, 18)
  "MaskedScatterINTEL\0" // IR(45220, 19)
  "ConvertHandleToImageINTEL\0" // IR(45239, 26)
  "ConvertHandleToSamplerINTEL\0" // IR(45265, 28)
  "ConvertHandleToSampledImageINTEL\0" // IR(45293, 33)
  "DebugInfoNone\0" // IR(45326, 14)
  "DebugCompilationUnit\0" // IR(45340, 21)
  "SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING\0" // IR(45361, 52)
  "DebugTypeBasic\0" // IR(45413, 15)
  "SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS\0" // IR(45428, 34)
  "DebugTypePointer\0" // IR(45462, 17)
  "SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER\0" // IR(45479, 38)
  "DebugTypeQualifier\0" // IR(45517, 19)
  "DebugTypeArray\0" // IR(45536, 15)
  "DebugTypeVector\0" // IR(45551, 16)
  "DebugTypedef\0" // IR(45567, 13)
  "DebugTypeFunction\0" // IR(45580, 18)
  "DebugTypeEnum\0" // IR(45598, 14)
  "SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE\0" // IR(45612, 38)
  "DebugTypeComposite\0" // IR(45650, 19)
  "DebugTypeMember\0" // IR(45669, 16)
  "DebugTypeInheritance\0" // IR(45685, 21)
  "DebugTypePtrToMember\0" // IR(45706, 21)
  "DebugTypeTemplate\0" // IR(45727, 18)
  "DebugTypeTemplateParameter\0" // IR(45745, 27)
  "DebugTypeTemplateTemplateParameter\0" // IR(45772, 35)
  "DebugTypeTemplateParameterPack\0" // IR(45807, 31)
  "DebugGlobalVariable\0" // IR(45838, 20)
  "DebugFunctionDeclaration\0" // IR(45858, 25)
  "DebugFunction\0" // IR(45883, 14)
  "DebugLexicalBlock\0" // IR(45897, 18)
  "DebugLexicalBlockDiscriminator\0" // IR(45915, 31)
  "DebugScope\0" // IR(45946, 11)
  "DebugNoScope\0" // IR(45957, 13)
  "DebugInlinedAt\0" // IR(45970, 15)
  "SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER\0" // IR(45985, 42)
  "DebugLocalVariable\0" // IR(46027, 19)
  "DebugInlinedVariable\0" // IR(46046, 21)
  "DebugDeclare\0" // IR(46067, 13)
  "DebugValue\0" // IR(46080, 11)
  "SPV_OPERAND_TYPE_DEBUG_OPERATION\0" // IR(46091, 33)
  "DebugOperation\0" // IR(46124, 15)
  "DebugExpression\0" // IR(46139, 16)
  "DebugMacroDef\0" // IR(46155, 14)
  "DebugMacroUndef\0" // IR(46169, 16)
  "Round\0" // IR(46185, 6)
  "RoundEven\0" // IR(46191, 10)
  "Trunc\0" // IR(46201, 6)
  "FAbs\0" // IR(46207, 5)
  "SAbs\0" // IR(46212, 5)
  "FSign\0" // IR(46217, 6)
  "SSign\0" // IR(46223, 6)
  "Floor\0" // IR(46229, 6)
  "Ceil\0" // IR(46235, 5)
  "Fract\0" // IR(46240, 6)
  "Radians\0" // IR(46246, 8)
  "Degrees\0" // IR(46254, 8)
  "Sin\0" // IR(46262, 4)
  "Cos\0" // IR(46266, 4)
  "Tan\0" // IR(46270, 4)
  "Asin\0" // IR(46274, 5)
  "Acos\0" // IR(46279, 5)
  "Atan\0" // IR(46284, 5)
  "Sinh\0" // IR(46289, 5)
  "Cosh\0" // IR(46294, 5)
  "Tanh\0" // IR(46299, 5)
  "Asinh\0" // IR(46304, 6)
  "Acosh\0" // IR(46310, 6)
  "Atanh\0" // IR(46316, 6)
  "Atan2\0" // IR(46322, 6)
  "Pow\0" // IR(46328, 4)
  "Exp\0" // IR(46332, 4)
  "Log\0" // IR(46336, 4)
  "Exp2\0" // IR(46340, 5)
  "Log2\0" // IR(46345, 5)
  "Sqrt\0" // IR(46350, 5)
  "InverseSqrt\0" // IR(46355, 12)
  "Determinant\0" // IR(46367, 12)
  "MatrixInverse\0" // IR(46379, 14)
  "Modf\0" // IR(46393, 5)
  "ModfStruct\0" // IR(46398, 11)
  "FMin\0" // IR(46409, 5)
  "UMin\0" // IR(46414, 5)
  "SMin\0" // IR(46419, 5)
  "FMax\0" // IR(46424, 5)
  "UMax\0" // IR(46429, 5)
  "SMax\0" // IR(46434, 5)
  "FClamp\0" // IR(46439, 7)
  "UClamp\0" // IR(46446, 7)
  "SClamp\0" // IR(46453, 7)
  "FMix\0" // IR(46460, 5)
  "IMix\0" // IR(46465, 5)
  "Step\0" // IR(46470, 5)
  "SmoothStep\0" // IR(46475, 11)
  "Fma\0" // IR(46486, 4)
  "Frexp\0" // IR(46490, 6)
  "FrexpStruct\0" // IR(46496, 12)
  "Ldexp\0" // IR(46508, 6)
  "PackSnorm4x8\0" // IR(46514, 13)
  "PackUnorm4x8\0" // IR(46527, 13)
  "PackSnorm2x16\0" // IR(46540, 14)
  "PackUnorm2x16\0" // IR(46554, 14)
  "PackHalf2x16\0" // IR(46568, 13)
  "PackDouble2x32\0" // IR(46581, 15)
  "UnpackSnorm2x16\0" // IR(46596, 16)
  "UnpackUnorm2x16\0" // IR(46612, 16)
  "UnpackHalf2x16\0" // IR(46628, 15)
  "UnpackSnorm4x8\0" // IR(46643, 15)
  "UnpackUnorm4x8\0" // IR(46658, 15)
  "UnpackDouble2x32\0" // IR(46673, 17)
  "Length\0" // IR(46690, 7)
  "Distance\0" // IR(46697, 9)
  "Cross\0" // IR(46706, 6)
  "Normalize\0" // IR(46712, 10)
  "FaceForward\0" // IR(46722, 12)
  "Reflect\0" // IR(46734, 8)
  "Refract\0" // IR(46742, 8)
  "FindILsb\0" // IR(46750, 9)
  "FindSMsb\0" // IR(46759, 9)
  "FindUMsb\0" // IR(46768, 9)
  "InterpolateAtCentroid\0" // IR(46777, 22)
  "InterpolateAtSample\0" // IR(46799, 20)
  "InterpolateAtOffset\0" // IR(46819, 20)
  "NMin\0" // IR(46839, 5)
  "NMax\0" // IR(46844, 5)
  "NClamp\0" // IR(46849, 7)
  "ArgumentInfo\0" // IR(46856, 13)
  "ArgumentStorageBuffer\0" // IR(46869, 22)
  "ArgumentUniform\0" // IR(46891, 16)
  "ArgumentPodStorageBuffer\0" // IR(46907, 25)
  "ArgumentPodUniform\0" // IR(46932, 19)
  "ArgumentPodPushConstant\0" // IR(46951, 24)
  "ArgumentSampledImage\0" // IR(46975, 21)
  "ArgumentStorageImage\0" // IR(46996, 21)
  "ArgumentSampler\0" // IR(47017, 16)
  "ArgumentWorkgroup\0" // IR(47033, 18)
  "SpecConstantWorkgroupSize\0" // IR(47051, 26)
  "SpecConstantGlobalOffset\0" // IR(47077, 25)
  "SpecConstantWorkDim\0" // IR(47102, 20)
  "PushConstantGlobalOffset\0" // IR(47122, 25)
  "PushConstantEnqueuedLocalSize\0" // IR(47147, 30)
  "PushConstantGlobalSize\0" // IR(47177, 23)
  "PushConstantRegionOffset\0" // IR(47200, 25)
  "PushConstantNumWorkgroups\0" // IR(47225, 26)
  "PushConstantRegionGroupOffset\0" // IR(47251, 30)
  "ConstantDataStorageBuffer\0" // IR(47281, 26)
  "ConstantDataUniform\0" // IR(47307, 20)
  "PropertyRequiredWorkgroupSize\0" // IR(47327, 30)
  "SpecConstantSubgroupMaxSize\0" // IR(47357, 28)
  "ArgumentPointerPushConstant\0" // IR(47385, 28)
  "ArgumentPointerUniform\0" // IR(47413, 23)
  "ProgramScopeVariablesStorageBuffer\0" // IR(47436, 35)
  "ProgramScopeVariablePointerRelocation\0" // IR(47471, 38)
  "ImageArgumentInfoChannelOrderPushConstant\0" // IR(47509, 42)
  "ImageArgumentInfoChannelDataTypePushConstant\0" // IR(47551, 45)
  "ImageArgumentInfoChannelOrderUniform\0" // IR(47596, 37)
  "ImageArgumentInfoChannelDataTypeUniform\0" // IR(47633, 40)
  "ArgumentStorageTexelBuffer\0" // IR(47673, 27)
  "ArgumentUniformTexelBuffer\0" // IR(47700, 27)
  "ConstantDataPointerPushConstant\0" // IR(47727, 32)
  "ProgramScopeVariablePointerPushConstant\0" // IR(47759, 40)
  "PrintfInfo\0" // IR(47799, 11)
  "PrintfBufferStorageBuffer\0" // IR(47810, 26)
  "PrintfBufferPointerPushConstant\0" // IR(47836, 32)
  "NormalizedSamplerMaskPushConstant\0" // IR(47868, 34)
  "WorkgroupVariableSize\0" // IR(47902, 22)
  "DebugImportedEntity\0" // IR(47924, 20)
  "DebugSource\0" // IR(47944, 12)
  "DebugFunctionDefinition\0" // IR(47956, 24)
  "DebugSourceContinued\0" // IR(47980, 21)
  "DebugLine\0" // IR(48001, 10)
  "DebugNoLine\0" // IR(48011, 12)
  "DebugBuildIdentifier\0" // IR(48023, 21)
  "DebugStoragePath\0" // IR(48044, 17)
  "DebugEntryPoint\0" // IR(48061, 16)
  "DebugTypeMatrix\0" // IR(48077, 16)
  "Configuration\0" // IR(48093, 14)
  "StartCounter\0" // IR(48107, 13)
  "StopCounter\0" // IR(48120, 12)
  "PushConstants\0" // IR(48132, 14)
  "SpecializationMapEntry\0" // IR(48146, 23)
  "DescriptorSetBuffer\0" // IR(48169, 20)
  "DescriptorSetImage\0" // IR(48189, 19)
  "DescriptorSetSampler\0" // IR(48208, 21)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING\0" // IR(48229, 63)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS\0" // IR(48292, 45)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER\0" // IR(48337, 49)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE\0" // IR(48386, 49)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION\0" // IR(48435, 44)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY\0" // IR(48479, 50)
  "DebugModuleINTEL\0" // IR(48529, 17)
  "acos\0" // IR(48546, 5)
  "acosh\0" // IR(48551, 6)
  "acospi\0" // IR(48557, 7)
  "asin\0" // IR(48564, 5)
  "asinh\0" // IR(48569, 6)
  "asinpi\0" // IR(48575, 7)
  "atan\0" // IR(48582, 5)
  "atan2\0" // IR(48587, 6)
  "atanh\0" // IR(48593, 6)
  "atanpi\0" // IR(48599, 7)
  "atan2pi\0" // IR(48606, 8)
  "cbrt\0" // IR(48614, 5)
  "ceil\0" // IR(48619, 5)
  "copysign\0" // IR(48624, 9)
  "cos\0" // IR(48633, 4)
  "cosh\0" // IR(48637, 5)
  "cospi\0" // IR(48642, 6)
  "erfc\0" // IR(48648, 5)
  "erf\0" // IR(48653, 4)
  "exp\0" // IR(48657, 4)
  "exp2\0" // IR(48661, 5)
  "exp10\0" // IR(48666, 6)
  "expm1\0" // IR(48672, 6)
  "fabs\0" // IR(48678, 5)
  "fdim\0" // IR(48683, 5)
  "floor\0" // IR(48688, 6)
  "fma\0" // IR(48694, 4)
  "fmax\0" // IR(48698, 5)
  "fmin\0" // IR(48703, 5)
  "fmod\0" // IR(48708, 5)
  "fract\0" // IR(48713, 6)
  "frexp\0" // IR(48719, 6)
  "hypot\0" // IR(48725, 6)
  "ilogb\0" // IR(48731, 6)
  "ldexp\0" // IR(48737, 6)
  "lgamma\0" // IR(48743, 7)
  "lgamma_r\0" // IR(48750, 9)
  "log\0" // IR(48759, 4)
  "log2\0" // IR(48763, 5)
  "log10\0" // IR(48768, 6)
  "log1p\0" // IR(48774, 6)
  "logb\0" // IR(48780, 5)
  "mad\0" // IR(48785, 4)
  "maxmag\0" // IR(48789, 7)
  "minmag\0" // IR(48796, 7)
  "modf\0" // IR(48803, 5)
  "nan\0" // IR(48808, 4)
  "nextafter\0" // IR(48812, 10)
  "pow\0" // IR(48822, 4)
  "pown\0" // IR(48826, 5)
  "powr\0" // IR(48831, 5)
  "remainder\0" // IR(48836, 10)
  "remquo\0" // IR(48846, 7)
  "rint\0" // IR(48853, 5)
  "rootn\0" // IR(48858, 6)
  "round\0" // IR(48864, 6)
  "rsqrt\0" // IR(48870, 6)
  "sin\0" // IR(48876, 4)
  "sincos\0" // IR(48880, 7)
  "sinh\0" // IR(48887, 5)
  "sinpi\0" // IR(48892, 6)
  "sqrt\0" // IR(48898, 5)
  "tan\0" // IR(48903, 4)
  "tanh\0" // IR(48907, 5)
  "tanpi\0" // IR(48912, 6)
  "tgamma\0" // IR(48918, 7)
  "trunc\0" // IR(48925, 6)
  "half_cos\0" // IR(48931, 9)
  "half_divide\0" // IR(48940, 12)
  "half_exp\0" // IR(48952, 9)
  "half_exp2\0" // IR(48961, 10)
  "half_exp10\0" // IR(48971, 11)
  "half_log\0" // IR(48982, 9)
  "half_log2\0" // IR(48991, 10)
  "half_log10\0" // IR(49001, 11)
  "half_powr\0" // IR(49012, 10)
  "half_recip\0" // IR(49022, 11)
  "half_rsqrt\0" // IR(49033, 11)
  "half_sin\0" // IR(49044, 9)
  "half_sqrt\0" // IR(49053, 10)
  "half_tan\0" // IR(49063, 9)
  "native_cos\0" // IR(49072, 11)
  "native_divide\0" // IR(49083, 14)
  "native_exp\0" // IR(49097, 11)
  "native_exp2\0" // IR(49108, 12)
  "native_exp10\0" // IR(49120, 13)
  "native_log\0" // IR(49133, 11)
  "native_log2\0" // IR(49144, 12)
  "native_log10\0" // IR(49156, 13)
  "native_powr\0" // IR(49169, 12)
  "native_recip\0" // IR(49181, 13)
  "native_rsqrt\0" // IR(49194, 13)
  "native_sin\0" // IR(49207, 11)
  "native_sqrt\0" // IR(49218, 12)
  "native_tan\0" // IR(49230, 11)
  "fclamp\0" // IR(49241, 7)
  "degrees\0" // IR(49248, 8)
  "fmax_common\0" // IR(49256, 12)
  "fmin_common\0" // IR(49268, 12)
  "mix\0" // IR(49280, 4)
  "radians\0" // IR(49284, 8)
  "step\0" // IR(49292, 5)
  "smoothstep\0" // IR(49297, 11)
  "sign\0" // IR(49308, 5)
  "cross\0" // IR(49313, 6)
  "distance\0" // IR(49319, 9)
  "length\0" // IR(49328, 7)
  "normalize\0" // IR(49335, 10)
  "fast_distance\0" // IR(49345, 14)
  "fast_length\0" // IR(49359, 12)
  "fast_normalize\0" // IR(49371, 15)
  "s_abs\0" // IR(49386, 6)
  "s_abs_diff\0" // IR(49392, 11)
  "s_add_sat\0" // IR(49403, 10)
  "u_add_sat\0" // IR(49413, 10)
  "s_hadd\0" // IR(49423, 7)
  "u_hadd\0" // IR(49430, 7)
  "s_rhadd\0" // IR(49437, 8)
  "u_rhadd\0" // IR(49445, 8)
  "s_clamp\0" // IR(49453, 8)
  "u_clamp\0" // IR(49461, 8)
  "clz\0" // IR(49469, 4)
  "ctz\0" // IR(49473, 4)
  "s_mad_hi\0" // IR(49477, 9)
  "u_mad_sat\0" // IR(49486, 10)
  "s_mad_sat\0" // IR(49496, 10)
  "s_max\0" // IR(49506, 6)
  "u_max\0" // IR(49512, 6)
  "s_min\0" // IR(49518, 6)
  "u_min\0" // IR(49524, 6)
  "s_mul_hi\0" // IR(49530, 9)
  "rotate\0" // IR(49539, 7)
  "s_sub_sat\0" // IR(49546, 10)
  "u_sub_sat\0" // IR(49556, 10)
  "u_upsample\0" // IR(49566, 11)
  "s_upsample\0" // IR(49577, 11)
  "popcount\0" // IR(49588, 9)
  "s_mad24\0" // IR(49597, 8)
  "u_mad24\0" // IR(49605, 8)
  "s_mul24\0" // IR(49613, 8)
  "u_mul24\0" // IR(49621, 8)
  "vloadn\0" // IR(49629, 7)
  "vstoren\0" // IR(49636, 8)
  "vload_half\0" // IR(49644, 11)
  "vload_halfn\0" // IR(49655, 12)
  "vstore_half\0" // IR(49667, 12)
  "vstore_half_r\0" // IR(49679, 14)
  "vstore_halfn\0" // IR(49693, 13)
  "vstore_halfn_r\0" // IR(49706, 15)
  "vloada_halfn\0" // IR(49721, 13)
  "vstorea_halfn\0" // IR(49734, 14)
  "vstorea_halfn_r\0" // IR(49748, 16)
  "shuffle\0" // IR(49764, 8)
  "shuffle2\0" // IR(49772, 9)
  "printf\0" // IR(49781, 7)
  "prefetch\0" // IR(49788, 9)
  "bitselect\0" // IR(49797, 10)
  "select\0" // IR(49807, 7)
  "u_abs\0" // IR(49814, 6)
  "u_abs_diff\0" // IR(49820, 11)
  "u_mul_hi\0" // IR(49831, 9)
  "u_mad_hi\0" // IR(49840, 9)
  "CubeFaceIndexAMD\0" // IR(49849, 17)
  "CubeFaceCoordAMD\0" // IR(49866, 17)
  "TimeAMD\0" // IR(49883, 8)
  "SwizzleInvocationsAMD\0" // IR(49891, 22)
  "SwizzleInvocationsMaskedAMD\0" // IR(49913, 28)
  "WriteInvocationAMD\0" // IR(49941, 19)
  "MbcntAMD\0" // IR(49960, 9)
  "InterpolateAtVertexAMD\0" // IR(49969, 23)
  "FMin3AMD\0" // IR(49992, 9)
  "UMin3AMD\0" // IR(50001, 9)
  "SMin3AMD\0" // IR(50010, 9)
  "FMax3AMD\0" // IR(50019, 9)
  "UMax3AMD\0" // IR(50028, 9)
  "SMax3AMD\0" // IR(50037, 9)
  "FMid3AMD\0" // IR(50046, 9)
  "UMid3AMD\0" // IR(50055, 9)
  "SMid3AMD\0" // IR(50064, 9)
  "ARGMAX\0" // IR(50073, 7)
  "AVG_POOL2D\0" // IR(50080, 11)
  "CONV2D\0" // IR(50091, 7)
  "CONV3D\0" // IR(50098, 7)
  "DEPTHWISE_CONV2D\0" // IR(50105, 17)
  "FFT2D\0" // IR(50122, 6)
  "MATMUL\0" // IR(50128, 7)
  "MAX_POOL2D\0" // IR(50135, 11)
  "RFFT2D\0" // IR(50146, 7)
  "TRANSPOSE_CONV2D\0" // IR(50153, 17)
  "CLAMP\0" // IR(50170, 6)
  "ERF\0" // IR(50176, 4)
  "SIGMOID\0" // IR(50180, 8)
  "TANH\0" // IR(50188, 5)
  "ADD\0" // IR(50193, 4)
  "ARITHMETIC_RIGHT_SHIFT\0" // IR(50197, 23)
  "BITWISE_AND\0" // IR(50220, 12)
  "BITWISE_OR\0" // IR(50232, 11)
  "BITWISE_XOR\0" // IR(50243, 12)
  "INTDIV\0" // IR(50255, 7)
  "LOGICAL_AND\0" // IR(50262, 12)
  "LOGICAL_LEFT_SHIFT\0" // IR(50274, 19)
  "LOGICAL_RIGHT_SHIFT\0" // IR(50293, 20)
  "LOGICAL_OR\0" // IR(50313, 11)
  "LOGICAL_XOR\0" // IR(50324, 12)
  "MAXIMUM\0" // IR(50336, 8)
  "MINIMUM\0" // IR(50344, 8)
  "MUL\0" // IR(50352, 4)
  "POW\0" // IR(50356, 4)
  "SUB\0" // IR(50360, 4)
  "TABLE\0" // IR(50364, 6)
  "ABS\0" // IR(50370, 4)
  "BITWISE_NOT\0" // IR(50374, 12)
  "CEIL\0" // IR(50386, 5)
  "CLZ\0" // IR(50391, 4)
  "COS\0" // IR(50395, 4)
  "EXP\0" // IR(50399, 4)
  "FLOOR\0" // IR(50403, 6)
  "LOG\0" // IR(50409, 4)
  "LOGICAL_NOT\0" // IR(50413, 12)
  "NEGATE\0" // IR(50425, 7)
  "RECIPROCAL\0" // IR(50432, 11)
  "RSQRT\0" // IR(50443, 6)
  "SIN\0" // IR(50449, 4)
  "SELECT\0" // IR(50453, 7)
  "EQUAL\0" // IR(50460, 6)
  "GREATER\0" // IR(50466, 8)
  "GREATER_EQUAL\0" // IR(50474, 14)
  "REDUCE_ALL\0" // IR(50488, 11)
  "REDUCE_ANY\0" // IR(50499, 11)
  "REDUCE_MAX\0" // IR(50510, 11)
  "REDUCE_MIN\0" // IR(50521, 11)
  "REDUCE_PRODUCT\0" // IR(50532, 15)
  "REDUCE_SUM\0" // IR(50547, 11)
  "CONCAT\0" // IR(50558, 7)
  "PAD\0" // IR(50565, 4)
  "RESHAPE\0" // IR(50569, 8)
  "REVERSE\0" // IR(50577, 8)
  "SLICE\0" // IR(50585, 6)
  "TILE\0" // IR(50591, 5)
  "TRANSPOSE\0" // IR(50596, 10)
  "GATHER\0" // IR(50606, 7)
  "SCATTER\0" // IR(50613, 8)
  "RESIZE\0" // IR(50621, 7)
  "CAST\0" // IR(50628, 5)
  "RESCALE\0" // IR(50633, 8)
;

// Array of IndexRanges, where each represents a string by referencing
// the kStrings table.
// This array contains all sequences of alias strings used in the grammar.
// This table is referenced by an IndexRange elsewhere, i.e. by the 'aliases'
// field of an instruction or operand description.
static const IndexRange kAliasSpans[] = {
  IR(4682, 27), // 0 PhysicalStorageBuffer64EXT
  IR(5593, 18), // 1 SubgroupEqMaskKHR
  IR(5648, 18), // 2 SubgroupGeMaskKHR
  IR(5681, 18), // 3 SubgroupGtMaskKHR
  IR(5714, 18), // 4 SubgroupLeMaskKHR
  IR(5747, 18), // 5 SubgroupLtMaskKHR
  IR(6605, 12), // 6 BaryCoordNV
  IR(6660, 19), // 7 BaryCoordNoPerspNV
  IR(6691, 15), // 8 FragmentSizeNV
  IR(6748, 22), // 9 InvocationsPerPixelNV
  IR(6876, 11), // 10 LaunchIdNV
  IR(6901, 13), // 11 LaunchSizeNV
  IR(6932, 17), // 12 WorldRayOriginNV
  IR(6970, 20), // 13 WorldRayDirectionNV
  IR(7009, 18), // 14 ObjectRayOriginNV
  IR(7049, 21), // 15 ObjectRayDirectionNV
  IR(7081, 10), // 16 RayTminNV
  IR(7102, 10), // 17 RayTmaxNV
  IR(7135, 22), // 18 InstanceCustomIndexNV
  IR(7174, 16), // 19 ObjectToWorldNV
  IR(7207, 16), // 20 WorldToObjectNV
  IR(7241, 10), // 21 HitKindNV
  IR(7472, 19), // 22 IncomingRayFlagsNV
  IR(9248, 28), // 23 StorageUniformBufferBlock16
  IR(9311, 17), // 24 StorageUniform16
  IR(10094, 27), // 25 ShaderViewportIndexLayerNV
  IR(10138, 22), // 26 FragmentBarycentricNV
  IR(10191, 30), // 27 ComputeDerivativeGroupQuadsNV
  IR(10221, 14), // 28 ShadingRateNV
  IR(10281, 20), // 29 ShaderNonUniformEXT
  IR(10324, 26), // 30 RuntimeDescriptorArrayEXT
  IR(10386, 39), // 31 InputAttachmentArrayDynamicIndexingEXT
  IR(10464, 42), // 32 UniformTexelBufferArrayDynamicIndexingEXT
  IR(10545, 42), // 33 StorageTexelBufferArrayDynamicIndexingEXT
  IR(10624, 40), // 34 UniformBufferArrayNonUniformIndexingEXT
  IR(10700, 39), // 35 SampledImageArrayNonUniformIndexingEXT
  IR(10776, 40), // 36 StorageBufferArrayNonUniformIndexingEXT
  IR(10852, 39), // 37 StorageImageArrayNonUniformIndexingEXT
  IR(10930, 42), // 38 InputAttachmentArrayNonUniformIndexingEXT
  IR(11014, 45), // 39 UniformTexelBufferArrayNonUniformIndexingEXT
  IR(11101, 45), // 40 StorageTexelBufferArrayNonUniformIndexingEXT
  IR(11164, 21), // 41 VulkanMemoryModelKHR
  IR(11214, 32), // 42 VulkanMemoryModelDeviceScopeKHR
  IR(11246, 34), // 43 PhysicalStorageBufferAddressesEXT
  IR(11312, 31), // 44 ComputeDerivativeGroupLinearNV
  IR(11516, 28), // 45 DemoteToHelperInvocationEXT
  IR(12986, 22), // 46 DotProductInputAllKHR
  IR(13030, 25), // 47 DotProductInput4x8BitKHR
  IR(13083, 31), // 48 DotProductInput4x8BitPackedKHR
  IR(13125, 14), // 49 DotProductKHR
  IR(13290, 13), // 50 OptNoneINTEL
  IR(16329, 15), // 51 PerPrimitiveNV
  IR(16377, 12), // 52 PerVertexNV
  IR(16400, 14), // 53 NonUniformEXT
  IR(16430, 19), // 54 RestrictPointerEXT
  IR(16464, 18), // 55 AliasedPointerEXT
  IR(16774, 24), // 56 HlslCounterBufferGOOGLE
  IR(16811, 19), // 57 HlslSemanticGOOGLE
  IR(19502, 14), // 58 OutputLinesNV
  IR(19536, 19), // 59 OutputPrimitivesNV
  IR(19579, 23), // 60 DerivativeGroupQuadsNV
  IR(19627, 24), // 61 DerivativeGroupLinearNV
  IR(19670, 18), // 62 OutputTrianglesNV
  IR(20418, 16), // 63 RayGenerationNV
  IR(20450, 15), // 64 IntersectionNV
  IR(20475, 9), // 65 AnyHitNV
  IR(20498, 13), // 66 ClosestHitNV
  IR(20519, 7), // 67 MissNV
  IR(20538, 11), // 68 CallableNV
  IR(20683, 23), // 69 AllowContractFastINTEL
  IR(20719, 18), // 70 AllowReassocINTEL
  IR(21173, 22), // 71 MakeTexelAvailableKHR
  IR(21212, 20), // 72 MakeTexelVisibleKHR
  IR(21248, 19), // 73 NonPrivateTexelKHR
  IR(21281, 17), // 74 VolatileTexelKHR
  IR(22658, 24), // 75 MakePointerAvailableKHR
  IR(22701, 22), // 76 MakePointerVisibleKHR
  IR(22741, 21), // 77 NonPrivatePointerKHR
  IR(22828, 10), // 78 VulkanKHR
  IR(14101, 5), // 79 None
  IR(23011, 16), // 80 OutputMemoryKHR
  IR(23041, 17), // 81 MakeAvailableKHR
  IR(23070, 15), // 82 MakeVisibleKHR
  IR(23146, 28), // 83 PackedVectorFormat4x8BitKHR
  IR(23461, 24), // 84 SkipBuiltinPrimitivesNV
  IR(24201, 15), // 85 QueueFamilyKHR
  IR(24572, 15), // 86 CallableDataNV
  IR(24611, 23), // 87 IncomingCallableDataNV
  IR(24648, 13), // 88 RayPayloadNV
  IR(24677, 15), // 89 HitAttributeNV
  IR(24714, 21), // 90 IncomingRayPayloadNV
  IR(24757, 21), // 91 ShaderRecordBufferNV
  IR(24800, 25), // 92 PhysicalStorageBufferEXT
  IR(32109, 8), // 93 SDotKHR
  IR(32122, 8), // 94 UDotKHR
  IR(32136, 9), // 95 SUDotKHR
  IR(32156, 14), // 96 SDotAccSatKHR
  IR(32181, 14), // 97 UDotAccSatKHR
  IR(32207, 15), // 98 SUDotAccSatKHR
  IR(34692, 21), // 99 ReportIntersectionNV
  IR(34867, 28), // 100 TypeAccelerationStructureNV
  IR(36916, 21), // 101 DecorateStringGOOGLE
  IR(36958, 27), // 102 MemberDecorateStringGOOGLE
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
  spv::Capability::Float8EXT, // 77
  spv::Capability::CooperativeMatrixKHR, // 78
  spv::Capability::WorkgroupMemoryExplicitLayoutKHR, // 79
  spv::Capability::StorageBuffer16BitAccess, // 80
  spv::Capability::VariablePointersStorageBuffer, // 81
  spv::Capability::AtomicStorage, // 82
  spv::Capability::StorageBuffer8BitAccess, // 83
  spv::Capability::RayQueryKHR, // 84
  spv::Capability::RayTracingKHR, // 85
  spv::Capability::Int4TypeINTEL, // 86
  spv::Capability::CooperativeMatrixKHR, // 87
  spv::Capability::BFloat16TypeKHR, // 88
  spv::Capability::BFloat16TypeKHR, // 89
  spv::Capability::CooperativeMatrixKHR, // 90
  spv::Capability::MultiViewport, // 91
  spv::Capability::ShaderViewportIndexLayerEXT, // 92
  spv::Capability::ShaderViewportMaskNV, // 93
  spv::Capability::InputAttachment, // 94
  spv::Capability::ImageBuffer, // 95
  spv::Capability::ShaderNonUniform, // 96
  spv::Capability::InputAttachment, // 97
  spv::Capability::ShaderNonUniform, // 98
  spv::Capability::SampledBuffer, // 99
  spv::Capability::ShaderNonUniform, // 100
  spv::Capability::ImageBuffer, // 101
  spv::Capability::ShaderNonUniform, // 102
  spv::Capability::VectorAnyINTEL, // 103
  spv::Capability::Int8, // 104
  spv::Capability::FPGAClusterAttributesINTEL, // 105
  spv::Capability::FPGAKernelAttributesINTEL, // 106
  spv::Capability::Subgroup2DBlockIOINTEL, // 107
  spv::Capability::SpecConditionalINTEL, // 108
  spv::Capability::Shader, // 109
  spv::Capability::Kernel, // 110
  spv::Capability::Shader, // 111
  spv::Capability::UniformDecoration, // 112
  spv::Capability::GeometryStreams, // 113
  spv::Capability::TransformFeedback, // 114
  spv::Capability::Kernel, // 115
  spv::Capability::FloatControls2, // 116
  spv::Capability::Linkage, // 117
  spv::Capability::Float8EXT, // 118
  spv::Capability::SampleMaskOverrideCoverageNV, // 119
  spv::Capability::GeometryShaderPassthroughNV, // 120
  spv::Capability::MeshShadingNV, // 121
  spv::Capability::MeshShadingEXT, // 122
  spv::Capability::ShaderInvocationReorderNV, // 123
  spv::Capability::BindlessTextureNV, // 124
  spv::Capability::VectorComputeINTEL, // 125
  spv::Capability::IndirectReferencesINTEL, // 126
  spv::Capability::AsmINTEL, // 127
  spv::Capability::FunctionFloatControlINTEL, // 128
  spv::Capability::FPGAMemoryAttributesINTEL, // 129
  spv::Capability::FPGAMemoryAccessesINTEL, // 130
  spv::Capability::LoopFuseINTEL, // 131
  spv::Capability::FPGADSPControlINTEL, // 132
  spv::Capability::MemoryAccessAliasingINTEL, // 133
  spv::Capability::FPGAInvocationPipeliningAttributesINTEL, // 134
  spv::Capability::FPGABufferLocationINTEL, // 135
  spv::Capability::IOPipesINTEL, // 136
  spv::Capability::FPGAClusterAttributesV2INTEL, // 137
  spv::Capability::FPMaxErrorINTEL, // 138
  spv::Capability::FPGALatencyControlINTEL, // 139
  spv::Capability::FPGAArgumentInterfacesINTEL, // 140
  spv::Capability::GlobalVariableHostAccessINTEL, // 141
  spv::Capability::GlobalVariableFPGADecorationsINTEL, // 142
  spv::Capability::CacheControlsINTEL, // 143
  spv::Capability::TileImageColorReadAccessEXT, // 144
  spv::Capability::Geometry, // 145
  spv::Capability::Tessellation, // 146
  spv::Capability::MeshShadingNV, // 147
  spv::Capability::MeshShadingEXT, // 148
  spv::Capability::Geometry, // 149
  spv::Capability::MeshShadingNV, // 150
  spv::Capability::MeshShadingEXT, // 151
  spv::Capability::SubgroupDispatch, // 152
  spv::Capability::TileImageDepthReadAccessEXT, // 153
  spv::Capability::TileImageStencilReadAccessEXT, // 154
  spv::Capability::SampleMaskPostDepthCoverage, // 155
  spv::Capability::DenormPreserve, // 156
  spv::Capability::DenormFlushToZero, // 157
  spv::Capability::SignedZeroInfNanPreserve, // 158
  spv::Capability::RoundingModeRTE, // 159
  spv::Capability::RoundingModeRTZ, // 160
  spv::Capability::QuadControlKHR, // 161
  spv::Capability::ComputeDerivativeGroupQuadsNV, // 162
  spv::Capability::ComputeDerivativeGroupQuadsKHR, // 163
  spv::Capability::ComputeDerivativeGroupLinearNV, // 164
  spv::Capability::ComputeDerivativeGroupLinearKHR, // 165
  spv::Capability::FragmentShaderPixelInterlockEXT, // 166
  spv::Capability::FragmentShaderSampleInterlockEXT, // 167
  spv::Capability::FragmentShaderShadingRateInterlockEXT, // 168
  spv::Capability::RoundToInfinityINTEL, // 169
  spv::Capability::KernelAttributesINTEL, // 170
  spv::Capability::FloatControls2, // 171
  spv::Capability::FPGAKernelAttributesv2INTEL, // 172
  spv::Capability::RegisterLimitsINTEL, // 173
  spv::Capability::FloatControls2, // 174
  spv::Capability::FPFastMathModeINTEL, // 175
  spv::Capability::OptNoneEXT, // 176
  spv::Capability::RuntimeAlignedAttributeINTEL, // 177
  spv::Capability::Kernel, // 178
  spv::Capability::GroupNonUniformArithmetic, // 179
  spv::Capability::GroupNonUniformBallot, // 180
  spv::Capability::GroupNonUniformClustered, // 181
  spv::Capability::GroupNonUniformPartitionedNV, // 182
  spv::Capability::ImageGatherExtended, // 183
  spv::Capability::MinLod, // 184
  spv::Capability::VulkanMemoryModel, // 185
  spv::Capability::FPGALoopControlsINTEL, // 186
  spv::Capability::ArbitraryPrecisionFixedPointINTEL, // 187
  spv::Capability::RawAccessChainsNV, // 188
  spv::Capability::RayTraversalPrimitiveCullingKHR, // 189
  spv::Capability::RayTracingOpacityMicromapEXT, // 190
  spv::Capability::RayQueryKHR, // 191
  spv::Capability::StorageImageExtendedFormats, // 192
  spv::Capability::Int64ImageEXT, // 193
  spv::Capability::Shader, // 194
  spv::Capability::VectorComputeINTEL, // 195
  spv::Capability::GenericPointer, // 196
  spv::Capability::FunctionPointersINTEL, // 197
  spv::Capability::USMStorageClassesINTEL, // 198
  spv::Capability::CooperativeMatrixTensorAddressingNV, // 199
  spv::Capability::CooperativeMatrixBlockLoadsNV, // 200
  spv::Capability::TensorsARM, // 201
  spv::Capability::Addresses, // 202
  spv::Capability::PhysicalStorageBufferAddresses, // 203
  spv::Capability::LiteralSampler, // 204
  spv::Capability::Addresses, // 205
  spv::Capability::UntypedPointersKHR, // 206
  spv::Capability::Addresses, // 207
  spv::Capability::VariablePointers, // 208
  spv::Capability::VariablePointersStorageBuffer, // 209
  spv::Capability::PhysicalStorageBufferAddresses, // 210
  spv::Capability::Kernel, // 211
  spv::Capability::ImageQuery, // 212
  spv::Capability::ImageQuery, // 213
  spv::Capability::Shader, // 214
  spv::Capability::BitInstructions, // 215
  spv::Capability::DerivativeControl, // 216
  spv::Capability::Groups, // 217
  spv::Capability::SparseResidency, // 218
  spv::Capability::PipeStorage, // 219
  spv::Capability::NamedBarrier, // 220
  spv::Capability::GroupNonUniformVote, // 221
  spv::Capability::GroupNonUniformBallot, // 222
  spv::Capability::GroupNonUniformShuffle, // 223
  spv::Capability::GroupNonUniformShuffleRelative, // 224
  spv::Capability::GroupNonUniformArithmetic, // 225
  spv::Capability::GroupNonUniformClustered, // 226
  spv::Capability::GroupNonUniformPartitionedNV, // 227
  spv::Capability::GroupNonUniformQuad, // 228
  spv::Capability::Addresses, // 229
  spv::Capability::VariablePointers, // 230
  spv::Capability::VariablePointersStorageBuffer, // 231
  spv::Capability::GraphARM, // 232
  spv::Capability::UntypedPointersKHR, // 233
  spv::Capability::SubgroupBallotKHR, // 234
  spv::Capability::SubgroupVoteKHR, // 235
  spv::Capability::GroupNonUniformRotateKHR, // 236
  spv::Capability::RayTracingKHR, // 237
  spv::Capability::RayQueryKHR, // 238
  spv::Capability::DotProduct, // 239
  spv::Capability::CooperativeMatrixKHR, // 240
  spv::Capability::ReplicatedCompositesEXT, // 241
  spv::Capability::TextureSampleWeightedQCOM, // 242
  spv::Capability::TextureBoxFilterQCOM, // 243
  spv::Capability::TextureBlockMatchQCOM, // 244
  spv::Capability::TextureBlockMatch2QCOM, // 245
  spv::Capability::FragmentMaskAMD, // 246
  spv::Capability::ShaderClockKHR, // 247
  spv::Capability::ShaderInvocationReorderNV, // 248
  spv::Capability::RayTracingMotionBlurNV, // 249
  spv::Capability::ImageFootprintNV, // 250
  spv::Capability::CooperativeVectorNV, // 251
  spv::Capability::CooperativeVectorTrainingNV, // 252
  spv::Capability::CooperativeMatrixConversionsNV, // 253
  spv::Capability::DisplacementMicromapNV, // 254
  spv::Capability::RayQueryPositionFetchKHR, // 255
  spv::Capability::RayTracingNV, // 256
  spv::Capability::RayTracingKHR, // 257
  spv::Capability::RayQueryKHR, // 258
  spv::Capability::DisplacementMicromapNV, // 259
  spv::Capability::CooperativeMatrixNV, // 260
  spv::Capability::FragmentShaderSampleInterlockEXT, // 261
  spv::Capability::FragmentShaderPixelInterlockEXT, // 262
  spv::Capability::FragmentShaderShadingRateInterlockEXT, // 263
  spv::Capability::CooperativeMatrixReductionsNV, // 264
  spv::Capability::CooperativeMatrixPerElementOperationsNV, // 265
  spv::Capability::TensorAddressingNV, // 266
  spv::Capability::DemoteToHelperInvocation, // 267
  spv::Capability::SubgroupShuffleINTEL, // 268
  spv::Capability::SubgroupBufferBlockIOINTEL, // 269
  spv::Capability::SubgroupImageBlockIOINTEL, // 270
  spv::Capability::SubgroupImageMediaBlockIOINTEL, // 271
  spv::Capability::IntegerFunctions2INTEL, // 272
  spv::Capability::AtomicFloat16MinMaxEXT, // 273
  spv::Capability::AtomicFloat32MinMaxEXT, // 274
  spv::Capability::AtomicFloat64MinMaxEXT, // 275
  spv::Capability::AtomicFloat16VectorNV, // 276
  spv::Capability::ExpectAssumeKHR, // 277
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 278
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 279
  spv::Capability::SubgroupAvcMotionEstimationIntraINTEL, // 280
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 281
  spv::Capability::SubgroupAvcMotionEstimationChromaINTEL, // 282
  spv::Capability::VariableLengthArrayINTEL, // 283
  spv::Capability::ArbitraryPrecisionFloatingPointINTEL, // 284
  spv::Capability::UnstructuredLoopControlsINTEL, // 285
  spv::Capability::BlockingPipesINTEL, // 286
  spv::Capability::FPGARegINTEL, // 287
  spv::Capability::AtomicFloat16AddEXT, // 288
  spv::Capability::AtomicFloat32AddEXT, // 289
  spv::Capability::AtomicFloat64AddEXT, // 290
  spv::Capability::AtomicFloat16VectorNV, // 291
  spv::Capability::LongCompositesINTEL, // 292
  spv::Capability::BFloat16ConversionINTEL, // 293
  spv::Capability::SplitBarrierINTEL, // 294
  spv::Capability::ArithmeticFenceEXT, // 295
  spv::Capability::TaskSequenceINTEL, // 296
  spv::Capability::SubgroupBufferPrefetchINTEL, // 297
  spv::Capability::Subgroup2DBlockTransformINTEL, // 298
  spv::Capability::Subgroup2DBlockTransposeINTEL, // 299
  spv::Capability::SubgroupMatrixMultiplyAccumulateINTEL, // 300
  spv::Capability::TernaryBitwiseFunctionINTEL, // 301
  spv::Capability::FunctionVariantsINTEL, // 302
  spv::Capability::GroupUniformArithmeticKHR, // 303
  spv::Capability::TensorFloat32RoundingINTEL, // 304
  spv::Capability::MaskedGatherScatterINTEL, // 305
  spv::Capability::BindlessImagesINTEL, // 306
  spv::Capability::Float64, // 307
  spv::Capability::InterpolationFunction, // 308
};

// Array of extensions, referenced by IndexRanges elsewhere.
// Contains all sequences of extensions used in the grammar.
static const spvtools::Extension kExtensionSpans[] = {
  spvtools::Extension::kSPV_EXT_physical_storage_buffer, // 0
  spvtools::Extension::kSPV_KHR_physical_storage_buffer, // 1
  spvtools::Extension::kSPV_KHR_shader_ballot, // 2
  spvtools::Extension::kSPV_KHR_shader_draw_parameters, // 3
  spvtools::Extension::kSPV_KHR_shader_draw_parameters, // 4
  spvtools::Extension::kSPV_NV_mesh_shader, // 5
  spvtools::Extension::kSPV_EXT_mesh_shader, // 6
  spvtools::Extension::kSPV_KHR_fragment_shading_rate, // 7
  spvtools::Extension::kSPV_KHR_device_group, // 8
  spvtools::Extension::kSPV_KHR_multiview, // 9
  spvtools::Extension::kSPV_AMD_shader_explicit_vertex_parameter, // 10
  spvtools::Extension::kSPV_EXT_shader_stencil_export, // 11
  spvtools::Extension::kSPV_NV_viewport_array2, // 12
  spvtools::Extension::kSPV_NV_mesh_shader, // 13
  spvtools::Extension::kSPV_NV_stereo_view_rendering, // 14
  spvtools::Extension::kSPV_NVX_multiview_per_view_attributes, // 15
  spvtools::Extension::kSPV_NV_mesh_shader, // 16
  spvtools::Extension::kSPV_EXT_fragment_fully_covered, // 17
  spvtools::Extension::kSPV_NV_mesh_shader, // 18
  spvtools::Extension::kSPV_NV_fragment_shader_barycentric, // 19
  spvtools::Extension::kSPV_KHR_fragment_shader_barycentric, // 20
  spvtools::Extension::kSPV_EXT_fragment_invocation_density, // 21
  spvtools::Extension::kSPV_NV_shading_rate, // 22
  spvtools::Extension::kSPV_EXT_mesh_shader, // 23
  spvtools::Extension::kSPV_NV_ray_tracing, // 24
  spvtools::Extension::kSPV_KHR_ray_tracing, // 25
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
  spvtools::Extension::kSPV_ARM_tensors, // 36
  spvtools::Extension::kSPV_ARM_graph, // 37
  spvtools::Extension::kSPV_ARM_cooperative_matrix_layouts, // 38
  spvtools::Extension::kSPV_EXT_float8, // 39
  spvtools::Extension::kSPV_KHR_workgroup_memory_explicit_layout, // 40
  spvtools::Extension::kSPV_KHR_subgroup_vote, // 41
  spvtools::Extension::kSPV_KHR_16bit_storage, // 42
  spvtools::Extension::kSPV_KHR_variable_pointers, // 43
  spvtools::Extension::kSPV_KHR_shader_atomic_counter_ops, // 44
  spvtools::Extension::kSPV_KHR_post_depth_coverage, // 45
  spvtools::Extension::kSPV_KHR_8bit_storage, // 46
  spvtools::Extension::kSPV_KHR_float_controls, // 47
  spvtools::Extension::kSPV_KHR_ray_query, // 48
  spvtools::Extension::kSPV_KHR_untyped_pointers, // 49
  spvtools::Extension::kSPV_KHR_ray_query, // 50
  spvtools::Extension::kSPV_KHR_ray_tracing, // 51
  spvtools::Extension::kSPV_QCOM_image_processing, // 52
  spvtools::Extension::kSPV_QCOM_tile_shading, // 53
  spvtools::Extension::kSPV_QCOM_image_processing2, // 54
  spvtools::Extension::kSPV_AMD_gpu_shader_half_float_fetch, // 55
  spvtools::Extension::kSPV_AMD_texture_gather_bias_lod, // 56
  spvtools::Extension::kSPV_AMD_shader_fragment_mask, // 57
  spvtools::Extension::kSPV_AMD_shader_image_load_store_lod, // 58
  spvtools::Extension::kSPV_EXT_shader_image_int64, // 59
  spvtools::Extension::kSPV_KHR_shader_clock, // 60
  spvtools::Extension::kSPV_AMDX_shader_enqueue, // 61
  spvtools::Extension::kSPV_KHR_quad_control, // 62
  spvtools::Extension::kSPV_INTEL_int4, // 63
  spvtools::Extension::kSPV_KHR_bfloat16, // 64
  spvtools::Extension::kSPV_NV_sample_mask_override_coverage, // 65
  spvtools::Extension::kSPV_NV_geometry_shader_passthrough, // 66
  spvtools::Extension::kSPV_EXT_shader_viewport_index_layer, // 67
  spvtools::Extension::kSPV_NV_viewport_array2, // 68
  spvtools::Extension::kSPV_NV_viewport_array2, // 69
  spvtools::Extension::kSPV_NVX_multiview_per_view_attributes, // 70
  spvtools::Extension::kSPV_NV_shader_image_footprint, // 71
  spvtools::Extension::kSPV_NV_compute_shader_derivatives, // 72
  spvtools::Extension::kSPV_KHR_compute_shader_derivatives, // 73
  spvtools::Extension::kSPV_NV_shader_subgroup_partitioned, // 74
  spvtools::Extension::kSPV_EXT_descriptor_indexing, // 75
  spvtools::Extension::kSPV_KHR_ray_tracing_position_fetch, // 76
  spvtools::Extension::kSPV_KHR_vulkan_memory_model, // 77
  spvtools::Extension::kSPV_NV_cooperative_matrix, // 78
  spvtools::Extension::kSPV_EXT_fragment_shader_interlock, // 79
  spvtools::Extension::kSPV_EXT_demote_to_helper_invocation, // 80
  spvtools::Extension::kSPV_NV_displacement_micromap, // 81
  spvtools::Extension::kSPV_EXT_opacity_micromap, // 82
  spvtools::Extension::kSPV_NV_shader_invocation_reorder, // 83
  spvtools::Extension::kSPV_NV_bindless_texture, // 84
  spvtools::Extension::kSPV_NV_cooperative_vector, // 85
  spvtools::Extension::kSPV_NV_shader_atomic_fp16_vector, // 86
  spvtools::Extension::kSPV_NV_raw_access_chains, // 87
  spvtools::Extension::kSPV_NV_cooperative_matrix2, // 88
  spvtools::Extension::kSPV_NV_tensor_addressing, // 89
  spvtools::Extension::kSPV_INTEL_subgroups, // 90
  spvtools::Extension::kSPV_INTEL_media_block_io, // 91
  spvtools::Extension::kSPV_INTEL_float_controls2, // 92
  spvtools::Extension::kSPV_INTEL_shader_integer_functions2, // 93
  spvtools::Extension::kSPV_INTEL_function_pointers, // 94
  spvtools::Extension::kSPV_INTEL_inline_assembly, // 95
  spvtools::Extension::kSPV_EXT_shader_atomic_float_min_max, // 96
  spvtools::Extension::kSPV_INTEL_vector_compute, // 97
  spvtools::Extension::kSPV_KHR_expect_assume, // 98
  spvtools::Extension::kSPV_INTEL_device_side_avc_motion_estimation, // 99
  spvtools::Extension::kSPV_INTEL_variable_length_array, // 100
  spvtools::Extension::kSPV_INTEL_fpga_memory_attributes, // 101
  spvtools::Extension::kSPV_INTEL_fp_fast_math_mode, // 102
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_integers, // 103
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_floating_point, // 104
  spvtools::Extension::kSPV_INTEL_unstructured_loop_controls, // 105
  spvtools::Extension::kSPV_INTEL_fpga_loop_controls, // 106
  spvtools::Extension::kSPV_INTEL_kernel_attributes, // 107
  spvtools::Extension::kSPV_INTEL_fpga_memory_accesses, // 108
  spvtools::Extension::kSPV_INTEL_fpga_cluster_attributes, // 109
  spvtools::Extension::kSPV_INTEL_loop_fuse, // 110
  spvtools::Extension::kSPV_INTEL_fpga_dsp_control, // 111
  spvtools::Extension::kSPV_INTEL_memory_access_aliasing, // 112
  spvtools::Extension::kSPV_INTEL_fpga_invocation_pipelining_attributes, // 113
  spvtools::Extension::kSPV_INTEL_fpga_buffer_location, // 114
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_fixed_point, // 115
  spvtools::Extension::kSPV_INTEL_usm_storage_classes, // 116
  spvtools::Extension::kSPV_INTEL_runtime_aligned, // 117
  spvtools::Extension::kSPV_INTEL_io_pipes, // 118
  spvtools::Extension::kSPV_INTEL_blocking_pipes, // 119
  spvtools::Extension::kSPV_INTEL_fpga_reg, // 120
  spvtools::Extension::kSPV_KHR_integer_dot_product, // 121
  spvtools::Extension::kSPV_KHR_cooperative_matrix, // 122
  spvtools::Extension::kSPV_EXT_replicated_composites, // 123
  spvtools::Extension::kSPV_KHR_bit_instructions, // 124
  spvtools::Extension::kSPV_KHR_subgroup_rotate, // 125
  spvtools::Extension::kSPV_KHR_float_controls2, // 126
  spvtools::Extension::kSPV_EXT_shader_atomic_float_add, // 127
  spvtools::Extension::kSPV_INTEL_long_composites, // 128
  spvtools::Extension::kSPV_EXT_optnone, // 129
  spvtools::Extension::kSPV_INTEL_optnone, // 130
  spvtools::Extension::kSPV_EXT_shader_atomic_float16_add, // 131
  spvtools::Extension::kSPV_INTEL_debug_module, // 132
  spvtools::Extension::kSPV_INTEL_bfloat16_conversion, // 133
  spvtools::Extension::kSPV_INTEL_split_barrier, // 134
  spvtools::Extension::kSPV_EXT_arithmetic_fence, // 135
  spvtools::Extension::kSPV_INTEL_task_sequence, // 136
  spvtools::Extension::kSPV_INTEL_fp_max_error, // 137
  spvtools::Extension::kSPV_INTEL_fpga_latency_control, // 138
  spvtools::Extension::kSPV_INTEL_fpga_argument_interfaces, // 139
  spvtools::Extension::kSPV_INTEL_global_variable_host_access, // 140
  spvtools::Extension::kSPV_INTEL_global_variable_fpga_decorations, // 141
  spvtools::Extension::kSPV_INTEL_subgroup_buffer_prefetch, // 142
  spvtools::Extension::kSPV_INTEL_2d_block_io, // 143
  spvtools::Extension::kSPV_INTEL_subgroup_matrix_multiply_accumulate, // 144
  spvtools::Extension::kSPV_INTEL_ternary_bitwise_function, // 145
  spvtools::Extension::kSPV_INTEL_function_variants, // 146
  spvtools::Extension::kSPV_KHR_uniform_group_instructions, // 147
  spvtools::Extension::kSPV_INTEL_tensor_float32_conversion, // 148
  spvtools::Extension::kSPV_INTEL_masked_gather_scatter, // 149
  spvtools::Extension::kSPV_INTEL_cache_controls, // 150
  spvtools::Extension::kSPV_INTEL_maximum_registers, // 151
  spvtools::Extension::kSPV_INTEL_bindless_images, // 152
  spvtools::Extension::kSPV_KHR_no_integer_wrap_decoration, // 153
  spvtools::Extension::kSPV_NV_mesh_shader, // 154
  spvtools::Extension::kSPV_EXT_mesh_shader, // 155
  spvtools::Extension::kSPV_GOOGLE_hlsl_functionality1, // 156
  spvtools::Extension::kSPV_GOOGLE_user_type, // 157
  spvtools::Extension::kSPV_KHR_subgroup_uniform_control_flow, // 158
  spvtools::Extension::kSPV_AMD_shader_early_and_late_fragment_tests, // 159
  spvtools::Extension::kSPV_AMD_shader_early_and_late_fragment_tests, // 160
  spvtools::Extension::kSPV_EXT_shader_stencil_export, // 161
  spvtools::Extension::kSPV_KHR_maximal_reconvergence, // 162
  spvtools::Extension::kSPV_KHR_linkonce_odr, // 163
  spvtools::Extension::kSPV_KHR_storage_buffer_storage_class, // 164
  spvtools::Extension::kSPV_KHR_variable_pointers, // 165
  spvtools::Extension::kSPV_KHR_terminate_invocation, // 166
  spvtools::Extension::kSPV_KHR_relaxed_extended_instruction, // 167
  spvtools::Extension::kSPV_KHR_ray_tracing, // 168
  spvtools::Extension::kSPV_KHR_ray_query, // 169
  spvtools::Extension::kSPV_NV_ray_tracing, // 170
  spvtools::Extension::kSPV_KHR_ray_tracing, // 171
  spvtools::Extension::kSPV_KHR_ray_query, // 172
  spvtools::Extension::kSPV_NV_displacement_micromap, // 173
  spvtools::Extension::kSPV_GOOGLE_decorate_string, // 174
  spvtools::Extension::kSPV_GOOGLE_hlsl_functionality1, // 175
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
  SPV_OPERAND_TYPE_ID, // 357
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 358
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 359
  SPV_OPERAND_TYPE_TYPE_ID, // 360
  SPV_OPERAND_TYPE_RESULT_ID, // 361
  SPV_OPERAND_TYPE_ID, // 362
  SPV_OPERAND_TYPE_ID, // 363
  SPV_OPERAND_TYPE_OPTIONAL_TENSOR_OPERANDS, // 364
  SPV_OPERAND_TYPE_ID, // 365
  SPV_OPERAND_TYPE_ID, // 366
  SPV_OPERAND_TYPE_ID, // 367
  SPV_OPERAND_TYPE_OPTIONAL_TENSOR_OPERANDS, // 368
  SPV_OPERAND_TYPE_TYPE_ID, // 369
  SPV_OPERAND_TYPE_RESULT_ID, // 370
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 371
  SPV_OPERAND_TYPE_ID, // 372
  SPV_OPERAND_TYPE_LITERAL_STRING, // 373
  SPV_OPERAND_TYPE_VARIABLE_ID, // 374
  SPV_OPERAND_TYPE_ID, // 375
  SPV_OPERAND_TYPE_ID, // 376
  SPV_OPERAND_TYPE_VARIABLE_ID, // 377
  SPV_OPERAND_TYPE_RESULT_ID, // 378
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 379
  SPV_OPERAND_TYPE_VARIABLE_ID, // 380
  SPV_OPERAND_TYPE_RESULT_ID, // 381
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 382
  SPV_OPERAND_TYPE_TYPE_ID, // 383
  SPV_OPERAND_TYPE_RESULT_ID, // 384
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 385
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 386
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 387
  SPV_OPERAND_TYPE_TYPE_ID, // 388
  SPV_OPERAND_TYPE_RESULT_ID, // 389
  SPV_OPERAND_TYPE_ID, // 390
  SPV_OPERAND_TYPE_ID, // 391
  SPV_OPERAND_TYPE_ID, // 392
  SPV_OPERAND_TYPE_VARIABLE_ID, // 393
  SPV_OPERAND_TYPE_TYPE_ID, // 394
  SPV_OPERAND_TYPE_RESULT_ID, // 395
  SPV_OPERAND_TYPE_ID, // 396
  SPV_OPERAND_TYPE_ID, // 397
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 398
  SPV_OPERAND_TYPE_ID, // 399
  SPV_OPERAND_TYPE_ID, // 400
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 401
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 402
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 403
  SPV_OPERAND_TYPE_TYPE_ID, // 404
  SPV_OPERAND_TYPE_RESULT_ID, // 405
  SPV_OPERAND_TYPE_SCOPE_ID, // 406
  SPV_OPERAND_TYPE_ID, // 407
  SPV_OPERAND_TYPE_ID, // 408
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 409
  SPV_OPERAND_TYPE_TYPE_ID, // 410
  SPV_OPERAND_TYPE_RESULT_ID, // 411
  SPV_OPERAND_TYPE_ID, // 412
  SPV_OPERAND_TYPE_EXTENSION_INSTRUCTION_NUMBER, // 413
  SPV_OPERAND_TYPE_VARIABLE_ID, // 414
  SPV_OPERAND_TYPE_ID, // 415
  SPV_OPERAND_TYPE_ID, // 416
  SPV_OPERAND_TYPE_ID, // 417
  SPV_OPERAND_TYPE_ID, // 418
  SPV_OPERAND_TYPE_ID, // 419
  SPV_OPERAND_TYPE_ID, // 420
  SPV_OPERAND_TYPE_ID, // 421
  SPV_OPERAND_TYPE_ID, // 422
  SPV_OPERAND_TYPE_ID, // 423
  SPV_OPERAND_TYPE_ID, // 424
  SPV_OPERAND_TYPE_ID, // 425
  SPV_OPERAND_TYPE_TYPE_ID, // 426
  SPV_OPERAND_TYPE_RESULT_ID, // 427
  SPV_OPERAND_TYPE_ID, // 428
  SPV_OPERAND_TYPE_ID, // 429
  SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT, // 430
  SPV_OPERAND_TYPE_TYPE_ID, // 431
  SPV_OPERAND_TYPE_RESULT_ID, // 432
  SPV_OPERAND_TYPE_ID, // 433
  SPV_OPERAND_TYPE_ID, // 434
  SPV_OPERAND_TYPE_ID, // 435
  SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT, // 436
  SPV_OPERAND_TYPE_RESULT_ID, // 437
  SPV_OPERAND_TYPE_ID, // 438
  SPV_OPERAND_TYPE_SCOPE_ID, // 439
  SPV_OPERAND_TYPE_ID, // 440
  SPV_OPERAND_TYPE_ID, // 441
  SPV_OPERAND_TYPE_ID, // 442
  SPV_OPERAND_TYPE_TYPE_ID, // 443
  SPV_OPERAND_TYPE_RESULT_ID, // 444
  SPV_OPERAND_TYPE_ID, // 445
  SPV_OPERAND_TYPE_ID, // 446
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 447
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 448
  SPV_OPERAND_TYPE_ID, // 449
  SPV_OPERAND_TYPE_ID, // 450
  SPV_OPERAND_TYPE_ID, // 451
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 452
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 453
  SPV_OPERAND_TYPE_TYPE_ID, // 454
  SPV_OPERAND_TYPE_RESULT_ID, // 455
  SPV_OPERAND_TYPE_ID, // 456
  SPV_OPERAND_TYPE_ID, // 457
  SPV_OPERAND_TYPE_ID, // 458
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 459
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
  SPV_OPERAND_TYPE_ID, // 496
  SPV_OPERAND_TYPE_ID, // 497
  SPV_OPERAND_TYPE_ID, // 498
  SPV_OPERAND_TYPE_ID, // 499
  SPV_OPERAND_TYPE_ID, // 500
  SPV_OPERAND_TYPE_ID, // 501
  SPV_OPERAND_TYPE_ID, // 502
  SPV_OPERAND_TYPE_ID, // 503
  SPV_OPERAND_TYPE_ID, // 504
  SPV_OPERAND_TYPE_ID, // 505
  SPV_OPERAND_TYPE_ID, // 506
  SPV_OPERAND_TYPE_ID, // 507
  SPV_OPERAND_TYPE_ID, // 508
  SPV_OPERAND_TYPE_ID, // 509
  SPV_OPERAND_TYPE_ID, // 510
  SPV_OPERAND_TYPE_ID, // 511
  SPV_OPERAND_TYPE_ID, // 512
  SPV_OPERAND_TYPE_ID, // 513
  SPV_OPERAND_TYPE_ID, // 514
  SPV_OPERAND_TYPE_ID, // 515
  SPV_OPERAND_TYPE_ID, // 516
  SPV_OPERAND_TYPE_ID, // 517
  SPV_OPERAND_TYPE_ID, // 518
  SPV_OPERAND_TYPE_ID, // 519
  SPV_OPERAND_TYPE_ID, // 520
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 521
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 522
  SPV_OPERAND_TYPE_TYPE_ID, // 523
  SPV_OPERAND_TYPE_RESULT_ID, // 524
  SPV_OPERAND_TYPE_ID, // 525
  SPV_OPERAND_TYPE_ID, // 526
  SPV_OPERAND_TYPE_ID, // 527
  SPV_OPERAND_TYPE_ID, // 528
  SPV_OPERAND_TYPE_OPTIONAL_IMAGE, // 529
  SPV_OPERAND_TYPE_TYPE_ID, // 530
  SPV_OPERAND_TYPE_RESULT_ID, // 531
  SPV_OPERAND_TYPE_ID, // 532
  SPV_OPERAND_TYPE_ID, // 533
  SPV_OPERAND_TYPE_ID, // 534
  SPV_OPERAND_TYPE_ID, // 535
  SPV_OPERAND_TYPE_ID, // 536
  SPV_OPERAND_TYPE_ID, // 537
  SPV_OPERAND_TYPE_ID, // 538
  SPV_OPERAND_TYPE_ID, // 539
  SPV_OPERAND_TYPE_ID, // 540
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 541
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 542
  SPV_OPERAND_TYPE_ID, // 543
  SPV_OPERAND_TYPE_ID, // 544
  SPV_OPERAND_TYPE_ID, // 545
  SPV_OPERAND_TYPE_ID, // 546
  SPV_OPERAND_TYPE_ID, // 547
  SPV_OPERAND_TYPE_ID, // 548
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 549
  SPV_OPERAND_TYPE_TYPE_ID, // 550
  SPV_OPERAND_TYPE_RESULT_ID, // 551
  SPV_OPERAND_TYPE_ID, // 552
  SPV_OPERAND_TYPE_ID, // 553
  SPV_OPERAND_TYPE_ID, // 554
  SPV_OPERAND_TYPE_ID, // 555
  SPV_OPERAND_TYPE_ID, // 556
  SPV_OPERAND_TYPE_ID, // 557
  SPV_OPERAND_TYPE_ID, // 558
  SPV_OPERAND_TYPE_ID, // 559
  SPV_OPERAND_TYPE_ID, // 560
  SPV_OPERAND_TYPE_ID, // 561
  SPV_OPERAND_TYPE_ID, // 562
  SPV_OPERAND_TYPE_ID, // 563
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 564
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 565
  SPV_OPERAND_TYPE_ID, // 566
  SPV_OPERAND_TYPE_ID, // 567
  SPV_OPERAND_TYPE_ID, // 568
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 569
  SPV_OPERAND_TYPE_TYPE_ID, // 570
  SPV_OPERAND_TYPE_RESULT_ID, // 571
  SPV_OPERAND_TYPE_ID, // 572
  SPV_OPERAND_TYPE_ID, // 573
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 574
  SPV_OPERAND_TYPE_ID, // 575
  SPV_OPERAND_TYPE_ID, // 576
  SPV_OPERAND_TYPE_ID, // 577
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 578
  SPV_OPERAND_TYPE_RESULT_ID, // 579
  SPV_OPERAND_TYPE_ID, // 580
  SPV_OPERAND_TYPE_SCOPE_ID, // 581
  SPV_OPERAND_TYPE_ID, // 582
  SPV_OPERAND_TYPE_ID, // 583
  SPV_OPERAND_TYPE_TYPE_ID, // 584
  SPV_OPERAND_TYPE_RESULT_ID, // 585
  SPV_OPERAND_TYPE_ID, // 586
  SPV_OPERAND_TYPE_ID, // 587
  SPV_OPERAND_TYPE_ID, // 588
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 589
  SPV_OPERAND_TYPE_ID, // 590
  SPV_OPERAND_TYPE_ID, // 591
  SPV_OPERAND_TYPE_ID, // 592
  SPV_OPERAND_TYPE_ID, // 593
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 594
  SPV_OPERAND_TYPE_TYPE_ID, // 595
  SPV_OPERAND_TYPE_RESULT_ID, // 596
  SPV_OPERAND_TYPE_ID, // 597
  SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE, // 598
  SPV_OPERAND_TYPE_ID, // 599
  SPV_OPERAND_TYPE_TYPE_ID, // 600
  SPV_OPERAND_TYPE_RESULT_ID, // 601
  SPV_OPERAND_TYPE_ID, // 602
  SPV_OPERAND_TYPE_ID, // 603
  SPV_OPERAND_TYPE_ID, // 604
  SPV_OPERAND_TYPE_MEMORY_ACCESS, // 605
  SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS, // 606
  SPV_OPERAND_TYPE_ID, // 607
  SPV_OPERAND_TYPE_ID, // 608
  SPV_OPERAND_TYPE_ID, // 609
  SPV_OPERAND_TYPE_MEMORY_ACCESS, // 610
  SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS, // 611
  SPV_OPERAND_TYPE_RESULT_ID, // 612
  SPV_OPERAND_TYPE_ID, // 613
  SPV_OPERAND_TYPE_ID, // 614
  SPV_OPERAND_TYPE_VARIABLE_ID, // 615
  SPV_OPERAND_TYPE_TYPE_ID, // 616
  SPV_OPERAND_TYPE_RESULT_ID, // 617
  SPV_OPERAND_TYPE_ID, // 618
  SPV_OPERAND_TYPE_ID, // 619
  SPV_OPERAND_TYPE_ID, // 620
  SPV_OPERAND_TYPE_ID, // 621
  SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS, // 622
  SPV_OPERAND_TYPE_ID, // 623
  SPV_OPERAND_TYPE_ID, // 624
  SPV_OPERAND_TYPE_ID, // 625
  SPV_OPERAND_TYPE_ID, // 626
  SPV_OPERAND_TYPE_ID, // 627
  SPV_OPERAND_TYPE_TYPE_ID, // 628
  SPV_OPERAND_TYPE_RESULT_ID, // 629
  SPV_OPERAND_TYPE_ID, // 630
  SPV_OPERAND_TYPE_ID, // 631
  SPV_OPERAND_TYPE_LITERAL_STRING, // 632
  SPV_OPERAND_TYPE_LITERAL_STRING, // 633
  SPV_OPERAND_TYPE_TYPE_ID, // 634
  SPV_OPERAND_TYPE_RESULT_ID, // 635
  SPV_OPERAND_TYPE_ID, // 636
  SPV_OPERAND_TYPE_ID, // 637
  SPV_OPERAND_TYPE_ID, // 638
  SPV_OPERAND_TYPE_ID, // 639
  SPV_OPERAND_TYPE_ID, // 640
  SPV_OPERAND_TYPE_ID, // 641
  SPV_OPERAND_TYPE_ID, // 642
  SPV_OPERAND_TYPE_TYPE_ID, // 643
  SPV_OPERAND_TYPE_RESULT_ID, // 644
  SPV_OPERAND_TYPE_ID, // 645
  SPV_OPERAND_TYPE_ID, // 646
  SPV_OPERAND_TYPE_ID, // 647
  SPV_OPERAND_TYPE_ID, // 648
  SPV_OPERAND_TYPE_ID, // 649
  SPV_OPERAND_TYPE_ID, // 650
  SPV_OPERAND_TYPE_ID, // 651
  SPV_OPERAND_TYPE_ID, // 652
  SPV_OPERAND_TYPE_TYPE_ID, // 653
  SPV_OPERAND_TYPE_RESULT_ID, // 654
  SPV_OPERAND_TYPE_ID, // 655
  SPV_OPERAND_TYPE_ID, // 656
  SPV_OPERAND_TYPE_ID, // 657
  SPV_OPERAND_TYPE_ID, // 658
  SPV_OPERAND_TYPE_ID, // 659
  SPV_OPERAND_TYPE_ID, // 660
  SPV_OPERAND_TYPE_ID, // 661
  SPV_OPERAND_TYPE_ID, // 662
  SPV_OPERAND_TYPE_ID, // 663
  SPV_OPERAND_TYPE_ID, // 664
  SPV_OPERAND_TYPE_ID, // 665
  SPV_OPERAND_TYPE_TYPE_ID, // 666
  SPV_OPERAND_TYPE_RESULT_ID, // 667
  SPV_OPERAND_TYPE_ID, // 668
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 669
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 670
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 671
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 672
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 673
  SPV_OPERAND_TYPE_TYPE_ID, // 674
  SPV_OPERAND_TYPE_RESULT_ID, // 675
  SPV_OPERAND_TYPE_ID, // 676
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 677
  SPV_OPERAND_TYPE_ID, // 678
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 679
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 680
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 681
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 682
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 683
  SPV_OPERAND_TYPE_TYPE_ID, // 684
  SPV_OPERAND_TYPE_RESULT_ID, // 685
  SPV_OPERAND_TYPE_ID, // 686
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 687
  SPV_OPERAND_TYPE_ID, // 688
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 689
  SPV_OPERAND_TYPE_RESULT_ID, // 690
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 691
  SPV_OPERAND_TYPE_RESULT_ID, // 692
  SPV_OPERAND_TYPE_ID, // 693
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 694
  SPV_OPERAND_TYPE_VARIABLE_ID, // 695
  SPV_OPERAND_TYPE_TYPE_ID, // 696
  SPV_OPERAND_TYPE_RESULT_ID, // 697
  SPV_OPERAND_TYPE_ID, // 698
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 699
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 700
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 701
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 702
  SPV_OPERAND_TYPE_ID, // 703
  SPV_OPERAND_TYPE_ID, // 704
  SPV_OPERAND_TYPE_ID, // 705
  SPV_OPERAND_TYPE_ID, // 706
  SPV_OPERAND_TYPE_ID, // 707
  SPV_OPERAND_TYPE_ID, // 708
  SPV_OPERAND_TYPE_ID, // 709
  SPV_OPERAND_TYPE_ID, // 710
  SPV_OPERAND_TYPE_ID, // 711
  SPV_OPERAND_TYPE_ID, // 712
  SPV_OPERAND_TYPE_ID, // 713
  SPV_OPERAND_TYPE_ID, // 714
  SPV_OPERAND_TYPE_ID, // 715
  SPV_OPERAND_TYPE_ID, // 716
  SPV_OPERAND_TYPE_ID, // 717
  SPV_OPERAND_TYPE_ID, // 718
  SPV_OPERAND_TYPE_ID, // 719
  SPV_OPERAND_TYPE_ID, // 720
  SPV_OPERAND_TYPE_ID, // 721
  SPV_OPERAND_TYPE_TYPE_ID, // 722
  SPV_OPERAND_TYPE_RESULT_ID, // 723
  SPV_OPERAND_TYPE_ID, // 724
  SPV_OPERAND_TYPE_ID, // 725
  SPV_OPERAND_TYPE_ID, // 726
  SPV_OPERAND_TYPE_ID, // 727
  SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS, // 728
  SPV_OPERAND_TYPE_ID, // 729
  SPV_OPERAND_TYPE_EXECUTION_MODEL, // 730
  SPV_OPERAND_TYPE_ID, // 731
  SPV_OPERAND_TYPE_LITERAL_STRING, // 732
  SPV_OPERAND_TYPE_VARIABLE_ID, // 733
  SPV_OPERAND_TYPE_ID, // 734
  SPV_OPERAND_TYPE_CAPABILITY, // 735
  SPV_OPERAND_TYPE_TYPE_ID, // 736
  SPV_OPERAND_TYPE_RESULT_ID, // 737
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 738
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 739
  SPV_OPERAND_TYPE_TYPE_ID, // 740
  SPV_OPERAND_TYPE_RESULT_ID, // 741
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 742
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 743
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 744
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 745
  SPV_OPERAND_TYPE_TYPE_ID, // 746
  SPV_OPERAND_TYPE_RESULT_ID, // 747
  SPV_OPERAND_TYPE_VARIABLE_CAPABILITY, // 748
  SPV_OPERAND_TYPE_TYPE_ID, // 749
  SPV_OPERAND_TYPE_RESULT_ID, // 750
  SPV_OPERAND_TYPE_ID, // 751
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 752
  SPV_OPERAND_TYPE_ID, // 753
  SPV_OPERAND_TYPE_ID, // 754
  SPV_OPERAND_TYPE_ID, // 755
  SPV_OPERAND_TYPE_ID, // 756
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 757
  SPV_OPERAND_TYPE_ID, // 758
  SPV_OPERAND_TYPE_ID, // 759
  SPV_OPERAND_TYPE_ID, // 760
  SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING, // 761
  SPV_OPERAND_TYPE_ID, // 762
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 763
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 764
  SPV_OPERAND_TYPE_ID, // 765
  SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER, // 766
  SPV_OPERAND_TYPE_ID, // 767
  SPV_OPERAND_TYPE_ID, // 768
  SPV_OPERAND_TYPE_ID, // 769
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 770
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 771
  SPV_OPERAND_TYPE_ID, // 772
  SPV_OPERAND_TYPE_ID, // 773
  SPV_OPERAND_TYPE_ID, // 774
  SPV_OPERAND_TYPE_ID, // 775
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 776
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 777
  SPV_OPERAND_TYPE_ID, // 778
  SPV_OPERAND_TYPE_ID, // 779
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 780
  SPV_OPERAND_TYPE_VARIABLE_ID, // 781
  SPV_OPERAND_TYPE_ID, // 782
  SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE, // 783
  SPV_OPERAND_TYPE_ID, // 784
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 785
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 786
  SPV_OPERAND_TYPE_ID, // 787
  SPV_OPERAND_TYPE_ID, // 788
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 789
  SPV_OPERAND_TYPE_VARIABLE_ID, // 790
  SPV_OPERAND_TYPE_ID, // 791
  SPV_OPERAND_TYPE_ID, // 792
  SPV_OPERAND_TYPE_ID, // 793
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 794
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 795
  SPV_OPERAND_TYPE_ID, // 796
  SPV_OPERAND_TYPE_ID, // 797
  SPV_OPERAND_TYPE_ID, // 798
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 799
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 800
  SPV_OPERAND_TYPE_ID, // 801
  SPV_OPERAND_TYPE_ID, // 802
  SPV_OPERAND_TYPE_ID, // 803
  SPV_OPERAND_TYPE_ID, // 804
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 805
  SPV_OPERAND_TYPE_ID, // 806
  SPV_OPERAND_TYPE_ID, // 807
  SPV_OPERAND_TYPE_ID, // 808
  SPV_OPERAND_TYPE_ID, // 809
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 810
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 811
  SPV_OPERAND_TYPE_ID, // 812
  SPV_OPERAND_TYPE_ID, // 813
  SPV_OPERAND_TYPE_ID, // 814
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 815
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 816
  SPV_OPERAND_TYPE_ID, // 817
  SPV_OPERAND_TYPE_ID, // 818
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 819
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 820
  SPV_OPERAND_TYPE_VARIABLE_ID, // 821
  SPV_OPERAND_TYPE_ID, // 822
  SPV_OPERAND_TYPE_ID, // 823
  SPV_OPERAND_TYPE_ID, // 824
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 825
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 826
  SPV_OPERAND_TYPE_ID, // 827
  SPV_OPERAND_TYPE_ID, // 828
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 829
  SPV_OPERAND_TYPE_ID, // 830
  SPV_OPERAND_TYPE_ID, // 831
  SPV_OPERAND_TYPE_ID, // 832
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 833
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 834
  SPV_OPERAND_TYPE_ID, // 835
  SPV_OPERAND_TYPE_ID, // 836
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 837
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 838
  SPV_OPERAND_TYPE_ID, // 839
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 840
  SPV_OPERAND_TYPE_ID, // 841
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 842
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 843
  SPV_OPERAND_TYPE_ID, // 844
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 845
  SPV_OPERAND_TYPE_ID, // 846
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 847
  SPV_OPERAND_TYPE_ID, // 848
  SPV_OPERAND_TYPE_ID, // 849
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 850
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 851
  SPV_OPERAND_TYPE_ID, // 852
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 853
  SPV_OPERAND_TYPE_ID, // 854
  SPV_OPERAND_TYPE_ID, // 855
  SPV_OPERAND_TYPE_ID, // 856
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 857
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 858
  SPV_OPERAND_TYPE_ID, // 859
  SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER, // 860
  SPV_OPERAND_TYPE_DEBUG_OPERATION, // 861
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 862
  SPV_OPERAND_TYPE_ID, // 863
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 864
  SPV_OPERAND_TYPE_ID, // 865
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 866
  SPV_OPERAND_TYPE_ID, // 867
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 868
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 869
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 870
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 871
  SPV_OPERAND_TYPE_ID, // 872
  SPV_OPERAND_TYPE_ID, // 873
  SPV_OPERAND_TYPE_ID, // 874
  SPV_OPERAND_TYPE_ID, // 875
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 876
  SPV_OPERAND_TYPE_ID, // 877
  SPV_OPERAND_TYPE_ID, // 878
  SPV_OPERAND_TYPE_ID, // 879
  SPV_OPERAND_TYPE_ID, // 880
  SPV_OPERAND_TYPE_ID, // 881
  SPV_OPERAND_TYPE_ID, // 882
  SPV_OPERAND_TYPE_ID, // 883
  SPV_OPERAND_TYPE_ID, // 884
  SPV_OPERAND_TYPE_VARIABLE_ID, // 885
  SPV_OPERAND_TYPE_ID, // 886
  SPV_OPERAND_TYPE_ID, // 887
  SPV_OPERAND_TYPE_ID, // 888
  SPV_OPERAND_TYPE_ID, // 889
  SPV_OPERAND_TYPE_ID, // 890
  SPV_OPERAND_TYPE_ID, // 891
  SPV_OPERAND_TYPE_ID, // 892
  SPV_OPERAND_TYPE_ID, // 893
  SPV_OPERAND_TYPE_ID, // 894
  SPV_OPERAND_TYPE_VARIABLE_ID, // 895
  SPV_OPERAND_TYPE_ID, // 896
  SPV_OPERAND_TYPE_ID, // 897
  SPV_OPERAND_TYPE_ID, // 898
  SPV_OPERAND_TYPE_ID, // 899
  SPV_OPERAND_TYPE_ID, // 900
  SPV_OPERAND_TYPE_ID, // 901
  SPV_OPERAND_TYPE_ID, // 902
  SPV_OPERAND_TYPE_ID, // 903
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 904
  SPV_OPERAND_TYPE_ID, // 905
  SPV_OPERAND_TYPE_ID, // 906
  SPV_OPERAND_TYPE_ID, // 907
  SPV_OPERAND_TYPE_ID, // 908
  SPV_OPERAND_TYPE_VARIABLE_ID, // 909
  SPV_OPERAND_TYPE_ID, // 910
  SPV_OPERAND_TYPE_ID, // 911
  SPV_OPERAND_TYPE_ID, // 912
  SPV_OPERAND_TYPE_ID, // 913
  SPV_OPERAND_TYPE_ID, // 914
  SPV_OPERAND_TYPE_ID, // 915
  SPV_OPERAND_TYPE_ID, // 916
  SPV_OPERAND_TYPE_ID, // 917
  SPV_OPERAND_TYPE_ID, // 918
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 919
  SPV_OPERAND_TYPE_ID, // 920
  SPV_OPERAND_TYPE_ID, // 921
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 922
  SPV_OPERAND_TYPE_ID, // 923
  SPV_OPERAND_TYPE_ID, // 924
  SPV_OPERAND_TYPE_ID, // 925
  SPV_OPERAND_TYPE_ID, // 926
  SPV_OPERAND_TYPE_ID, // 927
  SPV_OPERAND_TYPE_ID, // 928
  SPV_OPERAND_TYPE_ID, // 929
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 930
  SPV_OPERAND_TYPE_ID, // 931
  SPV_OPERAND_TYPE_ID, // 932
  SPV_OPERAND_TYPE_ID, // 933
  SPV_OPERAND_TYPE_VARIABLE_ID, // 934
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
  SPV_OPERAND_TYPE_ID, // 960
  SPV_OPERAND_TYPE_ID, // 961
  SPV_OPERAND_TYPE_ID, // 962
  SPV_OPERAND_TYPE_ID, // 963
  SPV_OPERAND_TYPE_ID, // 964
  SPV_OPERAND_TYPE_ID, // 965
  SPV_OPERAND_TYPE_ID, // 966
  SPV_OPERAND_TYPE_ID, // 967
  SPV_OPERAND_TYPE_ID, // 968
  SPV_OPERAND_TYPE_ID, // 969
  SPV_OPERAND_TYPE_ID, // 970
  SPV_OPERAND_TYPE_ID, // 971
  SPV_OPERAND_TYPE_ID, // 972
  SPV_OPERAND_TYPE_ID, // 973
  SPV_OPERAND_TYPE_ID, // 974
  SPV_OPERAND_TYPE_ID, // 975
  SPV_OPERAND_TYPE_ID, // 976
  SPV_OPERAND_TYPE_ID, // 977
  SPV_OPERAND_TYPE_ID, // 978
  SPV_OPERAND_TYPE_ID, // 979
  SPV_OPERAND_TYPE_ID, // 980
  SPV_OPERAND_TYPE_ID, // 981
  SPV_OPERAND_TYPE_ID, // 982
  SPV_OPERAND_TYPE_ID, // 983
  SPV_OPERAND_TYPE_ID, // 984
  SPV_OPERAND_TYPE_ID, // 985
  SPV_OPERAND_TYPE_ID, // 986
  SPV_OPERAND_TYPE_ID, // 987
  SPV_OPERAND_TYPE_ID, // 988
  SPV_OPERAND_TYPE_ID, // 989
  SPV_OPERAND_TYPE_ID, // 990
  SPV_OPERAND_TYPE_ID, // 991
  SPV_OPERAND_TYPE_ID, // 992
  SPV_OPERAND_TYPE_ID, // 993
  SPV_OPERAND_TYPE_ID, // 994
  SPV_OPERAND_TYPE_ID, // 995
  SPV_OPERAND_TYPE_ID, // 996
  SPV_OPERAND_TYPE_ID, // 997
  SPV_OPERAND_TYPE_ID, // 998
  SPV_OPERAND_TYPE_ID, // 999
  SPV_OPERAND_TYPE_ID, // 1000
  SPV_OPERAND_TYPE_ID, // 1001
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1002
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1003
  SPV_OPERAND_TYPE_ID, // 1004
  SPV_OPERAND_TYPE_SOURCE_LANGUAGE, // 1005
  SPV_OPERAND_TYPE_ID, // 1006
  SPV_OPERAND_TYPE_ID, // 1007
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING, // 1008
  SPV_OPERAND_TYPE_ID, // 1009
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 1010
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1011
  SPV_OPERAND_TYPE_ID, // 1012
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER, // 1013
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1014
  SPV_OPERAND_TYPE_ID, // 1015
  SPV_OPERAND_TYPE_VARIABLE_ID, // 1016
  SPV_OPERAND_TYPE_ID, // 1017
  SPV_OPERAND_TYPE_ID, // 1018
  SPV_OPERAND_TYPE_ID, // 1019
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1020
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1021
  SPV_OPERAND_TYPE_ID, // 1022
  SPV_OPERAND_TYPE_ID, // 1023
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1024
  SPV_OPERAND_TYPE_VARIABLE_ID, // 1025
  SPV_OPERAND_TYPE_ID, // 1026
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE, // 1027
  SPV_OPERAND_TYPE_ID, // 1028
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1029
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1030
  SPV_OPERAND_TYPE_ID, // 1031
  SPV_OPERAND_TYPE_ID, // 1032
  SPV_OPERAND_TYPE_ID, // 1033
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1034
  SPV_OPERAND_TYPE_VARIABLE_ID, // 1035
  SPV_OPERAND_TYPE_ID, // 1036
  SPV_OPERAND_TYPE_ID, // 1037
  SPV_OPERAND_TYPE_ID, // 1038
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1039
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1040
  SPV_OPERAND_TYPE_ID, // 1041
  SPV_OPERAND_TYPE_ID, // 1042
  SPV_OPERAND_TYPE_ID, // 1043
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1044
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 1045
  SPV_OPERAND_TYPE_ID, // 1046
  SPV_OPERAND_TYPE_ID, // 1047
  SPV_OPERAND_TYPE_ID, // 1048
  SPV_OPERAND_TYPE_ID, // 1049
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1050
  SPV_OPERAND_TYPE_ID, // 1051
  SPV_OPERAND_TYPE_ID, // 1052
  SPV_OPERAND_TYPE_ID, // 1053
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1054
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1055
  SPV_OPERAND_TYPE_ID, // 1056
  SPV_OPERAND_TYPE_ID, // 1057
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1058
  SPV_OPERAND_TYPE_ID, // 1059
  SPV_OPERAND_TYPE_ID, // 1060
  SPV_OPERAND_TYPE_ID, // 1061
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1062
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1063
  SPV_OPERAND_TYPE_ID, // 1064
  SPV_OPERAND_TYPE_ID, // 1065
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1066
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1067
  SPV_OPERAND_TYPE_ID, // 1068
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 1069
  SPV_OPERAND_TYPE_ID, // 1070
  SPV_OPERAND_TYPE_ID, // 1071
  SPV_OPERAND_TYPE_ID, // 1072
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1073
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1074
  SPV_OPERAND_TYPE_ID, // 1075
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1076
  SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER, // 1077
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION, // 1078
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 1079
  SPV_OPERAND_TYPE_ID, // 1080
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY, // 1081
  SPV_OPERAND_TYPE_ID, // 1082
  SPV_OPERAND_TYPE_ID, // 1083
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1084
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1085
  SPV_OPERAND_TYPE_ID, // 1086
  SPV_OPERAND_TYPE_ID, // 1087
  SPV_OPERAND_TYPE_ID, // 1088
  SPV_OPERAND_TYPE_ID, // 1089
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1090
  SPV_OPERAND_TYPE_ID, // 1091
  SPV_OPERAND_TYPE_ID, // 1092
  SPV_OPERAND_TYPE_ID, // 1093
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1094
  SPV_OPERAND_TYPE_ID, // 1095
  SPV_OPERAND_TYPE_ID, // 1096
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1097
  SPV_OPERAND_TYPE_ID, // 1098
  SPV_OPERAND_TYPE_ID, // 1099
  SPV_OPERAND_TYPE_ID, // 1100
  SPV_OPERAND_TYPE_FP_ROUNDING_MODE, // 1101
};
