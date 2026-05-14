// Returns the name of an extension, as an index into kStrings
IndexRange ExtensionToIndexRange(Extension extension) {
  switch(extension) {
    case Extension::kSPV_ALTERA_arbitrary_precision_fixed_point: return IR(0, 43);
    case Extension::kSPV_ALTERA_arbitrary_precision_floating_point: return IR(43, 46);
    case Extension::kSPV_ALTERA_arbitrary_precision_integers: return IR(89, 40);
    case Extension::kSPV_ALTERA_blocking_pipes: return IR(129, 26);
    case Extension::kSPV_ALTERA_fpga_argument_interfaces: return IR(155, 36);
    case Extension::kSPV_ALTERA_fpga_buffer_location: return IR(191, 32);
    case Extension::kSPV_ALTERA_fpga_cluster_attributes: return IR(223, 35);
    case Extension::kSPV_ALTERA_fpga_dsp_control: return IR(258, 28);
    case Extension::kSPV_ALTERA_fpga_invocation_pipelining_attributes: return IR(286, 49);
    case Extension::kSPV_ALTERA_fpga_latency_control: return IR(335, 32);
    case Extension::kSPV_ALTERA_fpga_loop_controls: return IR(367, 30);
    case Extension::kSPV_ALTERA_fpga_memory_accesses: return IR(397, 32);
    case Extension::kSPV_ALTERA_fpga_memory_attributes: return IR(429, 34);
    case Extension::kSPV_ALTERA_fpga_reg: return IR(463, 20);
    case Extension::kSPV_ALTERA_global_variable_fpga_decorations: return IR(483, 44);
    case Extension::kSPV_ALTERA_io_pipes: return IR(527, 20);
    case Extension::kSPV_ALTERA_loop_fuse: return IR(547, 21);
    case Extension::kSPV_ALTERA_runtime_aligned: return IR(568, 27);
    case Extension::kSPV_ALTERA_task_sequence: return IR(595, 25);
    case Extension::kSPV_ALTERA_usm_storage_classes: return IR(620, 31);
    case Extension::kSPV_AMDX_shader_enqueue: return IR(651, 24);
    case Extension::kSPV_AMD_gcn_shader: return IR(675, 19);
    case Extension::kSPV_AMD_gpu_shader_half_float: return IR(694, 30);
    case Extension::kSPV_AMD_gpu_shader_half_float_fetch: return IR(724, 36);
    case Extension::kSPV_AMD_gpu_shader_int16: return IR(760, 25);
    case Extension::kSPV_AMD_shader_ballot: return IR(785, 22);
    case Extension::kSPV_AMD_shader_early_and_late_fragment_tests: return IR(807, 45);
    case Extension::kSPV_AMD_shader_explicit_vertex_parameter: return IR(852, 41);
    case Extension::kSPV_AMD_shader_fragment_mask: return IR(893, 29);
    case Extension::kSPV_AMD_shader_image_load_store_lod: return IR(922, 36);
    case Extension::kSPV_AMD_shader_trinary_minmax: return IR(958, 30);
    case Extension::kSPV_AMD_texture_gather_bias_lod: return IR(988, 32);
    case Extension::kSPV_AMD_weak_linkage: return IR(1020, 21);
    case Extension::kSPV_ARM_cooperative_matrix_layouts: return IR(1041, 35);
    case Extension::kSPV_ARM_core_builtins: return IR(1076, 22);
    case Extension::kSPV_ARM_graph: return IR(1098, 14);
    case Extension::kSPV_ARM_tensors: return IR(1112, 16);
    case Extension::kSPV_EXT_arithmetic_fence: return IR(1128, 25);
    case Extension::kSPV_EXT_demote_to_helper_invocation: return IR(1153, 36);
    case Extension::kSPV_EXT_descriptor_heap: return IR(1189, 24);
    case Extension::kSPV_EXT_descriptor_indexing: return IR(1213, 28);
    case Extension::kSPV_EXT_float8: return IR(1241, 15);
    case Extension::kSPV_EXT_fragment_fully_covered: return IR(1256, 31);
    case Extension::kSPV_EXT_fragment_invocation_density: return IR(1287, 36);
    case Extension::kSPV_EXT_fragment_shader_interlock: return IR(1323, 34);
    case Extension::kSPV_EXT_long_vector: return IR(1357, 20);
    case Extension::kSPV_EXT_mesh_shader: return IR(1377, 20);
    case Extension::kSPV_EXT_opacity_micromap: return IR(1397, 25);
    case Extension::kSPV_EXT_optnone: return IR(1422, 16);
    case Extension::kSPV_EXT_physical_storage_buffer: return IR(1438, 32);
    case Extension::kSPV_EXT_relaxed_printf_string_address_space: return IR(1470, 44);
    case Extension::kSPV_EXT_replicated_composites: return IR(1514, 30);
    case Extension::kSPV_EXT_shader_64bit_indexing: return IR(1544, 30);
    case Extension::kSPV_EXT_shader_atomic_float16_add: return IR(1574, 34);
    case Extension::kSPV_EXT_shader_atomic_float_add: return IR(1608, 32);
    case Extension::kSPV_EXT_shader_atomic_float_min_max: return IR(1640, 36);
    case Extension::kSPV_EXT_shader_image_int64: return IR(1676, 27);
    case Extension::kSPV_EXT_shader_invocation_reorder: return IR(1703, 34);
    case Extension::kSPV_EXT_shader_stencil_export: return IR(1737, 30);
    case Extension::kSPV_EXT_shader_subgroup_partitioned: return IR(1767, 36);
    case Extension::kSPV_EXT_shader_tile_image: return IR(1803, 26);
    case Extension::kSPV_EXT_shader_viewport_index_layer: return IR(1829, 36);
    case Extension::kSPV_GOOGLE_decorate_string: return IR(1865, 27);
    case Extension::kSPV_GOOGLE_hlsl_functionality1: return IR(1892, 31);
    case Extension::kSPV_GOOGLE_user_type: return IR(1923, 21);
    case Extension::kSPV_INTEL_2d_block_io: return IR(1944, 22);
    case Extension::kSPV_INTEL_arbitrary_precision_fixed_point: return IR(1966, 42);
    case Extension::kSPV_INTEL_arbitrary_precision_floating_point: return IR(2008, 45);
    case Extension::kSPV_INTEL_arbitrary_precision_integers: return IR(2053, 39);
    case Extension::kSPV_INTEL_bfloat16_conversion: return IR(2092, 30);
    case Extension::kSPV_INTEL_bindless_images: return IR(2122, 26);
    case Extension::kSPV_INTEL_blocking_pipes: return IR(2148, 25);
    case Extension::kSPV_INTEL_cache_controls: return IR(2173, 25);
    case Extension::kSPV_INTEL_debug_module: return IR(2198, 23);
    case Extension::kSPV_INTEL_device_side_avc_motion_estimation: return IR(2221, 44);
    case Extension::kSPV_INTEL_float_controls2: return IR(2265, 26);
    case Extension::kSPV_INTEL_fp_fast_math_mode: return IR(2291, 28);
    case Extension::kSPV_INTEL_fp_max_error: return IR(2319, 23);
    case Extension::kSPV_INTEL_fpga_argument_interfaces: return IR(2342, 35);
    case Extension::kSPV_INTEL_fpga_buffer_location: return IR(2377, 31);
    case Extension::kSPV_INTEL_fpga_cluster_attributes: return IR(2408, 34);
    case Extension::kSPV_INTEL_fpga_dsp_control: return IR(2442, 27);
    case Extension::kSPV_INTEL_fpga_invocation_pipelining_attributes: return IR(2469, 48);
    case Extension::kSPV_INTEL_fpga_latency_control: return IR(2517, 31);
    case Extension::kSPV_INTEL_fpga_loop_controls: return IR(2548, 29);
    case Extension::kSPV_INTEL_fpga_memory_accesses: return IR(2577, 31);
    case Extension::kSPV_INTEL_fpga_memory_attributes: return IR(2608, 33);
    case Extension::kSPV_INTEL_fpga_reg: return IR(2641, 19);
    case Extension::kSPV_INTEL_function_pointers: return IR(2660, 28);
    case Extension::kSPV_INTEL_function_variants: return IR(2688, 28);
    case Extension::kSPV_INTEL_global_variable_fpga_decorations: return IR(2716, 43);
    case Extension::kSPV_INTEL_global_variable_host_access: return IR(2759, 38);
    case Extension::kSPV_INTEL_inline_assembly: return IR(2797, 26);
    case Extension::kSPV_INTEL_int4: return IR(2823, 15);
    case Extension::kSPV_INTEL_io_pipes: return IR(2838, 19);
    case Extension::kSPV_INTEL_kernel_attributes: return IR(2857, 28);
    case Extension::kSPV_INTEL_long_composites: return IR(2885, 26);
    case Extension::kSPV_INTEL_loop_fuse: return IR(2911, 20);
    case Extension::kSPV_INTEL_masked_gather_scatter: return IR(2931, 32);
    case Extension::kSPV_INTEL_maximum_registers: return IR(2963, 28);
    case Extension::kSPV_INTEL_media_block_io: return IR(2991, 25);
    case Extension::kSPV_INTEL_memory_access_aliasing: return IR(3016, 33);
    case Extension::kSPV_INTEL_optnone: return IR(3049, 18);
    case Extension::kSPV_INTEL_predicated_io: return IR(3067, 24);
    case Extension::kSPV_INTEL_rounded_divide_sqrt: return IR(3091, 30);
    case Extension::kSPV_INTEL_runtime_aligned: return IR(3121, 26);
    case Extension::kSPV_INTEL_shader_integer_functions2: return IR(3147, 36);
    case Extension::kSPV_INTEL_split_barrier: return IR(3183, 24);
    case Extension::kSPV_INTEL_subgroup_buffer_prefetch: return IR(3207, 35);
    case Extension::kSPV_INTEL_subgroup_matrix_multiply_accumulate: return IR(3242, 46);
    case Extension::kSPV_INTEL_subgroups: return IR(3288, 20);
    case Extension::kSPV_INTEL_task_sequence: return IR(3308, 24);
    case Extension::kSPV_INTEL_tensor_float32_conversion: return IR(3332, 36);
    case Extension::kSPV_INTEL_ternary_bitwise_function: return IR(3368, 35);
    case Extension::kSPV_INTEL_unstructured_loop_controls: return IR(3403, 37);
    case Extension::kSPV_INTEL_usm_storage_classes: return IR(3440, 30);
    case Extension::kSPV_INTEL_variable_length_array: return IR(3470, 32);
    case Extension::kSPV_INTEL_vector_compute: return IR(3502, 25);
    case Extension::kSPV_KHR_16bit_storage: return IR(3527, 22);
    case Extension::kSPV_KHR_8bit_storage: return IR(3549, 21);
    case Extension::kSPV_KHR_abort: return IR(3570, 14);
    case Extension::kSPV_KHR_bfloat16: return IR(3584, 17);
    case Extension::kSPV_KHR_bit_instructions: return IR(3601, 25);
    case Extension::kSPV_KHR_compute_shader_derivatives: return IR(3626, 35);
    case Extension::kSPV_KHR_constant_data: return IR(3661, 22);
    case Extension::kSPV_KHR_cooperative_matrix: return IR(3683, 27);
    case Extension::kSPV_KHR_device_group: return IR(3710, 21);
    case Extension::kSPV_KHR_expect_assume: return IR(3731, 22);
    case Extension::kSPV_KHR_float_controls: return IR(3753, 23);
    case Extension::kSPV_KHR_float_controls2: return IR(3776, 24);
    case Extension::kSPV_KHR_fma: return IR(3800, 12);
    case Extension::kSPV_KHR_fragment_shader_barycentric: return IR(3812, 36);
    case Extension::kSPV_KHR_fragment_shading_rate: return IR(3848, 30);
    case Extension::kSPV_KHR_integer_dot_product: return IR(3878, 28);
    case Extension::kSPV_KHR_linkonce_odr: return IR(3906, 21);
    case Extension::kSPV_KHR_maximal_reconvergence: return IR(3927, 30);
    case Extension::kSPV_KHR_multiview: return IR(3957, 18);
    case Extension::kSPV_KHR_no_integer_wrap_decoration: return IR(3975, 35);
    case Extension::kSPV_KHR_non_semantic_info: return IR(4010, 26);
    case Extension::kSPV_KHR_opacity_micromap: return IR(4036, 25);
    case Extension::kSPV_KHR_physical_storage_buffer: return IR(4061, 32);
    case Extension::kSPV_KHR_poison_freeze: return IR(4093, 22);
    case Extension::kSPV_KHR_post_depth_coverage: return IR(4115, 28);
    case Extension::kSPV_KHR_quad_control: return IR(4143, 21);
    case Extension::kSPV_KHR_ray_cull_mask: return IR(4164, 22);
    case Extension::kSPV_KHR_ray_query: return IR(4186, 18);
    case Extension::kSPV_KHR_ray_tracing: return IR(4204, 20);
    case Extension::kSPV_KHR_ray_tracing_position_fetch: return IR(4224, 35);
    case Extension::kSPV_KHR_relaxed_extended_instruction: return IR(4259, 37);
    case Extension::kSPV_KHR_shader_atomic_counter_ops: return IR(4296, 34);
    case Extension::kSPV_KHR_shader_ballot: return IR(4330, 22);
    case Extension::kSPV_KHR_shader_clock: return IR(4352, 21);
    case Extension::kSPV_KHR_shader_draw_parameters: return IR(4373, 31);
    case Extension::kSPV_KHR_storage_buffer_storage_class: return IR(4404, 37);
    case Extension::kSPV_KHR_subgroup_rotate: return IR(4441, 24);
    case Extension::kSPV_KHR_subgroup_uniform_control_flow: return IR(4465, 38);
    case Extension::kSPV_KHR_subgroup_vote: return IR(4503, 22);
    case Extension::kSPV_KHR_terminate_invocation: return IR(4525, 29);
    case Extension::kSPV_KHR_uniform_group_instructions: return IR(4554, 35);
    case Extension::kSPV_KHR_untyped_pointers: return IR(4589, 25);
    case Extension::kSPV_KHR_variable_pointers: return IR(4614, 26);
    case Extension::kSPV_KHR_vulkan_memory_model: return IR(4640, 28);
    case Extension::kSPV_KHR_workgroup_memory_explicit_layout: return IR(4668, 41);
    case Extension::kSPV_NVX_multiview_per_view_attributes: return IR(4709, 38);
    case Extension::kSPV_NV_bindless_texture: return IR(4747, 24);
    case Extension::kSPV_NV_cluster_acceleration_structure: return IR(4771, 38);
    case Extension::kSPV_NV_compute_shader_derivatives: return IR(4809, 34);
    case Extension::kSPV_NV_cooperative_matrix: return IR(4843, 26);
    case Extension::kSPV_NV_cooperative_matrix2: return IR(4869, 27);
    case Extension::kSPV_NV_cooperative_vector: return IR(4896, 26);
    case Extension::kSPV_NV_displacement_micromap: return IR(4922, 29);
    case Extension::kSPV_NV_fragment_shader_barycentric: return IR(4951, 35);
    case Extension::kSPV_NV_geometry_shader_passthrough: return IR(4986, 35);
    case Extension::kSPV_NV_linear_swept_spheres: return IR(5021, 28);
    case Extension::kSPV_NV_mesh_shader: return IR(5049, 19);
    case Extension::kSPV_NV_push_constant_bank: return IR(5068, 26);
    case Extension::kSPV_NV_raw_access_chains: return IR(5094, 25);
    case Extension::kSPV_NV_ray_tracing: return IR(5119, 19);
    case Extension::kSPV_NV_ray_tracing_motion_blur: return IR(5138, 31);
    case Extension::kSPV_NV_sample_mask_override_coverage: return IR(5169, 37);
    case Extension::kSPV_NV_shader_atomic_fp16_vector: return IR(5206, 33);
    case Extension::kSPV_NV_shader_image_footprint: return IR(5239, 30);
    case Extension::kSPV_NV_shader_invocation_reorder: return IR(5269, 33);
    case Extension::kSPV_NV_shader_sm_builtins: return IR(5302, 26);
    case Extension::kSPV_NV_shader_subgroup_partitioned: return IR(5328, 35);
    case Extension::kSPV_NV_shading_rate: return IR(5363, 20);
    case Extension::kSPV_NV_stereo_view_rendering: return IR(5383, 29);
    case Extension::kSPV_NV_tensor_addressing: return IR(5412, 25);
    case Extension::kSPV_NV_viewport_array2: return IR(5437, 23);
    case Extension::kSPV_QCOM_cooperative_matrix_conversion: return IR(5460, 39);
    case Extension::kSPV_QCOM_image_processing: return IR(5499, 26);
    case Extension::kSPV_QCOM_image_processing2: return IR(5525, 27);
    case Extension::kSPV_QCOM_tile_shading: return IR(5552, 22);
    case Extension::kSPV_VALIDATOR_ignore_type_decl_unique: return IR(5574, 38);
    case Extension::kSPV_VALVE_mixed_float_dot_product: return IR(5612, 34);
    default: break;
  }
  return {};
}

// Extension names and values, ordered by name
// The fields in order are:
//   name, indexing into kStrings
//   enum value
static const std::array<NameValue,195> kExtensionNames{{
    {IR(0, 43), static_cast<uint32_t>(kSPV_ALTERA_arbitrary_precision_fixed_point)},
    {IR(43, 46), static_cast<uint32_t>(kSPV_ALTERA_arbitrary_precision_floating_point)},
    {IR(89, 40), static_cast<uint32_t>(kSPV_ALTERA_arbitrary_precision_integers)},
    {IR(129, 26), static_cast<uint32_t>(kSPV_ALTERA_blocking_pipes)},
    {IR(155, 36), static_cast<uint32_t>(kSPV_ALTERA_fpga_argument_interfaces)},
    {IR(191, 32), static_cast<uint32_t>(kSPV_ALTERA_fpga_buffer_location)},
    {IR(223, 35), static_cast<uint32_t>(kSPV_ALTERA_fpga_cluster_attributes)},
    {IR(258, 28), static_cast<uint32_t>(kSPV_ALTERA_fpga_dsp_control)},
    {IR(286, 49), static_cast<uint32_t>(kSPV_ALTERA_fpga_invocation_pipelining_attributes)},
    {IR(335, 32), static_cast<uint32_t>(kSPV_ALTERA_fpga_latency_control)},
    {IR(367, 30), static_cast<uint32_t>(kSPV_ALTERA_fpga_loop_controls)},
    {IR(397, 32), static_cast<uint32_t>(kSPV_ALTERA_fpga_memory_accesses)},
    {IR(429, 34), static_cast<uint32_t>(kSPV_ALTERA_fpga_memory_attributes)},
    {IR(463, 20), static_cast<uint32_t>(kSPV_ALTERA_fpga_reg)},
    {IR(483, 44), static_cast<uint32_t>(kSPV_ALTERA_global_variable_fpga_decorations)},
    {IR(527, 20), static_cast<uint32_t>(kSPV_ALTERA_io_pipes)},
    {IR(547, 21), static_cast<uint32_t>(kSPV_ALTERA_loop_fuse)},
    {IR(568, 27), static_cast<uint32_t>(kSPV_ALTERA_runtime_aligned)},
    {IR(595, 25), static_cast<uint32_t>(kSPV_ALTERA_task_sequence)},
    {IR(620, 31), static_cast<uint32_t>(kSPV_ALTERA_usm_storage_classes)},
    {IR(651, 24), static_cast<uint32_t>(kSPV_AMDX_shader_enqueue)},
    {IR(675, 19), static_cast<uint32_t>(kSPV_AMD_gcn_shader)},
    {IR(694, 30), static_cast<uint32_t>(kSPV_AMD_gpu_shader_half_float)},
    {IR(724, 36), static_cast<uint32_t>(kSPV_AMD_gpu_shader_half_float_fetch)},
    {IR(760, 25), static_cast<uint32_t>(kSPV_AMD_gpu_shader_int16)},
    {IR(785, 22), static_cast<uint32_t>(kSPV_AMD_shader_ballot)},
    {IR(807, 45), static_cast<uint32_t>(kSPV_AMD_shader_early_and_late_fragment_tests)},
    {IR(852, 41), static_cast<uint32_t>(kSPV_AMD_shader_explicit_vertex_parameter)},
    {IR(893, 29), static_cast<uint32_t>(kSPV_AMD_shader_fragment_mask)},
    {IR(922, 36), static_cast<uint32_t>(kSPV_AMD_shader_image_load_store_lod)},
    {IR(958, 30), static_cast<uint32_t>(kSPV_AMD_shader_trinary_minmax)},
    {IR(988, 32), static_cast<uint32_t>(kSPV_AMD_texture_gather_bias_lod)},
    {IR(1020, 21), static_cast<uint32_t>(kSPV_AMD_weak_linkage)},
    {IR(1041, 35), static_cast<uint32_t>(kSPV_ARM_cooperative_matrix_layouts)},
    {IR(1076, 22), static_cast<uint32_t>(kSPV_ARM_core_builtins)},
    {IR(1098, 14), static_cast<uint32_t>(kSPV_ARM_graph)},
    {IR(1112, 16), static_cast<uint32_t>(kSPV_ARM_tensors)},
    {IR(1128, 25), static_cast<uint32_t>(kSPV_EXT_arithmetic_fence)},
    {IR(1153, 36), static_cast<uint32_t>(kSPV_EXT_demote_to_helper_invocation)},
    {IR(1189, 24), static_cast<uint32_t>(kSPV_EXT_descriptor_heap)},
    {IR(1213, 28), static_cast<uint32_t>(kSPV_EXT_descriptor_indexing)},
    {IR(1241, 15), static_cast<uint32_t>(kSPV_EXT_float8)},
    {IR(1256, 31), static_cast<uint32_t>(kSPV_EXT_fragment_fully_covered)},
    {IR(1287, 36), static_cast<uint32_t>(kSPV_EXT_fragment_invocation_density)},
    {IR(1323, 34), static_cast<uint32_t>(kSPV_EXT_fragment_shader_interlock)},
    {IR(1357, 20), static_cast<uint32_t>(kSPV_EXT_long_vector)},
    {IR(1377, 20), static_cast<uint32_t>(kSPV_EXT_mesh_shader)},
    {IR(1397, 25), static_cast<uint32_t>(kSPV_EXT_opacity_micromap)},
    {IR(1422, 16), static_cast<uint32_t>(kSPV_EXT_optnone)},
    {IR(1438, 32), static_cast<uint32_t>(kSPV_EXT_physical_storage_buffer)},
    {IR(1470, 44), static_cast<uint32_t>(kSPV_EXT_relaxed_printf_string_address_space)},
    {IR(1514, 30), static_cast<uint32_t>(kSPV_EXT_replicated_composites)},
    {IR(1544, 30), static_cast<uint32_t>(kSPV_EXT_shader_64bit_indexing)},
    {IR(1574, 34), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float16_add)},
    {IR(1608, 32), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float_add)},
    {IR(1640, 36), static_cast<uint32_t>(kSPV_EXT_shader_atomic_float_min_max)},
    {IR(1676, 27), static_cast<uint32_t>(kSPV_EXT_shader_image_int64)},
    {IR(1703, 34), static_cast<uint32_t>(kSPV_EXT_shader_invocation_reorder)},
    {IR(1737, 30), static_cast<uint32_t>(kSPV_EXT_shader_stencil_export)},
    {IR(1767, 36), static_cast<uint32_t>(kSPV_EXT_shader_subgroup_partitioned)},
    {IR(1803, 26), static_cast<uint32_t>(kSPV_EXT_shader_tile_image)},
    {IR(1829, 36), static_cast<uint32_t>(kSPV_EXT_shader_viewport_index_layer)},
    {IR(1865, 27), static_cast<uint32_t>(kSPV_GOOGLE_decorate_string)},
    {IR(1892, 31), static_cast<uint32_t>(kSPV_GOOGLE_hlsl_functionality1)},
    {IR(1923, 21), static_cast<uint32_t>(kSPV_GOOGLE_user_type)},
    {IR(1944, 22), static_cast<uint32_t>(kSPV_INTEL_2d_block_io)},
    {IR(1966, 42), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_fixed_point)},
    {IR(2008, 45), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_floating_point)},
    {IR(2053, 39), static_cast<uint32_t>(kSPV_INTEL_arbitrary_precision_integers)},
    {IR(2092, 30), static_cast<uint32_t>(kSPV_INTEL_bfloat16_conversion)},
    {IR(2122, 26), static_cast<uint32_t>(kSPV_INTEL_bindless_images)},
    {IR(2148, 25), static_cast<uint32_t>(kSPV_INTEL_blocking_pipes)},
    {IR(2173, 25), static_cast<uint32_t>(kSPV_INTEL_cache_controls)},
    {IR(2198, 23), static_cast<uint32_t>(kSPV_INTEL_debug_module)},
    {IR(2221, 44), static_cast<uint32_t>(kSPV_INTEL_device_side_avc_motion_estimation)},
    {IR(2265, 26), static_cast<uint32_t>(kSPV_INTEL_float_controls2)},
    {IR(2291, 28), static_cast<uint32_t>(kSPV_INTEL_fp_fast_math_mode)},
    {IR(2319, 23), static_cast<uint32_t>(kSPV_INTEL_fp_max_error)},
    {IR(2342, 35), static_cast<uint32_t>(kSPV_INTEL_fpga_argument_interfaces)},
    {IR(2377, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_buffer_location)},
    {IR(2408, 34), static_cast<uint32_t>(kSPV_INTEL_fpga_cluster_attributes)},
    {IR(2442, 27), static_cast<uint32_t>(kSPV_INTEL_fpga_dsp_control)},
    {IR(2469, 48), static_cast<uint32_t>(kSPV_INTEL_fpga_invocation_pipelining_attributes)},
    {IR(2517, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_latency_control)},
    {IR(2548, 29), static_cast<uint32_t>(kSPV_INTEL_fpga_loop_controls)},
    {IR(2577, 31), static_cast<uint32_t>(kSPV_INTEL_fpga_memory_accesses)},
    {IR(2608, 33), static_cast<uint32_t>(kSPV_INTEL_fpga_memory_attributes)},
    {IR(2641, 19), static_cast<uint32_t>(kSPV_INTEL_fpga_reg)},
    {IR(2660, 28), static_cast<uint32_t>(kSPV_INTEL_function_pointers)},
    {IR(2688, 28), static_cast<uint32_t>(kSPV_INTEL_function_variants)},
    {IR(2716, 43), static_cast<uint32_t>(kSPV_INTEL_global_variable_fpga_decorations)},
    {IR(2759, 38), static_cast<uint32_t>(kSPV_INTEL_global_variable_host_access)},
    {IR(2797, 26), static_cast<uint32_t>(kSPV_INTEL_inline_assembly)},
    {IR(2823, 15), static_cast<uint32_t>(kSPV_INTEL_int4)},
    {IR(2838, 19), static_cast<uint32_t>(kSPV_INTEL_io_pipes)},
    {IR(2857, 28), static_cast<uint32_t>(kSPV_INTEL_kernel_attributes)},
    {IR(2885, 26), static_cast<uint32_t>(kSPV_INTEL_long_composites)},
    {IR(2911, 20), static_cast<uint32_t>(kSPV_INTEL_loop_fuse)},
    {IR(2931, 32), static_cast<uint32_t>(kSPV_INTEL_masked_gather_scatter)},
    {IR(2963, 28), static_cast<uint32_t>(kSPV_INTEL_maximum_registers)},
    {IR(2991, 25), static_cast<uint32_t>(kSPV_INTEL_media_block_io)},
    {IR(3016, 33), static_cast<uint32_t>(kSPV_INTEL_memory_access_aliasing)},
    {IR(3049, 18), static_cast<uint32_t>(kSPV_INTEL_optnone)},
    {IR(3067, 24), static_cast<uint32_t>(kSPV_INTEL_predicated_io)},
    {IR(3091, 30), static_cast<uint32_t>(kSPV_INTEL_rounded_divide_sqrt)},
    {IR(3121, 26), static_cast<uint32_t>(kSPV_INTEL_runtime_aligned)},
    {IR(3147, 36), static_cast<uint32_t>(kSPV_INTEL_shader_integer_functions2)},
    {IR(3183, 24), static_cast<uint32_t>(kSPV_INTEL_split_barrier)},
    {IR(3207, 35), static_cast<uint32_t>(kSPV_INTEL_subgroup_buffer_prefetch)},
    {IR(3242, 46), static_cast<uint32_t>(kSPV_INTEL_subgroup_matrix_multiply_accumulate)},
    {IR(3288, 20), static_cast<uint32_t>(kSPV_INTEL_subgroups)},
    {IR(3308, 24), static_cast<uint32_t>(kSPV_INTEL_task_sequence)},
    {IR(3332, 36), static_cast<uint32_t>(kSPV_INTEL_tensor_float32_conversion)},
    {IR(3368, 35), static_cast<uint32_t>(kSPV_INTEL_ternary_bitwise_function)},
    {IR(3403, 37), static_cast<uint32_t>(kSPV_INTEL_unstructured_loop_controls)},
    {IR(3440, 30), static_cast<uint32_t>(kSPV_INTEL_usm_storage_classes)},
    {IR(3470, 32), static_cast<uint32_t>(kSPV_INTEL_variable_length_array)},
    {IR(3502, 25), static_cast<uint32_t>(kSPV_INTEL_vector_compute)},
    {IR(3527, 22), static_cast<uint32_t>(kSPV_KHR_16bit_storage)},
    {IR(3549, 21), static_cast<uint32_t>(kSPV_KHR_8bit_storage)},
    {IR(3570, 14), static_cast<uint32_t>(kSPV_KHR_abort)},
    {IR(3584, 17), static_cast<uint32_t>(kSPV_KHR_bfloat16)},
    {IR(3601, 25), static_cast<uint32_t>(kSPV_KHR_bit_instructions)},
    {IR(3626, 35), static_cast<uint32_t>(kSPV_KHR_compute_shader_derivatives)},
    {IR(3661, 22), static_cast<uint32_t>(kSPV_KHR_constant_data)},
    {IR(3683, 27), static_cast<uint32_t>(kSPV_KHR_cooperative_matrix)},
    {IR(3710, 21), static_cast<uint32_t>(kSPV_KHR_device_group)},
    {IR(3731, 22), static_cast<uint32_t>(kSPV_KHR_expect_assume)},
    {IR(3753, 23), static_cast<uint32_t>(kSPV_KHR_float_controls)},
    {IR(3776, 24), static_cast<uint32_t>(kSPV_KHR_float_controls2)},
    {IR(3800, 12), static_cast<uint32_t>(kSPV_KHR_fma)},
    {IR(3812, 36), static_cast<uint32_t>(kSPV_KHR_fragment_shader_barycentric)},
    {IR(3848, 30), static_cast<uint32_t>(kSPV_KHR_fragment_shading_rate)},
    {IR(3878, 28), static_cast<uint32_t>(kSPV_KHR_integer_dot_product)},
    {IR(3906, 21), static_cast<uint32_t>(kSPV_KHR_linkonce_odr)},
    {IR(3927, 30), static_cast<uint32_t>(kSPV_KHR_maximal_reconvergence)},
    {IR(3957, 18), static_cast<uint32_t>(kSPV_KHR_multiview)},
    {IR(3975, 35), static_cast<uint32_t>(kSPV_KHR_no_integer_wrap_decoration)},
    {IR(4010, 26), static_cast<uint32_t>(kSPV_KHR_non_semantic_info)},
    {IR(4036, 25), static_cast<uint32_t>(kSPV_KHR_opacity_micromap)},
    {IR(4061, 32), static_cast<uint32_t>(kSPV_KHR_physical_storage_buffer)},
    {IR(4093, 22), static_cast<uint32_t>(kSPV_KHR_poison_freeze)},
    {IR(4115, 28), static_cast<uint32_t>(kSPV_KHR_post_depth_coverage)},
    {IR(4143, 21), static_cast<uint32_t>(kSPV_KHR_quad_control)},
    {IR(4164, 22), static_cast<uint32_t>(kSPV_KHR_ray_cull_mask)},
    {IR(4186, 18), static_cast<uint32_t>(kSPV_KHR_ray_query)},
    {IR(4204, 20), static_cast<uint32_t>(kSPV_KHR_ray_tracing)},
    {IR(4224, 35), static_cast<uint32_t>(kSPV_KHR_ray_tracing_position_fetch)},
    {IR(4259, 37), static_cast<uint32_t>(kSPV_KHR_relaxed_extended_instruction)},
    {IR(4296, 34), static_cast<uint32_t>(kSPV_KHR_shader_atomic_counter_ops)},
    {IR(4330, 22), static_cast<uint32_t>(kSPV_KHR_shader_ballot)},
    {IR(4352, 21), static_cast<uint32_t>(kSPV_KHR_shader_clock)},
    {IR(4373, 31), static_cast<uint32_t>(kSPV_KHR_shader_draw_parameters)},
    {IR(4404, 37), static_cast<uint32_t>(kSPV_KHR_storage_buffer_storage_class)},
    {IR(4441, 24), static_cast<uint32_t>(kSPV_KHR_subgroup_rotate)},
    {IR(4465, 38), static_cast<uint32_t>(kSPV_KHR_subgroup_uniform_control_flow)},
    {IR(4503, 22), static_cast<uint32_t>(kSPV_KHR_subgroup_vote)},
    {IR(4525, 29), static_cast<uint32_t>(kSPV_KHR_terminate_invocation)},
    {IR(4554, 35), static_cast<uint32_t>(kSPV_KHR_uniform_group_instructions)},
    {IR(4589, 25), static_cast<uint32_t>(kSPV_KHR_untyped_pointers)},
    {IR(4614, 26), static_cast<uint32_t>(kSPV_KHR_variable_pointers)},
    {IR(4640, 28), static_cast<uint32_t>(kSPV_KHR_vulkan_memory_model)},
    {IR(4668, 41), static_cast<uint32_t>(kSPV_KHR_workgroup_memory_explicit_layout)},
    {IR(4709, 38), static_cast<uint32_t>(kSPV_NVX_multiview_per_view_attributes)},
    {IR(4747, 24), static_cast<uint32_t>(kSPV_NV_bindless_texture)},
    {IR(4771, 38), static_cast<uint32_t>(kSPV_NV_cluster_acceleration_structure)},
    {IR(4809, 34), static_cast<uint32_t>(kSPV_NV_compute_shader_derivatives)},
    {IR(4843, 26), static_cast<uint32_t>(kSPV_NV_cooperative_matrix)},
    {IR(4869, 27), static_cast<uint32_t>(kSPV_NV_cooperative_matrix2)},
    {IR(4896, 26), static_cast<uint32_t>(kSPV_NV_cooperative_vector)},
    {IR(4922, 29), static_cast<uint32_t>(kSPV_NV_displacement_micromap)},
    {IR(4951, 35), static_cast<uint32_t>(kSPV_NV_fragment_shader_barycentric)},
    {IR(4986, 35), static_cast<uint32_t>(kSPV_NV_geometry_shader_passthrough)},
    {IR(5021, 28), static_cast<uint32_t>(kSPV_NV_linear_swept_spheres)},
    {IR(5049, 19), static_cast<uint32_t>(kSPV_NV_mesh_shader)},
    {IR(5068, 26), static_cast<uint32_t>(kSPV_NV_push_constant_bank)},
    {IR(5094, 25), static_cast<uint32_t>(kSPV_NV_raw_access_chains)},
    {IR(5119, 19), static_cast<uint32_t>(kSPV_NV_ray_tracing)},
    {IR(5138, 31), static_cast<uint32_t>(kSPV_NV_ray_tracing_motion_blur)},
    {IR(5169, 37), static_cast<uint32_t>(kSPV_NV_sample_mask_override_coverage)},
    {IR(5206, 33), static_cast<uint32_t>(kSPV_NV_shader_atomic_fp16_vector)},
    {IR(5239, 30), static_cast<uint32_t>(kSPV_NV_shader_image_footprint)},
    {IR(5269, 33), static_cast<uint32_t>(kSPV_NV_shader_invocation_reorder)},
    {IR(5302, 26), static_cast<uint32_t>(kSPV_NV_shader_sm_builtins)},
    {IR(5328, 35), static_cast<uint32_t>(kSPV_NV_shader_subgroup_partitioned)},
    {IR(5363, 20), static_cast<uint32_t>(kSPV_NV_shading_rate)},
    {IR(5383, 29), static_cast<uint32_t>(kSPV_NV_stereo_view_rendering)},
    {IR(5412, 25), static_cast<uint32_t>(kSPV_NV_tensor_addressing)},
    {IR(5437, 23), static_cast<uint32_t>(kSPV_NV_viewport_array2)},
    {IR(5460, 39), static_cast<uint32_t>(kSPV_QCOM_cooperative_matrix_conversion)},
    {IR(5499, 26), static_cast<uint32_t>(kSPV_QCOM_image_processing)},
    {IR(5525, 27), static_cast<uint32_t>(kSPV_QCOM_image_processing2)},
    {IR(5552, 22), static_cast<uint32_t>(kSPV_QCOM_tile_shading)},
    {IR(5574, 38), static_cast<uint32_t>(kSPV_VALIDATOR_ignore_type_decl_unique)},
    {IR(5612, 34), static_cast<uint32_t>(kSPV_VALVE_mixed_float_dot_product)},
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
static const std::array<OperandDesc, 1218> kOperandsByValue{{
  {0,IR(0, 0),IR(5646, 9)/* ReadOnly */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {1,IR(0, 0),IR(5662, 10)/* WriteOnly */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {2,IR(0, 0),IR(5672, 10)/* ReadWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {0,IR(0, 0),IR(5682, 8)/* Logical */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {1,IR(0, 0),IR(5690, 11)/* Physical32 */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {2,IR(0, 0),IR(5711, 11)/* Physical64 */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {5348,IR(0, 0),IR(5722, 24)/* PhysicalStorageBuffer64 */,IR(0, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {0,IR(0, 0),IR(5804, 9)/* Position */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {1,IR(0, 0),IR(5820, 10)/* PointSize */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {3,IR(0, 0),IR(5830, 13)/* ClipDistance */,IR(0, 0),IR(4, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4,IR(0, 0),IR(5843, 13)/* CullDistance */,IR(0, 0),IR(5, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5,IR(0, 0),IR(5856, 9)/* VertexId */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {6,IR(0, 0),IR(5865, 11)/* InstanceId */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {7,IR(0, 0),IR(5876, 12)/* PrimitiveId */,IR(0, 0),IR(6, 6),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {8,IR(0, 0),IR(5966, 13)/* InvocationId */,IR(0, 0),IR(12, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {9,IR(0, 0),IR(5979, 6)/* Layer */,IR(0, 0),IR(14, 5),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {10,IR(0, 0),IR(6025, 14)/* ViewportIndex */,IR(0, 0),IR(19, 5),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {11,IR(0, 0),IR(6073, 15)/* TessLevelOuter */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {12,IR(0, 0),IR(6088, 15)/* TessLevelInner */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {13,IR(0, 0),IR(6103, 10)/* TessCoord */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {14,IR(0, 0),IR(6113, 14)/* PatchVertices */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {15,IR(0, 0),IR(6127, 10)/* FragCoord */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {16,IR(0, 0),IR(6137, 11)/* PointCoord */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {17,IR(0, 0),IR(6148, 12)/* FrontFacing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {18,IR(0, 0),IR(6160, 9)/* SampleId */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {19,IR(0, 0),IR(6187, 15)/* SamplePosition */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {20,IR(0, 0),IR(6202, 11)/* SampleMask */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {22,IR(0, 0),IR(6213, 10)/* FragDepth */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {23,IR(0, 0),IR(6223, 17)/* HelperInvocation */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {24,IR(0, 0),IR(6240, 14)/* NumWorkgroups */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {25,IR(0, 0),IR(6254, 14)/* WorkgroupSize */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {26,IR(0, 0),IR(6268, 12)/* WorkgroupId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {27,IR(0, 0),IR(6280, 18)/* LocalInvocationId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {28,IR(0, 0),IR(6298, 19)/* GlobalInvocationId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {29,IR(0, 0),IR(6317, 21)/* LocalInvocationIndex */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {30,IR(0, 0),IR(6338, 8)/* WorkDim */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {31,IR(0, 0),IR(6346, 11)/* GlobalSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {32,IR(0, 0),IR(6357, 22)/* EnqueuedWorkgroupSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {33,IR(0, 0),IR(6379, 13)/* GlobalOffset */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {34,IR(0, 0),IR(6392, 15)/* GlobalLinearId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {36,IR(0, 0),IR(6407, 13)/* SubgroupSize */,IR(0, 0),IR(26, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {37,IR(0, 0),IR(6454, 16)/* SubgroupMaxSize */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {38,IR(0, 0),IR(6470, 13)/* NumSubgroups */,IR(0, 0),IR(29, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {39,IR(0, 0),IR(6483, 21)/* NumEnqueuedSubgroups */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {40,IR(0, 0),IR(6504, 11)/* SubgroupId */,IR(0, 0),IR(29, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {41,IR(0, 0),IR(6515, 26)/* SubgroupLocalInvocationId */,IR(0, 0),IR(26, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {42,IR(0, 0),IR(6541, 12)/* VertexIndex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {43,IR(0, 0),IR(6553, 14)/* InstanceIndex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4160,IR(0, 0),IR(6567, 10)/* CoreIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4161,IR(0, 0),IR(6593, 13)/* CoreCountARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4162,IR(0, 0),IR(6606, 13)/* CoreMaxIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4163,IR(0, 0),IR(6619, 10)/* WarpIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4164,IR(0, 0),IR(6629, 13)/* WarpMaxIDARM */,IR(0, 0),IR(31, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4416,IR(0, 0),IR(6642, 15)/* SubgroupEqMask */,IR(1, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4417,IR(0, 0),IR(6697, 15)/* SubgroupGeMask */,IR(2, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4418,IR(0, 0),IR(6730, 15)/* SubgroupGtMask */,IR(3, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4419,IR(0, 0),IR(6763, 15)/* SubgroupLeMask */,IR(4, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4420,IR(0, 0),IR(6796, 15)/* SubgroupLtMask */,IR(5, 1),IR(32, 2),IR(2, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4424,IR(0, 0),IR(6829, 11)/* BaseVertex */,IR(0, 0),IR(34, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4425,IR(0, 0),IR(6855, 13)/* BaseInstance */,IR(0, 0),IR(34, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4426,IR(0, 0),IR(6868, 10)/* DrawIndex */,IR(0, 0),IR(35, 3),IR(4, 3),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4432,IR(0, 0),IR(6878, 24)/* PrimitiveShadingRateKHR */,IR(0, 0),IR(38, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4438,IR(0, 0),IR(6925, 12)/* DeviceIndex */,IR(0, 0),IR(39, 1),IR(8, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4440,IR(0, 0),IR(6949, 10)/* ViewIndex */,IR(0, 0),IR(40, 1),IR(9, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4444,IR(0, 0),IR(6969, 15)/* ShadingRateKHR */,IR(0, 0),IR(38, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4492,IR(0, 0),IR(6984, 15)/* TileOffsetQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4493,IR(0, 0),IR(7015, 18)/* TileDimensionQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4494,IR(0, 0),IR(7033, 18)/* TileApronSizeQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4992,IR(0, 0),IR(7051, 20)/* BaryCoordNoPerspAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4993,IR(0, 0),IR(7071, 28)/* BaryCoordNoPerspCentroidAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4994,IR(0, 0),IR(7099, 26)/* BaryCoordNoPerspSampleAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4995,IR(0, 0),IR(7125, 19)/* BaryCoordSmoothAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4996,IR(0, 0),IR(7144, 27)/* BaryCoordSmoothCentroidAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4997,IR(0, 0),IR(7171, 25)/* BaryCoordSmoothSampleAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {4998,IR(0, 0),IR(7196, 22)/* BaryCoordPullModelAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5014,IR(0, 0),IR(7218, 18)/* FragStencilRefEXT */,IR(0, 0),IR(42, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5021,IR(0, 0),IR(7253, 29)/* RemainingRecursionLevelsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5073,IR(0, 0),IR(7300, 16)/* ShaderIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5122,IR(0, 0),IR(7316, 15)/* SamplerHeapEXT */,IR(0, 0),IR(44, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5123,IR(0, 0),IR(7349, 16)/* ResourceHeapEXT */,IR(0, 0),IR(44, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5253,IR(0, 0),IR(7365, 15)/* ViewportMaskNV */,IR(0, 0),IR(45, 2),IR(12, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5257,IR(0, 0),IR(7401, 20)/* SecondaryPositionNV */,IR(0, 0),IR(47, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5258,IR(0, 0),IR(7440, 24)/* SecondaryViewportMaskNV */,IR(0, 0),IR(47, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5261,IR(0, 0),IR(7464, 18)/* PositionPerViewNV */,IR(0, 0),IR(48, 2),IR(15, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5262,IR(0, 0),IR(7502, 22)/* ViewportMaskPerViewNV */,IR(0, 0),IR(48, 2),IR(15, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5264,IR(0, 0),IR(7524, 16)/* FullyCoveredEXT */,IR(0, 0),IR(50, 1),IR(17, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5274,IR(0, 0),IR(7564, 12)/* TaskCountNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5275,IR(0, 0),IR(7576, 17)/* PrimitiveCountNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5276,IR(0, 0),IR(7593, 19)/* PrimitiveIndicesNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5277,IR(0, 0),IR(7612, 22)/* ClipDistancePerViewNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5278,IR(0, 0),IR(7634, 22)/* CullDistancePerViewNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5279,IR(0, 0),IR(7656, 15)/* LayerPerViewNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5280,IR(0, 0),IR(7671, 16)/* MeshViewCountNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5281,IR(0, 0),IR(7687, 18)/* MeshViewIndicesNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5286,IR(0, 0),IR(7705, 13)/* BaryCoordKHR */,IR(6, 1),IR(52, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5287,IR(0, 0),IR(7753, 20)/* BaryCoordNoPerspKHR */,IR(7, 1),IR(52, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5292,IR(0, 0),IR(7792, 12)/* FragSizeEXT */,IR(8, 1),IR(53, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5293,IR(0, 0),IR(7838, 23)/* FragInvocationCountEXT */,IR(9, 1),IR(53, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5294,IR(0, 0),IR(7883, 25)/* PrimitivePointIndicesEXT */,IR(0, 0),IR(54, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5295,IR(0, 0),IR(7908, 24)/* PrimitiveLineIndicesEXT */,IR(0, 0),IR(54, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5296,IR(0, 0),IR(7932, 28)/* PrimitiveTriangleIndicesEXT */,IR(0, 0),IR(54, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5299,IR(0, 0),IR(7960, 17)/* CullPrimitiveEXT */,IR(0, 0),IR(54, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5319,IR(0, 0),IR(7977, 12)/* LaunchIdKHR */,IR(10, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5320,IR(0, 0),IR(8000, 14)/* LaunchSizeKHR */,IR(11, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5321,IR(0, 0),IR(8027, 18)/* WorldRayOriginKHR */,IR(12, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5322,IR(0, 0),IR(8062, 21)/* WorldRayDirectionKHR */,IR(13, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5323,IR(0, 0),IR(8103, 19)/* ObjectRayOriginKHR */,IR(14, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5324,IR(0, 0),IR(8140, 22)/* ObjectRayDirectionKHR */,IR(15, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5325,IR(0, 0),IR(8183, 11)/* RayTminKHR */,IR(16, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5326,IR(0, 0),IR(8204, 11)/* RayTmaxKHR */,IR(17, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5327,IR(0, 0),IR(8225, 23)/* InstanceCustomIndexKHR */,IR(18, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5330,IR(0, 0),IR(8270, 17)/* ObjectToWorldKHR */,IR(19, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5331,IR(0, 0),IR(8303, 17)/* WorldToObjectKHR */,IR(20, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5332,IR(0, 0),IR(8336, 7)/* HitTNV */,IR(0, 0),IR(57, 1),IR(26, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5333,IR(0, 0),IR(8343, 11)/* HitKindKHR */,IR(21, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5334,IR(0, 0),IR(8364, 17)/* CurrentRayTimeNV */,IR(0, 0),IR(58, 1),IR(27, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5335,IR(0, 0),IR(8404, 30)/* HitTriangleVertexPositionsKHR */,IR(0, 0),IR(59, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5337,IR(0, 0),IR(8461, 34)/* HitMicroTriangleVertexPositionsNV */,IR(0, 0),IR(60, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5344,IR(0, 0),IR(8528, 37)/* HitMicroTriangleVertexBarycentricsNV */,IR(0, 0),IR(60, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5351,IR(0, 0),IR(8565, 20)/* IncomingRayFlagsKHR */,IR(22, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5352,IR(0, 0),IR(8604, 20)/* RayGeometryIndexKHR */,IR(0, 0),IR(61, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5359,IR(0, 0),IR(8624, 14)/* HitIsSphereNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5360,IR(0, 0),IR(8666, 11)/* HitIsLSSNV */,IR(0, 0),IR(63, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5361,IR(0, 0),IR(8716, 20)/* HitSpherePositionNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5374,IR(0, 0),IR(8736, 13)/* WarpsPerSMNV */,IR(0, 0),IR(64, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5375,IR(0, 0),IR(8768, 10)/* SMCountNV */,IR(0, 0),IR(64, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5376,IR(0, 0),IR(8778, 9)/* WarpIDNV */,IR(0, 0),IR(64, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5377,IR(0, 0),IR(8787, 7)/* SMIDNV */,IR(0, 0),IR(64, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5396,IR(0, 0),IR(8794, 18)/* HitLSSPositionsNV */,IR(0, 0),IR(63, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5405,IR(0, 0),IR(8812, 34)/* HitKindFrontFacingMicroTriangleNV */,IR(0, 0),IR(60, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5406,IR(0, 0),IR(8846, 33)/* HitKindBackFacingMicroTriangleNV */,IR(0, 0),IR(60, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5420,IR(0, 0),IR(8879, 18)/* HitSphereRadiusNV */,IR(0, 0),IR(62, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5421,IR(0, 0),IR(8897, 14)/* HitLSSRadiiNV */,IR(0, 0),IR(63, 1),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {5436,IR(0, 0),IR(8911, 12)/* ClusterIDNV */,IR(0, 0),IR(65, 1),IR(31, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {6021,IR(0, 0),IR(8964, 12)/* CullMaskKHR */,IR(0, 0),IR(66, 1),IR(32, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_BUILT_IN
  {0,IR(0, 0),IR(8991, 7)/* Matrix */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {1,IR(0, 0),IR(5813, 7)/* Shader */,IR(0, 0),IR(67, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {2,IR(0, 0),IR(5888, 9)/* Geometry */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {3,IR(0, 0),IR(5897, 13)/* Tessellation */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4,IR(0, 0),IR(5701, 10)/* Addresses */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5,IR(0, 0),IR(8998, 8)/* Linkage */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6,IR(0, 0),IR(5655, 7)/* Kernel */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {7,IR(0, 0),IR(9006, 9)/* Vector16 */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {8,IR(0, 0),IR(9015, 14)/* Float16Buffer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {9,IR(0, 0),IR(9029, 8)/* Float16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {10,IR(0, 0),IR(9037, 8)/* Float64 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {11,IR(0, 0),IR(9045, 6)/* Int64 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {12,IR(0, 0),IR(9051, 13)/* Int64Atomics */,IR(0, 0),IR(68, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {13,IR(0, 0),IR(9064, 11)/* ImageBasic */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {14,IR(0, 0),IR(9075, 15)/* ImageReadWrite */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {15,IR(0, 0),IR(9090, 12)/* ImageMipmap */,IR(0, 0),IR(69, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {17,IR(0, 0),IR(9102, 6)/* Pipes */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {18,IR(0, 0),IR(9108, 7)/* Groups */,IR(0, 0),IR(1, 0),IR(33, 1),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {19,IR(0, 0),IR(9115, 14)/* DeviceEnqueue */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {20,IR(0, 0),IR(9129, 15)/* LiteralSampler */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {21,IR(0, 0),IR(9144, 14)/* AtomicStorage */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {22,IR(0, 0),IR(9158, 6)/* Int16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {23,IR(0, 0),IR(9164, 22)/* TessellationPointSize */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {24,IR(0, 0),IR(9186, 18)/* GeometryPointSize */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {25,IR(0, 0),IR(9204, 20)/* ImageGatherExtended */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {27,IR(0, 0),IR(9224, 24)/* StorageImageMultisample */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {28,IR(0, 0),IR(9248, 34)/* UniformBufferArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {29,IR(0, 0),IR(9282, 33)/* SampledImageArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {30,IR(0, 0),IR(9315, 34)/* StorageBufferArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {31,IR(0, 0),IR(9349, 33)/* StorageImageArrayDynamicIndexing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {32,IR(0, 0),IR(5830, 13)/* ClipDistance */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {33,IR(0, 0),IR(5843, 13)/* CullDistance */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {34,IR(0, 0),IR(9382, 15)/* ImageCubeArray */,IR(0, 0),IR(71, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {35,IR(0, 0),IR(6169, 18)/* SampleRateShading */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {36,IR(0, 0),IR(9414, 10)/* ImageRect */,IR(0, 0),IR(72, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {37,IR(0, 0),IR(9424, 12)/* SampledRect */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {38,IR(0, 0),IR(9436, 15)/* GenericPointer */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {39,IR(0, 0),IR(9451, 5)/* Int8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {40,IR(0, 0),IR(9456, 16)/* InputAttachment */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {41,IR(0, 0),IR(9472, 16)/* SparseResidency */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {42,IR(0, 0),IR(9488, 7)/* MinLod */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {43,IR(0, 0),IR(9495, 10)/* Sampled1D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {44,IR(0, 0),IR(9505, 8)/* Image1D */,IR(0, 0),IR(73, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {45,IR(0, 0),IR(9397, 17)/* SampledCubeArray */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {46,IR(0, 0),IR(9513, 14)/* SampledBuffer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {47,IR(0, 0),IR(9527, 12)/* ImageBuffer */,IR(0, 0),IR(74, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {48,IR(0, 0),IR(9539, 13)/* ImageMSArray */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {49,IR(0, 0),IR(9552, 28)/* StorageImageExtendedFormats */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {50,IR(0, 0),IR(9580, 11)/* ImageQuery */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {51,IR(0, 0),IR(9591, 18)/* DerivativeControl */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {52,IR(0, 0),IR(9609, 22)/* InterpolationFunction */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {53,IR(0, 0),IR(9631, 18)/* TransformFeedback */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {54,IR(0, 0),IR(9649, 16)/* GeometryStreams */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {55,IR(0, 0),IR(9665, 30)/* StorageImageReadWithoutFormat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {56,IR(0, 0),IR(9695, 31)/* StorageImageWriteWithoutFormat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {57,IR(0, 0),IR(6039, 14)/* MultiViewport */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {58,IR(0, 0),IR(9726, 17)/* SubgroupDispatch */,IR(0, 0),IR(75, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {59,IR(0, 0),IR(9743, 13)/* NamedBarrier */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {60,IR(0, 0),IR(9756, 12)/* PipeStorage */,IR(0, 0),IR(76, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {61,IR(0, 0),IR(6420, 16)/* GroupNonUniform */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {62,IR(0, 0),IR(9768, 20)/* GroupNonUniformVote */,IR(0, 0),IR(77, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {63,IR(0, 0),IR(9788, 26)/* GroupNonUniformArithmetic */,IR(0, 0),IR(77, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {64,IR(0, 0),IR(6675, 22)/* GroupNonUniformBallot */,IR(0, 0),IR(77, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {65,IR(0, 0),IR(9814, 23)/* GroupNonUniformShuffle */,IR(0, 0),IR(77, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {66,IR(0, 0),IR(9837, 31)/* GroupNonUniformShuffleRelative */,IR(0, 0),IR(77, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {67,IR(0, 0),IR(9868, 25)/* GroupNonUniformClustered */,IR(0, 0),IR(77, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {68,IR(0, 0),IR(9893, 20)/* GroupNonUniformQuad */,IR(0, 0),IR(77, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {69,IR(0, 0),IR(5985, 12)/* ShaderLayer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {70,IR(0, 0),IR(6053, 20)/* ShaderViewportIndex */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {71,IR(0, 0),IR(9913, 18)/* UniformDecoration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4165,IR(0, 0),IR(6577, 16)/* CoreBuiltinsARM */,IR(0, 0),IR(1, 0),IR(34, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4166,IR(0, 0),IR(9931, 28)/* TileImageColorReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4167,IR(0, 0),IR(9959, 28)/* TileImageDepthReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4168,IR(0, 0),IR(9987, 30)/* TileImageStencilReadAccessEXT */,IR(0, 0),IR(1, 0),IR(35, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4174,IR(0, 0),IR(10017, 11)/* TensorsARM */,IR(0, 0),IR(1, 0),IR(36, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4175,IR(0, 0),IR(10028, 37)/* StorageTensorArrayDynamicIndexingARM */,IR(0, 0),IR(1, 0),IR(36, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4176,IR(0, 0),IR(10065, 40)/* StorageTensorArrayNonUniformIndexingARM */,IR(0, 0),IR(1, 0),IR(36, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4191,IR(0, 0),IR(10105, 9)/* GraphARM */,IR(0, 0),IR(1, 0),IR(37, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4201,IR(0, 0),IR(10114, 28)/* CooperativeMatrixLayoutsARM */,IR(0, 0),IR(1, 0),IR(38, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4212,IR(0, 0),IR(10142, 10)/* Float8EXT */,IR(0, 0),IR(1, 0),IR(39, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4213,IR(0, 0),IR(10152, 27)/* Float8CooperativeMatrixEXT */,IR(0, 0),IR(78, 2),IR(39, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4422,IR(0, 0),IR(6902, 23)/* FragmentShadingRateKHR */,IR(0, 0),IR(3, 1),IR(7, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4423,IR(0, 0),IR(6436, 18)/* SubgroupBallotKHR */,IR(0, 0),IR(1, 0),IR(2, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4427,IR(0, 0),IR(6840, 15)/* DrawParameters */,IR(0, 0),IR(3, 1),IR(3, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4428,IR(0, 0),IR(10200, 33)/* WorkgroupMemoryExplicitLayoutKHR */,IR(0, 0),IR(3, 1),IR(40, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4429,IR(0, 0),IR(10233, 43)/* WorkgroupMemoryExplicitLayout8BitAccessKHR */,IR(0, 0),IR(80, 1),IR(40, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4430,IR(0, 0),IR(10276, 44)/* WorkgroupMemoryExplicitLayout16BitAccessKHR */,IR(0, 0),IR(80, 1),IR(40, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4431,IR(0, 0),IR(10320, 16)/* SubgroupVoteKHR */,IR(0, 0),IR(1, 0),IR(41, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4433,IR(0, 0),IR(10336, 25)/* StorageBuffer16BitAccess */,IR(23, 1),IR(1, 0),IR(42, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4434,IR(0, 0),IR(10389, 35)/* UniformAndStorageBuffer16BitAccess */,IR(24, 1),IR(81, 1),IR(42, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4435,IR(0, 0),IR(10441, 22)/* StoragePushConstant16 */,IR(0, 0),IR(1, 0),IR(42, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4436,IR(0, 0),IR(10463, 21)/* StorageInputOutput16 */,IR(0, 0),IR(1, 0),IR(42, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4437,IR(0, 0),IR(6937, 12)/* DeviceGroup */,IR(0, 0),IR(1, 0),IR(8, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4439,IR(0, 0),IR(6959, 10)/* MultiView */,IR(0, 0),IR(3, 1),IR(9, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4441,IR(0, 0),IR(10484, 30)/* VariablePointersStorageBuffer */,IR(0, 0),IR(3, 1),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4442,IR(0, 0),IR(10514, 17)/* VariablePointers */,IR(0, 0),IR(82, 1),IR(43, 1),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4445,IR(0, 0),IR(10531, 17)/* AtomicStorageOps */,IR(0, 0),IR(83, 1),IR(44, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4447,IR(0, 0),IR(10548, 28)/* SampleMaskPostDepthCoverage */,IR(0, 0),IR(1, 0),IR(45, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4448,IR(0, 0),IR(10576, 24)/* StorageBuffer8BitAccess */,IR(0, 0),IR(1, 0),IR(46, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4449,IR(0, 0),IR(10600, 34)/* UniformAndStorageBuffer8BitAccess */,IR(0, 0),IR(84, 1),IR(46, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4450,IR(0, 0),IR(10634, 21)/* StoragePushConstant8 */,IR(0, 0),IR(1, 0),IR(46, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4464,IR(0, 0),IR(10655, 15)/* DenormPreserve */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4465,IR(0, 0),IR(10670, 18)/* DenormFlushToZero */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4466,IR(0, 0),IR(10688, 25)/* SignedZeroInfNanPreserve */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4467,IR(0, 0),IR(10713, 16)/* RoundingModeRTE */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4468,IR(0, 0),IR(10729, 16)/* RoundingModeRTZ */,IR(0, 0),IR(1, 0),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4471,IR(0, 0),IR(10745, 23)/* RayQueryProvisionalKHR */,IR(0, 0),IR(3, 1),IR(48, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4472,IR(0, 0),IR(10768, 12)/* RayQueryKHR */,IR(0, 0),IR(3, 1),IR(48, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4473,IR(0, 0),IR(10780, 19)/* UntypedPointersKHR */,IR(0, 0),IR(1, 0),IR(49, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4478,IR(0, 0),IR(10799, 32)/* RayTraversalPrimitiveCullingKHR */,IR(0, 0),IR(85, 2),IR(50, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4479,IR(0, 0),IR(5923, 14)/* RayTracingKHR */,IR(0, 0),IR(3, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4484,IR(0, 0),IR(10831, 26)/* TextureSampleWeightedQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4485,IR(0, 0),IR(10857, 21)/* TextureBoxFilterQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4486,IR(0, 0),IR(10878, 22)/* TextureBlockMatchQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4495,IR(0, 0),IR(6999, 16)/* TileShadingQCOM */,IR(0, 0),IR(3, 1),IR(53, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4496,IR(0, 0),IR(10900, 32)/* CooperativeMatrixConversionQCOM */,IR(0, 0),IR(87, 1),IR(54, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {4498,IR(0, 0),IR(10932, 23)/* TextureBlockMatch2QCOM */,IR(0, 0),IR(1, 0),IR(55, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5008,IR(0, 0),IR(10955, 16)/* Float16ImageAMD */,IR(0, 0),IR(3, 1),IR(56, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5009,IR(0, 0),IR(10971, 22)/* ImageGatherBiasLodAMD */,IR(0, 0),IR(3, 1),IR(57, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5010,IR(0, 0),IR(10993, 16)/* FragmentMaskAMD */,IR(0, 0),IR(3, 1),IR(58, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5013,IR(0, 0),IR(7236, 17)/* StencilExportEXT */,IR(0, 0),IR(3, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5015,IR(0, 0),IR(11009, 21)/* ImageReadWriteLodAMD */,IR(0, 0),IR(3, 1),IR(59, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5016,IR(0, 0),IR(11030, 14)/* Int64ImageEXT */,IR(0, 0),IR(3, 1),IR(60, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5055,IR(0, 0),IR(11044, 15)/* ShaderClockKHR */,IR(0, 0),IR(1, 0),IR(61, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5067,IR(0, 0),IR(7282, 18)/* ShaderEnqueueAMDX */,IR(0, 0),IR(3, 1),IR(62, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5087,IR(0, 0),IR(11059, 15)/* QuadControlKHR */,IR(0, 0),IR(1, 0),IR(63, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5112,IR(0, 0),IR(11074, 14)/* Int4TypeINTEL */,IR(0, 0),IR(1, 0),IR(64, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5114,IR(0, 0),IR(11088, 27)/* Int4CooperativeMatrixINTEL */,IR(0, 0),IR(88, 2),IR(64, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5116,IR(0, 0),IR(11115, 16)/* BFloat16TypeKHR */,IR(0, 0),IR(1, 0),IR(65, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5117,IR(0, 0),IR(11131, 22)/* BFloat16DotProductKHR */,IR(0, 0),IR(90, 1),IR(65, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5118,IR(0, 0),IR(11153, 29)/* BFloat16CooperativeMatrixKHR */,IR(0, 0),IR(91, 2),IR(65, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5120,IR(0, 0),IR(11182, 9)/* AbortKHR */,IR(0, 0),IR(1, 0),IR(66, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5128,IR(0, 0),IR(7331, 18)/* DescriptorHeapEXT */,IR(0, 0),IR(93, 1),IR(67, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5146,IR(0, 0),IR(11191, 16)/* ConstantDataKHR */,IR(0, 0),IR(1, 0),IR(68, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5156,IR(0, 0),IR(11207, 16)/* PoisonFreezeKHR */,IR(0, 0),IR(1, 0),IR(69, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5181,IR(0, 0),IR(11223, 15)/* WeakLinkageAMD */,IR(0, 0),IR(94, 1),IR(70, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5249,IR(0, 0),IR(11238, 29)/* SampleMaskOverrideCoverageNV */,IR(0, 0),IR(25, 1),IR(71, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5251,IR(0, 0),IR(11267, 28)/* GeometryShaderPassthroughNV */,IR(0, 0),IR(70, 1),IR(72, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5254,IR(0, 0),IR(5997, 28)/* ShaderViewportIndexLayerEXT */,IR(25, 1),IR(95, 1),IR(73, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5255,IR(0, 0),IR(7380, 21)/* ShaderViewportMaskNV */,IR(0, 0),IR(96, 1),IR(75, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5259,IR(0, 0),IR(7421, 19)/* ShaderStereoViewNV */,IR(0, 0),IR(97, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5260,IR(0, 0),IR(7482, 20)/* PerViewAttributesNV */,IR(0, 0),IR(40, 1),IR(76, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5265,IR(0, 0),IR(7540, 24)/* FragmentFullyCoveredEXT */,IR(0, 0),IR(3, 1),IR(17, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5266,IR(0, 0),IR(5937, 14)/* MeshShadingNV */,IR(0, 0),IR(3, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5282,IR(0, 0),IR(11322, 17)/* ImageFootprintNV */,IR(0, 0),IR(1, 0),IR(77, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5283,IR(0, 0),IR(5951, 15)/* MeshShadingEXT */,IR(0, 0),IR(3, 1),IR(23, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5284,IR(0, 0),IR(7730, 23)/* FragmentBarycentricKHR */,IR(26, 1),IR(1, 0),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5288,IR(0, 0),IR(11361, 31)/* ComputeDerivativeGroupQuadsKHR */,IR(27, 1),IR(3, 1),IR(78, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5291,IR(0, 0),IR(7819, 19)/* FragmentDensityEXT */,IR(28, 1),IR(3, 1),IR(21, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5297,IR(0, 0),IR(11436, 30)/* GroupNonUniformPartitionedEXT */,IR(29, 1),IR(1, 0),IR(80, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5301,IR(0, 0),IR(11495, 17)/* ShaderNonUniform */,IR(30, 1),IR(3, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5302,IR(0, 0),IR(11532, 23)/* RuntimeDescriptorArray */,IR(31, 1),IR(3, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5303,IR(0, 0),IR(11581, 36)/* InputAttachmentArrayDynamicIndexing */,IR(32, 1),IR(98, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5304,IR(0, 0),IR(11656, 39)/* UniformTexelBufferArrayDynamicIndexing */,IR(33, 1),IR(74, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5305,IR(0, 0),IR(11737, 39)/* StorageTexelBufferArrayDynamicIndexing */,IR(34, 1),IR(99, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5306,IR(0, 0),IR(11818, 37)/* UniformBufferArrayNonUniformIndexing */,IR(35, 1),IR(100, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5307,IR(0, 0),IR(11895, 36)/* SampledImageArrayNonUniformIndexing */,IR(36, 1),IR(100, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5308,IR(0, 0),IR(11970, 37)/* StorageBufferArrayNonUniformIndexing */,IR(37, 1),IR(100, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5309,IR(0, 0),IR(12047, 36)/* StorageImageArrayNonUniformIndexing */,IR(38, 1),IR(100, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5310,IR(0, 0),IR(12122, 39)/* InputAttachmentArrayNonUniformIndexing */,IR(39, 1),IR(101, 2),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5311,IR(0, 0),IR(12203, 42)/* UniformTexelBufferArrayNonUniformIndexing */,IR(40, 1),IR(103, 2),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5312,IR(0, 0),IR(12290, 42)/* StorageTexelBufferArrayNonUniformIndexing */,IR(41, 1),IR(105, 2),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5336,IR(0, 0),IR(8434, 27)/* RayTracingPositionFetchKHR */,IR(0, 0),IR(3, 1),IR(83, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5340,IR(0, 0),IR(5910, 13)/* RayTracingNV */,IR(0, 0),IR(3, 1),IR(26, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5341,IR(0, 0),IR(8381, 23)/* RayTracingMotionBlurNV */,IR(0, 0),IR(3, 1),IR(27, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5345,IR(0, 0),IR(12377, 18)/* VulkanMemoryModel */,IR(42, 1),IR(1, 0),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5346,IR(0, 0),IR(12416, 29)/* VulkanMemoryModelDeviceScope */,IR(43, 1),IR(1, 0),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5347,IR(0, 0),IR(5773, 31)/* PhysicalStorageBufferAddresses */,IR(44, 1),IR(3, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5350,IR(0, 0),IR(12511, 32)/* ComputeDerivativeGroupLinearKHR */,IR(45, 1),IR(3, 1),IR(78, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5353,IR(0, 0),IR(12574, 25)/* RayTracingProvisionalKHR */,IR(0, 0),IR(3, 1),IR(28, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5357,IR(0, 0),IR(12599, 20)/* CooperativeMatrixNV */,IR(0, 0),IR(3, 1),IR(85, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5363,IR(0, 0),IR(12619, 33)/* FragmentShaderSampleInterlockEXT */,IR(0, 0),IR(3, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5372,IR(0, 0),IR(12652, 38)/* FragmentShaderShadingRateInterlockEXT */,IR(0, 0),IR(3, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5373,IR(0, 0),IR(8749, 19)/* ShaderSMBuiltinsNV */,IR(0, 0),IR(3, 1),IR(30, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5378,IR(0, 0),IR(12690, 32)/* FragmentShaderPixelInterlockEXT */,IR(0, 0),IR(3, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5379,IR(0, 0),IR(12722, 25)/* DemoteToHelperInvocation */,IR(46, 1),IR(3, 1),IR(87, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5380,IR(0, 0),IR(12775, 23)/* DisplacementMicromapNV */,IR(0, 0),IR(3, 1),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5381,IR(0, 0),IR(12798, 29)/* RayTracingOpacityMicromapKHR */,IR(47, 1),IR(3, 1),IR(89, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5383,IR(0, 0),IR(12856, 26)/* ShaderInvocationReorderNV */,IR(0, 0),IR(61, 1),IR(91, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5388,IR(0, 0),IR(12882, 27)/* ShaderInvocationReorderEXT */,IR(0, 0),IR(61, 1),IR(92, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5390,IR(0, 0),IR(12909, 18)/* BindlessTextureNV */,IR(0, 0),IR(1, 0),IR(93, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5391,IR(0, 0),IR(12927, 25)/* RayQueryPositionFetchKHR */,IR(0, 0),IR(3, 1),IR(83, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5394,IR(0, 0),IR(12952, 20)/* CooperativeVectorNV */,IR(0, 0),IR(1, 0),IR(94, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5404,IR(0, 0),IR(12972, 22)/* AtomicFloat16VectorNV */,IR(0, 0),IR(1, 0),IR(95, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5409,IR(0, 0),IR(8495, 33)/* RayTracingDisplacementMicromapNV */,IR(0, 0),IR(61, 1),IR(88, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5414,IR(0, 0),IR(12994, 18)/* RawAccessChainsNV */,IR(0, 0),IR(1, 0),IR(96, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5418,IR(0, 0),IR(8638, 28)/* RayTracingSpheresGeometryNV */,IR(0, 0),IR(1, 0),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5419,IR(0, 0),IR(8677, 39)/* RayTracingLinearSweptSpheresGeometryNV */,IR(0, 0),IR(1, 0),IR(29, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5423,IR(0, 0),IR(13012, 20)/* PushConstantBanksNV */,IR(0, 0),IR(3, 1),IR(97, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5425,IR(0, 0),IR(13032, 14)/* LongVectorEXT */,IR(0, 0),IR(1, 0),IR(98, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5426,IR(0, 0),IR(13046, 23)/* Shader64BitIndexingEXT */,IR(0, 0),IR(1, 0),IR(99, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5430,IR(0, 0),IR(13069, 30)/* CooperativeMatrixReductionsNV */,IR(0, 0),IR(1, 0),IR(100, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5431,IR(0, 0),IR(13099, 31)/* CooperativeMatrixConversionsNV */,IR(0, 0),IR(1, 0),IR(100, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5432,IR(0, 0),IR(13130, 40)/* CooperativeMatrixPerElementOperationsNV */,IR(0, 0),IR(1, 0),IR(100, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5433,IR(0, 0),IR(13170, 36)/* CooperativeMatrixTensorAddressingNV */,IR(0, 0),IR(1, 0),IR(100, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5434,IR(0, 0),IR(13206, 30)/* CooperativeMatrixBlockLoadsNV */,IR(0, 0),IR(1, 0),IR(100, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5435,IR(0, 0),IR(13236, 28)/* CooperativeVectorTrainingNV */,IR(0, 0),IR(1, 0),IR(94, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5437,IR(0, 0),IR(8923, 41)/* RayTracingClusterAccelerationStructureNV */,IR(0, 0),IR(61, 1),IR(31, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5439,IR(0, 0),IR(13264, 19)/* TensorAddressingNV */,IR(0, 0),IR(1, 0),IR(101, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5568,IR(0, 0),IR(13283, 21)/* SubgroupShuffleINTEL */,IR(0, 0),IR(1, 0),IR(102, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5569,IR(0, 0),IR(13304, 27)/* SubgroupBufferBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(102, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5570,IR(0, 0),IR(13331, 26)/* SubgroupImageBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(102, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5579,IR(0, 0),IR(13357, 31)/* SubgroupImageMediaBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(103, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5582,IR(0, 0),IR(13388, 21)/* RoundToInfinityINTEL */,IR(0, 0),IR(1, 0),IR(104, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5583,IR(0, 0),IR(13409, 23)/* FloatingPointModeINTEL */,IR(0, 0),IR(1, 0),IR(104, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5584,IR(0, 0),IR(13432, 23)/* IntegerFunctions2INTEL */,IR(0, 0),IR(1, 0),IR(105, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5603,IR(0, 0),IR(13455, 22)/* FunctionPointersINTEL */,IR(0, 0),IR(1, 0),IR(106, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5604,IR(0, 0),IR(13477, 24)/* IndirectReferencesINTEL */,IR(0, 0),IR(1, 0),IR(106, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5606,IR(0, 0),IR(13501, 9)/* AsmINTEL */,IR(0, 0),IR(1, 0),IR(107, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5612,IR(0, 0),IR(13510, 23)/* AtomicFloat32MinMaxEXT */,IR(0, 0),IR(1, 0),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5613,IR(0, 0),IR(13533, 23)/* AtomicFloat64MinMaxEXT */,IR(0, 0),IR(1, 0),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5616,IR(0, 0),IR(13556, 23)/* AtomicFloat16MinMaxEXT */,IR(0, 0),IR(1, 0),IR(108, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5617,IR(0, 0),IR(13579, 19)/* VectorComputeINTEL */,IR(0, 0),IR(107, 1),IR(109, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5619,IR(0, 0),IR(13598, 15)/* VectorAnyINTEL */,IR(0, 0),IR(1, 0),IR(109, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5629,IR(0, 0),IR(13613, 16)/* ExpectAssumeKHR */,IR(0, 0),IR(1, 0),IR(110, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5696,IR(0, 0),IR(13629, 33)/* SubgroupAvcMotionEstimationINTEL */,IR(0, 0),IR(1, 0),IR(111, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5697,IR(0, 0),IR(13662, 38)/* SubgroupAvcMotionEstimationIntraINTEL */,IR(0, 0),IR(1, 0),IR(111, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5698,IR(0, 0),IR(13700, 39)/* SubgroupAvcMotionEstimationChromaINTEL */,IR(0, 0),IR(1, 0),IR(111, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5817,IR(0, 0),IR(13739, 25)/* VariableLengthArrayINTEL */,IR(0, 0),IR(1, 0),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5821,IR(0, 0),IR(13764, 26)/* FunctionFloatControlINTEL */,IR(0, 0),IR(1, 0),IR(104, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5824,IR(0, 0),IR(13790, 27)/* FPGAMemoryAttributesALTERA */,IR(48, 1),IR(1, 0),IR(113, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5837,IR(0, 0),IR(13843, 20)/* FPFastMathModeINTEL */,IR(0, 0),IR(0, 1),IR(115, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5844,IR(0, 0),IR(13863, 33)/* ArbitraryPrecisionIntegersALTERA */,IR(49, 1),IR(1, 0),IR(116, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5845,IR(0, 0),IR(13928, 38)/* ArbitraryPrecisionFloatingPointALTERA */,IR(50, 1),IR(1, 0),IR(118, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5886,IR(0, 0),IR(14003, 30)/* UnstructuredLoopControlsINTEL */,IR(0, 0),IR(1, 0),IR(120, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5888,IR(0, 0),IR(14033, 23)/* FPGALoopControlsALTERA */,IR(51, 1),IR(1, 0),IR(121, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5892,IR(0, 0),IR(14078, 22)/* KernelAttributesINTEL */,IR(0, 0),IR(1, 0),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5897,IR(0, 0),IR(14100, 26)/* FPGAKernelAttributesINTEL */,IR(0, 0),IR(1, 0),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5898,IR(0, 0),IR(14126, 25)/* FPGAMemoryAccessesALTERA */,IR(52, 1),IR(1, 0),IR(124, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5904,IR(0, 0),IR(14175, 28)/* FPGAClusterAttributesALTERA */,IR(53, 1),IR(1, 0),IR(126, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5906,IR(0, 0),IR(14230, 15)/* LoopFuseALTERA */,IR(54, 1),IR(1, 0),IR(128, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5908,IR(0, 0),IR(14259, 21)/* FPGADSPControlALTERA */,IR(55, 1),IR(1, 0),IR(130, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5910,IR(0, 0),IR(14300, 26)/* MemoryAccessAliasingINTEL */,IR(0, 0),IR(1, 0),IR(132, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5916,IR(0, 0),IR(14326, 41)/* FPGAInvocationPipeliningAttributesALTERA */,IR(56, 1),IR(1, 0),IR(133, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5920,IR(0, 0),IR(14407, 25)/* FPGABufferLocationALTERA */,IR(57, 1),IR(1, 0),IR(135, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5922,IR(0, 0),IR(14456, 35)/* ArbitraryPrecisionFixedPointALTERA */,IR(58, 1),IR(1, 0),IR(137, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5935,IR(0, 0),IR(14525, 24)/* USMStorageClassesALTERA */,IR(59, 1),IR(1, 0),IR(139, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5939,IR(0, 0),IR(14572, 30)/* RuntimeAlignedAttributeALTERA */,IR(60, 1),IR(1, 0),IR(141, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5943,IR(0, 0),IR(14631, 14)/* IOPipesALTERA */,IR(61, 1),IR(1, 0),IR(143, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5945,IR(0, 0),IR(14658, 20)/* BlockingPipesALTERA */,IR(62, 1),IR(1, 0),IR(145, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {5948,IR(0, 0),IR(14697, 14)/* FPGARegALTERA */,IR(63, 1),IR(1, 0),IR(147, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6016,IR(0, 0),IR(14724, 19)/* DotProductInputAll */,IR(64, 1),IR(1, 0),IR(149, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6017,IR(0, 0),IR(14765, 22)/* DotProductInput4x8Bit */,IR(65, 1),IR(108, 1),IR(149, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6018,IR(0, 0),IR(14812, 28)/* DotProductInput4x8BitPacked */,IR(66, 1),IR(1, 0),IR(149, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6019,IR(0, 0),IR(14871, 11)/* DotProduct */,IR(67, 1),IR(1, 0),IR(149, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6020,IR(0, 0),IR(8976, 15)/* RayCullMaskKHR */,IR(0, 0),IR(1, 0),IR(32, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6022,IR(0, 0),IR(10179, 21)/* CooperativeMatrixKHR */,IR(0, 0),IR(1, 0),IR(150, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6024,IR(0, 0),IR(14896, 24)/* ReplicatedCompositesEXT */,IR(0, 0),IR(1, 0),IR(151, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6025,IR(0, 0),IR(14920, 16)/* BitInstructions */,IR(0, 0),IR(1, 0),IR(152, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6026,IR(0, 0),IR(14936, 25)/* GroupNonUniformRotateKHR */,IR(0, 0),IR(77, 1),IR(153, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6029,IR(0, 0),IR(14961, 15)/* FloatControls2 */,IR(0, 0),IR(1, 0),IR(154, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6030,IR(0, 0),IR(14976, 7)/* FMAKHR */,IR(0, 0),IR(1, 0),IR(155, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6032,IR(0, 0),IR(14983, 42)/* RayTracingOpacityMicromapExecutionModeKHR */,IR(0, 0),IR(3, 1),IR(156, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6033,IR(0, 0),IR(15025, 20)/* AtomicFloat32AddEXT */,IR(0, 0),IR(1, 0),IR(157, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6034,IR(0, 0),IR(15045, 20)/* AtomicFloat64AddEXT */,IR(0, 0),IR(1, 0),IR(157, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6089,IR(0, 0),IR(15065, 20)/* LongCompositesINTEL */,IR(0, 0),IR(1, 0),IR(158, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6094,IR(0, 0),IR(15085, 11)/* OptNoneEXT */,IR(68, 1),IR(1, 0),IR(159, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6095,IR(0, 0),IR(15109, 20)/* AtomicFloat16AddEXT */,IR(0, 0),IR(1, 0),IR(161, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6114,IR(0, 0),IR(15129, 21)/* DebugInfoModuleINTEL */,IR(0, 0),IR(1, 0),IR(162, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6115,IR(0, 0),IR(15150, 24)/* BFloat16ConversionINTEL */,IR(0, 0),IR(1, 0),IR(163, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6141,IR(0, 0),IR(15174, 18)/* SplitBarrierINTEL */,IR(0, 0),IR(1, 0),IR(164, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6144,IR(0, 0),IR(15192, 19)/* ArithmeticFenceEXT */,IR(0, 0),IR(1, 0),IR(165, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6150,IR(0, 0),IR(15211, 30)/* FPGAClusterAttributesV2ALTERA */,IR(69, 1),IR(109, 1),IR(126, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6161,IR(0, 0),IR(15270, 28)/* FPGAKernelAttributesv2INTEL */,IR(0, 0),IR(110, 1),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6162,IR(0, 0),IR(15298, 19)/* TaskSequenceALTERA */,IR(70, 1),IR(1, 0),IR(166, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6169,IR(0, 0),IR(15335, 16)/* FPMaxErrorINTEL */,IR(0, 0),IR(1, 0),IR(168, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6171,IR(0, 0),IR(15351, 25)/* FPGALatencyControlALTERA */,IR(71, 1),IR(1, 0),IR(169, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6174,IR(0, 0),IR(15400, 29)/* FPGAArgumentInterfacesALTERA */,IR(72, 1),IR(1, 0),IR(171, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6187,IR(0, 0),IR(15457, 30)/* GlobalVariableHostAccessINTEL */,IR(0, 0),IR(1, 0),IR(173, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6189,IR(0, 0),IR(15487, 36)/* GlobalVariableFPGADecorationsALTERA */,IR(73, 1),IR(1, 0),IR(174, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6220,IR(0, 0),IR(15558, 28)/* SubgroupBufferPrefetchINTEL */,IR(0, 0),IR(1, 0),IR(176, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6228,IR(0, 0),IR(15586, 23)/* Subgroup2DBlockIOINTEL */,IR(0, 0),IR(1, 0),IR(177, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6229,IR(0, 0),IR(15609, 30)/* Subgroup2DBlockTransformINTEL */,IR(0, 0),IR(111, 1),IR(177, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6230,IR(0, 0),IR(15639, 30)/* Subgroup2DBlockTransposeINTEL */,IR(0, 0),IR(111, 1),IR(177, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6236,IR(0, 0),IR(15669, 38)/* SubgroupMatrixMultiplyAccumulateINTEL */,IR(0, 0),IR(1, 0),IR(178, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6241,IR(0, 0),IR(15707, 28)/* TernaryBitwiseFunctionINTEL */,IR(0, 0),IR(1, 0),IR(179, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6243,IR(0, 0),IR(15735, 32)/* UntypedVariableLengthArrayINTEL */,IR(0, 0),IR(112, 2),IR(112, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6245,IR(0, 0),IR(15767, 21)/* SpecConditionalINTEL */,IR(0, 0),IR(1, 0),IR(180, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6246,IR(0, 0),IR(15788, 22)/* FunctionVariantsINTEL */,IR(0, 0),IR(114, 1),IR(180, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6257,IR(0, 0),IR(15810, 18)/* PredicatedIOINTEL */,IR(0, 0),IR(1, 0),IR(181, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6265,IR(0, 0),IR(15828, 23)/* RoundedDivideSqrtINTEL */,IR(0, 0),IR(1, 0),IR(182, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6400,IR(0, 0),IR(15851, 26)/* GroupUniformArithmeticKHR */,IR(0, 0),IR(1, 0),IR(183, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6425,IR(0, 0),IR(15877, 27)/* TensorFloat32RoundingINTEL */,IR(0, 0),IR(1, 0),IR(184, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6427,IR(0, 0),IR(15904, 25)/* MaskedGatherScatterINTEL */,IR(0, 0),IR(1, 0),IR(185, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6441,IR(0, 0),IR(15929, 19)/* CacheControlsINTEL */,IR(0, 0),IR(1, 0),IR(186, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6460,IR(0, 0),IR(15948, 20)/* RegisterLimitsINTEL */,IR(0, 0),IR(1, 0),IR(187, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6528,IR(0, 0),IR(15968, 20)/* BindlessImagesINTEL */,IR(0, 0),IR(1, 0),IR(188, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6912,IR(0, 0),IR(15988, 33)/* DotProductFloat16AccFloat32VALVE */,IR(0, 0),IR(115, 1),IR(189, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6913,IR(0, 0),IR(16021, 33)/* DotProductFloat16AccFloat16VALVE */,IR(0, 0),IR(115, 1),IR(189, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6914,IR(0, 0),IR(16054, 27)/* DotProductBFloat16AccVALVE */,IR(0, 0),IR(90, 1),IR(189, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {6915,IR(0, 0),IR(16081, 32)/* DotProductFloat8AccFloat32VALVE */,IR(0, 0),IR(116, 1),IR(189, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_CAPABILITY
  {0,IR(0, 0),IR(16113, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(16125, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(16133, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {3,IR(0, 0),IR(16141, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(16147, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(16154, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(16165, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(16174, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(16187, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(16193, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(16203, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(16209, 15)/* ImportedModule */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {1,IR(0, 0),IR(16224, 20)/* ImportedDeclaration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(16249, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(16265, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(16279, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(16292, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(16304, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(16321, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(16333, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(16348, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(16361, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(16376, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(16394, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(16411, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(16432, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(16452, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(16472, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {16384,IR(0, 0),IR(16488, 16)/* FlagIsEnumClass */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {32768,IR(0, 0),IR(16504, 20)/* FlagTypePassByValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {65536,IR(0, 0),IR(16524, 24)/* FlagTypePassByReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(16548, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {1,IR(0, 0),IR(16554, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {2,IR(0, 0),IR(16559, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {3,IR(0, 1),IR(16598, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {4,IR(1, 2),IR(16609, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {5,IR(0, 0),IR(16618, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {6,IR(0, 0),IR(16623, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {7,IR(0, 0),IR(16630, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {8,IR(0, 1),IR(16641, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {9,IR(1, 2),IR(16648, 9)/* Fragment */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {0,IR(0, 0),IR(16657, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(16667, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(16680, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {3,IR(0, 0),IR(16693, 11)/* AtomicType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(16704, 10)/* Float16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1,IR(0, 0),IR(16714, 10)/* Float32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {2,IR(0, 0),IR(16724, 10)/* Float64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {3,IR(0, 0),IR(16734, 13)/* SignedInt8NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {4,IR(0, 0),IR(16747, 14)/* SignedInt16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {5,IR(0, 0),IR(16761, 14)/* SignedInt32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {6,IR(0, 0),IR(16775, 14)/* SignedInt64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {7,IR(0, 0),IR(16789, 15)/* UnsignedInt8NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {8,IR(0, 0),IR(16804, 16)/* UnsignedInt16NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {9,IR(0, 0),IR(16820, 16)/* UnsignedInt32NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {10,IR(0, 0),IR(16836, 16)/* UnsignedInt64NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491000,IR(0, 0),IR(16852, 19)/* SignedInt8PackedNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491001,IR(0, 0),IR(16871, 21)/* UnsignedInt8PackedNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491002,IR(0, 0),IR(16892, 12)/* FloatE4M3NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {1000491003,IR(0, 0),IR(16904, 12)/* FloatE5M2NV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COMPONENT_TYPE
  {0,IR(0, 0),IR(16916, 12)/* RowMajorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {1,IR(0, 0),IR(16928, 15)/* ColumnMajorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {4202,IR(0, 0),IR(16943, 25)/* RowBlockedInterleavedARM */,IR(0, 0),IR(117, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {4203,IR(0, 0),IR(16968, 28)/* ColumnBlockedInterleavedARM */,IR(0, 0),IR(117, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {0,IR(0, 0),IR(16996, 8)/* NoneKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {1,IR(0, 0),IR(17004, 27)/* MatrixASignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {2,IR(0, 0),IR(17031, 27)/* MatrixBSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {4,IR(0, 0),IR(17058, 27)/* MatrixCSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {8,IR(0, 0),IR(17085, 32)/* MatrixResultSignedComponentsKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {16,IR(0, 0),IR(17117, 26)/* SaturatingAccumulationKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {1,IR(0, 0),IR(17143, 4)/* Row */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {2,IR(0, 0),IR(17147, 7)/* Column */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {4,IR(0, 0),IR(17154, 4)/* 2x2 */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {0,IR(0, 0),IR(17158, 11)/* MatrixAKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {1,IR(0, 0),IR(17169, 11)/* MatrixBKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {2,IR(0, 0),IR(17180, 21)/* MatrixAccumulatorKHR */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {0,IR(0, 0),IR(17201, 11)/* RowMajorNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {1,IR(0, 0),IR(17212, 14)/* ColumnMajorNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {2,IR(0, 0),IR(17226, 21)/* InferencingOptimalNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {3,IR(0, 0),IR(17247, 18)/* TrainingOptimalNV */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {0,IR(0, 0),IR(16113, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(16125, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(16133, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(16141, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(16147, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(16154, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(16165, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {8,IR(0, 0),IR(16174, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(16187, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(16193, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(16203, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(16249, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(16265, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(16279, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(16292, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(16304, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(16321, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(16333, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(16348, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(16361, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(16376, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(16394, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(16411, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(16432, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(16452, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(16472, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(16548, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {1,IR(0, 0),IR(16554, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {2,IR(0, 0),IR(16559, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {3,IR(0, 1),IR(16598, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {4,IR(1, 2),IR(16609, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {5,IR(0, 0),IR(16618, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {6,IR(0, 0),IR(16623, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {7,IR(0, 0),IR(16630, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {8,IR(0, 1),IR(16641, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_OPERATION
  {0,IR(0, 0),IR(16657, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(16667, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(16680, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(17265, 17)/* RelaxedPrecision */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {1,IR(0, 1),IR(17282, 7)/* SpecId */,IR(0, 0),IR(118, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {2,IR(0, 0),IR(17289, 6)/* Block */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {3,IR(0, 0),IR(17295, 12)/* BufferBlock */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),SPV_SPIRV_VERSION_WORD(1,3)}, // SPV_OPERAND_TYPE_DECORATION
  {4,IR(0, 0),IR(17307, 9)/* RowMajor */,IR(0, 0),IR(67, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5,IR(0, 0),IR(17316, 9)/* ColMajor */,IR(0, 0),IR(67, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6,IR(0, 1),IR(17325, 12)/* ArrayStride */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {7,IR(0, 1),IR(17337, 13)/* MatrixStride */,IR(0, 0),IR(67, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {8,IR(0, 0),IR(17350, 11)/* GLSLShared */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {9,IR(0, 0),IR(17361, 11)/* GLSLPacked */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {10,IR(0, 0),IR(17372, 8)/* CPacked */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {11,IR(3, 1),IR(17406, 8)/* BuiltIn */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {13,IR(0, 0),IR(17414, 14)/* NoPerspective */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {14,IR(0, 0),IR(17428, 5)/* Flat */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {15,IR(0, 0),IR(17433, 6)/* Patch */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {16,IR(0, 0),IR(17439, 9)/* Centroid */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {17,IR(0, 0),IR(17448, 7)/* Sample */,IR(0, 0),IR(25, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {18,IR(0, 0),IR(17455, 10)/* Invariant */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {19,IR(0, 0),IR(17465, 9)/* Restrict */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {20,IR(0, 0),IR(17474, 8)/* Aliased */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {21,IR(0, 0),IR(17482, 9)/* Volatile */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {22,IR(0, 0),IR(17491, 9)/* Constant */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {23,IR(0, 0),IR(17500, 9)/* Coherent */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {24,IR(0, 0),IR(17509, 12)/* NonWritable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {25,IR(0, 0),IR(17521, 12)/* NonReadable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {26,IR(0, 0),IR(17533, 8)/* Uniform */,IR(0, 0),IR(120, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {27,IR(4, 1),IR(17567, 10)/* UniformId */,IR(0, 0),IR(120, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {28,IR(0, 0),IR(17577, 20)/* SaturatedConversion */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {29,IR(0, 1),IR(17597, 7)/* Stream */,IR(0, 0),IR(122, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {30,IR(0, 1),IR(17604, 9)/* Location */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {31,IR(0, 1),IR(17613, 10)/* Component */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {32,IR(0, 1),IR(17623, 6)/* Index */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {33,IR(0, 1),IR(17629, 8)/* Binding */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {34,IR(0, 1),IR(17637, 14)/* DescriptorSet */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {35,IR(0, 1),IR(17651, 7)/* Offset */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {36,IR(0, 1),IR(17658, 10)/* XfbBuffer */,IR(0, 0),IR(123, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {37,IR(0, 1),IR(17668, 10)/* XfbStride */,IR(0, 0),IR(123, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {38,IR(5, 1),IR(17724, 14)/* FuncParamAttr */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {39,IR(6, 1),IR(17772, 15)/* FPRoundingMode */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {40,IR(7, 1),IR(17822, 15)/* FPFastMathMode */,IR(0, 0),IR(124, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {41,IR(8, 2),IR(17899, 18)/* LinkageAttributes */,IR(0, 0),IR(94, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {42,IR(0, 0),IR(17917, 14)/* NoContraction */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {43,IR(0, 1),IR(17931, 21)/* InputAttachmentIndex */,IR(0, 0),IR(98, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {44,IR(0, 1),IR(17952, 10)/* Alignment */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {45,IR(0, 1),IR(17962, 14)/* MaxByteOffset */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {46,IR(10, 1),IR(17996, 12)/* AlignmentId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {47,IR(10, 1),IR(18008, 16)/* MaxByteOffsetId */,IR(0, 0),IR(1, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4216,IR(0, 0),IR(18024, 44)/* SaturatedToLargestFloat8NormalConversionEXT */,IR(0, 0),IR(116, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4469,IR(0, 0),IR(18068, 13)/* NoSignedWrap */,IR(0, 0),IR(1, 0),IR(190, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4470,IR(0, 0),IR(18081, 15)/* NoUnsignedWrap */,IR(0, 0),IR(1, 0),IR(190, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4487,IR(0, 0),IR(18096, 18)/* WeightTextureQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4488,IR(0, 0),IR(18114, 22)/* BlockMatchTextureQCOM */,IR(0, 0),IR(1, 0),IR(52, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4499,IR(0, 0),IR(18136, 22)/* BlockMatchSamplerQCOM */,IR(0, 0),IR(1, 0),IR(55, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {4999,IR(0, 0),IR(18158, 18)/* ExplicitInterpAMD */,IR(0, 0),IR(1, 0),IR(10, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5019,IR(10, 1),IR(18176, 32)/* NodeSharesPayloadLimitsWithAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5020,IR(10, 1),IR(18208, 20)/* NodeMaxPayloadsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5078,IR(0, 0),IR(18228, 23)/* TrackFinishWritingAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5091,IR(10, 1),IR(18251, 20)/* PayloadNodeNameAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5098,IR(10, 1),IR(18271, 25)/* PayloadNodeBaseIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5099,IR(0, 0),IR(18296, 27)/* PayloadNodeSparseArrayAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5100,IR(10, 1),IR(18323, 25)/* PayloadNodeArraySizeAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5105,IR(0, 0),IR(18348, 28)/* PayloadDispatchIndirectAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5124,IR(10, 1),IR(18376, 17)/* ArrayStrideIdEXT */,IR(0, 0),IR(44, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5125,IR(10, 1),IR(18393, 12)/* OffsetIdEXT */,IR(0, 0),IR(44, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5145,IR(0, 0),IR(18405, 14)/* UTFEncodedKHR */,IR(0, 0),IR(126, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5248,IR(0, 0),IR(18419, 19)/* OverrideCoverageNV */,IR(0, 0),IR(127, 1),IR(71, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5250,IR(0, 0),IR(18438, 14)/* PassthroughNV */,IR(0, 0),IR(128, 1),IR(72, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5252,IR(0, 0),IR(18452, 19)/* ViewportRelativeNV */,IR(0, 0),IR(97, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5256,IR(0, 1),IR(18471, 28)/* SecondaryViewportRelativeNV */,IR(0, 0),IR(47, 1),IR(14, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5271,IR(0, 0),IR(18499, 16)/* PerPrimitiveEXT */,IR(74, 1),IR(129, 2),IR(191, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5272,IR(0, 0),IR(18530, 10)/* PerViewNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5273,IR(0, 0),IR(18540, 10)/* PerTaskNV */,IR(0, 0),IR(51, 1),IR(18, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5285,IR(0, 0),IR(18550, 13)/* PerVertexKHR */,IR(75, 1),IR(52, 1),IR(19, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5300,IR(0, 0),IR(18575, 11)/* NonUniform */,IR(76, 1),IR(100, 1),IR(82, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5355,IR(0, 0),IR(18600, 16)/* RestrictPointer */,IR(77, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5356,IR(0, 0),IR(18635, 15)/* AliasedPointer */,IR(78, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5358,IR(0, 1),IR(18668, 15)/* MemberOffsetNV */,IR(0, 0),IR(131, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5386,IR(0, 0),IR(18683, 30)/* HitObjectShaderRecordBufferNV */,IR(0, 0),IR(132, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5389,IR(0, 0),IR(18713, 31)/* HitObjectShaderRecordBufferEXT */,IR(0, 0),IR(133, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5397,IR(0, 1),IR(18744, 7)/* BankNV */,IR(0, 0),IR(131, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5398,IR(0, 0),IR(18751, 18)/* BindlessSamplerNV */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5399,IR(0, 0),IR(18769, 16)/* BindlessImageNV */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5400,IR(0, 0),IR(18785, 15)/* BoundSamplerNV */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5401,IR(0, 0),IR(18800, 13)/* BoundImageNV */,IR(0, 0),IR(134, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5599,IR(0, 1),IR(18813, 14)/* SIMTCallINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5602,IR(0, 0),IR(18827, 26)/* ReferencedIndirectlyINTEL */,IR(0, 0),IR(136, 1),IR(106, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5607,IR(11, 1),IR(18853, 13)/* ClobberINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5608,IR(0, 0),IR(18866, 17)/* SideEffectsINTEL */,IR(0, 0),IR(137, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5624,IR(0, 0),IR(18883, 27)/* VectorComputeVariableINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5625,IR(0, 1),IR(18910, 21)/* FuncParamIOKindINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5626,IR(0, 0),IR(18931, 27)/* VectorComputeFunctionINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5627,IR(0, 0),IR(18958, 15)/* StackCallINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5628,IR(0, 1),IR(18973, 26)/* GlobalVariableOffsetINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5634,IR(10, 1),IR(18999, 14)/* CounterBuffer */,IR(79, 1),IR(1, 0),IR(193, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5635,IR(11, 1),IR(19037, 13)/* UserSemantic */,IR(80, 1),IR(1, 0),IR(193, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5636,IR(11, 1),IR(19069, 15)/* UserTypeGOOGLE */,IR(0, 0),IR(1, 0),IR(194, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5822,IR(12, 2),IR(19084, 26)/* FunctionRoundingModeINTEL */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5823,IR(14, 2),IR(19141, 24)/* FunctionDenormModeINTEL */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5825,IR(0, 0),IR(19165, 15)/* RegisterALTERA */,IR(81, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5826,IR(11, 1),IR(19194, 13)/* MemoryALTERA */,IR(82, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5827,IR(0, 1),IR(19219, 15)/* NumbanksALTERA */,IR(83, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5828,IR(0, 1),IR(19248, 16)/* BankwidthALTERA */,IR(84, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5829,IR(0, 1),IR(19279, 23)/* MaxPrivateCopiesALTERA */,IR(85, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5830,IR(0, 0),IR(19324, 17)/* SinglepumpALTERA */,IR(86, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5831,IR(0, 0),IR(19357, 17)/* DoublepumpALTERA */,IR(87, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5832,IR(0, 1),IR(19390, 20)/* MaxReplicatesALTERA */,IR(88, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5833,IR(0, 0),IR(19429, 21)/* SimpleDualPortALTERA */,IR(89, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5834,IR(16, 2),IR(19470, 12)/* MergeALTERA */,IR(90, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5835,IR(18, 1),IR(19535, 15)/* BankBitsALTERA */,IR(91, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5836,IR(0, 1),IR(19564, 21)/* ForcePow2DepthALTERA */,IR(92, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5883,IR(0, 1),IR(19605, 17)/* StridesizeALTERA */,IR(93, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5884,IR(0, 1),IR(19638, 15)/* WordsizeALTERA */,IR(94, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5885,IR(0, 0),IR(19667, 19)/* TrueDualPortALTERA */,IR(95, 1),IR(139, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5899,IR(0, 0),IR(19704, 20)/* BurstCoalesceALTERA */,IR(96, 1),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5900,IR(0, 1),IR(19743, 16)/* CacheSizeALTERA */,IR(97, 1),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5901,IR(0, 0),IR(19774, 29)/* DontStaticallyCoalesceALTERA */,IR(98, 1),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5902,IR(0, 1),IR(19831, 15)/* PrefetchALTERA */,IR(99, 1),IR(140, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5905,IR(0, 0),IR(19860, 18)/* StallEnableALTERA */,IR(100, 1),IR(109, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5907,IR(0, 0),IR(19895, 26)/* FuseLoopsInFunctionALTERA */,IR(101, 1),IR(141, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5909,IR(1, 2),IR(19946, 20)/* MathOpDSPModeALTERA */,IR(102, 1),IR(142, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5914,IR(10, 1),IR(19985, 16)/* AliasScopeINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5915,IR(10, 1),IR(20001, 13)/* NoAliasINTEL */,IR(0, 0),IR(143, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5917,IR(0, 1),IR(20014, 25)/* InitiationIntervalALTERA */,IR(103, 1),IR(144, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5918,IR(0, 1),IR(20063, 21)/* MaxConcurrencyALTERA */,IR(104, 1),IR(144, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5919,IR(0, 1),IR(20104, 21)/* PipelineEnableALTERA */,IR(105, 1),IR(144, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5921,IR(0, 1),IR(20145, 21)/* BufferLocationALTERA */,IR(106, 1),IR(145, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {5944,IR(0, 1),IR(20186, 20)/* IOPipeStorageALTERA */,IR(107, 1),IR(146, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6080,IR(19, 2),IR(20259, 31)/* FunctionFloatingPointModeINTEL */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6085,IR(0, 0),IR(20290, 25)/* SingleElementVectorINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6087,IR(0, 0),IR(20315, 35)/* VectorComputeCallableFunctionINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6140,IR(0, 0),IR(20350, 18)/* MediaBlockIOINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6151,IR(0, 0),IR(20368, 16)/* StallFreeALTERA */,IR(108, 1),IR(147, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6170,IR(21, 1),IR(20430, 26)/* FPMaxErrorDecorationINTEL */,IR(0, 0),IR(148, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6172,IR(0, 1),IR(20456, 26)/* LatencyControlLabelALTERA */,IR(109, 1),IR(149, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6173,IR(22, 3),IR(20507, 31)/* LatencyControlConstraintALTERA */,IR(110, 1),IR(149, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6175,IR(0, 0),IR(20568, 28)/* ConduitKernelArgumentALTERA */,IR(111, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6176,IR(0, 0),IR(20623, 32)/* RegisterMapKernelArgumentALTERA */,IR(112, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6177,IR(0, 1),IR(20686, 34)/* MMHostInterfaceAddressWidthALTERA */,IR(113, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6178,IR(0, 1),IR(20753, 31)/* MMHostInterfaceDataWidthALTERA */,IR(114, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6179,IR(0, 1),IR(20814, 29)/* MMHostInterfaceLatencyALTERA */,IR(115, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6180,IR(25, 1),IR(20905, 35)/* MMHostInterfaceReadWriteModeALTERA */,IR(116, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6181,IR(0, 1),IR(20974, 30)/* MMHostInterfaceMaxBurstALTERA */,IR(117, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6182,IR(0, 1),IR(21033, 33)/* MMHostInterfaceWaitRequestALTERA */,IR(118, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6183,IR(0, 0),IR(21098, 27)/* StableKernelArgumentALTERA */,IR(119, 1),IR(150, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6188,IR(26, 2),IR(21190, 16)/* HostAccessINTEL */,IR(0, 0),IR(151, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6190,IR(28, 1),IR(21253, 15)/* InitModeALTERA */,IR(120, 1),IR(152, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6191,IR(0, 1),IR(21282, 29)/* ImplementInRegisterMapALTERA */,IR(121, 1),IR(152, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6247,IR(10, 1),IR(21339, 17)/* ConditionalINTEL */,IR(0, 0),IR(114, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6442,IR(29, 2),IR(21392, 22)/* CacheControlLoadINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {6443,IR(31, 2),IR(21451, 23)/* CacheControlStoreINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DECORATION
  {0,IR(0, 0),IR(21474, 3)/* 1D */,IR(0, 0),IR(73, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {1,IR(0, 0),IR(21477, 3)/* 2D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {2,IR(0, 0),IR(21480, 3)/* 3D */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {3,IR(0, 0),IR(21483, 5)/* Cube */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {4,IR(0, 0),IR(21488, 5)/* Rect */,IR(0, 0),IR(72, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {5,IR(0, 0),IR(21493, 7)/* Buffer */,IR(0, 0),IR(74, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {6,IR(0, 0),IR(21500, 12)/* SubpassData */,IR(0, 0),IR(98, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {4173,IR(0, 0),IR(21512, 17)/* TileImageDataEXT */,IR(0, 0),IR(154, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_DIMENSIONALITY
  {0,IR(0, 1),IR(21529, 12)/* Invocations */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {1,IR(0, 0),IR(21541, 13)/* SpacingEqual */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {2,IR(0, 0),IR(21554, 22)/* SpacingFractionalEven */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {3,IR(0, 0),IR(21576, 21)/* SpacingFractionalOdd */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4,IR(0, 0),IR(21597, 14)/* VertexOrderCw */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5,IR(0, 0),IR(21611, 15)/* VertexOrderCcw */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6,IR(0, 0),IR(21626, 19)/* PixelCenterInteger */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {7,IR(0, 0),IR(21645, 16)/* OriginUpperLeft */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {8,IR(0, 0),IR(21661, 16)/* OriginLowerLeft */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {9,IR(0, 0),IR(21677, 19)/* EarlyFragmentTests */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {10,IR(0, 0),IR(21696, 10)/* PointMode */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {11,IR(0, 0),IR(21706, 4)/* Xfb */,IR(0, 0),IR(123, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {12,IR(0, 0),IR(21710, 15)/* DepthReplacing */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {14,IR(0, 0),IR(21725, 13)/* DepthGreater */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {15,IR(0, 0),IR(21738, 10)/* DepthLess */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {16,IR(0, 0),IR(21748, 15)/* DepthUnchanged */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {17,IR(22, 3),IR(21763, 10)/* LocalSize */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {18,IR(22, 3),IR(21773, 14)/* LocalSizeHint */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {19,IR(0, 0),IR(21787, 12)/* InputPoints */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {20,IR(0, 0),IR(21799, 11)/* InputLines */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {21,IR(0, 0),IR(21810, 20)/* InputLinesAdjacency */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {22,IR(0, 0),IR(21830, 10)/* Triangles */,IR(0, 0),IR(12, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {23,IR(0, 0),IR(21840, 24)/* InputTrianglesAdjacency */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {24,IR(0, 0),IR(21864, 6)/* Quads */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {25,IR(0, 0),IR(21870, 9)/* Isolines */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {26,IR(0, 1),IR(21879, 15)/* OutputVertices */,IR(0, 0),IR(155, 4),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {27,IR(0, 0),IR(21894, 13)/* OutputPoints */,IR(0, 0),IR(159, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {28,IR(0, 0),IR(21907, 16)/* OutputLineStrip */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {29,IR(0, 0),IR(21923, 20)/* OutputTriangleStrip */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {30,IR(0, 1),IR(21943, 12)/* VecTypeHint */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {31,IR(0, 0),IR(21955, 15)/* ContractionOff */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {33,IR(0, 0),IR(21970, 12)/* Initializer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {34,IR(0, 0),IR(21982, 10)/* Finalizer */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {35,IR(0, 1),IR(6407, 13)/* SubgroupSize */,IR(0, 0),IR(162, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {36,IR(0, 1),IR(21992, 22)/* SubgroupsPerWorkgroup */,IR(0, 0),IR(162, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {37,IR(10, 1),IR(22014, 24)/* SubgroupsPerWorkgroupId */,IR(0, 0),IR(162, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {38,IR(33, 3),IR(22038, 12)/* LocalSizeId */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {39,IR(33, 3),IR(22050, 16)/* LocalSizeHintId */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,2),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4169,IR(0, 0),IR(22066, 34)/* NonCoherentColorAttachmentReadEXT */,IR(0, 0),IR(154, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4170,IR(0, 0),IR(22100, 34)/* NonCoherentDepthAttachmentReadEXT */,IR(0, 0),IR(163, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4171,IR(0, 0),IR(22134, 36)/* NonCoherentStencilAttachmentReadEXT */,IR(0, 0),IR(164, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4421,IR(0, 0),IR(22170, 30)/* SubgroupUniformControlFlowKHR */,IR(0, 0),IR(3, 1),IR(195, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4446,IR(0, 0),IR(22200, 18)/* PostDepthCoverage */,IR(0, 0),IR(165, 1),IR(45, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4459,IR(0, 1),IR(10655, 15)/* DenormPreserve */,IR(0, 0),IR(166, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4460,IR(0, 1),IR(10670, 18)/* DenormFlushToZero */,IR(0, 0),IR(167, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4461,IR(0, 1),IR(10688, 25)/* SignedZeroInfNanPreserve */,IR(0, 0),IR(168, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4462,IR(0, 1),IR(10713, 16)/* RoundingModeRTE */,IR(0, 0),IR(169, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4463,IR(0, 1),IR(10729, 16)/* RoundingModeRTZ */,IR(0, 0),IR(170, 1),IR(47, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4489,IR(0, 0),IR(22218, 34)/* NonCoherentTileAttachmentReadQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {4490,IR(22, 3),IR(22252, 20)/* TileShadingRateQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5017,IR(0, 0),IR(22272, 29)/* EarlyAndLateFragmentTestsAMD */,IR(0, 0),IR(3, 1),IR(196, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5027,IR(0, 0),IR(22301, 23)/* StencilRefReplacingEXT */,IR(0, 0),IR(42, 1),IR(11, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5069,IR(0, 0),IR(22324, 15)/* CoalescingAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5070,IR(10, 1),IR(22339, 15)/* IsApiEntryAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5071,IR(10, 1),IR(22354, 21)/* MaxNodeRecursionAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5072,IR(33, 3),IR(22375, 24)/* StaticNumWorkgroupsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5073,IR(10, 1),IR(7300, 16)/* ShaderIndexAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5077,IR(33, 3),IR(22399, 21)/* MaxNumWorkgroupsAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5079,IR(0, 0),IR(22420, 28)/* StencilRefUnchangedFrontAMD */,IR(0, 0),IR(42, 1),IR(197, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5080,IR(0, 0),IR(22448, 26)/* StencilRefGreaterFrontAMD */,IR(0, 0),IR(42, 1),IR(197, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5081,IR(0, 0),IR(22474, 23)/* StencilRefLessFrontAMD */,IR(0, 0),IR(42, 1),IR(197, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5082,IR(0, 0),IR(22497, 27)/* StencilRefUnchangedBackAMD */,IR(0, 0),IR(42, 1),IR(197, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5083,IR(0, 0),IR(22524, 25)/* StencilRefGreaterBackAMD */,IR(0, 0),IR(42, 1),IR(197, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5084,IR(0, 0),IR(22549, 22)/* StencilRefLessBackAMD */,IR(0, 0),IR(42, 1),IR(197, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5088,IR(0, 0),IR(22571, 19)/* QuadDerivativesKHR */,IR(0, 0),IR(171, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5089,IR(0, 0),IR(22590, 20)/* RequireFullQuadsKHR */,IR(0, 0),IR(171, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5102,IR(36, 2),IR(22610, 20)/* SharesInputWithAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5157,IR(0, 0),IR(22630, 20)/* ArithmeticPoisonKHR */,IR(0, 0),IR(172, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5269,IR(0, 0),IR(22650, 15)/* OutputLinesEXT */,IR(122, 1),IR(129, 2),IR(191, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5270,IR(0, 1),IR(22679, 20)/* OutputPrimitivesEXT */,IR(123, 1),IR(129, 2),IR(191, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5289,IR(0, 0),IR(22718, 24)/* DerivativeGroupQuadsKHR */,IR(124, 1),IR(173, 1),IR(78, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5290,IR(0, 0),IR(22765, 25)/* DerivativeGroupLinearKHR */,IR(125, 1),IR(174, 1),IR(78, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5298,IR(0, 0),IR(22814, 19)/* OutputTrianglesEXT */,IR(126, 1),IR(129, 2),IR(191, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5366,IR(0, 0),IR(22851, 25)/* PixelInterlockOrderedEXT */,IR(0, 0),IR(175, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5367,IR(0, 0),IR(22876, 27)/* PixelInterlockUnorderedEXT */,IR(0, 0),IR(175, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5368,IR(0, 0),IR(22903, 26)/* SampleInterlockOrderedEXT */,IR(0, 0),IR(176, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5369,IR(0, 0),IR(22929, 28)/* SampleInterlockUnorderedEXT */,IR(0, 0),IR(176, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5370,IR(0, 0),IR(22957, 31)/* ShadingRateInterlockOrderedEXT */,IR(0, 0),IR(177, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5371,IR(0, 0),IR(22988, 33)/* ShadingRateInterlockUnorderedEXT */,IR(0, 0),IR(177, 1),IR(86, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5427,IR(0, 0),IR(13046, 23)/* Shader64BitIndexingEXT */,IR(0, 0),IR(178, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5618,IR(0, 1),IR(23021, 27)/* SharedLocalMemorySizeINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5620,IR(0, 1),IR(23048, 21)/* RoundingModeRTPINTEL */,IR(0, 0),IR(179, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5621,IR(0, 1),IR(23069, 21)/* RoundingModeRTNINTEL */,IR(0, 0),IR(179, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5622,IR(0, 1),IR(23090, 26)/* FloatingPointModeALTINTEL */,IR(0, 0),IR(179, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5623,IR(0, 1),IR(23116, 27)/* FloatingPointModeIEEEINTEL */,IR(0, 0),IR(179, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5893,IR(22, 3),IR(23143, 22)/* MaxWorkgroupSizeINTEL */,IR(0, 0),IR(180, 1),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5894,IR(0, 1),IR(23165, 16)/* MaxWorkDimINTEL */,IR(0, 0),IR(180, 1),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5895,IR(0, 0),IR(23181, 20)/* NoGlobalOffsetINTEL */,IR(0, 0),IR(180, 1),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5896,IR(0, 1),IR(23201, 22)/* NumSIMDWorkitemsINTEL */,IR(0, 0),IR(110, 1),IR(123, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {5903,IR(0, 1),IR(23223, 28)/* SchedulerTargetFmaxMhzINTEL */,IR(0, 0),IR(110, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6023,IR(0, 0),IR(23251, 24)/* MaximallyReconvergesKHR */,IR(0, 0),IR(3, 1),IR(199, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6028,IR(36, 2),IR(23275, 18)/* FPFastMathDefault */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6031,IR(10, 1),IR(23293, 21)/* OpacityMicromapIdKHR */,IR(0, 0),IR(182, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6154,IR(0, 1),IR(23314, 24)/* StreamingInterfaceINTEL */,IR(0, 0),IR(110, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6160,IR(0, 1),IR(23338, 26)/* RegisterMapInterfaceINTEL */,IR(0, 0),IR(183, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6417,IR(0, 1),IR(23364, 23)/* NamedBarrierCountINTEL */,IR(0, 0),IR(135, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6461,IR(0, 1),IR(23387, 22)/* MaximumRegistersINTEL */,IR(0, 0),IR(184, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6462,IR(10, 1),IR(23409, 24)/* MaximumRegistersIdINTEL */,IR(0, 0),IR(184, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {6463,IR(38, 1),IR(23484, 27)/* NamedMaximumRegistersINTEL */,IR(0, 0),IR(184, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODE
  {0,IR(0, 0),IR(23511, 7)/* Vertex */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {1,IR(0, 0),IR(23518, 20)/* TessellationControl */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {2,IR(0, 0),IR(23538, 23)/* TessellationEvaluation */,IR(0, 0),IR(24, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {3,IR(0, 0),IR(5888, 9)/* Geometry */,IR(0, 0),IR(70, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {4,IR(0, 0),IR(16648, 9)/* Fragment */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5,IR(0, 0),IR(23561, 10)/* GLCompute */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {6,IR(0, 0),IR(5655, 7)/* Kernel */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5267,IR(0, 0),IR(23571, 7)/* TaskNV */,IR(0, 0),IR(51, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5268,IR(0, 0),IR(23578, 7)/* MeshNV */,IR(0, 0),IR(51, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5313,IR(0, 0),IR(23585, 17)/* RayGenerationKHR */,IR(127, 1),IR(55, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5314,IR(0, 0),IR(23618, 16)/* IntersectionKHR */,IR(128, 1),IR(55, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5315,IR(0, 0),IR(23649, 10)/* AnyHitKHR */,IR(129, 1),IR(55, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5316,IR(0, 0),IR(23668, 14)/* ClosestHitKHR */,IR(130, 1),IR(55, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5317,IR(0, 0),IR(23695, 8)/* MissKHR */,IR(131, 1),IR(55, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5318,IR(0, 0),IR(23710, 12)/* CallableKHR */,IR(132, 1),IR(55, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5364,IR(0, 0),IR(23733, 8)/* TaskEXT */,IR(0, 0),IR(54, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {5365,IR(0, 0),IR(23741, 8)/* MeshEXT */,IR(0, 0),IR(54, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_EXECUTION_MODEL
  {0,IR(0, 0),IR(23749, 9)/* Preserve */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPDENORM_MODE
  {1,IR(0, 0),IR(23758, 12)/* FlushToZero */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPDENORM_MODE
  {0,IR(0, 0),IR(23770, 12)/* BFloat16KHR */,IR(0, 0),IR(90, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPENCODING
  {4214,IR(0, 0),IR(23782, 14)/* Float8E4M3EXT */,IR(0, 0),IR(116, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPENCODING
  {4215,IR(0, 0),IR(23796, 14)/* Float8E5M2EXT */,IR(0, 0),IR(116, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPENCODING
  {0,IR(0, 0),IR(23810, 5)/* IEEE */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPOPERATION_MODE
  {1,IR(0, 0),IR(23815, 4)/* ALT */,IR(0, 0),IR(138, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FPOPERATION_MODE
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {1,IR(0, 0),IR(23819, 7)/* NotNaN */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {2,IR(0, 0),IR(23826, 7)/* NotInf */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {4,IR(0, 0),IR(23833, 4)/* NSZ */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {8,IR(0, 0),IR(23837, 11)/* AllowRecip */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {16,IR(0, 0),IR(23848, 5)/* Fast */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {65536,IR(0, 0),IR(23853, 14)/* AllowContract */,IR(133, 1),IR(185, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {131072,IR(0, 0),IR(23890, 13)/* AllowReassoc */,IR(134, 1),IR(185, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {262144,IR(0, 0),IR(23921, 15)/* AllowTransform */,IR(0, 0),IR(181, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {0,IR(0, 0),IR(23936, 4)/* RTE */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {1,IR(0, 0),IR(23940, 4)/* RTZ */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {2,IR(0, 0),IR(23944, 4)/* RTP */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {3,IR(0, 0),IR(23948, 4)/* RTN */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {1,IR(0, 0),IR(23952, 16)/* Vertical2Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {2,IR(0, 0),IR(23968, 16)/* Vertical4Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {4,IR(0, 0),IR(23984, 18)/* Horizontal2Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {8,IR(0, 0),IR(24002, 18)/* Horizontal4Pixels */,IR(0, 0),IR(38, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {1,IR(0, 0),IR(24020, 7)/* Inline */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {2,IR(0, 0),IR(24027, 11)/* DontInline */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {4,IR(0, 0),IR(24038, 5)/* Pure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {8,IR(0, 0),IR(24043, 6)/* Const */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {65536,IR(0, 0),IR(15085, 11)/* OptNoneEXT */,IR(68, 1),IR(187, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {0,IR(0, 0),IR(24049, 5)/* Zext */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {1,IR(0, 0),IR(24054, 5)/* Sext */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {2,IR(0, 0),IR(24059, 6)/* ByVal */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {3,IR(0, 0),IR(24065, 5)/* Sret */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {4,IR(0, 0),IR(24070, 8)/* NoAlias */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {5,IR(0, 0),IR(24078, 10)/* NoCapture */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {6,IR(0, 0),IR(24088, 8)/* NoWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {7,IR(0, 0),IR(24096, 12)/* NoReadWrite */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {5940,IR(0, 0),IR(24108, 21)/* RuntimeAlignedALTERA */,IR(135, 1),IR(188, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {0,IR(0, 0),IR(24149, 7)/* Reduce */,IR(0, 0),IR(189, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {1,IR(0, 0),IR(24156, 14)/* InclusiveScan */,IR(0, 0),IR(189, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {2,IR(0, 0),IR(24170, 14)/* ExclusiveScan */,IR(0, 0),IR(189, 3),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {3,IR(0, 0),IR(24184, 16)/* ClusteredReduce */,IR(0, 0),IR(192, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {6,IR(0, 0),IR(24200, 21)/* PartitionedReduceEXT */,IR(136, 1),IR(193, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {7,IR(0, 0),IR(24241, 28)/* PartitionedInclusiveScanEXT */,IR(137, 1),IR(193, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {8,IR(0, 0),IR(24296, 28)/* PartitionedExclusiveScanEXT */,IR(138, 1),IR(193, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_GROUP_OPERATION
  {0,IR(0, 0),IR(24351, 10)/* NoneINTEL */,IR(0, 0),IR(151, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {1,IR(0, 0),IR(24361, 10)/* ReadINTEL */,IR(0, 0),IR(151, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {2,IR(0, 0),IR(24371, 11)/* WriteINTEL */,IR(0, 0),IR(151, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {3,IR(0, 0),IR(24382, 15)/* ReadWriteINTEL */,IR(0, 0),IR(151, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {1,IR(10, 1),IR(24397, 5)/* Bias */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {2,IR(10, 1),IR(24402, 4)/* Lod */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {4,IR(36, 2),IR(24406, 5)/* Grad */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {8,IR(10, 1),IR(24411, 12)/* ConstOffset */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {16,IR(10, 1),IR(17651, 7)/* Offset */,IR(0, 0),IR(194, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {32,IR(10, 1),IR(24423, 13)/* ConstOffsets */,IR(0, 0),IR(194, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {64,IR(10, 1),IR(17448, 7)/* Sample */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {128,IR(10, 1),IR(9488, 7)/* MinLod */,IR(0, 0),IR(195, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {256,IR(4, 1),IR(24436, 19)/* MakeTexelAvailable */,IR(139, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {512,IR(4, 1),IR(24477, 17)/* MakeTexelVisible */,IR(140, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {1024,IR(0, 0),IR(24514, 16)/* NonPrivateTexel */,IR(141, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {2048,IR(0, 0),IR(24549, 14)/* VolatileTexel */,IR(142, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {4096,IR(0, 0),IR(24580, 11)/* SignExtend */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {8192,IR(0, 0),IR(24591, 11)/* ZeroExtend */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {16384,IR(0, 0),IR(24602, 12)/* Nontemporal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {65536,IR(10, 1),IR(24614, 8)/* Offsets */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE
  {0,IR(0, 0),IR(24622, 10)/* SnormInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {1,IR(0, 0),IR(24632, 11)/* SnormInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {2,IR(0, 0),IR(24643, 10)/* UnormInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {3,IR(0, 0),IR(24653, 11)/* UnormInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {4,IR(0, 0),IR(24664, 14)/* UnormShort565 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {5,IR(0, 0),IR(24678, 14)/* UnormShort555 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {6,IR(0, 0),IR(24692, 15)/* UnormInt101010 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {7,IR(0, 0),IR(24707, 11)/* SignedInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {8,IR(0, 0),IR(24718, 12)/* SignedInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {9,IR(0, 0),IR(24730, 12)/* SignedInt32 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {10,IR(0, 0),IR(24742, 13)/* UnsignedInt8 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {11,IR(0, 0),IR(24755, 14)/* UnsignedInt16 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {12,IR(0, 0),IR(24769, 14)/* UnsignedInt32 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {13,IR(0, 0),IR(24783, 10)/* HalfFloat */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {14,IR(0, 0),IR(16141, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {15,IR(0, 0),IR(24793, 11)/* UnormInt24 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {16,IR(0, 0),IR(24804, 17)/* UnormInt101010_2 */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {17,IR(0, 0),IR(24821, 16)/* UnormInt10X6EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {19,IR(0, 0),IR(24837, 20)/* UnsignedIntRaw10EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {20,IR(0, 0),IR(24857, 20)/* UnsignedIntRaw12EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {21,IR(0, 0),IR(24877, 20)/* UnormInt2_101010EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {22,IR(0, 0),IR(24897, 19)/* UnsignedInt10X6EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {23,IR(0, 0),IR(24916, 19)/* UnsignedInt12X4EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {24,IR(0, 0),IR(24935, 19)/* UnsignedInt14X2EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {25,IR(0, 0),IR(24954, 16)/* UnormInt12X4EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {26,IR(0, 0),IR(24970, 16)/* UnormInt14X2EXT */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {0,IR(0, 0),IR(24986, 2)/* R */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {1,IR(0, 0),IR(24988, 2)/* A */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {2,IR(0, 0),IR(24990, 3)/* RG */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {3,IR(0, 0),IR(24993, 3)/* RA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {4,IR(0, 0),IR(24996, 4)/* RGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {5,IR(0, 0),IR(25000, 5)/* RGBA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {6,IR(0, 0),IR(25005, 5)/* BGRA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {7,IR(0, 0),IR(25010, 5)/* ARGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {8,IR(0, 0),IR(25015, 10)/* Intensity */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {9,IR(0, 0),IR(25025, 10)/* Luminance */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {10,IR(0, 0),IR(25035, 3)/* Rx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {11,IR(0, 0),IR(25038, 4)/* RGx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {12,IR(0, 0),IR(25042, 5)/* RGBx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {13,IR(0, 0),IR(25047, 6)/* Depth */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {14,IR(0, 0),IR(25053, 13)/* DepthStencil */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {15,IR(0, 0),IR(25066, 5)/* sRGB */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {16,IR(0, 0),IR(25071, 6)/* sRGBx */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {17,IR(0, 0),IR(25077, 6)/* sRGBA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {18,IR(0, 0),IR(25083, 6)/* sBGRA */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {19,IR(0, 0),IR(25089, 5)/* ABGR */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {0,IR(0, 0),IR(25094, 28)/* InitOnDeviceReprogramALTERA */,IR(143, 1),IR(152, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {1,IR(0, 0),IR(25149, 24)/* InitOnDeviceResetALTERA */,IR(144, 1),IR(152, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {0,IR(0, 0),IR(25196, 7)/* NoWait */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {1,IR(0, 0),IR(25203, 11)/* WaitKernel */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {2,IR(0, 0),IR(25214, 14)/* WaitWorkGroup */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {1,IR(0, 0),IR(25228, 12)/* CmdExecTime */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {1,IR(0, 0),IR(25240, 13)/* MayUsePrintf */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {0,IR(0, 0),IR(25253, 7)/* Export */,IR(0, 0),IR(94, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {1,IR(0, 0),IR(25260, 7)/* Import */,IR(0, 0),IR(94, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {2,IR(0, 0),IR(25267, 12)/* LinkOnceODR */,IR(0, 0),IR(94, 1),IR(200, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {3,IR(0, 0),IR(25279, 8)/* WeakAMD */,IR(0, 0),IR(197, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LINKAGE_TYPE
  {0,IR(0, 0),IR(25287, 14)/* UncachedINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {1,IR(0, 0),IR(25301, 12)/* CachedINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {2,IR(0, 0),IR(25313, 15)/* StreamingINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {3,IR(0, 0),IR(25328, 25)/* InvalidateAfterReadINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {4,IR(0, 0),IR(25353, 17)/* ConstCachedINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {1,IR(0, 0),IR(25370, 7)/* Unroll */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {2,IR(0, 0),IR(25377, 11)/* DontUnroll */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {4,IR(0, 0),IR(25388, 19)/* DependencyInfinite */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {8,IR(0, 1),IR(25407, 17)/* DependencyLength */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,1),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {16,IR(0, 1),IR(25424, 14)/* MinIterations */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {32,IR(0, 1),IR(25438, 14)/* MaxIterations */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {64,IR(0, 1),IR(25452, 18)/* IterationMultiple */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {128,IR(0, 1),IR(25470, 10)/* PeelCount */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {256,IR(0, 1),IR(25480, 13)/* PartialCount */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {65536,IR(0, 1),IR(20014, 25)/* InitiationIntervalALTERA */,IR(103, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {131072,IR(0, 1),IR(20063, 21)/* MaxConcurrencyALTERA */,IR(104, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {262144,IR(0, 1),IR(25493, 22)/* DependencyArrayALTERA */,IR(145, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {524288,IR(0, 1),IR(20104, 21)/* PipelineEnableALTERA */,IR(105, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {1048576,IR(0, 1),IR(25536, 19)/* LoopCoalesceALTERA */,IR(146, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {2097152,IR(0, 1),IR(25573, 22)/* MaxInterleavingALTERA */,IR(147, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {4194304,IR(0, 1),IR(25616, 27)/* SpeculatedIterationsALTERA */,IR(148, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {8388608,IR(0, 0),IR(25669, 15)/* NoFusionALTERA */,IR(149, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {16777216,IR(0, 1),IR(25698, 16)/* LoopCountALTERA */,IR(150, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {33554432,IR(0, 1),IR(25729, 27)/* MaxReinvocationDelayALTERA */,IR(151, 1),IR(198, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_LOOP_CONTROL
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {1,IR(0, 0),IR(25782, 29)/* MatrixASignedComponentsINTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {2,IR(0, 0),IR(25811, 29)/* MatrixBSignedComponentsINTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {4,IR(0, 0),IR(25840, 21)/* MatrixCBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {8,IR(0, 0),IR(25861, 26)/* MatrixResultBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {16,IR(0, 0),IR(25887, 23)/* MatrixAPackedInt8INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {32,IR(0, 0),IR(25910, 23)/* MatrixBPackedInt8INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {64,IR(0, 0),IR(25933, 23)/* MatrixAPackedInt4INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {128,IR(0, 0),IR(25956, 23)/* MatrixBPackedInt4INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {256,IR(0, 0),IR(25979, 17)/* MatrixATF32INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {512,IR(0, 0),IR(25996, 17)/* MatrixBTF32INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {1024,IR(0, 0),IR(26013, 26)/* MatrixAPackedFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {2048,IR(0, 0),IR(26039, 26)/* MatrixBPackedFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {4096,IR(0, 0),IR(26065, 27)/* MatrixAPackedBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {8192,IR(0, 0),IR(26092, 27)/* MatrixBPackedBFloat16INTEL */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {1,IR(0, 0),IR(17482, 9)/* Volatile */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {2,IR(0, 1),IR(26119, 8)/* Aligned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {4,IR(0, 0),IR(24602, 12)/* Nontemporal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {8,IR(4, 1),IR(26127, 21)/* MakePointerAvailable */,IR(152, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {16,IR(4, 1),IR(26172, 19)/* MakePointerVisible */,IR(153, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {32,IR(0, 0),IR(26213, 18)/* NonPrivatePointer */,IR(154, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {65536,IR(10, 1),IR(26252, 20)/* AliasScopeINTELMask */,IR(0, 0),IR(143, 1),IR(132, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {131072,IR(10, 1),IR(26272, 17)/* NoAliasINTELMask */,IR(0, 0),IR(143, 1),IR(132, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_ACCESS
  {0,IR(0, 0),IR(26289, 7)/* Simple */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {1,IR(0, 0),IR(26296, 8)/* GLSL450 */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {2,IR(0, 0),IR(26304, 7)/* OpenCL */,IR(0, 0),IR(0, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {3,IR(0, 0),IR(26311, 7)/* Vulkan */,IR(155, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_MODEL
  {0,IR(0, 0),IR(26328, 8)/* Relaxed */,IR(156, 1),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {2,IR(0, 0),IR(26336, 8)/* Acquire */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {4,IR(0, 0),IR(26344, 8)/* Release */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {8,IR(0, 0),IR(26352, 15)/* AcquireRelease */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {16,IR(0, 0),IR(26367, 23)/* SequentiallyConsistent */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {64,IR(0, 0),IR(26390, 14)/* UniformMemory */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {128,IR(0, 0),IR(26404, 15)/* SubgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {256,IR(0, 0),IR(26419, 16)/* WorkgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {512,IR(0, 0),IR(26435, 21)/* CrossWorkgroupMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {1024,IR(0, 0),IR(26456, 20)/* AtomicCounterMemory */,IR(0, 0),IR(83, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {2048,IR(0, 0),IR(26476, 12)/* ImageMemory */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {4096,IR(0, 0),IR(26488, 13)/* OutputMemory */,IR(157, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {8192,IR(0, 0),IR(26517, 14)/* MakeAvailable */,IR(158, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {16384,IR(0, 0),IR(26548, 12)/* MakeVisible */,IR(159, 1),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {32768,IR(0, 0),IR(17482, 9)/* Volatile */,IR(0, 0),IR(196, 1),IR(84, 1),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {0,IR(0, 0),IR(26575, 10)/* AutoINTEL */,IR(0, 0),IR(184, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS
  {0,IR(0, 0),IR(26585, 5)/* WRAP */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {1,IR(0, 0),IR(26590, 4)/* SAT */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {2,IR(0, 0),IR(26594, 9)/* SAT_ZERO */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {3,IR(0, 0),IR(26603, 8)/* SAT_SYM */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_OVERFLOW_MODES
  {0,IR(0, 0),IR(26611, 25)/* PackedVectorFormat4x8Bit */,IR(160, 1),IR(1, 0),IR(149, 1),SPV_SPIRV_VERSION_WORD(1,6),0xffffffffu}, // SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {0,IR(0, 0),IR(26664, 4)/* TRN */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {1,IR(0, 0),IR(26668, 9)/* TRN_ZERO */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {2,IR(0, 0),IR(26677, 4)/* RND */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {3,IR(0, 0),IR(26681, 9)/* RND_ZERO */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {4,IR(0, 0),IR(26690, 8)/* RND_INF */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {5,IR(0, 0),IR(26698, 12)/* RND_MIN_INF */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {6,IR(0, 0),IR(26710, 9)/* RND_CONV */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {7,IR(0, 0),IR(26719, 13)/* RND_CONV_ODD */,IR(0, 0),IR(199, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {1,IR(0, 0),IR(26732, 25)/* RobustnessPerComponentNV */,IR(0, 0),IR(200, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {2,IR(0, 0),IR(26757, 23)/* RobustnessPerElementNV */,IR(0, 0),IR(200, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {0,IR(0, 0),IR(16996, 8)/* NoneKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {1,IR(0, 0),IR(26780, 10)/* OpaqueKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {2,IR(0, 0),IR(26790, 12)/* NoOpaqueKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {4,IR(0, 0),IR(26802, 23)/* TerminateOnFirstHitKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {8,IR(0, 0),IR(26825, 24)/* SkipClosestHitShaderKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {16,IR(0, 0),IR(26849, 27)/* CullBackFacingTrianglesKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {32,IR(0, 0),IR(26876, 28)/* CullFrontFacingTrianglesKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {64,IR(0, 0),IR(26904, 14)/* CullOpaqueKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {128,IR(0, 0),IR(26918, 16)/* CullNoOpaqueKHR */,IR(0, 0),IR(85, 2),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {256,IR(0, 0),IR(26934, 17)/* SkipTrianglesKHR */,IR(161, 1),IR(201, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {512,IR(0, 0),IR(26975, 13)/* SkipAABBsKHR */,IR(0, 0),IR(201, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {1024,IR(0, 0),IR(26988, 30)/* ForceOpacityMicromap2StateKHR */,IR(162, 1),IR(202, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_FLAGS
  {0,IR(0, 0),IR(27048, 41)/* RayQueryCandidateIntersectionTriangleKHR */,IR(0, 0),IR(203, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {1,IR(0, 0),IR(27089, 37)/* RayQueryCandidateIntersectionAABBKHR */,IR(0, 0),IR(203, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {0,IR(0, 0),IR(27126, 37)/* RayQueryCommittedIntersectionNoneKHR */,IR(0, 0),IR(203, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {1,IR(0, 0),IR(27163, 41)/* RayQueryCommittedIntersectionTriangleKHR */,IR(0, 0),IR(203, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {2,IR(0, 0),IR(27204, 42)/* RayQueryCommittedIntersectionGeneratedKHR */,IR(0, 0),IR(203, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {0,IR(0, 0),IR(27246, 33)/* RayQueryCandidateIntersectionKHR */,IR(0, 0),IR(203, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {1,IR(0, 0),IR(27279, 33)/* RayQueryCommittedIntersectionKHR */,IR(0, 0),IR(203, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {1,IR(0, 0),IR(27312, 12)/* ClampToEdge */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {2,IR(0, 0),IR(27324, 6)/* Clamp */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {3,IR(0, 0),IR(27330, 7)/* Repeat */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {4,IR(0, 0),IR(27337, 15)/* RepeatMirrored */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {0,IR(0, 0),IR(27352, 8)/* Nearest */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {1,IR(0, 0),IR(27360, 7)/* Linear */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {0,IR(0, 0),IR(27367, 8)/* Unknown */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {1,IR(0, 0),IR(27375, 8)/* Rgba32f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {2,IR(0, 0),IR(27383, 8)/* Rgba16f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {3,IR(0, 0),IR(27391, 5)/* R32f */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {4,IR(0, 0),IR(27396, 6)/* Rgba8 */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {5,IR(0, 0),IR(27402, 11)/* Rgba8Snorm */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {6,IR(0, 0),IR(27413, 6)/* Rg32f */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {7,IR(0, 0),IR(27419, 6)/* Rg16f */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {8,IR(0, 0),IR(27425, 13)/* R11fG11fB10f */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {9,IR(0, 0),IR(27438, 5)/* R16f */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {10,IR(0, 0),IR(27443, 7)/* Rgba16 */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {11,IR(0, 0),IR(27450, 8)/* Rgb10A2 */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {12,IR(0, 0),IR(27458, 5)/* Rg16 */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {13,IR(0, 0),IR(27463, 4)/* Rg8 */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {14,IR(0, 0),IR(27467, 4)/* R16 */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {15,IR(0, 0),IR(27471, 3)/* R8 */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {16,IR(0, 0),IR(27474, 12)/* Rgba16Snorm */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {17,IR(0, 0),IR(27486, 10)/* Rg16Snorm */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {18,IR(0, 0),IR(27496, 9)/* Rg8Snorm */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {19,IR(0, 0),IR(27505, 9)/* R16Snorm */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {20,IR(0, 0),IR(27514, 8)/* R8Snorm */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {21,IR(0, 0),IR(27522, 8)/* Rgba32i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {22,IR(0, 0),IR(27530, 8)/* Rgba16i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {23,IR(0, 0),IR(27538, 7)/* Rgba8i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {24,IR(0, 0),IR(27545, 5)/* R32i */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {25,IR(0, 0),IR(27550, 6)/* Rg32i */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {26,IR(0, 0),IR(27556, 6)/* Rg16i */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {27,IR(0, 0),IR(27562, 5)/* Rg8i */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {28,IR(0, 0),IR(27567, 5)/* R16i */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {29,IR(0, 0),IR(27572, 4)/* R8i */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {30,IR(0, 0),IR(27576, 9)/* Rgba32ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {31,IR(0, 0),IR(27585, 9)/* Rgba16ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {32,IR(0, 0),IR(27594, 8)/* Rgba8ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {33,IR(0, 0),IR(27602, 6)/* R32ui */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {34,IR(0, 0),IR(27608, 10)/* Rgb10a2ui */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {35,IR(0, 0),IR(27618, 7)/* Rg32ui */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {36,IR(0, 0),IR(27625, 7)/* Rg16ui */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {37,IR(0, 0),IR(27632, 6)/* Rg8ui */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {38,IR(0, 0),IR(27638, 6)/* R16ui */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {39,IR(0, 0),IR(27644, 5)/* R8ui */,IR(0, 0),IR(204, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {40,IR(0, 0),IR(27649, 6)/* R64ui */,IR(0, 0),IR(205, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {41,IR(0, 0),IR(27655, 5)/* R64i */,IR(0, 0),IR(205, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {0,IR(0, 0),IR(27660, 12)/* CrossDevice */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {1,IR(0, 0),IR(27672, 7)/* Device */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {2,IR(0, 0),IR(27679, 10)/* Workgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {3,IR(0, 0),IR(27689, 9)/* Subgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {4,IR(0, 0),IR(27698, 11)/* Invocation */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {5,IR(0, 0),IR(27709, 12)/* QueueFamily */,IR(163, 1),IR(196, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {6,IR(0, 0),IR(27736, 14)/* ShaderCallKHR */,IR(0, 0),IR(61, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_SCOPE_ID
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {1,IR(0, 0),IR(27750, 8)/* Flatten */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {2,IR(0, 0),IR(27758, 12)/* DontFlatten */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SELECTION_CONTROL
  {1,IR(0, 0),IR(27770, 29)/* IdentifierPossibleDuplicates */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS
  {0,IR(0, 0),IR(16113, 12)/* Unspecified */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {1,IR(0, 0),IR(16125, 8)/* Address */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {2,IR(0, 0),IR(16133, 8)/* Boolean */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {3,IR(0, 0),IR(16141, 6)/* Float */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {4,IR(0, 0),IR(16147, 7)/* Signed */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {5,IR(0, 0),IR(16154, 11)/* SignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {6,IR(0, 0),IR(16165, 9)/* Unsigned */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {7,IR(0, 0),IR(16174, 13)/* UnsignedChar */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {0,IR(0, 0),IR(16187, 6)/* Class */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {1,IR(0, 0),IR(16193, 10)/* Structure */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {2,IR(0, 0),IR(16203, 6)/* Union */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {0,IR(0, 0),IR(16209, 15)/* ImportedModule */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {1,IR(0, 0),IR(16224, 20)/* ImportedDeclaration */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {1,IR(0, 0),IR(16249, 16)/* FlagIsProtected */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {2,IR(0, 0),IR(16265, 14)/* FlagIsPrivate */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {3,IR(0, 0),IR(16279, 13)/* FlagIsPublic */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {4,IR(0, 0),IR(16292, 12)/* FlagIsLocal */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {8,IR(0, 0),IR(16304, 17)/* FlagIsDefinition */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {16,IR(0, 0),IR(16321, 12)/* FlagFwdDecl */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {32,IR(0, 0),IR(16333, 15)/* FlagArtificial */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {64,IR(0, 0),IR(16348, 13)/* FlagExplicit */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {128,IR(0, 0),IR(16361, 15)/* FlagPrototyped */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {256,IR(0, 0),IR(16376, 18)/* FlagObjectPointer */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {512,IR(0, 0),IR(16394, 17)/* FlagStaticMember */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {1024,IR(0, 0),IR(16411, 21)/* FlagIndirectVariable */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {2048,IR(0, 0),IR(16432, 20)/* FlagLValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {4096,IR(0, 0),IR(16452, 20)/* FlagRValueReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {8192,IR(0, 0),IR(16472, 16)/* FlagIsOptimized */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {16384,IR(0, 0),IR(16488, 16)/* FlagIsEnumClass */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {32768,IR(0, 0),IR(16504, 20)/* FlagTypePassByValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {65536,IR(0, 0),IR(16524, 24)/* FlagTypePassByReference */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {131072,IR(0, 0),IR(27799, 26)/* FlagUnknownPhysicalLayout */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {0,IR(0, 0),IR(16548, 6)/* Deref */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {1,IR(0, 0),IR(16554, 5)/* Plus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {2,IR(0, 0),IR(16559, 6)/* Minus */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {3,IR(10, 1),IR(16598, 11)/* PlusUconst */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {4,IR(36, 2),IR(16609, 9)/* BitPiece */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {5,IR(0, 0),IR(16618, 5)/* Swap */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {6,IR(0, 0),IR(16623, 7)/* Xderef */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {7,IR(0, 0),IR(16630, 11)/* StackValue */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {8,IR(10, 1),IR(16641, 7)/* Constu */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {9,IR(36, 2),IR(16648, 9)/* Fragment */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {0,IR(0, 0),IR(16657, 10)/* ConstType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {1,IR(0, 0),IR(16667, 13)/* VolatileType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {2,IR(0, 0),IR(16680, 13)/* RestrictType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {3,IR(0, 0),IR(16693, 11)/* AtomicType */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1, 0),0xffffffffu}, // SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {0,IR(0, 0),IR(27367, 8)/* Unknown */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {1,IR(0, 0),IR(27825, 5)/* ESSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {2,IR(0, 0),IR(27830, 5)/* GLSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {3,IR(0, 0),IR(27835, 9)/* OpenCL_C */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {4,IR(0, 0),IR(27844, 11)/* OpenCL_CPP */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {5,IR(0, 0),IR(27855, 5)/* HLSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {6,IR(0, 0),IR(27860, 15)/* CPP_for_OpenCL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {7,IR(0, 0),IR(27875, 5)/* SYCL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {8,IR(0, 0),IR(27880, 7)/* HERO_C */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {9,IR(0, 0),IR(27887, 5)/* NZSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {10,IR(0, 0),IR(27892, 5)/* WGSL */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {11,IR(0, 0),IR(27897, 6)/* Slang */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {12,IR(0, 0),IR(27903, 4)/* Zig */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {13,IR(0, 0),IR(27907, 5)/* Rust */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {0,IR(0, 0),IR(27912, 16)/* UniformConstant */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {1,IR(0, 0),IR(27928, 6)/* Input */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {2,IR(0, 0),IR(17533, 8)/* Uniform */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {3,IR(0, 0),IR(27934, 7)/* Output */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4,IR(0, 0),IR(27679, 10)/* Workgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5,IR(0, 0),IR(27941, 15)/* CrossWorkgroup */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {6,IR(0, 0),IR(27956, 8)/* Private */,IR(0, 0),IR(206, 2),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {7,IR(0, 0),IR(27964, 9)/* Function */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {8,IR(0, 0),IR(27973, 8)/* Generic */,IR(0, 0),IR(208, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {9,IR(0, 0),IR(27981, 13)/* PushConstant */,IR(0, 0),IR(3, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {10,IR(0, 0),IR(27994, 14)/* AtomicCounter */,IR(0, 0),IR(83, 1),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {11,IR(0, 0),IR(28008, 6)/* Image */,IR(0, 0),IR(1, 0),IR(0, 0),SPV_SPIRV_VERSION_WORD(1,0),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {12,IR(0, 0),IR(28014, 14)/* StorageBuffer */,IR(0, 0),IR(3, 1),IR(201, 2),SPV_SPIRV_VERSION_WORD(1,3),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4172,IR(0, 0),IR(28028, 13)/* TileImageEXT */,IR(0, 0),IR(154, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {4491,IR(0, 0),IR(28041, 19)/* TileAttachmentQCOM */,IR(0, 0),IR(41, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5068,IR(0, 0),IR(28060, 16)/* NodePayloadAMDX */,IR(0, 0),IR(43, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5328,IR(0, 0),IR(28076, 16)/* CallableDataKHR */,IR(164, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5329,IR(0, 0),IR(28107, 24)/* IncomingCallableDataKHR */,IR(165, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5338,IR(0, 0),IR(28154, 14)/* RayPayloadKHR */,IR(166, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5339,IR(0, 0),IR(28181, 16)/* HitAttributeKHR */,IR(167, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5342,IR(0, 0),IR(28212, 22)/* IncomingRayPayloadKHR */,IR(168, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5343,IR(0, 0),IR(28255, 22)/* ShaderRecordBufferKHR */,IR(169, 1),IR(55, 2),IR(24, 2),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5349,IR(0, 0),IR(28298, 22)/* PhysicalStorageBuffer */,IR(170, 1),IR(2, 1),IR(0, 2),SPV_SPIRV_VERSION_WORD(1,5),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5385,IR(0, 0),IR(28345, 21)/* HitObjectAttributeNV */,IR(0, 0),IR(132, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5402,IR(0, 0),IR(28366, 24)/* TaskPayloadWorkgroupEXT */,IR(0, 0),IR(54, 1),IR(23, 1),SPV_SPIRV_VERSION_WORD(1,4),0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5411,IR(0, 0),IR(28390, 22)/* HitObjectAttributeEXT */,IR(0, 0),IR(133, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5605,IR(0, 0),IR(28412, 17)/* CodeSectionINTEL */,IR(0, 0),IR(209, 1),IR(106, 1),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5936,IR(0, 0),IR(28429, 17)/* DeviceOnlyALTERA */,IR(171, 1),IR(210, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {5937,IR(0, 0),IR(28462, 15)/* HostOnlyALTERA */,IR(172, 1),IR(210, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORAGE_CLASS
  {0,IR(0, 0),IR(25287, 14)/* UncachedINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {1,IR(0, 0),IR(28491, 18)/* WriteThroughINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {2,IR(0, 0),IR(28509, 15)/* WriteBackINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {3,IR(0, 0),IR(25313, 15)/* StreamingINTEL */,IR(0, 0),IR(153, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {0,IR(0, 0),IR(16244, 5)/* None */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {1,IR(10, 1),IR(28524, 11)/* TensorView */,IR(0, 0),IR(211, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {2,IR(10, 1),IR(28535, 11)/* DecodeFunc */,IR(0, 0),IR(212, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {0,IR(0, 0),IR(28546, 10)/* Undefined */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {1,IR(0, 0),IR(17491, 9)/* Constant */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {2,IR(0, 0),IR(27312, 12)/* ClampToEdge */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {3,IR(0, 0),IR(27330, 7)/* Repeat */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {4,IR(0, 0),IR(27337, 15)/* RepeatMirrored */,IR(0, 0),IR(1, 0),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {0,IR(0, 0),IR(28556, 8)/* NoneARM */,IR(0, 0),IR(213, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {1,IR(0, 0),IR(28564, 15)/* NontemporalARM */,IR(0, 0),IR(213, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {2,IR(10, 1),IR(28579, 20)/* OutOfBoundsValueARM */,IR(0, 0),IR(213, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {4,IR(10, 1),IR(28599, 24)/* MakeElementAvailableARM */,IR(0, 0),IR(213, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {8,IR(10, 1),IR(28623, 22)/* MakeElementVisibleARM */,IR(0, 0),IR(213, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {16,IR(0, 0),IR(28645, 21)/* NonPrivateElementARM */,IR(0, 0),IR(213, 1),IR(0, 0),0xffffffffu,0xffffffffu}, // SPV_OPERAND_TYPE_TENSOR_OPERANDS
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
    case SPV_OPERAND_TYPE_BUILT_IN: return IR(7, 128);
    case SPV_OPERAND_TYPE_CAPABILITY: return IR(135, 291);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(426, 8);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(434, 3);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(437, 2);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS: return IR(439, 19);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION: return IR(458, 10);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(468, 4);
    case SPV_OPERAND_TYPE_COMPONENT_TYPE: return IR(472, 15);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT: return IR(487, 4);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS: return IR(491, 6);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE: return IR(497, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE: return IR(500, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT: return IR(503, 4);
    case SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(507, 8);
    case SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE: return IR(515, 3);
    case SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS: return IR(518, 16);
    case SPV_OPERAND_TYPE_DEBUG_OPERATION: return IR(534, 9);
    case SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER: return IR(543, 3);
    case SPV_OPERAND_TYPE_DECORATION: return IR(546, 150);
    case SPV_OPERAND_TYPE_DIMENSIONALITY: return IR(696, 8);
    case SPV_OPERAND_TYPE_EXECUTION_MODE: return IR(704, 99);
    case SPV_OPERAND_TYPE_EXECUTION_MODEL: return IR(803, 17);
    case SPV_OPERAND_TYPE_FPDENORM_MODE: return IR(820, 2);
    case SPV_OPERAND_TYPE_FPENCODING: return IR(822, 3);
    case SPV_OPERAND_TYPE_FPOPERATION_MODE: return IR(825, 2);
    case SPV_OPERAND_TYPE_FP_FAST_MATH_MODE: return IR(827, 9);
    case SPV_OPERAND_TYPE_FP_ROUNDING_MODE: return IR(836, 4);
    case SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE: return IR(840, 4);
    case SPV_OPERAND_TYPE_FUNCTION_CONTROL: return IR(844, 6);
    case SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE: return IR(850, 9);
    case SPV_OPERAND_TYPE_GROUP_OPERATION: return IR(859, 7);
    case SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER: return IR(866, 4);
    case SPV_OPERAND_TYPE_IMAGE: return IR(870, 17);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE: return IR(887, 26);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER: return IR(913, 20);
    case SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER: return IR(933, 2);
    case SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS: return IR(935, 3);
    case SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO: return IR(938, 2);
    case SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS: return IR(940, 2);
    case SPV_OPERAND_TYPE_LINKAGE_TYPE: return IR(942, 4);
    case SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL: return IR(946, 5);
    case SPV_OPERAND_TYPE_LOOP_CONTROL: return IR(951, 20);
    case SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(971, 15);
    case SPV_OPERAND_TYPE_MEMORY_ACCESS: return IR(986, 9);
    case SPV_OPERAND_TYPE_MEMORY_MODEL: return IR(995, 4);
    case SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID: return IR(999, 15);
    case SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS: return IR(1014, 1);
    case SPV_OPERAND_TYPE_OVERFLOW_MODES: return IR(1015, 4);
    case SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT: return IR(1019, 1);
    case SPV_OPERAND_TYPE_QUANTIZATION_MODES: return IR(1020, 8);
    case SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS: return IR(1028, 3);
    case SPV_OPERAND_TYPE_RAY_FLAGS: return IR(1031, 12);
    case SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE: return IR(1043, 2);
    case SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE: return IR(1045, 3);
    case SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION: return IR(1048, 2);
    case SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE: return IR(1050, 5);
    case SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE: return IR(1055, 2);
    case SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT: return IR(1057, 42);
    case SPV_OPERAND_TYPE_SCOPE_ID: return IR(1099, 7);
    case SPV_OPERAND_TYPE_SELECTION_CONTROL: return IR(1106, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS: return IR(1109, 1);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(1110, 8);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(1118, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(1121, 2);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS: return IR(1123, 20);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION: return IR(1143, 10);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(1153, 4);
    case SPV_OPERAND_TYPE_SOURCE_LANGUAGE: return IR(1157, 14);
    case SPV_OPERAND_TYPE_STORAGE_CLASS: return IR(1171, 29);
    case SPV_OPERAND_TYPE_STORE_CACHE_CONTROL: return IR(1200, 4);
    case SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS: return IR(1204, 3);
    case SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE: return IR(1207, 5);
    case SPV_OPERAND_TYPE_TENSOR_OPERANDS: return IR(1212, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_IMAGE: return IR(870, 17);
    case SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS: return IR(986, 9);
    case SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT: return IR(1019, 1);
    case SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS: return IR(491, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(971, 15);
    case SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS: return IR(1028, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_FPENCODING: return IR(822, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_TENSOR_OPERANDS: return IR(1212, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_CAPABILITY: return IR(135, 291);
    default: break;
  }
  return IR(0,0);
}

// Operand names and index into kOperandsByValue, ordered by (operand kind, name)
// The fields in order are:
//   name, either the primary name or an alias, indexing into kStrings
//   index into the kOperandsByValue array
static const std::array<NameIndex, 1395> kOperandNames{{
  {IR(5646, 9), 0}, // 0 ReadOnly in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(5672, 10), 2}, // 1 ReadWrite in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(5662, 10), 1}, // 2 WriteOnly in SPV_OPERAND_TYPE_ACCESS_QUALIFIER
  {IR(5682, 8), 3}, // 3 Logical in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(5690, 11), 4}, // 4 Physical32 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(5711, 11), 5}, // 5 Physical64 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(5722, 24), 6}, // 6 PhysicalStorageBuffer64 in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(5746, 27), 6}, // 7 PhysicalStorageBuffer64EXT in SPV_OPERAND_TYPE_ADDRESSING_MODEL
  {IR(7705, 13), 94}, // 8 BaryCoordKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7718, 12), 94}, // 9 BaryCoordNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7051, 20), 68}, // 10 BaryCoordNoPerspAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7071, 28), 69}, // 11 BaryCoordNoPerspCentroidAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7753, 20), 95}, // 12 BaryCoordNoPerspKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7773, 19), 95}, // 13 BaryCoordNoPerspNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7099, 26), 70}, // 14 BaryCoordNoPerspSampleAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7196, 22), 74}, // 15 BaryCoordPullModelAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7125, 19), 71}, // 16 BaryCoordSmoothAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7144, 27), 72}, // 17 BaryCoordSmoothCentroidAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7171, 25), 73}, // 18 BaryCoordSmoothSampleAMD in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6855, 13), 59}, // 19 BaseInstance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6829, 11), 58}, // 20 BaseVertex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5830, 13), 9}, // 21 ClipDistance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7612, 22), 89}, // 22 ClipDistancePerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8911, 12), 133}, // 23 ClusterIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6593, 13), 49}, // 24 CoreCountARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6567, 10), 48}, // 25 CoreIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6606, 13), 50}, // 26 CoreMaxIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5843, 13), 10}, // 27 CullDistance in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7634, 22), 90}, // 28 CullDistancePerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8964, 12), 134}, // 29 CullMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7960, 17), 101}, // 30 CullPrimitiveEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8364, 17), 115}, // 31 CurrentRayTimeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6925, 12), 62}, // 32 DeviceIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6868, 10), 60}, // 33 DrawIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6357, 22), 37}, // 34 EnqueuedWorkgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6127, 10), 21}, // 35 FragCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6213, 10), 27}, // 36 FragDepth in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7838, 23), 97}, // 37 FragInvocationCountEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7792, 12), 96}, // 38 FragSizeEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7218, 18), 75}, // 39 FragStencilRefEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7804, 15), 96}, // 40 FragmentSizeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6148, 12), 23}, // 41 FrontFacing in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7524, 16), 85}, // 42 FullyCoveredEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6298, 19), 33}, // 43 GlobalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6392, 15), 39}, // 44 GlobalLinearId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6379, 13), 38}, // 45 GlobalOffset in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6346, 11), 36}, // 46 GlobalSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6223, 17), 28}, // 47 HelperInvocation in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8666, 11), 122}, // 48 HitIsLSSNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8624, 14), 121}, // 49 HitIsSphereNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8846, 33), 130}, // 50 HitKindBackFacingMicroTriangleNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8812, 34), 129}, // 51 HitKindFrontFacingMicroTriangleNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8343, 11), 114}, // 52 HitKindKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8354, 10), 114}, // 53 HitKindNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8794, 18), 128}, // 54 HitLSSPositionsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8897, 14), 132}, // 55 HitLSSRadiiNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8528, 37), 118}, // 56 HitMicroTriangleVertexBarycentricsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8461, 34), 117}, // 57 HitMicroTriangleVertexPositionsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8716, 20), 123}, // 58 HitSpherePositionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8879, 18), 131}, // 59 HitSphereRadiusNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8336, 7), 113}, // 60 HitTNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8404, 30), 116}, // 61 HitTriangleVertexPositionsKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8565, 20), 119}, // 62 IncomingRayFlagsKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8585, 19), 119}, // 63 IncomingRayFlagsNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8225, 23), 110}, // 64 InstanceCustomIndexKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8248, 22), 110}, // 65 InstanceCustomIndexNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5865, 11), 12}, // 66 InstanceId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6553, 14), 47}, // 67 InstanceIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5966, 13), 14}, // 68 InvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7861, 22), 97}, // 69 InvocationsPerPixelNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7977, 12), 102}, // 70 LaunchIdKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7989, 11), 102}, // 71 LaunchIdNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8000, 14), 103}, // 72 LaunchSizeKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8014, 13), 103}, // 73 LaunchSizeNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5979, 6), 15}, // 74 Layer in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7656, 15), 91}, // 75 LayerPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6280, 18), 32}, // 76 LocalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6317, 21), 34}, // 77 LocalInvocationIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7671, 16), 92}, // 78 MeshViewCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7687, 18), 93}, // 79 MeshViewIndicesNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6483, 21), 43}, // 80 NumEnqueuedSubgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6470, 13), 42}, // 81 NumSubgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6240, 14), 29}, // 82 NumWorkgroups in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8140, 22), 107}, // 83 ObjectRayDirectionKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8162, 21), 107}, // 84 ObjectRayDirectionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8103, 19), 106}, // 85 ObjectRayOriginKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8122, 18), 106}, // 86 ObjectRayOriginNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8270, 17), 111}, // 87 ObjectToWorldKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8287, 16), 111}, // 88 ObjectToWorldNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6113, 14), 20}, // 89 PatchVertices in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6137, 11), 22}, // 90 PointCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5820, 10), 8}, // 91 PointSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5804, 9), 7}, // 92 Position in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7464, 18), 83}, // 93 PositionPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7576, 17), 87}, // 94 PrimitiveCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5876, 12), 13}, // 95 PrimitiveId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7593, 19), 88}, // 96 PrimitiveIndicesNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7908, 24), 99}, // 97 PrimitiveLineIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7883, 25), 98}, // 98 PrimitivePointIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6878, 24), 61}, // 99 PrimitiveShadingRateKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7932, 28), 100}, // 100 PrimitiveTriangleIndicesEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8604, 20), 120}, // 101 RayGeometryIndexKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8204, 11), 109}, // 102 RayTmaxKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8215, 10), 109}, // 103 RayTmaxNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8183, 11), 108}, // 104 RayTminKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8194, 10), 108}, // 105 RayTminNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7253, 29), 76}, // 106 RemainingRecursionLevelsAMDX in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7349, 16), 79}, // 107 ResourceHeapEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8768, 10), 125}, // 108 SMCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8787, 7), 127}, // 109 SMIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6160, 9), 24}, // 110 SampleId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6202, 11), 26}, // 111 SampleMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6187, 15), 25}, // 112 SamplePosition in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7316, 15), 78}, // 113 SamplerHeapEXT in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7401, 20), 81}, // 114 SecondaryPositionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7440, 24), 82}, // 115 SecondaryViewportMaskNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7300, 16), 77}, // 116 ShaderIndexAMDX in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6969, 15), 64}, // 117 ShadingRateKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6642, 15), 53}, // 118 SubgroupEqMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6657, 18), 53}, // 119 SubgroupEqMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6697, 15), 54}, // 120 SubgroupGeMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6712, 18), 54}, // 121 SubgroupGeMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6730, 15), 55}, // 122 SubgroupGtMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6745, 18), 55}, // 123 SubgroupGtMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6504, 11), 44}, // 124 SubgroupId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6763, 15), 56}, // 125 SubgroupLeMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6778, 18), 56}, // 126 SubgroupLeMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6515, 26), 45}, // 127 SubgroupLocalInvocationId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6796, 15), 57}, // 128 SubgroupLtMask in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6811, 18), 57}, // 129 SubgroupLtMaskKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6454, 16), 41}, // 130 SubgroupMaxSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6407, 13), 40}, // 131 SubgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7564, 12), 86}, // 132 TaskCountNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6103, 10), 19}, // 133 TessCoord in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6088, 15), 18}, // 134 TessLevelInner in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6073, 15), 17}, // 135 TessLevelOuter in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7033, 18), 67}, // 136 TileApronSizeQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7015, 18), 66}, // 137 TileDimensionQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6984, 15), 65}, // 138 TileOffsetQCOM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(5856, 9), 11}, // 139 VertexId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6541, 12), 46}, // 140 VertexIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6949, 10), 63}, // 141 ViewIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6025, 14), 16}, // 142 ViewportIndex in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7365, 15), 80}, // 143 ViewportMaskNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(7502, 22), 84}, // 144 ViewportMaskPerViewNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6619, 10), 51}, // 145 WarpIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8778, 9), 126}, // 146 WarpIDNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6629, 13), 52}, // 147 WarpMaxIDARM in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8736, 13), 124}, // 148 WarpsPerSMNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6338, 8), 35}, // 149 WorkDim in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6268, 12), 31}, // 150 WorkgroupId in SPV_OPERAND_TYPE_BUILT_IN
  {IR(6254, 14), 30}, // 151 WorkgroupSize in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8062, 21), 105}, // 152 WorldRayDirectionKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8083, 20), 105}, // 153 WorldRayDirectionNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8027, 18), 104}, // 154 WorldRayOriginKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8045, 17), 104}, // 155 WorldRayOriginNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8303, 17), 112}, // 156 WorldToObjectKHR in SPV_OPERAND_TYPE_BUILT_IN
  {IR(8320, 16), 112}, // 157 WorldToObjectNV in SPV_OPERAND_TYPE_BUILT_IN
  {IR(11182, 9), 266}, // 158 AbortKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5701, 10), 139}, // 159 Addresses in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14456, 35), 370}, // 160 ArbitraryPrecisionFixedPointALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14491, 34), 370}, // 161 ArbitraryPrecisionFixedPointINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13928, 38), 358}, // 162 ArbitraryPrecisionFloatingPointALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13966, 37), 358}, // 163 ArbitraryPrecisionFloatingPointINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13863, 33), 357}, // 164 ArbitraryPrecisionIntegersALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13896, 32), 357}, // 165 ArbitraryPrecisionIntegersINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15192, 19), 396}, // 166 ArithmeticFenceEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13501, 9), 343}, // 167 AsmINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15109, 20), 392}, // 168 AtomicFloat16AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13556, 23), 346}, // 169 AtomicFloat16MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12972, 22), 318}, // 170 AtomicFloat16VectorNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15025, 20), 388}, // 171 AtomicFloat32AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13510, 23), 344}, // 172 AtomicFloat32MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15045, 20), 389}, // 173 AtomicFloat64AddEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13533, 23), 345}, // 174 AtomicFloat64MinMaxEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9144, 14), 155}, // 175 AtomicStorage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10531, 17), 231}, // 176 AtomicStorageOps in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15150, 24), 394}, // 177 BFloat16ConversionINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11153, 29), 265}, // 178 BFloat16CooperativeMatrixKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11131, 22), 264}, // 179 BFloat16DotProductKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11115, 16), 263}, // 180 BFloat16TypeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15968, 20), 421}, // 181 BindlessImagesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12909, 18), 315}, // 182 BindlessTextureNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14920, 16), 383}, // 183 BitInstructions in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14658, 20), 374}, // 184 BlockingPipesALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14678, 19), 374}, // 185 BlockingPipesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15929, 19), 419}, // 186 CacheControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5830, 13), 165}, // 187 ClipDistance in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12511, 32), 303}, // 188 ComputeDerivativeGroupLinearKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12543, 31), 303}, // 189 ComputeDerivativeGroupLinearNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11361, 31), 282}, // 190 ComputeDerivativeGroupQuadsKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11392, 30), 282}, // 191 ComputeDerivativeGroupQuadsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11191, 16), 268}, // 192 ConstantDataKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13206, 30), 330}, // 193 CooperativeMatrixBlockLoadsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10900, 32), 250}, // 194 CooperativeMatrixConversionQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13099, 31), 327}, // 195 CooperativeMatrixConversionsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10179, 21), 381}, // 196 CooperativeMatrixKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10114, 28), 213}, // 197 CooperativeMatrixLayoutsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12599, 20), 305}, // 198 CooperativeMatrixNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13130, 40), 328}, // 199 CooperativeMatrixPerElementOperationsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13069, 30), 326}, // 200 CooperativeMatrixReductionsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13170, 36), 329}, // 201 CooperativeMatrixTensorAddressingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12952, 20), 317}, // 202 CooperativeVectorNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13236, 28), 331}, // 203 CooperativeVectorTrainingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6577, 16), 205}, // 204 CoreBuiltinsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5843, 13), 166}, // 205 CullDistance in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15129, 21), 393}, // 206 DebugInfoModuleINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12722, 25), 310}, // 207 DemoteToHelperInvocation in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12747, 28), 310}, // 208 DemoteToHelperInvocationEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10670, 18), 237}, // 209 DenormFlushToZero in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10655, 15), 236}, // 210 DenormPreserve in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9591, 18), 184}, // 211 DerivativeControl in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7331, 18), 267}, // 212 DescriptorHeapEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9115, 14), 153}, // 213 DeviceEnqueue in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6937, 12), 227}, // 214 DeviceGroup in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12775, 23), 311}, // 215 DisplacementMicromapNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14871, 11), 379}, // 216 DotProduct in SPV_OPERAND_TYPE_CAPABILITY
  {IR(16054, 27), 424}, // 217 DotProductBFloat16AccVALVE in SPV_OPERAND_TYPE_CAPABILITY
  {IR(16021, 33), 423}, // 218 DotProductFloat16AccFloat16VALVE in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15988, 33), 422}, // 219 DotProductFloat16AccFloat32VALVE in SPV_OPERAND_TYPE_CAPABILITY
  {IR(16081, 32), 425}, // 220 DotProductFloat8AccFloat32VALVE in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14765, 22), 377}, // 221 DotProductInput4x8Bit in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14787, 25), 377}, // 222 DotProductInput4x8BitKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14812, 28), 378}, // 223 DotProductInput4x8BitPacked in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14840, 31), 378}, // 224 DotProductInput4x8BitPackedKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14724, 19), 376}, // 225 DotProductInputAll in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14743, 22), 376}, // 226 DotProductInputAllKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14882, 14), 379}, // 227 DotProductKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6840, 15), 218}, // 228 DrawParameters in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13613, 16), 349}, // 229 ExpectAssumeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14976, 7), 386}, // 230 FMAKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13843, 20), 356}, // 231 FPFastMathModeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15400, 29), 402}, // 232 FPGAArgumentInterfacesALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15429, 28), 402}, // 233 FPGAArgumentInterfacesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14407, 25), 369}, // 234 FPGABufferLocationALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14432, 24), 369}, // 235 FPGABufferLocationINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14175, 28), 364}, // 236 FPGAClusterAttributesALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14203, 27), 364}, // 237 FPGAClusterAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15211, 30), 397}, // 238 FPGAClusterAttributesV2ALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15241, 29), 397}, // 239 FPGAClusterAttributesV2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14259, 21), 366}, // 240 FPGADSPControlALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14280, 20), 366}, // 241 FPGADSPControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14326, 41), 368}, // 242 FPGAInvocationPipeliningAttributesALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14367, 40), 368}, // 243 FPGAInvocationPipeliningAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14100, 26), 362}, // 244 FPGAKernelAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15270, 28), 398}, // 245 FPGAKernelAttributesv2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15351, 25), 401}, // 246 FPGALatencyControlALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15376, 24), 401}, // 247 FPGALatencyControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14033, 23), 360}, // 248 FPGALoopControlsALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14056, 22), 360}, // 249 FPGALoopControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14126, 25), 363}, // 250 FPGAMemoryAccessesALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14151, 24), 363}, // 251 FPGAMemoryAccessesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13790, 27), 355}, // 252 FPGAMemoryAttributesALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13817, 26), 355}, // 253 FPGAMemoryAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14697, 14), 375}, // 254 FPGARegALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14711, 13), 375}, // 255 FPGARegINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15335, 16), 400}, // 256 FPMaxErrorINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9029, 8), 144}, // 257 Float16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9015, 14), 143}, // 258 Float16Buffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10955, 16), 252}, // 259 Float16ImageAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9037, 8), 145}, // 260 Float64 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10152, 27), 215}, // 261 Float8CooperativeMatrixEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10142, 10), 214}, // 262 Float8EXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14961, 15), 385}, // 263 FloatControls2 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13409, 23), 339}, // 264 FloatingPointModeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7730, 23), 281}, // 265 FragmentBarycentricKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11339, 22), 281}, // 266 FragmentBarycentricNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7819, 19), 283}, // 267 FragmentDensityEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7540, 24), 277}, // 268 FragmentFullyCoveredEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10993, 16), 254}, // 269 FragmentMaskAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12690, 32), 309}, // 270 FragmentShaderPixelInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12619, 33), 306}, // 271 FragmentShaderSampleInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12652, 38), 307}, // 272 FragmentShaderShadingRateInterlockEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6902, 23), 216}, // 273 FragmentShadingRateKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13764, 26), 354}, // 274 FunctionFloatControlINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13455, 22), 341}, // 275 FunctionPointersINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15788, 22), 413}, // 276 FunctionVariantsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9436, 15), 171}, // 277 GenericPointer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5888, 9), 137}, // 278 Geometry in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9186, 18), 158}, // 279 GeometryPointSize in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11267, 28), 272}, // 280 GeometryShaderPassthroughNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9649, 16), 187}, // 281 GeometryStreams in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15487, 36), 404}, // 282 GlobalVariableFPGADecorationsALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15523, 35), 404}, // 283 GlobalVariableFPGADecorationsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15457, 30), 403}, // 284 GlobalVariableHostAccessINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10105, 9), 212}, // 285 GraphARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6420, 16), 194}, // 286 GroupNonUniform in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9788, 26), 196}, // 287 GroupNonUniformArithmetic in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6675, 22), 197}, // 288 GroupNonUniformBallot in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9868, 25), 200}, // 289 GroupNonUniformClustered in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11436, 30), 284}, // 290 GroupNonUniformPartitionedEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11466, 29), 284}, // 291 GroupNonUniformPartitionedNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9893, 20), 201}, // 292 GroupNonUniformQuad in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14936, 25), 384}, // 293 GroupNonUniformRotateKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9814, 23), 198}, // 294 GroupNonUniformShuffle in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9837, 31), 199}, // 295 GroupNonUniformShuffleRelative in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9768, 20), 195}, // 296 GroupNonUniformVote in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15851, 26), 416}, // 297 GroupUniformArithmeticKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9108, 7), 152}, // 298 Groups in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14631, 14), 373}, // 299 IOPipesALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14645, 13), 373}, // 300 IOPipesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9505, 8), 177}, // 301 Image1D in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9064, 11), 148}, // 302 ImageBasic in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9527, 12), 180}, // 303 ImageBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9382, 15), 167}, // 304 ImageCubeArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11322, 17), 279}, // 305 ImageFootprintNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10971, 22), 253}, // 306 ImageGatherBiasLodAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9204, 20), 159}, // 307 ImageGatherExtended in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9539, 13), 181}, // 308 ImageMSArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9090, 12), 150}, // 309 ImageMipmap in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9580, 11), 183}, // 310 ImageQuery in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9075, 15), 149}, // 311 ImageReadWrite in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11009, 21), 256}, // 312 ImageReadWriteLodAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9414, 10), 169}, // 313 ImageRect in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13477, 24), 342}, // 314 IndirectReferencesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9456, 16), 173}, // 315 InputAttachment in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11581, 36), 287}, // 316 InputAttachmentArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11617, 39), 287}, // 317 InputAttachmentArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12122, 39), 294}, // 318 InputAttachmentArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12161, 42), 294}, // 319 InputAttachmentArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9158, 6), 156}, // 320 Int16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11088, 27), 262}, // 321 Int4CooperativeMatrixINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11074, 14), 261}, // 322 Int4TypeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9045, 6), 146}, // 323 Int64 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9051, 13), 147}, // 324 Int64Atomics in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11030, 14), 257}, // 325 Int64ImageEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9451, 5), 172}, // 326 Int8 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13432, 23), 340}, // 327 IntegerFunctions2INTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9609, 22), 185}, // 328 InterpolationFunction in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5655, 7), 141}, // 329 Kernel in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14078, 22), 361}, // 330 KernelAttributesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8998, 8), 140}, // 331 Linkage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9129, 15), 154}, // 332 LiteralSampler in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15065, 20), 390}, // 333 LongCompositesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13032, 14), 324}, // 334 LongVectorEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14230, 15), 365}, // 335 LoopFuseALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14245, 14), 365}, // 336 LoopFuseINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15904, 25), 418}, // 337 MaskedGatherScatterINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8991, 7), 135}, // 338 Matrix in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14300, 26), 367}, // 339 MemoryAccessAliasingINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5951, 15), 280}, // 340 MeshShadingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5937, 14), 278}, // 341 MeshShadingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9488, 7), 175}, // 342 MinLod in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6959, 10), 228}, // 343 MultiView in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6039, 14), 190}, // 344 MultiViewport in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9743, 13), 192}, // 345 NamedBarrier in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15085, 11), 391}, // 346 OptNoneEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15096, 13), 391}, // 347 OptNoneINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7482, 20), 276}, // 348 PerViewAttributesNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5773, 31), 302}, // 349 PhysicalStorageBufferAddresses in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12477, 34), 302}, // 350 PhysicalStorageBufferAddressesEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9756, 12), 193}, // 351 PipeStorage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9102, 6), 151}, // 352 Pipes in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11207, 16), 269}, // 353 PoisonFreezeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15810, 18), 414}, // 354 PredicatedIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13012, 20), 323}, // 355 PushConstantBanksNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11059, 15), 260}, // 356 QuadControlKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12994, 18), 320}, // 357 RawAccessChainsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8976, 15), 380}, // 358 RayCullMaskKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10768, 12), 242}, // 359 RayQueryKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12927, 25), 316}, // 360 RayQueryPositionFetchKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10745, 23), 241}, // 361 RayQueryProvisionalKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8923, 41), 332}, // 362 RayTracingClusterAccelerationStructureNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8495, 33), 319}, // 363 RayTracingDisplacementMicromapNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5923, 14), 245}, // 364 RayTracingKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8677, 39), 322}, // 365 RayTracingLinearSweptSpheresGeometryNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8381, 23), 299}, // 366 RayTracingMotionBlurNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5910, 13), 298}, // 367 RayTracingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12827, 29), 312}, // 368 RayTracingOpacityMicromapEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14983, 42), 387}, // 369 RayTracingOpacityMicromapExecutionModeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12798, 29), 312}, // 370 RayTracingOpacityMicromapKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8434, 27), 297}, // 371 RayTracingPositionFetchKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12574, 25), 304}, // 372 RayTracingProvisionalKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8638, 28), 321}, // 373 RayTracingSpheresGeometryNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10799, 32), 244}, // 374 RayTraversalPrimitiveCullingKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15948, 20), 420}, // 375 RegisterLimitsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14896, 24), 382}, // 376 ReplicatedCompositesEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13388, 21), 338}, // 377 RoundToInfinityINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15828, 23), 415}, // 378 RoundedDivideSqrtINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10713, 16), 239}, // 379 RoundingModeRTE in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10729, 16), 240}, // 380 RoundingModeRTZ in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14572, 30), 372}, // 381 RuntimeAlignedAttributeALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14602, 29), 372}, // 382 RuntimeAlignedAttributeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11532, 23), 286}, // 383 RuntimeDescriptorArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11555, 26), 286}, // 384 RuntimeDescriptorArrayEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11238, 29), 271}, // 385 SampleMaskOverrideCoverageNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10548, 28), 232}, // 386 SampleMaskPostDepthCoverage in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6169, 18), 168}, // 387 SampleRateShading in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9495, 10), 176}, // 388 Sampled1D in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9513, 14), 179}, // 389 SampledBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9397, 17), 178}, // 390 SampledCubeArray in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9282, 33), 162}, // 391 SampledImageArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11895, 36), 291}, // 392 SampledImageArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11931, 39), 291}, // 393 SampledImageArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9424, 12), 170}, // 394 SampledRect in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5813, 7), 136}, // 395 Shader in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13046, 23), 325}, // 396 Shader64BitIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11044, 15), 258}, // 397 ShaderClockKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7282, 18), 259}, // 398 ShaderEnqueueAMDX in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12882, 27), 314}, // 399 ShaderInvocationReorderEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12856, 26), 313}, // 400 ShaderInvocationReorderNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5985, 12), 202}, // 401 ShaderLayer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11495, 17), 285}, // 402 ShaderNonUniform in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11512, 20), 285}, // 403 ShaderNonUniformEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(8749, 19), 308}, // 404 ShaderSMBuiltinsNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7421, 19), 275}, // 405 ShaderStereoViewNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6053, 20), 203}, // 406 ShaderViewportIndex in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5997, 28), 273}, // 407 ShaderViewportIndexLayerEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11295, 27), 273}, // 408 ShaderViewportIndexLayerNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7380, 21), 274}, // 409 ShaderViewportMaskNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11422, 14), 283}, // 410 ShadingRateNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10688, 25), 238}, // 411 SignedZeroInfNanPreserve in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9472, 16), 174}, // 412 SparseResidency in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15767, 21), 412}, // 413 SpecConditionalINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15174, 18), 395}, // 414 SplitBarrierINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(7236, 17), 255}, // 415 StencilExportEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10336, 25), 223}, // 416 StorageBuffer16BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10576, 24), 233}, // 417 StorageBuffer8BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9315, 34), 163}, // 418 StorageBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11970, 37), 292}, // 419 StorageBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12007, 40), 292}, // 420 StorageBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9349, 33), 164}, // 421 StorageImageArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12047, 36), 293}, // 422 StorageImageArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12083, 39), 293}, // 423 StorageImageArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9552, 28), 182}, // 424 StorageImageExtendedFormats in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9224, 24), 160}, // 425 StorageImageMultisample in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9665, 30), 188}, // 426 StorageImageReadWithoutFormat in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9695, 31), 189}, // 427 StorageImageWriteWithoutFormat in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10463, 21), 226}, // 428 StorageInputOutput16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10441, 22), 225}, // 429 StoragePushConstant16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10634, 21), 235}, // 430 StoragePushConstant8 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10028, 37), 210}, // 431 StorageTensorArrayDynamicIndexingARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10065, 40), 211}, // 432 StorageTensorArrayNonUniformIndexingARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11737, 39), 289}, // 433 StorageTexelBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11776, 42), 289}, // 434 StorageTexelBufferArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12290, 42), 296}, // 435 StorageTexelBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12332, 45), 296}, // 436 StorageTexelBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10424, 17), 224}, // 437 StorageUniform16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10361, 28), 223}, // 438 StorageUniformBufferBlock16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15586, 23), 406}, // 439 Subgroup2DBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15609, 30), 407}, // 440 Subgroup2DBlockTransformINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15639, 30), 408}, // 441 Subgroup2DBlockTransposeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13700, 39), 352}, // 442 SubgroupAvcMotionEstimationChromaINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13629, 33), 350}, // 443 SubgroupAvcMotionEstimationINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13662, 38), 351}, // 444 SubgroupAvcMotionEstimationIntraINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6436, 18), 217}, // 445 SubgroupBallotKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13304, 27), 335}, // 446 SubgroupBufferBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15558, 28), 405}, // 447 SubgroupBufferPrefetchINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9726, 17), 191}, // 448 SubgroupDispatch in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13331, 26), 336}, // 449 SubgroupImageBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13357, 31), 337}, // 450 SubgroupImageMediaBlockIOINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15669, 38), 409}, // 451 SubgroupMatrixMultiplyAccumulateINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13283, 21), 334}, // 452 SubgroupShuffleINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10320, 16), 222}, // 453 SubgroupVoteKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15298, 19), 399}, // 454 TaskSequenceALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15317, 18), 399}, // 455 TaskSequenceINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13264, 19), 333}, // 456 TensorAddressingNV in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15877, 27), 417}, // 457 TensorFloat32RoundingINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10017, 11), 209}, // 458 TensorsARM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15707, 28), 410}, // 459 TernaryBitwiseFunctionINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(5897, 13), 138}, // 460 Tessellation in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9164, 22), 157}, // 461 TessellationPointSize in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10932, 23), 251}, // 462 TextureBlockMatch2QCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10878, 22), 248}, // 463 TextureBlockMatchQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10857, 21), 247}, // 464 TextureBoxFilterQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10831, 26), 246}, // 465 TextureSampleWeightedQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9931, 28), 206}, // 466 TileImageColorReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9959, 28), 207}, // 467 TileImageDepthReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9987, 30), 208}, // 468 TileImageStencilReadAccessEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(6999, 16), 249}, // 469 TileShadingQCOM in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9631, 18), 186}, // 470 TransformFeedback in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14525, 24), 371}, // 471 USMStorageClassesALTERA in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14549, 23), 371}, // 472 USMStorageClassesINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10389, 35), 224}, // 473 UniformAndStorageBuffer16BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10600, 34), 234}, // 474 UniformAndStorageBuffer8BitAccess in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9248, 34), 161}, // 475 UniformBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11818, 37), 290}, // 476 UniformBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11855, 40), 290}, // 477 UniformBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9913, 18), 204}, // 478 UniformDecoration in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11656, 39), 288}, // 479 UniformTexelBufferArrayDynamicIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11695, 42), 288}, // 480 UniformTexelBufferArrayDynamicIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12203, 42), 295}, // 481 UniformTexelBufferArrayNonUniformIndexing in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12245, 45), 295}, // 482 UniformTexelBufferArrayNonUniformIndexingEXT in SPV_OPERAND_TYPE_CAPABILITY
  {IR(14003, 30), 359}, // 483 UnstructuredLoopControlsINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10780, 19), 243}, // 484 UntypedPointersKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(15735, 32), 411}, // 485 UntypedVariableLengthArrayINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13739, 25), 353}, // 486 VariableLengthArrayINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10514, 17), 230}, // 487 VariablePointers in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10484, 30), 229}, // 488 VariablePointersStorageBuffer in SPV_OPERAND_TYPE_CAPABILITY
  {IR(9006, 9), 142}, // 489 Vector16 in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13598, 15), 348}, // 490 VectorAnyINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(13579, 19), 347}, // 491 VectorComputeINTEL in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12377, 18), 300}, // 492 VulkanMemoryModel in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12416, 29), 301}, // 493 VulkanMemoryModelDeviceScope in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12445, 32), 301}, // 494 VulkanMemoryModelDeviceScopeKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(12395, 21), 300}, // 495 VulkanMemoryModelKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(11223, 15), 270}, // 496 WeakLinkageAMD in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10276, 44), 221}, // 497 WorkgroupMemoryExplicitLayout16BitAccessKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10233, 43), 220}, // 498 WorkgroupMemoryExplicitLayout8BitAccessKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(10200, 33), 219}, // 499 WorkgroupMemoryExplicitLayoutKHR in SPV_OPERAND_TYPE_CAPABILITY
  {IR(16125, 8), 427}, // 500 Address in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16133, 8), 428}, // 501 Boolean in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16141, 6), 429}, // 502 Float in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16147, 7), 430}, // 503 Signed in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16154, 11), 431}, // 504 SignedChar in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16165, 9), 432}, // 505 Unsigned in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16174, 13), 433}, // 506 UnsignedChar in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16113, 12), 426}, // 507 Unspecified in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16187, 6), 434}, // 508 Class in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(16193, 10), 435}, // 509 Structure in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(16203, 6), 436}, // 510 Union in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(16224, 20), 438}, // 511 ImportedDeclaration in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(16209, 15), 437}, // 512 ImportedModule in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(16333, 15), 446}, // 513 FlagArtificial in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16348, 13), 447}, // 514 FlagExplicit in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16321, 12), 445}, // 515 FlagFwdDecl in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16411, 21), 451}, // 516 FlagIndirectVariable in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16304, 17), 444}, // 517 FlagIsDefinition in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16488, 16), 455}, // 518 FlagIsEnumClass in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16292, 12), 443}, // 519 FlagIsLocal in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16472, 16), 454}, // 520 FlagIsOptimized in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16265, 14), 441}, // 521 FlagIsPrivate in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16249, 16), 440}, // 522 FlagIsProtected in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16279, 13), 442}, // 523 FlagIsPublic in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16432, 20), 452}, // 524 FlagLValueReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16376, 18), 449}, // 525 FlagObjectPointer in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16361, 15), 448}, // 526 FlagPrototyped in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16452, 20), 453}, // 527 FlagRValueReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16394, 17), 450}, // 528 FlagStaticMember in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16524, 24), 457}, // 529 FlagTypePassByReference in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16504, 20), 456}, // 530 FlagTypePassByValue in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16244, 5), 439}, // 531 None in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS
  {IR(16609, 9), 462}, // 532 BitPiece in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16641, 7), 466}, // 533 Constu in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16548, 6), 458}, // 534 Deref in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16648, 9), 467}, // 535 Fragment in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16559, 6), 460}, // 536 Minus in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16554, 5), 459}, // 537 Plus in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16598, 11), 461}, // 538 PlusUconst in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16630, 11), 465}, // 539 StackValue in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16618, 5), 463}, // 540 Swap in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16623, 7), 464}, // 541 Xderef in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION
  {IR(16693, 11), 471}, // 542 AtomicType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(16657, 10), 468}, // 543 ConstType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(16680, 13), 470}, // 544 RestrictType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(16667, 13), 469}, // 545 VolatileType in SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(16704, 10), 472}, // 546 Float16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16714, 10), 473}, // 547 Float32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16724, 10), 474}, // 548 Float64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16892, 12), 485}, // 549 FloatE4M3NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16904, 12), 486}, // 550 FloatE5M2NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16747, 14), 476}, // 551 SignedInt16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16761, 14), 477}, // 552 SignedInt32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16775, 14), 478}, // 553 SignedInt64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16734, 13), 475}, // 554 SignedInt8NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16852, 19), 483}, // 555 SignedInt8PackedNV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16804, 16), 480}, // 556 UnsignedInt16NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16820, 16), 481}, // 557 UnsignedInt32NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16836, 16), 482}, // 558 UnsignedInt64NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16789, 15), 479}, // 559 UnsignedInt8NV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16871, 21), 484}, // 560 UnsignedInt8PackedNV in SPV_OPERAND_TYPE_COMPONENT_TYPE
  {IR(16968, 28), 490}, // 561 ColumnBlockedInterleavedARM in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(16928, 15), 488}, // 562 ColumnMajorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(16943, 25), 489}, // 563 RowBlockedInterleavedARM in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(16916, 12), 487}, // 564 RowMajorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT
  {IR(17004, 27), 492}, // 565 MatrixASignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(17031, 27), 493}, // 566 MatrixBSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(17058, 27), 494}, // 567 MatrixCSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(17085, 32), 495}, // 568 MatrixResultSignedComponentsKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(16996, 8), 491}, // 569 NoneKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(17117, 26), 496}, // 570 SaturatingAccumulationKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS
  {IR(17154, 4), 499}, // 571 2x2 in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(17147, 7), 498}, // 572 Column in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(17143, 4), 497}, // 573 Row in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE
  {IR(17158, 11), 500}, // 574 MatrixAKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(17180, 21), 502}, // 575 MatrixAccumulatorKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(17169, 11), 501}, // 576 MatrixBKHR in SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE
  {IR(17212, 14), 504}, // 577 ColumnMajorNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(17226, 21), 505}, // 578 InferencingOptimalNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(17201, 11), 503}, // 579 RowMajorNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(17247, 18), 506}, // 580 TrainingOptimalNV in SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT
  {IR(16125, 8), 508}, // 581 Address in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16133, 8), 509}, // 582 Boolean in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16141, 6), 510}, // 583 Float in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16147, 7), 511}, // 584 Signed in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16154, 11), 512}, // 585 SignedChar in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16165, 9), 513}, // 586 Unsigned in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16174, 13), 514}, // 587 UnsignedChar in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16113, 12), 507}, // 588 Unspecified in SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16187, 6), 515}, // 589 Class in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(16193, 10), 516}, // 590 Structure in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(16203, 6), 517}, // 591 Union in SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE
  {IR(16333, 15), 525}, // 592 FlagArtificial in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16348, 13), 526}, // 593 FlagExplicit in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16321, 12), 524}, // 594 FlagFwdDecl in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16411, 21), 530}, // 595 FlagIndirectVariable in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16304, 17), 523}, // 596 FlagIsDefinition in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16292, 12), 522}, // 597 FlagIsLocal in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16472, 16), 533}, // 598 FlagIsOptimized in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16265, 14), 520}, // 599 FlagIsPrivate in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16249, 16), 519}, // 600 FlagIsProtected in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16279, 13), 521}, // 601 FlagIsPublic in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16432, 20), 531}, // 602 FlagLValueReference in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16376, 18), 528}, // 603 FlagObjectPointer in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16361, 15), 527}, // 604 FlagPrototyped in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16452, 20), 532}, // 605 FlagRValueReference in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16394, 17), 529}, // 606 FlagStaticMember in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16244, 5), 518}, // 607 None in SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS
  {IR(16609, 9), 538}, // 608 BitPiece in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16641, 7), 542}, // 609 Constu in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16548, 6), 534}, // 610 Deref in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16559, 6), 536}, // 611 Minus in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16554, 5), 535}, // 612 Plus in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16598, 11), 537}, // 613 PlusUconst in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16630, 11), 541}, // 614 StackValue in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16618, 5), 539}, // 615 Swap in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16623, 7), 540}, // 616 Xderef in SPV_OPERAND_TYPE_DEBUG_OPERATION
  {IR(16657, 10), 543}, // 617 ConstType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(16680, 13), 545}, // 618 RestrictType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(16667, 13), 544}, // 619 VolatileType in SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER
  {IR(19985, 16), 666}, // 620 AliasScopeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17474, 8), 565}, // 621 Aliased in SPV_OPERAND_TYPE_DECORATION
  {IR(18635, 15), 621}, // 622 AliasedPointer in SPV_OPERAND_TYPE_DECORATION
  {IR(18650, 18), 621}, // 623 AliasedPointerEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(17952, 10), 589}, // 624 Alignment in SPV_OPERAND_TYPE_DECORATION
  {IR(17996, 12), 591}, // 625 AlignmentId in SPV_OPERAND_TYPE_DECORATION
  {IR(17325, 12), 552}, // 626 ArrayStride in SPV_OPERAND_TYPE_DECORATION
  {IR(18376, 17), 608}, // 627 ArrayStrideIdEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(19535, 15), 654}, // 628 BankBitsALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19550, 14), 654}, // 629 BankBitsINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18744, 7), 625}, // 630 BankNV in SPV_OPERAND_TYPE_DECORATION
  {IR(19248, 16), 647}, // 631 BankwidthALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19264, 15), 647}, // 632 BankwidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17629, 8), 578}, // 633 Binding in SPV_OPERAND_TYPE_DECORATION
  {IR(18769, 16), 627}, // 634 BindlessImageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(18751, 18), 626}, // 635 BindlessSamplerNV in SPV_OPERAND_TYPE_DECORATION
  {IR(17289, 6), 548}, // 636 Block in SPV_OPERAND_TYPE_DECORATION
  {IR(18136, 22), 598}, // 637 BlockMatchSamplerQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(18114, 22), 597}, // 638 BlockMatchTextureQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(18800, 13), 629}, // 639 BoundImageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(18785, 15), 628}, // 640 BoundSamplerNV in SPV_OPERAND_TYPE_DECORATION
  {IR(17295, 12), 549}, // 641 BufferBlock in SPV_OPERAND_TYPE_DECORATION
  {IR(20145, 21), 671}, // 642 BufferLocationALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20166, 20), 671}, // 643 BufferLocationINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17406, 8), 557}, // 644 BuiltIn in SPV_OPERAND_TYPE_DECORATION
  {IR(19704, 20), 659}, // 645 BurstCoalesceALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19724, 19), 659}, // 646 BurstCoalesceINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17372, 8), 556}, // 647 CPacked in SPV_OPERAND_TYPE_DECORATION
  {IR(21392, 22), 694}, // 648 CacheControlLoadINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(21451, 23), 695}, // 649 CacheControlStoreINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19743, 16), 660}, // 650 CacheSizeALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19759, 15), 660}, // 651 CacheSizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17439, 9), 561}, // 652 Centroid in SPV_OPERAND_TYPE_DECORATION
  {IR(18853, 13), 632}, // 653 ClobberINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17500, 9), 568}, // 654 Coherent in SPV_OPERAND_TYPE_DECORATION
  {IR(17316, 9), 551}, // 655 ColMajor in SPV_OPERAND_TYPE_DECORATION
  {IR(17613, 10), 576}, // 656 Component in SPV_OPERAND_TYPE_DECORATION
  {IR(21339, 17), 693}, // 657 ConditionalINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20568, 28), 681}, // 658 ConduitKernelArgumentALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20596, 27), 681}, // 659 ConduitKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17491, 9), 567}, // 660 Constant in SPV_OPERAND_TYPE_DECORATION
  {IR(18999, 14), 639}, // 661 CounterBuffer in SPV_OPERAND_TYPE_DECORATION
  {IR(17637, 14), 579}, // 662 DescriptorSet in SPV_OPERAND_TYPE_DECORATION
  {IR(19774, 29), 661}, // 663 DontStaticallyCoalesceALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19803, 28), 661}, // 664 DontStaticallyCoalesceINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19357, 17), 650}, // 665 DoublepumpALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19374, 16), 650}, // 666 DoublepumpINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18158, 18), 599}, // 667 ExplicitInterpAMD in SPV_OPERAND_TYPE_DECORATION
  {IR(17822, 15), 585}, // 668 FPFastMathMode in SPV_OPERAND_TYPE_DECORATION
  {IR(20430, 26), 678}, // 669 FPMaxErrorDecorationINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17772, 15), 584}, // 670 FPRoundingMode in SPV_OPERAND_TYPE_DECORATION
  {IR(17428, 5), 559}, // 671 Flat in SPV_OPERAND_TYPE_DECORATION
  {IR(19564, 21), 655}, // 672 ForcePow2DepthALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19585, 20), 655}, // 673 ForcePow2DepthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17724, 14), 583}, // 674 FuncParamAttr in SPV_OPERAND_TYPE_DECORATION
  {IR(18910, 21), 635}, // 675 FuncParamIOKindINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19141, 24), 643}, // 676 FunctionDenormModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20259, 31), 673}, // 677 FunctionFloatingPointModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19084, 26), 642}, // 678 FunctionRoundingModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19895, 26), 664}, // 679 FuseLoopsInFunctionALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19921, 25), 664}, // 680 FuseLoopsInFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17361, 11), 555}, // 681 GLSLPacked in SPV_OPERAND_TYPE_DECORATION
  {IR(17350, 11), 554}, // 682 GLSLShared in SPV_OPERAND_TYPE_DECORATION
  {IR(18973, 26), 638}, // 683 GlobalVariableOffsetINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18713, 31), 624}, // 684 HitObjectShaderRecordBufferEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(18683, 30), 623}, // 685 HitObjectShaderRecordBufferNV in SPV_OPERAND_TYPE_DECORATION
  {IR(19013, 24), 639}, // 686 HlslCounterBufferGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(19050, 19), 640}, // 687 HlslSemanticGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(21190, 16), 690}, // 688 HostAccessINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20186, 20), 672}, // 689 IOPipeStorageALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20206, 19), 672}, // 690 IOPipeStorageINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(21282, 29), 692}, // 691 ImplementInRegisterMapALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(21311, 28), 692}, // 692 ImplementInRegisterMapINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17623, 6), 577}, // 693 Index in SPV_OPERAND_TYPE_DECORATION
  {IR(21253, 15), 691}, // 694 InitModeALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(21268, 14), 691}, // 695 InitModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20014, 25), 668}, // 696 InitiationIntervalALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20039, 24), 668}, // 697 InitiationIntervalINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17931, 21), 588}, // 698 InputAttachmentIndex in SPV_OPERAND_TYPE_DECORATION
  {IR(17455, 10), 563}, // 699 Invariant in SPV_OPERAND_TYPE_DECORATION
  {IR(20507, 31), 680}, // 700 LatencyControlConstraintALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20538, 30), 680}, // 701 LatencyControlConstraintINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20456, 26), 679}, // 702 LatencyControlLabelALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20482, 25), 679}, // 703 LatencyControlLabelINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17899, 18), 586}, // 704 LinkageAttributes in SPV_OPERAND_TYPE_DECORATION
  {IR(17604, 9), 575}, // 705 Location in SPV_OPERAND_TYPE_DECORATION
  {IR(20686, 34), 683}, // 706 MMHostInterfaceAddressWidthALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20720, 33), 683}, // 707 MMHostInterfaceAddressWidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20753, 31), 684}, // 708 MMHostInterfaceDataWidthALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20784, 30), 684}, // 709 MMHostInterfaceDataWidthINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20814, 29), 685}, // 710 MMHostInterfaceLatencyALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20843, 28), 685}, // 711 MMHostInterfaceLatencyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20974, 30), 687}, // 712 MMHostInterfaceMaxBurstALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(21004, 29), 687}, // 713 MMHostInterfaceMaxBurstINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20905, 35), 686}, // 714 MMHostInterfaceReadWriteModeALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20940, 34), 686}, // 715 MMHostInterfaceReadWriteModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(21033, 33), 688}, // 716 MMHostInterfaceWaitRequestALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(21066, 32), 688}, // 717 MMHostInterfaceWaitRequestINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19946, 20), 665}, // 718 MathOpDSPModeALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19966, 19), 665}, // 719 MathOpDSPModeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17337, 13), 553}, // 720 MatrixStride in SPV_OPERAND_TYPE_DECORATION
  {IR(17962, 14), 590}, // 721 MaxByteOffset in SPV_OPERAND_TYPE_DECORATION
  {IR(18008, 16), 592}, // 722 MaxByteOffsetId in SPV_OPERAND_TYPE_DECORATION
  {IR(20063, 21), 669}, // 723 MaxConcurrencyALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20084, 20), 669}, // 724 MaxConcurrencyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19279, 23), 648}, // 725 MaxPrivateCopiesALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19302, 22), 648}, // 726 MaxPrivateCopiesINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19390, 20), 651}, // 727 MaxReplicatesALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19410, 19), 651}, // 728 MaxReplicatesINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20350, 18), 676}, // 729 MediaBlockIOINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18668, 15), 622}, // 730 MemberOffsetNV in SPV_OPERAND_TYPE_DECORATION
  {IR(19194, 13), 645}, // 731 MemoryALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19207, 12), 645}, // 732 MemoryINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19470, 12), 653}, // 733 MergeALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19482, 11), 653}, // 734 MergeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20001, 13), 667}, // 735 NoAliasINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17917, 14), 587}, // 736 NoContraction in SPV_OPERAND_TYPE_DECORATION
  {IR(17414, 14), 558}, // 737 NoPerspective in SPV_OPERAND_TYPE_DECORATION
  {IR(18068, 13), 594}, // 738 NoSignedWrap in SPV_OPERAND_TYPE_DECORATION
  {IR(18081, 15), 595}, // 739 NoUnsignedWrap in SPV_OPERAND_TYPE_DECORATION
  {IR(18208, 20), 601}, // 740 NodeMaxPayloadsAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(18176, 32), 600}, // 741 NodeSharesPayloadLimitsWithAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(17521, 12), 570}, // 742 NonReadable in SPV_OPERAND_TYPE_DECORATION
  {IR(18575, 11), 619}, // 743 NonUniform in SPV_OPERAND_TYPE_DECORATION
  {IR(18586, 14), 619}, // 744 NonUniformEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(17509, 12), 569}, // 745 NonWritable in SPV_OPERAND_TYPE_DECORATION
  {IR(19219, 15), 646}, // 746 NumbanksALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19234, 14), 646}, // 747 NumbanksINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17651, 7), 580}, // 748 Offset in SPV_OPERAND_TYPE_DECORATION
  {IR(18393, 12), 609}, // 749 OffsetIdEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(18419, 19), 611}, // 750 OverrideCoverageNV in SPV_OPERAND_TYPE_DECORATION
  {IR(18438, 14), 612}, // 751 PassthroughNV in SPV_OPERAND_TYPE_DECORATION
  {IR(17433, 6), 560}, // 752 Patch in SPV_OPERAND_TYPE_DECORATION
  {IR(18348, 28), 607}, // 753 PayloadDispatchIndirectAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(18323, 25), 606}, // 754 PayloadNodeArraySizeAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(18271, 25), 604}, // 755 PayloadNodeBaseIndexAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(18251, 20), 603}, // 756 PayloadNodeNameAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(18296, 27), 605}, // 757 PayloadNodeSparseArrayAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(18499, 16), 615}, // 758 PerPrimitiveEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(18515, 15), 615}, // 759 PerPrimitiveNV in SPV_OPERAND_TYPE_DECORATION
  {IR(18540, 10), 617}, // 760 PerTaskNV in SPV_OPERAND_TYPE_DECORATION
  {IR(18550, 13), 618}, // 761 PerVertexKHR in SPV_OPERAND_TYPE_DECORATION
  {IR(18563, 12), 618}, // 762 PerVertexNV in SPV_OPERAND_TYPE_DECORATION
  {IR(18530, 10), 616}, // 763 PerViewNV in SPV_OPERAND_TYPE_DECORATION
  {IR(20104, 21), 670}, // 764 PipelineEnableALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20125, 20), 670}, // 765 PipelineEnableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19831, 15), 662}, // 766 PrefetchALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19846, 14), 662}, // 767 PrefetchINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18827, 26), 631}, // 768 ReferencedIndirectlyINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19165, 15), 644}, // 769 RegisterALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19180, 14), 644}, // 770 RegisterINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20623, 32), 682}, // 771 RegisterMapKernelArgumentALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20655, 31), 682}, // 772 RegisterMapKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17265, 17), 546}, // 773 RelaxedPrecision in SPV_OPERAND_TYPE_DECORATION
  {IR(17465, 9), 564}, // 774 Restrict in SPV_OPERAND_TYPE_DECORATION
  {IR(18600, 16), 620}, // 775 RestrictPointer in SPV_OPERAND_TYPE_DECORATION
  {IR(18616, 19), 620}, // 776 RestrictPointerEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(17307, 9), 550}, // 777 RowMajor in SPV_OPERAND_TYPE_DECORATION
  {IR(18813, 14), 630}, // 778 SIMTCallINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17448, 7), 562}, // 779 Sample in SPV_OPERAND_TYPE_DECORATION
  {IR(17577, 20), 573}, // 780 SaturatedConversion in SPV_OPERAND_TYPE_DECORATION
  {IR(18024, 44), 593}, // 781 SaturatedToLargestFloat8NormalConversionEXT in SPV_OPERAND_TYPE_DECORATION
  {IR(18471, 28), 614}, // 782 SecondaryViewportRelativeNV in SPV_OPERAND_TYPE_DECORATION
  {IR(18866, 17), 633}, // 783 SideEffectsINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19429, 21), 652}, // 784 SimpleDualPortALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19450, 20), 652}, // 785 SimpleDualPortINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20290, 25), 674}, // 786 SingleElementVectorINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19324, 17), 649}, // 787 SinglepumpALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19341, 16), 649}, // 788 SinglepumpINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17282, 7), 547}, // 789 SpecId in SPV_OPERAND_TYPE_DECORATION
  {IR(21098, 27), 689}, // 790 StableKernelArgumentALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(21125, 26), 689}, // 791 StableKernelArgumentINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18958, 15), 637}, // 792 StackCallINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(19860, 18), 663}, // 793 StallEnableALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19878, 17), 663}, // 794 StallEnableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(20368, 16), 677}, // 795 StallFreeALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(20384, 15), 677}, // 796 StallFreeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17597, 7), 574}, // 797 Stream in SPV_OPERAND_TYPE_DECORATION
  {IR(19605, 17), 656}, // 798 StridesizeALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19622, 16), 656}, // 799 StridesizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18228, 23), 602}, // 800 TrackFinishWritingAMDX in SPV_OPERAND_TYPE_DECORATION
  {IR(19667, 19), 658}, // 801 TrueDualPortALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19686, 18), 658}, // 802 TrueDualPortINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18405, 14), 610}, // 803 UTFEncodedKHR in SPV_OPERAND_TYPE_DECORATION
  {IR(17533, 8), 571}, // 804 Uniform in SPV_OPERAND_TYPE_DECORATION
  {IR(17567, 10), 572}, // 805 UniformId in SPV_OPERAND_TYPE_DECORATION
  {IR(19037, 13), 640}, // 806 UserSemantic in SPV_OPERAND_TYPE_DECORATION
  {IR(19069, 15), 641}, // 807 UserTypeGOOGLE in SPV_OPERAND_TYPE_DECORATION
  {IR(20315, 35), 675}, // 808 VectorComputeCallableFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18931, 27), 636}, // 809 VectorComputeFunctionINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18883, 27), 634}, // 810 VectorComputeVariableINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(18452, 19), 613}, // 811 ViewportRelativeNV in SPV_OPERAND_TYPE_DECORATION
  {IR(17482, 9), 566}, // 812 Volatile in SPV_OPERAND_TYPE_DECORATION
  {IR(18096, 18), 596}, // 813 WeightTextureQCOM in SPV_OPERAND_TYPE_DECORATION
  {IR(19638, 15), 657}, // 814 WordsizeALTERA in SPV_OPERAND_TYPE_DECORATION
  {IR(19653, 14), 657}, // 815 WordsizeINTEL in SPV_OPERAND_TYPE_DECORATION
  {IR(17658, 10), 581}, // 816 XfbBuffer in SPV_OPERAND_TYPE_DECORATION
  {IR(17668, 10), 582}, // 817 XfbStride in SPV_OPERAND_TYPE_DECORATION
  {IR(21474, 3), 696}, // 818 1D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(21477, 3), 697}, // 819 2D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(21480, 3), 698}, // 820 3D in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(21493, 7), 701}, // 821 Buffer in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(21483, 5), 699}, // 822 Cube in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(21488, 5), 700}, // 823 Rect in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(21500, 12), 702}, // 824 SubpassData in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(21512, 17), 703}, // 825 TileImageDataEXT in SPV_OPERAND_TYPE_DIMENSIONALITY
  {IR(22630, 20), 771}, // 826 ArithmeticPoisonKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22324, 15), 756}, // 827 CoalescingAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21955, 15), 734}, // 828 ContractionOff in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(10670, 18), 748}, // 829 DenormFlushToZero in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(10655, 15), 747}, // 830 DenormPreserve in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21725, 13), 717}, // 831 DepthGreater in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21738, 10), 718}, // 832 DepthLess in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21710, 15), 716}, // 833 DepthReplacing in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21748, 15), 719}, // 834 DepthUnchanged in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22765, 25), 775}, // 835 DerivativeGroupLinearKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22790, 24), 775}, // 836 DerivativeGroupLinearNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22718, 24), 774}, // 837 DerivativeGroupQuadsKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22742, 23), 774}, // 838 DerivativeGroupQuadsNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22272, 29), 754}, // 839 EarlyAndLateFragmentTestsAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21677, 19), 713}, // 840 EarlyFragmentTests in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23275, 18), 795}, // 841 FPFastMathDefault in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21982, 10), 736}, // 842 Finalizer in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23090, 26), 787}, // 843 FloatingPointModeALTINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23116, 27), 788}, // 844 FloatingPointModeIEEEINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21970, 12), 735}, // 845 Initializer in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21799, 11), 723}, // 846 InputLines in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21810, 20), 724}, // 847 InputLinesAdjacency in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21787, 12), 722}, // 848 InputPoints in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21840, 24), 726}, // 849 InputTrianglesAdjacency in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21529, 12), 704}, // 850 Invocations in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22339, 15), 757}, // 851 IsApiEntryAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21870, 9), 728}, // 852 Isolines in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21763, 10), 720}, // 853 LocalSize in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21773, 14), 721}, // 854 LocalSizeHint in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22050, 16), 741}, // 855 LocalSizeHintId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22038, 12), 740}, // 856 LocalSizeId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22354, 21), 758}, // 857 MaxNodeRecursionAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22399, 21), 761}, // 858 MaxNumWorkgroupsAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23165, 16), 790}, // 859 MaxWorkDimINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23143, 22), 789}, // 860 MaxWorkgroupSizeINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23251, 24), 794}, // 861 MaximallyReconvergesKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23387, 22), 800}, // 862 MaximumRegistersINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23409, 24), 801}, // 863 MaximumRegistersIdINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23364, 23), 799}, // 864 NamedBarrierCountINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23484, 27), 802}, // 865 NamedMaximumRegistersINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23181, 20), 791}, // 866 NoGlobalOffsetINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22066, 34), 742}, // 867 NonCoherentColorAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22100, 34), 743}, // 868 NonCoherentDepthAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22134, 36), 744}, // 869 NonCoherentStencilAttachmentReadEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22218, 34), 752}, // 870 NonCoherentTileAttachmentReadQCOM in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23201, 22), 792}, // 871 NumSIMDWorkitemsINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23293, 21), 796}, // 872 OpacityMicromapIdKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21661, 16), 712}, // 873 OriginLowerLeft in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21645, 16), 711}, // 874 OriginUpperLeft in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21907, 16), 731}, // 875 OutputLineStrip in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22650, 15), 772}, // 876 OutputLinesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22665, 14), 772}, // 877 OutputLinesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21894, 13), 730}, // 878 OutputPoints in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22679, 20), 773}, // 879 OutputPrimitivesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22699, 19), 773}, // 880 OutputPrimitivesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21923, 20), 732}, // 881 OutputTriangleStrip in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22814, 19), 776}, // 882 OutputTrianglesEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22833, 18), 776}, // 883 OutputTrianglesNV in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21879, 15), 729}, // 884 OutputVertices in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21626, 19), 710}, // 885 PixelCenterInteger in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22851, 25), 777}, // 886 PixelInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22876, 27), 778}, // 887 PixelInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21696, 10), 714}, // 888 PointMode in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22200, 18), 746}, // 889 PostDepthCoverage in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22571, 19), 768}, // 890 QuadDerivativesKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21864, 6), 727}, // 891 Quads in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23338, 26), 798}, // 892 RegisterMapInterfaceINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22590, 20), 769}, // 893 RequireFullQuadsKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(10713, 16), 750}, // 894 RoundingModeRTE in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23069, 21), 786}, // 895 RoundingModeRTNINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23048, 21), 785}, // 896 RoundingModeRTPINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(10729, 16), 751}, // 897 RoundingModeRTZ in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22903, 26), 779}, // 898 SampleInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22929, 28), 780}, // 899 SampleInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23223, 28), 793}, // 900 SchedulerTargetFmaxMhzINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(13046, 23), 783}, // 901 Shader64BitIndexingEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(7300, 16), 760}, // 902 ShaderIndexAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22957, 31), 781}, // 903 ShadingRateInterlockOrderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22988, 33), 782}, // 904 ShadingRateInterlockUnorderedEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23021, 27), 784}, // 905 SharedLocalMemorySizeINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22610, 20), 770}, // 906 SharesInputWithAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(10688, 25), 749}, // 907 SignedZeroInfNanPreserve in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21541, 13), 705}, // 908 SpacingEqual in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21554, 22), 706}, // 909 SpacingFractionalEven in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21576, 21), 707}, // 910 SpacingFractionalOdd in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22375, 24), 759}, // 911 StaticNumWorkgroupsAMDX in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22524, 25), 766}, // 912 StencilRefGreaterBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22448, 26), 763}, // 913 StencilRefGreaterFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22549, 22), 767}, // 914 StencilRefLessBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22474, 23), 764}, // 915 StencilRefLessFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22301, 23), 755}, // 916 StencilRefReplacingEXT in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22497, 27), 765}, // 917 StencilRefUnchangedBackAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22420, 28), 762}, // 918 StencilRefUnchangedFrontAMD in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23314, 24), 797}, // 919 StreamingInterfaceINTEL in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(6407, 13), 737}, // 920 SubgroupSize in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22170, 30), 745}, // 921 SubgroupUniformControlFlowKHR in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21992, 22), 738}, // 922 SubgroupsPerWorkgroup in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22014, 24), 739}, // 923 SubgroupsPerWorkgroupId in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(22252, 20), 753}, // 924 TileShadingRateQCOM in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21830, 10), 725}, // 925 Triangles in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21943, 12), 733}, // 926 VecTypeHint in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21611, 15), 709}, // 927 VertexOrderCcw in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21597, 14), 708}, // 928 VertexOrderCw in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(21706, 4), 715}, // 929 Xfb in SPV_OPERAND_TYPE_EXECUTION_MODE
  {IR(23649, 10), 814}, // 930 AnyHitKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23659, 9), 814}, // 931 AnyHitNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23710, 12), 817}, // 932 CallableKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23722, 11), 817}, // 933 CallableNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23668, 14), 815}, // 934 ClosestHitKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23682, 13), 815}, // 935 ClosestHitNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(16648, 9), 807}, // 936 Fragment in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23561, 10), 808}, // 937 GLCompute in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(5888, 9), 806}, // 938 Geometry in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23618, 16), 813}, // 939 IntersectionKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23634, 15), 813}, // 940 IntersectionNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(5655, 7), 809}, // 941 Kernel in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23741, 8), 819}, // 942 MeshEXT in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23578, 7), 811}, // 943 MeshNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23695, 8), 816}, // 944 MissKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23703, 7), 816}, // 945 MissNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23585, 17), 812}, // 946 RayGenerationKHR in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23602, 16), 812}, // 947 RayGenerationNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23733, 8), 818}, // 948 TaskEXT in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23571, 7), 810}, // 949 TaskNV in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23518, 20), 804}, // 950 TessellationControl in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23538, 23), 805}, // 951 TessellationEvaluation in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23511, 7), 803}, // 952 Vertex in SPV_OPERAND_TYPE_EXECUTION_MODEL
  {IR(23758, 12), 821}, // 953 FlushToZero in SPV_OPERAND_TYPE_FPDENORM_MODE
  {IR(23749, 9), 820}, // 954 Preserve in SPV_OPERAND_TYPE_FPDENORM_MODE
  {IR(23770, 12), 822}, // 955 BFloat16KHR in SPV_OPERAND_TYPE_FPENCODING
  {IR(23782, 14), 823}, // 956 Float8E4M3EXT in SPV_OPERAND_TYPE_FPENCODING
  {IR(23796, 14), 824}, // 957 Float8E5M2EXT in SPV_OPERAND_TYPE_FPENCODING
  {IR(23815, 4), 826}, // 958 ALT in SPV_OPERAND_TYPE_FPOPERATION_MODE
  {IR(23810, 5), 825}, // 959 IEEE in SPV_OPERAND_TYPE_FPOPERATION_MODE
  {IR(23853, 14), 833}, // 960 AllowContract in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23867, 23), 833}, // 961 AllowContractFastINTEL in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23890, 13), 834}, // 962 AllowReassoc in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23903, 18), 834}, // 963 AllowReassocINTEL in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23837, 11), 831}, // 964 AllowRecip in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23921, 15), 835}, // 965 AllowTransform in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23848, 5), 832}, // 966 Fast in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23833, 4), 830}, // 967 NSZ in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(16244, 5), 827}, // 968 None in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23826, 7), 829}, // 969 NotInf in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23819, 7), 828}, // 970 NotNaN in SPV_OPERAND_TYPE_FP_FAST_MATH_MODE
  {IR(23936, 4), 836}, // 971 RTE in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(23948, 4), 839}, // 972 RTN in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(23944, 4), 838}, // 973 RTP in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(23940, 4), 837}, // 974 RTZ in SPV_OPERAND_TYPE_FP_ROUNDING_MODE
  {IR(23984, 18), 842}, // 975 Horizontal2Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(24002, 18), 843}, // 976 Horizontal4Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(23952, 16), 840}, // 977 Vertical2Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(23968, 16), 841}, // 978 Vertical4Pixels in SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE
  {IR(24043, 6), 848}, // 979 Const in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(24027, 11), 846}, // 980 DontInline in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(24020, 7), 845}, // 981 Inline in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(16244, 5), 844}, // 982 None in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(15085, 11), 849}, // 983 OptNoneEXT in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(15096, 13), 849}, // 984 OptNoneINTEL in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(24038, 5), 847}, // 985 Pure in SPV_OPERAND_TYPE_FUNCTION_CONTROL
  {IR(24059, 6), 852}, // 986 ByVal in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24070, 8), 854}, // 987 NoAlias in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24078, 10), 855}, // 988 NoCapture in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24096, 12), 857}, // 989 NoReadWrite in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24088, 8), 856}, // 990 NoWrite in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24108, 21), 858}, // 991 RuntimeAlignedALTERA in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24129, 20), 858}, // 992 RuntimeAlignedINTEL in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24054, 5), 851}, // 993 Sext in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24065, 5), 853}, // 994 Sret in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24049, 5), 850}, // 995 Zext in SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE
  {IR(24184, 16), 862}, // 996 ClusteredReduce in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24170, 14), 861}, // 997 ExclusiveScan in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24156, 14), 860}, // 998 InclusiveScan in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24296, 28), 865}, // 999 PartitionedExclusiveScanEXT in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24324, 27), 865}, // 1000 PartitionedExclusiveScanNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24241, 28), 864}, // 1001 PartitionedInclusiveScanEXT in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24269, 27), 864}, // 1002 PartitionedInclusiveScanNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24200, 21), 863}, // 1003 PartitionedReduceEXT in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24221, 20), 863}, // 1004 PartitionedReduceNV in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24149, 7), 859}, // 1005 Reduce in SPV_OPERAND_TYPE_GROUP_OPERATION
  {IR(24351, 10), 866}, // 1006 NoneINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(24361, 10), 867}, // 1007 ReadINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(24382, 15), 869}, // 1008 ReadWriteINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(24371, 11), 868}, // 1009 WriteINTEL in SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER
  {IR(24397, 5), 871}, // 1010 Bias in SPV_OPERAND_TYPE_IMAGE
  {IR(24411, 12), 874}, // 1011 ConstOffset in SPV_OPERAND_TYPE_IMAGE
  {IR(24423, 13), 876}, // 1012 ConstOffsets in SPV_OPERAND_TYPE_IMAGE
  {IR(24406, 5), 873}, // 1013 Grad in SPV_OPERAND_TYPE_IMAGE
  {IR(24402, 4), 872}, // 1014 Lod in SPV_OPERAND_TYPE_IMAGE
  {IR(24436, 19), 879}, // 1015 MakeTexelAvailable in SPV_OPERAND_TYPE_IMAGE
  {IR(24455, 22), 879}, // 1016 MakeTexelAvailableKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(24477, 17), 880}, // 1017 MakeTexelVisible in SPV_OPERAND_TYPE_IMAGE
  {IR(24494, 20), 880}, // 1018 MakeTexelVisibleKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(9488, 7), 878}, // 1019 MinLod in SPV_OPERAND_TYPE_IMAGE
  {IR(24514, 16), 881}, // 1020 NonPrivateTexel in SPV_OPERAND_TYPE_IMAGE
  {IR(24530, 19), 881}, // 1021 NonPrivateTexelKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(16244, 5), 870}, // 1022 None in SPV_OPERAND_TYPE_IMAGE
  {IR(24602, 12), 885}, // 1023 Nontemporal in SPV_OPERAND_TYPE_IMAGE
  {IR(17651, 7), 875}, // 1024 Offset in SPV_OPERAND_TYPE_IMAGE
  {IR(24614, 8), 886}, // 1025 Offsets in SPV_OPERAND_TYPE_IMAGE
  {IR(17448, 7), 877}, // 1026 Sample in SPV_OPERAND_TYPE_IMAGE
  {IR(24580, 11), 883}, // 1027 SignExtend in SPV_OPERAND_TYPE_IMAGE
  {IR(24549, 14), 882}, // 1028 VolatileTexel in SPV_OPERAND_TYPE_IMAGE
  {IR(24563, 17), 882}, // 1029 VolatileTexelKHR in SPV_OPERAND_TYPE_IMAGE
  {IR(24591, 11), 884}, // 1030 ZeroExtend in SPV_OPERAND_TYPE_IMAGE
  {IR(16141, 6), 901}, // 1031 Float in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24783, 10), 900}, // 1032 HalfFloat in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24718, 12), 895}, // 1033 SignedInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24730, 12), 896}, // 1034 SignedInt32 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24707, 11), 894}, // 1035 SignedInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24632, 11), 888}, // 1036 SnormInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24622, 10), 887}, // 1037 SnormInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24692, 15), 893}, // 1038 UnormInt101010 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24804, 17), 903}, // 1039 UnormInt101010_2 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24821, 16), 904}, // 1040 UnormInt10X6EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24954, 16), 911}, // 1041 UnormInt12X4EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24970, 16), 912}, // 1042 UnormInt14X2EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24653, 11), 890}, // 1043 UnormInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24793, 11), 902}, // 1044 UnormInt24 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24877, 20), 907}, // 1045 UnormInt2_101010EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24643, 10), 889}, // 1046 UnormInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24678, 14), 892}, // 1047 UnormShort555 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24664, 14), 891}, // 1048 UnormShort565 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24897, 19), 908}, // 1049 UnsignedInt10X6EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24916, 19), 909}, // 1050 UnsignedInt12X4EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24935, 19), 910}, // 1051 UnsignedInt14X2EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24755, 14), 898}, // 1052 UnsignedInt16 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24769, 14), 899}, // 1053 UnsignedInt32 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24742, 13), 897}, // 1054 UnsignedInt8 in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24837, 20), 905}, // 1055 UnsignedIntRaw10EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24857, 20), 906}, // 1056 UnsignedIntRaw12EXT in SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE
  {IR(24988, 2), 914}, // 1057 A in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25089, 5), 932}, // 1058 ABGR in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25010, 5), 920}, // 1059 ARGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25005, 5), 919}, // 1060 BGRA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25047, 6), 926}, // 1061 Depth in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25053, 13), 927}, // 1062 DepthStencil in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25015, 10), 921}, // 1063 Intensity in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25025, 10), 922}, // 1064 Luminance in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(24986, 2), 913}, // 1065 R in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(24993, 3), 916}, // 1066 RA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(24990, 3), 915}, // 1067 RG in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(24996, 4), 917}, // 1068 RGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25000, 5), 918}, // 1069 RGBA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25042, 5), 925}, // 1070 RGBx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25038, 4), 924}, // 1071 RGx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25035, 3), 923}, // 1072 Rx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25083, 6), 931}, // 1073 sBGRA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25066, 5), 928}, // 1074 sRGB in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25077, 6), 930}, // 1075 sRGBA in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25071, 6), 929}, // 1076 sRGBx in SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER
  {IR(25094, 28), 933}, // 1077 InitOnDeviceReprogramALTERA in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(25122, 27), 933}, // 1078 InitOnDeviceReprogramINTEL in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(25149, 24), 934}, // 1079 InitOnDeviceResetALTERA in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(25173, 23), 934}, // 1080 InitOnDeviceResetINTEL in SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER
  {IR(25196, 7), 935}, // 1081 NoWait in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(25203, 11), 936}, // 1082 WaitKernel in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(25214, 14), 937}, // 1083 WaitWorkGroup in SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS
  {IR(25228, 12), 939}, // 1084 CmdExecTime in SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {IR(16244, 5), 938}, // 1085 None in SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO
  {IR(25240, 13), 941}, // 1086 MayUsePrintf in SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {IR(16244, 5), 940}, // 1087 None in SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS
  {IR(25253, 7), 942}, // 1088 Export in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(25260, 7), 943}, // 1089 Import in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(25267, 12), 944}, // 1090 LinkOnceODR in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(25279, 8), 945}, // 1091 WeakAMD in SPV_OPERAND_TYPE_LINKAGE_TYPE
  {IR(25301, 12), 947}, // 1092 CachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(25353, 17), 950}, // 1093 ConstCachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(25328, 25), 949}, // 1094 InvalidateAfterReadINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(25313, 15), 948}, // 1095 StreamingINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(25287, 14), 946}, // 1096 UncachedINTEL in SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL
  {IR(25493, 22), 963}, // 1097 DependencyArrayALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25515, 21), 963}, // 1098 DependencyArrayINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25388, 19), 954}, // 1099 DependencyInfinite in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25407, 17), 955}, // 1100 DependencyLength in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25377, 11), 953}, // 1101 DontUnroll in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20014, 25), 961}, // 1102 InitiationIntervalALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20039, 24), 961}, // 1103 InitiationIntervalINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25452, 18), 958}, // 1104 IterationMultiple in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25536, 19), 965}, // 1105 LoopCoalesceALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25555, 18), 965}, // 1106 LoopCoalesceINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25698, 16), 969}, // 1107 LoopCountALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25714, 15), 969}, // 1108 LoopCountINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20063, 21), 962}, // 1109 MaxConcurrencyALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20084, 20), 962}, // 1110 MaxConcurrencyINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25573, 22), 966}, // 1111 MaxInterleavingALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25595, 21), 966}, // 1112 MaxInterleavingINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25438, 14), 957}, // 1113 MaxIterations in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25729, 27), 970}, // 1114 MaxReinvocationDelayALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25756, 26), 970}, // 1115 MaxReinvocationDelayINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25424, 14), 956}, // 1116 MinIterations in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25669, 15), 968}, // 1117 NoFusionALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25684, 14), 968}, // 1118 NoFusionINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(16244, 5), 951}, // 1119 None in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25480, 13), 960}, // 1120 PartialCount in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25470, 10), 959}, // 1121 PeelCount in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20104, 21), 964}, // 1122 PipelineEnableALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(20125, 20), 964}, // 1123 PipelineEnableINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25616, 27), 967}, // 1124 SpeculatedIterationsALTERA in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25643, 26), 967}, // 1125 SpeculatedIterationsINTEL in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(25370, 7), 952}, // 1126 Unroll in SPV_OPERAND_TYPE_LOOP_CONTROL
  {IR(26065, 27), 984}, // 1127 MatrixAPackedBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(26013, 26), 982}, // 1128 MatrixAPackedFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25933, 23), 978}, // 1129 MatrixAPackedInt4INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25887, 23), 976}, // 1130 MatrixAPackedInt8INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25782, 29), 972}, // 1131 MatrixASignedComponentsINTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25979, 17), 980}, // 1132 MatrixATF32INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(26092, 27), 985}, // 1133 MatrixBPackedBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(26039, 26), 983}, // 1134 MatrixBPackedFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25956, 23), 979}, // 1135 MatrixBPackedInt4INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25910, 23), 977}, // 1136 MatrixBPackedInt8INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25811, 29), 973}, // 1137 MatrixBSignedComponentsINTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25996, 17), 981}, // 1138 MatrixBTF32INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25840, 21), 974}, // 1139 MatrixCBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(25861, 26), 975}, // 1140 MatrixResultBFloat16INTEL in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(16244, 5), 971}, // 1141 None in SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS
  {IR(26252, 20), 993}, // 1142 AliasScopeINTELMask in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26119, 8), 988}, // 1143 Aligned in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26127, 21), 990}, // 1144 MakePointerAvailable in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26148, 24), 990}, // 1145 MakePointerAvailableKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26172, 19), 991}, // 1146 MakePointerVisible in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26191, 22), 991}, // 1147 MakePointerVisibleKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26272, 17), 994}, // 1148 NoAliasINTELMask in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26213, 18), 992}, // 1149 NonPrivatePointer in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26231, 21), 992}, // 1150 NonPrivatePointerKHR in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(16244, 5), 986}, // 1151 None in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(24602, 12), 989}, // 1152 Nontemporal in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(17482, 9), 987}, // 1153 Volatile in SPV_OPERAND_TYPE_MEMORY_ACCESS
  {IR(26296, 8), 996}, // 1154 GLSL450 in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(26304, 7), 997}, // 1155 OpenCL in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(26289, 7), 995}, // 1156 Simple in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(26311, 7), 998}, // 1157 Vulkan in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(26318, 10), 998}, // 1158 VulkanKHR in SPV_OPERAND_TYPE_MEMORY_MODEL
  {IR(26336, 8), 1000}, // 1159 Acquire in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26352, 15), 1002}, // 1160 AcquireRelease in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26456, 20), 1008}, // 1161 AtomicCounterMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26435, 21), 1007}, // 1162 CrossWorkgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26476, 12), 1009}, // 1163 ImageMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26517, 14), 1011}, // 1164 MakeAvailable in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26531, 17), 1011}, // 1165 MakeAvailableKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26548, 12), 1012}, // 1166 MakeVisible in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26560, 15), 1012}, // 1167 MakeVisibleKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(16244, 5), 999}, // 1168 None in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26488, 13), 1010}, // 1169 OutputMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26501, 16), 1010}, // 1170 OutputMemoryKHR in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26328, 8), 999}, // 1171 Relaxed in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26344, 8), 1001}, // 1172 Release in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26367, 23), 1003}, // 1173 SequentiallyConsistent in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26404, 15), 1005}, // 1174 SubgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26390, 14), 1004}, // 1175 UniformMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(17482, 9), 1013}, // 1176 Volatile in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26419, 16), 1006}, // 1177 WorkgroupMemory in SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID
  {IR(26575, 10), 1014}, // 1178 AutoINTEL in SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS
  {IR(26590, 4), 1016}, // 1179 SAT in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(26603, 8), 1018}, // 1180 SAT_SYM in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(26594, 9), 1017}, // 1181 SAT_ZERO in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(26585, 5), 1015}, // 1182 WRAP in SPV_OPERAND_TYPE_OVERFLOW_MODES
  {IR(26611, 25), 1019}, // 1183 PackedVectorFormat4x8Bit in SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {IR(26636, 28), 1019}, // 1184 PackedVectorFormat4x8BitKHR in SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT
  {IR(26677, 4), 1022}, // 1185 RND in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(26710, 9), 1026}, // 1186 RND_CONV in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(26719, 13), 1027}, // 1187 RND_CONV_ODD in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(26690, 8), 1024}, // 1188 RND_INF in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(26698, 12), 1025}, // 1189 RND_MIN_INF in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(26681, 9), 1023}, // 1190 RND_ZERO in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(26664, 4), 1020}, // 1191 TRN in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(26668, 9), 1021}, // 1192 TRN_ZERO in SPV_OPERAND_TYPE_QUANTIZATION_MODES
  {IR(16244, 5), 1028}, // 1193 None in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(26732, 25), 1029}, // 1194 RobustnessPerComponentNV in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(26757, 23), 1030}, // 1195 RobustnessPerElementNV in SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS
  {IR(26849, 27), 1036}, // 1196 CullBackFacingTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26876, 28), 1037}, // 1197 CullFrontFacingTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26918, 16), 1039}, // 1198 CullNoOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26904, 14), 1038}, // 1199 CullOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(27018, 30), 1042}, // 1200 ForceOpacityMicromap2StateEXT in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26988, 30), 1042}, // 1201 ForceOpacityMicromap2StateKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26790, 12), 1033}, // 1202 NoOpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(16996, 8), 1031}, // 1203 NoneKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26780, 10), 1032}, // 1204 OpaqueKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26975, 13), 1041}, // 1205 SkipAABBsKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26951, 24), 1040}, // 1206 SkipBuiltinPrimitivesNV in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26825, 24), 1035}, // 1207 SkipClosestHitShaderKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26934, 17), 1040}, // 1208 SkipTrianglesKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(26802, 23), 1034}, // 1209 TerminateOnFirstHitKHR in SPV_OPERAND_TYPE_RAY_FLAGS
  {IR(27089, 37), 1044}, // 1210 RayQueryCandidateIntersectionAABBKHR in SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {IR(27048, 41), 1043}, // 1211 RayQueryCandidateIntersectionTriangleKHR in SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE
  {IR(27204, 42), 1047}, // 1212 RayQueryCommittedIntersectionGeneratedKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(27126, 37), 1045}, // 1213 RayQueryCommittedIntersectionNoneKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(27163, 41), 1046}, // 1214 RayQueryCommittedIntersectionTriangleKHR in SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE
  {IR(27246, 33), 1048}, // 1215 RayQueryCandidateIntersectionKHR in SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {IR(27279, 33), 1049}, // 1216 RayQueryCommittedIntersectionKHR in SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION
  {IR(27324, 6), 1052}, // 1217 Clamp in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(27312, 12), 1051}, // 1218 ClampToEdge in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(16244, 5), 1050}, // 1219 None in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(27330, 7), 1053}, // 1220 Repeat in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(27337, 15), 1054}, // 1221 RepeatMirrored in SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE
  {IR(27360, 7), 1056}, // 1222 Linear in SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {IR(27352, 8), 1055}, // 1223 Nearest in SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE
  {IR(27425, 13), 1065}, // 1224 R11fG11fB10f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27467, 4), 1071}, // 1225 R16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27505, 9), 1076}, // 1226 R16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27438, 5), 1066}, // 1227 R16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27567, 5), 1085}, // 1228 R16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27638, 6), 1095}, // 1229 R16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27391, 5), 1060}, // 1230 R32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27545, 5), 1081}, // 1231 R32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27602, 6), 1090}, // 1232 R32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27655, 5), 1098}, // 1233 R64i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27649, 6), 1097}, // 1234 R64ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27471, 3), 1072}, // 1235 R8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27514, 8), 1077}, // 1236 R8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27572, 4), 1086}, // 1237 R8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27644, 5), 1096}, // 1238 R8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27458, 5), 1069}, // 1239 Rg16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27486, 10), 1074}, // 1240 Rg16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27419, 6), 1064}, // 1241 Rg16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27556, 6), 1083}, // 1242 Rg16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27625, 7), 1093}, // 1243 Rg16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27413, 6), 1063}, // 1244 Rg32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27550, 6), 1082}, // 1245 Rg32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27618, 7), 1092}, // 1246 Rg32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27463, 4), 1070}, // 1247 Rg8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27496, 9), 1075}, // 1248 Rg8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27562, 5), 1084}, // 1249 Rg8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27632, 6), 1094}, // 1250 Rg8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27450, 8), 1068}, // 1251 Rgb10A2 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27608, 10), 1091}, // 1252 Rgb10a2ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27443, 7), 1067}, // 1253 Rgba16 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27474, 12), 1073}, // 1254 Rgba16Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27383, 8), 1059}, // 1255 Rgba16f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27530, 8), 1079}, // 1256 Rgba16i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27585, 9), 1088}, // 1257 Rgba16ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27375, 8), 1058}, // 1258 Rgba32f in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27522, 8), 1078}, // 1259 Rgba32i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27576, 9), 1087}, // 1260 Rgba32ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27396, 6), 1061}, // 1261 Rgba8 in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27402, 11), 1062}, // 1262 Rgba8Snorm in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27538, 7), 1080}, // 1263 Rgba8i in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27594, 8), 1089}, // 1264 Rgba8ui in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27367, 8), 1057}, // 1265 Unknown in SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT
  {IR(27660, 12), 1099}, // 1266 CrossDevice in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(27672, 7), 1100}, // 1267 Device in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(27698, 11), 1103}, // 1268 Invocation in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(27709, 12), 1104}, // 1269 QueueFamily in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(27721, 15), 1104}, // 1270 QueueFamilyKHR in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(27736, 14), 1105}, // 1271 ShaderCallKHR in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(27689, 9), 1102}, // 1272 Subgroup in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(27679, 10), 1101}, // 1273 Workgroup in SPV_OPERAND_TYPE_SCOPE_ID
  {IR(27758, 12), 1108}, // 1274 DontFlatten in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(27750, 8), 1107}, // 1275 Flatten in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(16244, 5), 1106}, // 1276 None in SPV_OPERAND_TYPE_SELECTION_CONTROL
  {IR(27770, 29), 1109}, // 1277 IdentifierPossibleDuplicates in SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS
  {IR(16125, 8), 1111}, // 1278 Address in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16133, 8), 1112}, // 1279 Boolean in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16141, 6), 1113}, // 1280 Float in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16147, 7), 1114}, // 1281 Signed in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16154, 11), 1115}, // 1282 SignedChar in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16165, 9), 1116}, // 1283 Unsigned in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16174, 13), 1117}, // 1284 UnsignedChar in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16113, 12), 1110}, // 1285 Unspecified in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING
  {IR(16187, 6), 1118}, // 1286 Class in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(16193, 10), 1119}, // 1287 Structure in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(16203, 6), 1120}, // 1288 Union in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE
  {IR(16224, 20), 1122}, // 1289 ImportedDeclaration in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(16209, 15), 1121}, // 1290 ImportedModule in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY
  {IR(16333, 15), 1130}, // 1291 FlagArtificial in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16348, 13), 1131}, // 1292 FlagExplicit in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16321, 12), 1129}, // 1293 FlagFwdDecl in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16411, 21), 1135}, // 1294 FlagIndirectVariable in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16304, 17), 1128}, // 1295 FlagIsDefinition in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16488, 16), 1139}, // 1296 FlagIsEnumClass in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16292, 12), 1127}, // 1297 FlagIsLocal in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16472, 16), 1138}, // 1298 FlagIsOptimized in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16265, 14), 1125}, // 1299 FlagIsPrivate in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16249, 16), 1124}, // 1300 FlagIsProtected in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16279, 13), 1126}, // 1301 FlagIsPublic in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16432, 20), 1136}, // 1302 FlagLValueReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16376, 18), 1133}, // 1303 FlagObjectPointer in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16361, 15), 1132}, // 1304 FlagPrototyped in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16452, 20), 1137}, // 1305 FlagRValueReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16394, 17), 1134}, // 1306 FlagStaticMember in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16524, 24), 1141}, // 1307 FlagTypePassByReference in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16504, 20), 1140}, // 1308 FlagTypePassByValue in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(27799, 26), 1142}, // 1309 FlagUnknownPhysicalLayout in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16244, 5), 1123}, // 1310 None in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS
  {IR(16609, 9), 1147}, // 1311 BitPiece in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16641, 7), 1151}, // 1312 Constu in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16548, 6), 1143}, // 1313 Deref in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16648, 9), 1152}, // 1314 Fragment in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16559, 6), 1145}, // 1315 Minus in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16554, 5), 1144}, // 1316 Plus in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16598, 11), 1146}, // 1317 PlusUconst in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16630, 11), 1150}, // 1318 StackValue in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16618, 5), 1148}, // 1319 Swap in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16623, 7), 1149}, // 1320 Xderef in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION
  {IR(16693, 11), 1156}, // 1321 AtomicType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(16657, 10), 1153}, // 1322 ConstType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(16680, 13), 1155}, // 1323 RestrictType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(16667, 13), 1154}, // 1324 VolatileType in SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER
  {IR(27860, 15), 1163}, // 1325 CPP_for_OpenCL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27825, 5), 1158}, // 1326 ESSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27830, 5), 1159}, // 1327 GLSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27880, 7), 1165}, // 1328 HERO_C in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27855, 5), 1162}, // 1329 HLSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27887, 5), 1166}, // 1330 NZSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27835, 9), 1160}, // 1331 OpenCL_C in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27844, 11), 1161}, // 1332 OpenCL_CPP in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27907, 5), 1170}, // 1333 Rust in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27875, 5), 1164}, // 1334 SYCL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27897, 6), 1168}, // 1335 Slang in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27367, 8), 1157}, // 1336 Unknown in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27892, 5), 1167}, // 1337 WGSL in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27903, 4), 1169}, // 1338 Zig in SPV_OPERAND_TYPE_SOURCE_LANGUAGE
  {IR(27994, 14), 1181}, // 1339 AtomicCounter in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28076, 16), 1187}, // 1340 CallableDataKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28092, 15), 1187}, // 1341 CallableDataNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28412, 17), 1197}, // 1342 CodeSectionINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27941, 15), 1176}, // 1343 CrossWorkgroup in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28429, 17), 1198}, // 1344 DeviceOnlyALTERA in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28446, 16), 1198}, // 1345 DeviceOnlyINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27964, 9), 1178}, // 1346 Function in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27973, 8), 1179}, // 1347 Generic in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28181, 16), 1190}, // 1348 HitAttributeKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28197, 15), 1190}, // 1349 HitAttributeNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28390, 22), 1196}, // 1350 HitObjectAttributeEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28345, 21), 1194}, // 1351 HitObjectAttributeNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28462, 15), 1199}, // 1352 HostOnlyALTERA in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28477, 14), 1199}, // 1353 HostOnlyINTEL in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28008, 6), 1182}, // 1354 Image in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28107, 24), 1188}, // 1355 IncomingCallableDataKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28131, 23), 1188}, // 1356 IncomingCallableDataNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28212, 22), 1191}, // 1357 IncomingRayPayloadKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28234, 21), 1191}, // 1358 IncomingRayPayloadNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27928, 6), 1172}, // 1359 Input in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28060, 16), 1186}, // 1360 NodePayloadAMDX in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27934, 7), 1174}, // 1361 Output in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28298, 22), 1193}, // 1362 PhysicalStorageBuffer in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28320, 25), 1193}, // 1363 PhysicalStorageBufferEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27956, 8), 1177}, // 1364 Private in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27981, 13), 1180}, // 1365 PushConstant in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28154, 14), 1189}, // 1366 RayPayloadKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28168, 13), 1189}, // 1367 RayPayloadNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28255, 22), 1192}, // 1368 ShaderRecordBufferKHR in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28277, 21), 1192}, // 1369 ShaderRecordBufferNV in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28014, 14), 1183}, // 1370 StorageBuffer in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28366, 24), 1195}, // 1371 TaskPayloadWorkgroupEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28041, 19), 1185}, // 1372 TileAttachmentQCOM in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(28028, 13), 1184}, // 1373 TileImageEXT in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(17533, 8), 1173}, // 1374 Uniform in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27912, 16), 1171}, // 1375 UniformConstant in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(27679, 10), 1175}, // 1376 Workgroup in SPV_OPERAND_TYPE_STORAGE_CLASS
  {IR(25313, 15), 1203}, // 1377 StreamingINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(25287, 14), 1200}, // 1378 UncachedINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(28509, 15), 1202}, // 1379 WriteBackINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(28491, 18), 1201}, // 1380 WriteThroughINTEL in SPV_OPERAND_TYPE_STORE_CACHE_CONTROL
  {IR(28535, 11), 1206}, // 1381 DecodeFunc in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(16244, 5), 1204}, // 1382 None in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(28524, 11), 1205}, // 1383 TensorView in SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS
  {IR(27312, 12), 1209}, // 1384 ClampToEdge in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(17491, 9), 1208}, // 1385 Constant in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(27330, 7), 1210}, // 1386 Repeat in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(27337, 15), 1211}, // 1387 RepeatMirrored in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(28546, 10), 1207}, // 1388 Undefined in SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE
  {IR(28599, 24), 1215}, // 1389 MakeElementAvailableARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(28623, 22), 1216}, // 1390 MakeElementVisibleARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(28645, 21), 1217}, // 1391 NonPrivateElementARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(28556, 8), 1212}, // 1392 NoneARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(28564, 15), 1213}, // 1393 NontemporalARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
  {IR(28579, 20), 1214}, // 1394 OutOfBoundsValueARM in SPV_OPERAND_TYPE_TENSOR_OPERANDS
}};

IndexRange OperandNameRangeForKind(spv_operand_type_t type) {
  switch(type) {
    case SPV_OPERAND_TYPE_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_ADDRESSING_MODEL: return IR(3, 5);
    case SPV_OPERAND_TYPE_BUILT_IN: return IR(8, 150);
    case SPV_OPERAND_TYPE_CAPABILITY: return IR(158, 342);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(500, 8);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(508, 3);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(511, 2);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS: return IR(513, 19);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION: return IR(532, 10);
    case SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(542, 4);
    case SPV_OPERAND_TYPE_COMPONENT_TYPE: return IR(546, 15);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_LAYOUT: return IR(561, 4);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_OPERANDS: return IR(565, 6);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE: return IR(571, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_USE: return IR(574, 3);
    case SPV_OPERAND_TYPE_COOPERATIVE_VECTOR_MATRIX_LAYOUT: return IR(577, 4);
    case SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(581, 8);
    case SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE: return IR(589, 3);
    case SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS: return IR(592, 16);
    case SPV_OPERAND_TYPE_DEBUG_OPERATION: return IR(608, 9);
    case SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER: return IR(617, 3);
    case SPV_OPERAND_TYPE_DECORATION: return IR(620, 198);
    case SPV_OPERAND_TYPE_DIMENSIONALITY: return IR(818, 8);
    case SPV_OPERAND_TYPE_EXECUTION_MODE: return IR(826, 104);
    case SPV_OPERAND_TYPE_EXECUTION_MODEL: return IR(930, 23);
    case SPV_OPERAND_TYPE_FPDENORM_MODE: return IR(953, 2);
    case SPV_OPERAND_TYPE_FPENCODING: return IR(955, 3);
    case SPV_OPERAND_TYPE_FPOPERATION_MODE: return IR(958, 2);
    case SPV_OPERAND_TYPE_FP_FAST_MATH_MODE: return IR(960, 11);
    case SPV_OPERAND_TYPE_FP_ROUNDING_MODE: return IR(971, 4);
    case SPV_OPERAND_TYPE_FRAGMENT_SHADING_RATE: return IR(975, 4);
    case SPV_OPERAND_TYPE_FUNCTION_CONTROL: return IR(979, 7);
    case SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE: return IR(986, 10);
    case SPV_OPERAND_TYPE_GROUP_OPERATION: return IR(996, 10);
    case SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER: return IR(1006, 4);
    case SPV_OPERAND_TYPE_IMAGE: return IR(1010, 21);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_DATA_TYPE: return IR(1031, 26);
    case SPV_OPERAND_TYPE_IMAGE_CHANNEL_ORDER: return IR(1057, 20);
    case SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER: return IR(1077, 4);
    case SPV_OPERAND_TYPE_KERNEL_ENQ_FLAGS: return IR(1081, 3);
    case SPV_OPERAND_TYPE_KERNEL_PROFILING_INFO: return IR(1084, 2);
    case SPV_OPERAND_TYPE_KERNEL_PROPERTY_FLAGS: return IR(1086, 2);
    case SPV_OPERAND_TYPE_LINKAGE_TYPE: return IR(1088, 4);
    case SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL: return IR(1092, 5);
    case SPV_OPERAND_TYPE_LOOP_CONTROL: return IR(1097, 30);
    case SPV_OPERAND_TYPE_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(1127, 15);
    case SPV_OPERAND_TYPE_MEMORY_ACCESS: return IR(1142, 12);
    case SPV_OPERAND_TYPE_MEMORY_MODEL: return IR(1154, 5);
    case SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID: return IR(1159, 19);
    case SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS: return IR(1178, 1);
    case SPV_OPERAND_TYPE_OVERFLOW_MODES: return IR(1179, 4);
    case SPV_OPERAND_TYPE_PACKED_VECTOR_FORMAT: return IR(1183, 2);
    case SPV_OPERAND_TYPE_QUANTIZATION_MODES: return IR(1185, 8);
    case SPV_OPERAND_TYPE_RAW_ACCESS_CHAIN_OPERANDS: return IR(1193, 3);
    case SPV_OPERAND_TYPE_RAY_FLAGS: return IR(1196, 14);
    case SPV_OPERAND_TYPE_RAY_QUERY_CANDIDATE_INTERSECTION_TYPE: return IR(1210, 2);
    case SPV_OPERAND_TYPE_RAY_QUERY_COMMITTED_INTERSECTION_TYPE: return IR(1212, 3);
    case SPV_OPERAND_TYPE_RAY_QUERY_INTERSECTION: return IR(1215, 2);
    case SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE: return IR(1217, 5);
    case SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE: return IR(1222, 2);
    case SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT: return IR(1224, 42);
    case SPV_OPERAND_TYPE_SCOPE_ID: return IR(1266, 8);
    case SPV_OPERAND_TYPE_SELECTION_CONTROL: return IR(1274, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_BUILD_IDENTIFIER_FLAGS: return IR(1277, 1);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING: return IR(1278, 8);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_COMPOSITE_TYPE: return IR(1286, 3);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_IMPORTED_ENTITY: return IR(1289, 2);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_INFO_FLAGS: return IR(1291, 20);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_OPERATION: return IR(1311, 10);
    case SPV_OPERAND_TYPE_SHDEBUG100_DEBUG_TYPE_QUALIFIER: return IR(1321, 4);
    case SPV_OPERAND_TYPE_SOURCE_LANGUAGE: return IR(1325, 14);
    case SPV_OPERAND_TYPE_STORAGE_CLASS: return IR(1339, 38);
    case SPV_OPERAND_TYPE_STORE_CACHE_CONTROL: return IR(1377, 4);
    case SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS: return IR(1381, 3);
    case SPV_OPERAND_TYPE_TENSOR_CLAMP_MODE: return IR(1384, 5);
    case SPV_OPERAND_TYPE_TENSOR_OPERANDS: return IR(1389, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_IMAGE: return IR(1010, 21);
    case SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER: return IR(0, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS: return IR(1142, 12);
    case SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT: return IR(1183, 2);
    case SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS: return IR(565, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS: return IR(1127, 15);
    case SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS: return IR(1193, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_FPENCODING: return IR(955, 3);
    case SPV_OPERAND_TYPE_OPTIONAL_TENSOR_OPERANDS: return IR(1389, 6);
    case SPV_OPERAND_TYPE_OPTIONAL_CAPABILITY: return IR(158, 342);
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
static const std::array<InstructionDesc, 873> kInstructionDesc{{
  {spv::Op::OpNop, false, false, IR(0, 0), IR(28666, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpUndef, true, true, IR(39, 2), IR(28722, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpSourceContinued, false, false, IR(11, 1), IR(28728, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpSource, false, false, IR(41, 4), IR(28847, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpSourceExtension, false, false, IR(11, 1), IR(28854, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpName, false, false, IR(45, 2), IR(28870, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpMemberName, false, false, IR(47, 3), IR(28875, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpString, true, false, IR(50, 2), IR(28886, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpLine, false, false, IR(52, 3), IR(28893, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpExtension, false, false, IR(11, 1), IR(28898, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpExtInstImport, true, false, IR(50, 2), IR(28908, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpExtInst, true, true, IR(55, 4), IR(28968, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpMemoryModel, false, false, IR(59, 2), IR(29040, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpEntryPoint, false, false, IR(61, 4), IR(29114, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpExecutionMode, false, false, IR(65, 2), IR(29157, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpCapability, false, false, IR(67, 1), IR(29199, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpTypeVoid, true, false, IR(68, 1), IR(29210, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeBool, true, false, IR(68, 1), IR(29219, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeInt, true, false, IR(69, 3), IR(29228, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeFloat, true, false, IR(72, 3), IR(29273, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeVector, true, false, IR(75, 3), IR(29283, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeMatrix, true, false, IR(75, 3), IR(29294, 11), IR(0, 0), IR(67, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeImage, true, false, IR(78, 9), IR(29418, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeSampler, true, false, IR(68, 1), IR(29428, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeSampledImage, true, false, IR(87, 2), IR(29440, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeArray, true, false, IR(89, 3), IR(29457, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeRuntimeArray, true, false, IR(87, 2), IR(29467, 17), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeStruct, true, false, IR(92, 2), IR(29484, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeOpaque, true, false, IR(50, 2), IR(29495, 11), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypePointer, true, false, IR(94, 3), IR(29537, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeFunction, true, false, IR(97, 3), IR(29549, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeEvent, true, false, IR(68, 1), IR(29562, 10), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeDeviceEvent, true, false, IR(68, 1), IR(29572, 16), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeReserveId, true, false, IR(68, 1), IR(29588, 14), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeQueue, true, false, IR(68, 1), IR(29602, 10), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypePipe, true, false, IR(100, 2), IR(29612, 9), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeForwardPointer, false, false, IR(102, 2), IR(29621, 19), IR(0, 0), IR(214, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantTrue, true, true, IR(39, 2), IR(29640, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantFalse, true, true, IR(39, 2), IR(29653, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstant, true, true, IR(104, 3), IR(17491, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantComposite, true, true, IR(107, 3), IR(29705, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantSampler, true, true, IR(110, 5), IR(29801, 16), IR(0, 0), IR(216, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantNull, true, true, IR(39, 2), IR(29817, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantTrue, true, true, IR(39, 2), IR(29830, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantFalse, true, true, IR(39, 2), IR(29847, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstant, true, true, IR(104, 3), IR(29865, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantComposite, true, true, IR(107, 3), IR(29878, 22), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantOp, true, true, IR(115, 3), IR(29941, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpFunction, true, true, IR(118, 4), IR(27964, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionParameter, true, true, IR(39, 2), IR(29990, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionEnd, false, false, IR(0, 0), IR(30008, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpFunctionCall, true, true, IR(122, 4), IR(30020, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpVariable, true, true, IR(126, 4), IR(30033, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpImageTexelPointer, true, true, IR(130, 5), IR(30042, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpLoad, true, true, IR(135, 4), IR(30100, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpStore, false, false, IR(139, 3), IR(30105, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCopyMemory, false, false, IR(142, 4), IR(30111, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCopyMemorySized, false, false, IR(146, 5), IR(30122, 16), IR(0, 0), IR(217, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpAccessChain, true, true, IR(122, 4), IR(30138, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpInBoundsAccessChain, true, true, IR(122, 4), IR(30150, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrAccessChain, true, true, IR(151, 5), IR(30170, 15), IR(0, 0), IR(219, 4), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpArrayLength, true, true, IR(156, 4), IR(30185, 12), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpGenericPtrMemSemantics, true, true, IR(160, 3), IR(30197, 23), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpInBoundsPtrAccessChain, true, true, IR(151, 5), IR(30220, 23), IR(0, 0), IR(1, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpDecorate, false, false, IR(163, 2), IR(30271, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpMemberDecorate, false, false, IR(165, 3), IR(30280, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpDecorationGroup, true, false, IR(68, 1), IR(30295, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupDecorate, false, false, IR(168, 2), IR(30311, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupMemberDecorate, false, false, IR(170, 2), IR(30370, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpVectorExtractDynamic, true, true, IR(172, 4), IR(30390, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpVectorInsertDynamic, true, true, IR(130, 5), IR(30411, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpVectorShuffle, true, true, IR(176, 5), IR(30431, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeConstruct, true, true, IR(107, 3), IR(30445, 19), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeExtract, true, true, IR(181, 4), IR(30464, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeInsert, true, true, IR(176, 5), IR(30481, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCopyObject, true, true, IR(160, 3), IR(30497, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpTranspose, true, true, IR(160, 3), IR(30508, 10), IR(0, 0), IR(67, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpSampledImage, true, true, IR(172, 4), IR(30518, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleImplicitLod, true, true, IR(185, 5), IR(30563, 23), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleExplicitLod, true, true, IR(190, 5), IR(30609, 23), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleDrefImplicitLod, true, true, IR(195, 6), IR(30632, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleDrefExplicitLod, true, true, IR(201, 6), IR(30659, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjImplicitLod, true, true, IR(185, 5), IR(30686, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjExplicitLod, true, true, IR(190, 5), IR(30713, 27), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjDrefImplicitLod, true, true, IR(195, 6), IR(30740, 31), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSampleProjDrefExplicitLod, true, true, IR(201, 6), IR(30771, 31), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageFetch, true, true, IR(185, 5), IR(30802, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageGather, true, true, IR(195, 6), IR(30813, 12), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageDrefGather, true, true, IR(195, 6), IR(30825, 16), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageRead, true, true, IR(185, 5), IR(30841, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageWrite, false, false, IR(207, 4), IR(30851, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImage, true, true, IR(160, 3), IR(28008, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryFormat, true, true, IR(160, 3), IR(30862, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryOrder, true, true, IR(160, 3), IR(30879, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySizeLod, true, true, IR(172, 4), IR(30895, 18), IR(0, 0), IR(223, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySize, true, true, IR(160, 3), IR(30913, 15), IR(0, 0), IR(223, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryLod, true, true, IR(172, 4), IR(30928, 14), IR(0, 0), IR(225, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQueryLevels, true, true, IR(160, 3), IR(30942, 17), IR(0, 0), IR(223, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageQuerySamples, true, true, IR(160, 3), IR(30959, 18), IR(0, 0), IR(223, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpConvertFToU, true, true, IR(160, 3), IR(30977, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertFToS, true, true, IR(160, 3), IR(30989, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertSToF, true, true, IR(160, 3), IR(31001, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToF, true, true, IR(160, 3), IR(31013, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpUConvert, true, true, IR(160, 3), IR(31025, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSConvert, true, true, IR(160, 3), IR(31034, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpFConvert, true, true, IR(160, 3), IR(31043, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpQuantizeToF16, true, true, IR(160, 3), IR(31052, 14), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertPtrToU, true, true, IR(160, 3), IR(31066, 14), IR(0, 0), IR(214, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSatConvertSToU, true, true, IR(160, 3), IR(31080, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSatConvertUToS, true, true, IR(160, 3), IR(31095, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToPtr, true, true, IR(160, 3), IR(31110, 14), IR(0, 0), IR(214, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpPtrCastToGeneric, true, true, IR(160, 3), IR(31124, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpGenericCastToPtr, true, true, IR(160, 3), IR(31141, 17), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpGenericCastToPtrExplicit, true, true, IR(211, 4), IR(31158, 25), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpBitcast, true, true, IR(160, 3), IR(31183, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpSNegate, true, true, IR(160, 3), IR(31191, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFNegate, true, true, IR(160, 3), IR(31199, 8), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIAdd, true, true, IR(172, 4), IR(31207, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFAdd, true, true, IR(172, 4), IR(31212, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpISub, true, true, IR(172, 4), IR(31217, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFSub, true, true, IR(172, 4), IR(31222, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIMul, true, true, IR(172, 4), IR(31227, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFMul, true, true, IR(172, 4), IR(31232, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDiv, true, true, IR(172, 4), IR(31237, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSDiv, true, true, IR(172, 4), IR(31242, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFDiv, true, true, IR(172, 4), IR(31247, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUMod, true, true, IR(172, 4), IR(31252, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSRem, true, true, IR(172, 4), IR(31257, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSMod, true, true, IR(172, 4), IR(31262, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFRem, true, true, IR(172, 4), IR(31267, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpFMod, true, true, IR(172, 4), IR(31272, 5), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpVectorTimesScalar, true, true, IR(172, 4), IR(31277, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesScalar, true, true, IR(172, 4), IR(31295, 18), IR(0, 0), IR(67, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpVectorTimesMatrix, true, true, IR(172, 4), IR(31313, 18), IR(0, 0), IR(67, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesVector, true, true, IR(172, 4), IR(31331, 18), IR(0, 0), IR(67, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpMatrixTimesMatrix, true, true, IR(172, 4), IR(31349, 18), IR(0, 0), IR(67, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpOuterProduct, true, true, IR(172, 4), IR(31367, 13), IR(0, 0), IR(67, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpDot, true, true, IR(172, 4), IR(31380, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpIAddCarry, true, true, IR(172, 4), IR(31384, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpISubBorrow, true, true, IR(172, 4), IR(31394, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUMulExtended, true, true, IR(172, 4), IR(31405, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSMulExtended, true, true, IR(172, 4), IR(31418, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpAny, true, true, IR(160, 3), IR(31431, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpAll, true, true, IR(160, 3), IR(31435, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsNan, true, true, IR(160, 3), IR(31439, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsInf, true, true, IR(160, 3), IR(31445, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsFinite, true, true, IR(160, 3), IR(31451, 9), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIsNormal, true, true, IR(160, 3), IR(31460, 9), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSignBitSet, true, true, IR(160, 3), IR(31469, 11), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLessOrGreater, true, true, IR(172, 4), IR(31480, 14), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), SPV_SPIRV_VERSION_WORD(1,5), PrintingClass::kRelational_and_Logical},
  {spv::Op::OpOrdered, true, true, IR(172, 4), IR(31494, 8), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUnordered, true, true, IR(172, 4), IR(31502, 10), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalEqual, true, true, IR(172, 4), IR(31512, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalNotEqual, true, true, IR(172, 4), IR(31525, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalOr, true, true, IR(172, 4), IR(31541, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalAnd, true, true, IR(172, 4), IR(31551, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpLogicalNot, true, true, IR(160, 3), IR(31562, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSelect, true, true, IR(130, 5), IR(31573, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpIEqual, true, true, IR(172, 4), IR(31580, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpINotEqual, true, true, IR(172, 4), IR(31587, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUGreaterThan, true, true, IR(172, 4), IR(31597, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSGreaterThan, true, true, IR(172, 4), IR(31610, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpUGreaterThanEqual, true, true, IR(172, 4), IR(31623, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSGreaterThanEqual, true, true, IR(172, 4), IR(31641, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpULessThan, true, true, IR(172, 4), IR(31659, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSLessThan, true, true, IR(172, 4), IR(31669, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpULessThanEqual, true, true, IR(172, 4), IR(31679, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpSLessThanEqual, true, true, IR(172, 4), IR(31694, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdEqual, true, true, IR(172, 4), IR(31709, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordEqual, true, true, IR(172, 4), IR(31719, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdNotEqual, true, true, IR(172, 4), IR(31731, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordNotEqual, true, true, IR(172, 4), IR(31744, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdLessThan, true, true, IR(172, 4), IR(31759, 13), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordLessThan, true, true, IR(172, 4), IR(31772, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdGreaterThan, true, true, IR(172, 4), IR(31787, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordGreaterThan, true, true, IR(172, 4), IR(31803, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdLessThanEqual, true, true, IR(172, 4), IR(31821, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordLessThanEqual, true, true, IR(172, 4), IR(31839, 20), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFOrdGreaterThanEqual, true, true, IR(172, 4), IR(31859, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpFUnordGreaterThanEqual, true, true, IR(172, 4), IR(31880, 23), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kRelational_and_Logical},
  {spv::Op::OpShiftRightLogical, true, true, IR(172, 4), IR(31903, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpShiftRightArithmetic, true, true, IR(172, 4), IR(31921, 21), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpShiftLeftLogical, true, true, IR(172, 4), IR(31942, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseOr, true, true, IR(172, 4), IR(31959, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseXor, true, true, IR(172, 4), IR(31969, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitwiseAnd, true, true, IR(172, 4), IR(31980, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpNot, true, true, IR(160, 3), IR(31991, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldInsert, true, true, IR(215, 6), IR(31995, 15), IR(0, 0), IR(226, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldSExtract, true, true, IR(130, 5), IR(32010, 17), IR(0, 0), IR(226, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitFieldUExtract, true, true, IR(130, 5), IR(32027, 17), IR(0, 0), IR(226, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitReverse, true, true, IR(160, 3), IR(32044, 11), IR(0, 0), IR(226, 2), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpBitCount, true, true, IR(160, 3), IR(32055, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpDPdx, true, true, IR(160, 3), IR(32064, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdy, true, true, IR(160, 3), IR(32069, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidth, true, true, IR(160, 3), IR(32074, 7), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdxFine, true, true, IR(160, 3), IR(32081, 9), IR(0, 0), IR(228, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdyFine, true, true, IR(160, 3), IR(32090, 9), IR(0, 0), IR(228, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidthFine, true, true, IR(160, 3), IR(32099, 11), IR(0, 0), IR(228, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdxCoarse, true, true, IR(160, 3), IR(32110, 11), IR(0, 0), IR(228, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpDPdyCoarse, true, true, IR(160, 3), IR(32121, 11), IR(0, 0), IR(228, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpFwidthCoarse, true, true, IR(160, 3), IR(32132, 13), IR(0, 0), IR(228, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDerivative},
  {spv::Op::OpEmitVertex, false, false, IR(0, 0), IR(32145, 11), IR(0, 0), IR(70, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEndPrimitive, false, false, IR(0, 0), IR(32156, 13), IR(0, 0), IR(70, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEmitStreamVertex, false, false, IR(10, 1), IR(32169, 17), IR(0, 0), IR(122, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpEndStreamPrimitive, false, false, IR(10, 1), IR(32186, 19), IR(0, 0), IR(122, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPrimitive},
  {spv::Op::OpControlBarrier, false, false, IR(221, 3), IR(32242, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpMemoryBarrier, false, false, IR(224, 2), IR(32257, 14), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpAtomicLoad, true, true, IR(226, 5), IR(32271, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicStore, false, false, IR(231, 4), IR(32282, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicExchange, true, true, IR(235, 6), IR(32294, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicCompareExchange, true, true, IR(241, 8), IR(32309, 22), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicCompareExchangeWeak, true, true, IR(241, 8), IR(32331, 26), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), SPV_SPIRV_VERSION_WORD(1,3), PrintingClass::kAtomic},
  {spv::Op::OpAtomicIIncrement, true, true, IR(226, 5), IR(32357, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicIDecrement, true, true, IR(226, 5), IR(32374, 17), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicIAdd, true, true, IR(235, 6), IR(32391, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicISub, true, true, IR(235, 6), IR(32402, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicSMin, true, true, IR(235, 6), IR(32413, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicUMin, true, true, IR(235, 6), IR(32424, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicSMax, true, true, IR(235, 6), IR(32435, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicUMax, true, true, IR(235, 6), IR(32446, 11), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicAnd, true, true, IR(235, 6), IR(32457, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicOr, true, true, IR(235, 6), IR(32467, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicXor, true, true, IR(235, 6), IR(32476, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpPhi, true, true, IR(107, 3), IR(32486, 4), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLoopMerge, false, false, IR(249, 3), IR(32520, 10), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpSelectionMerge, false, false, IR(252, 2), IR(32565, 15), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLabel, true, false, IR(68, 1), IR(32580, 6), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpBranch, false, false, IR(10, 1), IR(32586, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpBranchConditional, false, false, IR(254, 4), IR(32593, 18), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpSwitch, false, false, IR(258, 3), IR(32656, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpKill, false, false, IR(0, 0), IR(32663, 5), IR(0, 0), IR(3, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpReturn, false, false, IR(0, 0), IR(32668, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpReturnValue, false, false, IR(10, 1), IR(32675, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpUnreachable, false, false, IR(0, 0), IR(32687, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLifetimeStart, false, false, IR(261, 2), IR(32699, 14), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpLifetimeStop, false, false, IR(261, 2), IR(32713, 13), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpGroupAsyncCopy, true, true, IR(263, 8), IR(32726, 15), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupWaitEvents, false, false, IR(271, 3), IR(32741, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupAll, true, true, IR(274, 4), IR(32757, 9), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupAny, true, true, IR(274, 4), IR(32766, 9), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBroadcast, true, true, IR(278, 5), IR(32775, 15), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupIAdd, true, true, IR(283, 5), IR(32823, 10), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFAdd, true, true, IR(283, 5), IR(32833, 10), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMin, true, true, IR(283, 5), IR(32843, 10), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMin, true, true, IR(283, 5), IR(32853, 10), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMin, true, true, IR(283, 5), IR(32863, 10), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMax, true, true, IR(283, 5), IR(32873, 10), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMax, true, true, IR(283, 5), IR(32883, 10), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMax, true, true, IR(283, 5), IR(32893, 10), IR(0, 0), IR(229, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpReadPipe, true, true, IR(215, 6), IR(32903, 9), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpWritePipe, true, true, IR(215, 6), IR(32912, 10), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReservedReadPipe, true, true, IR(288, 8), IR(32922, 17), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReservedWritePipe, true, true, IR(288, 8), IR(32939, 18), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReserveReadPipePackets, true, true, IR(215, 6), IR(32957, 23), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpReserveWritePipePackets, true, true, IR(215, 6), IR(32980, 24), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCommitReadPipe, false, false, IR(296, 4), IR(33004, 15), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCommitWritePipe, false, false, IR(296, 4), IR(33019, 16), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpIsValidReserveId, true, true, IR(160, 3), IR(33035, 17), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetNumPipePackets, true, true, IR(130, 5), IR(33052, 18), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetMaxPipePackets, true, true, IR(130, 5), IR(33070, 18), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupReserveReadPipePackets, true, true, IR(300, 7), IR(33088, 28), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupReserveWritePipePackets, true, true, IR(300, 7), IR(33116, 29), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupCommitReadPipe, false, false, IR(307, 5), IR(33145, 20), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGroupCommitWritePipe, false, false, IR(307, 5), IR(33165, 21), IR(0, 0), IR(76, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpEnqueueMarker, true, true, IR(215, 6), IR(33186, 14), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpEnqueueKernel, true, true, IR(312, 13), IR(33200, 14), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelNDrangeSubGroupCount, true, true, IR(325, 7), IR(33214, 30), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelNDrangeMaxSubGroupSize, true, true, IR(325, 7), IR(33244, 32), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelWorkGroupSize, true, true, IR(215, 6), IR(33276, 23), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelPreferredWorkGroupSizeMultiple, true, true, IR(215, 6), IR(33299, 40), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpRetainEvent, false, false, IR(10, 1), IR(33339, 12), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpReleaseEvent, false, false, IR(10, 1), IR(33351, 13), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpCreateUserEvent, true, true, IR(39, 2), IR(33364, 16), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpIsValidEvent, true, true, IR(160, 3), IR(33380, 13), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpSetUserEventStatus, false, false, IR(36, 2), IR(33393, 19), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpCaptureEventProfilingInfo, false, false, IR(33, 3), IR(33412, 26), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetDefaultQueue, true, true, IR(39, 2), IR(33438, 16), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpBuildNDRange, true, true, IR(130, 5), IR(33454, 13), IR(0, 0), IR(75, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpImageSparseSampleImplicitLod, true, true, IR(185, 5), IR(33467, 29), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleExplicitLod, true, true, IR(190, 5), IR(33496, 29), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleDrefImplicitLod, true, true, IR(195, 6), IR(33525, 33), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleDrefExplicitLod, true, true, IR(201, 6), IR(33558, 33), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjImplicitLod, true, true, IR(185, 5), IR(33591, 33), IR(0, 0), IR(230, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjExplicitLod, true, true, IR(190, 5), IR(33624, 33), IR(0, 0), IR(230, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjDrefImplicitLod, true, true, IR(195, 6), IR(33657, 37), IR(0, 0), IR(230, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseSampleProjDrefExplicitLod, true, true, IR(201, 6), IR(33694, 37), IR(0, 0), IR(230, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseFetch, true, true, IR(185, 5), IR(33731, 17), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseGather, true, true, IR(195, 6), IR(33748, 18), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseDrefGather, true, true, IR(195, 6), IR(33766, 22), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageSparseTexelsResident, true, true, IR(160, 3), IR(33788, 26), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpNoLine, false, false, IR(0, 0), IR(33814, 7), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpAtomicFlagTestAndSet, true, true, IR(226, 5), IR(33821, 21), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicFlagClear, false, false, IR(332, 3), IR(33842, 16), IR(0, 0), IR(0, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpImageSparseRead, true, true, IR(185, 5), IR(33858, 16), IR(0, 0), IR(230, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,0), 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpSizeOf, true, true, IR(160, 3), IR(33874, 7), IR(0, 0), IR(1, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpTypePipeStorage, true, false, IR(68, 1), IR(33881, 16), IR(0, 0), IR(231, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantPipeStorage, true, true, IR(335, 5), IR(33897, 20), IR(0, 0), IR(231, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpCreatePipeFromPipeStorage, true, true, IR(160, 3), IR(33917, 26), IR(0, 0), IR(231, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kPipe},
  {spv::Op::OpGetKernelLocalSizeForSubgroupCount, true, true, IR(325, 7), IR(33943, 35), IR(0, 0), IR(162, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpGetKernelMaxNumSubgroups, true, true, IR(215, 6), IR(33978, 25), IR(0, 0), IR(162, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDevice_Side_Enqueue},
  {spv::Op::OpTypeNamedBarrier, true, false, IR(68, 1), IR(34003, 17), IR(0, 0), IR(232, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpNamedBarrierInitialize, true, true, IR(160, 3), IR(34020, 23), IR(0, 0), IR(232, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpMemoryNamedBarrier, false, false, IR(332, 3), IR(34043, 19), IR(0, 0), IR(232, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpModuleProcessed, false, false, IR(11, 1), IR(34062, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,1), 0xffffffffu, PrintingClass::kDebug},
  {spv::Op::OpExecutionModeId, false, false, IR(65, 2), IR(34078, 16), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,2), 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpDecorateId, false, false, IR(163, 2), IR(34094, 11), IR(0, 0), IR(1, 0), IR(193, 1), SPV_SPIRV_VERSION_WORD(1,2), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpGroupNonUniformElect, true, true, IR(340, 3), IR(34105, 21), IR(0, 0), IR(77, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAll, true, true, IR(274, 4), IR(34126, 19), IR(0, 0), IR(233, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAny, true, true, IR(274, 4), IR(34145, 19), IR(0, 0), IR(233, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformAllEqual, true, true, IR(274, 4), IR(34164, 24), IR(0, 0), IR(233, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBroadcast, true, true, IR(278, 5), IR(34188, 25), IR(0, 0), IR(234, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBroadcastFirst, true, true, IR(274, 4), IR(34213, 30), IR(0, 0), IR(234, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallot, true, true, IR(274, 4), IR(6675, 22), IR(0, 0), IR(234, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformInverseBallot, true, true, IR(274, 4), IR(34243, 29), IR(0, 0), IR(234, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotBitExtract, true, true, IR(278, 5), IR(34272, 32), IR(0, 0), IR(234, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotBitCount, true, true, IR(283, 5), IR(34304, 30), IR(0, 0), IR(234, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotFindLSB, true, true, IR(274, 4), IR(34334, 29), IR(0, 0), IR(234, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBallotFindMSB, true, true, IR(274, 4), IR(34363, 29), IR(0, 0), IR(234, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffle, true, true, IR(278, 5), IR(9814, 23), IR(0, 0), IR(235, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleXor, true, true, IR(278, 5), IR(34392, 26), IR(0, 0), IR(235, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleUp, true, true, IR(278, 5), IR(34418, 25), IR(0, 0), IR(236, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformShuffleDown, true, true, IR(278, 5), IR(34443, 27), IR(0, 0), IR(236, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformIAdd, true, true, IR(343, 6), IR(34470, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFAdd, true, true, IR(343, 6), IR(34490, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformIMul, true, true, IR(343, 6), IR(34510, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMul, true, true, IR(343, 6), IR(34530, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformSMin, true, true, IR(343, 6), IR(34550, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformUMin, true, true, IR(343, 6), IR(34570, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMin, true, true, IR(343, 6), IR(34590, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformSMax, true, true, IR(343, 6), IR(34610, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformUMax, true, true, IR(343, 6), IR(34630, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformFMax, true, true, IR(343, 6), IR(34650, 20), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseAnd, true, true, IR(343, 6), IR(34670, 26), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseOr, true, true, IR(343, 6), IR(34696, 25), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformBitwiseXor, true, true, IR(343, 6), IR(34721, 26), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalAnd, true, true, IR(343, 6), IR(34747, 26), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalOr, true, true, IR(343, 6), IR(34773, 25), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformLogicalXor, true, true, IR(343, 6), IR(34798, 26), IR(0, 0), IR(237, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadBroadcast, true, true, IR(278, 5), IR(34824, 29), IR(0, 0), IR(240, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadSwap, true, true, IR(278, 5), IR(34853, 24), IR(0, 0), IR(240, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,3), 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpCopyLogical, true, true, IR(160, 3), IR(34877, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpPtrEqual, true, true, IR(172, 4), IR(34889, 9), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrNotEqual, true, true, IR(172, 4), IR(34898, 12), IR(0, 0), IR(1, 0), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPtrDiff, true, true, IR(172, 4), IR(34910, 8), IR(0, 0), IR(241, 3), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpColorAttachmentReadEXT, true, true, IR(349, 4), IR(34918, 23), IR(0, 0), IR(154, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpDepthAttachmentReadEXT, true, true, IR(353, 3), IR(34941, 23), IR(0, 0), IR(163, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpStencilAttachmentReadEXT, true, true, IR(353, 3), IR(34964, 25), IR(0, 0), IR(164, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpTypeTensorARM, true, false, IR(356, 4), IR(34989, 14), IR(0, 0), IR(213, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTensorReadARM, true, true, IR(360, 5), IR(35045, 14), IR(0, 0), IR(213, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kTensor},
  {spv::Op::OpTensorWriteARM, false, false, IR(365, 4), IR(35059, 15), IR(0, 0), IR(213, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kTensor},
  {spv::Op::OpTensorQuerySizeARM, true, true, IR(172, 4), IR(35074, 19), IR(0, 0), IR(213, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kTensor},
  {spv::Op::OpGraphConstantARM, true, true, IR(369, 3), IR(35093, 17), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphEntryPointARM, false, false, IR(372, 3), IR(35110, 19), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphARM, true, true, IR(39, 2), IR(10105, 9), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphInputARM, true, true, IR(122, 4), IR(35129, 14), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphSetOutputARM, false, false, IR(375, 3), IR(35143, 18), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpGraphEndARM, false, false, IR(0, 0), IR(35161, 12), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGraph},
  {spv::Op::OpTypeGraphARM, true, false, IR(378, 3), IR(35173, 13), IR(0, 0), IR(244, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTerminateInvocation, false, false, IR(0, 0), IR(35186, 20), IR(0, 0), IR(3, 1), IR(203, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpTypeUntypedPointerKHR, true, false, IR(381, 2), IR(35206, 22), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpUntypedVariableKHR, true, true, IR(383, 5), IR(35228, 19), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedAccessChainKHR, true, true, IR(151, 5), IR(35247, 22), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedInBoundsAccessChainKHR, true, true, IR(151, 5), IR(35269, 30), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpSubgroupBallotKHR, true, true, IR(160, 3), IR(6436, 18), IR(0, 0), IR(245, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupFirstInvocationKHR, true, true, IR(160, 3), IR(35299, 27), IR(0, 0), IR(245, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpUntypedPtrAccessChainKHR, true, true, IR(388, 6), IR(35326, 25), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedInBoundsPtrAccessChainKHR, true, true, IR(388, 6), IR(35351, 33), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedArrayLengthKHR, true, true, IR(394, 5), IR(35384, 22), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpUntypedPrefetchKHR, false, false, IR(399, 5), IR(35406, 19), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpFmaKHR, true, true, IR(130, 5), IR(35425, 7), IR(0, 0), IR(246, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSubgroupAllKHR, true, true, IR(160, 3), IR(35432, 15), IR(0, 0), IR(247, 1), IR(41, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupAnyKHR, true, true, IR(160, 3), IR(35447, 15), IR(0, 0), IR(247, 1), IR(41, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupAllEqualKHR, true, true, IR(160, 3), IR(35462, 20), IR(0, 0), IR(247, 1), IR(41, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupNonUniformRotateKHR, true, true, IR(404, 6), IR(14936, 25), IR(0, 0), IR(248, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupReadInvocationKHR, true, true, IR(172, 4), IR(35482, 26), IR(0, 0), IR(245, 1), IR(2, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpExtInstWithForwardRefsKHR, true, true, IR(410, 5), IR(35508, 26), IR(0, 0), IR(1, 0), IR(204, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpUntypedGroupAsyncCopyKHR, true, true, IR(415, 11), IR(35534, 25), IR(0, 0), IR(93, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpTraceRayKHR, false, false, IR(426, 11), IR(35559, 12), IR(0, 0), IR(61, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpExecuteCallableKHR, false, false, IR(36, 2), IR(35571, 19), IR(0, 0), IR(61, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToAccelerationStructureKHR, true, true, IR(160, 3), IR(35590, 35), IR(0, 0), IR(249, 2), IR(205, 2), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIgnoreIntersectionKHR, false, false, IR(0, 0), IR(35625, 22), IR(0, 0), IR(61, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTerminateRayKHR, false, false, IR(0, 0), IR(35647, 16), IR(0, 0), IR(61, 1), IR(28, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSDot, true, true, IR(437, 5), IR(35710, 5), IR(173, 1), IR(251, 1), IR(149, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDot, true, true, IR(437, 5), IR(35723, 5), IR(174, 1), IR(251, 1), IR(149, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSUDot, true, true, IR(437, 5), IR(35736, 6), IR(175, 1), IR(251, 1), IR(149, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSDotAccSat, true, true, IR(442, 6), IR(35751, 11), IR(176, 1), IR(251, 1), IR(149, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpUDotAccSat, true, true, IR(442, 6), IR(35776, 11), IR(177, 1), IR(251, 1), IR(149, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpSUDotAccSat, true, true, IR(442, 6), IR(35801, 12), IR(178, 1), IR(251, 1), IR(149, 1), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpTypeCooperativeMatrixKHR, true, false, IR(448, 6), IR(35828, 25), IR(0, 0), IR(87, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeMatrixLoadKHR, true, true, IR(454, 6), IR(35853, 25), IR(0, 0), IR(87, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixStoreKHR, false, false, IR(460, 5), IR(35878, 26), IR(0, 0), IR(87, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixMulAddKHR, true, true, IR(465, 6), IR(35958, 27), IR(0, 0), IR(87, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpCooperativeMatrixLengthKHR, true, true, IR(160, 3), IR(35985, 27), IR(0, 0), IR(87, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpConstantCompositeReplicateEXT, true, true, IR(160, 3), IR(36012, 30), IR(0, 0), IR(252, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCompositeReplicateEXT, true, true, IR(160, 3), IR(36042, 34), IR(0, 0), IR(252, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpCompositeConstructReplicateEXT, true, true, IR(160, 3), IR(36076, 31), IR(0, 0), IR(252, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpTypeRayQueryKHR, true, false, IR(68, 1), IR(36107, 16), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpRayQueryInitializeKHR, false, false, IR(471, 8), IR(36123, 22), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryTerminateKHR, false, false, IR(10, 1), IR(36145, 21), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGenerateIntersectionKHR, false, false, IR(36, 2), IR(36166, 32), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryConfirmIntersectionKHR, false, false, IR(10, 1), IR(36198, 31), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryProceedKHR, true, true, IR(160, 3), IR(36229, 19), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTypeKHR, true, true, IR(172, 4), IR(36248, 31), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpImageSampleWeightedQCOM, true, true, IR(130, 5), IR(36279, 24), IR(0, 0), IR(253, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBoxFilterQCOM, true, true, IR(130, 5), IR(36303, 19), IR(0, 0), IR(254, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchSSDQCOM, true, true, IR(325, 7), IR(36322, 23), IR(0, 0), IR(255, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchSADQCOM, true, true, IR(325, 7), IR(36345, 23), IR(0, 0), IR(255, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpBitCastArrayQCOM, true, true, IR(160, 3), IR(36368, 17), IR(0, 0), IR(256, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpImageBlockMatchWindowSSDQCOM, true, true, IR(325, 7), IR(36385, 29), IR(0, 0), IR(257, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchWindowSADQCOM, true, true, IR(325, 7), IR(36414, 29), IR(0, 0), IR(257, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchGatherSSDQCOM, true, true, IR(325, 7), IR(36443, 29), IR(0, 0), IR(257, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpImageBlockMatchGatherSADQCOM, true, true, IR(325, 7), IR(36472, 29), IR(0, 0), IR(257, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpCompositeConstructCoopMatQCOM, true, true, IR(160, 3), IR(36501, 30), IR(0, 0), IR(256, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpCompositeExtractCoopMatQCOM, true, true, IR(160, 3), IR(36531, 28), IR(0, 0), IR(256, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpExtractSubArrayQCOM, true, true, IR(172, 4), IR(36559, 20), IR(0, 0), IR(256, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpGroupIAddNonUniformAMD, true, true, IR(283, 5), IR(36579, 23), IR(0, 0), IR(229, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFAddNonUniformAMD, true, true, IR(283, 5), IR(36602, 23), IR(0, 0), IR(229, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMinNonUniformAMD, true, true, IR(283, 5), IR(36625, 23), IR(0, 0), IR(229, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMinNonUniformAMD, true, true, IR(283, 5), IR(36648, 23), IR(0, 0), IR(229, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMinNonUniformAMD, true, true, IR(283, 5), IR(36671, 23), IR(0, 0), IR(229, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMaxNonUniformAMD, true, true, IR(283, 5), IR(36694, 23), IR(0, 0), IR(229, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupUMaxNonUniformAMD, true, true, IR(283, 5), IR(36717, 23), IR(0, 0), IR(229, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupSMaxNonUniformAMD, true, true, IR(283, 5), IR(36740, 23), IR(0, 0), IR(229, 1), IR(33, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpFragmentMaskFetchAMD, true, true, IR(172, 4), IR(36763, 21), IR(0, 0), IR(258, 1), IR(58, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFragmentFetchAMD, true, true, IR(130, 5), IR(36784, 17), IR(0, 0), IR(258, 1), IR(58, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReadClockKHR, true, true, IR(340, 3), IR(36801, 13), IR(0, 0), IR(259, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAllocateNodePayloadsAMDX, true, true, IR(278, 5), IR(36814, 25), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpEnqueueNodePayloadsAMDX, false, false, IR(10, 1), IR(36839, 24), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeNodePayloadArrayAMDX, true, false, IR(87, 2), IR(36863, 25), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFinishWritingNodePayloadAMDX, true, true, IR(160, 3), IR(36888, 29), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpNodePayloadArrayLengthAMDX, true, true, IR(160, 3), IR(36917, 27), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIsNodePayloadValidAMDX, true, true, IR(172, 4), IR(36944, 23), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConstantStringAMDX, true, false, IR(50, 2), IR(36967, 19), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSpecConstantStringAMDX, true, false, IR(50, 2), IR(36986, 23), IR(0, 0), IR(43, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpGroupNonUniformQuadAllKHR, true, true, IR(160, 3), IR(37009, 26), IR(0, 0), IR(171, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpGroupNonUniformQuadAnyKHR, true, true, IR(160, 3), IR(37035, 26), IR(0, 0), IR(171, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpTypeBufferEXT, true, false, IR(381, 2), IR(37061, 14), IR(0, 0), IR(44, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpBufferPointerEXT, true, true, IR(160, 3), IR(37075, 17), IR(0, 0), IR(44, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpAbortKHR, false, false, IR(36, 2), IR(11182, 9), IR(0, 0), IR(260, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpUntypedImageTexelPointerEXT, true, true, IR(215, 6), IR(37092, 28), IR(0, 0), IR(44, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpMemberDecorateIdEXT, false, false, IR(165, 3), IR(37120, 20), IR(0, 0), IR(44, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpConstantSizeOfEXT, true, true, IR(160, 3), IR(37140, 18), IR(0, 0), IR(44, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConstantDataKHR, true, true, IR(479, 3), IR(11191, 16), IR(0, 0), IR(126, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantDataKHR, true, true, IR(479, 3), IR(37158, 20), IR(0, 0), IR(126, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpPoisonKHR, true, true, IR(39, 2), IR(37178, 10), IR(0, 0), IR(172, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpFreezeKHR, true, true, IR(160, 3), IR(37188, 10), IR(0, 0), IR(172, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpHitObjectRecordHitMotionNV, false, false, IR(482, 14), IR(37198, 27), IR(0, 0), IR(261, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitWithIndexMotionNV, false, false, IR(496, 13), IR(37225, 36), IR(0, 0), IR(261, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissMotionNV, false, false, IR(509, 7), IR(37261, 28), IR(0, 0), IR(261, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldToObjectNV, true, true, IR(160, 3), IR(37289, 28), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectToWorldNV, true, true, IR(160, 3), IR(37317, 28), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayDirectionNV, true, true, IR(160, 3), IR(37345, 33), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayOriginNV, true, true, IR(160, 3), IR(37378, 30), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayMotionNV, false, false, IR(496, 13), IR(37408, 26), IR(0, 0), IR(261, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderRecordBufferHandleNV, true, true, IR(160, 3), IR(37434, 39), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderBindingTableRecordIndexNV, true, true, IR(160, 3), IR(37473, 44), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordEmptyNV, false, false, IR(10, 1), IR(37517, 23), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayNV, false, false, IR(516, 12), IR(37540, 20), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitNV, false, false, IR(496, 13), IR(37560, 21), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordHitWithIndexNV, false, false, IR(516, 12), IR(37581, 30), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissNV, false, false, IR(528, 6), IR(37611, 22), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectExecuteShaderNV, false, false, IR(36, 2), IR(37633, 25), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetCurrentTimeNV, true, true, IR(160, 3), IR(37658, 26), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetAttributesNV, false, false, IR(36, 2), IR(37684, 25), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetHitKindNV, true, true, IR(160, 3), IR(37709, 22), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetPrimitiveIndexNV, true, true, IR(160, 3), IR(37731, 29), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetGeometryIndexNV, true, true, IR(160, 3), IR(37760, 28), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceIdNV, true, true, IR(160, 3), IR(37788, 25), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceCustomIndexNV, true, true, IR(160, 3), IR(37813, 34), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayDirectionNV, true, true, IR(160, 3), IR(37847, 32), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayOriginNV, true, true, IR(160, 3), IR(37879, 29), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMaxNV, true, true, IR(160, 3), IR(37908, 22), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMinNV, true, true, IR(160, 3), IR(37930, 22), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsEmptyNV, true, true, IR(160, 3), IR(37952, 19), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsHitNV, true, true, IR(160, 3), IR(37971, 17), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsMissNV, true, true, IR(160, 3), IR(37988, 18), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHitObjectNV, false, false, IR(534, 3), IR(38006, 29), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHintNV, false, false, IR(36, 2), IR(38035, 24), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeHitObjectNV, true, false, IR(68, 1), IR(38059, 16), IR(0, 0), IR(132, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpImageSampleFootprintNV, true, true, IR(537, 7), IR(38075, 23), IR(0, 0), IR(263, 1), IR(77, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpTypeVectorIdEXT, true, false, IR(89, 3), IR(38098, 16), IR(179, 1), IR(264, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeVectorMatrixMulNV, true, true, IR(544, 13), IR(38138, 29), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorOuterProductAccumulateNV, false, false, IR(557, 7), IR(38167, 42), IR(0, 0), IR(267, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorReduceSumAccumulateNV, false, false, IR(33, 3), IR(38209, 39), IR(0, 0), IR(267, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorMatrixMulAddNV, true, true, IR(564, 16), IR(38248, 32), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixConvertNV, true, true, IR(160, 3), IR(38280, 27), IR(0, 0), IR(268, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpEmitMeshTasksEXT, false, false, IR(580, 4), IR(38307, 17), IR(0, 0), IR(54, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSetMeshOutputsEXT, false, false, IR(36, 2), IR(38324, 18), IR(0, 0), IR(54, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpGroupNonUniformPartitionEXT, true, true, IR(160, 3), IR(38342, 28), IR(180, 1), IR(193, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kNon_Uniform},
  {spv::Op::OpWritePackedPrimitiveIndices4x8NV, false, false, IR(36, 2), IR(38397, 33), IR(0, 0), IR(51, 1), IR(18, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFetchMicroTriangleVertexPositionNV, true, true, IR(325, 7), IR(38430, 35), IR(0, 0), IR(269, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFetchMicroTriangleVertexBarycentricNV, true, true, IR(325, 7), IR(38465, 38), IR(0, 0), IR(269, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeVectorLoadNV, true, true, IR(584, 5), IR(38503, 24), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeVectorStoreNV, false, false, IR(589, 4), IR(38527, 25), IR(0, 0), IR(266, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpHitObjectRecordFromQueryEXT, false, false, IR(593, 5), IR(38552, 28), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissEXT, false, false, IR(509, 7), IR(38580, 23), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordMissMotionEXT, false, false, IR(471, 8), IR(38603, 29), IR(0, 0), IR(270, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetIntersectionTriangleVertexPositionsEXT, true, true, IR(160, 3), IR(38632, 51), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayFlagsEXT, true, true, IR(160, 3), IR(38683, 24), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectSetShaderBindingTableRecordIndexEXT, false, false, IR(36, 2), IR(38707, 45), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectReorderExecuteShaderEXT, false, false, IR(598, 4), IR(38752, 33), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceReorderExecuteEXT, false, false, IR(602, 14), IR(38785, 32), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceMotionReorderExecuteEXT, false, false, IR(616, 15), IR(38817, 38), IR(0, 0), IR(270, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeHitObjectEXT, true, false, IR(68, 1), IR(38855, 17), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpReorderThreadWithHintEXT, false, false, IR(36, 2), IR(38872, 25), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReorderThreadWithHitObjectEXT, false, false, IR(534, 3), IR(38897, 30), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayEXT, false, false, IR(516, 12), IR(38927, 21), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectTraceRayMotionEXT, false, false, IR(496, 13), IR(38948, 27), IR(0, 0), IR(270, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectRecordEmptyEXT, false, false, IR(10, 1), IR(38975, 24), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectExecuteShaderEXT, false, false, IR(36, 2), IR(38999, 26), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetCurrentTimeEXT, true, true, IR(160, 3), IR(39025, 27), IR(0, 0), IR(270, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetAttributesEXT, false, false, IR(36, 2), IR(39052, 26), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetHitKindEXT, true, true, IR(160, 3), IR(39078, 23), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetPrimitiveIndexEXT, true, true, IR(160, 3), IR(39101, 30), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetGeometryIndexEXT, true, true, IR(160, 3), IR(39131, 29), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceIdEXT, true, true, IR(160, 3), IR(39160, 26), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetInstanceCustomIndexEXT, true, true, IR(160, 3), IR(39186, 35), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayOriginEXT, true, true, IR(160, 3), IR(39221, 31), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectRayDirectionEXT, true, true, IR(160, 3), IR(39252, 34), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayDirectionEXT, true, true, IR(160, 3), IR(39286, 33), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldRayOriginEXT, true, true, IR(160, 3), IR(39319, 30), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetObjectToWorldEXT, true, true, IR(160, 3), IR(39349, 29), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetWorldToObjectEXT, true, true, IR(160, 3), IR(39378, 29), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMaxEXT, true, true, IR(160, 3), IR(39407, 23), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpReportIntersectionKHR, true, true, IR(172, 4), IR(39430, 22), IR(181, 1), IR(55, 2), IR(24, 2), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIgnoreIntersectionNV, false, false, IR(0, 0), IR(39473, 21), IR(0, 0), IR(57, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTerminateRayNV, false, false, IR(0, 0), IR(39494, 15), IR(0, 0), IR(57, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceNV, false, false, IR(426, 11), IR(39509, 8), IR(0, 0), IR(57, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceMotionNV, false, false, IR(516, 12), IR(39517, 14), IR(0, 0), IR(58, 1), IR(27, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTraceRayMotionNV, false, false, IR(516, 12), IR(39531, 17), IR(0, 0), IR(58, 1), IR(27, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTriangleVertexPositionsKHR, true, true, IR(172, 4), IR(39548, 50), IR(0, 0), IR(272, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeAccelerationStructureKHR, true, false, IR(68, 1), IR(39598, 29), IR(182, 1), IR(273, 4), IR(207, 4), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpExecuteCallableNV, false, false, IR(36, 2), IR(39655, 18), IR(0, 0), IR(57, 1), IR(26, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionClusterIdNV, true, true, IR(172, 4), IR(39673, 35), IR(183, 1), IR(65, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetClusterIdNV, true, true, IR(160, 3), IR(39731, 24), IR(0, 0), IR(65, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetRayTMinEXT, true, true, IR(160, 3), IR(39755, 23), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderBindingTableRecordIndexEXT, true, true, IR(160, 3), IR(39778, 45), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetShaderRecordBufferHandleEXT, true, true, IR(160, 3), IR(39823, 40), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsEmptyEXT, true, true, IR(160, 3), IR(39863, 20), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsHitEXT, true, true, IR(160, 3), IR(39883, 18), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsMissEXT, true, true, IR(160, 3), IR(39901, 19), IR(0, 0), IR(133, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTypeCooperativeMatrixNV, true, false, IR(631, 5), IR(39920, 24), IR(0, 0), IR(277, 1), IR(85, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCooperativeMatrixLoadNV, true, true, IR(636, 6), IR(39944, 24), IR(0, 0), IR(277, 1), IR(85, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixStoreNV, false, false, IR(642, 5), IR(39968, 25), IR(0, 0), IR(277, 1), IR(85, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixMulAddNV, true, true, IR(130, 5), IR(39993, 26), IR(0, 0), IR(277, 1), IR(85, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixLengthNV, true, true, IR(160, 3), IR(40019, 26), IR(0, 0), IR(277, 1), IR(85, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpBeginInvocationInterlockEXT, false, false, IR(0, 0), IR(40045, 28), IR(0, 0), IR(278, 3), IR(86, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpEndInvocationInterlockEXT, false, false, IR(0, 0), IR(40073, 26), IR(0, 0), IR(278, 3), IR(86, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixReduceNV, true, true, IR(647, 5), IR(40142, 26), IR(0, 0), IR(281, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kArithmetic},
  {spv::Op::OpCooperativeMatrixLoadTensorNV, true, true, IR(652, 7), IR(40243, 30), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixStoreTensorNV, false, false, IR(659, 5), IR(40273, 31), IR(0, 0), IR(211, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpCooperativeMatrixPerElementOpNV, true, true, IR(151, 5), IR(40304, 32), IR(0, 0), IR(282, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kFunction},
  {spv::Op::OpTypeTensorLayoutNV, true, false, IR(89, 3), IR(40336, 19), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeTensorViewNV, true, false, IR(664, 4), IR(40355, 17), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpCreateTensorLayoutNV, true, true, IR(39, 2), IR(40372, 21), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetDimensionNV, true, true, IR(122, 4), IR(40393, 27), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetStrideNV, true, true, IR(122, 4), IR(40420, 24), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSliceNV, true, true, IR(122, 4), IR(40444, 20), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetClampValueNV, true, true, IR(172, 4), IR(40464, 28), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCreateTensorViewNV, true, true, IR(39, 2), IR(40492, 19), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetDimensionNV, true, true, IR(122, 4), IR(40511, 25), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetStrideNV, true, true, IR(122, 4), IR(40536, 22), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpDemoteToHelperInvocation, false, false, IR(0, 0), IR(12722, 25), IR(46, 1), IR(284, 1), IR(0, 0), SPV_SPIRV_VERSION_WORD(1,6), 0xffffffffu, PrintingClass::kControl_Flow},
  {spv::Op::OpIsHelperInvocationEXT, true, true, IR(39, 2), IR(40558, 22), IR(0, 0), IR(284, 1), IR(87, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorViewSetClipNV, true, true, IR(325, 7), IR(40580, 20), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpTensorLayoutSetBlockSizeNV, true, true, IR(122, 4), IR(40600, 27), IR(0, 0), IR(283, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpCooperativeMatrixTransposeNV, true, true, IR(160, 3), IR(40627, 29), IR(0, 0), IR(268, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertUToImageNV, true, true, IR(160, 3), IR(40656, 18), IR(0, 0), IR(134, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToSamplerNV, true, true, IR(160, 3), IR(40674, 20), IR(0, 0), IR(134, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertImageToUNV, true, true, IR(160, 3), IR(40694, 18), IR(0, 0), IR(134, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertSamplerToUNV, true, true, IR(160, 3), IR(40712, 20), IR(0, 0), IR(134, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertUToSampledImageNV, true, true, IR(160, 3), IR(40732, 25), IR(0, 0), IR(134, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConvertSampledImageToUNV, true, true, IR(160, 3), IR(40757, 25), IR(0, 0), IR(134, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSamplerImageAddressingModeNV, false, false, IR(0, 1), IR(40782, 29), IR(0, 0), IR(134, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRawAccessChainNV, true, true, IR(668, 7), IR(40863, 17), IR(0, 0), IR(200, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpRayQueryGetIntersectionSpherePositionNV, true, true, IR(172, 4), IR(40880, 40), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionSphereRadiusNV, true, true, IR(172, 4), IR(40920, 38), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSPositionsNV, true, true, IR(172, 4), IR(40958, 38), IR(0, 0), IR(63, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSRadiiNV, true, true, IR(172, 4), IR(40996, 34), IR(0, 0), IR(63, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionLSSHitValueNV, true, true, IR(172, 4), IR(41030, 37), IR(0, 0), IR(63, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetSpherePositionNV, true, true, IR(160, 3), IR(41067, 29), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetSphereRadiusNV, true, true, IR(160, 3), IR(41096, 27), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetLSSPositionsNV, true, true, IR(160, 3), IR(41123, 27), IR(0, 0), IR(63, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectGetLSSRadiiNV, true, true, IR(160, 3), IR(41150, 23), IR(0, 0), IR(63, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsSphereHitNV, true, true, IR(160, 3), IR(41173, 23), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpHitObjectIsLSSHitNV, true, true, IR(160, 3), IR(41196, 20), IR(0, 0), IR(63, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryIsSphereHitNV, true, true, IR(172, 4), IR(41216, 22), IR(0, 0), IR(62, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryIsLSSHitNV, true, true, IR(172, 4), IR(41238, 19), IR(0, 0), IR(63, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpSubgroupShuffleINTEL, true, true, IR(172, 4), IR(13283, 21), IR(0, 0), IR(285, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleDownINTEL, true, true, IR(130, 5), IR(41257, 25), IR(0, 0), IR(285, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleUpINTEL, true, true, IR(130, 5), IR(41282, 23), IR(0, 0), IR(285, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupShuffleXorINTEL, true, true, IR(172, 4), IR(41305, 24), IR(0, 0), IR(285, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupBlockReadINTEL, true, true, IR(160, 3), IR(41329, 23), IR(0, 0), IR(286, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupBlockWriteINTEL, false, false, IR(36, 2), IR(41352, 24), IR(0, 0), IR(286, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageBlockReadINTEL, true, true, IR(172, 4), IR(41376, 28), IR(0, 0), IR(287, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageBlockWriteINTEL, false, false, IR(33, 3), IR(41404, 29), IR(0, 0), IR(287, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageMediaBlockReadINTEL, true, true, IR(215, 6), IR(41433, 33), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupImageMediaBlockWriteINTEL, false, false, IR(675, 5), IR(41466, 34), IR(0, 0), IR(288, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpUCountLeadingZerosINTEL, true, true, IR(160, 3), IR(41500, 24), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUCountTrailingZerosINTEL, true, true, IR(160, 3), IR(41524, 25), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAbsISubINTEL, true, true, IR(172, 4), IR(41549, 13), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAbsUSubINTEL, true, true, IR(172, 4), IR(41562, 13), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAddSatINTEL, true, true, IR(172, 4), IR(41575, 13), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAddSatINTEL, true, true, IR(172, 4), IR(41588, 13), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAverageINTEL, true, true, IR(172, 4), IR(41601, 14), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAverageINTEL, true, true, IR(172, 4), IR(41615, 14), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIAverageRoundedINTEL, true, true, IR(172, 4), IR(41629, 21), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUAverageRoundedINTEL, true, true, IR(172, 4), IR(41650, 21), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpISubSatINTEL, true, true, IR(172, 4), IR(41671, 13), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUSubSatINTEL, true, true, IR(172, 4), IR(41684, 13), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpIMul32x16INTEL, true, true, IR(172, 4), IR(41697, 15), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpUMul32x16INTEL, true, true, IR(172, 4), IR(41712, 15), IR(0, 0), IR(289, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpConstantFunctionPointerINTEL, true, true, IR(160, 3), IR(41727, 29), IR(0, 0), IR(209, 1), IR(106, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFunctionPointerCallINTEL, true, true, IR(107, 3), IR(41756, 25), IR(0, 0), IR(209, 1), IR(106, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmTargetINTEL, true, false, IR(50, 2), IR(41781, 15), IR(0, 0), IR(137, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmINTEL, true, true, IR(680, 6), IR(13501, 9), IR(0, 0), IR(137, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAsmCallINTEL, true, true, IR(122, 4), IR(41796, 13), IR(0, 0), IR(137, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAtomicFMinEXT, true, true, IR(235, 6), IR(41809, 14), IR(0, 0), IR(290, 4), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAtomicFMaxEXT, true, true, IR(235, 6), IR(41823, 14), IR(0, 0), IR(290, 4), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpAssumeTrueKHR, false, false, IR(10, 1), IR(41837, 14), IR(0, 0), IR(294, 1), IR(110, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpExpectKHR, true, true, IR(172, 4), IR(41851, 10), IR(0, 0), IR(294, 1), IR(110, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpDecorateString, false, false, IR(163, 2), IR(41861, 15), IR(184, 1), IR(1, 0), IR(211, 2), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpMemberDecorateString, false, false, IR(165, 3), IR(41897, 21), IR(185, 1), IR(1, 0), IR(211, 2), SPV_SPIRV_VERSION_WORD(1,4), 0xffffffffu, PrintingClass::kAnnotation},
  {spv::Op::OpVmeImageINTEL, true, true, IR(172, 4), IR(41945, 14), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeVmeImageINTEL, true, false, IR(87, 2), IR(41959, 18), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImePayloadINTEL, true, false, IR(68, 1), IR(41977, 23), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcRefPayloadINTEL, true, false, IR(68, 1), IR(42000, 23), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcSicPayloadINTEL, true, false, IR(68, 1), IR(42023, 23), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcMcePayloadINTEL, true, false, IR(68, 1), IR(42046, 23), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcMceResultINTEL, true, false, IR(68, 1), IR(42069, 22), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultINTEL, true, false, IR(68, 1), IR(42091, 22), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultSingleReferenceStreamoutINTEL, true, false, IR(68, 1), IR(42113, 46), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeResultDualReferenceStreamoutINTEL, true, false, IR(68, 1), IR(42159, 44), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeSingleReferenceStreaminINTEL, true, false, IR(68, 1), IR(42203, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcImeDualReferenceStreaminINTEL, true, false, IR(68, 1), IR(42242, 37), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcRefResultINTEL, true, false, IR(68, 1), IR(42279, 22), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeAvcSicResultINTEL, true, false, IR(68, 1), IR(42301, 22), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL, true, true, IR(172, 4), IR(42323, 60), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL, true, true, IR(172, 4), IR(42383, 53), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterShapePenaltyINTEL, true, true, IR(172, 4), IR(42436, 47), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterShapePenaltyINTEL, true, true, IR(172, 4), IR(42483, 40), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL, true, true, IR(172, 4), IR(42523, 51), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetInterDirectionPenaltyINTEL, true, true, IR(172, 4), IR(42574, 44), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL, true, true, IR(172, 4), IR(42618, 51), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL, true, true, IR(172, 4), IR(42669, 56), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL, true, true, IR(39, 2), IR(42725, 50), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL, true, true, IR(39, 2), IR(42775, 52), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL, true, true, IR(39, 2), IR(42827, 49), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetMotionVectorCostFunctionINTEL, true, true, IR(215, 6), IR(42876, 47), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL, true, true, IR(172, 4), IR(42923, 50), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL, true, true, IR(39, 2), IR(42973, 51), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL, true, true, IR(39, 2), IR(43024, 56), IR(0, 0), IR(298, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetAcOnlyHaarINTEL, true, true, IR(160, 3), IR(43080, 33), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL, true, true, IR(172, 4), IR(43113, 52), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL, true, true, IR(172, 4), IR(43165, 61), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL, true, true, IR(130, 5), IR(43226, 61), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToImePayloadINTEL, true, true, IR(160, 3), IR(43287, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToImeResultINTEL, true, true, IR(160, 3), IR(43326, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToRefPayloadINTEL, true, true, IR(160, 3), IR(43364, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToRefResultINTEL, true, true, IR(160, 3), IR(43403, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToSicPayloadINTEL, true, true, IR(160, 3), IR(43441, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceConvertToSicResultINTEL, true, true, IR(160, 3), IR(43480, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetMotionVectorsINTEL, true, true, IR(160, 3), IR(43518, 36), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterDistortionsINTEL, true, true, IR(160, 3), IR(43554, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetBestInterDistortionsINTEL, true, true, IR(160, 3), IR(43593, 43), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMajorShapeINTEL, true, true, IR(160, 3), IR(43636, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMinorShapeINTEL, true, true, IR(160, 3), IR(43674, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterDirectionsINTEL, true, true, IR(160, 3), IR(43712, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterMotionVectorCountINTEL, true, true, IR(160, 3), IR(43750, 45), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterReferenceIdsINTEL, true, true, IR(160, 3), IR(43795, 40), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL, true, true, IR(130, 5), IR(43835, 62), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeInitializeINTEL, true, true, IR(130, 5), IR(43897, 30), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetSingleReferenceINTEL, true, true, IR(130, 5), IR(43927, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetDualReferenceINTEL, true, true, IR(215, 6), IR(43965, 36), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeRefWindowSizeINTEL, true, true, IR(172, 4), IR(44001, 33), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeAdjustRefOffsetINTEL, true, true, IR(215, 6), IR(44034, 35), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(44069, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetMaxMotionVectorCountINTEL, true, true, IR(172, 4), IR(44108, 43), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetUnidirectionalMixDisableINTEL, true, true, IR(160, 3), IR(44151, 47), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetEarlySearchTerminationThresholdINTEL, true, true, IR(172, 4), IR(44198, 54), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeSetWeightedSadINTEL, true, true, IR(172, 4), IR(44252, 34), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(44286, 47), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(44333, 45), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL, true, true, IR(215, 6), IR(44378, 55), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL, true, true, IR(325, 7), IR(44433, 53), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL, true, true, IR(130, 5), IR(44486, 56), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL, true, true, IR(215, 6), IR(44542, 54), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL, true, true, IR(215, 6), IR(44596, 58), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL, true, true, IR(325, 7), IR(44654, 56), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeConvertToMceResultINTEL, true, true, IR(160, 3), IR(44710, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetSingleReferenceStreaminINTEL, true, true, IR(160, 3), IR(44748, 46), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetDualReferenceStreaminINTEL, true, true, IR(160, 3), IR(44794, 44), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeStripSingleReferenceStreamoutINTEL, true, true, IR(160, 3), IR(44838, 49), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeStripDualReferenceStreamoutINTEL, true, true, IR(160, 3), IR(44887, 47), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL, true, true, IR(172, 4), IR(44934, 70), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL, true, true, IR(172, 4), IR(45004, 68), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL, true, true, IR(172, 4), IR(45072, 69), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL, true, true, IR(130, 5), IR(45141, 68), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL, true, true, IR(130, 5), IR(45209, 66), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL, true, true, IR(130, 5), IR(45275, 67), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetBorderReachedINTEL, true, true, IR(172, 4), IR(45342, 36), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetTruncatedSearchIndicationINTEL, true, true, IR(160, 3), IR(45378, 48), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL, true, true, IR(160, 3), IR(45426, 59), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL, true, true, IR(160, 3), IR(45485, 58), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL, true, true, IR(160, 3), IR(45543, 56), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcFmeInitializeINTEL, true, true, IR(686, 9), IR(45599, 30), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcBmeInitializeINTEL, true, true, IR(695, 10), IR(45629, 30), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(45659, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefSetBidirectionalMixDisableINTEL, true, true, IR(160, 3), IR(45698, 46), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefSetBilinearFilterEnableINTEL, true, true, IR(160, 3), IR(45744, 43), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(45787, 47), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(45834, 45), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithMultiReferenceINTEL, true, true, IR(130, 5), IR(45879, 46), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL, true, true, IR(215, 6), IR(45925, 56), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcRefConvertToMceResultINTEL, true, true, IR(160, 3), IR(45981, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicInitializeINTEL, true, true, IR(160, 3), IR(46019, 30), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureSkcINTEL, true, true, IR(288, 8), IR(46049, 32), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureIpeLumaINTEL, true, true, IR(695, 10), IR(46081, 36), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConfigureIpeLumaChromaINTEL, true, true, IR(705, 13), IR(46117, 42), IR(0, 0), IR(298, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetMotionVectorMaskINTEL, true, true, IR(172, 4), IR(46159, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConvertToMcePayloadINTEL, true, true, IR(160, 3), IR(46198, 39), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraLumaShapePenaltyINTEL, true, true, IR(172, 4), IR(46237, 44), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraLumaModeCostFunctionINTEL, true, true, IR(215, 6), IR(46281, 48), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetIntraChromaModeCostFunctionINTEL, true, true, IR(172, 4), IR(46329, 50), IR(0, 0), IR(298, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetBilinearFilterEnableINTEL, true, true, IR(160, 3), IR(46379, 43), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetSkcForwardTransformEnableINTEL, true, true, IR(172, 4), IR(46422, 48), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicSetBlockBasedRawSkipSadINTEL, true, true, IR(172, 4), IR(46470, 43), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateIpeINTEL, true, true, IR(172, 4), IR(46513, 31), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithSingleReferenceINTEL, true, true, IR(130, 5), IR(46544, 47), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithDualReferenceINTEL, true, true, IR(215, 6), IR(46591, 45), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithMultiReferenceINTEL, true, true, IR(130, 5), IR(46636, 46), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL, true, true, IR(215, 6), IR(46682, 56), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicConvertToMceResultINTEL, true, true, IR(160, 3), IR(46738, 38), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetIpeLumaShapeINTEL, true, true, IR(160, 3), IR(46776, 35), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetBestIpeLumaDistortionINTEL, true, true, IR(160, 3), IR(46811, 44), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetBestIpeChromaDistortionINTEL, true, true, IR(160, 3), IR(46855, 46), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedIpeLumaModesINTEL, true, true, IR(160, 3), IR(46901, 41), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetIpeChromaModeINTEL, true, true, IR(160, 3), IR(46942, 36), IR(0, 0), IR(298, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL, true, true, IR(160, 3), IR(46978, 50), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL, true, true, IR(160, 3), IR(47028, 48), IR(0, 0), IR(296, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupAvcSicGetInterRawSadsINTEL, true, true, IR(160, 3), IR(47076, 35), IR(0, 0), IR(295, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpVariableLengthArrayINTEL, true, true, IR(160, 3), IR(13739, 25), IR(0, 0), IR(300, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpSaveMemoryINTEL, true, true, IR(39, 2), IR(47111, 16), IR(0, 0), IR(300, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpRestoreMemoryINTEL, false, false, IR(10, 1), IR(47127, 19), IR(0, 0), IR(300, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpArbitraryFloatSinCosPiALTERA, true, true, IR(718, 8), IR(47146, 29), IR(186, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastALTERA, true, true, IR(718, 8), IR(47203, 25), IR(187, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastFromIntALTERA, true, true, IR(718, 8), IR(47252, 32), IR(188, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCastToIntALTERA, true, true, IR(718, 8), IR(47315, 30), IR(189, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatAddALTERA, true, true, IR(726, 10), IR(47374, 24), IR(190, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSubALTERA, true, true, IR(726, 10), IR(47421, 24), IR(191, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatMulALTERA, true, true, IR(726, 10), IR(47468, 24), IR(192, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatDivALTERA, true, true, IR(726, 10), IR(47515, 24), IR(193, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatGTALTERA, true, true, IR(736, 6), IR(47562, 23), IR(194, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatGEALTERA, true, true, IR(736, 6), IR(47607, 23), IR(195, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLTALTERA, true, true, IR(736, 6), IR(47652, 23), IR(196, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLEALTERA, true, true, IR(736, 6), IR(47697, 23), IR(197, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatEQALTERA, true, true, IR(736, 6), IR(47742, 23), IR(198, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatRecipALTERA, true, true, IR(718, 8), IR(47787, 26), IR(199, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatRSqrtALTERA, true, true, IR(718, 8), IR(47838, 26), IR(200, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCbrtALTERA, true, true, IR(718, 8), IR(47889, 25), IR(201, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatHypotALTERA, true, true, IR(726, 10), IR(47938, 26), IR(202, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSqrtALTERA, true, true, IR(718, 8), IR(47989, 25), IR(203, 1), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLogINTEL, true, true, IR(718, 8), IR(48038, 23), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog2INTEL, true, true, IR(718, 8), IR(48061, 24), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog10INTEL, true, true, IR(718, 8), IR(48085, 25), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatLog1pINTEL, true, true, IR(718, 8), IR(48110, 25), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExpINTEL, true, true, IR(718, 8), IR(48135, 23), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExp2INTEL, true, true, IR(718, 8), IR(48158, 24), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExp10INTEL, true, true, IR(718, 8), IR(48182, 25), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatExpm1INTEL, true, true, IR(718, 8), IR(48207, 25), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinINTEL, true, true, IR(718, 8), IR(48232, 23), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCosINTEL, true, true, IR(718, 8), IR(48255, 23), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinCosINTEL, true, true, IR(718, 8), IR(48278, 26), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatSinPiINTEL, true, true, IR(718, 8), IR(48304, 25), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatCosPiINTEL, true, true, IR(718, 8), IR(48329, 25), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatASinINTEL, true, true, IR(718, 8), IR(48354, 24), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatASinPiINTEL, true, true, IR(718, 8), IR(48378, 26), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatACosINTEL, true, true, IR(718, 8), IR(48404, 24), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatACosPiINTEL, true, true, IR(718, 8), IR(48428, 26), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATanINTEL, true, true, IR(718, 8), IR(48454, 24), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATanPiINTEL, true, true, IR(718, 8), IR(48478, 26), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatATan2INTEL, true, true, IR(726, 10), IR(48504, 25), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowINTEL, true, true, IR(726, 10), IR(48529, 23), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowRINTEL, true, true, IR(726, 10), IR(48552, 24), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpArbitraryFloatPowNINTEL, true, true, IR(726, 10), IR(48576, 24), IR(0, 0), IR(301, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpLoopControlINTEL, false, false, IR(18, 1), IR(48600, 17), IR(0, 0), IR(302, 1), IR(120, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAliasDomainDeclINTEL, true, false, IR(742, 2), IR(48617, 21), IR(0, 0), IR(143, 1), IR(132, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAliasScopeDeclINTEL, true, false, IR(744, 3), IR(48638, 20), IR(0, 0), IR(143, 1), IR(132, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpAliasScopeListDeclINTEL, true, false, IR(92, 2), IR(48658, 24), IR(0, 0), IR(143, 1), IR(132, 1), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSqrtALTERA, true, true, IR(718, 8), IR(48682, 16), IR(204, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedRecipALTERA, true, true, IR(718, 8), IR(48713, 17), IR(205, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedRsqrtALTERA, true, true, IR(718, 8), IR(48746, 17), IR(206, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinALTERA, true, true, IR(718, 8), IR(48779, 15), IR(207, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedCosALTERA, true, true, IR(718, 8), IR(48808, 15), IR(208, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinCosALTERA, true, true, IR(718, 8), IR(48837, 18), IR(209, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinPiALTERA, true, true, IR(718, 8), IR(48872, 17), IR(210, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedCosPiALTERA, true, true, IR(718, 8), IR(48905, 17), IR(211, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedSinCosPiALTERA, true, true, IR(718, 8), IR(48938, 20), IR(212, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedLogALTERA, true, true, IR(718, 8), IR(48977, 15), IR(213, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFixedExpALTERA, true, true, IR(718, 8), IR(49006, 15), IR(214, 1), IR(199, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpPtrCastToCrossWorkgroupALTERA, true, true, IR(160, 3), IR(49035, 30), IR(215, 1), IR(210, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpCrossWorkgroupCastToPtrALTERA, true, true, IR(160, 3), IR(49094, 30), IR(216, 1), IR(210, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpReadPipeBlockingALTERA, false, false, IR(296, 4), IR(49153, 23), IR(217, 1), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpWritePipeBlockingALTERA, false, false, IR(296, 4), IR(49198, 24), IR(218, 1), IR(303, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpFPGARegALTERA, true, true, IR(160, 3), IR(14697, 14), IR(63, 1), IR(304, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpRayQueryGetRayTMinKHR, true, true, IR(160, 3), IR(49245, 22), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetRayFlagsKHR, true, true, IR(160, 3), IR(49267, 23), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionTKHR, true, true, IR(172, 4), IR(49290, 28), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceCustomIndexKHR, true, true, IR(172, 4), IR(49318, 46), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceIdKHR, true, true, IR(172, 4), IR(49364, 37), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR, true, true, IR(172, 4), IR(49401, 65), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionGeometryIndexKHR, true, true, IR(172, 4), IR(49466, 40), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionPrimitiveIndexKHR, true, true, IR(172, 4), IR(49506, 41), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionBarycentricsKHR, true, true, IR(172, 4), IR(49547, 39), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionFrontFaceKHR, true, true, IR(172, 4), IR(49586, 36), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionCandidateAABBOpaqueKHR, true, true, IR(160, 3), IR(49622, 46), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectRayDirectionKHR, true, true, IR(172, 4), IR(49668, 45), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectRayOriginKHR, true, true, IR(172, 4), IR(49713, 42), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetWorldRayDirectionKHR, true, true, IR(160, 3), IR(49755, 32), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetWorldRayOriginKHR, true, true, IR(160, 3), IR(49787, 29), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionObjectToWorldKHR, true, true, IR(172, 4), IR(49816, 40), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpRayQueryGetIntersectionWorldToObjectKHR, true, true, IR(172, 4), IR(49856, 40), IR(0, 0), IR(203, 1), IR(48, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpAtomicFAddEXT, true, true, IR(235, 6), IR(49896, 14), IR(0, 0), IR(305, 4), IR(157, 1), 0xffffffffu, 0xffffffffu, PrintingClass::kAtomic},
  {spv::Op::OpTypeBufferSurfaceINTEL, true, false, IR(100, 2), IR(49910, 23), IR(0, 0), IR(135, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpTypeStructContinuedINTEL, false, false, IR(747, 1), IR(49933, 25), IR(0, 0), IR(309, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kType_Declaration},
  {spv::Op::OpConstantCompositeContinuedINTEL, false, false, IR(747, 1), IR(49958, 32), IR(0, 0), IR(309, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCompositeContinuedINTEL, false, false, IR(747, 1), IR(49990, 36), IR(0, 0), IR(309, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpCompositeConstructContinuedINTEL, false, false, IR(747, 1), IR(50026, 33), IR(0, 0), IR(309, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpConvertFToBF16INTEL, true, true, IR(160, 3), IR(50059, 20), IR(0, 0), IR(310, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpConvertBF16ToFINTEL, true, true, IR(160, 3), IR(50079, 20), IR(0, 0), IR(310, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpControlBarrierArriveINTEL, false, false, IR(221, 3), IR(50099, 26), IR(0, 0), IR(311, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpControlBarrierWaitINTEL, false, false, IR(221, 3), IR(50125, 24), IR(0, 0), IR(311, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBarrier},
  {spv::Op::OpArithmeticFenceEXT, true, true, IR(160, 3), IR(15192, 19), IR(0, 0), IR(312, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMiscellaneous},
  {spv::Op::OpTaskSequenceCreateALTERA, true, true, IR(748, 7), IR(50149, 25), IR(219, 1), IR(313, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTaskSequenceAsyncALTERA, false, false, IR(168, 2), IR(50198, 24), IR(220, 1), IR(313, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTaskSequenceGetALTERA, true, true, IR(160, 3), IR(50245, 22), IR(221, 1), IR(313, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTaskSequenceReleaseALTERA, false, false, IR(10, 1), IR(50288, 26), IR(222, 1), IR(313, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpTypeTaskSequenceALTERA, true, false, IR(68, 1), IR(50339, 23), IR(223, 1), IR(313, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::k_exclude},
  {spv::Op::OpSubgroupBlockPrefetchINTEL, false, false, IR(139, 3), IR(50384, 27), IR(0, 0), IR(314, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadINTEL, false, false, IR(755, 10), IR(50411, 25), IR(0, 0), IR(111, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadTransformINTEL, false, false, IR(755, 10), IR(50436, 34), IR(0, 0), IR(315, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockLoadTransposeINTEL, false, false, IR(755, 10), IR(50470, 34), IR(0, 0), IR(316, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockPrefetchINTEL, false, false, IR(765, 9), IR(50504, 29), IR(0, 0), IR(111, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroup2DBlockStoreINTEL, false, false, IR(755, 10), IR(50533, 26), IR(0, 0), IR(111, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpSubgroupMatrixMultiplyAccumulateINTEL, true, true, IR(774, 7), IR(15669, 38), IR(0, 0), IR(317, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpBitwiseFunctionINTEL, true, true, IR(215, 6), IR(50621, 21), IR(0, 0), IR(318, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kBit},
  {spv::Op::OpUntypedVariableLengthArrayINTEL, true, true, IR(172, 4), IR(15735, 32), IR(0, 0), IR(319, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpConditionalExtensionINTEL, false, false, IR(45, 2), IR(50642, 26), IR(0, 0), IR(114, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kExtension},
  {spv::Op::OpConditionalEntryPointINTEL, false, false, IR(781, 5), IR(50668, 27), IR(0, 0), IR(114, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpConditionalCapabilityINTEL, false, false, IR(786, 2), IR(50695, 27), IR(0, 0), IR(114, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMode_Setting},
  {spv::Op::OpSpecConstantTargetINTEL, true, true, IR(788, 4), IR(50722, 24), IR(0, 0), IR(320, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantArchitectureINTEL, true, true, IR(792, 6), IR(50746, 30), IR(0, 0), IR(320, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpSpecConstantCapabilitiesINTEL, true, true, IR(798, 3), IR(50813, 30), IR(0, 0), IR(320, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConstant_Creation},
  {spv::Op::OpConditionalCopyObjectINTEL, true, true, IR(107, 3), IR(50843, 27), IR(0, 0), IR(114, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kComposite},
  {spv::Op::OpPredicatedLoadINTEL, true, true, IR(636, 6), IR(50870, 20), IR(0, 0), IR(321, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpPredicatedStoreINTEL, false, false, IR(589, 4), IR(50890, 21), IR(0, 0), IR(321, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpGroupIMulKHR, true, true, IR(283, 5), IR(50911, 13), IR(0, 0), IR(322, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupFMulKHR, true, true, IR(283, 5), IR(50924, 13), IR(0, 0), IR(322, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseAndKHR, true, true, IR(283, 5), IR(50937, 19), IR(0, 0), IR(322, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseOrKHR, true, true, IR(283, 5), IR(50956, 18), IR(0, 0), IR(322, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupBitwiseXorKHR, true, true, IR(283, 5), IR(50974, 19), IR(0, 0), IR(322, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalAndKHR, true, true, IR(283, 5), IR(50993, 19), IR(0, 0), IR(322, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalOrKHR, true, true, IR(283, 5), IR(51012, 18), IR(0, 0), IR(322, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpGroupLogicalXorKHR, true, true, IR(283, 5), IR(51030, 19), IR(0, 0), IR(322, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kGroup},
  {spv::Op::OpRoundFToTF32INTEL, true, true, IR(160, 3), IR(51049, 18), IR(0, 0), IR(323, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kConversion},
  {spv::Op::OpMaskedGatherINTEL, true, true, IR(801, 6), IR(51067, 18), IR(0, 0), IR(324, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpMaskedScatterINTEL, false, false, IR(807, 4), IR(51085, 19), IR(0, 0), IR(324, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kMemory},
  {spv::Op::OpConvertHandleToImageINTEL, true, true, IR(160, 3), IR(51104, 26), IR(0, 0), IR(325, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpConvertHandleToSamplerINTEL, true, true, IR(160, 3), IR(51130, 28), IR(0, 0), IR(325, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpConvertHandleToSampledImageINTEL, true, true, IR(160, 3), IR(51158, 33), IR(0, 0), IR(325, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kImage},
  {spv::Op::OpFDot2MixAcc32VALVE, true, true, IR(130, 5), IR(51191, 19), IR(0, 0), IR(326, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFDot2MixAcc16VALVE, true, true, IR(130, 5), IR(51210, 19), IR(0, 0), IR(328, 2), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
  {spv::Op::OpFDot4MixAcc32VALVE, true, true, IR(130, 5), IR(51229, 19), IR(0, 0), IR(330, 1), IR(0, 0), 0xffffffffu, 0xffffffffu, PrintingClass::kReserved},
}};

// Opcode strings (without the 'Op' prefix) and opcode values, ordered by name.
// The fields in order are:
//   name, either the primary name or an alias, indexing into kStrings
//   index into kInstructionDesc
static const std::array<NameIndex, 926> kInstructionNames{{
  {IR(11182, 9), 438}, // 0 AbortKHR
  {IR(41549, 13), 600}, // 1 AbsISubINTEL
  {IR(41562, 13), 601}, // 2 AbsUSubINTEL
  {IR(30138, 12), 58}, // 3 AccessChain
  {IR(48617, 21), 786}, // 4 AliasDomainDeclINTEL
  {IR(48638, 20), 787}, // 5 AliasScopeDeclINTEL
  {IR(48658, 24), 788}, // 6 AliasScopeListDeclINTEL
  {IR(31435, 4), 143}, // 7 All
  {IR(36814, 25), 426}, // 8 AllocateNodePayloadsAMDX
  {IR(31431, 4), 142}, // 9 Any
  {IR(48404, 24), 777}, // 10 ArbitraryFloatACosINTEL
  {IR(48428, 26), 778}, // 11 ArbitraryFloatACosPiINTEL
  {IR(48354, 24), 775}, // 12 ArbitraryFloatASinINTEL
  {IR(48378, 26), 776}, // 13 ArbitraryFloatASinPiINTEL
  {IR(48504, 25), 781}, // 14 ArbitraryFloatATan2INTEL
  {IR(48454, 24), 779}, // 15 ArbitraryFloatATanINTEL
  {IR(48478, 26), 780}, // 16 ArbitraryFloatATanPiINTEL
  {IR(47374, 24), 748}, // 17 ArbitraryFloatAddALTERA
  {IR(47398, 23), 748}, // 18 ArbitraryFloatAddINTEL
  {IR(47203, 25), 745}, // 19 ArbitraryFloatCastALTERA
  {IR(47252, 32), 746}, // 20 ArbitraryFloatCastFromIntALTERA
  {IR(47284, 31), 746}, // 21 ArbitraryFloatCastFromIntINTEL
  {IR(47228, 24), 745}, // 22 ArbitraryFloatCastINTEL
  {IR(47315, 30), 747}, // 23 ArbitraryFloatCastToIntALTERA
  {IR(47345, 29), 747}, // 24 ArbitraryFloatCastToIntINTEL
  {IR(47889, 25), 759}, // 25 ArbitraryFloatCbrtALTERA
  {IR(47914, 24), 759}, // 26 ArbitraryFloatCbrtINTEL
  {IR(48255, 23), 771}, // 27 ArbitraryFloatCosINTEL
  {IR(48329, 25), 774}, // 28 ArbitraryFloatCosPiINTEL
  {IR(47515, 24), 751}, // 29 ArbitraryFloatDivALTERA
  {IR(47539, 23), 751}, // 30 ArbitraryFloatDivINTEL
  {IR(47742, 23), 756}, // 31 ArbitraryFloatEQALTERA
  {IR(47765, 22), 756}, // 32 ArbitraryFloatEQINTEL
  {IR(48182, 25), 768}, // 33 ArbitraryFloatExp10INTEL
  {IR(48158, 24), 767}, // 34 ArbitraryFloatExp2INTEL
  {IR(48135, 23), 766}, // 35 ArbitraryFloatExpINTEL
  {IR(48207, 25), 769}, // 36 ArbitraryFloatExpm1INTEL
  {IR(47607, 23), 753}, // 37 ArbitraryFloatGEALTERA
  {IR(47630, 22), 753}, // 38 ArbitraryFloatGEINTEL
  {IR(47562, 23), 752}, // 39 ArbitraryFloatGTALTERA
  {IR(47585, 22), 752}, // 40 ArbitraryFloatGTINTEL
  {IR(47938, 26), 760}, // 41 ArbitraryFloatHypotALTERA
  {IR(47964, 25), 760}, // 42 ArbitraryFloatHypotINTEL
  {IR(47697, 23), 755}, // 43 ArbitraryFloatLEALTERA
  {IR(47720, 22), 755}, // 44 ArbitraryFloatLEINTEL
  {IR(47652, 23), 754}, // 45 ArbitraryFloatLTALTERA
  {IR(47675, 22), 754}, // 46 ArbitraryFloatLTINTEL
  {IR(48085, 25), 764}, // 47 ArbitraryFloatLog10INTEL
  {IR(48110, 25), 765}, // 48 ArbitraryFloatLog1pINTEL
  {IR(48061, 24), 763}, // 49 ArbitraryFloatLog2INTEL
  {IR(48038, 23), 762}, // 50 ArbitraryFloatLogINTEL
  {IR(47468, 24), 750}, // 51 ArbitraryFloatMulALTERA
  {IR(47492, 23), 750}, // 52 ArbitraryFloatMulINTEL
  {IR(48529, 23), 782}, // 53 ArbitraryFloatPowINTEL
  {IR(48576, 24), 784}, // 54 ArbitraryFloatPowNINTEL
  {IR(48552, 24), 783}, // 55 ArbitraryFloatPowRINTEL
  {IR(47838, 26), 758}, // 56 ArbitraryFloatRSqrtALTERA
  {IR(47864, 25), 758}, // 57 ArbitraryFloatRSqrtINTEL
  {IR(47787, 26), 757}, // 58 ArbitraryFloatRecipALTERA
  {IR(47813, 25), 757}, // 59 ArbitraryFloatRecipINTEL
  {IR(48278, 26), 772}, // 60 ArbitraryFloatSinCosINTEL
  {IR(47146, 29), 744}, // 61 ArbitraryFloatSinCosPiALTERA
  {IR(47175, 28), 744}, // 62 ArbitraryFloatSinCosPiINTEL
  {IR(48232, 23), 770}, // 63 ArbitraryFloatSinINTEL
  {IR(48304, 25), 773}, // 64 ArbitraryFloatSinPiINTEL
  {IR(47989, 25), 761}, // 65 ArbitraryFloatSqrtALTERA
  {IR(48014, 24), 761}, // 66 ArbitraryFloatSqrtINTEL
  {IR(47421, 24), 749}, // 67 ArbitraryFloatSubALTERA
  {IR(47445, 23), 749}, // 68 ArbitraryFloatSubINTEL
  {IR(15192, 19), 832}, // 69 ArithmeticFenceEXT
  {IR(30185, 12), 61}, // 70 ArrayLength
  {IR(41796, 13), 616}, // 71 AsmCallINTEL
  {IR(13501, 9), 615}, // 72 AsmINTEL
  {IR(41781, 15), 614}, // 73 AsmTargetINTEL
  {IR(41837, 14), 619}, // 74 AssumeTrueKHR
  {IR(32457, 10), 220}, // 75 AtomicAnd
  {IR(32309, 22), 210}, // 76 AtomicCompareExchange
  {IR(32331, 26), 211}, // 77 AtomicCompareExchangeWeak
  {IR(32294, 15), 209}, // 78 AtomicExchange
  {IR(49896, 14), 822}, // 79 AtomicFAddEXT
  {IR(41823, 14), 618}, // 80 AtomicFMaxEXT
  {IR(41809, 14), 617}, // 81 AtomicFMinEXT
  {IR(33842, 16), 292}, // 82 AtomicFlagClear
  {IR(33821, 21), 291}, // 83 AtomicFlagTestAndSet
  {IR(32391, 11), 214}, // 84 AtomicIAdd
  {IR(32374, 17), 213}, // 85 AtomicIDecrement
  {IR(32357, 17), 212}, // 86 AtomicIIncrement
  {IR(32402, 11), 215}, // 87 AtomicISub
  {IR(32271, 11), 207}, // 88 AtomicLoad
  {IR(32467, 9), 221}, // 89 AtomicOr
  {IR(32435, 11), 218}, // 90 AtomicSMax
  {IR(32413, 11), 216}, // 91 AtomicSMin
  {IR(32282, 12), 208}, // 92 AtomicStore
  {IR(32446, 11), 219}, // 93 AtomicUMax
  {IR(32424, 11), 217}, // 94 AtomicUMin
  {IR(32476, 10), 222}, // 95 AtomicXor
  {IR(40045, 28), 546}, // 96 BeginInvocationInterlockEXT
  {IR(36368, 17), 407}, // 97 BitCastArrayQCOM
  {IR(32055, 9), 191}, // 98 BitCount
  {IR(31995, 15), 187}, // 99 BitFieldInsert
  {IR(32010, 17), 188}, // 100 BitFieldSExtract
  {IR(32027, 17), 189}, // 101 BitFieldUExtract
  {IR(32044, 11), 190}, // 102 BitReverse
  {IR(31183, 8), 114}, // 103 Bitcast
  {IR(31980, 11), 185}, // 104 BitwiseAnd
  {IR(50621, 21), 845}, // 105 BitwiseFunctionINTEL
  {IR(31959, 10), 183}, // 106 BitwiseOr
  {IR(31969, 11), 184}, // 107 BitwiseXor
  {IR(32586, 7), 227}, // 108 Branch
  {IR(32593, 18), 228}, // 109 BranchConditional
  {IR(37075, 17), 437}, // 110 BufferPointerEXT
  {IR(33454, 13), 277}, // 111 BuildNDRange
  {IR(29199, 11), 15}, // 112 Capability
  {IR(33412, 26), 275}, // 113 CaptureEventProfilingInfo
  {IR(34918, 23), 344}, // 114 ColorAttachmentReadEXT
  {IR(33004, 15), 255}, // 115 CommitReadPipe
  {IR(33019, 16), 256}, // 116 CommitWritePipe
  {IR(30445, 19), 72}, // 117 CompositeConstruct
  {IR(50026, 33), 827}, // 118 CompositeConstructContinuedINTEL
  {IR(36501, 30), 412}, // 119 CompositeConstructCoopMatQCOM
  {IR(36076, 31), 395}, // 120 CompositeConstructReplicateEXT
  {IR(30464, 17), 73}, // 121 CompositeExtract
  {IR(36531, 28), 413}, // 122 CompositeExtractCoopMatQCOM
  {IR(30481, 16), 74}, // 123 CompositeInsert
  {IR(50695, 27), 849}, // 124 ConditionalCapabilityINTEL
  {IR(50843, 27), 853}, // 125 ConditionalCopyObjectINTEL
  {IR(50668, 27), 848}, // 126 ConditionalEntryPointINTEL
  {IR(50642, 26), 847}, // 127 ConditionalExtensionINTEL
  {IR(17491, 9), 39}, // 128 Constant
  {IR(29705, 18), 40}, // 129 ConstantComposite
  {IR(49958, 32), 825}, // 130 ConstantCompositeContinuedINTEL
  {IR(36012, 30), 393}, // 131 ConstantCompositeReplicateEXT
  {IR(11191, 16), 442}, // 132 ConstantDataKHR
  {IR(29653, 14), 38}, // 133 ConstantFalse
  {IR(41727, 29), 612}, // 134 ConstantFunctionPointerINTEL
  {IR(29817, 13), 42}, // 135 ConstantNull
  {IR(33897, 20), 296}, // 136 ConstantPipeStorage
  {IR(29801, 16), 41}, // 137 ConstantSampler
  {IR(37140, 18), 441}, // 138 ConstantSizeOfEXT
  {IR(36967, 19), 432}, // 139 ConstantStringAMDX
  {IR(29640, 13), 37}, // 140 ConstantTrue
  {IR(32242, 15), 205}, // 141 ControlBarrier
  {IR(50099, 26), 830}, // 142 ControlBarrierArriveINTEL
  {IR(50125, 24), 831}, // 143 ControlBarrierWaitINTEL
  {IR(50079, 20), 829}, // 144 ConvertBF16ToFINTEL
  {IR(50059, 20), 828}, // 145 ConvertFToBF16INTEL
  {IR(30989, 12), 100}, // 146 ConvertFToS
  {IR(30977, 12), 99}, // 147 ConvertFToU
  {IR(51104, 26), 867}, // 148 ConvertHandleToImageINTEL
  {IR(51158, 33), 869}, // 149 ConvertHandleToSampledImageINTEL
  {IR(51130, 28), 868}, // 150 ConvertHandleToSamplerINTEL
  {IR(40694, 18), 569}, // 151 ConvertImageToUNV
  {IR(31066, 14), 107}, // 152 ConvertPtrToU
  {IR(31001, 12), 101}, // 153 ConvertSToF
  {IR(40757, 25), 572}, // 154 ConvertSampledImageToUNV
  {IR(40712, 20), 570}, // 155 ConvertSamplerToUNV
  {IR(35590, 35), 379}, // 156 ConvertUToAccelerationStructureKHR
  {IR(31013, 12), 102}, // 157 ConvertUToF
  {IR(40656, 18), 567}, // 158 ConvertUToImageNV
  {IR(31110, 14), 110}, // 159 ConvertUToPtr
  {IR(40732, 25), 571}, // 160 ConvertUToSampledImageNV
  {IR(40674, 20), 568}, // 161 ConvertUToSamplerNV
  {IR(38280, 27), 485}, // 162 CooperativeMatrixConvertNV
  {IR(35985, 27), 392}, // 163 CooperativeMatrixLengthKHR
  {IR(40019, 26), 545}, // 164 CooperativeMatrixLengthNV
  {IR(35853, 25), 389}, // 165 CooperativeMatrixLoadKHR
  {IR(39944, 24), 542}, // 166 CooperativeMatrixLoadNV
  {IR(40243, 30), 549}, // 167 CooperativeMatrixLoadTensorNV
  {IR(35958, 27), 391}, // 168 CooperativeMatrixMulAddKHR
  {IR(39993, 26), 544}, // 169 CooperativeMatrixMulAddNV
  {IR(40304, 32), 551}, // 170 CooperativeMatrixPerElementOpNV
  {IR(40142, 26), 548}, // 171 CooperativeMatrixReduceNV
  {IR(35878, 26), 390}, // 172 CooperativeMatrixStoreKHR
  {IR(39968, 25), 543}, // 173 CooperativeMatrixStoreNV
  {IR(40273, 31), 550}, // 174 CooperativeMatrixStoreTensorNV
  {IR(40627, 29), 566}, // 175 CooperativeMatrixTransposeNV
  {IR(38503, 24), 492}, // 176 CooperativeVectorLoadNV
  {IR(38248, 32), 484}, // 177 CooperativeVectorMatrixMulAddNV
  {IR(38138, 29), 481}, // 178 CooperativeVectorMatrixMulNV
  {IR(38167, 42), 482}, // 179 CooperativeVectorOuterProductAccumulateNV
  {IR(38209, 39), 483}, // 180 CooperativeVectorReduceSumAccumulateNV
  {IR(38527, 25), 493}, // 181 CooperativeVectorStoreNV
  {IR(34877, 12), 340}, // 182 CopyLogical
  {IR(30111, 11), 56}, // 183 CopyMemory
  {IR(30122, 16), 57}, // 184 CopyMemorySized
  {IR(30497, 11), 75}, // 185 CopyObject
  {IR(33917, 26), 297}, // 186 CreatePipeFromPipeStorage
  {IR(40372, 21), 554}, // 187 CreateTensorLayoutNV
  {IR(40492, 19), 559}, // 188 CreateTensorViewNV
  {IR(33364, 16), 272}, // 189 CreateUserEvent
  {IR(49094, 30), 801}, // 190 CrossWorkgroupCastToPtrALTERA
  {IR(49124, 29), 801}, // 191 CrossWorkgroupCastToPtrINTEL
  {IR(32064, 5), 192}, // 192 DPdx
  {IR(32110, 11), 198}, // 193 DPdxCoarse
  {IR(32081, 9), 195}, // 194 DPdxFine
  {IR(32069, 5), 193}, // 195 DPdy
  {IR(32121, 11), 199}, // 196 DPdyCoarse
  {IR(32090, 9), 196}, // 197 DPdyFine
  {IR(30271, 9), 64}, // 198 Decorate
  {IR(34094, 11), 305}, // 199 DecorateId
  {IR(41861, 15), 621}, // 200 DecorateString
  {IR(41876, 21), 621}, // 201 DecorateStringGOOGLE
  {IR(30295, 16), 66}, // 202 DecorationGroup
  {IR(12722, 25), 562}, // 203 DemoteToHelperInvocation
  {IR(12747, 28), 562}, // 204 DemoteToHelperInvocationEXT
  {IR(34941, 23), 345}, // 205 DepthAttachmentReadEXT
  {IR(31380, 4), 137}, // 206 Dot
  {IR(38307, 17), 486}, // 207 EmitMeshTasksEXT
  {IR(32169, 17), 203}, // 208 EmitStreamVertex
  {IR(32145, 11), 201}, // 209 EmitVertex
  {IR(40073, 26), 547}, // 210 EndInvocationInterlockEXT
  {IR(32156, 13), 202}, // 211 EndPrimitive
  {IR(32186, 19), 204}, // 212 EndStreamPrimitive
  {IR(33200, 14), 265}, // 213 EnqueueKernel
  {IR(33186, 14), 264}, // 214 EnqueueMarker
  {IR(36839, 24), 427}, // 215 EnqueueNodePayloadsAMDX
  {IR(29114, 11), 13}, // 216 EntryPoint
  {IR(35571, 19), 378}, // 217 ExecuteCallableKHR
  {IR(39655, 18), 532}, // 218 ExecuteCallableNV
  {IR(29157, 14), 14}, // 219 ExecutionMode
  {IR(34078, 16), 304}, // 220 ExecutionModeId
  {IR(41851, 10), 620}, // 221 ExpectKHR
  {IR(28968, 8), 11}, // 222 ExtInst
  {IR(28908, 14), 10}, // 223 ExtInstImport
  {IR(35508, 26), 375}, // 224 ExtInstWithForwardRefsKHR
  {IR(28898, 10), 9}, // 225 Extension
  {IR(36559, 20), 414}, // 226 ExtractSubArrayQCOM
  {IR(31212, 5), 118}, // 227 FAdd
  {IR(31043, 9), 105}, // 228 FConvert
  {IR(31247, 5), 125}, // 229 FDiv
  {IR(51210, 19), 871}, // 230 FDot2MixAcc16VALVE
  {IR(51191, 19), 870}, // 231 FDot2MixAcc32VALVE
  {IR(51229, 19), 872}, // 232 FDot4MixAcc32VALVE
  {IR(31272, 5), 130}, // 233 FMod
  {IR(31232, 5), 122}, // 234 FMul
  {IR(31199, 8), 116}, // 235 FNegate
  {IR(31709, 10), 168}, // 236 FOrdEqual
  {IR(31787, 16), 174}, // 237 FOrdGreaterThan
  {IR(31859, 21), 178}, // 238 FOrdGreaterThanEqual
  {IR(31759, 13), 172}, // 239 FOrdLessThan
  {IR(31821, 18), 176}, // 240 FOrdLessThanEqual
  {IR(31731, 13), 170}, // 241 FOrdNotEqual
  {IR(14697, 14), 804}, // 242 FPGARegALTERA
  {IR(14711, 13), 804}, // 243 FPGARegINTEL
  {IR(31267, 5), 129}, // 244 FRem
  {IR(31222, 5), 120}, // 245 FSub
  {IR(31719, 12), 169}, // 246 FUnordEqual
  {IR(31803, 18), 175}, // 247 FUnordGreaterThan
  {IR(31880, 23), 179}, // 248 FUnordGreaterThanEqual
  {IR(31772, 15), 173}, // 249 FUnordLessThan
  {IR(31839, 20), 177}, // 250 FUnordLessThanEqual
  {IR(31744, 15), 171}, // 251 FUnordNotEqual
  {IR(38465, 38), 491}, // 252 FetchMicroTriangleVertexBarycentricNV
  {IR(38430, 35), 490}, // 253 FetchMicroTriangleVertexPositionNV
  {IR(36888, 29), 429}, // 254 FinishWritingNodePayloadAMDX
  {IR(48808, 15), 793}, // 255 FixedCosALTERA
  {IR(48823, 14), 793}, // 256 FixedCosINTEL
  {IR(48905, 17), 796}, // 257 FixedCosPiALTERA
  {IR(48922, 16), 796}, // 258 FixedCosPiINTEL
  {IR(49006, 15), 799}, // 259 FixedExpALTERA
  {IR(49021, 14), 799}, // 260 FixedExpINTEL
  {IR(48977, 15), 798}, // 261 FixedLogALTERA
  {IR(48992, 14), 798}, // 262 FixedLogINTEL
  {IR(48713, 17), 790}, // 263 FixedRecipALTERA
  {IR(48730, 16), 790}, // 264 FixedRecipINTEL
  {IR(48746, 17), 791}, // 265 FixedRsqrtALTERA
  {IR(48763, 16), 791}, // 266 FixedRsqrtINTEL
  {IR(48779, 15), 792}, // 267 FixedSinALTERA
  {IR(48837, 18), 794}, // 268 FixedSinCosALTERA
  {IR(48855, 17), 794}, // 269 FixedSinCosINTEL
  {IR(48938, 20), 797}, // 270 FixedSinCosPiALTERA
  {IR(48958, 19), 797}, // 271 FixedSinCosPiINTEL
  {IR(48794, 14), 792}, // 272 FixedSinINTEL
  {IR(48872, 17), 795}, // 273 FixedSinPiALTERA
  {IR(48889, 16), 795}, // 274 FixedSinPiINTEL
  {IR(48682, 16), 789}, // 275 FixedSqrtALTERA
  {IR(48698, 15), 789}, // 276 FixedSqrtINTEL
  {IR(35425, 7), 369}, // 277 FmaKHR
  {IR(36784, 17), 424}, // 278 FragmentFetchAMD
  {IR(36763, 21), 423}, // 279 FragmentMaskFetchAMD
  {IR(37188, 10), 445}, // 280 FreezeKHR
  {IR(27964, 9), 48}, // 281 Function
  {IR(30020, 13), 51}, // 282 FunctionCall
  {IR(30008, 12), 50}, // 283 FunctionEnd
  {IR(29990, 18), 49}, // 284 FunctionParameter
  {IR(41756, 25), 613}, // 285 FunctionPointerCallINTEL
  {IR(32074, 7), 194}, // 286 Fwidth
  {IR(32132, 13), 200}, // 287 FwidthCoarse
  {IR(32099, 11), 197}, // 288 FwidthFine
  {IR(31141, 17), 112}, // 289 GenericCastToPtr
  {IR(31158, 25), 113}, // 290 GenericCastToPtrExplicit
  {IR(30197, 23), 62}, // 291 GenericPtrMemSemantics
  {IR(33438, 16), 276}, // 292 GetDefaultQueue
  {IR(33943, 35), 298}, // 293 GetKernelLocalSizeForSubgroupCount
  {IR(33978, 25), 299}, // 294 GetKernelMaxNumSubgroups
  {IR(33244, 32), 267}, // 295 GetKernelNDrangeMaxSubGroupSize
  {IR(33214, 30), 266}, // 296 GetKernelNDrangeSubGroupCount
  {IR(33299, 40), 269}, // 297 GetKernelPreferredWorkGroupSizeMultiple
  {IR(33276, 23), 268}, // 298 GetKernelWorkGroupSize
  {IR(33070, 18), 259}, // 299 GetMaxPipePackets
  {IR(33052, 18), 258}, // 300 GetNumPipePackets
  {IR(10105, 9), 353}, // 301 GraphARM
  {IR(35093, 17), 351}, // 302 GraphConstantARM
  {IR(35161, 12), 356}, // 303 GraphEndARM
  {IR(35110, 19), 352}, // 304 GraphEntryPointARM
  {IR(35129, 14), 354}, // 305 GraphInputARM
  {IR(35143, 18), 355}, // 306 GraphSetOutputARM
  {IR(32757, 9), 238}, // 307 GroupAll
  {IR(32766, 9), 239}, // 308 GroupAny
  {IR(32726, 15), 236}, // 309 GroupAsyncCopy
  {IR(50937, 19), 858}, // 310 GroupBitwiseAndKHR
  {IR(50956, 18), 859}, // 311 GroupBitwiseOrKHR
  {IR(50974, 19), 860}, // 312 GroupBitwiseXorKHR
  {IR(32775, 15), 240}, // 313 GroupBroadcast
  {IR(33145, 20), 262}, // 314 GroupCommitReadPipe
  {IR(33165, 21), 263}, // 315 GroupCommitWritePipe
  {IR(30311, 14), 67}, // 316 GroupDecorate
  {IR(32833, 10), 242}, // 317 GroupFAdd
  {IR(36602, 23), 416}, // 318 GroupFAddNonUniformAMD
  {IR(32873, 10), 246}, // 319 GroupFMax
  {IR(36694, 23), 420}, // 320 GroupFMaxNonUniformAMD
  {IR(32843, 10), 243}, // 321 GroupFMin
  {IR(36625, 23), 417}, // 322 GroupFMinNonUniformAMD
  {IR(50924, 13), 857}, // 323 GroupFMulKHR
  {IR(32823, 10), 241}, // 324 GroupIAdd
  {IR(36579, 23), 415}, // 325 GroupIAddNonUniformAMD
  {IR(50911, 13), 856}, // 326 GroupIMulKHR
  {IR(50993, 19), 861}, // 327 GroupLogicalAndKHR
  {IR(51012, 18), 862}, // 328 GroupLogicalOrKHR
  {IR(51030, 19), 863}, // 329 GroupLogicalXorKHR
  {IR(30370, 20), 68}, // 330 GroupMemberDecorate
  {IR(34126, 19), 307}, // 331 GroupNonUniformAll
  {IR(34164, 24), 309}, // 332 GroupNonUniformAllEqual
  {IR(34145, 19), 308}, // 333 GroupNonUniformAny
  {IR(6675, 22), 312}, // 334 GroupNonUniformBallot
  {IR(34304, 30), 315}, // 335 GroupNonUniformBallotBitCount
  {IR(34272, 32), 314}, // 336 GroupNonUniformBallotBitExtract
  {IR(34334, 29), 316}, // 337 GroupNonUniformBallotFindLSB
  {IR(34363, 29), 317}, // 338 GroupNonUniformBallotFindMSB
  {IR(34670, 26), 332}, // 339 GroupNonUniformBitwiseAnd
  {IR(34696, 25), 333}, // 340 GroupNonUniformBitwiseOr
  {IR(34721, 26), 334}, // 341 GroupNonUniformBitwiseXor
  {IR(34188, 25), 310}, // 342 GroupNonUniformBroadcast
  {IR(34213, 30), 311}, // 343 GroupNonUniformBroadcastFirst
  {IR(34105, 21), 306}, // 344 GroupNonUniformElect
  {IR(34490, 20), 323}, // 345 GroupNonUniformFAdd
  {IR(34650, 20), 331}, // 346 GroupNonUniformFMax
  {IR(34590, 20), 328}, // 347 GroupNonUniformFMin
  {IR(34530, 20), 325}, // 348 GroupNonUniformFMul
  {IR(34470, 20), 322}, // 349 GroupNonUniformIAdd
  {IR(34510, 20), 324}, // 350 GroupNonUniformIMul
  {IR(34243, 29), 313}, // 351 GroupNonUniformInverseBallot
  {IR(34747, 26), 335}, // 352 GroupNonUniformLogicalAnd
  {IR(34773, 25), 336}, // 353 GroupNonUniformLogicalOr
  {IR(34798, 26), 337}, // 354 GroupNonUniformLogicalXor
  {IR(38342, 28), 488}, // 355 GroupNonUniformPartitionEXT
  {IR(38370, 27), 488}, // 356 GroupNonUniformPartitionNV
  {IR(37009, 26), 434}, // 357 GroupNonUniformQuadAllKHR
  {IR(37035, 26), 435}, // 358 GroupNonUniformQuadAnyKHR
  {IR(34824, 29), 338}, // 359 GroupNonUniformQuadBroadcast
  {IR(34853, 24), 339}, // 360 GroupNonUniformQuadSwap
  {IR(14936, 25), 373}, // 361 GroupNonUniformRotateKHR
  {IR(34610, 20), 329}, // 362 GroupNonUniformSMax
  {IR(34550, 20), 326}, // 363 GroupNonUniformSMin
  {IR(9814, 23), 318}, // 364 GroupNonUniformShuffle
  {IR(34443, 27), 321}, // 365 GroupNonUniformShuffleDown
  {IR(34418, 25), 320}, // 366 GroupNonUniformShuffleUp
  {IR(34392, 26), 319}, // 367 GroupNonUniformShuffleXor
  {IR(34630, 20), 330}, // 368 GroupNonUniformUMax
  {IR(34570, 20), 327}, // 369 GroupNonUniformUMin
  {IR(33088, 28), 260}, // 370 GroupReserveReadPipePackets
  {IR(33116, 29), 261}, // 371 GroupReserveWritePipePackets
  {IR(32893, 10), 248}, // 372 GroupSMax
  {IR(36740, 23), 422}, // 373 GroupSMaxNonUniformAMD
  {IR(32863, 10), 245}, // 374 GroupSMin
  {IR(36671, 23), 419}, // 375 GroupSMinNonUniformAMD
  {IR(32883, 10), 247}, // 376 GroupUMax
  {IR(36717, 23), 421}, // 377 GroupUMaxNonUniformAMD
  {IR(32853, 10), 244}, // 378 GroupUMin
  {IR(36648, 23), 418}, // 379 GroupUMinNonUniformAMD
  {IR(32741, 16), 237}, // 380 GroupWaitEvents
  {IR(38999, 26), 509}, // 381 HitObjectExecuteShaderEXT
  {IR(37633, 25), 461}, // 382 HitObjectExecuteShaderNV
  {IR(39052, 26), 511}, // 383 HitObjectGetAttributesEXT
  {IR(37684, 25), 463}, // 384 HitObjectGetAttributesNV
  {IR(39731, 24), 534}, // 385 HitObjectGetClusterIdNV
  {IR(39025, 27), 510}, // 386 HitObjectGetCurrentTimeEXT
  {IR(37658, 26), 462}, // 387 HitObjectGetCurrentTimeNV
  {IR(39131, 29), 514}, // 388 HitObjectGetGeometryIndexEXT
  {IR(37760, 28), 466}, // 389 HitObjectGetGeometryIndexNV
  {IR(39078, 23), 512}, // 390 HitObjectGetHitKindEXT
  {IR(37709, 22), 464}, // 391 HitObjectGetHitKindNV
  {IR(39186, 35), 516}, // 392 HitObjectGetInstanceCustomIndexEXT
  {IR(37813, 34), 468}, // 393 HitObjectGetInstanceCustomIndexNV
  {IR(39160, 26), 515}, // 394 HitObjectGetInstanceIdEXT
  {IR(37788, 25), 467}, // 395 HitObjectGetInstanceIdNV
  {IR(38632, 51), 497}, // 396 HitObjectGetIntersectionTriangleVertexPositionsEXT
  {IR(41123, 27), 582}, // 397 HitObjectGetLSSPositionsNV
  {IR(41150, 23), 583}, // 398 HitObjectGetLSSRadiiNV
  {IR(39252, 34), 518}, // 399 HitObjectGetObjectRayDirectionEXT
  {IR(37345, 33), 451}, // 400 HitObjectGetObjectRayDirectionNV
  {IR(39221, 31), 517}, // 401 HitObjectGetObjectRayOriginEXT
  {IR(37378, 30), 452}, // 402 HitObjectGetObjectRayOriginNV
  {IR(39349, 29), 521}, // 403 HitObjectGetObjectToWorldEXT
  {IR(37317, 28), 450}, // 404 HitObjectGetObjectToWorldNV
  {IR(39101, 30), 513}, // 405 HitObjectGetPrimitiveIndexEXT
  {IR(37731, 29), 465}, // 406 HitObjectGetPrimitiveIndexNV
  {IR(38683, 24), 498}, // 407 HitObjectGetRayFlagsEXT
  {IR(39407, 23), 523}, // 408 HitObjectGetRayTMaxEXT
  {IR(37908, 22), 471}, // 409 HitObjectGetRayTMaxNV
  {IR(39755, 23), 535}, // 410 HitObjectGetRayTMinEXT
  {IR(37930, 22), 472}, // 411 HitObjectGetRayTMinNV
  {IR(39778, 45), 536}, // 412 HitObjectGetShaderBindingTableRecordIndexEXT
  {IR(37473, 44), 455}, // 413 HitObjectGetShaderBindingTableRecordIndexNV
  {IR(39823, 40), 537}, // 414 HitObjectGetShaderRecordBufferHandleEXT
  {IR(37434, 39), 454}, // 415 HitObjectGetShaderRecordBufferHandleNV
  {IR(41067, 29), 580}, // 416 HitObjectGetSpherePositionNV
  {IR(41096, 27), 581}, // 417 HitObjectGetSphereRadiusNV
  {IR(39286, 33), 519}, // 418 HitObjectGetWorldRayDirectionEXT
  {IR(37847, 32), 469}, // 419 HitObjectGetWorldRayDirectionNV
  {IR(39319, 30), 520}, // 420 HitObjectGetWorldRayOriginEXT
  {IR(37879, 29), 470}, // 421 HitObjectGetWorldRayOriginNV
  {IR(39378, 29), 522}, // 422 HitObjectGetWorldToObjectEXT
  {IR(37289, 28), 449}, // 423 HitObjectGetWorldToObjectNV
  {IR(39863, 20), 538}, // 424 HitObjectIsEmptyEXT
  {IR(37952, 19), 473}, // 425 HitObjectIsEmptyNV
  {IR(39883, 18), 539}, // 426 HitObjectIsHitEXT
  {IR(37971, 17), 474}, // 427 HitObjectIsHitNV
  {IR(41196, 20), 585}, // 428 HitObjectIsLSSHitNV
  {IR(39901, 19), 540}, // 429 HitObjectIsMissEXT
  {IR(37988, 18), 475}, // 430 HitObjectIsMissNV
  {IR(41173, 23), 584}, // 431 HitObjectIsSphereHitNV
  {IR(38975, 24), 508}, // 432 HitObjectRecordEmptyEXT
  {IR(37517, 23), 456}, // 433 HitObjectRecordEmptyNV
  {IR(38552, 28), 494}, // 434 HitObjectRecordFromQueryEXT
  {IR(37198, 27), 446}, // 435 HitObjectRecordHitMotionNV
  {IR(37560, 21), 458}, // 436 HitObjectRecordHitNV
  {IR(37225, 36), 447}, // 437 HitObjectRecordHitWithIndexMotionNV
  {IR(37581, 30), 459}, // 438 HitObjectRecordHitWithIndexNV
  {IR(38580, 23), 495}, // 439 HitObjectRecordMissEXT
  {IR(38603, 29), 496}, // 440 HitObjectRecordMissMotionEXT
  {IR(37261, 28), 448}, // 441 HitObjectRecordMissMotionNV
  {IR(37611, 22), 460}, // 442 HitObjectRecordMissNV
  {IR(38752, 33), 500}, // 443 HitObjectReorderExecuteShaderEXT
  {IR(38707, 45), 499}, // 444 HitObjectSetShaderBindingTableRecordIndexEXT
  {IR(38817, 38), 502}, // 445 HitObjectTraceMotionReorderExecuteEXT
  {IR(38927, 21), 506}, // 446 HitObjectTraceRayEXT
  {IR(38948, 27), 507}, // 447 HitObjectTraceRayMotionEXT
  {IR(37408, 26), 453}, // 448 HitObjectTraceRayMotionNV
  {IR(37540, 20), 457}, // 449 HitObjectTraceRayNV
  {IR(38785, 32), 501}, // 450 HitObjectTraceReorderExecuteEXT
  {IR(31207, 5), 117}, // 451 IAdd
  {IR(31384, 10), 138}, // 452 IAddCarry
  {IR(41575, 13), 602}, // 453 IAddSatINTEL
  {IR(41601, 14), 604}, // 454 IAverageINTEL
  {IR(41629, 21), 606}, // 455 IAverageRoundedINTEL
  {IR(31580, 7), 158}, // 456 IEqual
  {IR(31227, 5), 121}, // 457 IMul
  {IR(41697, 15), 610}, // 458 IMul32x16INTEL
  {IR(31587, 10), 159}, // 459 INotEqual
  {IR(31217, 5), 119}, // 460 ISub
  {IR(31394, 11), 139}, // 461 ISubBorrow
  {IR(41671, 13), 608}, // 462 ISubSatINTEL
  {IR(35625, 22), 380}, // 463 IgnoreIntersectionKHR
  {IR(39473, 21), 525}, // 464 IgnoreIntersectionNV
  {IR(28008, 6), 91}, // 465 Image
  {IR(36472, 29), 411}, // 466 ImageBlockMatchGatherSADQCOM
  {IR(36443, 29), 410}, // 467 ImageBlockMatchGatherSSDQCOM
  {IR(36345, 23), 406}, // 468 ImageBlockMatchSADQCOM
  {IR(36322, 23), 405}, // 469 ImageBlockMatchSSDQCOM
  {IR(36414, 29), 409}, // 470 ImageBlockMatchWindowSADQCOM
  {IR(36385, 29), 408}, // 471 ImageBlockMatchWindowSSDQCOM
  {IR(36303, 19), 404}, // 472 ImageBoxFilterQCOM
  {IR(30825, 16), 88}, // 473 ImageDrefGather
  {IR(30802, 11), 86}, // 474 ImageFetch
  {IR(30813, 12), 87}, // 475 ImageGather
  {IR(30862, 17), 92}, // 476 ImageQueryFormat
  {IR(30942, 17), 97}, // 477 ImageQueryLevels
  {IR(30928, 14), 96}, // 478 ImageQueryLod
  {IR(30879, 16), 93}, // 479 ImageQueryOrder
  {IR(30959, 18), 98}, // 480 ImageQuerySamples
  {IR(30913, 15), 95}, // 481 ImageQuerySize
  {IR(30895, 18), 94}, // 482 ImageQuerySizeLod
  {IR(30841, 10), 89}, // 483 ImageRead
  {IR(30659, 27), 81}, // 484 ImageSampleDrefExplicitLod
  {IR(30632, 27), 80}, // 485 ImageSampleDrefImplicitLod
  {IR(30609, 23), 79}, // 486 ImageSampleExplicitLod
  {IR(38075, 23), 479}, // 487 ImageSampleFootprintNV
  {IR(30563, 23), 78}, // 488 ImageSampleImplicitLod
  {IR(30771, 31), 85}, // 489 ImageSampleProjDrefExplicitLod
  {IR(30740, 31), 84}, // 490 ImageSampleProjDrefImplicitLod
  {IR(30713, 27), 83}, // 491 ImageSampleProjExplicitLod
  {IR(30686, 27), 82}, // 492 ImageSampleProjImplicitLod
  {IR(36279, 24), 403}, // 493 ImageSampleWeightedQCOM
  {IR(33766, 22), 288}, // 494 ImageSparseDrefGather
  {IR(33731, 17), 286}, // 495 ImageSparseFetch
  {IR(33748, 18), 287}, // 496 ImageSparseGather
  {IR(33858, 16), 293}, // 497 ImageSparseRead
  {IR(33558, 33), 281}, // 498 ImageSparseSampleDrefExplicitLod
  {IR(33525, 33), 280}, // 499 ImageSparseSampleDrefImplicitLod
  {IR(33496, 29), 279}, // 500 ImageSparseSampleExplicitLod
  {IR(33467, 29), 278}, // 501 ImageSparseSampleImplicitLod
  {IR(33694, 37), 285}, // 502 ImageSparseSampleProjDrefExplicitLod
  {IR(33657, 37), 284}, // 503 ImageSparseSampleProjDrefImplicitLod
  {IR(33624, 33), 283}, // 504 ImageSparseSampleProjExplicitLod
  {IR(33591, 33), 282}, // 505 ImageSparseSampleProjImplicitLod
  {IR(33788, 26), 289}, // 506 ImageSparseTexelsResident
  {IR(30042, 18), 53}, // 507 ImageTexelPointer
  {IR(30851, 11), 90}, // 508 ImageWrite
  {IR(30150, 20), 59}, // 509 InBoundsAccessChain
  {IR(30220, 23), 63}, // 510 InBoundsPtrAccessChain
  {IR(31451, 9), 146}, // 511 IsFinite
  {IR(40558, 22), 563}, // 512 IsHelperInvocationEXT
  {IR(31445, 6), 145}, // 513 IsInf
  {IR(31439, 6), 144}, // 514 IsNan
  {IR(36944, 23), 431}, // 515 IsNodePayloadValidAMDX
  {IR(31460, 9), 147}, // 516 IsNormal
  {IR(33380, 13), 273}, // 517 IsValidEvent
  {IR(33035, 17), 257}, // 518 IsValidReserveId
  {IR(32663, 5), 230}, // 519 Kill
  {IR(32580, 6), 226}, // 520 Label
  {IR(31480, 14), 149}, // 521 LessOrGreater
  {IR(32699, 14), 234}, // 522 LifetimeStart
  {IR(32713, 13), 235}, // 523 LifetimeStop
  {IR(28893, 5), 8}, // 524 Line
  {IR(30100, 5), 54}, // 525 Load
  {IR(31551, 11), 155}, // 526 LogicalAnd
  {IR(31512, 13), 152}, // 527 LogicalEqual
  {IR(31562, 11), 156}, // 528 LogicalNot
  {IR(31525, 16), 153}, // 529 LogicalNotEqual
  {IR(31541, 10), 154}, // 530 LogicalOr
  {IR(48600, 17), 785}, // 531 LoopControlINTEL
  {IR(32520, 10), 224}, // 532 LoopMerge
  {IR(51067, 18), 865}, // 533 MaskedGatherINTEL
  {IR(51085, 19), 866}, // 534 MaskedScatterINTEL
  {IR(31349, 18), 135}, // 535 MatrixTimesMatrix
  {IR(31295, 18), 132}, // 536 MatrixTimesScalar
  {IR(31331, 18), 134}, // 537 MatrixTimesVector
  {IR(30280, 15), 65}, // 538 MemberDecorate
  {IR(37120, 20), 440}, // 539 MemberDecorateIdEXT
  {IR(41897, 21), 622}, // 540 MemberDecorateString
  {IR(41918, 27), 622}, // 541 MemberDecorateStringGOOGLE
  {IR(28875, 11), 6}, // 542 MemberName
  {IR(32257, 14), 206}, // 543 MemoryBarrier
  {IR(29040, 12), 12}, // 544 MemoryModel
  {IR(34043, 19), 302}, // 545 MemoryNamedBarrier
  {IR(34062, 16), 303}, // 546 ModuleProcessed
  {IR(28870, 5), 5}, // 547 Name
  {IR(34020, 23), 301}, // 548 NamedBarrierInitialize
  {IR(33814, 7), 290}, // 549 NoLine
  {IR(36917, 27), 430}, // 550 NodePayloadArrayLengthAMDX
  {IR(28666, 4), 0}, // 551 Nop
  {IR(31991, 4), 186}, // 552 Not
  {IR(31494, 8), 150}, // 553 Ordered
  {IR(31367, 13), 136}, // 554 OuterProduct
  {IR(32486, 4), 223}, // 555 Phi
  {IR(37178, 10), 444}, // 556 PoisonKHR
  {IR(50870, 20), 854}, // 557 PredicatedLoadINTEL
  {IR(50890, 21), 855}, // 558 PredicatedStoreINTEL
  {IR(30170, 15), 60}, // 559 PtrAccessChain
  {IR(49035, 30), 800}, // 560 PtrCastToCrossWorkgroupALTERA
  {IR(49065, 29), 800}, // 561 PtrCastToCrossWorkgroupINTEL
  {IR(31124, 17), 111}, // 562 PtrCastToGeneric
  {IR(34910, 8), 343}, // 563 PtrDiff
  {IR(34889, 9), 341}, // 564 PtrEqual
  {IR(34898, 12), 342}, // 565 PtrNotEqual
  {IR(31052, 14), 106}, // 566 QuantizeToF16
  {IR(40863, 17), 574}, // 567 RawAccessChainNV
  {IR(36198, 31), 400}, // 568 RayQueryConfirmIntersectionKHR
  {IR(36166, 32), 399}, // 569 RayQueryGenerateIntersectionKHR
  {IR(39708, 23), 533}, // 570 RayQueryGetClusterIdNV
  {IR(49547, 39), 813}, // 571 RayQueryGetIntersectionBarycentricsKHR
  {IR(49622, 46), 815}, // 572 RayQueryGetIntersectionCandidateAABBOpaqueKHR
  {IR(39673, 35), 533}, // 573 RayQueryGetIntersectionClusterIdNV
  {IR(49586, 36), 814}, // 574 RayQueryGetIntersectionFrontFaceKHR
  {IR(49466, 40), 811}, // 575 RayQueryGetIntersectionGeometryIndexKHR
  {IR(49318, 46), 808}, // 576 RayQueryGetIntersectionInstanceCustomIndexKHR
  {IR(49364, 37), 809}, // 577 RayQueryGetIntersectionInstanceIdKHR
  {IR(49401, 65), 810}, // 578 RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR
  {IR(41030, 37), 579}, // 579 RayQueryGetIntersectionLSSHitValueNV
  {IR(40958, 38), 577}, // 580 RayQueryGetIntersectionLSSPositionsNV
  {IR(40996, 34), 578}, // 581 RayQueryGetIntersectionLSSRadiiNV
  {IR(49668, 45), 816}, // 582 RayQueryGetIntersectionObjectRayDirectionKHR
  {IR(49713, 42), 817}, // 583 RayQueryGetIntersectionObjectRayOriginKHR
  {IR(49816, 40), 820}, // 584 RayQueryGetIntersectionObjectToWorldKHR
  {IR(49506, 41), 812}, // 585 RayQueryGetIntersectionPrimitiveIndexKHR
  {IR(40880, 40), 575}, // 586 RayQueryGetIntersectionSpherePositionNV
  {IR(40920, 38), 576}, // 587 RayQueryGetIntersectionSphereRadiusNV
  {IR(49290, 28), 807}, // 588 RayQueryGetIntersectionTKHR
  {IR(39548, 50), 530}, // 589 RayQueryGetIntersectionTriangleVertexPositionsKHR
  {IR(36248, 31), 402}, // 590 RayQueryGetIntersectionTypeKHR
  {IR(49856, 40), 821}, // 591 RayQueryGetIntersectionWorldToObjectKHR
  {IR(49267, 23), 806}, // 592 RayQueryGetRayFlagsKHR
  {IR(49245, 22), 805}, // 593 RayQueryGetRayTMinKHR
  {IR(49755, 32), 818}, // 594 RayQueryGetWorldRayDirectionKHR
  {IR(49787, 29), 819}, // 595 RayQueryGetWorldRayOriginKHR
  {IR(36123, 22), 397}, // 596 RayQueryInitializeKHR
  {IR(41238, 19), 587}, // 597 RayQueryIsLSSHitNV
  {IR(41216, 22), 586}, // 598 RayQueryIsSphereHitNV
  {IR(36229, 19), 401}, // 599 RayQueryProceedKHR
  {IR(36145, 21), 398}, // 600 RayQueryTerminateKHR
  {IR(36801, 13), 425}, // 601 ReadClockKHR
  {IR(32903, 9), 249}, // 602 ReadPipe
  {IR(49153, 23), 802}, // 603 ReadPipeBlockingALTERA
  {IR(49176, 22), 802}, // 604 ReadPipeBlockingINTEL
  {IR(33351, 13), 271}, // 605 ReleaseEvent
  {IR(38872, 25), 504}, // 606 ReorderThreadWithHintEXT
  {IR(38035, 24), 477}, // 607 ReorderThreadWithHintNV
  {IR(38897, 30), 505}, // 608 ReorderThreadWithHitObjectEXT
  {IR(38006, 29), 476}, // 609 ReorderThreadWithHitObjectNV
  {IR(39430, 22), 524}, // 610 ReportIntersectionKHR
  {IR(39452, 21), 524}, // 611 ReportIntersectionNV
  {IR(32957, 23), 253}, // 612 ReserveReadPipePackets
  {IR(32980, 24), 254}, // 613 ReserveWritePipePackets
  {IR(32922, 17), 251}, // 614 ReservedReadPipe
  {IR(32939, 18), 252}, // 615 ReservedWritePipe
  {IR(47127, 19), 743}, // 616 RestoreMemoryINTEL
  {IR(33339, 12), 270}, // 617 RetainEvent
  {IR(32668, 7), 231}, // 618 Return
  {IR(32675, 12), 232}, // 619 ReturnValue
  {IR(51049, 18), 864}, // 620 RoundFToTF32INTEL
  {IR(31034, 9), 104}, // 621 SConvert
  {IR(31242, 5), 124}, // 622 SDiv
  {IR(35710, 5), 382}, // 623 SDot
  {IR(35751, 11), 385}, // 624 SDotAccSat
  {IR(35762, 14), 385}, // 625 SDotAccSatKHR
  {IR(35715, 8), 382}, // 626 SDotKHR
  {IR(31610, 13), 161}, // 627 SGreaterThan
  {IR(31641, 18), 163}, // 628 SGreaterThanEqual
  {IR(31669, 10), 165}, // 629 SLessThan
  {IR(31694, 15), 167}, // 630 SLessThanEqual
  {IR(31262, 5), 128}, // 631 SMod
  {IR(31418, 13), 141}, // 632 SMulExtended
  {IR(31191, 8), 115}, // 633 SNegate
  {IR(31257, 5), 127}, // 634 SRem
  {IR(35736, 6), 384}, // 635 SUDot
  {IR(35801, 12), 387}, // 636 SUDotAccSat
  {IR(35813, 15), 387}, // 637 SUDotAccSatKHR
  {IR(35742, 9), 384}, // 638 SUDotKHR
  {IR(30518, 13), 77}, // 639 SampledImage
  {IR(40782, 29), 573}, // 640 SamplerImageAddressingModeNV
  {IR(31080, 15), 108}, // 641 SatConvertSToU
  {IR(31095, 15), 109}, // 642 SatConvertUToS
  {IR(47111, 16), 742}, // 643 SaveMemoryINTEL
  {IR(31573, 7), 157}, // 644 Select
  {IR(32565, 15), 225}, // 645 SelectionMerge
  {IR(38324, 18), 487}, // 646 SetMeshOutputsEXT
  {IR(33393, 19), 274}, // 647 SetUserEventStatus
  {IR(31942, 17), 182}, // 648 ShiftLeftLogical
  {IR(31921, 21), 181}, // 649 ShiftRightArithmetic
  {IR(31903, 18), 180}, // 650 ShiftRightLogical
  {IR(31469, 11), 148}, // 651 SignBitSet
  {IR(33874, 7), 294}, // 652 SizeOf
  {IR(28847, 7), 3}, // 653 Source
  {IR(28728, 16), 2}, // 654 SourceContinued
  {IR(28854, 16), 4}, // 655 SourceExtension
  {IR(29865, 13), 45}, // 656 SpecConstant
  {IR(50746, 30), 851}, // 657 SpecConstantArchitectureINTEL
  {IR(50813, 30), 852}, // 658 SpecConstantCapabilitiesINTEL
  {IR(29878, 22), 46}, // 659 SpecConstantComposite
  {IR(49990, 36), 826}, // 660 SpecConstantCompositeContinuedINTEL
  {IR(36042, 34), 394}, // 661 SpecConstantCompositeReplicateEXT
  {IR(37158, 20), 443}, // 662 SpecConstantDataKHR
  {IR(29847, 18), 44}, // 663 SpecConstantFalse
  {IR(29941, 15), 47}, // 664 SpecConstantOp
  {IR(36986, 23), 433}, // 665 SpecConstantStringAMDX
  {IR(50722, 24), 850}, // 666 SpecConstantTargetINTEL
  {IR(29830, 17), 43}, // 667 SpecConstantTrue
  {IR(34964, 25), 346}, // 668 StencilAttachmentReadEXT
  {IR(30105, 6), 55}, // 669 Store
  {IR(28886, 7), 7}, // 670 String
  {IR(50411, 25), 839}, // 671 Subgroup2DBlockLoadINTEL
  {IR(50436, 34), 840}, // 672 Subgroup2DBlockLoadTransformINTEL
  {IR(50470, 34), 841}, // 673 Subgroup2DBlockLoadTransposeINTEL
  {IR(50504, 29), 842}, // 674 Subgroup2DBlockPrefetchINTEL
  {IR(50533, 26), 843}, // 675 Subgroup2DBlockStoreINTEL
  {IR(35462, 20), 372}, // 676 SubgroupAllEqualKHR
  {IR(35432, 15), 370}, // 677 SubgroupAllKHR
  {IR(35447, 15), 371}, // 678 SubgroupAnyKHR
  {IR(45629, 30), 706}, // 679 SubgroupAvcBmeInitializeINTEL
  {IR(45599, 30), 705}, // 680 SubgroupAvcFmeInitializeINTEL
  {IR(44034, 35), 675}, // 681 SubgroupAvcImeAdjustRefOffsetINTEL
  {IR(44069, 39), 676}, // 682 SubgroupAvcImeConvertToMcePayloadINTEL
  {IR(44710, 38), 689}, // 683 SubgroupAvcImeConvertToMceResultINTEL
  {IR(44333, 45), 682}, // 684 SubgroupAvcImeEvaluateWithDualReferenceINTEL
  {IR(44433, 53), 684}, // 685 SubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL
  {IR(44654, 56), 688}, // 686 SubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL
  {IR(44542, 54), 686}, // 687 SubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL
  {IR(44286, 47), 681}, // 688 SubgroupAvcImeEvaluateWithSingleReferenceINTEL
  {IR(44378, 55), 683}, // 689 SubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL
  {IR(44596, 58), 687}, // 690 SubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL
  {IR(44486, 56), 685}, // 691 SubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL
  {IR(45342, 36), 700}, // 692 SubgroupAvcImeGetBorderReachedINTEL
  {IR(44794, 44), 691}, // 693 SubgroupAvcImeGetDualReferenceStreaminINTEL
  {IR(44748, 46), 690}, // 694 SubgroupAvcImeGetSingleReferenceStreaminINTEL
  {IR(45209, 66), 698}, // 695 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL
  {IR(45141, 68), 697}, // 696 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL
  {IR(45275, 67), 699}, // 697 SubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL
  {IR(45004, 68), 695}, // 698 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL
  {IR(44934, 70), 694}, // 699 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL
  {IR(45072, 69), 696}, // 700 SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL
  {IR(45378, 48), 701}, // 701 SubgroupAvcImeGetTruncatedSearchIndicationINTEL
  {IR(45426, 59), 702}, // 702 SubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL
  {IR(45543, 56), 704}, // 703 SubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL
  {IR(45485, 58), 703}, // 704 SubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL
  {IR(43897, 30), 671}, // 705 SubgroupAvcImeInitializeINTEL
  {IR(44001, 33), 674}, // 706 SubgroupAvcImeRefWindowSizeINTEL
  {IR(43965, 36), 673}, // 707 SubgroupAvcImeSetDualReferenceINTEL
  {IR(44198, 54), 679}, // 708 SubgroupAvcImeSetEarlySearchTerminationThresholdINTEL
  {IR(44108, 43), 677}, // 709 SubgroupAvcImeSetMaxMotionVectorCountINTEL
  {IR(43927, 38), 672}, // 710 SubgroupAvcImeSetSingleReferenceINTEL
  {IR(44151, 47), 678}, // 711 SubgroupAvcImeSetUnidirectionalMixDisableINTEL
  {IR(44252, 34), 680}, // 712 SubgroupAvcImeSetWeightedSadINTEL
  {IR(44887, 47), 693}, // 713 SubgroupAvcImeStripDualReferenceStreamoutINTEL
  {IR(44838, 49), 692}, // 714 SubgroupAvcImeStripSingleReferenceStreamoutINTEL
  {IR(43287, 39), 656}, // 715 SubgroupAvcMceConvertToImePayloadINTEL
  {IR(43326, 38), 657}, // 716 SubgroupAvcMceConvertToImeResultINTEL
  {IR(43364, 39), 658}, // 717 SubgroupAvcMceConvertToRefPayloadINTEL
  {IR(43403, 38), 659}, // 718 SubgroupAvcMceConvertToRefResultINTEL
  {IR(43441, 39), 660}, // 719 SubgroupAvcMceConvertToSicPayloadINTEL
  {IR(43480, 38), 661}, // 720 SubgroupAvcMceConvertToSicResultINTEL
  {IR(43593, 43), 664}, // 721 SubgroupAvcMceGetBestInterDistortionsINTEL
  {IR(42725, 50), 645}, // 722 SubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL
  {IR(42323, 60), 637}, // 723 SubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL
  {IR(42523, 51), 641}, // 724 SubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL
  {IR(42669, 56), 644}, // 725 SubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL
  {IR(42436, 47), 639}, // 726 SubgroupAvcMceGetDefaultInterShapePenaltyINTEL
  {IR(43024, 56), 651}, // 727 SubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL
  {IR(42923, 50), 649}, // 728 SubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL
  {IR(42618, 51), 643}, // 729 SubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL
  {IR(42827, 49), 647}, // 730 SubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL
  {IR(42775, 52), 646}, // 731 SubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL
  {IR(42973, 51), 650}, // 732 SubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL
  {IR(43712, 38), 667}, // 733 SubgroupAvcMceGetInterDirectionsINTEL
  {IR(43554, 39), 663}, // 734 SubgroupAvcMceGetInterDistortionsINTEL
  {IR(43636, 38), 665}, // 735 SubgroupAvcMceGetInterMajorShapeINTEL
  {IR(43674, 38), 666}, // 736 SubgroupAvcMceGetInterMinorShapeINTEL
  {IR(43750, 45), 668}, // 737 SubgroupAvcMceGetInterMotionVectorCountINTEL
  {IR(43795, 40), 669}, // 738 SubgroupAvcMceGetInterReferenceIdsINTEL
  {IR(43835, 62), 670}, // 739 SubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL
  {IR(43518, 36), 662}, // 740 SubgroupAvcMceGetMotionVectorsINTEL
  {IR(43080, 33), 652}, // 741 SubgroupAvcMceSetAcOnlyHaarINTEL
  {IR(43226, 61), 655}, // 742 SubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL
  {IR(42383, 53), 638}, // 743 SubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL
  {IR(42574, 44), 642}, // 744 SubgroupAvcMceSetInterDirectionPenaltyINTEL
  {IR(42483, 40), 640}, // 745 SubgroupAvcMceSetInterShapePenaltyINTEL
  {IR(42876, 47), 648}, // 746 SubgroupAvcMceSetMotionVectorCostFunctionINTEL
  {IR(43165, 61), 654}, // 747 SubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL
  {IR(43113, 52), 653}, // 748 SubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL
  {IR(45659, 39), 707}, // 749 SubgroupAvcRefConvertToMcePayloadINTEL
  {IR(45981, 38), 714}, // 750 SubgroupAvcRefConvertToMceResultINTEL
  {IR(45834, 45), 711}, // 751 SubgroupAvcRefEvaluateWithDualReferenceINTEL
  {IR(45879, 46), 712}, // 752 SubgroupAvcRefEvaluateWithMultiReferenceINTEL
  {IR(45925, 56), 713}, // 753 SubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL
  {IR(45787, 47), 710}, // 754 SubgroupAvcRefEvaluateWithSingleReferenceINTEL
  {IR(45698, 46), 708}, // 755 SubgroupAvcRefSetBidirectionalMixDisableINTEL
  {IR(45744, 43), 709}, // 756 SubgroupAvcRefSetBilinearFilterEnableINTEL
  {IR(46117, 42), 718}, // 757 SubgroupAvcSicConfigureIpeLumaChromaINTEL
  {IR(46081, 36), 717}, // 758 SubgroupAvcSicConfigureIpeLumaINTEL
  {IR(46049, 32), 716}, // 759 SubgroupAvcSicConfigureSkcINTEL
  {IR(46198, 39), 720}, // 760 SubgroupAvcSicConvertToMcePayloadINTEL
  {IR(46738, 38), 732}, // 761 SubgroupAvcSicConvertToMceResultINTEL
  {IR(46513, 31), 727}, // 762 SubgroupAvcSicEvaluateIpeINTEL
  {IR(46591, 45), 729}, // 763 SubgroupAvcSicEvaluateWithDualReferenceINTEL
  {IR(46636, 46), 730}, // 764 SubgroupAvcSicEvaluateWithMultiReferenceINTEL
  {IR(46682, 56), 731}, // 765 SubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL
  {IR(46544, 47), 728}, // 766 SubgroupAvcSicEvaluateWithSingleReferenceINTEL
  {IR(46855, 46), 735}, // 767 SubgroupAvcSicGetBestIpeChromaDistortionINTEL
  {IR(46811, 44), 734}, // 768 SubgroupAvcSicGetBestIpeLumaDistortionINTEL
  {IR(47076, 35), 740}, // 769 SubgroupAvcSicGetInterRawSadsINTEL
  {IR(46942, 36), 737}, // 770 SubgroupAvcSicGetIpeChromaModeINTEL
  {IR(46776, 35), 733}, // 771 SubgroupAvcSicGetIpeLumaShapeINTEL
  {IR(46159, 39), 719}, // 772 SubgroupAvcSicGetMotionVectorMaskINTEL
  {IR(46901, 41), 736}, // 773 SubgroupAvcSicGetPackedIpeLumaModesINTEL
  {IR(46978, 50), 738}, // 774 SubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL
  {IR(47028, 48), 739}, // 775 SubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL
  {IR(46019, 30), 715}, // 776 SubgroupAvcSicInitializeINTEL
  {IR(46379, 43), 724}, // 777 SubgroupAvcSicSetBilinearFilterEnableINTEL
  {IR(46470, 43), 726}, // 778 SubgroupAvcSicSetBlockBasedRawSkipSadINTEL
  {IR(46329, 50), 723}, // 779 SubgroupAvcSicSetIntraChromaModeCostFunctionINTEL
  {IR(46281, 48), 722}, // 780 SubgroupAvcSicSetIntraLumaModeCostFunctionINTEL
  {IR(46237, 44), 721}, // 781 SubgroupAvcSicSetIntraLumaShapePenaltyINTEL
  {IR(46422, 48), 725}, // 782 SubgroupAvcSicSetSkcForwardTransformEnableINTEL
  {IR(6436, 18), 363}, // 783 SubgroupBallotKHR
  {IR(50384, 27), 838}, // 784 SubgroupBlockPrefetchINTEL
  {IR(41329, 23), 592}, // 785 SubgroupBlockReadINTEL
  {IR(41352, 24), 593}, // 786 SubgroupBlockWriteINTEL
  {IR(35299, 27), 364}, // 787 SubgroupFirstInvocationKHR
  {IR(41376, 28), 594}, // 788 SubgroupImageBlockReadINTEL
  {IR(41404, 29), 595}, // 789 SubgroupImageBlockWriteINTEL
  {IR(41433, 33), 596}, // 790 SubgroupImageMediaBlockReadINTEL
  {IR(41466, 34), 597}, // 791 SubgroupImageMediaBlockWriteINTEL
  {IR(15669, 38), 844}, // 792 SubgroupMatrixMultiplyAccumulateINTEL
  {IR(35482, 26), 374}, // 793 SubgroupReadInvocationKHR
  {IR(41257, 25), 589}, // 794 SubgroupShuffleDownINTEL
  {IR(13283, 21), 588}, // 795 SubgroupShuffleINTEL
  {IR(41282, 23), 590}, // 796 SubgroupShuffleUpINTEL
  {IR(41305, 24), 591}, // 797 SubgroupShuffleXorINTEL
  {IR(32656, 7), 229}, // 798 Switch
  {IR(50198, 24), 834}, // 799 TaskSequenceAsyncALTERA
  {IR(50222, 23), 834}, // 800 TaskSequenceAsyncINTEL
  {IR(50149, 25), 833}, // 801 TaskSequenceCreateALTERA
  {IR(50174, 24), 833}, // 802 TaskSequenceCreateINTEL
  {IR(50245, 22), 835}, // 803 TaskSequenceGetALTERA
  {IR(50267, 21), 835}, // 804 TaskSequenceGetINTEL
  {IR(50288, 26), 836}, // 805 TaskSequenceReleaseALTERA
  {IR(50314, 25), 836}, // 806 TaskSequenceReleaseINTEL
  {IR(40600, 27), 565}, // 807 TensorLayoutSetBlockSizeNV
  {IR(40464, 28), 558}, // 808 TensorLayoutSetClampValueNV
  {IR(40393, 27), 555}, // 809 TensorLayoutSetDimensionNV
  {IR(40420, 24), 556}, // 810 TensorLayoutSetStrideNV
  {IR(40444, 20), 557}, // 811 TensorLayoutSliceNV
  {IR(35074, 19), 350}, // 812 TensorQuerySizeARM
  {IR(35045, 14), 348}, // 813 TensorReadARM
  {IR(40580, 20), 564}, // 814 TensorViewSetClipNV
  {IR(40511, 25), 560}, // 815 TensorViewSetDimensionNV
  {IR(40536, 22), 561}, // 816 TensorViewSetStrideNV
  {IR(35059, 15), 349}, // 817 TensorWriteARM
  {IR(35186, 20), 358}, // 818 TerminateInvocation
  {IR(35647, 16), 381}, // 819 TerminateRayKHR
  {IR(39494, 15), 526}, // 820 TerminateRayNV
  {IR(39517, 14), 528}, // 821 TraceMotionNV
  {IR(39509, 8), 527}, // 822 TraceNV
  {IR(35559, 12), 377}, // 823 TraceRayKHR
  {IR(39531, 17), 529}, // 824 TraceRayMotionNV
  {IR(30508, 10), 76}, // 825 Transpose
  {IR(39598, 29), 531}, // 826 TypeAccelerationStructureKHR
  {IR(39627, 28), 531}, // 827 TypeAccelerationStructureNV
  {IR(29457, 10), 25}, // 828 TypeArray
  {IR(42242, 37), 634}, // 829 TypeAvcImeDualReferenceStreaminINTEL
  {IR(41977, 23), 625}, // 830 TypeAvcImePayloadINTEL
  {IR(42159, 44), 632}, // 831 TypeAvcImeResultDualReferenceStreamoutINTEL
  {IR(42091, 22), 630}, // 832 TypeAvcImeResultINTEL
  {IR(42113, 46), 631}, // 833 TypeAvcImeResultSingleReferenceStreamoutINTEL
  {IR(42203, 39), 633}, // 834 TypeAvcImeSingleReferenceStreaminINTEL
  {IR(42046, 23), 628}, // 835 TypeAvcMcePayloadINTEL
  {IR(42069, 22), 629}, // 836 TypeAvcMceResultINTEL
  {IR(42000, 23), 626}, // 837 TypeAvcRefPayloadINTEL
  {IR(42279, 22), 635}, // 838 TypeAvcRefResultINTEL
  {IR(42023, 23), 627}, // 839 TypeAvcSicPayloadINTEL
  {IR(42301, 22), 636}, // 840 TypeAvcSicResultINTEL
  {IR(29219, 9), 17}, // 841 TypeBool
  {IR(37061, 14), 436}, // 842 TypeBufferEXT
  {IR(49910, 23), 823}, // 843 TypeBufferSurfaceINTEL
  {IR(35828, 25), 388}, // 844 TypeCooperativeMatrixKHR
  {IR(39920, 24), 541}, // 845 TypeCooperativeMatrixNV
  {IR(38114, 24), 480}, // 846 TypeCooperativeVectorNV
  {IR(29572, 16), 32}, // 847 TypeDeviceEvent
  {IR(29562, 10), 31}, // 848 TypeEvent
  {IR(29273, 10), 19}, // 849 TypeFloat
  {IR(29621, 19), 36}, // 850 TypeForwardPointer
  {IR(29549, 13), 30}, // 851 TypeFunction
  {IR(35173, 13), 357}, // 852 TypeGraphARM
  {IR(38855, 17), 503}, // 853 TypeHitObjectEXT
  {IR(38059, 16), 478}, // 854 TypeHitObjectNV
  {IR(29418, 10), 22}, // 855 TypeImage
  {IR(29228, 8), 18}, // 856 TypeInt
  {IR(29294, 11), 21}, // 857 TypeMatrix
  {IR(34003, 17), 300}, // 858 TypeNamedBarrier
  {IR(36863, 25), 428}, // 859 TypeNodePayloadArrayAMDX
  {IR(29495, 11), 28}, // 860 TypeOpaque
  {IR(29612, 9), 35}, // 861 TypePipe
  {IR(33881, 16), 295}, // 862 TypePipeStorage
  {IR(29537, 12), 29}, // 863 TypePointer
  {IR(29602, 10), 34}, // 864 TypeQueue
  {IR(36107, 16), 396}, // 865 TypeRayQueryKHR
  {IR(29588, 14), 33}, // 866 TypeReserveId
  {IR(29467, 17), 26}, // 867 TypeRuntimeArray
  {IR(29440, 17), 24}, // 868 TypeSampledImage
  {IR(29428, 12), 23}, // 869 TypeSampler
  {IR(29484, 11), 27}, // 870 TypeStruct
  {IR(49933, 25), 824}, // 871 TypeStructContinuedINTEL
  {IR(50339, 23), 837}, // 872 TypeTaskSequenceALTERA
  {IR(50362, 22), 837}, // 873 TypeTaskSequenceINTEL
  {IR(34989, 14), 347}, // 874 TypeTensorARM
  {IR(40336, 19), 552}, // 875 TypeTensorLayoutNV
  {IR(40355, 17), 553}, // 876 TypeTensorViewNV
  {IR(35206, 22), 359}, // 877 TypeUntypedPointerKHR
  {IR(29283, 11), 20}, // 878 TypeVector
  {IR(38098, 16), 480}, // 879 TypeVectorIdEXT
  {IR(41959, 18), 624}, // 880 TypeVmeImageINTEL
  {IR(29210, 9), 16}, // 881 TypeVoid
  {IR(41588, 13), 603}, // 882 UAddSatINTEL
  {IR(41615, 14), 605}, // 883 UAverageINTEL
  {IR(41650, 21), 607}, // 884 UAverageRoundedINTEL
  {IR(31025, 9), 103}, // 885 UConvert
  {IR(41500, 24), 598}, // 886 UCountLeadingZerosINTEL
  {IR(41524, 25), 599}, // 887 UCountTrailingZerosINTEL
  {IR(31237, 5), 123}, // 888 UDiv
  {IR(35723, 5), 383}, // 889 UDot
  {IR(35776, 11), 386}, // 890 UDotAccSat
  {IR(35787, 14), 386}, // 891 UDotAccSatKHR
  {IR(35728, 8), 383}, // 892 UDotKHR
  {IR(31597, 13), 160}, // 893 UGreaterThan
  {IR(31623, 18), 162}, // 894 UGreaterThanEqual
  {IR(31659, 10), 164}, // 895 ULessThan
  {IR(31679, 15), 166}, // 896 ULessThanEqual
  {IR(31252, 5), 126}, // 897 UMod
  {IR(41712, 15), 611}, // 898 UMul32x16INTEL
  {IR(31405, 13), 140}, // 899 UMulExtended
  {IR(41684, 13), 609}, // 900 USubSatINTEL
  {IR(28722, 6), 1}, // 901 Undef
  {IR(31502, 10), 151}, // 902 Unordered
  {IR(32687, 12), 233}, // 903 Unreachable
  {IR(35247, 22), 361}, // 904 UntypedAccessChainKHR
  {IR(35384, 22), 367}, // 905 UntypedArrayLengthKHR
  {IR(35534, 25), 376}, // 906 UntypedGroupAsyncCopyKHR
  {IR(37092, 28), 439}, // 907 UntypedImageTexelPointerEXT
  {IR(35269, 30), 362}, // 908 UntypedInBoundsAccessChainKHR
  {IR(35351, 33), 366}, // 909 UntypedInBoundsPtrAccessChainKHR
  {IR(35406, 19), 368}, // 910 UntypedPrefetchKHR
  {IR(35326, 25), 365}, // 911 UntypedPtrAccessChainKHR
  {IR(35228, 19), 360}, // 912 UntypedVariableKHR
  {IR(15735, 32), 846}, // 913 UntypedVariableLengthArrayINTEL
  {IR(30033, 9), 52}, // 914 Variable
  {IR(13739, 25), 741}, // 915 VariableLengthArrayINTEL
  {IR(30390, 21), 69}, // 916 VectorExtractDynamic
  {IR(30411, 20), 70}, // 917 VectorInsertDynamic
  {IR(30431, 14), 71}, // 918 VectorShuffle
  {IR(31313, 18), 133}, // 919 VectorTimesMatrix
  {IR(31277, 18), 131}, // 920 VectorTimesScalar
  {IR(41945, 14), 623}, // 921 VmeImageINTEL
  {IR(38397, 33), 489}, // 922 WritePackedPrimitiveIndices4x8NV
  {IR(32912, 10), 250}, // 923 WritePipe
  {IR(49198, 24), 803}, // 924 WritePipeBlockingALTERA
  {IR(49222, 23), 803}, // 925 WritePipeBlockingINTEL
}};

// Extended instruction descriptions, ordered by (extinst enum, opcode value).
// The fields in order are:
//   enum value
//   operands, an IndexRange into kOperandSpans
//   name, a character-counting IndexRange into kStrings
//   capabilities, an IndexRange into kCapabilitySpans
static const std::array<ExtInstDesc, 494> kExtInstByValue{{
    {0,IR(765, 9),IR(51248, 8),IR(1, 0)}, // MIN_SAD in arm_motion_engine_100
    {1,IR(765, 9),IR(51256, 13),IR(1, 0)}, // MIN_SAD_COST in arm_motion_engine_100
    {2,IR(471, 8),IR(51269, 8),IR(1, 0)}, // RAW_SAD in arm_motion_engine_100
    {0,IR(0, 0),IR(51277, 14),IR(1, 0)}, // DebugInfoNone in debuginfo
    {1,IR(52, 3),IR(51291, 21),IR(1, 0)}, // DebugCompilationUnit in debuginfo
    {2,IR(811, 3),IR(51364, 15),IR(1, 0)}, // DebugTypeBasic in debuginfo
    {3,IR(814, 3),IR(51413, 17),IR(1, 0)}, // DebugTypePointer in debuginfo
    {4,IR(817, 2),IR(51468, 19),IR(1, 0)}, // DebugTypeQualifier in debuginfo
    {5,IR(168, 2),IR(51487, 15),IR(1, 0)}, // DebugTypeArray in debuginfo
    {6,IR(261, 2),IR(51502, 16),IR(1, 0)}, // DebugTypeVector in debuginfo
    {7,IR(819, 6),IR(51518, 13),IR(1, 0)}, // DebugTypedef in debuginfo
    {8,IR(168, 2),IR(51531, 18),IR(1, 0)}, // DebugTypeFunction in debuginfo
    {9,IR(825, 9),IR(51549, 14),IR(1, 0)}, // DebugTypeEnum in debuginfo
    {10,IR(834, 9),IR(51601, 19),IR(1, 0)}, // DebugTypeComposite in debuginfo
    {11,IR(843, 10),IR(51620, 16),IR(1, 0)}, // DebugTypeMember in debuginfo
    {12,IR(853, 5),IR(51636, 21),IR(1, 0)}, // DebugTypeInheritance in debuginfo
    {13,IR(36, 2),IR(51657, 21),IR(1, 0)}, // DebugTypePtrToMember in debuginfo
    {14,IR(168, 2),IR(51678, 18),IR(1, 0)}, // DebugTypeTemplate in debuginfo
    {15,IR(858, 6),IR(51696, 27),IR(1, 0)}, // DebugTypeTemplateParameter in debuginfo
    {16,IR(864, 5),IR(51723, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in debuginfo
    {17,IR(869, 5),IR(51758, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in debuginfo
    {18,IR(843, 10),IR(51789, 20),IR(1, 0)}, // DebugGlobalVariable in debuginfo
    {19,IR(874, 8),IR(51809, 25),IR(1, 0)}, // DebugFunctionDeclaration in debuginfo
    {20,IR(882, 11),IR(51834, 14),IR(1, 0)}, // DebugFunction in debuginfo
    {21,IR(893, 5),IR(51848, 18),IR(1, 0)}, // DebugLexicalBlock in debuginfo
    {22,IR(898, 3),IR(51866, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in debuginfo
    {23,IR(901, 2),IR(51897, 11),IR(1, 0)}, // DebugScope in debuginfo
    {24,IR(0, 0),IR(51908, 13),IR(1, 0)}, // DebugNoScope in debuginfo
    {25,IR(903, 3),IR(51921, 15),IR(1, 0)}, // DebugInlinedAt in debuginfo
    {26,IR(906, 7),IR(51978, 19),IR(1, 0)}, // DebugLocalVariable in debuginfo
    {27,IR(36, 2),IR(51997, 21),IR(1, 0)}, // DebugInlinedVariable in debuginfo
    {28,IR(33, 3),IR(52018, 13),IR(1, 0)}, // DebugDeclare in debuginfo
    {29,IR(375, 3),IR(52031, 11),IR(1, 0)}, // DebugValue in debuginfo
    {30,IR(913, 2),IR(52075, 15),IR(1, 0)}, // DebugOperation in debuginfo
    {31,IR(747, 1),IR(52090, 16),IR(1, 0)}, // DebugExpression in debuginfo
    {32,IR(915, 4),IR(52106, 14),IR(1, 0)}, // DebugMacroDef in debuginfo
    {33,IR(898, 3),IR(52120, 16),IR(1, 0)}, // DebugMacroUndef in debuginfo
    {1,IR(10, 1),IR(52136, 6),IR(1, 0)}, // Round in glsl_std_450
    {2,IR(10, 1),IR(52142, 10),IR(1, 0)}, // RoundEven in glsl_std_450
    {3,IR(10, 1),IR(52152, 6),IR(1, 0)}, // Trunc in glsl_std_450
    {4,IR(10, 1),IR(52158, 5),IR(1, 0)}, // FAbs in glsl_std_450
    {5,IR(10, 1),IR(52163, 5),IR(1, 0)}, // SAbs in glsl_std_450
    {6,IR(10, 1),IR(52168, 6),IR(1, 0)}, // FSign in glsl_std_450
    {7,IR(10, 1),IR(52174, 6),IR(1, 0)}, // SSign in glsl_std_450
    {8,IR(10, 1),IR(52180, 6),IR(1, 0)}, // Floor in glsl_std_450
    {9,IR(10, 1),IR(52186, 5),IR(1, 0)}, // Ceil in glsl_std_450
    {10,IR(10, 1),IR(52191, 6),IR(1, 0)}, // Fract in glsl_std_450
    {11,IR(10, 1),IR(52197, 8),IR(1, 0)}, // Radians in glsl_std_450
    {12,IR(10, 1),IR(52205, 8),IR(1, 0)}, // Degrees in glsl_std_450
    {13,IR(10, 1),IR(52213, 4),IR(1, 0)}, // Sin in glsl_std_450
    {14,IR(10, 1),IR(52217, 4),IR(1, 0)}, // Cos in glsl_std_450
    {15,IR(10, 1),IR(52221, 4),IR(1, 0)}, // Tan in glsl_std_450
    {16,IR(10, 1),IR(52225, 5),IR(1, 0)}, // Asin in glsl_std_450
    {17,IR(10, 1),IR(52230, 5),IR(1, 0)}, // Acos in glsl_std_450
    {18,IR(10, 1),IR(52235, 5),IR(1, 0)}, // Atan in glsl_std_450
    {19,IR(10, 1),IR(52240, 5),IR(1, 0)}, // Sinh in glsl_std_450
    {20,IR(10, 1),IR(52245, 5),IR(1, 0)}, // Cosh in glsl_std_450
    {21,IR(10, 1),IR(52250, 5),IR(1, 0)}, // Tanh in glsl_std_450
    {22,IR(10, 1),IR(52255, 6),IR(1, 0)}, // Asinh in glsl_std_450
    {23,IR(10, 1),IR(52261, 6),IR(1, 0)}, // Acosh in glsl_std_450
    {24,IR(10, 1),IR(52267, 6),IR(1, 0)}, // Atanh in glsl_std_450
    {25,IR(36, 2),IR(52273, 6),IR(1, 0)}, // Atan2 in glsl_std_450
    {26,IR(36, 2),IR(52279, 4),IR(1, 0)}, // Pow in glsl_std_450
    {27,IR(10, 1),IR(52283, 4),IR(1, 0)}, // Exp in glsl_std_450
    {28,IR(10, 1),IR(52287, 4),IR(1, 0)}, // Log in glsl_std_450
    {29,IR(10, 1),IR(52291, 5),IR(1, 0)}, // Exp2 in glsl_std_450
    {30,IR(10, 1),IR(52296, 5),IR(1, 0)}, // Log2 in glsl_std_450
    {31,IR(10, 1),IR(52301, 5),IR(1, 0)}, // Sqrt in glsl_std_450
    {32,IR(10, 1),IR(52306, 12),IR(1, 0)}, // InverseSqrt in glsl_std_450
    {33,IR(10, 1),IR(52318, 12),IR(1, 0)}, // Determinant in glsl_std_450
    {34,IR(10, 1),IR(52330, 14),IR(1, 0)}, // MatrixInverse in glsl_std_450
    {35,IR(36, 2),IR(52344, 5),IR(1, 0)}, // Modf in glsl_std_450
    {36,IR(10, 1),IR(52349, 11),IR(1, 0)}, // ModfStruct in glsl_std_450
    {37,IR(36, 2),IR(52360, 5),IR(1, 0)}, // FMin in glsl_std_450
    {38,IR(36, 2),IR(52365, 5),IR(1, 0)}, // UMin in glsl_std_450
    {39,IR(36, 2),IR(52370, 5),IR(1, 0)}, // SMin in glsl_std_450
    {40,IR(36, 2),IR(52375, 5),IR(1, 0)}, // FMax in glsl_std_450
    {41,IR(36, 2),IR(52380, 5),IR(1, 0)}, // UMax in glsl_std_450
    {42,IR(36, 2),IR(52385, 5),IR(1, 0)}, // SMax in glsl_std_450
    {43,IR(33, 3),IR(52390, 7),IR(1, 0)}, // FClamp in glsl_std_450
    {44,IR(33, 3),IR(52397, 7),IR(1, 0)}, // UClamp in glsl_std_450
    {45,IR(33, 3),IR(52404, 7),IR(1, 0)}, // SClamp in glsl_std_450
    {46,IR(33, 3),IR(52411, 5),IR(1, 0)}, // FMix in glsl_std_450
    {47,IR(33, 3),IR(52416, 5),IR(1, 0)}, // IMix in glsl_std_450
    {48,IR(36, 2),IR(52421, 5),IR(1, 0)}, // Step in glsl_std_450
    {49,IR(33, 3),IR(52426, 11),IR(1, 0)}, // SmoothStep in glsl_std_450
    {50,IR(33, 3),IR(52437, 4),IR(1, 0)}, // Fma in glsl_std_450
    {51,IR(36, 2),IR(52441, 6),IR(1, 0)}, // Frexp in glsl_std_450
    {52,IR(10, 1),IR(52447, 12),IR(1, 0)}, // FrexpStruct in glsl_std_450
    {53,IR(36, 2),IR(52459, 6),IR(1, 0)}, // Ldexp in glsl_std_450
    {54,IR(10, 1),IR(52465, 13),IR(1, 0)}, // PackSnorm4x8 in glsl_std_450
    {55,IR(10, 1),IR(52478, 13),IR(1, 0)}, // PackUnorm4x8 in glsl_std_450
    {56,IR(10, 1),IR(52491, 14),IR(1, 0)}, // PackSnorm2x16 in glsl_std_450
    {57,IR(10, 1),IR(52505, 14),IR(1, 0)}, // PackUnorm2x16 in glsl_std_450
    {58,IR(10, 1),IR(52519, 13),IR(1, 0)}, // PackHalf2x16 in glsl_std_450
    {59,IR(10, 1),IR(52532, 15),IR(331, 1)}, // PackDouble2x32 in glsl_std_450
    {60,IR(10, 1),IR(52547, 16),IR(1, 0)}, // UnpackSnorm2x16 in glsl_std_450
    {61,IR(10, 1),IR(52563, 16),IR(1, 0)}, // UnpackUnorm2x16 in glsl_std_450
    {62,IR(10, 1),IR(52579, 15),IR(1, 0)}, // UnpackHalf2x16 in glsl_std_450
    {63,IR(10, 1),IR(52594, 15),IR(1, 0)}, // UnpackSnorm4x8 in glsl_std_450
    {64,IR(10, 1),IR(52609, 15),IR(1, 0)}, // UnpackUnorm4x8 in glsl_std_450
    {65,IR(10, 1),IR(52624, 17),IR(331, 1)}, // UnpackDouble2x32 in glsl_std_450
    {66,IR(10, 1),IR(52641, 7),IR(1, 0)}, // Length in glsl_std_450
    {67,IR(36, 2),IR(52648, 9),IR(1, 0)}, // Distance in glsl_std_450
    {68,IR(36, 2),IR(52657, 6),IR(1, 0)}, // Cross in glsl_std_450
    {69,IR(10, 1),IR(52663, 10),IR(1, 0)}, // Normalize in glsl_std_450
    {70,IR(33, 3),IR(52673, 12),IR(1, 0)}, // FaceForward in glsl_std_450
    {71,IR(36, 2),IR(52685, 8),IR(1, 0)}, // Reflect in glsl_std_450
    {72,IR(33, 3),IR(52693, 8),IR(1, 0)}, // Refract in glsl_std_450
    {73,IR(10, 1),IR(52701, 9),IR(1, 0)}, // FindILsb in glsl_std_450
    {74,IR(10, 1),IR(52710, 9),IR(1, 0)}, // FindSMsb in glsl_std_450
    {75,IR(10, 1),IR(52719, 9),IR(1, 0)}, // FindUMsb in glsl_std_450
    {76,IR(10, 1),IR(52728, 22),IR(332, 1)}, // InterpolateAtCentroid in glsl_std_450
    {77,IR(36, 2),IR(52750, 20),IR(332, 1)}, // InterpolateAtSample in glsl_std_450
    {78,IR(36, 2),IR(52770, 20),IR(332, 1)}, // InterpolateAtOffset in glsl_std_450
    {79,IR(36, 2),IR(52790, 5),IR(1, 0)}, // NMin in glsl_std_450
    {80,IR(36, 2),IR(52795, 5),IR(1, 0)}, // NMax in glsl_std_450
    {81,IR(33, 3),IR(52800, 7),IR(1, 0)}, // NClamp in glsl_std_450
    {1,IR(399, 5),IR(5655, 7),IR(1, 0)}, // Kernel in nonsemantic_clspvreflection
    {2,IR(919, 5),IR(52807, 13),IR(1, 0)}, // ArgumentInfo in nonsemantic_clspvreflection
    {3,IR(593, 5),IR(52820, 22),IR(1, 0)}, // ArgumentStorageBuffer in nonsemantic_clspvreflection
    {4,IR(593, 5),IR(52842, 16),IR(1, 0)}, // ArgumentUniform in nonsemantic_clspvreflection
    {5,IR(557, 7),IR(52858, 25),IR(1, 0)}, // ArgumentPodStorageBuffer in nonsemantic_clspvreflection
    {6,IR(557, 7),IR(52883, 19),IR(1, 0)}, // ArgumentPodUniform in nonsemantic_clspvreflection
    {7,IR(593, 5),IR(52902, 24),IR(1, 0)}, // ArgumentPodPushConstant in nonsemantic_clspvreflection
    {8,IR(593, 5),IR(52926, 21),IR(1, 0)}, // ArgumentSampledImage in nonsemantic_clspvreflection
    {9,IR(593, 5),IR(52947, 21),IR(1, 0)}, // ArgumentStorageImage in nonsemantic_clspvreflection
    {10,IR(593, 5),IR(52968, 16),IR(1, 0)}, // ArgumentSampler in nonsemantic_clspvreflection
    {11,IR(593, 5),IR(52984, 18),IR(1, 0)}, // ArgumentWorkgroup in nonsemantic_clspvreflection
    {12,IR(33, 3),IR(53002, 26),IR(1, 0)}, // SpecConstantWorkgroupSize in nonsemantic_clspvreflection
    {13,IR(33, 3),IR(53028, 25),IR(1, 0)}, // SpecConstantGlobalOffset in nonsemantic_clspvreflection
    {14,IR(10, 1),IR(53053, 20),IR(1, 0)}, // SpecConstantWorkDim in nonsemantic_clspvreflection
    {15,IR(36, 2),IR(53073, 25),IR(1, 0)}, // PushConstantGlobalOffset in nonsemantic_clspvreflection
    {16,IR(36, 2),IR(53098, 30),IR(1, 0)}, // PushConstantEnqueuedLocalSize in nonsemantic_clspvreflection
    {17,IR(36, 2),IR(53128, 23),IR(1, 0)}, // PushConstantGlobalSize in nonsemantic_clspvreflection
    {18,IR(36, 2),IR(53151, 25),IR(1, 0)}, // PushConstantRegionOffset in nonsemantic_clspvreflection
    {19,IR(36, 2),IR(53176, 26),IR(1, 0)}, // PushConstantNumWorkgroups in nonsemantic_clspvreflection
    {20,IR(36, 2),IR(53202, 30),IR(1, 0)}, // PushConstantRegionGroupOffset in nonsemantic_clspvreflection
    {21,IR(33, 3),IR(53232, 26),IR(1, 0)}, // ConstantDataStorageBuffer in nonsemantic_clspvreflection
    {22,IR(33, 3),IR(53258, 20),IR(1, 0)}, // ConstantDataUniform in nonsemantic_clspvreflection
    {23,IR(33, 3),IR(9129, 15),IR(1, 0)}, // LiteralSampler in nonsemantic_clspvreflection
    {24,IR(296, 4),IR(53278, 30),IR(1, 0)}, // PropertyRequiredWorkgroupSize in nonsemantic_clspvreflection
    {25,IR(10, 1),IR(53308, 28),IR(1, 0)}, // SpecConstantSubgroupMaxSize in nonsemantic_clspvreflection
    {26,IR(593, 5),IR(53336, 28),IR(1, 0)}, // ArgumentPointerPushConstant in nonsemantic_clspvreflection
    {27,IR(557, 7),IR(53364, 23),IR(1, 0)}, // ArgumentPointerUniform in nonsemantic_clspvreflection
    {28,IR(33, 3),IR(53387, 35),IR(1, 0)}, // ProgramScopeVariablesStorageBuffer in nonsemantic_clspvreflection
    {29,IR(33, 3),IR(53422, 38),IR(1, 0)}, // ProgramScopeVariablePointerRelocation in nonsemantic_clspvreflection
    {30,IR(296, 4),IR(53460, 42),IR(1, 0)}, // ImageArgumentInfoChannelOrderPushConstant in nonsemantic_clspvreflection
    {31,IR(296, 4),IR(53502, 45),IR(1, 0)}, // ImageArgumentInfoChannelDataTypePushConstant in nonsemantic_clspvreflection
    {32,IR(528, 6),IR(53547, 37),IR(1, 0)}, // ImageArgumentInfoChannelOrderUniform in nonsemantic_clspvreflection
    {33,IR(528, 6),IR(53584, 40),IR(1, 0)}, // ImageArgumentInfoChannelDataTypeUniform in nonsemantic_clspvreflection
    {34,IR(593, 5),IR(53624, 27),IR(1, 0)}, // ArgumentStorageTexelBuffer in nonsemantic_clspvreflection
    {35,IR(593, 5),IR(53651, 27),IR(1, 0)}, // ArgumentUniformTexelBuffer in nonsemantic_clspvreflection
    {36,IR(33, 3),IR(53678, 32),IR(1, 0)}, // ConstantDataPointerPushConstant in nonsemantic_clspvreflection
    {37,IR(33, 3),IR(53710, 40),IR(1, 0)}, // ProgramScopeVariablePointerPushConstant in nonsemantic_clspvreflection
    {38,IR(375, 3),IR(53750, 11),IR(1, 0)}, // PrintfInfo in nonsemantic_clspvreflection
    {39,IR(33, 3),IR(53761, 26),IR(1, 0)}, // PrintfBufferStorageBuffer in nonsemantic_clspvreflection
    {40,IR(33, 3),IR(53787, 32),IR(1, 0)}, // PrintfBufferPointerPushConstant in nonsemantic_clspvreflection
    {41,IR(296, 4),IR(53819, 34),IR(1, 0)}, // NormalizedSamplerMaskPushConstant in nonsemantic_clspvreflection
    {42,IR(36, 2),IR(53853, 22),IR(1, 0)}, // WorkgroupVariableSize in nonsemantic_clspvreflection
    {0,IR(0, 0),IR(51277, 14),IR(1, 0)}, // DebugInfoNone in nonsemantic_shader_debuginfo_100
    {1,IR(296, 4),IR(51291, 21),IR(1, 0)}, // DebugCompilationUnit in nonsemantic_shader_debuginfo_100
    {2,IR(296, 4),IR(51364, 15),IR(1, 0)}, // DebugTypeBasic in nonsemantic_shader_debuginfo_100
    {3,IR(33, 3),IR(51413, 17),IR(1, 0)}, // DebugTypePointer in nonsemantic_shader_debuginfo_100
    {4,IR(36, 2),IR(51468, 19),IR(1, 0)}, // DebugTypeQualifier in nonsemantic_shader_debuginfo_100
    {5,IR(168, 2),IR(51487, 15),IR(1, 0)}, // DebugTypeArray in nonsemantic_shader_debuginfo_100
    {6,IR(36, 2),IR(51502, 16),IR(1, 0)}, // DebugTypeVector in nonsemantic_shader_debuginfo_100
    {7,IR(528, 6),IR(51518, 13),IR(1, 0)}, // DebugTypedef in nonsemantic_shader_debuginfo_100
    {8,IR(375, 3),IR(51531, 18),IR(1, 0)}, // DebugTypeFunction in nonsemantic_shader_debuginfo_100
    {9,IR(924, 9),IR(51549, 14),IR(1, 0)}, // DebugTypeEnum in nonsemantic_shader_debuginfo_100
    {10,IR(933, 10),IR(51601, 19),IR(1, 0)}, // DebugTypeComposite in nonsemantic_shader_debuginfo_100
    {11,IR(943, 9),IR(51620, 16),IR(1, 0)}, // DebugTypeMember in nonsemantic_shader_debuginfo_100
    {12,IR(296, 4),IR(51636, 21),IR(1, 0)}, // DebugTypeInheritance in nonsemantic_shader_debuginfo_100
    {13,IR(36, 2),IR(51657, 21),IR(1, 0)}, // DebugTypePtrToMember in nonsemantic_shader_debuginfo_100
    {14,IR(168, 2),IR(51678, 18),IR(1, 0)}, // DebugTypeTemplate in nonsemantic_shader_debuginfo_100
    {15,IR(528, 6),IR(51696, 27),IR(1, 0)}, // DebugTypeTemplateParameter in nonsemantic_shader_debuginfo_100
    {16,IR(675, 5),IR(51723, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in nonsemantic_shader_debuginfo_100
    {17,IR(952, 5),IR(51758, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in nonsemantic_shader_debuginfo_100
    {18,IR(957, 10),IR(51789, 20),IR(1, 0)}, // DebugGlobalVariable in nonsemantic_shader_debuginfo_100
    {19,IR(471, 8),IR(51809, 25),IR(1, 0)}, // DebugFunctionDeclaration in nonsemantic_shader_debuginfo_100
    {20,IR(957, 10),IR(51834, 14),IR(1, 0)}, // DebugFunction in nonsemantic_shader_debuginfo_100
    {21,IR(593, 5),IR(51848, 18),IR(1, 0)}, // DebugLexicalBlock in nonsemantic_shader_debuginfo_100
    {22,IR(33, 3),IR(51866, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in nonsemantic_shader_debuginfo_100
    {23,IR(901, 2),IR(51897, 11),IR(1, 0)}, // DebugScope in nonsemantic_shader_debuginfo_100
    {24,IR(0, 0),IR(51908, 13),IR(1, 0)}, // DebugNoScope in nonsemantic_shader_debuginfo_100
    {25,IR(967, 3),IR(51921, 15),IR(1, 0)}, // DebugInlinedAt in nonsemantic_shader_debuginfo_100
    {26,IR(970, 8),IR(51978, 19),IR(1, 0)}, // DebugLocalVariable in nonsemantic_shader_debuginfo_100
    {27,IR(36, 2),IR(51997, 21),IR(1, 0)}, // DebugInlinedVariable in nonsemantic_shader_debuginfo_100
    {28,IR(978, 4),IR(52018, 13),IR(1, 0)}, // DebugDeclare in nonsemantic_shader_debuginfo_100
    {29,IR(978, 4),IR(52031, 11),IR(1, 0)}, // DebugValue in nonsemantic_shader_debuginfo_100
    {30,IR(168, 2),IR(52075, 15),IR(1, 0)}, // DebugOperation in nonsemantic_shader_debuginfo_100
    {31,IR(747, 1),IR(52090, 16),IR(1, 0)}, // DebugExpression in nonsemantic_shader_debuginfo_100
    {32,IR(580, 4),IR(52106, 14),IR(1, 0)}, // DebugMacroDef in nonsemantic_shader_debuginfo_100
    {33,IR(33, 3),IR(52120, 16),IR(1, 0)}, // DebugMacroUndef in nonsemantic_shader_debuginfo_100
    {34,IR(509, 7),IR(53875, 20),IR(1, 0)}, // DebugImportedEntity in nonsemantic_shader_debuginfo_100
    {35,IR(901, 2),IR(53895, 12),IR(1, 0)}, // DebugSource in nonsemantic_shader_debuginfo_100
    {101,IR(36, 2),IR(53907, 24),IR(1, 0)}, // DebugFunctionDefinition in nonsemantic_shader_debuginfo_100
    {102,IR(10, 1),IR(53931, 21),IR(1, 0)}, // DebugSourceContinued in nonsemantic_shader_debuginfo_100
    {103,IR(675, 5),IR(53952, 10),IR(1, 0)}, // DebugLine in nonsemantic_shader_debuginfo_100
    {104,IR(0, 0),IR(53962, 12),IR(1, 0)}, // DebugNoLine in nonsemantic_shader_debuginfo_100
    {105,IR(36, 2),IR(53974, 21),IR(1, 0)}, // DebugBuildIdentifier in nonsemantic_shader_debuginfo_100
    {106,IR(10, 1),IR(53995, 17),IR(1, 0)}, // DebugStoragePath in nonsemantic_shader_debuginfo_100
    {107,IR(296, 4),IR(54012, 16),IR(1, 0)}, // DebugEntryPoint in nonsemantic_shader_debuginfo_100
    {108,IR(33, 3),IR(54028, 16),IR(1, 0)}, // DebugTypeMatrix in nonsemantic_shader_debuginfo_100
    {1,IR(765, 9),IR(54044, 14),IR(1, 0)}, // Configuration in nonsemantic_vkspreflection
    {2,IR(10, 1),IR(54058, 13),IR(1, 0)}, // StartCounter in nonsemantic_vkspreflection
    {3,IR(10, 1),IR(54071, 12),IR(1, 0)}, // StopCounter in nonsemantic_vkspreflection
    {4,IR(296, 4),IR(54083, 14),IR(1, 0)}, // PushConstants in nonsemantic_vkspreflection
    {5,IR(33, 3),IR(54097, 23),IR(1, 0)}, // SpecializationMapEntry in nonsemantic_vkspreflection
    {6,IR(982, 15),IR(54120, 20),IR(1, 0)}, // DescriptorSetBuffer in nonsemantic_vkspreflection
    {7,IR(997, 33),IR(54140, 19),IR(1, 0)}, // DescriptorSetImage in nonsemantic_vkspreflection
    {8,IR(1030, 19),IR(54159, 21),IR(1, 0)}, // DescriptorSetSampler in nonsemantic_vkspreflection
    {0,IR(0, 0),IR(51277, 14),IR(1, 0)}, // DebugInfoNone in opencl_debuginfo_100
    {1,IR(1049, 4),IR(51291, 21),IR(1, 0)}, // DebugCompilationUnit in opencl_debuginfo_100
    {2,IR(1053, 3),IR(51364, 15),IR(1, 0)}, // DebugTypeBasic in opencl_debuginfo_100
    {3,IR(1056, 3),IR(51413, 17),IR(1, 0)}, // DebugTypePointer in opencl_debuginfo_100
    {4,IR(1059, 2),IR(51468, 19),IR(1, 0)}, // DebugTypeQualifier in opencl_debuginfo_100
    {5,IR(168, 2),IR(51487, 15),IR(1, 0)}, // DebugTypeArray in opencl_debuginfo_100
    {6,IR(261, 2),IR(51502, 16),IR(1, 0)}, // DebugTypeVector in opencl_debuginfo_100
    {7,IR(819, 6),IR(51518, 13),IR(1, 0)}, // DebugTypedef in opencl_debuginfo_100
    {8,IR(1061, 3),IR(51531, 18),IR(1, 0)}, // DebugTypeFunction in opencl_debuginfo_100
    {9,IR(1064, 9),IR(51549, 14),IR(1, 0)}, // DebugTypeEnum in opencl_debuginfo_100
    {10,IR(1073, 10),IR(51601, 19),IR(1, 0)}, // DebugTypeComposite in opencl_debuginfo_100
    {11,IR(1083, 10),IR(51620, 16),IR(1, 0)}, // DebugTypeMember in opencl_debuginfo_100
    {12,IR(1093, 5),IR(51636, 21),IR(1, 0)}, // DebugTypeInheritance in opencl_debuginfo_100
    {13,IR(36, 2),IR(51657, 21),IR(1, 0)}, // DebugTypePtrToMember in opencl_debuginfo_100
    {14,IR(168, 2),IR(51678, 18),IR(1, 0)}, // DebugTypeTemplate in opencl_debuginfo_100
    {15,IR(858, 6),IR(51696, 27),IR(1, 0)}, // DebugTypeTemplateParameter in opencl_debuginfo_100
    {16,IR(864, 5),IR(51723, 35),IR(1, 0)}, // DebugTypeTemplateTemplateParameter in opencl_debuginfo_100
    {17,IR(869, 5),IR(51758, 31),IR(1, 0)}, // DebugTypeTemplateParameterPack in opencl_debuginfo_100
    {18,IR(1083, 10),IR(51789, 20),IR(1, 0)}, // DebugGlobalVariable in opencl_debuginfo_100
    {19,IR(1098, 8),IR(51809, 25),IR(1, 0)}, // DebugFunctionDeclaration in opencl_debuginfo_100
    {20,IR(1106, 11),IR(51834, 14),IR(1, 0)}, // DebugFunction in opencl_debuginfo_100
    {21,IR(893, 5),IR(51848, 18),IR(1, 0)}, // DebugLexicalBlock in opencl_debuginfo_100
    {22,IR(898, 3),IR(51866, 31),IR(1, 0)}, // DebugLexicalBlockDiscriminator in opencl_debuginfo_100
    {23,IR(901, 2),IR(51897, 11),IR(1, 0)}, // DebugScope in opencl_debuginfo_100
    {24,IR(0, 0),IR(51908, 13),IR(1, 0)}, // DebugNoScope in opencl_debuginfo_100
    {25,IR(903, 3),IR(51921, 15),IR(1, 0)}, // DebugInlinedAt in opencl_debuginfo_100
    {26,IR(1117, 8),IR(51978, 19),IR(1, 0)}, // DebugLocalVariable in opencl_debuginfo_100
    {27,IR(36, 2),IR(51997, 21),IR(1, 0)}, // DebugInlinedVariable in opencl_debuginfo_100
    {28,IR(33, 3),IR(52018, 13),IR(1, 0)}, // DebugDeclare in opencl_debuginfo_100
    {29,IR(978, 4),IR(52031, 11),IR(1, 0)}, // DebugValue in opencl_debuginfo_100
    {30,IR(1125, 2),IR(52075, 15),IR(1, 0)}, // DebugOperation in opencl_debuginfo_100
    {31,IR(747, 1),IR(52090, 16),IR(1, 0)}, // DebugExpression in opencl_debuginfo_100
    {32,IR(915, 4),IR(52106, 14),IR(1, 0)}, // DebugMacroDef in opencl_debuginfo_100
    {33,IR(898, 3),IR(52120, 16),IR(1, 0)}, // DebugMacroUndef in opencl_debuginfo_100
    {34,IR(1127, 7),IR(53875, 20),IR(1, 0)}, // DebugImportedEntity in opencl_debuginfo_100
    {35,IR(901, 2),IR(53895, 12),IR(1, 0)}, // DebugSource in opencl_debuginfo_100
    {36,IR(1134, 8),IR(54480, 17),IR(1, 0)}, // DebugModuleINTEL in opencl_debuginfo_100
    {0,IR(10, 1),IR(54497, 5),IR(1, 0)}, // acos in opencl_std_100
    {1,IR(10, 1),IR(54502, 6),IR(1, 0)}, // acosh in opencl_std_100
    {2,IR(10, 1),IR(54508, 7),IR(1, 0)}, // acospi in opencl_std_100
    {3,IR(10, 1),IR(54515, 5),IR(1, 0)}, // asin in opencl_std_100
    {4,IR(10, 1),IR(54520, 6),IR(1, 0)}, // asinh in opencl_std_100
    {5,IR(10, 1),IR(54526, 7),IR(1, 0)}, // asinpi in opencl_std_100
    {6,IR(10, 1),IR(54533, 5),IR(1, 0)}, // atan in opencl_std_100
    {7,IR(36, 2),IR(54538, 6),IR(1, 0)}, // atan2 in opencl_std_100
    {8,IR(10, 1),IR(54544, 6),IR(1, 0)}, // atanh in opencl_std_100
    {9,IR(10, 1),IR(54550, 7),IR(1, 0)}, // atanpi in opencl_std_100
    {10,IR(36, 2),IR(54557, 8),IR(1, 0)}, // atan2pi in opencl_std_100
    {11,IR(10, 1),IR(54565, 5),IR(1, 0)}, // cbrt in opencl_std_100
    {12,IR(10, 1),IR(54570, 5),IR(1, 0)}, // ceil in opencl_std_100
    {13,IR(36, 2),IR(54575, 9),IR(1, 0)}, // copysign in opencl_std_100
    {14,IR(10, 1),IR(54584, 4),IR(1, 0)}, // cos in opencl_std_100
    {15,IR(10, 1),IR(54588, 5),IR(1, 0)}, // cosh in opencl_std_100
    {16,IR(10, 1),IR(54593, 6),IR(1, 0)}, // cospi in opencl_std_100
    {17,IR(10, 1),IR(54599, 5),IR(1, 0)}, // erfc in opencl_std_100
    {18,IR(10, 1),IR(54604, 4),IR(1, 0)}, // erf in opencl_std_100
    {19,IR(10, 1),IR(54608, 4),IR(1, 0)}, // exp in opencl_std_100
    {20,IR(10, 1),IR(54612, 5),IR(1, 0)}, // exp2 in opencl_std_100
    {21,IR(10, 1),IR(54617, 6),IR(1, 0)}, // exp10 in opencl_std_100
    {22,IR(10, 1),IR(54623, 6),IR(1, 0)}, // expm1 in opencl_std_100
    {23,IR(10, 1),IR(54629, 5),IR(1, 0)}, // fabs in opencl_std_100
    {24,IR(36, 2),IR(54634, 5),IR(1, 0)}, // fdim in opencl_std_100
    {25,IR(10, 1),IR(54639, 6),IR(1, 0)}, // floor in opencl_std_100
    {26,IR(33, 3),IR(54645, 4),IR(1, 0)}, // fma in opencl_std_100
    {27,IR(36, 2),IR(54649, 5),IR(1, 0)}, // fmax in opencl_std_100
    {28,IR(36, 2),IR(54654, 5),IR(1, 0)}, // fmin in opencl_std_100
    {29,IR(36, 2),IR(54659, 5),IR(1, 0)}, // fmod in opencl_std_100
    {30,IR(36, 2),IR(54664, 6),IR(1, 0)}, // fract in opencl_std_100
    {31,IR(36, 2),IR(54670, 6),IR(1, 0)}, // frexp in opencl_std_100
    {32,IR(36, 2),IR(54676, 6),IR(1, 0)}, // hypot in opencl_std_100
    {33,IR(10, 1),IR(54682, 6),IR(1, 0)}, // ilogb in opencl_std_100
    {34,IR(36, 2),IR(54688, 6),IR(1, 0)}, // ldexp in opencl_std_100
    {35,IR(10, 1),IR(54694, 7),IR(1, 0)}, // lgamma in opencl_std_100
    {36,IR(36, 2),IR(54701, 9),IR(1, 0)}, // lgamma_r in opencl_std_100
    {37,IR(10, 1),IR(54710, 4),IR(1, 0)}, // log in opencl_std_100
    {38,IR(10, 1),IR(54714, 5),IR(1, 0)}, // log2 in opencl_std_100
    {39,IR(10, 1),IR(54719, 6),IR(1, 0)}, // log10 in opencl_std_100
    {40,IR(10, 1),IR(54725, 6),IR(1, 0)}, // log1p in opencl_std_100
    {41,IR(10, 1),IR(54731, 5),IR(1, 0)}, // logb in opencl_std_100
    {42,IR(33, 3),IR(54736, 4),IR(1, 0)}, // mad in opencl_std_100
    {43,IR(36, 2),IR(54740, 7),IR(1, 0)}, // maxmag in opencl_std_100
    {44,IR(36, 2),IR(54747, 7),IR(1, 0)}, // minmag in opencl_std_100
    {45,IR(36, 2),IR(54754, 5),IR(1, 0)}, // modf in opencl_std_100
    {46,IR(10, 1),IR(54759, 4),IR(1, 0)}, // nan in opencl_std_100
    {47,IR(36, 2),IR(54763, 10),IR(1, 0)}, // nextafter in opencl_std_100
    {48,IR(36, 2),IR(54773, 4),IR(1, 0)}, // pow in opencl_std_100
    {49,IR(36, 2),IR(54777, 5),IR(1, 0)}, // pown in opencl_std_100
    {50,IR(36, 2),IR(54782, 5),IR(1, 0)}, // powr in opencl_std_100
    {51,IR(36, 2),IR(54787, 10),IR(1, 0)}, // remainder in opencl_std_100
    {52,IR(33, 3),IR(54797, 7),IR(1, 0)}, // remquo in opencl_std_100
    {53,IR(10, 1),IR(54804, 5),IR(1, 0)}, // rint in opencl_std_100
    {54,IR(36, 2),IR(54809, 6),IR(1, 0)}, // rootn in opencl_std_100
    {55,IR(10, 1),IR(54815, 6),IR(1, 0)}, // round in opencl_std_100
    {56,IR(10, 1),IR(54821, 6),IR(1, 0)}, // rsqrt in opencl_std_100
    {57,IR(10, 1),IR(54827, 4),IR(1, 0)}, // sin in opencl_std_100
    {58,IR(36, 2),IR(54831, 7),IR(1, 0)}, // sincos in opencl_std_100
    {59,IR(10, 1),IR(54838, 5),IR(1, 0)}, // sinh in opencl_std_100
    {60,IR(10, 1),IR(54843, 6),IR(1, 0)}, // sinpi in opencl_std_100
    {61,IR(10, 1),IR(54849, 5),IR(1, 0)}, // sqrt in opencl_std_100
    {62,IR(10, 1),IR(54854, 4),IR(1, 0)}, // tan in opencl_std_100
    {63,IR(10, 1),IR(54858, 5),IR(1, 0)}, // tanh in opencl_std_100
    {64,IR(10, 1),IR(54863, 6),IR(1, 0)}, // tanpi in opencl_std_100
    {65,IR(10, 1),IR(54869, 7),IR(1, 0)}, // tgamma in opencl_std_100
    {66,IR(10, 1),IR(54876, 6),IR(1, 0)}, // trunc in opencl_std_100
    {67,IR(10, 1),IR(54882, 9),IR(1, 0)}, // half_cos in opencl_std_100
    {68,IR(36, 2),IR(54891, 12),IR(1, 0)}, // half_divide in opencl_std_100
    {69,IR(10, 1),IR(54903, 9),IR(1, 0)}, // half_exp in opencl_std_100
    {70,IR(10, 1),IR(54912, 10),IR(1, 0)}, // half_exp2 in opencl_std_100
    {71,IR(10, 1),IR(54922, 11),IR(1, 0)}, // half_exp10 in opencl_std_100
    {72,IR(10, 1),IR(54933, 9),IR(1, 0)}, // half_log in opencl_std_100
    {73,IR(10, 1),IR(54942, 10),IR(1, 0)}, // half_log2 in opencl_std_100
    {74,IR(10, 1),IR(54952, 11),IR(1, 0)}, // half_log10 in opencl_std_100
    {75,IR(36, 2),IR(54963, 10),IR(1, 0)}, // half_powr in opencl_std_100
    {76,IR(10, 1),IR(54973, 11),IR(1, 0)}, // half_recip in opencl_std_100
    {77,IR(10, 1),IR(54984, 11),IR(1, 0)}, // half_rsqrt in opencl_std_100
    {78,IR(10, 1),IR(54995, 9),IR(1, 0)}, // half_sin in opencl_std_100
    {79,IR(10, 1),IR(55004, 10),IR(1, 0)}, // half_sqrt in opencl_std_100
    {80,IR(10, 1),IR(55014, 9),IR(1, 0)}, // half_tan in opencl_std_100
    {81,IR(10, 1),IR(55023, 11),IR(1, 0)}, // native_cos in opencl_std_100
    {82,IR(36, 2),IR(55034, 14),IR(1, 0)}, // native_divide in opencl_std_100
    {83,IR(10, 1),IR(55048, 11),IR(1, 0)}, // native_exp in opencl_std_100
    {84,IR(10, 1),IR(55059, 12),IR(1, 0)}, // native_exp2 in opencl_std_100
    {85,IR(10, 1),IR(55071, 13),IR(1, 0)}, // native_exp10 in opencl_std_100
    {86,IR(10, 1),IR(55084, 11),IR(1, 0)}, // native_log in opencl_std_100
    {87,IR(10, 1),IR(55095, 12),IR(1, 0)}, // native_log2 in opencl_std_100
    {88,IR(10, 1),IR(55107, 13),IR(1, 0)}, // native_log10 in opencl_std_100
    {89,IR(36, 2),IR(55120, 12),IR(1, 0)}, // native_powr in opencl_std_100
    {90,IR(10, 1),IR(55132, 13),IR(1, 0)}, // native_recip in opencl_std_100
    {91,IR(10, 1),IR(55145, 13),IR(1, 0)}, // native_rsqrt in opencl_std_100
    {92,IR(10, 1),IR(55158, 11),IR(1, 0)}, // native_sin in opencl_std_100
    {93,IR(10, 1),IR(55169, 12),IR(1, 0)}, // native_sqrt in opencl_std_100
    {94,IR(10, 1),IR(55181, 11),IR(1, 0)}, // native_tan in opencl_std_100
    {95,IR(33, 3),IR(55192, 7),IR(1, 0)}, // fclamp in opencl_std_100
    {96,IR(10, 1),IR(55199, 8),IR(1, 0)}, // degrees in opencl_std_100
    {97,IR(36, 2),IR(55207, 12),IR(1, 0)}, // fmax_common in opencl_std_100
    {98,IR(36, 2),IR(55219, 12),IR(1, 0)}, // fmin_common in opencl_std_100
    {99,IR(33, 3),IR(55231, 4),IR(1, 0)}, // mix in opencl_std_100
    {100,IR(10, 1),IR(55235, 8),IR(1, 0)}, // radians in opencl_std_100
    {101,IR(36, 2),IR(55243, 5),IR(1, 0)}, // step in opencl_std_100
    {102,IR(33, 3),IR(55248, 11),IR(1, 0)}, // smoothstep in opencl_std_100
    {103,IR(10, 1),IR(55259, 5),IR(1, 0)}, // sign in opencl_std_100
    {104,IR(36, 2),IR(55264, 6),IR(1, 0)}, // cross in opencl_std_100
    {105,IR(36, 2),IR(55270, 9),IR(1, 0)}, // distance in opencl_std_100
    {106,IR(10, 1),IR(55279, 7),IR(1, 0)}, // length in opencl_std_100
    {107,IR(10, 1),IR(55286, 10),IR(1, 0)}, // normalize in opencl_std_100
    {108,IR(36, 2),IR(55296, 14),IR(1, 0)}, // fast_distance in opencl_std_100
    {109,IR(10, 1),IR(55310, 12),IR(1, 0)}, // fast_length in opencl_std_100
    {110,IR(10, 1),IR(55322, 15),IR(1, 0)}, // fast_normalize in opencl_std_100
    {141,IR(10, 1),IR(55337, 6),IR(1, 0)}, // s_abs in opencl_std_100
    {142,IR(36, 2),IR(55343, 11),IR(1, 0)}, // s_abs_diff in opencl_std_100
    {143,IR(36, 2),IR(55354, 10),IR(1, 0)}, // s_add_sat in opencl_std_100
    {144,IR(36, 2),IR(55364, 10),IR(1, 0)}, // u_add_sat in opencl_std_100
    {145,IR(36, 2),IR(55374, 7),IR(1, 0)}, // s_hadd in opencl_std_100
    {146,IR(36, 2),IR(55381, 7),IR(1, 0)}, // u_hadd in opencl_std_100
    {147,IR(36, 2),IR(55388, 8),IR(1, 0)}, // s_rhadd in opencl_std_100
    {148,IR(36, 2),IR(55396, 8),IR(1, 0)}, // u_rhadd in opencl_std_100
    {149,IR(33, 3),IR(55404, 8),IR(1, 0)}, // s_clamp in opencl_std_100
    {150,IR(33, 3),IR(55412, 8),IR(1, 0)}, // u_clamp in opencl_std_100
    {151,IR(10, 1),IR(55420, 4),IR(1, 0)}, // clz in opencl_std_100
    {152,IR(10, 1),IR(55424, 4),IR(1, 0)}, // ctz in opencl_std_100
    {153,IR(33, 3),IR(55428, 9),IR(1, 0)}, // s_mad_hi in opencl_std_100
    {154,IR(33, 3),IR(55437, 10),IR(1, 0)}, // u_mad_sat in opencl_std_100
    {155,IR(33, 3),IR(55447, 10),IR(1, 0)}, // s_mad_sat in opencl_std_100
    {156,IR(36, 2),IR(55457, 6),IR(1, 0)}, // s_max in opencl_std_100
    {157,IR(36, 2),IR(55463, 6),IR(1, 0)}, // u_max in opencl_std_100
    {158,IR(36, 2),IR(55469, 6),IR(1, 0)}, // s_min in opencl_std_100
    {159,IR(36, 2),IR(55475, 6),IR(1, 0)}, // u_min in opencl_std_100
    {160,IR(36, 2),IR(55481, 9),IR(1, 0)}, // s_mul_hi in opencl_std_100
    {161,IR(36, 2),IR(55490, 7),IR(1, 0)}, // rotate in opencl_std_100
    {162,IR(36, 2),IR(55497, 10),IR(1, 0)}, // s_sub_sat in opencl_std_100
    {163,IR(36, 2),IR(55507, 10),IR(1, 0)}, // u_sub_sat in opencl_std_100
    {164,IR(36, 2),IR(55517, 11),IR(1, 0)}, // u_upsample in opencl_std_100
    {165,IR(36, 2),IR(55528, 11),IR(1, 0)}, // s_upsample in opencl_std_100
    {166,IR(10, 1),IR(55539, 9),IR(1, 0)}, // popcount in opencl_std_100
    {167,IR(33, 3),IR(55548, 8),IR(1, 0)}, // s_mad24 in opencl_std_100
    {168,IR(33, 3),IR(55556, 8),IR(1, 0)}, // u_mad24 in opencl_std_100
    {169,IR(36, 2),IR(55564, 8),IR(1, 0)}, // s_mul24 in opencl_std_100
    {170,IR(36, 2),IR(55572, 8),IR(1, 0)}, // u_mul24 in opencl_std_100
    {171,IR(1142, 3),IR(55580, 7),IR(1, 0)}, // vloadn in opencl_std_100
    {172,IR(33, 3),IR(55587, 8),IR(1, 0)}, // vstoren in opencl_std_100
    {173,IR(36, 2),IR(55595, 11),IR(1, 0)}, // vload_half in opencl_std_100
    {174,IR(1142, 3),IR(55606, 12),IR(1, 0)}, // vload_halfn in opencl_std_100
    {175,IR(33, 3),IR(55618, 12),IR(1, 0)}, // vstore_half in opencl_std_100
    {176,IR(1145, 4),IR(55630, 14),IR(1, 0)}, // vstore_half_r in opencl_std_100
    {177,IR(33, 3),IR(55644, 13),IR(1, 0)}, // vstore_halfn in opencl_std_100
    {178,IR(1145, 4),IR(55657, 15),IR(1, 0)}, // vstore_halfn_r in opencl_std_100
    {179,IR(1142, 3),IR(55672, 13),IR(1, 0)}, // vloada_halfn in opencl_std_100
    {180,IR(33, 3),IR(55685, 14),IR(1, 0)}, // vstorea_halfn in opencl_std_100
    {181,IR(1145, 4),IR(55699, 16),IR(1, 0)}, // vstorea_halfn_r in opencl_std_100
    {182,IR(36, 2),IR(55715, 8),IR(1, 0)}, // shuffle in opencl_std_100
    {183,IR(33, 3),IR(55723, 9),IR(1, 0)}, // shuffle2 in opencl_std_100
    {184,IR(168, 2),IR(55732, 7),IR(1, 0)}, // printf in opencl_std_100
    {185,IR(36, 2),IR(55739, 9),IR(1, 0)}, // prefetch in opencl_std_100
    {186,IR(33, 3),IR(55748, 10),IR(1, 0)}, // bitselect in opencl_std_100
    {187,IR(33, 3),IR(55758, 7),IR(1, 0)}, // select in opencl_std_100
    {201,IR(10, 1),IR(55765, 6),IR(1, 0)}, // u_abs in opencl_std_100
    {202,IR(36, 2),IR(55771, 11),IR(1, 0)}, // u_abs_diff in opencl_std_100
    {203,IR(36, 2),IR(55782, 9),IR(1, 0)}, // u_mul_hi in opencl_std_100
    {204,IR(33, 3),IR(55791, 9),IR(1, 0)}, // u_mad_hi in opencl_std_100
    {1,IR(10, 1),IR(55800, 17),IR(1, 0)}, // CubeFaceIndexAMD in spv_amd_gcn_shader
    {2,IR(10, 1),IR(55817, 17),IR(1, 0)}, // CubeFaceCoordAMD in spv_amd_gcn_shader
    {3,IR(0, 0),IR(55834, 8),IR(1, 0)}, // TimeAMD in spv_amd_gcn_shader
    {1,IR(36, 2),IR(55842, 22),IR(1, 0)}, // SwizzleInvocationsAMD in spv_amd_shader_ballot
    {2,IR(36, 2),IR(55864, 28),IR(1, 0)}, // SwizzleInvocationsMaskedAMD in spv_amd_shader_ballot
    {3,IR(33, 3),IR(55892, 19),IR(1, 0)}, // WriteInvocationAMD in spv_amd_shader_ballot
    {4,IR(10, 1),IR(55911, 9),IR(1, 0)}, // MbcntAMD in spv_amd_shader_ballot
    {1,IR(36, 2),IR(55920, 23),IR(1, 0)}, // InterpolateAtVertexAMD in spv_amd_shader_explicit_vertex_parameter
    {1,IR(33, 3),IR(55943, 9),IR(1, 0)}, // FMin3AMD in spv_amd_shader_trinary_minmax
    {2,IR(33, 3),IR(55952, 9),IR(1, 0)}, // UMin3AMD in spv_amd_shader_trinary_minmax
    {3,IR(33, 3),IR(55961, 9),IR(1, 0)}, // SMin3AMD in spv_amd_shader_trinary_minmax
    {4,IR(33, 3),IR(55970, 9),IR(1, 0)}, // FMax3AMD in spv_amd_shader_trinary_minmax
    {5,IR(33, 3),IR(55979, 9),IR(1, 0)}, // UMax3AMD in spv_amd_shader_trinary_minmax
    {6,IR(33, 3),IR(55988, 9),IR(1, 0)}, // SMax3AMD in spv_amd_shader_trinary_minmax
    {7,IR(33, 3),IR(55997, 9),IR(1, 0)}, // FMid3AMD in spv_amd_shader_trinary_minmax
    {8,IR(33, 3),IR(56006, 9),IR(1, 0)}, // UMid3AMD in spv_amd_shader_trinary_minmax
    {9,IR(33, 3),IR(56015, 9),IR(1, 0)}, // SMid3AMD in spv_amd_shader_trinary_minmax
    {0,IR(33, 3),IR(56024, 7),IR(1, 0)}, // ARGMAX in tosa_001000_1
    {1,IR(509, 7),IR(56031, 11),IR(1, 0)}, // AVG_POOL2D in tosa_001000_1
    {2,IR(755, 10),IR(56042, 7),IR(1, 0)}, // CONV2D in tosa_001000_1
    {3,IR(755, 10),IR(56049, 7),IR(1, 0)}, // CONV3D in tosa_001000_1
    {4,IR(755, 10),IR(56056, 17),IR(1, 0)}, // DEPTHWISE_CONV2D in tosa_001000_1
    {5,IR(296, 4),IR(56073, 6),IR(1, 0)}, // FFT2D in tosa_001000_1
    {6,IR(296, 4),IR(56079, 7),IR(1, 0)}, // MATMUL in tosa_001000_1
    {7,IR(675, 5),IR(56086, 11),IR(1, 0)}, // MAX_POOL2D in tosa_001000_1
    {8,IR(36, 2),IR(56097, 7),IR(1, 0)}, // RFFT2D in tosa_001000_1
    {9,IR(765, 9),IR(56104, 17),IR(1, 0)}, // TRANSPOSE_CONV2D in tosa_001000_1
    {10,IR(296, 4),IR(56121, 6),IR(1, 0)}, // CLAMP in tosa_001000_1
    {11,IR(10, 1),IR(56127, 4),IR(1, 0)}, // ERF in tosa_001000_1
    {12,IR(10, 1),IR(56131, 8),IR(1, 0)}, // SIGMOID in tosa_001000_1
    {13,IR(10, 1),IR(56139, 5),IR(1, 0)}, // TANH in tosa_001000_1
    {14,IR(36, 2),IR(56144, 4),IR(1, 0)}, // ADD in tosa_001000_1
    {15,IR(33, 3),IR(56148, 23),IR(1, 0)}, // ARITHMETIC_RIGHT_SHIFT in tosa_001000_1
    {16,IR(36, 2),IR(56171, 12),IR(1, 0)}, // BITWISE_AND in tosa_001000_1
    {17,IR(36, 2),IR(56183, 11),IR(1, 0)}, // BITWISE_OR in tosa_001000_1
    {18,IR(36, 2),IR(56194, 12),IR(1, 0)}, // BITWISE_XOR in tosa_001000_1
    {19,IR(36, 2),IR(56206, 7),IR(1, 0)}, // INTDIV in tosa_001000_1
    {20,IR(36, 2),IR(56213, 12),IR(1, 0)}, // LOGICAL_AND in tosa_001000_1
    {21,IR(36, 2),IR(56225, 19),IR(1, 0)}, // LOGICAL_LEFT_SHIFT in tosa_001000_1
    {22,IR(36, 2),IR(56244, 20),IR(1, 0)}, // LOGICAL_RIGHT_SHIFT in tosa_001000_1
    {23,IR(36, 2),IR(56264, 11),IR(1, 0)}, // LOGICAL_OR in tosa_001000_1
    {24,IR(36, 2),IR(56275, 12),IR(1, 0)}, // LOGICAL_XOR in tosa_001000_1
    {25,IR(33, 3),IR(56287, 8),IR(1, 0)}, // MAXIMUM in tosa_001000_1
    {26,IR(33, 3),IR(56295, 8),IR(1, 0)}, // MINIMUM in tosa_001000_1
    {27,IR(33, 3),IR(56303, 4),IR(1, 0)}, // MUL in tosa_001000_1
    {28,IR(36, 2),IR(56307, 4),IR(1, 0)}, // POW in tosa_001000_1
    {29,IR(36, 2),IR(56311, 4),IR(1, 0)}, // SUB in tosa_001000_1
    {30,IR(36, 2),IR(56315, 6),IR(1, 0)}, // TABLE in tosa_001000_1
    {31,IR(10, 1),IR(56321, 4),IR(1, 0)}, // ABS in tosa_001000_1
    {32,IR(10, 1),IR(56325, 12),IR(1, 0)}, // BITWISE_NOT in tosa_001000_1
    {33,IR(10, 1),IR(56337, 5),IR(1, 0)}, // CEIL in tosa_001000_1
    {34,IR(10, 1),IR(56342, 4),IR(1, 0)}, // CLZ in tosa_001000_1
    {35,IR(10, 1),IR(56346, 4),IR(1, 0)}, // COS in tosa_001000_1
    {36,IR(10, 1),IR(56350, 4),IR(1, 0)}, // EXP in tosa_001000_1
    {37,IR(10, 1),IR(56354, 6),IR(1, 0)}, // FLOOR in tosa_001000_1
    {38,IR(10, 1),IR(56360, 4),IR(1, 0)}, // LOG in tosa_001000_1
    {39,IR(10, 1),IR(56364, 12),IR(1, 0)}, // LOGICAL_NOT in tosa_001000_1
    {40,IR(33, 3),IR(56376, 7),IR(1, 0)}, // NEGATE in tosa_001000_1
    {41,IR(10, 1),IR(56383, 11),IR(1, 0)}, // RECIPROCAL in tosa_001000_1
    {42,IR(10, 1),IR(56394, 6),IR(1, 0)}, // RSQRT in tosa_001000_1
    {43,IR(10, 1),IR(56400, 4),IR(1, 0)}, // SIN in tosa_001000_1
    {44,IR(33, 3),IR(56404, 7),IR(1, 0)}, // SELECT in tosa_001000_1
    {45,IR(36, 2),IR(56411, 6),IR(1, 0)}, // EQUAL in tosa_001000_1
    {46,IR(36, 2),IR(56417, 8),IR(1, 0)}, // GREATER in tosa_001000_1
    {47,IR(36, 2),IR(56425, 14),IR(1, 0)}, // GREATER_EQUAL in tosa_001000_1
    {48,IR(36, 2),IR(56439, 11),IR(1, 0)}, // REDUCE_ALL in tosa_001000_1
    {49,IR(36, 2),IR(56450, 11),IR(1, 0)}, // REDUCE_ANY in tosa_001000_1
    {50,IR(33, 3),IR(56461, 11),IR(1, 0)}, // REDUCE_MAX in tosa_001000_1
    {51,IR(33, 3),IR(56472, 11),IR(1, 0)}, // REDUCE_MIN in tosa_001000_1
    {52,IR(36, 2),IR(56483, 15),IR(1, 0)}, // REDUCE_PRODUCT in tosa_001000_1
    {53,IR(36, 2),IR(56498, 11),IR(1, 0)}, // REDUCE_SUM in tosa_001000_1
    {54,IR(168, 2),IR(56509, 7),IR(1, 0)}, // CONCAT in tosa_001000_1
    {55,IR(33, 3),IR(56516, 4),IR(1, 0)}, // PAD in tosa_001000_1
    {56,IR(36, 2),IR(56520, 8),IR(1, 0)}, // RESHAPE in tosa_001000_1
    {57,IR(36, 2),IR(56528, 8),IR(1, 0)}, // REVERSE in tosa_001000_1
    {58,IR(33, 3),IR(56536, 6),IR(1, 0)}, // SLICE in tosa_001000_1
    {59,IR(36, 2),IR(56542, 5),IR(1, 0)}, // TILE in tosa_001000_1
    {60,IR(36, 2),IR(56547, 10),IR(1, 0)}, // TRANSPOSE in tosa_001000_1
    {61,IR(36, 2),IR(56557, 7),IR(1, 0)}, // GATHER in tosa_001000_1
    {62,IR(33, 3),IR(56564, 8),IR(1, 0)}, // SCATTER in tosa_001000_1
    {63,IR(675, 5),IR(56572, 7),IR(1, 0)}, // RESIZE in tosa_001000_1
    {64,IR(10, 1),IR(56579, 5),IR(1, 0)}, // CAST in tosa_001000_1
    {65,IR(755, 10),IR(56584, 8),IR(1, 0)}, // RESCALE in tosa_001000_1
}};

IndexRange ExtInstByValueRangeForKind(spv_ext_inst_type_t type) {
  switch(type) {
    case SPV_EXT_INST_TYPE_ARM_MOTION_ENGINE_100: return IR(0, 3);
    case SPV_EXT_INST_TYPE_DEBUGINFO: return IR(3, 34);
    case SPV_EXT_INST_TYPE_GLSL_STD_450: return IR(37, 81);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_CLSPVREFLECTION: return IR(118, 42);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_SHADER_DEBUGINFO_100: return IR(160, 44);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_VKSPREFLECTION: return IR(204, 8);
    case SPV_EXT_INST_TYPE_OPENCL_DEBUGINFO_100: return IR(212, 37);
    case SPV_EXT_INST_TYPE_OPENCL_STD: return IR(249, 162);
    case SPV_EXT_INST_TYPE_SPV_AMD_GCN_SHADER: return IR(411, 3);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_BALLOT: return IR(414, 4);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER: return IR(418, 1);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_TRINARY_MINMAX: return IR(419, 9);
    case SPV_EXT_INST_TYPE_TOSA_001000_1: return IR(428, 66);
    default: break;
  }
  return IR(0,0);
}

// Extended instruction opcode names sorted by extended instruction kind, then opcode name.
// The fields in order are:
//   name
//   index into kExtInstByValue
static const std::array<NameIndex, 494> kExtInstNames{{
    {IR(51248, 8), 0}, // MIN_SAD in arm_motion_engine_100
    {IR(51256, 13), 1}, // MIN_SAD_COST in arm_motion_engine_100
    {IR(51269, 8), 2}, // RAW_SAD in arm_motion_engine_100
    {IR(51291, 21), 4}, // DebugCompilationUnit in debuginfo
    {IR(52018, 13), 31}, // DebugDeclare in debuginfo
    {IR(52090, 16), 34}, // DebugExpression in debuginfo
    {IR(51834, 14), 23}, // DebugFunction in debuginfo
    {IR(51809, 25), 22}, // DebugFunctionDeclaration in debuginfo
    {IR(51789, 20), 21}, // DebugGlobalVariable in debuginfo
    {IR(51277, 14), 3}, // DebugInfoNone in debuginfo
    {IR(51921, 15), 28}, // DebugInlinedAt in debuginfo
    {IR(51997, 21), 30}, // DebugInlinedVariable in debuginfo
    {IR(51848, 18), 24}, // DebugLexicalBlock in debuginfo
    {IR(51866, 31), 25}, // DebugLexicalBlockDiscriminator in debuginfo
    {IR(51978, 19), 29}, // DebugLocalVariable in debuginfo
    {IR(52106, 14), 35}, // DebugMacroDef in debuginfo
    {IR(52120, 16), 36}, // DebugMacroUndef in debuginfo
    {IR(51908, 13), 27}, // DebugNoScope in debuginfo
    {IR(52075, 15), 33}, // DebugOperation in debuginfo
    {IR(51897, 11), 26}, // DebugScope in debuginfo
    {IR(51487, 15), 8}, // DebugTypeArray in debuginfo
    {IR(51364, 15), 5}, // DebugTypeBasic in debuginfo
    {IR(51601, 19), 13}, // DebugTypeComposite in debuginfo
    {IR(51549, 14), 12}, // DebugTypeEnum in debuginfo
    {IR(51531, 18), 11}, // DebugTypeFunction in debuginfo
    {IR(51636, 21), 15}, // DebugTypeInheritance in debuginfo
    {IR(51620, 16), 14}, // DebugTypeMember in debuginfo
    {IR(51413, 17), 6}, // DebugTypePointer in debuginfo
    {IR(51657, 21), 16}, // DebugTypePtrToMember in debuginfo
    {IR(51468, 19), 7}, // DebugTypeQualifier in debuginfo
    {IR(51678, 18), 17}, // DebugTypeTemplate in debuginfo
    {IR(51696, 27), 18}, // DebugTypeTemplateParameter in debuginfo
    {IR(51758, 31), 20}, // DebugTypeTemplateParameterPack in debuginfo
    {IR(51723, 35), 19}, // DebugTypeTemplateTemplateParameter in debuginfo
    {IR(51502, 16), 9}, // DebugTypeVector in debuginfo
    {IR(51518, 13), 10}, // DebugTypedef in debuginfo
    {IR(52031, 11), 32}, // DebugValue in debuginfo
    {IR(52230, 5), 53}, // Acos in glsl_std_450
    {IR(52261, 6), 59}, // Acosh in glsl_std_450
    {IR(52225, 5), 52}, // Asin in glsl_std_450
    {IR(52255, 6), 58}, // Asinh in glsl_std_450
    {IR(52235, 5), 54}, // Atan in glsl_std_450
    {IR(52273, 6), 61}, // Atan2 in glsl_std_450
    {IR(52267, 6), 60}, // Atanh in glsl_std_450
    {IR(52186, 5), 45}, // Ceil in glsl_std_450
    {IR(52217, 4), 50}, // Cos in glsl_std_450
    {IR(52245, 5), 56}, // Cosh in glsl_std_450
    {IR(52657, 6), 104}, // Cross in glsl_std_450
    {IR(52205, 8), 48}, // Degrees in glsl_std_450
    {IR(52318, 12), 69}, // Determinant in glsl_std_450
    {IR(52648, 9), 103}, // Distance in glsl_std_450
    {IR(52283, 4), 63}, // Exp in glsl_std_450
    {IR(52291, 5), 65}, // Exp2 in glsl_std_450
    {IR(52158, 5), 40}, // FAbs in glsl_std_450
    {IR(52390, 7), 79}, // FClamp in glsl_std_450
    {IR(52375, 5), 76}, // FMax in glsl_std_450
    {IR(52360, 5), 73}, // FMin in glsl_std_450
    {IR(52411, 5), 82}, // FMix in glsl_std_450
    {IR(52168, 6), 42}, // FSign in glsl_std_450
    {IR(52673, 12), 106}, // FaceForward in glsl_std_450
    {IR(52701, 9), 109}, // FindILsb in glsl_std_450
    {IR(52710, 9), 110}, // FindSMsb in glsl_std_450
    {IR(52719, 9), 111}, // FindUMsb in glsl_std_450
    {IR(52180, 6), 44}, // Floor in glsl_std_450
    {IR(52437, 4), 86}, // Fma in glsl_std_450
    {IR(52191, 6), 46}, // Fract in glsl_std_450
    {IR(52441, 6), 87}, // Frexp in glsl_std_450
    {IR(52447, 12), 88}, // FrexpStruct in glsl_std_450
    {IR(52416, 5), 83}, // IMix in glsl_std_450
    {IR(52728, 22), 112}, // InterpolateAtCentroid in glsl_std_450
    {IR(52770, 20), 114}, // InterpolateAtOffset in glsl_std_450
    {IR(52750, 20), 113}, // InterpolateAtSample in glsl_std_450
    {IR(52306, 12), 68}, // InverseSqrt in glsl_std_450
    {IR(52459, 6), 89}, // Ldexp in glsl_std_450
    {IR(52641, 7), 102}, // Length in glsl_std_450
    {IR(52287, 4), 64}, // Log in glsl_std_450
    {IR(52296, 5), 66}, // Log2 in glsl_std_450
    {IR(52330, 14), 70}, // MatrixInverse in glsl_std_450
    {IR(52344, 5), 71}, // Modf in glsl_std_450
    {IR(52349, 11), 72}, // ModfStruct in glsl_std_450
    {IR(52800, 7), 117}, // NClamp in glsl_std_450
    {IR(52795, 5), 116}, // NMax in glsl_std_450
    {IR(52790, 5), 115}, // NMin in glsl_std_450
    {IR(52663, 10), 105}, // Normalize in glsl_std_450
    {IR(52532, 15), 95}, // PackDouble2x32 in glsl_std_450
    {IR(52519, 13), 94}, // PackHalf2x16 in glsl_std_450
    {IR(52491, 14), 92}, // PackSnorm2x16 in glsl_std_450
    {IR(52465, 13), 90}, // PackSnorm4x8 in glsl_std_450
    {IR(52505, 14), 93}, // PackUnorm2x16 in glsl_std_450
    {IR(52478, 13), 91}, // PackUnorm4x8 in glsl_std_450
    {IR(52279, 4), 62}, // Pow in glsl_std_450
    {IR(52197, 8), 47}, // Radians in glsl_std_450
    {IR(52685, 8), 107}, // Reflect in glsl_std_450
    {IR(52693, 8), 108}, // Refract in glsl_std_450
    {IR(52136, 6), 37}, // Round in glsl_std_450
    {IR(52142, 10), 38}, // RoundEven in glsl_std_450
    {IR(52163, 5), 41}, // SAbs in glsl_std_450
    {IR(52404, 7), 81}, // SClamp in glsl_std_450
    {IR(52385, 5), 78}, // SMax in glsl_std_450
    {IR(52370, 5), 75}, // SMin in glsl_std_450
    {IR(52174, 6), 43}, // SSign in glsl_std_450
    {IR(52213, 4), 49}, // Sin in glsl_std_450
    {IR(52240, 5), 55}, // Sinh in glsl_std_450
    {IR(52426, 11), 85}, // SmoothStep in glsl_std_450
    {IR(52301, 5), 67}, // Sqrt in glsl_std_450
    {IR(52421, 5), 84}, // Step in glsl_std_450
    {IR(52221, 4), 51}, // Tan in glsl_std_450
    {IR(52250, 5), 57}, // Tanh in glsl_std_450
    {IR(52152, 6), 39}, // Trunc in glsl_std_450
    {IR(52397, 7), 80}, // UClamp in glsl_std_450
    {IR(52380, 5), 77}, // UMax in glsl_std_450
    {IR(52365, 5), 74}, // UMin in glsl_std_450
    {IR(52624, 17), 101}, // UnpackDouble2x32 in glsl_std_450
    {IR(52579, 15), 98}, // UnpackHalf2x16 in glsl_std_450
    {IR(52547, 16), 96}, // UnpackSnorm2x16 in glsl_std_450
    {IR(52594, 15), 99}, // UnpackSnorm4x8 in glsl_std_450
    {IR(52563, 16), 97}, // UnpackUnorm2x16 in glsl_std_450
    {IR(52609, 15), 100}, // UnpackUnorm4x8 in glsl_std_450
    {IR(52807, 13), 119}, // ArgumentInfo in nonsemantic_clspvreflection
    {IR(52902, 24), 124}, // ArgumentPodPushConstant in nonsemantic_clspvreflection
    {IR(52858, 25), 122}, // ArgumentPodStorageBuffer in nonsemantic_clspvreflection
    {IR(52883, 19), 123}, // ArgumentPodUniform in nonsemantic_clspvreflection
    {IR(53336, 28), 143}, // ArgumentPointerPushConstant in nonsemantic_clspvreflection
    {IR(53364, 23), 144}, // ArgumentPointerUniform in nonsemantic_clspvreflection
    {IR(52926, 21), 125}, // ArgumentSampledImage in nonsemantic_clspvreflection
    {IR(52968, 16), 127}, // ArgumentSampler in nonsemantic_clspvreflection
    {IR(52820, 22), 120}, // ArgumentStorageBuffer in nonsemantic_clspvreflection
    {IR(52947, 21), 126}, // ArgumentStorageImage in nonsemantic_clspvreflection
    {IR(53624, 27), 151}, // ArgumentStorageTexelBuffer in nonsemantic_clspvreflection
    {IR(52842, 16), 121}, // ArgumentUniform in nonsemantic_clspvreflection
    {IR(53651, 27), 152}, // ArgumentUniformTexelBuffer in nonsemantic_clspvreflection
    {IR(52984, 18), 128}, // ArgumentWorkgroup in nonsemantic_clspvreflection
    {IR(53678, 32), 153}, // ConstantDataPointerPushConstant in nonsemantic_clspvreflection
    {IR(53232, 26), 138}, // ConstantDataStorageBuffer in nonsemantic_clspvreflection
    {IR(53258, 20), 139}, // ConstantDataUniform in nonsemantic_clspvreflection
    {IR(53502, 45), 148}, // ImageArgumentInfoChannelDataTypePushConstant in nonsemantic_clspvreflection
    {IR(53584, 40), 150}, // ImageArgumentInfoChannelDataTypeUniform in nonsemantic_clspvreflection
    {IR(53460, 42), 147}, // ImageArgumentInfoChannelOrderPushConstant in nonsemantic_clspvreflection
    {IR(53547, 37), 149}, // ImageArgumentInfoChannelOrderUniform in nonsemantic_clspvreflection
    {IR(5655, 7), 118}, // Kernel in nonsemantic_clspvreflection
    {IR(9129, 15), 140}, // LiteralSampler in nonsemantic_clspvreflection
    {IR(53819, 34), 158}, // NormalizedSamplerMaskPushConstant in nonsemantic_clspvreflection
    {IR(53787, 32), 157}, // PrintfBufferPointerPushConstant in nonsemantic_clspvreflection
    {IR(53761, 26), 156}, // PrintfBufferStorageBuffer in nonsemantic_clspvreflection
    {IR(53750, 11), 155}, // PrintfInfo in nonsemantic_clspvreflection
    {IR(53710, 40), 154}, // ProgramScopeVariablePointerPushConstant in nonsemantic_clspvreflection
    {IR(53422, 38), 146}, // ProgramScopeVariablePointerRelocation in nonsemantic_clspvreflection
    {IR(53387, 35), 145}, // ProgramScopeVariablesStorageBuffer in nonsemantic_clspvreflection
    {IR(53278, 30), 141}, // PropertyRequiredWorkgroupSize in nonsemantic_clspvreflection
    {IR(53098, 30), 133}, // PushConstantEnqueuedLocalSize in nonsemantic_clspvreflection
    {IR(53073, 25), 132}, // PushConstantGlobalOffset in nonsemantic_clspvreflection
    {IR(53128, 23), 134}, // PushConstantGlobalSize in nonsemantic_clspvreflection
    {IR(53176, 26), 136}, // PushConstantNumWorkgroups in nonsemantic_clspvreflection
    {IR(53202, 30), 137}, // PushConstantRegionGroupOffset in nonsemantic_clspvreflection
    {IR(53151, 25), 135}, // PushConstantRegionOffset in nonsemantic_clspvreflection
    {IR(53028, 25), 130}, // SpecConstantGlobalOffset in nonsemantic_clspvreflection
    {IR(53308, 28), 142}, // SpecConstantSubgroupMaxSize in nonsemantic_clspvreflection
    {IR(53053, 20), 131}, // SpecConstantWorkDim in nonsemantic_clspvreflection
    {IR(53002, 26), 129}, // SpecConstantWorkgroupSize in nonsemantic_clspvreflection
    {IR(53853, 22), 159}, // WorkgroupVariableSize in nonsemantic_clspvreflection
    {IR(53974, 21), 200}, // DebugBuildIdentifier in nonsemantic_shader_debuginfo_100
    {IR(51291, 21), 161}, // DebugCompilationUnit in nonsemantic_shader_debuginfo_100
    {IR(52018, 13), 188}, // DebugDeclare in nonsemantic_shader_debuginfo_100
    {IR(54012, 16), 202}, // DebugEntryPoint in nonsemantic_shader_debuginfo_100
    {IR(52090, 16), 191}, // DebugExpression in nonsemantic_shader_debuginfo_100
    {IR(51834, 14), 180}, // DebugFunction in nonsemantic_shader_debuginfo_100
    {IR(51809, 25), 179}, // DebugFunctionDeclaration in nonsemantic_shader_debuginfo_100
    {IR(53907, 24), 196}, // DebugFunctionDefinition in nonsemantic_shader_debuginfo_100
    {IR(51789, 20), 178}, // DebugGlobalVariable in nonsemantic_shader_debuginfo_100
    {IR(53875, 20), 194}, // DebugImportedEntity in nonsemantic_shader_debuginfo_100
    {IR(51277, 14), 160}, // DebugInfoNone in nonsemantic_shader_debuginfo_100
    {IR(51921, 15), 185}, // DebugInlinedAt in nonsemantic_shader_debuginfo_100
    {IR(51997, 21), 187}, // DebugInlinedVariable in nonsemantic_shader_debuginfo_100
    {IR(51848, 18), 181}, // DebugLexicalBlock in nonsemantic_shader_debuginfo_100
    {IR(51866, 31), 182}, // DebugLexicalBlockDiscriminator in nonsemantic_shader_debuginfo_100
    {IR(53952, 10), 198}, // DebugLine in nonsemantic_shader_debuginfo_100
    {IR(51978, 19), 186}, // DebugLocalVariable in nonsemantic_shader_debuginfo_100
    {IR(52106, 14), 192}, // DebugMacroDef in nonsemantic_shader_debuginfo_100
    {IR(52120, 16), 193}, // DebugMacroUndef in nonsemantic_shader_debuginfo_100
    {IR(53962, 12), 199}, // DebugNoLine in nonsemantic_shader_debuginfo_100
    {IR(51908, 13), 184}, // DebugNoScope in nonsemantic_shader_debuginfo_100
    {IR(52075, 15), 190}, // DebugOperation in nonsemantic_shader_debuginfo_100
    {IR(51897, 11), 183}, // DebugScope in nonsemantic_shader_debuginfo_100
    {IR(53895, 12), 195}, // DebugSource in nonsemantic_shader_debuginfo_100
    {IR(53931, 21), 197}, // DebugSourceContinued in nonsemantic_shader_debuginfo_100
    {IR(53995, 17), 201}, // DebugStoragePath in nonsemantic_shader_debuginfo_100
    {IR(51487, 15), 165}, // DebugTypeArray in nonsemantic_shader_debuginfo_100
    {IR(51364, 15), 162}, // DebugTypeBasic in nonsemantic_shader_debuginfo_100
    {IR(51601, 19), 170}, // DebugTypeComposite in nonsemantic_shader_debuginfo_100
    {IR(51549, 14), 169}, // DebugTypeEnum in nonsemantic_shader_debuginfo_100
    {IR(51531, 18), 168}, // DebugTypeFunction in nonsemantic_shader_debuginfo_100
    {IR(51636, 21), 172}, // DebugTypeInheritance in nonsemantic_shader_debuginfo_100
    {IR(54028, 16), 203}, // DebugTypeMatrix in nonsemantic_shader_debuginfo_100
    {IR(51620, 16), 171}, // DebugTypeMember in nonsemantic_shader_debuginfo_100
    {IR(51413, 17), 163}, // DebugTypePointer in nonsemantic_shader_debuginfo_100
    {IR(51657, 21), 173}, // DebugTypePtrToMember in nonsemantic_shader_debuginfo_100
    {IR(51468, 19), 164}, // DebugTypeQualifier in nonsemantic_shader_debuginfo_100
    {IR(51678, 18), 174}, // DebugTypeTemplate in nonsemantic_shader_debuginfo_100
    {IR(51696, 27), 175}, // DebugTypeTemplateParameter in nonsemantic_shader_debuginfo_100
    {IR(51758, 31), 177}, // DebugTypeTemplateParameterPack in nonsemantic_shader_debuginfo_100
    {IR(51723, 35), 176}, // DebugTypeTemplateTemplateParameter in nonsemantic_shader_debuginfo_100
    {IR(51502, 16), 166}, // DebugTypeVector in nonsemantic_shader_debuginfo_100
    {IR(51518, 13), 167}, // DebugTypedef in nonsemantic_shader_debuginfo_100
    {IR(52031, 11), 189}, // DebugValue in nonsemantic_shader_debuginfo_100
    {IR(54044, 14), 204}, // Configuration in nonsemantic_vkspreflection
    {IR(54120, 20), 209}, // DescriptorSetBuffer in nonsemantic_vkspreflection
    {IR(54140, 19), 210}, // DescriptorSetImage in nonsemantic_vkspreflection
    {IR(54159, 21), 211}, // DescriptorSetSampler in nonsemantic_vkspreflection
    {IR(54083, 14), 207}, // PushConstants in nonsemantic_vkspreflection
    {IR(54097, 23), 208}, // SpecializationMapEntry in nonsemantic_vkspreflection
    {IR(54058, 13), 205}, // StartCounter in nonsemantic_vkspreflection
    {IR(54071, 12), 206}, // StopCounter in nonsemantic_vkspreflection
    {IR(51291, 21), 213}, // DebugCompilationUnit in opencl_debuginfo_100
    {IR(52018, 13), 240}, // DebugDeclare in opencl_debuginfo_100
    {IR(52090, 16), 243}, // DebugExpression in opencl_debuginfo_100
    {IR(51834, 14), 232}, // DebugFunction in opencl_debuginfo_100
    {IR(51809, 25), 231}, // DebugFunctionDeclaration in opencl_debuginfo_100
    {IR(51789, 20), 230}, // DebugGlobalVariable in opencl_debuginfo_100
    {IR(53875, 20), 246}, // DebugImportedEntity in opencl_debuginfo_100
    {IR(51277, 14), 212}, // DebugInfoNone in opencl_debuginfo_100
    {IR(51921, 15), 237}, // DebugInlinedAt in opencl_debuginfo_100
    {IR(51997, 21), 239}, // DebugInlinedVariable in opencl_debuginfo_100
    {IR(51848, 18), 233}, // DebugLexicalBlock in opencl_debuginfo_100
    {IR(51866, 31), 234}, // DebugLexicalBlockDiscriminator in opencl_debuginfo_100
    {IR(51978, 19), 238}, // DebugLocalVariable in opencl_debuginfo_100
    {IR(52106, 14), 244}, // DebugMacroDef in opencl_debuginfo_100
    {IR(52120, 16), 245}, // DebugMacroUndef in opencl_debuginfo_100
    {IR(54480, 17), 248}, // DebugModuleINTEL in opencl_debuginfo_100
    {IR(51908, 13), 236}, // DebugNoScope in opencl_debuginfo_100
    {IR(52075, 15), 242}, // DebugOperation in opencl_debuginfo_100
    {IR(51897, 11), 235}, // DebugScope in opencl_debuginfo_100
    {IR(53895, 12), 247}, // DebugSource in opencl_debuginfo_100
    {IR(51487, 15), 217}, // DebugTypeArray in opencl_debuginfo_100
    {IR(51364, 15), 214}, // DebugTypeBasic in opencl_debuginfo_100
    {IR(51601, 19), 222}, // DebugTypeComposite in opencl_debuginfo_100
    {IR(51549, 14), 221}, // DebugTypeEnum in opencl_debuginfo_100
    {IR(51531, 18), 220}, // DebugTypeFunction in opencl_debuginfo_100
    {IR(51636, 21), 224}, // DebugTypeInheritance in opencl_debuginfo_100
    {IR(51620, 16), 223}, // DebugTypeMember in opencl_debuginfo_100
    {IR(51413, 17), 215}, // DebugTypePointer in opencl_debuginfo_100
    {IR(51657, 21), 225}, // DebugTypePtrToMember in opencl_debuginfo_100
    {IR(51468, 19), 216}, // DebugTypeQualifier in opencl_debuginfo_100
    {IR(51678, 18), 226}, // DebugTypeTemplate in opencl_debuginfo_100
    {IR(51696, 27), 227}, // DebugTypeTemplateParameter in opencl_debuginfo_100
    {IR(51758, 31), 229}, // DebugTypeTemplateParameterPack in opencl_debuginfo_100
    {IR(51723, 35), 228}, // DebugTypeTemplateTemplateParameter in opencl_debuginfo_100
    {IR(51502, 16), 218}, // DebugTypeVector in opencl_debuginfo_100
    {IR(51518, 13), 219}, // DebugTypedef in opencl_debuginfo_100
    {IR(52031, 11), 241}, // DebugValue in opencl_debuginfo_100
    {IR(54497, 5), 249}, // acos in opencl_std_100
    {IR(54502, 6), 250}, // acosh in opencl_std_100
    {IR(54508, 7), 251}, // acospi in opencl_std_100
    {IR(54515, 5), 252}, // asin in opencl_std_100
    {IR(54520, 6), 253}, // asinh in opencl_std_100
    {IR(54526, 7), 254}, // asinpi in opencl_std_100
    {IR(54533, 5), 255}, // atan in opencl_std_100
    {IR(54538, 6), 256}, // atan2 in opencl_std_100
    {IR(54557, 8), 259}, // atan2pi in opencl_std_100
    {IR(54544, 6), 257}, // atanh in opencl_std_100
    {IR(54550, 7), 258}, // atanpi in opencl_std_100
    {IR(55748, 10), 405}, // bitselect in opencl_std_100
    {IR(54565, 5), 260}, // cbrt in opencl_std_100
    {IR(54570, 5), 261}, // ceil in opencl_std_100
    {IR(55420, 4), 370}, // clz in opencl_std_100
    {IR(54575, 9), 262}, // copysign in opencl_std_100
    {IR(54584, 4), 263}, // cos in opencl_std_100
    {IR(54588, 5), 264}, // cosh in opencl_std_100
    {IR(54593, 6), 265}, // cospi in opencl_std_100
    {IR(55264, 6), 353}, // cross in opencl_std_100
    {IR(55424, 4), 371}, // ctz in opencl_std_100
    {IR(55199, 8), 345}, // degrees in opencl_std_100
    {IR(55270, 9), 354}, // distance in opencl_std_100
    {IR(54604, 4), 267}, // erf in opencl_std_100
    {IR(54599, 5), 266}, // erfc in opencl_std_100
    {IR(54608, 4), 268}, // exp in opencl_std_100
    {IR(54617, 6), 270}, // exp10 in opencl_std_100
    {IR(54612, 5), 269}, // exp2 in opencl_std_100
    {IR(54623, 6), 271}, // expm1 in opencl_std_100
    {IR(54629, 5), 272}, // fabs in opencl_std_100
    {IR(55296, 14), 357}, // fast_distance in opencl_std_100
    {IR(55310, 12), 358}, // fast_length in opencl_std_100
    {IR(55322, 15), 359}, // fast_normalize in opencl_std_100
    {IR(55192, 7), 344}, // fclamp in opencl_std_100
    {IR(54634, 5), 273}, // fdim in opencl_std_100
    {IR(54639, 6), 274}, // floor in opencl_std_100
    {IR(54645, 4), 275}, // fma in opencl_std_100
    {IR(54649, 5), 276}, // fmax in opencl_std_100
    {IR(55207, 12), 346}, // fmax_common in opencl_std_100
    {IR(54654, 5), 277}, // fmin in opencl_std_100
    {IR(55219, 12), 347}, // fmin_common in opencl_std_100
    {IR(54659, 5), 278}, // fmod in opencl_std_100
    {IR(54664, 6), 279}, // fract in opencl_std_100
    {IR(54670, 6), 280}, // frexp in opencl_std_100
    {IR(54882, 9), 316}, // half_cos in opencl_std_100
    {IR(54891, 12), 317}, // half_divide in opencl_std_100
    {IR(54903, 9), 318}, // half_exp in opencl_std_100
    {IR(54922, 11), 320}, // half_exp10 in opencl_std_100
    {IR(54912, 10), 319}, // half_exp2 in opencl_std_100
    {IR(54933, 9), 321}, // half_log in opencl_std_100
    {IR(54952, 11), 323}, // half_log10 in opencl_std_100
    {IR(54942, 10), 322}, // half_log2 in opencl_std_100
    {IR(54963, 10), 324}, // half_powr in opencl_std_100
    {IR(54973, 11), 325}, // half_recip in opencl_std_100
    {IR(54984, 11), 326}, // half_rsqrt in opencl_std_100
    {IR(54995, 9), 327}, // half_sin in opencl_std_100
    {IR(55004, 10), 328}, // half_sqrt in opencl_std_100
    {IR(55014, 9), 329}, // half_tan in opencl_std_100
    {IR(54676, 6), 281}, // hypot in opencl_std_100
    {IR(54682, 6), 282}, // ilogb in opencl_std_100
    {IR(54688, 6), 283}, // ldexp in opencl_std_100
    {IR(55279, 7), 355}, // length in opencl_std_100
    {IR(54694, 7), 284}, // lgamma in opencl_std_100
    {IR(54701, 9), 285}, // lgamma_r in opencl_std_100
    {IR(54710, 4), 286}, // log in opencl_std_100
    {IR(54719, 6), 288}, // log10 in opencl_std_100
    {IR(54725, 6), 289}, // log1p in opencl_std_100
    {IR(54714, 5), 287}, // log2 in opencl_std_100
    {IR(54731, 5), 290}, // logb in opencl_std_100
    {IR(54736, 4), 291}, // mad in opencl_std_100
    {IR(54740, 7), 292}, // maxmag in opencl_std_100
    {IR(54747, 7), 293}, // minmag in opencl_std_100
    {IR(55231, 4), 348}, // mix in opencl_std_100
    {IR(54754, 5), 294}, // modf in opencl_std_100
    {IR(54759, 4), 295}, // nan in opencl_std_100
    {IR(55023, 11), 330}, // native_cos in opencl_std_100
    {IR(55034, 14), 331}, // native_divide in opencl_std_100
    {IR(55048, 11), 332}, // native_exp in opencl_std_100
    {IR(55071, 13), 334}, // native_exp10 in opencl_std_100
    {IR(55059, 12), 333}, // native_exp2 in opencl_std_100
    {IR(55084, 11), 335}, // native_log in opencl_std_100
    {IR(55107, 13), 337}, // native_log10 in opencl_std_100
    {IR(55095, 12), 336}, // native_log2 in opencl_std_100
    {IR(55120, 12), 338}, // native_powr in opencl_std_100
    {IR(55132, 13), 339}, // native_recip in opencl_std_100
    {IR(55145, 13), 340}, // native_rsqrt in opencl_std_100
    {IR(55158, 11), 341}, // native_sin in opencl_std_100
    {IR(55169, 12), 342}, // native_sqrt in opencl_std_100
    {IR(55181, 11), 343}, // native_tan in opencl_std_100
    {IR(54763, 10), 296}, // nextafter in opencl_std_100
    {IR(55286, 10), 356}, // normalize in opencl_std_100
    {IR(55539, 9), 385}, // popcount in opencl_std_100
    {IR(54773, 4), 297}, // pow in opencl_std_100
    {IR(54777, 5), 298}, // pown in opencl_std_100
    {IR(54782, 5), 299}, // powr in opencl_std_100
    {IR(55739, 9), 404}, // prefetch in opencl_std_100
    {IR(55732, 7), 403}, // printf in opencl_std_100
    {IR(55235, 8), 349}, // radians in opencl_std_100
    {IR(54787, 10), 300}, // remainder in opencl_std_100
    {IR(54797, 7), 301}, // remquo in opencl_std_100
    {IR(54804, 5), 302}, // rint in opencl_std_100
    {IR(54809, 6), 303}, // rootn in opencl_std_100
    {IR(55490, 7), 380}, // rotate in opencl_std_100
    {IR(54815, 6), 304}, // round in opencl_std_100
    {IR(54821, 6), 305}, // rsqrt in opencl_std_100
    {IR(55337, 6), 360}, // s_abs in opencl_std_100
    {IR(55343, 11), 361}, // s_abs_diff in opencl_std_100
    {IR(55354, 10), 362}, // s_add_sat in opencl_std_100
    {IR(55404, 8), 368}, // s_clamp in opencl_std_100
    {IR(55374, 7), 364}, // s_hadd in opencl_std_100
    {IR(55548, 8), 386}, // s_mad24 in opencl_std_100
    {IR(55428, 9), 372}, // s_mad_hi in opencl_std_100
    {IR(55447, 10), 374}, // s_mad_sat in opencl_std_100
    {IR(55457, 6), 375}, // s_max in opencl_std_100
    {IR(55469, 6), 377}, // s_min in opencl_std_100
    {IR(55564, 8), 388}, // s_mul24 in opencl_std_100
    {IR(55481, 9), 379}, // s_mul_hi in opencl_std_100
    {IR(55388, 8), 366}, // s_rhadd in opencl_std_100
    {IR(55497, 10), 381}, // s_sub_sat in opencl_std_100
    {IR(55528, 11), 384}, // s_upsample in opencl_std_100
    {IR(55758, 7), 406}, // select in opencl_std_100
    {IR(55715, 8), 401}, // shuffle in opencl_std_100
    {IR(55723, 9), 402}, // shuffle2 in opencl_std_100
    {IR(55259, 5), 352}, // sign in opencl_std_100
    {IR(54827, 4), 306}, // sin in opencl_std_100
    {IR(54831, 7), 307}, // sincos in opencl_std_100
    {IR(54838, 5), 308}, // sinh in opencl_std_100
    {IR(54843, 6), 309}, // sinpi in opencl_std_100
    {IR(55248, 11), 351}, // smoothstep in opencl_std_100
    {IR(54849, 5), 310}, // sqrt in opencl_std_100
    {IR(55243, 5), 350}, // step in opencl_std_100
    {IR(54854, 4), 311}, // tan in opencl_std_100
    {IR(54858, 5), 312}, // tanh in opencl_std_100
    {IR(54863, 6), 313}, // tanpi in opencl_std_100
    {IR(54869, 7), 314}, // tgamma in opencl_std_100
    {IR(54876, 6), 315}, // trunc in opencl_std_100
    {IR(55765, 6), 407}, // u_abs in opencl_std_100
    {IR(55771, 11), 408}, // u_abs_diff in opencl_std_100
    {IR(55364, 10), 363}, // u_add_sat in opencl_std_100
    {IR(55412, 8), 369}, // u_clamp in opencl_std_100
    {IR(55381, 7), 365}, // u_hadd in opencl_std_100
    {IR(55556, 8), 387}, // u_mad24 in opencl_std_100
    {IR(55791, 9), 410}, // u_mad_hi in opencl_std_100
    {IR(55437, 10), 373}, // u_mad_sat in opencl_std_100
    {IR(55463, 6), 376}, // u_max in opencl_std_100
    {IR(55475, 6), 378}, // u_min in opencl_std_100
    {IR(55572, 8), 389}, // u_mul24 in opencl_std_100
    {IR(55782, 9), 409}, // u_mul_hi in opencl_std_100
    {IR(55396, 8), 367}, // u_rhadd in opencl_std_100
    {IR(55507, 10), 382}, // u_sub_sat in opencl_std_100
    {IR(55517, 11), 383}, // u_upsample in opencl_std_100
    {IR(55595, 11), 392}, // vload_half in opencl_std_100
    {IR(55606, 12), 393}, // vload_halfn in opencl_std_100
    {IR(55672, 13), 398}, // vloada_halfn in opencl_std_100
    {IR(55580, 7), 390}, // vloadn in opencl_std_100
    {IR(55618, 12), 394}, // vstore_half in opencl_std_100
    {IR(55630, 14), 395}, // vstore_half_r in opencl_std_100
    {IR(55644, 13), 396}, // vstore_halfn in opencl_std_100
    {IR(55657, 15), 397}, // vstore_halfn_r in opencl_std_100
    {IR(55685, 14), 399}, // vstorea_halfn in opencl_std_100
    {IR(55699, 16), 400}, // vstorea_halfn_r in opencl_std_100
    {IR(55587, 8), 391}, // vstoren in opencl_std_100
    {IR(55817, 17), 412}, // CubeFaceCoordAMD in spv_amd_gcn_shader
    {IR(55800, 17), 411}, // CubeFaceIndexAMD in spv_amd_gcn_shader
    {IR(55834, 8), 413}, // TimeAMD in spv_amd_gcn_shader
    {IR(55911, 9), 417}, // MbcntAMD in spv_amd_shader_ballot
    {IR(55842, 22), 414}, // SwizzleInvocationsAMD in spv_amd_shader_ballot
    {IR(55864, 28), 415}, // SwizzleInvocationsMaskedAMD in spv_amd_shader_ballot
    {IR(55892, 19), 416}, // WriteInvocationAMD in spv_amd_shader_ballot
    {IR(55920, 23), 418}, // InterpolateAtVertexAMD in spv_amd_shader_explicit_vertex_parameter
    {IR(55970, 9), 422}, // FMax3AMD in spv_amd_shader_trinary_minmax
    {IR(55997, 9), 425}, // FMid3AMD in spv_amd_shader_trinary_minmax
    {IR(55943, 9), 419}, // FMin3AMD in spv_amd_shader_trinary_minmax
    {IR(55988, 9), 424}, // SMax3AMD in spv_amd_shader_trinary_minmax
    {IR(56015, 9), 427}, // SMid3AMD in spv_amd_shader_trinary_minmax
    {IR(55961, 9), 421}, // SMin3AMD in spv_amd_shader_trinary_minmax
    {IR(55979, 9), 423}, // UMax3AMD in spv_amd_shader_trinary_minmax
    {IR(56006, 9), 426}, // UMid3AMD in spv_amd_shader_trinary_minmax
    {IR(55952, 9), 420}, // UMin3AMD in spv_amd_shader_trinary_minmax
    {IR(56321, 4), 459}, // ABS in tosa_001000_1
    {IR(56144, 4), 442}, // ADD in tosa_001000_1
    {IR(56024, 7), 428}, // ARGMAX in tosa_001000_1
    {IR(56148, 23), 443}, // ARITHMETIC_RIGHT_SHIFT in tosa_001000_1
    {IR(56031, 11), 429}, // AVG_POOL2D in tosa_001000_1
    {IR(56171, 12), 444}, // BITWISE_AND in tosa_001000_1
    {IR(56325, 12), 460}, // BITWISE_NOT in tosa_001000_1
    {IR(56183, 11), 445}, // BITWISE_OR in tosa_001000_1
    {IR(56194, 12), 446}, // BITWISE_XOR in tosa_001000_1
    {IR(56579, 5), 492}, // CAST in tosa_001000_1
    {IR(56337, 5), 461}, // CEIL in tosa_001000_1
    {IR(56121, 6), 438}, // CLAMP in tosa_001000_1
    {IR(56342, 4), 462}, // CLZ in tosa_001000_1
    {IR(56509, 7), 482}, // CONCAT in tosa_001000_1
    {IR(56042, 7), 430}, // CONV2D in tosa_001000_1
    {IR(56049, 7), 431}, // CONV3D in tosa_001000_1
    {IR(56346, 4), 463}, // COS in tosa_001000_1
    {IR(56056, 17), 432}, // DEPTHWISE_CONV2D in tosa_001000_1
    {IR(56411, 6), 473}, // EQUAL in tosa_001000_1
    {IR(56127, 4), 439}, // ERF in tosa_001000_1
    {IR(56350, 4), 464}, // EXP in tosa_001000_1
    {IR(56073, 6), 433}, // FFT2D in tosa_001000_1
    {IR(56354, 6), 465}, // FLOOR in tosa_001000_1
    {IR(56557, 7), 489}, // GATHER in tosa_001000_1
    {IR(56417, 8), 474}, // GREATER in tosa_001000_1
    {IR(56425, 14), 475}, // GREATER_EQUAL in tosa_001000_1
    {IR(56206, 7), 447}, // INTDIV in tosa_001000_1
    {IR(56360, 4), 466}, // LOG in tosa_001000_1
    {IR(56213, 12), 448}, // LOGICAL_AND in tosa_001000_1
    {IR(56225, 19), 449}, // LOGICAL_LEFT_SHIFT in tosa_001000_1
    {IR(56364, 12), 467}, // LOGICAL_NOT in tosa_001000_1
    {IR(56264, 11), 451}, // LOGICAL_OR in tosa_001000_1
    {IR(56244, 20), 450}, // LOGICAL_RIGHT_SHIFT in tosa_001000_1
    {IR(56275, 12), 452}, // LOGICAL_XOR in tosa_001000_1
    {IR(56079, 7), 434}, // MATMUL in tosa_001000_1
    {IR(56287, 8), 453}, // MAXIMUM in tosa_001000_1
    {IR(56086, 11), 435}, // MAX_POOL2D in tosa_001000_1
    {IR(56295, 8), 454}, // MINIMUM in tosa_001000_1
    {IR(56303, 4), 455}, // MUL in tosa_001000_1
    {IR(56376, 7), 468}, // NEGATE in tosa_001000_1
    {IR(56516, 4), 483}, // PAD in tosa_001000_1
    {IR(56307, 4), 456}, // POW in tosa_001000_1
    {IR(56383, 11), 469}, // RECIPROCAL in tosa_001000_1
    {IR(56439, 11), 476}, // REDUCE_ALL in tosa_001000_1
    {IR(56450, 11), 477}, // REDUCE_ANY in tosa_001000_1
    {IR(56461, 11), 478}, // REDUCE_MAX in tosa_001000_1
    {IR(56472, 11), 479}, // REDUCE_MIN in tosa_001000_1
    {IR(56483, 15), 480}, // REDUCE_PRODUCT in tosa_001000_1
    {IR(56498, 11), 481}, // REDUCE_SUM in tosa_001000_1
    {IR(56584, 8), 493}, // RESCALE in tosa_001000_1
    {IR(56520, 8), 484}, // RESHAPE in tosa_001000_1
    {IR(56572, 7), 491}, // RESIZE in tosa_001000_1
    {IR(56528, 8), 485}, // REVERSE in tosa_001000_1
    {IR(56097, 7), 436}, // RFFT2D in tosa_001000_1
    {IR(56394, 6), 470}, // RSQRT in tosa_001000_1
    {IR(56564, 8), 490}, // SCATTER in tosa_001000_1
    {IR(56404, 7), 472}, // SELECT in tosa_001000_1
    {IR(56131, 8), 440}, // SIGMOID in tosa_001000_1
    {IR(56400, 4), 471}, // SIN in tosa_001000_1
    {IR(56536, 6), 486}, // SLICE in tosa_001000_1
    {IR(56311, 4), 457}, // SUB in tosa_001000_1
    {IR(56315, 6), 458}, // TABLE in tosa_001000_1
    {IR(56139, 5), 441}, // TANH in tosa_001000_1
    {IR(56542, 5), 487}, // TILE in tosa_001000_1
    {IR(56547, 10), 488}, // TRANSPOSE in tosa_001000_1
    {IR(56104, 17), 437}, // TRANSPOSE_CONV2D in tosa_001000_1
}};

IndexRange ExtInstNameRangeForKind(spv_ext_inst_type_t type) {
  switch(type) {
    case SPV_EXT_INST_TYPE_ARM_MOTION_ENGINE_100: return IR(0, 3);
    case SPV_EXT_INST_TYPE_DEBUGINFO: return IR(3, 34);
    case SPV_EXT_INST_TYPE_GLSL_STD_450: return IR(37, 81);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_CLSPVREFLECTION: return IR(118, 42);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_SHADER_DEBUGINFO_100: return IR(160, 44);
    case SPV_EXT_INST_TYPE_NONSEMANTIC_VKSPREFLECTION: return IR(204, 8);
    case SPV_EXT_INST_TYPE_OPENCL_DEBUGINFO_100: return IR(212, 37);
    case SPV_EXT_INST_TYPE_OPENCL_STD: return IR(249, 162);
    case SPV_EXT_INST_TYPE_SPV_AMD_GCN_SHADER: return IR(411, 3);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_BALLOT: return IR(414, 4);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_EXPLICIT_VERTEX_PARAMETER: return IR(418, 1);
    case SPV_EXT_INST_TYPE_SPV_AMD_SHADER_TRINARY_MINMAX: return IR(419, 9);
    case SPV_EXT_INST_TYPE_TOSA_001000_1: return IR(428, 66);
    default: break;
  }
  return IR(0,0);
}

// Array of characters, referenced by IndexRanges elsewhere.
// Each IndexRange denotes a string.
static const char kStrings[] =
  "SPV_ALTERA_arbitrary_precision_fixed_point\0" // IR(0, 43)
  "SPV_ALTERA_arbitrary_precision_floating_point\0" // IR(43, 46)
  "SPV_ALTERA_arbitrary_precision_integers\0" // IR(89, 40)
  "SPV_ALTERA_blocking_pipes\0" // IR(129, 26)
  "SPV_ALTERA_fpga_argument_interfaces\0" // IR(155, 36)
  "SPV_ALTERA_fpga_buffer_location\0" // IR(191, 32)
  "SPV_ALTERA_fpga_cluster_attributes\0" // IR(223, 35)
  "SPV_ALTERA_fpga_dsp_control\0" // IR(258, 28)
  "SPV_ALTERA_fpga_invocation_pipelining_attributes\0" // IR(286, 49)
  "SPV_ALTERA_fpga_latency_control\0" // IR(335, 32)
  "SPV_ALTERA_fpga_loop_controls\0" // IR(367, 30)
  "SPV_ALTERA_fpga_memory_accesses\0" // IR(397, 32)
  "SPV_ALTERA_fpga_memory_attributes\0" // IR(429, 34)
  "SPV_ALTERA_fpga_reg\0" // IR(463, 20)
  "SPV_ALTERA_global_variable_fpga_decorations\0" // IR(483, 44)
  "SPV_ALTERA_io_pipes\0" // IR(527, 20)
  "SPV_ALTERA_loop_fuse\0" // IR(547, 21)
  "SPV_ALTERA_runtime_aligned\0" // IR(568, 27)
  "SPV_ALTERA_task_sequence\0" // IR(595, 25)
  "SPV_ALTERA_usm_storage_classes\0" // IR(620, 31)
  "SPV_AMDX_shader_enqueue\0" // IR(651, 24)
  "SPV_AMD_gcn_shader\0" // IR(675, 19)
  "SPV_AMD_gpu_shader_half_float\0" // IR(694, 30)
  "SPV_AMD_gpu_shader_half_float_fetch\0" // IR(724, 36)
  "SPV_AMD_gpu_shader_int16\0" // IR(760, 25)
  "SPV_AMD_shader_ballot\0" // IR(785, 22)
  "SPV_AMD_shader_early_and_late_fragment_tests\0" // IR(807, 45)
  "SPV_AMD_shader_explicit_vertex_parameter\0" // IR(852, 41)
  "SPV_AMD_shader_fragment_mask\0" // IR(893, 29)
  "SPV_AMD_shader_image_load_store_lod\0" // IR(922, 36)
  "SPV_AMD_shader_trinary_minmax\0" // IR(958, 30)
  "SPV_AMD_texture_gather_bias_lod\0" // IR(988, 32)
  "SPV_AMD_weak_linkage\0" // IR(1020, 21)
  "SPV_ARM_cooperative_matrix_layouts\0" // IR(1041, 35)
  "SPV_ARM_core_builtins\0" // IR(1076, 22)
  "SPV_ARM_graph\0" // IR(1098, 14)
  "SPV_ARM_tensors\0" // IR(1112, 16)
  "SPV_EXT_arithmetic_fence\0" // IR(1128, 25)
  "SPV_EXT_demote_to_helper_invocation\0" // IR(1153, 36)
  "SPV_EXT_descriptor_heap\0" // IR(1189, 24)
  "SPV_EXT_descriptor_indexing\0" // IR(1213, 28)
  "SPV_EXT_float8\0" // IR(1241, 15)
  "SPV_EXT_fragment_fully_covered\0" // IR(1256, 31)
  "SPV_EXT_fragment_invocation_density\0" // IR(1287, 36)
  "SPV_EXT_fragment_shader_interlock\0" // IR(1323, 34)
  "SPV_EXT_long_vector\0" // IR(1357, 20)
  "SPV_EXT_mesh_shader\0" // IR(1377, 20)
  "SPV_EXT_opacity_micromap\0" // IR(1397, 25)
  "SPV_EXT_optnone\0" // IR(1422, 16)
  "SPV_EXT_physical_storage_buffer\0" // IR(1438, 32)
  "SPV_EXT_relaxed_printf_string_address_space\0" // IR(1470, 44)
  "SPV_EXT_replicated_composites\0" // IR(1514, 30)
  "SPV_EXT_shader_64bit_indexing\0" // IR(1544, 30)
  "SPV_EXT_shader_atomic_float16_add\0" // IR(1574, 34)
  "SPV_EXT_shader_atomic_float_add\0" // IR(1608, 32)
  "SPV_EXT_shader_atomic_float_min_max\0" // IR(1640, 36)
  "SPV_EXT_shader_image_int64\0" // IR(1676, 27)
  "SPV_EXT_shader_invocation_reorder\0" // IR(1703, 34)
  "SPV_EXT_shader_stencil_export\0" // IR(1737, 30)
  "SPV_EXT_shader_subgroup_partitioned\0" // IR(1767, 36)
  "SPV_EXT_shader_tile_image\0" // IR(1803, 26)
  "SPV_EXT_shader_viewport_index_layer\0" // IR(1829, 36)
  "SPV_GOOGLE_decorate_string\0" // IR(1865, 27)
  "SPV_GOOGLE_hlsl_functionality1\0" // IR(1892, 31)
  "SPV_GOOGLE_user_type\0" // IR(1923, 21)
  "SPV_INTEL_2d_block_io\0" // IR(1944, 22)
  "SPV_INTEL_arbitrary_precision_fixed_point\0" // IR(1966, 42)
  "SPV_INTEL_arbitrary_precision_floating_point\0" // IR(2008, 45)
  "SPV_INTEL_arbitrary_precision_integers\0" // IR(2053, 39)
  "SPV_INTEL_bfloat16_conversion\0" // IR(2092, 30)
  "SPV_INTEL_bindless_images\0" // IR(2122, 26)
  "SPV_INTEL_blocking_pipes\0" // IR(2148, 25)
  "SPV_INTEL_cache_controls\0" // IR(2173, 25)
  "SPV_INTEL_debug_module\0" // IR(2198, 23)
  "SPV_INTEL_device_side_avc_motion_estimation\0" // IR(2221, 44)
  "SPV_INTEL_float_controls2\0" // IR(2265, 26)
  "SPV_INTEL_fp_fast_math_mode\0" // IR(2291, 28)
  "SPV_INTEL_fp_max_error\0" // IR(2319, 23)
  "SPV_INTEL_fpga_argument_interfaces\0" // IR(2342, 35)
  "SPV_INTEL_fpga_buffer_location\0" // IR(2377, 31)
  "SPV_INTEL_fpga_cluster_attributes\0" // IR(2408, 34)
  "SPV_INTEL_fpga_dsp_control\0" // IR(2442, 27)
  "SPV_INTEL_fpga_invocation_pipelining_attributes\0" // IR(2469, 48)
  "SPV_INTEL_fpga_latency_control\0" // IR(2517, 31)
  "SPV_INTEL_fpga_loop_controls\0" // IR(2548, 29)
  "SPV_INTEL_fpga_memory_accesses\0" // IR(2577, 31)
  "SPV_INTEL_fpga_memory_attributes\0" // IR(2608, 33)
  "SPV_INTEL_fpga_reg\0" // IR(2641, 19)
  "SPV_INTEL_function_pointers\0" // IR(2660, 28)
  "SPV_INTEL_function_variants\0" // IR(2688, 28)
  "SPV_INTEL_global_variable_fpga_decorations\0" // IR(2716, 43)
  "SPV_INTEL_global_variable_host_access\0" // IR(2759, 38)
  "SPV_INTEL_inline_assembly\0" // IR(2797, 26)
  "SPV_INTEL_int4\0" // IR(2823, 15)
  "SPV_INTEL_io_pipes\0" // IR(2838, 19)
  "SPV_INTEL_kernel_attributes\0" // IR(2857, 28)
  "SPV_INTEL_long_composites\0" // IR(2885, 26)
  "SPV_INTEL_loop_fuse\0" // IR(2911, 20)
  "SPV_INTEL_masked_gather_scatter\0" // IR(2931, 32)
  "SPV_INTEL_maximum_registers\0" // IR(2963, 28)
  "SPV_INTEL_media_block_io\0" // IR(2991, 25)
  "SPV_INTEL_memory_access_aliasing\0" // IR(3016, 33)
  "SPV_INTEL_optnone\0" // IR(3049, 18)
  "SPV_INTEL_predicated_io\0" // IR(3067, 24)
  "SPV_INTEL_rounded_divide_sqrt\0" // IR(3091, 30)
  "SPV_INTEL_runtime_aligned\0" // IR(3121, 26)
  "SPV_INTEL_shader_integer_functions2\0" // IR(3147, 36)
  "SPV_INTEL_split_barrier\0" // IR(3183, 24)
  "SPV_INTEL_subgroup_buffer_prefetch\0" // IR(3207, 35)
  "SPV_INTEL_subgroup_matrix_multiply_accumulate\0" // IR(3242, 46)
  "SPV_INTEL_subgroups\0" // IR(3288, 20)
  "SPV_INTEL_task_sequence\0" // IR(3308, 24)
  "SPV_INTEL_tensor_float32_conversion\0" // IR(3332, 36)
  "SPV_INTEL_ternary_bitwise_function\0" // IR(3368, 35)
  "SPV_INTEL_unstructured_loop_controls\0" // IR(3403, 37)
  "SPV_INTEL_usm_storage_classes\0" // IR(3440, 30)
  "SPV_INTEL_variable_length_array\0" // IR(3470, 32)
  "SPV_INTEL_vector_compute\0" // IR(3502, 25)
  "SPV_KHR_16bit_storage\0" // IR(3527, 22)
  "SPV_KHR_8bit_storage\0" // IR(3549, 21)
  "SPV_KHR_abort\0" // IR(3570, 14)
  "SPV_KHR_bfloat16\0" // IR(3584, 17)
  "SPV_KHR_bit_instructions\0" // IR(3601, 25)
  "SPV_KHR_compute_shader_derivatives\0" // IR(3626, 35)
  "SPV_KHR_constant_data\0" // IR(3661, 22)
  "SPV_KHR_cooperative_matrix\0" // IR(3683, 27)
  "SPV_KHR_device_group\0" // IR(3710, 21)
  "SPV_KHR_expect_assume\0" // IR(3731, 22)
  "SPV_KHR_float_controls\0" // IR(3753, 23)
  "SPV_KHR_float_controls2\0" // IR(3776, 24)
  "SPV_KHR_fma\0" // IR(3800, 12)
  "SPV_KHR_fragment_shader_barycentric\0" // IR(3812, 36)
  "SPV_KHR_fragment_shading_rate\0" // IR(3848, 30)
  "SPV_KHR_integer_dot_product\0" // IR(3878, 28)
  "SPV_KHR_linkonce_odr\0" // IR(3906, 21)
  "SPV_KHR_maximal_reconvergence\0" // IR(3927, 30)
  "SPV_KHR_multiview\0" // IR(3957, 18)
  "SPV_KHR_no_integer_wrap_decoration\0" // IR(3975, 35)
  "SPV_KHR_non_semantic_info\0" // IR(4010, 26)
  "SPV_KHR_opacity_micromap\0" // IR(4036, 25)
  "SPV_KHR_physical_storage_buffer\0" // IR(4061, 32)
  "SPV_KHR_poison_freeze\0" // IR(4093, 22)
  "SPV_KHR_post_depth_coverage\0" // IR(4115, 28)
  "SPV_KHR_quad_control\0" // IR(4143, 21)
  "SPV_KHR_ray_cull_mask\0" // IR(4164, 22)
  "SPV_KHR_ray_query\0" // IR(4186, 18)
  "SPV_KHR_ray_tracing\0" // IR(4204, 20)
  "SPV_KHR_ray_tracing_position_fetch\0" // IR(4224, 35)
  "SPV_KHR_relaxed_extended_instruction\0" // IR(4259, 37)
  "SPV_KHR_shader_atomic_counter_ops\0" // IR(4296, 34)
  "SPV_KHR_shader_ballot\0" // IR(4330, 22)
  "SPV_KHR_shader_clock\0" // IR(4352, 21)
  "SPV_KHR_shader_draw_parameters\0" // IR(4373, 31)
  "SPV_KHR_storage_buffer_storage_class\0" // IR(4404, 37)
  "SPV_KHR_subgroup_rotate\0" // IR(4441, 24)
  "SPV_KHR_subgroup_uniform_control_flow\0" // IR(4465, 38)
  "SPV_KHR_subgroup_vote\0" // IR(4503, 22)
  "SPV_KHR_terminate_invocation\0" // IR(4525, 29)
  "SPV_KHR_uniform_group_instructions\0" // IR(4554, 35)
  "SPV_KHR_untyped_pointers\0" // IR(4589, 25)
  "SPV_KHR_variable_pointers\0" // IR(4614, 26)
  "SPV_KHR_vulkan_memory_model\0" // IR(4640, 28)
  "SPV_KHR_workgroup_memory_explicit_layout\0" // IR(4668, 41)
  "SPV_NVX_multiview_per_view_attributes\0" // IR(4709, 38)
  "SPV_NV_bindless_texture\0" // IR(4747, 24)
  "SPV_NV_cluster_acceleration_structure\0" // IR(4771, 38)
  "SPV_NV_compute_shader_derivatives\0" // IR(4809, 34)
  "SPV_NV_cooperative_matrix\0" // IR(4843, 26)
  "SPV_NV_cooperative_matrix2\0" // IR(4869, 27)
  "SPV_NV_cooperative_vector\0" // IR(4896, 26)
  "SPV_NV_displacement_micromap\0" // IR(4922, 29)
  "SPV_NV_fragment_shader_barycentric\0" // IR(4951, 35)
  "SPV_NV_geometry_shader_passthrough\0" // IR(4986, 35)
  "SPV_NV_linear_swept_spheres\0" // IR(5021, 28)
  "SPV_NV_mesh_shader\0" // IR(5049, 19)
  "SPV_NV_push_constant_bank\0" // IR(5068, 26)
  "SPV_NV_raw_access_chains\0" // IR(5094, 25)
  "SPV_NV_ray_tracing\0" // IR(5119, 19)
  "SPV_NV_ray_tracing_motion_blur\0" // IR(5138, 31)
  "SPV_NV_sample_mask_override_coverage\0" // IR(5169, 37)
  "SPV_NV_shader_atomic_fp16_vector\0" // IR(5206, 33)
  "SPV_NV_shader_image_footprint\0" // IR(5239, 30)
  "SPV_NV_shader_invocation_reorder\0" // IR(5269, 33)
  "SPV_NV_shader_sm_builtins\0" // IR(5302, 26)
  "SPV_NV_shader_subgroup_partitioned\0" // IR(5328, 35)
  "SPV_NV_shading_rate\0" // IR(5363, 20)
  "SPV_NV_stereo_view_rendering\0" // IR(5383, 29)
  "SPV_NV_tensor_addressing\0" // IR(5412, 25)
  "SPV_NV_viewport_array2\0" // IR(5437, 23)
  "SPV_QCOM_cooperative_matrix_conversion\0" // IR(5460, 39)
  "SPV_QCOM_image_processing\0" // IR(5499, 26)
  "SPV_QCOM_image_processing2\0" // IR(5525, 27)
  "SPV_QCOM_tile_shading\0" // IR(5552, 22)
  "SPV_VALIDATOR_ignore_type_decl_unique\0" // IR(5574, 38)
  "SPV_VALVE_mixed_float_dot_product\0" // IR(5612, 34)
  "ReadOnly\0" // IR(5646, 9)
  "Kernel\0" // IR(5655, 7)
  "WriteOnly\0" // IR(5662, 10)
  "ReadWrite\0" // IR(5672, 10)
  "Logical\0" // IR(5682, 8)
  "Physical32\0" // IR(5690, 11)
  "Addresses\0" // IR(5701, 10)
  "Physical64\0" // IR(5711, 11)
  "PhysicalStorageBuffer64\0" // IR(5722, 24)
  "PhysicalStorageBuffer64EXT\0" // IR(5746, 27)
  "PhysicalStorageBufferAddresses\0" // IR(5773, 31)
  "Position\0" // IR(5804, 9)
  "Shader\0" // IR(5813, 7)
  "PointSize\0" // IR(5820, 10)
  "ClipDistance\0" // IR(5830, 13)
  "CullDistance\0" // IR(5843, 13)
  "VertexId\0" // IR(5856, 9)
  "InstanceId\0" // IR(5865, 11)
  "PrimitiveId\0" // IR(5876, 12)
  "Geometry\0" // IR(5888, 9)
  "Tessellation\0" // IR(5897, 13)
  "RayTracingNV\0" // IR(5910, 13)
  "RayTracingKHR\0" // IR(5923, 14)
  "MeshShadingNV\0" // IR(5937, 14)
  "MeshShadingEXT\0" // IR(5951, 15)
  "InvocationId\0" // IR(5966, 13)
  "Layer\0" // IR(5979, 6)
  "ShaderLayer\0" // IR(5985, 12)
  "ShaderViewportIndexLayerEXT\0" // IR(5997, 28)
  "ViewportIndex\0" // IR(6025, 14)
  "MultiViewport\0" // IR(6039, 14)
  "ShaderViewportIndex\0" // IR(6053, 20)
  "TessLevelOuter\0" // IR(6073, 15)
  "TessLevelInner\0" // IR(6088, 15)
  "TessCoord\0" // IR(6103, 10)
  "PatchVertices\0" // IR(6113, 14)
  "FragCoord\0" // IR(6127, 10)
  "PointCoord\0" // IR(6137, 11)
  "FrontFacing\0" // IR(6148, 12)
  "SampleId\0" // IR(6160, 9)
  "SampleRateShading\0" // IR(6169, 18)
  "SamplePosition\0" // IR(6187, 15)
  "SampleMask\0" // IR(6202, 11)
  "FragDepth\0" // IR(6213, 10)
  "HelperInvocation\0" // IR(6223, 17)
  "NumWorkgroups\0" // IR(6240, 14)
  "WorkgroupSize\0" // IR(6254, 14)
  "WorkgroupId\0" // IR(6268, 12)
  "LocalInvocationId\0" // IR(6280, 18)
  "GlobalInvocationId\0" // IR(6298, 19)
  "LocalInvocationIndex\0" // IR(6317, 21)
  "WorkDim\0" // IR(6338, 8)
  "GlobalSize\0" // IR(6346, 11)
  "EnqueuedWorkgroupSize\0" // IR(6357, 22)
  "GlobalOffset\0" // IR(6379, 13)
  "GlobalLinearId\0" // IR(6392, 15)
  "SubgroupSize\0" // IR(6407, 13)
  "GroupNonUniform\0" // IR(6420, 16)
  "SubgroupBallotKHR\0" // IR(6436, 18)
  "SubgroupMaxSize\0" // IR(6454, 16)
  "NumSubgroups\0" // IR(6470, 13)
  "NumEnqueuedSubgroups\0" // IR(6483, 21)
  "SubgroupId\0" // IR(6504, 11)
  "SubgroupLocalInvocationId\0" // IR(6515, 26)
  "VertexIndex\0" // IR(6541, 12)
  "InstanceIndex\0" // IR(6553, 14)
  "CoreIDARM\0" // IR(6567, 10)
  "CoreBuiltinsARM\0" // IR(6577, 16)
  "CoreCountARM\0" // IR(6593, 13)
  "CoreMaxIDARM\0" // IR(6606, 13)
  "WarpIDARM\0" // IR(6619, 10)
  "WarpMaxIDARM\0" // IR(6629, 13)
  "SubgroupEqMask\0" // IR(6642, 15)
  "SubgroupEqMaskKHR\0" // IR(6657, 18)
  "GroupNonUniformBallot\0" // IR(6675, 22)
  "SubgroupGeMask\0" // IR(6697, 15)
  "SubgroupGeMaskKHR\0" // IR(6712, 18)
  "SubgroupGtMask\0" // IR(6730, 15)
  "SubgroupGtMaskKHR\0" // IR(6745, 18)
  "SubgroupLeMask\0" // IR(6763, 15)
  "SubgroupLeMaskKHR\0" // IR(6778, 18)
  "SubgroupLtMask\0" // IR(6796, 15)
  "SubgroupLtMaskKHR\0" // IR(6811, 18)
  "BaseVertex\0" // IR(6829, 11)
  "DrawParameters\0" // IR(6840, 15)
  "BaseInstance\0" // IR(6855, 13)
  "DrawIndex\0" // IR(6868, 10)
  "PrimitiveShadingRateKHR\0" // IR(6878, 24)
  "FragmentShadingRateKHR\0" // IR(6902, 23)
  "DeviceIndex\0" // IR(6925, 12)
  "DeviceGroup\0" // IR(6937, 12)
  "ViewIndex\0" // IR(6949, 10)
  "MultiView\0" // IR(6959, 10)
  "ShadingRateKHR\0" // IR(6969, 15)
  "TileOffsetQCOM\0" // IR(6984, 15)
  "TileShadingQCOM\0" // IR(6999, 16)
  "TileDimensionQCOM\0" // IR(7015, 18)
  "TileApronSizeQCOM\0" // IR(7033, 18)
  "BaryCoordNoPerspAMD\0" // IR(7051, 20)
  "BaryCoordNoPerspCentroidAMD\0" // IR(7071, 28)
  "BaryCoordNoPerspSampleAMD\0" // IR(7099, 26)
  "BaryCoordSmoothAMD\0" // IR(7125, 19)
  "BaryCoordSmoothCentroidAMD\0" // IR(7144, 27)
  "BaryCoordSmoothSampleAMD\0" // IR(7171, 25)
  "BaryCoordPullModelAMD\0" // IR(7196, 22)
  "FragStencilRefEXT\0" // IR(7218, 18)
  "StencilExportEXT\0" // IR(7236, 17)
  "RemainingRecursionLevelsAMDX\0" // IR(7253, 29)
  "ShaderEnqueueAMDX\0" // IR(7282, 18)
  "ShaderIndexAMDX\0" // IR(7300, 16)
  "SamplerHeapEXT\0" // IR(7316, 15)
  "DescriptorHeapEXT\0" // IR(7331, 18)
  "ResourceHeapEXT\0" // IR(7349, 16)
  "ViewportMaskNV\0" // IR(7365, 15)
  "ShaderViewportMaskNV\0" // IR(7380, 21)
  "SecondaryPositionNV\0" // IR(7401, 20)
  "ShaderStereoViewNV\0" // IR(7421, 19)
  "SecondaryViewportMaskNV\0" // IR(7440, 24)
  "PositionPerViewNV\0" // IR(7464, 18)
  "PerViewAttributesNV\0" // IR(7482, 20)
  "ViewportMaskPerViewNV\0" // IR(7502, 22)
  "FullyCoveredEXT\0" // IR(7524, 16)
  "FragmentFullyCoveredEXT\0" // IR(7540, 24)
  "TaskCountNV\0" // IR(7564, 12)
  "PrimitiveCountNV\0" // IR(7576, 17)
  "PrimitiveIndicesNV\0" // IR(7593, 19)
  "ClipDistancePerViewNV\0" // IR(7612, 22)
  "CullDistancePerViewNV\0" // IR(7634, 22)
  "LayerPerViewNV\0" // IR(7656, 15)
  "MeshViewCountNV\0" // IR(7671, 16)
  "MeshViewIndicesNV\0" // IR(7687, 18)
  "BaryCoordKHR\0" // IR(7705, 13)
  "BaryCoordNV\0" // IR(7718, 12)
  "FragmentBarycentricKHR\0" // IR(7730, 23)
  "BaryCoordNoPerspKHR\0" // IR(7753, 20)
  "BaryCoordNoPerspNV\0" // IR(7773, 19)
  "FragSizeEXT\0" // IR(7792, 12)
  "FragmentSizeNV\0" // IR(7804, 15)
  "FragmentDensityEXT\0" // IR(7819, 19)
  "FragInvocationCountEXT\0" // IR(7838, 23)
  "InvocationsPerPixelNV\0" // IR(7861, 22)
  "PrimitivePointIndicesEXT\0" // IR(7883, 25)
  "PrimitiveLineIndicesEXT\0" // IR(7908, 24)
  "PrimitiveTriangleIndicesEXT\0" // IR(7932, 28)
  "CullPrimitiveEXT\0" // IR(7960, 17)
  "LaunchIdKHR\0" // IR(7977, 12)
  "LaunchIdNV\0" // IR(7989, 11)
  "LaunchSizeKHR\0" // IR(8000, 14)
  "LaunchSizeNV\0" // IR(8014, 13)
  "WorldRayOriginKHR\0" // IR(8027, 18)
  "WorldRayOriginNV\0" // IR(8045, 17)
  "WorldRayDirectionKHR\0" // IR(8062, 21)
  "WorldRayDirectionNV\0" // IR(8083, 20)
  "ObjectRayOriginKHR\0" // IR(8103, 19)
  "ObjectRayOriginNV\0" // IR(8122, 18)
  "ObjectRayDirectionKHR\0" // IR(8140, 22)
  "ObjectRayDirectionNV\0" // IR(8162, 21)
  "RayTminKHR\0" // IR(8183, 11)
  "RayTminNV\0" // IR(8194, 10)
  "RayTmaxKHR\0" // IR(8204, 11)
  "RayTmaxNV\0" // IR(8215, 10)
  "InstanceCustomIndexKHR\0" // IR(8225, 23)
  "InstanceCustomIndexNV\0" // IR(8248, 22)
  "ObjectToWorldKHR\0" // IR(8270, 17)
  "ObjectToWorldNV\0" // IR(8287, 16)
  "WorldToObjectKHR\0" // IR(8303, 17)
  "WorldToObjectNV\0" // IR(8320, 16)
  "HitTNV\0" // IR(8336, 7)
  "HitKindKHR\0" // IR(8343, 11)
  "HitKindNV\0" // IR(8354, 10)
  "CurrentRayTimeNV\0" // IR(8364, 17)
  "RayTracingMotionBlurNV\0" // IR(8381, 23)
  "HitTriangleVertexPositionsKHR\0" // IR(8404, 30)
  "RayTracingPositionFetchKHR\0" // IR(8434, 27)
  "HitMicroTriangleVertexPositionsNV\0" // IR(8461, 34)
  "RayTracingDisplacementMicromapNV\0" // IR(8495, 33)
  "HitMicroTriangleVertexBarycentricsNV\0" // IR(8528, 37)
  "IncomingRayFlagsKHR\0" // IR(8565, 20)
  "IncomingRayFlagsNV\0" // IR(8585, 19)
  "RayGeometryIndexKHR\0" // IR(8604, 20)
  "HitIsSphereNV\0" // IR(8624, 14)
  "RayTracingSpheresGeometryNV\0" // IR(8638, 28)
  "HitIsLSSNV\0" // IR(8666, 11)
  "RayTracingLinearSweptSpheresGeometryNV\0" // IR(8677, 39)
  "HitSpherePositionNV\0" // IR(8716, 20)
  "WarpsPerSMNV\0" // IR(8736, 13)
  "ShaderSMBuiltinsNV\0" // IR(8749, 19)
  "SMCountNV\0" // IR(8768, 10)
  "WarpIDNV\0" // IR(8778, 9)
  "SMIDNV\0" // IR(8787, 7)
  "HitLSSPositionsNV\0" // IR(8794, 18)
  "HitKindFrontFacingMicroTriangleNV\0" // IR(8812, 34)
  "HitKindBackFacingMicroTriangleNV\0" // IR(8846, 33)
  "HitSphereRadiusNV\0" // IR(8879, 18)
  "HitLSSRadiiNV\0" // IR(8897, 14)
  "ClusterIDNV\0" // IR(8911, 12)
  "RayTracingClusterAccelerationStructureNV\0" // IR(8923, 41)
  "CullMaskKHR\0" // IR(8964, 12)
  "RayCullMaskKHR\0" // IR(8976, 15)
  "Matrix\0" // IR(8991, 7)
  "Linkage\0" // IR(8998, 8)
  "Vector16\0" // IR(9006, 9)
  "Float16Buffer\0" // IR(9015, 14)
  "Float16\0" // IR(9029, 8)
  "Float64\0" // IR(9037, 8)
  "Int64\0" // IR(9045, 6)
  "Int64Atomics\0" // IR(9051, 13)
  "ImageBasic\0" // IR(9064, 11)
  "ImageReadWrite\0" // IR(9075, 15)
  "ImageMipmap\0" // IR(9090, 12)
  "Pipes\0" // IR(9102, 6)
  "Groups\0" // IR(9108, 7)
  "DeviceEnqueue\0" // IR(9115, 14)
  "LiteralSampler\0" // IR(9129, 15)
  "AtomicStorage\0" // IR(9144, 14)
  "Int16\0" // IR(9158, 6)
  "TessellationPointSize\0" // IR(9164, 22)
  "GeometryPointSize\0" // IR(9186, 18)
  "ImageGatherExtended\0" // IR(9204, 20)
  "StorageImageMultisample\0" // IR(9224, 24)
  "UniformBufferArrayDynamicIndexing\0" // IR(9248, 34)
  "SampledImageArrayDynamicIndexing\0" // IR(9282, 33)
  "StorageBufferArrayDynamicIndexing\0" // IR(9315, 34)
  "StorageImageArrayDynamicIndexing\0" // IR(9349, 33)
  "ImageCubeArray\0" // IR(9382, 15)
  "SampledCubeArray\0" // IR(9397, 17)
  "ImageRect\0" // IR(9414, 10)
  "SampledRect\0" // IR(9424, 12)
  "GenericPointer\0" // IR(9436, 15)
  "Int8\0" // IR(9451, 5)
  "InputAttachment\0" // IR(9456, 16)
  "SparseResidency\0" // IR(9472, 16)
  "MinLod\0" // IR(9488, 7)
  "Sampled1D\0" // IR(9495, 10)
  "Image1D\0" // IR(9505, 8)
  "SampledBuffer\0" // IR(9513, 14)
  "ImageBuffer\0" // IR(9527, 12)
  "ImageMSArray\0" // IR(9539, 13)
  "StorageImageExtendedFormats\0" // IR(9552, 28)
  "ImageQuery\0" // IR(9580, 11)
  "DerivativeControl\0" // IR(9591, 18)
  "InterpolationFunction\0" // IR(9609, 22)
  "TransformFeedback\0" // IR(9631, 18)
  "GeometryStreams\0" // IR(9649, 16)
  "StorageImageReadWithoutFormat\0" // IR(9665, 30)
  "StorageImageWriteWithoutFormat\0" // IR(9695, 31)
  "SubgroupDispatch\0" // IR(9726, 17)
  "NamedBarrier\0" // IR(9743, 13)
  "PipeStorage\0" // IR(9756, 12)
  "GroupNonUniformVote\0" // IR(9768, 20)
  "GroupNonUniformArithmetic\0" // IR(9788, 26)
  "GroupNonUniformShuffle\0" // IR(9814, 23)
  "GroupNonUniformShuffleRelative\0" // IR(9837, 31)
  "GroupNonUniformClustered\0" // IR(9868, 25)
  "GroupNonUniformQuad\0" // IR(9893, 20)
  "UniformDecoration\0" // IR(9913, 18)
  "TileImageColorReadAccessEXT\0" // IR(9931, 28)
  "TileImageDepthReadAccessEXT\0" // IR(9959, 28)
  "TileImageStencilReadAccessEXT\0" // IR(9987, 30)
  "TensorsARM\0" // IR(10017, 11)
  "StorageTensorArrayDynamicIndexingARM\0" // IR(10028, 37)
  "StorageTensorArrayNonUniformIndexingARM\0" // IR(10065, 40)
  "GraphARM\0" // IR(10105, 9)
  "CooperativeMatrixLayoutsARM\0" // IR(10114, 28)
  "Float8EXT\0" // IR(10142, 10)
  "Float8CooperativeMatrixEXT\0" // IR(10152, 27)
  "CooperativeMatrixKHR\0" // IR(10179, 21)
  "WorkgroupMemoryExplicitLayoutKHR\0" // IR(10200, 33)
  "WorkgroupMemoryExplicitLayout8BitAccessKHR\0" // IR(10233, 43)
  "WorkgroupMemoryExplicitLayout16BitAccessKHR\0" // IR(10276, 44)
  "SubgroupVoteKHR\0" // IR(10320, 16)
  "StorageBuffer16BitAccess\0" // IR(10336, 25)
  "StorageUniformBufferBlock16\0" // IR(10361, 28)
  "UniformAndStorageBuffer16BitAccess\0" // IR(10389, 35)
  "StorageUniform16\0" // IR(10424, 17)
  "StoragePushConstant16\0" // IR(10441, 22)
  "StorageInputOutput16\0" // IR(10463, 21)
  "VariablePointersStorageBuffer\0" // IR(10484, 30)
  "VariablePointers\0" // IR(10514, 17)
  "AtomicStorageOps\0" // IR(10531, 17)
  "SampleMaskPostDepthCoverage\0" // IR(10548, 28)
  "StorageBuffer8BitAccess\0" // IR(10576, 24)
  "UniformAndStorageBuffer8BitAccess\0" // IR(10600, 34)
  "StoragePushConstant8\0" // IR(10634, 21)
  "DenormPreserve\0" // IR(10655, 15)
  "DenormFlushToZero\0" // IR(10670, 18)
  "SignedZeroInfNanPreserve\0" // IR(10688, 25)
  "RoundingModeRTE\0" // IR(10713, 16)
  "RoundingModeRTZ\0" // IR(10729, 16)
  "RayQueryProvisionalKHR\0" // IR(10745, 23)
  "RayQueryKHR\0" // IR(10768, 12)
  "UntypedPointersKHR\0" // IR(10780, 19)
  "RayTraversalPrimitiveCullingKHR\0" // IR(10799, 32)
  "TextureSampleWeightedQCOM\0" // IR(10831, 26)
  "TextureBoxFilterQCOM\0" // IR(10857, 21)
  "TextureBlockMatchQCOM\0" // IR(10878, 22)
  "CooperativeMatrixConversionQCOM\0" // IR(10900, 32)
  "TextureBlockMatch2QCOM\0" // IR(10932, 23)
  "Float16ImageAMD\0" // IR(10955, 16)
  "ImageGatherBiasLodAMD\0" // IR(10971, 22)
  "FragmentMaskAMD\0" // IR(10993, 16)
  "ImageReadWriteLodAMD\0" // IR(11009, 21)
  "Int64ImageEXT\0" // IR(11030, 14)
  "ShaderClockKHR\0" // IR(11044, 15)
  "QuadControlKHR\0" // IR(11059, 15)
  "Int4TypeINTEL\0" // IR(11074, 14)
  "Int4CooperativeMatrixINTEL\0" // IR(11088, 27)
  "BFloat16TypeKHR\0" // IR(11115, 16)
  "BFloat16DotProductKHR\0" // IR(11131, 22)
  "BFloat16CooperativeMatrixKHR\0" // IR(11153, 29)
  "AbortKHR\0" // IR(11182, 9)
  "ConstantDataKHR\0" // IR(11191, 16)
  "PoisonFreezeKHR\0" // IR(11207, 16)
  "WeakLinkageAMD\0" // IR(11223, 15)
  "SampleMaskOverrideCoverageNV\0" // IR(11238, 29)
  "GeometryShaderPassthroughNV\0" // IR(11267, 28)
  "ShaderViewportIndexLayerNV\0" // IR(11295, 27)
  "ImageFootprintNV\0" // IR(11322, 17)
  "FragmentBarycentricNV\0" // IR(11339, 22)
  "ComputeDerivativeGroupQuadsKHR\0" // IR(11361, 31)
  "ComputeDerivativeGroupQuadsNV\0" // IR(11392, 30)
  "ShadingRateNV\0" // IR(11422, 14)
  "GroupNonUniformPartitionedEXT\0" // IR(11436, 30)
  "GroupNonUniformPartitionedNV\0" // IR(11466, 29)
  "ShaderNonUniform\0" // IR(11495, 17)
  "ShaderNonUniformEXT\0" // IR(11512, 20)
  "RuntimeDescriptorArray\0" // IR(11532, 23)
  "RuntimeDescriptorArrayEXT\0" // IR(11555, 26)
  "InputAttachmentArrayDynamicIndexing\0" // IR(11581, 36)
  "InputAttachmentArrayDynamicIndexingEXT\0" // IR(11617, 39)
  "UniformTexelBufferArrayDynamicIndexing\0" // IR(11656, 39)
  "UniformTexelBufferArrayDynamicIndexingEXT\0" // IR(11695, 42)
  "StorageTexelBufferArrayDynamicIndexing\0" // IR(11737, 39)
  "StorageTexelBufferArrayDynamicIndexingEXT\0" // IR(11776, 42)
  "UniformBufferArrayNonUniformIndexing\0" // IR(11818, 37)
  "UniformBufferArrayNonUniformIndexingEXT\0" // IR(11855, 40)
  "SampledImageArrayNonUniformIndexing\0" // IR(11895, 36)
  "SampledImageArrayNonUniformIndexingEXT\0" // IR(11931, 39)
  "StorageBufferArrayNonUniformIndexing\0" // IR(11970, 37)
  "StorageBufferArrayNonUniformIndexingEXT\0" // IR(12007, 40)
  "StorageImageArrayNonUniformIndexing\0" // IR(12047, 36)
  "StorageImageArrayNonUniformIndexingEXT\0" // IR(12083, 39)
  "InputAttachmentArrayNonUniformIndexing\0" // IR(12122, 39)
  "InputAttachmentArrayNonUniformIndexingEXT\0" // IR(12161, 42)
  "UniformTexelBufferArrayNonUniformIndexing\0" // IR(12203, 42)
  "UniformTexelBufferArrayNonUniformIndexingEXT\0" // IR(12245, 45)
  "StorageTexelBufferArrayNonUniformIndexing\0" // IR(12290, 42)
  "StorageTexelBufferArrayNonUniformIndexingEXT\0" // IR(12332, 45)
  "VulkanMemoryModel\0" // IR(12377, 18)
  "VulkanMemoryModelKHR\0" // IR(12395, 21)
  "VulkanMemoryModelDeviceScope\0" // IR(12416, 29)
  "VulkanMemoryModelDeviceScopeKHR\0" // IR(12445, 32)
  "PhysicalStorageBufferAddressesEXT\0" // IR(12477, 34)
  "ComputeDerivativeGroupLinearKHR\0" // IR(12511, 32)
  "ComputeDerivativeGroupLinearNV\0" // IR(12543, 31)
  "RayTracingProvisionalKHR\0" // IR(12574, 25)
  "CooperativeMatrixNV\0" // IR(12599, 20)
  "FragmentShaderSampleInterlockEXT\0" // IR(12619, 33)
  "FragmentShaderShadingRateInterlockEXT\0" // IR(12652, 38)
  "FragmentShaderPixelInterlockEXT\0" // IR(12690, 32)
  "DemoteToHelperInvocation\0" // IR(12722, 25)
  "DemoteToHelperInvocationEXT\0" // IR(12747, 28)
  "DisplacementMicromapNV\0" // IR(12775, 23)
  "RayTracingOpacityMicromapKHR\0" // IR(12798, 29)
  "RayTracingOpacityMicromapEXT\0" // IR(12827, 29)
  "ShaderInvocationReorderNV\0" // IR(12856, 26)
  "ShaderInvocationReorderEXT\0" // IR(12882, 27)
  "BindlessTextureNV\0" // IR(12909, 18)
  "RayQueryPositionFetchKHR\0" // IR(12927, 25)
  "CooperativeVectorNV\0" // IR(12952, 20)
  "AtomicFloat16VectorNV\0" // IR(12972, 22)
  "RawAccessChainsNV\0" // IR(12994, 18)
  "PushConstantBanksNV\0" // IR(13012, 20)
  "LongVectorEXT\0" // IR(13032, 14)
  "Shader64BitIndexingEXT\0" // IR(13046, 23)
  "CooperativeMatrixReductionsNV\0" // IR(13069, 30)
  "CooperativeMatrixConversionsNV\0" // IR(13099, 31)
  "CooperativeMatrixPerElementOperationsNV\0" // IR(13130, 40)
  "CooperativeMatrixTensorAddressingNV\0" // IR(13170, 36)
  "CooperativeMatrixBlockLoadsNV\0" // IR(13206, 30)
  "CooperativeVectorTrainingNV\0" // IR(13236, 28)
  "TensorAddressingNV\0" // IR(13264, 19)
  "SubgroupShuffleINTEL\0" // IR(13283, 21)
  "SubgroupBufferBlockIOINTEL\0" // IR(13304, 27)
  "SubgroupImageBlockIOINTEL\0" // IR(13331, 26)
  "SubgroupImageMediaBlockIOINTEL\0" // IR(13357, 31)
  "RoundToInfinityINTEL\0" // IR(13388, 21)
  "FloatingPointModeINTEL\0" // IR(13409, 23)
  "IntegerFunctions2INTEL\0" // IR(13432, 23)
  "FunctionPointersINTEL\0" // IR(13455, 22)
  "IndirectReferencesINTEL\0" // IR(13477, 24)
  "AsmINTEL\0" // IR(13501, 9)
  "AtomicFloat32MinMaxEXT\0" // IR(13510, 23)
  "AtomicFloat64MinMaxEXT\0" // IR(13533, 23)
  "AtomicFloat16MinMaxEXT\0" // IR(13556, 23)
  "VectorComputeINTEL\0" // IR(13579, 19)
  "VectorAnyINTEL\0" // IR(13598, 15)
  "ExpectAssumeKHR\0" // IR(13613, 16)
  "SubgroupAvcMotionEstimationINTEL\0" // IR(13629, 33)
  "SubgroupAvcMotionEstimationIntraINTEL\0" // IR(13662, 38)
  "SubgroupAvcMotionEstimationChromaINTEL\0" // IR(13700, 39)
  "VariableLengthArrayINTEL\0" // IR(13739, 25)
  "FunctionFloatControlINTEL\0" // IR(13764, 26)
  "FPGAMemoryAttributesALTERA\0" // IR(13790, 27)
  "FPGAMemoryAttributesINTEL\0" // IR(13817, 26)
  "FPFastMathModeINTEL\0" // IR(13843, 20)
  "ArbitraryPrecisionIntegersALTERA\0" // IR(13863, 33)
  "ArbitraryPrecisionIntegersINTEL\0" // IR(13896, 32)
  "ArbitraryPrecisionFloatingPointALTERA\0" // IR(13928, 38)
  "ArbitraryPrecisionFloatingPointINTEL\0" // IR(13966, 37)
  "UnstructuredLoopControlsINTEL\0" // IR(14003, 30)
  "FPGALoopControlsALTERA\0" // IR(14033, 23)
  "FPGALoopControlsINTEL\0" // IR(14056, 22)
  "KernelAttributesINTEL\0" // IR(14078, 22)
  "FPGAKernelAttributesINTEL\0" // IR(14100, 26)
  "FPGAMemoryAccessesALTERA\0" // IR(14126, 25)
  "FPGAMemoryAccessesINTEL\0" // IR(14151, 24)
  "FPGAClusterAttributesALTERA\0" // IR(14175, 28)
  "FPGAClusterAttributesINTEL\0" // IR(14203, 27)
  "LoopFuseALTERA\0" // IR(14230, 15)
  "LoopFuseINTEL\0" // IR(14245, 14)
  "FPGADSPControlALTERA\0" // IR(14259, 21)
  "FPGADSPControlINTEL\0" // IR(14280, 20)
  "MemoryAccessAliasingINTEL\0" // IR(14300, 26)
  "FPGAInvocationPipeliningAttributesALTERA\0" // IR(14326, 41)
  "FPGAInvocationPipeliningAttributesINTEL\0" // IR(14367, 40)
  "FPGABufferLocationALTERA\0" // IR(14407, 25)
  "FPGABufferLocationINTEL\0" // IR(14432, 24)
  "ArbitraryPrecisionFixedPointALTERA\0" // IR(14456, 35)
  "ArbitraryPrecisionFixedPointINTEL\0" // IR(14491, 34)
  "USMStorageClassesALTERA\0" // IR(14525, 24)
  "USMStorageClassesINTEL\0" // IR(14549, 23)
  "RuntimeAlignedAttributeALTERA\0" // IR(14572, 30)
  "RuntimeAlignedAttributeINTEL\0" // IR(14602, 29)
  "IOPipesALTERA\0" // IR(14631, 14)
  "IOPipesINTEL\0" // IR(14645, 13)
  "BlockingPipesALTERA\0" // IR(14658, 20)
  "BlockingPipesINTEL\0" // IR(14678, 19)
  "FPGARegALTERA\0" // IR(14697, 14)
  "FPGARegINTEL\0" // IR(14711, 13)
  "DotProductInputAll\0" // IR(14724, 19)
  "DotProductInputAllKHR\0" // IR(14743, 22)
  "DotProductInput4x8Bit\0" // IR(14765, 22)
  "DotProductInput4x8BitKHR\0" // IR(14787, 25)
  "DotProductInput4x8BitPacked\0" // IR(14812, 28)
  "DotProductInput4x8BitPackedKHR\0" // IR(14840, 31)
  "DotProduct\0" // IR(14871, 11)
  "DotProductKHR\0" // IR(14882, 14)
  "ReplicatedCompositesEXT\0" // IR(14896, 24)
  "BitInstructions\0" // IR(14920, 16)
  "GroupNonUniformRotateKHR\0" // IR(14936, 25)
  "FloatControls2\0" // IR(14961, 15)
  "FMAKHR\0" // IR(14976, 7)
  "RayTracingOpacityMicromapExecutionModeKHR\0" // IR(14983, 42)
  "AtomicFloat32AddEXT\0" // IR(15025, 20)
  "AtomicFloat64AddEXT\0" // IR(15045, 20)
  "LongCompositesINTEL\0" // IR(15065, 20)
  "OptNoneEXT\0" // IR(15085, 11)
  "OptNoneINTEL\0" // IR(15096, 13)
  "AtomicFloat16AddEXT\0" // IR(15109, 20)
  "DebugInfoModuleINTEL\0" // IR(15129, 21)
  "BFloat16ConversionINTEL\0" // IR(15150, 24)
  "SplitBarrierINTEL\0" // IR(15174, 18)
  "ArithmeticFenceEXT\0" // IR(15192, 19)
  "FPGAClusterAttributesV2ALTERA\0" // IR(15211, 30)
  "FPGAClusterAttributesV2INTEL\0" // IR(15241, 29)
  "FPGAKernelAttributesv2INTEL\0" // IR(15270, 28)
  "TaskSequenceALTERA\0" // IR(15298, 19)
  "TaskSequenceINTEL\0" // IR(15317, 18)
  "FPMaxErrorINTEL\0" // IR(15335, 16)
  "FPGALatencyControlALTERA\0" // IR(15351, 25)
  "FPGALatencyControlINTEL\0" // IR(15376, 24)
  "FPGAArgumentInterfacesALTERA\0" // IR(15400, 29)
  "FPGAArgumentInterfacesINTEL\0" // IR(15429, 28)
  "GlobalVariableHostAccessINTEL\0" // IR(15457, 30)
  "GlobalVariableFPGADecorationsALTERA\0" // IR(15487, 36)
  "GlobalVariableFPGADecorationsINTEL\0" // IR(15523, 35)
  "SubgroupBufferPrefetchINTEL\0" // IR(15558, 28)
  "Subgroup2DBlockIOINTEL\0" // IR(15586, 23)
  "Subgroup2DBlockTransformINTEL\0" // IR(15609, 30)
  "Subgroup2DBlockTransposeINTEL\0" // IR(15639, 30)
  "SubgroupMatrixMultiplyAccumulateINTEL\0" // IR(15669, 38)
  "TernaryBitwiseFunctionINTEL\0" // IR(15707, 28)
  "UntypedVariableLengthArrayINTEL\0" // IR(15735, 32)
  "SpecConditionalINTEL\0" // IR(15767, 21)
  "FunctionVariantsINTEL\0" // IR(15788, 22)
  "PredicatedIOINTEL\0" // IR(15810, 18)
  "RoundedDivideSqrtINTEL\0" // IR(15828, 23)
  "GroupUniformArithmeticKHR\0" // IR(15851, 26)
  "TensorFloat32RoundingINTEL\0" // IR(15877, 27)
  "MaskedGatherScatterINTEL\0" // IR(15904, 25)
  "CacheControlsINTEL\0" // IR(15929, 19)
  "RegisterLimitsINTEL\0" // IR(15948, 20)
  "BindlessImagesINTEL\0" // IR(15968, 20)
  "DotProductFloat16AccFloat32VALVE\0" // IR(15988, 33)
  "DotProductFloat16AccFloat16VALVE\0" // IR(16021, 33)
  "DotProductBFloat16AccVALVE\0" // IR(16054, 27)
  "DotProductFloat8AccFloat32VALVE\0" // IR(16081, 32)
  "Unspecified\0" // IR(16113, 12)
  "Address\0" // IR(16125, 8)
  "Boolean\0" // IR(16133, 8)
  "Float\0" // IR(16141, 6)
  "Signed\0" // IR(16147, 7)
  "SignedChar\0" // IR(16154, 11)
  "Unsigned\0" // IR(16165, 9)
  "UnsignedChar\0" // IR(16174, 13)
  "Class\0" // IR(16187, 6)
  "Structure\0" // IR(16193, 10)
  "Union\0" // IR(16203, 6)
  "ImportedModule\0" // IR(16209, 15)
  "ImportedDeclaration\0" // IR(16224, 20)
  "None\0" // IR(16244, 5)
  "FlagIsProtected\0" // IR(16249, 16)
  "FlagIsPrivate\0" // IR(16265, 14)
  "FlagIsPublic\0" // IR(16279, 13)
  "FlagIsLocal\0" // IR(16292, 12)
  "FlagIsDefinition\0" // IR(16304, 17)
  "FlagFwdDecl\0" // IR(16321, 12)
  "FlagArtificial\0" // IR(16333, 15)
  "FlagExplicit\0" // IR(16348, 13)
  "FlagPrototyped\0" // IR(16361, 15)
  "FlagObjectPointer\0" // IR(16376, 18)
  "FlagStaticMember\0" // IR(16394, 17)
  "FlagIndirectVariable\0" // IR(16411, 21)
  "FlagLValueReference\0" // IR(16432, 20)
  "FlagRValueReference\0" // IR(16452, 20)
  "FlagIsOptimized\0" // IR(16472, 16)
  "FlagIsEnumClass\0" // IR(16488, 16)
  "FlagTypePassByValue\0" // IR(16504, 20)
  "FlagTypePassByReference\0" // IR(16524, 24)
  "Deref\0" // IR(16548, 6)
  "Plus\0" // IR(16554, 5)
  "Minus\0" // IR(16559, 6)
  "SPV_OPERAND_TYPE_LITERAL_INTEGER\0" // IR(16565, 33)
  "PlusUconst\0" // IR(16598, 11)
  "BitPiece\0" // IR(16609, 9)
  "Swap\0" // IR(16618, 5)
  "Xderef\0" // IR(16623, 7)
  "StackValue\0" // IR(16630, 11)
  "Constu\0" // IR(16641, 7)
  "Fragment\0" // IR(16648, 9)
  "ConstType\0" // IR(16657, 10)
  "VolatileType\0" // IR(16667, 13)
  "RestrictType\0" // IR(16680, 13)
  "AtomicType\0" // IR(16693, 11)
  "Float16NV\0" // IR(16704, 10)
  "Float32NV\0" // IR(16714, 10)
  "Float64NV\0" // IR(16724, 10)
  "SignedInt8NV\0" // IR(16734, 13)
  "SignedInt16NV\0" // IR(16747, 14)
  "SignedInt32NV\0" // IR(16761, 14)
  "SignedInt64NV\0" // IR(16775, 14)
  "UnsignedInt8NV\0" // IR(16789, 15)
  "UnsignedInt16NV\0" // IR(16804, 16)
  "UnsignedInt32NV\0" // IR(16820, 16)
  "UnsignedInt64NV\0" // IR(16836, 16)
  "SignedInt8PackedNV\0" // IR(16852, 19)
  "UnsignedInt8PackedNV\0" // IR(16871, 21)
  "FloatE4M3NV\0" // IR(16892, 12)
  "FloatE5M2NV\0" // IR(16904, 12)
  "RowMajorKHR\0" // IR(16916, 12)
  "ColumnMajorKHR\0" // IR(16928, 15)
  "RowBlockedInterleavedARM\0" // IR(16943, 25)
  "ColumnBlockedInterleavedARM\0" // IR(16968, 28)
  "NoneKHR\0" // IR(16996, 8)
  "MatrixASignedComponentsKHR\0" // IR(17004, 27)
  "MatrixBSignedComponentsKHR\0" // IR(17031, 27)
  "MatrixCSignedComponentsKHR\0" // IR(17058, 27)
  "MatrixResultSignedComponentsKHR\0" // IR(17085, 32)
  "SaturatingAccumulationKHR\0" // IR(17117, 26)
  "Row\0" // IR(17143, 4)
  "Column\0" // IR(17147, 7)
  "2x2\0" // IR(17154, 4)
  "MatrixAKHR\0" // IR(17158, 11)
  "MatrixBKHR\0" // IR(17169, 11)
  "MatrixAccumulatorKHR\0" // IR(17180, 21)
  "RowMajorNV\0" // IR(17201, 11)
  "ColumnMajorNV\0" // IR(17212, 14)
  "InferencingOptimalNV\0" // IR(17226, 21)
  "TrainingOptimalNV\0" // IR(17247, 18)
  "RelaxedPrecision\0" // IR(17265, 17)
  "SpecId\0" // IR(17282, 7)
  "Block\0" // IR(17289, 6)
  "BufferBlock\0" // IR(17295, 12)
  "RowMajor\0" // IR(17307, 9)
  "ColMajor\0" // IR(17316, 9)
  "ArrayStride\0" // IR(17325, 12)
  "MatrixStride\0" // IR(17337, 13)
  "GLSLShared\0" // IR(17350, 11)
  "GLSLPacked\0" // IR(17361, 11)
  "CPacked\0" // IR(17372, 8)
  "SPV_OPERAND_TYPE_BUILT_IN\0" // IR(17380, 26)
  "BuiltIn\0" // IR(17406, 8)
  "NoPerspective\0" // IR(17414, 14)
  "Flat\0" // IR(17428, 5)
  "Patch\0" // IR(17433, 6)
  "Centroid\0" // IR(17439, 9)
  "Sample\0" // IR(17448, 7)
  "Invariant\0" // IR(17455, 10)
  "Restrict\0" // IR(17465, 9)
  "Aliased\0" // IR(17474, 8)
  "Volatile\0" // IR(17482, 9)
  "Constant\0" // IR(17491, 9)
  "Coherent\0" // IR(17500, 9)
  "NonWritable\0" // IR(17509, 12)
  "NonReadable\0" // IR(17521, 12)
  "Uniform\0" // IR(17533, 8)
  "SPV_OPERAND_TYPE_SCOPE_ID\0" // IR(17541, 26)
  "UniformId\0" // IR(17567, 10)
  "SaturatedConversion\0" // IR(17577, 20)
  "Stream\0" // IR(17597, 7)
  "Location\0" // IR(17604, 9)
  "Component\0" // IR(17613, 10)
  "Index\0" // IR(17623, 6)
  "Binding\0" // IR(17629, 8)
  "DescriptorSet\0" // IR(17637, 14)
  "Offset\0" // IR(17651, 7)
  "XfbBuffer\0" // IR(17658, 10)
  "XfbStride\0" // IR(17668, 10)
  "SPV_OPERAND_TYPE_FUNCTION_PARAMETER_ATTRIBUTE\0" // IR(17678, 46)
  "FuncParamAttr\0" // IR(17724, 14)
  "SPV_OPERAND_TYPE_FP_ROUNDING_MODE\0" // IR(17738, 34)
  "FPRoundingMode\0" // IR(17772, 15)
  "SPV_OPERAND_TYPE_FP_FAST_MATH_MODE\0" // IR(17787, 35)
  "FPFastMathMode\0" // IR(17822, 15)
  "SPV_OPERAND_TYPE_LITERAL_STRING\0" // IR(17837, 32)
  "SPV_OPERAND_TYPE_LINKAGE_TYPE\0" // IR(17869, 30)
  "LinkageAttributes\0" // IR(17899, 18)
  "NoContraction\0" // IR(17917, 14)
  "InputAttachmentIndex\0" // IR(17931, 21)
  "Alignment\0" // IR(17952, 10)
  "MaxByteOffset\0" // IR(17962, 14)
  "SPV_OPERAND_TYPE_ID\0" // IR(17976, 20)
  "AlignmentId\0" // IR(17996, 12)
  "MaxByteOffsetId\0" // IR(18008, 16)
  "SaturatedToLargestFloat8NormalConversionEXT\0" // IR(18024, 44)
  "NoSignedWrap\0" // IR(18068, 13)
  "NoUnsignedWrap\0" // IR(18081, 15)
  "WeightTextureQCOM\0" // IR(18096, 18)
  "BlockMatchTextureQCOM\0" // IR(18114, 22)
  "BlockMatchSamplerQCOM\0" // IR(18136, 22)
  "ExplicitInterpAMD\0" // IR(18158, 18)
  "NodeSharesPayloadLimitsWithAMDX\0" // IR(18176, 32)
  "NodeMaxPayloadsAMDX\0" // IR(18208, 20)
  "TrackFinishWritingAMDX\0" // IR(18228, 23)
  "PayloadNodeNameAMDX\0" // IR(18251, 20)
  "PayloadNodeBaseIndexAMDX\0" // IR(18271, 25)
  "PayloadNodeSparseArrayAMDX\0" // IR(18296, 27)
  "PayloadNodeArraySizeAMDX\0" // IR(18323, 25)
  "PayloadDispatchIndirectAMDX\0" // IR(18348, 28)
  "ArrayStrideIdEXT\0" // IR(18376, 17)
  "OffsetIdEXT\0" // IR(18393, 12)
  "UTFEncodedKHR\0" // IR(18405, 14)
  "OverrideCoverageNV\0" // IR(18419, 19)
  "PassthroughNV\0" // IR(18438, 14)
  "ViewportRelativeNV\0" // IR(18452, 19)
  "SecondaryViewportRelativeNV\0" // IR(18471, 28)
  "PerPrimitiveEXT\0" // IR(18499, 16)
  "PerPrimitiveNV\0" // IR(18515, 15)
  "PerViewNV\0" // IR(18530, 10)
  "PerTaskNV\0" // IR(18540, 10)
  "PerVertexKHR\0" // IR(18550, 13)
  "PerVertexNV\0" // IR(18563, 12)
  "NonUniform\0" // IR(18575, 11)
  "NonUniformEXT\0" // IR(18586, 14)
  "RestrictPointer\0" // IR(18600, 16)
  "RestrictPointerEXT\0" // IR(18616, 19)
  "AliasedPointer\0" // IR(18635, 15)
  "AliasedPointerEXT\0" // IR(18650, 18)
  "MemberOffsetNV\0" // IR(18668, 15)
  "HitObjectShaderRecordBufferNV\0" // IR(18683, 30)
  "HitObjectShaderRecordBufferEXT\0" // IR(18713, 31)
  "BankNV\0" // IR(18744, 7)
  "BindlessSamplerNV\0" // IR(18751, 18)
  "BindlessImageNV\0" // IR(18769, 16)
  "BoundSamplerNV\0" // IR(18785, 15)
  "BoundImageNV\0" // IR(18800, 13)
  "SIMTCallINTEL\0" // IR(18813, 14)
  "ReferencedIndirectlyINTEL\0" // IR(18827, 26)
  "ClobberINTEL\0" // IR(18853, 13)
  "SideEffectsINTEL\0" // IR(18866, 17)
  "VectorComputeVariableINTEL\0" // IR(18883, 27)
  "FuncParamIOKindINTEL\0" // IR(18910, 21)
  "VectorComputeFunctionINTEL\0" // IR(18931, 27)
  "StackCallINTEL\0" // IR(18958, 15)
  "GlobalVariableOffsetINTEL\0" // IR(18973, 26)
  "CounterBuffer\0" // IR(18999, 14)
  "HlslCounterBufferGOOGLE\0" // IR(19013, 24)
  "UserSemantic\0" // IR(19037, 13)
  "HlslSemanticGOOGLE\0" // IR(19050, 19)
  "UserTypeGOOGLE\0" // IR(19069, 15)
  "FunctionRoundingModeINTEL\0" // IR(19084, 26)
  "SPV_OPERAND_TYPE_FPDENORM_MODE\0" // IR(19110, 31)
  "FunctionDenormModeINTEL\0" // IR(19141, 24)
  "RegisterALTERA\0" // IR(19165, 15)
  "RegisterINTEL\0" // IR(19180, 14)
  "MemoryALTERA\0" // IR(19194, 13)
  "MemoryINTEL\0" // IR(19207, 12)
  "NumbanksALTERA\0" // IR(19219, 15)
  "NumbanksINTEL\0" // IR(19234, 14)
  "BankwidthALTERA\0" // IR(19248, 16)
  "BankwidthINTEL\0" // IR(19264, 15)
  "MaxPrivateCopiesALTERA\0" // IR(19279, 23)
  "MaxPrivateCopiesINTEL\0" // IR(19302, 22)
  "SinglepumpALTERA\0" // IR(19324, 17)
  "SinglepumpINTEL\0" // IR(19341, 16)
  "DoublepumpALTERA\0" // IR(19357, 17)
  "DoublepumpINTEL\0" // IR(19374, 16)
  "MaxReplicatesALTERA\0" // IR(19390, 20)
  "MaxReplicatesINTEL\0" // IR(19410, 19)
  "SimpleDualPortALTERA\0" // IR(19429, 21)
  "SimpleDualPortINTEL\0" // IR(19450, 20)
  "MergeALTERA\0" // IR(19470, 12)
  "MergeINTEL\0" // IR(19482, 11)
  "SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER\0" // IR(19493, 42)
  "BankBitsALTERA\0" // IR(19535, 15)
  "BankBitsINTEL\0" // IR(19550, 14)
  "ForcePow2DepthALTERA\0" // IR(19564, 21)
  "ForcePow2DepthINTEL\0" // IR(19585, 20)
  "StridesizeALTERA\0" // IR(19605, 17)
  "StridesizeINTEL\0" // IR(19622, 16)
  "WordsizeALTERA\0" // IR(19638, 15)
  "WordsizeINTEL\0" // IR(19653, 14)
  "TrueDualPortALTERA\0" // IR(19667, 19)
  "TrueDualPortINTEL\0" // IR(19686, 18)
  "BurstCoalesceALTERA\0" // IR(19704, 20)
  "BurstCoalesceINTEL\0" // IR(19724, 19)
  "CacheSizeALTERA\0" // IR(19743, 16)
  "CacheSizeINTEL\0" // IR(19759, 15)
  "DontStaticallyCoalesceALTERA\0" // IR(19774, 29)
  "DontStaticallyCoalesceINTEL\0" // IR(19803, 28)
  "PrefetchALTERA\0" // IR(19831, 15)
  "PrefetchINTEL\0" // IR(19846, 14)
  "StallEnableALTERA\0" // IR(19860, 18)
  "StallEnableINTEL\0" // IR(19878, 17)
  "FuseLoopsInFunctionALTERA\0" // IR(19895, 26)
  "FuseLoopsInFunctionINTEL\0" // IR(19921, 25)
  "MathOpDSPModeALTERA\0" // IR(19946, 20)
  "MathOpDSPModeINTEL\0" // IR(19966, 19)
  "AliasScopeINTEL\0" // IR(19985, 16)
  "NoAliasINTEL\0" // IR(20001, 13)
  "InitiationIntervalALTERA\0" // IR(20014, 25)
  "InitiationIntervalINTEL\0" // IR(20039, 24)
  "MaxConcurrencyALTERA\0" // IR(20063, 21)
  "MaxConcurrencyINTEL\0" // IR(20084, 20)
  "PipelineEnableALTERA\0" // IR(20104, 21)
  "PipelineEnableINTEL\0" // IR(20125, 20)
  "BufferLocationALTERA\0" // IR(20145, 21)
  "BufferLocationINTEL\0" // IR(20166, 20)
  "IOPipeStorageALTERA\0" // IR(20186, 20)
  "IOPipeStorageINTEL\0" // IR(20206, 19)
  "SPV_OPERAND_TYPE_FPOPERATION_MODE\0" // IR(20225, 34)
  "FunctionFloatingPointModeINTEL\0" // IR(20259, 31)
  "SingleElementVectorINTEL\0" // IR(20290, 25)
  "VectorComputeCallableFunctionINTEL\0" // IR(20315, 35)
  "MediaBlockIOINTEL\0" // IR(20350, 18)
  "StallFreeALTERA\0" // IR(20368, 16)
  "StallFreeINTEL\0" // IR(20384, 15)
  "SPV_OPERAND_TYPE_LITERAL_FLOAT\0" // IR(20399, 31)
  "FPMaxErrorDecorationINTEL\0" // IR(20430, 26)
  "LatencyControlLabelALTERA\0" // IR(20456, 26)
  "LatencyControlLabelINTEL\0" // IR(20482, 25)
  "LatencyControlConstraintALTERA\0" // IR(20507, 31)
  "LatencyControlConstraintINTEL\0" // IR(20538, 30)
  "ConduitKernelArgumentALTERA\0" // IR(20568, 28)
  "ConduitKernelArgumentINTEL\0" // IR(20596, 27)
  "RegisterMapKernelArgumentALTERA\0" // IR(20623, 32)
  "RegisterMapKernelArgumentINTEL\0" // IR(20655, 31)
  "MMHostInterfaceAddressWidthALTERA\0" // IR(20686, 34)
  "MMHostInterfaceAddressWidthINTEL\0" // IR(20720, 33)
  "MMHostInterfaceDataWidthALTERA\0" // IR(20753, 31)
  "MMHostInterfaceDataWidthINTEL\0" // IR(20784, 30)
  "MMHostInterfaceLatencyALTERA\0" // IR(20814, 29)
  "MMHostInterfaceLatencyINTEL\0" // IR(20843, 28)
  "SPV_OPERAND_TYPE_ACCESS_QUALIFIER\0" // IR(20871, 34)
  "MMHostInterfaceReadWriteModeALTERA\0" // IR(20905, 35)
  "MMHostInterfaceReadWriteModeINTEL\0" // IR(20940, 34)
  "MMHostInterfaceMaxBurstALTERA\0" // IR(20974, 30)
  "MMHostInterfaceMaxBurstINTEL\0" // IR(21004, 29)
  "MMHostInterfaceWaitRequestALTERA\0" // IR(21033, 33)
  "MMHostInterfaceWaitRequestINTEL\0" // IR(21066, 32)
  "StableKernelArgumentALTERA\0" // IR(21098, 27)
  "StableKernelArgumentINTEL\0" // IR(21125, 26)
  "SPV_OPERAND_TYPE_HOST_ACCESS_QUALIFIER\0" // IR(21151, 39)
  "HostAccessINTEL\0" // IR(21190, 16)
  "SPV_OPERAND_TYPE_INITIALIZATION_MODE_QUALIFIER\0" // IR(21206, 47)
  "InitModeALTERA\0" // IR(21253, 15)
  "InitModeINTEL\0" // IR(21268, 14)
  "ImplementInRegisterMapALTERA\0" // IR(21282, 29)
  "ImplementInRegisterMapINTEL\0" // IR(21311, 28)
  "ConditionalINTEL\0" // IR(21339, 17)
  "SPV_OPERAND_TYPE_LOAD_CACHE_CONTROL\0" // IR(21356, 36)
  "CacheControlLoadINTEL\0" // IR(21392, 22)
  "SPV_OPERAND_TYPE_STORE_CACHE_CONTROL\0" // IR(21414, 37)
  "CacheControlStoreINTEL\0" // IR(21451, 23)
  "1D\0" // IR(21474, 3)
  "2D\0" // IR(21477, 3)
  "3D\0" // IR(21480, 3)
  "Cube\0" // IR(21483, 5)
  "Rect\0" // IR(21488, 5)
  "Buffer\0" // IR(21493, 7)
  "SubpassData\0" // IR(21500, 12)
  "TileImageDataEXT\0" // IR(21512, 17)
  "Invocations\0" // IR(21529, 12)
  "SpacingEqual\0" // IR(21541, 13)
  "SpacingFractionalEven\0" // IR(21554, 22)
  "SpacingFractionalOdd\0" // IR(21576, 21)
  "VertexOrderCw\0" // IR(21597, 14)
  "VertexOrderCcw\0" // IR(21611, 15)
  "PixelCenterInteger\0" // IR(21626, 19)
  "OriginUpperLeft\0" // IR(21645, 16)
  "OriginLowerLeft\0" // IR(21661, 16)
  "EarlyFragmentTests\0" // IR(21677, 19)
  "PointMode\0" // IR(21696, 10)
  "Xfb\0" // IR(21706, 4)
  "DepthReplacing\0" // IR(21710, 15)
  "DepthGreater\0" // IR(21725, 13)
  "DepthLess\0" // IR(21738, 10)
  "DepthUnchanged\0" // IR(21748, 15)
  "LocalSize\0" // IR(21763, 10)
  "LocalSizeHint\0" // IR(21773, 14)
  "InputPoints\0" // IR(21787, 12)
  "InputLines\0" // IR(21799, 11)
  "InputLinesAdjacency\0" // IR(21810, 20)
  "Triangles\0" // IR(21830, 10)
  "InputTrianglesAdjacency\0" // IR(21840, 24)
  "Quads\0" // IR(21864, 6)
  "Isolines\0" // IR(21870, 9)
  "OutputVertices\0" // IR(21879, 15)
  "OutputPoints\0" // IR(21894, 13)
  "OutputLineStrip\0" // IR(21907, 16)
  "OutputTriangleStrip\0" // IR(21923, 20)
  "VecTypeHint\0" // IR(21943, 12)
  "ContractionOff\0" // IR(21955, 15)
  "Initializer\0" // IR(21970, 12)
  "Finalizer\0" // IR(21982, 10)
  "SubgroupsPerWorkgroup\0" // IR(21992, 22)
  "SubgroupsPerWorkgroupId\0" // IR(22014, 24)
  "LocalSizeId\0" // IR(22038, 12)
  "LocalSizeHintId\0" // IR(22050, 16)
  "NonCoherentColorAttachmentReadEXT\0" // IR(22066, 34)
  "NonCoherentDepthAttachmentReadEXT\0" // IR(22100, 34)
  "NonCoherentStencilAttachmentReadEXT\0" // IR(22134, 36)
  "SubgroupUniformControlFlowKHR\0" // IR(22170, 30)
  "PostDepthCoverage\0" // IR(22200, 18)
  "NonCoherentTileAttachmentReadQCOM\0" // IR(22218, 34)
  "TileShadingRateQCOM\0" // IR(22252, 20)
  "EarlyAndLateFragmentTestsAMD\0" // IR(22272, 29)
  "StencilRefReplacingEXT\0" // IR(22301, 23)
  "CoalescingAMDX\0" // IR(22324, 15)
  "IsApiEntryAMDX\0" // IR(22339, 15)
  "MaxNodeRecursionAMDX\0" // IR(22354, 21)
  "StaticNumWorkgroupsAMDX\0" // IR(22375, 24)
  "MaxNumWorkgroupsAMDX\0" // IR(22399, 21)
  "StencilRefUnchangedFrontAMD\0" // IR(22420, 28)
  "StencilRefGreaterFrontAMD\0" // IR(22448, 26)
  "StencilRefLessFrontAMD\0" // IR(22474, 23)
  "StencilRefUnchangedBackAMD\0" // IR(22497, 27)
  "StencilRefGreaterBackAMD\0" // IR(22524, 25)
  "StencilRefLessBackAMD\0" // IR(22549, 22)
  "QuadDerivativesKHR\0" // IR(22571, 19)
  "RequireFullQuadsKHR\0" // IR(22590, 20)
  "SharesInputWithAMDX\0" // IR(22610, 20)
  "ArithmeticPoisonKHR\0" // IR(22630, 20)
  "OutputLinesEXT\0" // IR(22650, 15)
  "OutputLinesNV\0" // IR(22665, 14)
  "OutputPrimitivesEXT\0" // IR(22679, 20)
  "OutputPrimitivesNV\0" // IR(22699, 19)
  "DerivativeGroupQuadsKHR\0" // IR(22718, 24)
  "DerivativeGroupQuadsNV\0" // IR(22742, 23)
  "DerivativeGroupLinearKHR\0" // IR(22765, 25)
  "DerivativeGroupLinearNV\0" // IR(22790, 24)
  "OutputTrianglesEXT\0" // IR(22814, 19)
  "OutputTrianglesNV\0" // IR(22833, 18)
  "PixelInterlockOrderedEXT\0" // IR(22851, 25)
  "PixelInterlockUnorderedEXT\0" // IR(22876, 27)
  "SampleInterlockOrderedEXT\0" // IR(22903, 26)
  "SampleInterlockUnorderedEXT\0" // IR(22929, 28)
  "ShadingRateInterlockOrderedEXT\0" // IR(22957, 31)
  "ShadingRateInterlockUnorderedEXT\0" // IR(22988, 33)
  "SharedLocalMemorySizeINTEL\0" // IR(23021, 27)
  "RoundingModeRTPINTEL\0" // IR(23048, 21)
  "RoundingModeRTNINTEL\0" // IR(23069, 21)
  "FloatingPointModeALTINTEL\0" // IR(23090, 26)
  "FloatingPointModeIEEEINTEL\0" // IR(23116, 27)
  "MaxWorkgroupSizeINTEL\0" // IR(23143, 22)
  "MaxWorkDimINTEL\0" // IR(23165, 16)
  "NoGlobalOffsetINTEL\0" // IR(23181, 20)
  "NumSIMDWorkitemsINTEL\0" // IR(23201, 22)
  "SchedulerTargetFmaxMhzINTEL\0" // IR(23223, 28)
  "MaximallyReconvergesKHR\0" // IR(23251, 24)
  "FPFastMathDefault\0" // IR(23275, 18)
  "OpacityMicromapIdKHR\0" // IR(23293, 21)
  "StreamingInterfaceINTEL\0" // IR(23314, 24)
  "RegisterMapInterfaceINTEL\0" // IR(23338, 26)
  "NamedBarrierCountINTEL\0" // IR(23364, 23)
  "MaximumRegistersINTEL\0" // IR(23387, 22)
  "MaximumRegistersIdINTEL\0" // IR(23409, 24)
  "SPV_OPERAND_TYPE_NAMED_MAXIMUM_NUMBER_OF_REGISTERS\0" // IR(23433, 51)
  "NamedMaximumRegistersINTEL\0" // IR(23484, 27)
  "Vertex\0" // IR(23511, 7)
  "TessellationControl\0" // IR(23518, 20)
  "TessellationEvaluation\0" // IR(23538, 23)
  "GLCompute\0" // IR(23561, 10)
  "TaskNV\0" // IR(23571, 7)
  "MeshNV\0" // IR(23578, 7)
  "RayGenerationKHR\0" // IR(23585, 17)
  "RayGenerationNV\0" // IR(23602, 16)
  "IntersectionKHR\0" // IR(23618, 16)
  "IntersectionNV\0" // IR(23634, 15)
  "AnyHitKHR\0" // IR(23649, 10)
  "AnyHitNV\0" // IR(23659, 9)
  "ClosestHitKHR\0" // IR(23668, 14)
  "ClosestHitNV\0" // IR(23682, 13)
  "MissKHR\0" // IR(23695, 8)
  "MissNV\0" // IR(23703, 7)
  "CallableKHR\0" // IR(23710, 12)
  "CallableNV\0" // IR(23722, 11)
  "TaskEXT\0" // IR(23733, 8)
  "MeshEXT\0" // IR(23741, 8)
  "Preserve\0" // IR(23749, 9)
  "FlushToZero\0" // IR(23758, 12)
  "BFloat16KHR\0" // IR(23770, 12)
  "Float8E4M3EXT\0" // IR(23782, 14)
  "Float8E5M2EXT\0" // IR(23796, 14)
  "IEEE\0" // IR(23810, 5)
  "ALT\0" // IR(23815, 4)
  "NotNaN\0" // IR(23819, 7)
  "NotInf\0" // IR(23826, 7)
  "NSZ\0" // IR(23833, 4)
  "AllowRecip\0" // IR(23837, 11)
  "Fast\0" // IR(23848, 5)
  "AllowContract\0" // IR(23853, 14)
  "AllowContractFastINTEL\0" // IR(23867, 23)
  "AllowReassoc\0" // IR(23890, 13)
  "AllowReassocINTEL\0" // IR(23903, 18)
  "AllowTransform\0" // IR(23921, 15)
  "RTE\0" // IR(23936, 4)
  "RTZ\0" // IR(23940, 4)
  "RTP\0" // IR(23944, 4)
  "RTN\0" // IR(23948, 4)
  "Vertical2Pixels\0" // IR(23952, 16)
  "Vertical4Pixels\0" // IR(23968, 16)
  "Horizontal2Pixels\0" // IR(23984, 18)
  "Horizontal4Pixels\0" // IR(24002, 18)
  "Inline\0" // IR(24020, 7)
  "DontInline\0" // IR(24027, 11)
  "Pure\0" // IR(24038, 5)
  "Const\0" // IR(24043, 6)
  "Zext\0" // IR(24049, 5)
  "Sext\0" // IR(24054, 5)
  "ByVal\0" // IR(24059, 6)
  "Sret\0" // IR(24065, 5)
  "NoAlias\0" // IR(24070, 8)
  "NoCapture\0" // IR(24078, 10)
  "NoWrite\0" // IR(24088, 8)
  "NoReadWrite\0" // IR(24096, 12)
  "RuntimeAlignedALTERA\0" // IR(24108, 21)
  "RuntimeAlignedINTEL\0" // IR(24129, 20)
  "Reduce\0" // IR(24149, 7)
  "InclusiveScan\0" // IR(24156, 14)
  "ExclusiveScan\0" // IR(24170, 14)
  "ClusteredReduce\0" // IR(24184, 16)
  "PartitionedReduceEXT\0" // IR(24200, 21)
  "PartitionedReduceNV\0" // IR(24221, 20)
  "PartitionedInclusiveScanEXT\0" // IR(24241, 28)
  "PartitionedInclusiveScanNV\0" // IR(24269, 27)
  "PartitionedExclusiveScanEXT\0" // IR(24296, 28)
  "PartitionedExclusiveScanNV\0" // IR(24324, 27)
  "NoneINTEL\0" // IR(24351, 10)
  "ReadINTEL\0" // IR(24361, 10)
  "WriteINTEL\0" // IR(24371, 11)
  "ReadWriteINTEL\0" // IR(24382, 15)
  "Bias\0" // IR(24397, 5)
  "Lod\0" // IR(24402, 4)
  "Grad\0" // IR(24406, 5)
  "ConstOffset\0" // IR(24411, 12)
  "ConstOffsets\0" // IR(24423, 13)
  "MakeTexelAvailable\0" // IR(24436, 19)
  "MakeTexelAvailableKHR\0" // IR(24455, 22)
  "MakeTexelVisible\0" // IR(24477, 17)
  "MakeTexelVisibleKHR\0" // IR(24494, 20)
  "NonPrivateTexel\0" // IR(24514, 16)
  "NonPrivateTexelKHR\0" // IR(24530, 19)
  "VolatileTexel\0" // IR(24549, 14)
  "VolatileTexelKHR\0" // IR(24563, 17)
  "SignExtend\0" // IR(24580, 11)
  "ZeroExtend\0" // IR(24591, 11)
  "Nontemporal\0" // IR(24602, 12)
  "Offsets\0" // IR(24614, 8)
  "SnormInt8\0" // IR(24622, 10)
  "SnormInt16\0" // IR(24632, 11)
  "UnormInt8\0" // IR(24643, 10)
  "UnormInt16\0" // IR(24653, 11)
  "UnormShort565\0" // IR(24664, 14)
  "UnormShort555\0" // IR(24678, 14)
  "UnormInt101010\0" // IR(24692, 15)
  "SignedInt8\0" // IR(24707, 11)
  "SignedInt16\0" // IR(24718, 12)
  "SignedInt32\0" // IR(24730, 12)
  "UnsignedInt8\0" // IR(24742, 13)
  "UnsignedInt16\0" // IR(24755, 14)
  "UnsignedInt32\0" // IR(24769, 14)
  "HalfFloat\0" // IR(24783, 10)
  "UnormInt24\0" // IR(24793, 11)
  "UnormInt101010_2\0" // IR(24804, 17)
  "UnormInt10X6EXT\0" // IR(24821, 16)
  "UnsignedIntRaw10EXT\0" // IR(24837, 20)
  "UnsignedIntRaw12EXT\0" // IR(24857, 20)
  "UnormInt2_101010EXT\0" // IR(24877, 20)
  "UnsignedInt10X6EXT\0" // IR(24897, 19)
  "UnsignedInt12X4EXT\0" // IR(24916, 19)
  "UnsignedInt14X2EXT\0" // IR(24935, 19)
  "UnormInt12X4EXT\0" // IR(24954, 16)
  "UnormInt14X2EXT\0" // IR(24970, 16)
  "R\0" // IR(24986, 2)
  "A\0" // IR(24988, 2)
  "RG\0" // IR(24990, 3)
  "RA\0" // IR(24993, 3)
  "RGB\0" // IR(24996, 4)
  "RGBA\0" // IR(25000, 5)
  "BGRA\0" // IR(25005, 5)
  "ARGB\0" // IR(25010, 5)
  "Intensity\0" // IR(25015, 10)
  "Luminance\0" // IR(25025, 10)
  "Rx\0" // IR(25035, 3)
  "RGx\0" // IR(25038, 4)
  "RGBx\0" // IR(25042, 5)
  "Depth\0" // IR(25047, 6)
  "DepthStencil\0" // IR(25053, 13)
  "sRGB\0" // IR(25066, 5)
  "sRGBx\0" // IR(25071, 6)
  "sRGBA\0" // IR(25077, 6)
  "sBGRA\0" // IR(25083, 6)
  "ABGR\0" // IR(25089, 5)
  "InitOnDeviceReprogramALTERA\0" // IR(25094, 28)
  "InitOnDeviceReprogramINTEL\0" // IR(25122, 27)
  "InitOnDeviceResetALTERA\0" // IR(25149, 24)
  "InitOnDeviceResetINTEL\0" // IR(25173, 23)
  "NoWait\0" // IR(25196, 7)
  "WaitKernel\0" // IR(25203, 11)
  "WaitWorkGroup\0" // IR(25214, 14)
  "CmdExecTime\0" // IR(25228, 12)
  "MayUsePrintf\0" // IR(25240, 13)
  "Export\0" // IR(25253, 7)
  "Import\0" // IR(25260, 7)
  "LinkOnceODR\0" // IR(25267, 12)
  "WeakAMD\0" // IR(25279, 8)
  "UncachedINTEL\0" // IR(25287, 14)
  "CachedINTEL\0" // IR(25301, 12)
  "StreamingINTEL\0" // IR(25313, 15)
  "InvalidateAfterReadINTEL\0" // IR(25328, 25)
  "ConstCachedINTEL\0" // IR(25353, 17)
  "Unroll\0" // IR(25370, 7)
  "DontUnroll\0" // IR(25377, 11)
  "DependencyInfinite\0" // IR(25388, 19)
  "DependencyLength\0" // IR(25407, 17)
  "MinIterations\0" // IR(25424, 14)
  "MaxIterations\0" // IR(25438, 14)
  "IterationMultiple\0" // IR(25452, 18)
  "PeelCount\0" // IR(25470, 10)
  "PartialCount\0" // IR(25480, 13)
  "DependencyArrayALTERA\0" // IR(25493, 22)
  "DependencyArrayINTEL\0" // IR(25515, 21)
  "LoopCoalesceALTERA\0" // IR(25536, 19)
  "LoopCoalesceINTEL\0" // IR(25555, 18)
  "MaxInterleavingALTERA\0" // IR(25573, 22)
  "MaxInterleavingINTEL\0" // IR(25595, 21)
  "SpeculatedIterationsALTERA\0" // IR(25616, 27)
  "SpeculatedIterationsINTEL\0" // IR(25643, 26)
  "NoFusionALTERA\0" // IR(25669, 15)
  "NoFusionINTEL\0" // IR(25684, 14)
  "LoopCountALTERA\0" // IR(25698, 16)
  "LoopCountINTEL\0" // IR(25714, 15)
  "MaxReinvocationDelayALTERA\0" // IR(25729, 27)
  "MaxReinvocationDelayINTEL\0" // IR(25756, 26)
  "MatrixASignedComponentsINTEL\0" // IR(25782, 29)
  "MatrixBSignedComponentsINTEL\0" // IR(25811, 29)
  "MatrixCBFloat16INTEL\0" // IR(25840, 21)
  "MatrixResultBFloat16INTEL\0" // IR(25861, 26)
  "MatrixAPackedInt8INTEL\0" // IR(25887, 23)
  "MatrixBPackedInt8INTEL\0" // IR(25910, 23)
  "MatrixAPackedInt4INTEL\0" // IR(25933, 23)
  "MatrixBPackedInt4INTEL\0" // IR(25956, 23)
  "MatrixATF32INTEL\0" // IR(25979, 17)
  "MatrixBTF32INTEL\0" // IR(25996, 17)
  "MatrixAPackedFloat16INTEL\0" // IR(26013, 26)
  "MatrixBPackedFloat16INTEL\0" // IR(26039, 26)
  "MatrixAPackedBFloat16INTEL\0" // IR(26065, 27)
  "MatrixBPackedBFloat16INTEL\0" // IR(26092, 27)
  "Aligned\0" // IR(26119, 8)
  "MakePointerAvailable\0" // IR(26127, 21)
  "MakePointerAvailableKHR\0" // IR(26148, 24)
  "MakePointerVisible\0" // IR(26172, 19)
  "MakePointerVisibleKHR\0" // IR(26191, 22)
  "NonPrivatePointer\0" // IR(26213, 18)
  "NonPrivatePointerKHR\0" // IR(26231, 21)
  "AliasScopeINTELMask\0" // IR(26252, 20)
  "NoAliasINTELMask\0" // IR(26272, 17)
  "Simple\0" // IR(26289, 7)
  "GLSL450\0" // IR(26296, 8)
  "OpenCL\0" // IR(26304, 7)
  "Vulkan\0" // IR(26311, 7)
  "VulkanKHR\0" // IR(26318, 10)
  "Relaxed\0" // IR(26328, 8)
  "Acquire\0" // IR(26336, 8)
  "Release\0" // IR(26344, 8)
  "AcquireRelease\0" // IR(26352, 15)
  "SequentiallyConsistent\0" // IR(26367, 23)
  "UniformMemory\0" // IR(26390, 14)
  "SubgroupMemory\0" // IR(26404, 15)
  "WorkgroupMemory\0" // IR(26419, 16)
  "CrossWorkgroupMemory\0" // IR(26435, 21)
  "AtomicCounterMemory\0" // IR(26456, 20)
  "ImageMemory\0" // IR(26476, 12)
  "OutputMemory\0" // IR(26488, 13)
  "OutputMemoryKHR\0" // IR(26501, 16)
  "MakeAvailable\0" // IR(26517, 14)
  "MakeAvailableKHR\0" // IR(26531, 17)
  "MakeVisible\0" // IR(26548, 12)
  "MakeVisibleKHR\0" // IR(26560, 15)
  "AutoINTEL\0" // IR(26575, 10)
  "WRAP\0" // IR(26585, 5)
  "SAT\0" // IR(26590, 4)
  "SAT_ZERO\0" // IR(26594, 9)
  "SAT_SYM\0" // IR(26603, 8)
  "PackedVectorFormat4x8Bit\0" // IR(26611, 25)
  "PackedVectorFormat4x8BitKHR\0" // IR(26636, 28)
  "TRN\0" // IR(26664, 4)
  "TRN_ZERO\0" // IR(26668, 9)
  "RND\0" // IR(26677, 4)
  "RND_ZERO\0" // IR(26681, 9)
  "RND_INF\0" // IR(26690, 8)
  "RND_MIN_INF\0" // IR(26698, 12)
  "RND_CONV\0" // IR(26710, 9)
  "RND_CONV_ODD\0" // IR(26719, 13)
  "RobustnessPerComponentNV\0" // IR(26732, 25)
  "RobustnessPerElementNV\0" // IR(26757, 23)
  "OpaqueKHR\0" // IR(26780, 10)
  "NoOpaqueKHR\0" // IR(26790, 12)
  "TerminateOnFirstHitKHR\0" // IR(26802, 23)
  "SkipClosestHitShaderKHR\0" // IR(26825, 24)
  "CullBackFacingTrianglesKHR\0" // IR(26849, 27)
  "CullFrontFacingTrianglesKHR\0" // IR(26876, 28)
  "CullOpaqueKHR\0" // IR(26904, 14)
  "CullNoOpaqueKHR\0" // IR(26918, 16)
  "SkipTrianglesKHR\0" // IR(26934, 17)
  "SkipBuiltinPrimitivesNV\0" // IR(26951, 24)
  "SkipAABBsKHR\0" // IR(26975, 13)
  "ForceOpacityMicromap2StateKHR\0" // IR(26988, 30)
  "ForceOpacityMicromap2StateEXT\0" // IR(27018, 30)
  "RayQueryCandidateIntersectionTriangleKHR\0" // IR(27048, 41)
  "RayQueryCandidateIntersectionAABBKHR\0" // IR(27089, 37)
  "RayQueryCommittedIntersectionNoneKHR\0" // IR(27126, 37)
  "RayQueryCommittedIntersectionTriangleKHR\0" // IR(27163, 41)
  "RayQueryCommittedIntersectionGeneratedKHR\0" // IR(27204, 42)
  "RayQueryCandidateIntersectionKHR\0" // IR(27246, 33)
  "RayQueryCommittedIntersectionKHR\0" // IR(27279, 33)
  "ClampToEdge\0" // IR(27312, 12)
  "Clamp\0" // IR(27324, 6)
  "Repeat\0" // IR(27330, 7)
  "RepeatMirrored\0" // IR(27337, 15)
  "Nearest\0" // IR(27352, 8)
  "Linear\0" // IR(27360, 7)
  "Unknown\0" // IR(27367, 8)
  "Rgba32f\0" // IR(27375, 8)
  "Rgba16f\0" // IR(27383, 8)
  "R32f\0" // IR(27391, 5)
  "Rgba8\0" // IR(27396, 6)
  "Rgba8Snorm\0" // IR(27402, 11)
  "Rg32f\0" // IR(27413, 6)
  "Rg16f\0" // IR(27419, 6)
  "R11fG11fB10f\0" // IR(27425, 13)
  "R16f\0" // IR(27438, 5)
  "Rgba16\0" // IR(27443, 7)
  "Rgb10A2\0" // IR(27450, 8)
  "Rg16\0" // IR(27458, 5)
  "Rg8\0" // IR(27463, 4)
  "R16\0" // IR(27467, 4)
  "R8\0" // IR(27471, 3)
  "Rgba16Snorm\0" // IR(27474, 12)
  "Rg16Snorm\0" // IR(27486, 10)
  "Rg8Snorm\0" // IR(27496, 9)
  "R16Snorm\0" // IR(27505, 9)
  "R8Snorm\0" // IR(27514, 8)
  "Rgba32i\0" // IR(27522, 8)
  "Rgba16i\0" // IR(27530, 8)
  "Rgba8i\0" // IR(27538, 7)
  "R32i\0" // IR(27545, 5)
  "Rg32i\0" // IR(27550, 6)
  "Rg16i\0" // IR(27556, 6)
  "Rg8i\0" // IR(27562, 5)
  "R16i\0" // IR(27567, 5)
  "R8i\0" // IR(27572, 4)
  "Rgba32ui\0" // IR(27576, 9)
  "Rgba16ui\0" // IR(27585, 9)
  "Rgba8ui\0" // IR(27594, 8)
  "R32ui\0" // IR(27602, 6)
  "Rgb10a2ui\0" // IR(27608, 10)
  "Rg32ui\0" // IR(27618, 7)
  "Rg16ui\0" // IR(27625, 7)
  "Rg8ui\0" // IR(27632, 6)
  "R16ui\0" // IR(27638, 6)
  "R8ui\0" // IR(27644, 5)
  "R64ui\0" // IR(27649, 6)
  "R64i\0" // IR(27655, 5)
  "CrossDevice\0" // IR(27660, 12)
  "Device\0" // IR(27672, 7)
  "Workgroup\0" // IR(27679, 10)
  "Subgroup\0" // IR(27689, 9)
  "Invocation\0" // IR(27698, 11)
  "QueueFamily\0" // IR(27709, 12)
  "QueueFamilyKHR\0" // IR(27721, 15)
  "ShaderCallKHR\0" // IR(27736, 14)
  "Flatten\0" // IR(27750, 8)
  "DontFlatten\0" // IR(27758, 12)
  "IdentifierPossibleDuplicates\0" // IR(27770, 29)
  "FlagUnknownPhysicalLayout\0" // IR(27799, 26)
  "ESSL\0" // IR(27825, 5)
  "GLSL\0" // IR(27830, 5)
  "OpenCL_C\0" // IR(27835, 9)
  "OpenCL_CPP\0" // IR(27844, 11)
  "HLSL\0" // IR(27855, 5)
  "CPP_for_OpenCL\0" // IR(27860, 15)
  "SYCL\0" // IR(27875, 5)
  "HERO_C\0" // IR(27880, 7)
  "NZSL\0" // IR(27887, 5)
  "WGSL\0" // IR(27892, 5)
  "Slang\0" // IR(27897, 6)
  "Zig\0" // IR(27903, 4)
  "Rust\0" // IR(27907, 5)
  "UniformConstant\0" // IR(27912, 16)
  "Input\0" // IR(27928, 6)
  "Output\0" // IR(27934, 7)
  "CrossWorkgroup\0" // IR(27941, 15)
  "Private\0" // IR(27956, 8)
  "Function\0" // IR(27964, 9)
  "Generic\0" // IR(27973, 8)
  "PushConstant\0" // IR(27981, 13)
  "AtomicCounter\0" // IR(27994, 14)
  "Image\0" // IR(28008, 6)
  "StorageBuffer\0" // IR(28014, 14)
  "TileImageEXT\0" // IR(28028, 13)
  "TileAttachmentQCOM\0" // IR(28041, 19)
  "NodePayloadAMDX\0" // IR(28060, 16)
  "CallableDataKHR\0" // IR(28076, 16)
  "CallableDataNV\0" // IR(28092, 15)
  "IncomingCallableDataKHR\0" // IR(28107, 24)
  "IncomingCallableDataNV\0" // IR(28131, 23)
  "RayPayloadKHR\0" // IR(28154, 14)
  "RayPayloadNV\0" // IR(28168, 13)
  "HitAttributeKHR\0" // IR(28181, 16)
  "HitAttributeNV\0" // IR(28197, 15)
  "IncomingRayPayloadKHR\0" // IR(28212, 22)
  "IncomingRayPayloadNV\0" // IR(28234, 21)
  "ShaderRecordBufferKHR\0" // IR(28255, 22)
  "ShaderRecordBufferNV\0" // IR(28277, 21)
  "PhysicalStorageBuffer\0" // IR(28298, 22)
  "PhysicalStorageBufferEXT\0" // IR(28320, 25)
  "HitObjectAttributeNV\0" // IR(28345, 21)
  "TaskPayloadWorkgroupEXT\0" // IR(28366, 24)
  "HitObjectAttributeEXT\0" // IR(28390, 22)
  "CodeSectionINTEL\0" // IR(28412, 17)
  "DeviceOnlyALTERA\0" // IR(28429, 17)
  "DeviceOnlyINTEL\0" // IR(28446, 16)
  "HostOnlyALTERA\0" // IR(28462, 15)
  "HostOnlyINTEL\0" // IR(28477, 14)
  "WriteThroughINTEL\0" // IR(28491, 18)
  "WriteBackINTEL\0" // IR(28509, 15)
  "TensorView\0" // IR(28524, 11)
  "DecodeFunc\0" // IR(28535, 11)
  "Undefined\0" // IR(28546, 10)
  "NoneARM\0" // IR(28556, 8)
  "NontemporalARM\0" // IR(28564, 15)
  "OutOfBoundsValueARM\0" // IR(28579, 20)
  "MakeElementAvailableARM\0" // IR(28599, 24)
  "MakeElementVisibleARM\0" // IR(28623, 22)
  "NonPrivateElementARM\0" // IR(28645, 21)
  "Nop\0" // IR(28666, 4)
  "SPV_OPERAND_TYPE_TYPE_ID\0" // IR(28670, 25)
  "SPV_OPERAND_TYPE_RESULT_ID\0" // IR(28695, 27)
  "Undef\0" // IR(28722, 6)
  "SourceContinued\0" // IR(28728, 16)
  "SPV_OPERAND_TYPE_SOURCE_LANGUAGE\0" // IR(28744, 33)
  "SPV_OPERAND_TYPE_OPTIONAL_ID\0" // IR(28777, 29)
  "SPV_OPERAND_TYPE_OPTIONAL_LITERAL_STRING\0" // IR(28806, 41)
  "Source\0" // IR(28847, 7)
  "SourceExtension\0" // IR(28854, 16)
  "Name\0" // IR(28870, 5)
  "MemberName\0" // IR(28875, 11)
  "String\0" // IR(28886, 7)
  "Line\0" // IR(28893, 5)
  "Extension\0" // IR(28898, 10)
  "ExtInstImport\0" // IR(28908, 14)
  "SPV_OPERAND_TYPE_EXTENSION_INSTRUCTION_NUMBER\0" // IR(28922, 46)
  "ExtInst\0" // IR(28968, 8)
  "SPV_OPERAND_TYPE_ADDRESSING_MODEL\0" // IR(28976, 34)
  "SPV_OPERAND_TYPE_MEMORY_MODEL\0" // IR(29010, 30)
  "MemoryModel\0" // IR(29040, 12)
  "SPV_OPERAND_TYPE_EXECUTION_MODEL\0" // IR(29052, 33)
  "SPV_OPERAND_TYPE_VARIABLE_ID\0" // IR(29085, 29)
  "EntryPoint\0" // IR(29114, 11)
  "SPV_OPERAND_TYPE_EXECUTION_MODE\0" // IR(29125, 32)
  "ExecutionMode\0" // IR(29157, 14)
  "SPV_OPERAND_TYPE_CAPABILITY\0" // IR(29171, 28)
  "Capability\0" // IR(29199, 11)
  "TypeVoid\0" // IR(29210, 9)
  "TypeBool\0" // IR(29219, 9)
  "TypeInt\0" // IR(29228, 8)
  "SPV_OPERAND_TYPE_OPTIONAL_FPENCODING\0" // IR(29236, 37)
  "TypeFloat\0" // IR(29273, 10)
  "TypeVector\0" // IR(29283, 11)
  "TypeMatrix\0" // IR(29294, 11)
  "SPV_OPERAND_TYPE_DIMENSIONALITY\0" // IR(29305, 32)
  "SPV_OPERAND_TYPE_SAMPLER_IMAGE_FORMAT\0" // IR(29337, 38)
  "SPV_OPERAND_TYPE_OPTIONAL_ACCESS_QUALIFIER\0" // IR(29375, 43)
  "TypeImage\0" // IR(29418, 10)
  "TypeSampler\0" // IR(29428, 12)
  "TypeSampledImage\0" // IR(29440, 17)
  "TypeArray\0" // IR(29457, 10)
  "TypeRuntimeArray\0" // IR(29467, 17)
  "TypeStruct\0" // IR(29484, 11)
  "TypeOpaque\0" // IR(29495, 11)
  "SPV_OPERAND_TYPE_STORAGE_CLASS\0" // IR(29506, 31)
  "TypePointer\0" // IR(29537, 12)
  "TypeFunction\0" // IR(29549, 13)
  "TypeEvent\0" // IR(29562, 10)
  "TypeDeviceEvent\0" // IR(29572, 16)
  "TypeReserveId\0" // IR(29588, 14)
  "TypeQueue\0" // IR(29602, 10)
  "TypePipe\0" // IR(29612, 9)
  "TypeForwardPointer\0" // IR(29621, 19)
  "ConstantTrue\0" // IR(29640, 13)
  "ConstantFalse\0" // IR(29653, 14)
  "SPV_OPERAND_TYPE_TYPED_LITERAL_NUMBER\0" // IR(29667, 38)
  "ConstantComposite\0" // IR(29705, 18)
  "SPV_OPERAND_TYPE_SAMPLER_ADDRESSING_MODE\0" // IR(29723, 41)
  "SPV_OPERAND_TYPE_SAMPLER_FILTER_MODE\0" // IR(29764, 37)
  "ConstantSampler\0" // IR(29801, 16)
  "ConstantNull\0" // IR(29817, 13)
  "SpecConstantTrue\0" // IR(29830, 17)
  "SpecConstantFalse\0" // IR(29847, 18)
  "SpecConstant\0" // IR(29865, 13)
  "SpecConstantComposite\0" // IR(29878, 22)
  "SPV_OPERAND_TYPE_SPEC_CONSTANT_OP_NUMBER\0" // IR(29900, 41)
  "SpecConstantOp\0" // IR(29941, 15)
  "SPV_OPERAND_TYPE_FUNCTION_CONTROL\0" // IR(29956, 34)
  "FunctionParameter\0" // IR(29990, 18)
  "FunctionEnd\0" // IR(30008, 12)
  "FunctionCall\0" // IR(30020, 13)
  "Variable\0" // IR(30033, 9)
  "ImageTexelPointer\0" // IR(30042, 18)
  "SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS\0" // IR(30060, 40)
  "Load\0" // IR(30100, 5)
  "Store\0" // IR(30105, 6)
  "CopyMemory\0" // IR(30111, 11)
  "CopyMemorySized\0" // IR(30122, 16)
  "AccessChain\0" // IR(30138, 12)
  "InBoundsAccessChain\0" // IR(30150, 20)
  "PtrAccessChain\0" // IR(30170, 15)
  "ArrayLength\0" // IR(30185, 12)
  "GenericPtrMemSemantics\0" // IR(30197, 23)
  "InBoundsPtrAccessChain\0" // IR(30220, 23)
  "SPV_OPERAND_TYPE_DECORATION\0" // IR(30243, 28)
  "Decorate\0" // IR(30271, 9)
  "MemberDecorate\0" // IR(30280, 15)
  "DecorationGroup\0" // IR(30295, 16)
  "GroupDecorate\0" // IR(30311, 14)
  "SPV_OPERAND_TYPE_VARIABLE_ID_LITERAL_INTEGER\0" // IR(30325, 45)
  "GroupMemberDecorate\0" // IR(30370, 20)
  "VectorExtractDynamic\0" // IR(30390, 21)
  "VectorInsertDynamic\0" // IR(30411, 20)
  "VectorShuffle\0" // IR(30431, 14)
  "CompositeConstruct\0" // IR(30445, 19)
  "CompositeExtract\0" // IR(30464, 17)
  "CompositeInsert\0" // IR(30481, 16)
  "CopyObject\0" // IR(30497, 11)
  "Transpose\0" // IR(30508, 10)
  "SampledImage\0" // IR(30518, 13)
  "SPV_OPERAND_TYPE_OPTIONAL_IMAGE\0" // IR(30531, 32)
  "ImageSampleImplicitLod\0" // IR(30563, 23)
  "SPV_OPERAND_TYPE_IMAGE\0" // IR(30586, 23)
  "ImageSampleExplicitLod\0" // IR(30609, 23)
  "ImageSampleDrefImplicitLod\0" // IR(30632, 27)
  "ImageSampleDrefExplicitLod\0" // IR(30659, 27)
  "ImageSampleProjImplicitLod\0" // IR(30686, 27)
  "ImageSampleProjExplicitLod\0" // IR(30713, 27)
  "ImageSampleProjDrefImplicitLod\0" // IR(30740, 31)
  "ImageSampleProjDrefExplicitLod\0" // IR(30771, 31)
  "ImageFetch\0" // IR(30802, 11)
  "ImageGather\0" // IR(30813, 12)
  "ImageDrefGather\0" // IR(30825, 16)
  "ImageRead\0" // IR(30841, 10)
  "ImageWrite\0" // IR(30851, 11)
  "ImageQueryFormat\0" // IR(30862, 17)
  "ImageQueryOrder\0" // IR(30879, 16)
  "ImageQuerySizeLod\0" // IR(30895, 18)
  "ImageQuerySize\0" // IR(30913, 15)
  "ImageQueryLod\0" // IR(30928, 14)
  "ImageQueryLevels\0" // IR(30942, 17)
  "ImageQuerySamples\0" // IR(30959, 18)
  "ConvertFToU\0" // IR(30977, 12)
  "ConvertFToS\0" // IR(30989, 12)
  "ConvertSToF\0" // IR(31001, 12)
  "ConvertUToF\0" // IR(31013, 12)
  "UConvert\0" // IR(31025, 9)
  "SConvert\0" // IR(31034, 9)
  "FConvert\0" // IR(31043, 9)
  "QuantizeToF16\0" // IR(31052, 14)
  "ConvertPtrToU\0" // IR(31066, 14)
  "SatConvertSToU\0" // IR(31080, 15)
  "SatConvertUToS\0" // IR(31095, 15)
  "ConvertUToPtr\0" // IR(31110, 14)
  "PtrCastToGeneric\0" // IR(31124, 17)
  "GenericCastToPtr\0" // IR(31141, 17)
  "GenericCastToPtrExplicit\0" // IR(31158, 25)
  "Bitcast\0" // IR(31183, 8)
  "SNegate\0" // IR(31191, 8)
  "FNegate\0" // IR(31199, 8)
  "IAdd\0" // IR(31207, 5)
  "FAdd\0" // IR(31212, 5)
  "ISub\0" // IR(31217, 5)
  "FSub\0" // IR(31222, 5)
  "IMul\0" // IR(31227, 5)
  "FMul\0" // IR(31232, 5)
  "UDiv\0" // IR(31237, 5)
  "SDiv\0" // IR(31242, 5)
  "FDiv\0" // IR(31247, 5)
  "UMod\0" // IR(31252, 5)
  "SRem\0" // IR(31257, 5)
  "SMod\0" // IR(31262, 5)
  "FRem\0" // IR(31267, 5)
  "FMod\0" // IR(31272, 5)
  "VectorTimesScalar\0" // IR(31277, 18)
  "MatrixTimesScalar\0" // IR(31295, 18)
  "VectorTimesMatrix\0" // IR(31313, 18)
  "MatrixTimesVector\0" // IR(31331, 18)
  "MatrixTimesMatrix\0" // IR(31349, 18)
  "OuterProduct\0" // IR(31367, 13)
  "Dot\0" // IR(31380, 4)
  "IAddCarry\0" // IR(31384, 10)
  "ISubBorrow\0" // IR(31394, 11)
  "UMulExtended\0" // IR(31405, 13)
  "SMulExtended\0" // IR(31418, 13)
  "Any\0" // IR(31431, 4)
  "All\0" // IR(31435, 4)
  "IsNan\0" // IR(31439, 6)
  "IsInf\0" // IR(31445, 6)
  "IsFinite\0" // IR(31451, 9)
  "IsNormal\0" // IR(31460, 9)
  "SignBitSet\0" // IR(31469, 11)
  "LessOrGreater\0" // IR(31480, 14)
  "Ordered\0" // IR(31494, 8)
  "Unordered\0" // IR(31502, 10)
  "LogicalEqual\0" // IR(31512, 13)
  "LogicalNotEqual\0" // IR(31525, 16)
  "LogicalOr\0" // IR(31541, 10)
  "LogicalAnd\0" // IR(31551, 11)
  "LogicalNot\0" // IR(31562, 11)
  "Select\0" // IR(31573, 7)
  "IEqual\0" // IR(31580, 7)
  "INotEqual\0" // IR(31587, 10)
  "UGreaterThan\0" // IR(31597, 13)
  "SGreaterThan\0" // IR(31610, 13)
  "UGreaterThanEqual\0" // IR(31623, 18)
  "SGreaterThanEqual\0" // IR(31641, 18)
  "ULessThan\0" // IR(31659, 10)
  "SLessThan\0" // IR(31669, 10)
  "ULessThanEqual\0" // IR(31679, 15)
  "SLessThanEqual\0" // IR(31694, 15)
  "FOrdEqual\0" // IR(31709, 10)
  "FUnordEqual\0" // IR(31719, 12)
  "FOrdNotEqual\0" // IR(31731, 13)
  "FUnordNotEqual\0" // IR(31744, 15)
  "FOrdLessThan\0" // IR(31759, 13)
  "FUnordLessThan\0" // IR(31772, 15)
  "FOrdGreaterThan\0" // IR(31787, 16)
  "FUnordGreaterThan\0" // IR(31803, 18)
  "FOrdLessThanEqual\0" // IR(31821, 18)
  "FUnordLessThanEqual\0" // IR(31839, 20)
  "FOrdGreaterThanEqual\0" // IR(31859, 21)
  "FUnordGreaterThanEqual\0" // IR(31880, 23)
  "ShiftRightLogical\0" // IR(31903, 18)
  "ShiftRightArithmetic\0" // IR(31921, 21)
  "ShiftLeftLogical\0" // IR(31942, 17)
  "BitwiseOr\0" // IR(31959, 10)
  "BitwiseXor\0" // IR(31969, 11)
  "BitwiseAnd\0" // IR(31980, 11)
  "Not\0" // IR(31991, 4)
  "BitFieldInsert\0" // IR(31995, 15)
  "BitFieldSExtract\0" // IR(32010, 17)
  "BitFieldUExtract\0" // IR(32027, 17)
  "BitReverse\0" // IR(32044, 11)
  "BitCount\0" // IR(32055, 9)
  "DPdx\0" // IR(32064, 5)
  "DPdy\0" // IR(32069, 5)
  "Fwidth\0" // IR(32074, 7)
  "DPdxFine\0" // IR(32081, 9)
  "DPdyFine\0" // IR(32090, 9)
  "FwidthFine\0" // IR(32099, 11)
  "DPdxCoarse\0" // IR(32110, 11)
  "DPdyCoarse\0" // IR(32121, 11)
  "FwidthCoarse\0" // IR(32132, 13)
  "EmitVertex\0" // IR(32145, 11)
  "EndPrimitive\0" // IR(32156, 13)
  "EmitStreamVertex\0" // IR(32169, 17)
  "EndStreamPrimitive\0" // IR(32186, 19)
  "SPV_OPERAND_TYPE_MEMORY_SEMANTICS_ID\0" // IR(32205, 37)
  "ControlBarrier\0" // IR(32242, 15)
  "MemoryBarrier\0" // IR(32257, 14)
  "AtomicLoad\0" // IR(32271, 11)
  "AtomicStore\0" // IR(32282, 12)
  "AtomicExchange\0" // IR(32294, 15)
  "AtomicCompareExchange\0" // IR(32309, 22)
  "AtomicCompareExchangeWeak\0" // IR(32331, 26)
  "AtomicIIncrement\0" // IR(32357, 17)
  "AtomicIDecrement\0" // IR(32374, 17)
  "AtomicIAdd\0" // IR(32391, 11)
  "AtomicISub\0" // IR(32402, 11)
  "AtomicSMin\0" // IR(32413, 11)
  "AtomicUMin\0" // IR(32424, 11)
  "AtomicSMax\0" // IR(32435, 11)
  "AtomicUMax\0" // IR(32446, 11)
  "AtomicAnd\0" // IR(32457, 10)
  "AtomicOr\0" // IR(32467, 9)
  "AtomicXor\0" // IR(32476, 10)
  "Phi\0" // IR(32486, 4)
  "SPV_OPERAND_TYPE_LOOP_CONTROL\0" // IR(32490, 30)
  "LoopMerge\0" // IR(32520, 10)
  "SPV_OPERAND_TYPE_SELECTION_CONTROL\0" // IR(32530, 35)
  "SelectionMerge\0" // IR(32565, 15)
  "Label\0" // IR(32580, 6)
  "Branch\0" // IR(32586, 7)
  "BranchConditional\0" // IR(32593, 18)
  "SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER_ID\0" // IR(32611, 45)
  "Switch\0" // IR(32656, 7)
  "Kill\0" // IR(32663, 5)
  "Return\0" // IR(32668, 7)
  "ReturnValue\0" // IR(32675, 12)
  "Unreachable\0" // IR(32687, 12)
  "LifetimeStart\0" // IR(32699, 14)
  "LifetimeStop\0" // IR(32713, 13)
  "GroupAsyncCopy\0" // IR(32726, 15)
  "GroupWaitEvents\0" // IR(32741, 16)
  "GroupAll\0" // IR(32757, 9)
  "GroupAny\0" // IR(32766, 9)
  "GroupBroadcast\0" // IR(32775, 15)
  "SPV_OPERAND_TYPE_GROUP_OPERATION\0" // IR(32790, 33)
  "GroupIAdd\0" // IR(32823, 10)
  "GroupFAdd\0" // IR(32833, 10)
  "GroupFMin\0" // IR(32843, 10)
  "GroupUMin\0" // IR(32853, 10)
  "GroupSMin\0" // IR(32863, 10)
  "GroupFMax\0" // IR(32873, 10)
  "GroupUMax\0" // IR(32883, 10)
  "GroupSMax\0" // IR(32893, 10)
  "ReadPipe\0" // IR(32903, 9)
  "WritePipe\0" // IR(32912, 10)
  "ReservedReadPipe\0" // IR(32922, 17)
  "ReservedWritePipe\0" // IR(32939, 18)
  "ReserveReadPipePackets\0" // IR(32957, 23)
  "ReserveWritePipePackets\0" // IR(32980, 24)
  "CommitReadPipe\0" // IR(33004, 15)
  "CommitWritePipe\0" // IR(33019, 16)
  "IsValidReserveId\0" // IR(33035, 17)
  "GetNumPipePackets\0" // IR(33052, 18)
  "GetMaxPipePackets\0" // IR(33070, 18)
  "GroupReserveReadPipePackets\0" // IR(33088, 28)
  "GroupReserveWritePipePackets\0" // IR(33116, 29)
  "GroupCommitReadPipe\0" // IR(33145, 20)
  "GroupCommitWritePipe\0" // IR(33165, 21)
  "EnqueueMarker\0" // IR(33186, 14)
  "EnqueueKernel\0" // IR(33200, 14)
  "GetKernelNDrangeSubGroupCount\0" // IR(33214, 30)
  "GetKernelNDrangeMaxSubGroupSize\0" // IR(33244, 32)
  "GetKernelWorkGroupSize\0" // IR(33276, 23)
  "GetKernelPreferredWorkGroupSizeMultiple\0" // IR(33299, 40)
  "RetainEvent\0" // IR(33339, 12)
  "ReleaseEvent\0" // IR(33351, 13)
  "CreateUserEvent\0" // IR(33364, 16)
  "IsValidEvent\0" // IR(33380, 13)
  "SetUserEventStatus\0" // IR(33393, 19)
  "CaptureEventProfilingInfo\0" // IR(33412, 26)
  "GetDefaultQueue\0" // IR(33438, 16)
  "BuildNDRange\0" // IR(33454, 13)
  "ImageSparseSampleImplicitLod\0" // IR(33467, 29)
  "ImageSparseSampleExplicitLod\0" // IR(33496, 29)
  "ImageSparseSampleDrefImplicitLod\0" // IR(33525, 33)
  "ImageSparseSampleDrefExplicitLod\0" // IR(33558, 33)
  "ImageSparseSampleProjImplicitLod\0" // IR(33591, 33)
  "ImageSparseSampleProjExplicitLod\0" // IR(33624, 33)
  "ImageSparseSampleProjDrefImplicitLod\0" // IR(33657, 37)
  "ImageSparseSampleProjDrefExplicitLod\0" // IR(33694, 37)
  "ImageSparseFetch\0" // IR(33731, 17)
  "ImageSparseGather\0" // IR(33748, 18)
  "ImageSparseDrefGather\0" // IR(33766, 22)
  "ImageSparseTexelsResident\0" // IR(33788, 26)
  "NoLine\0" // IR(33814, 7)
  "AtomicFlagTestAndSet\0" // IR(33821, 21)
  "AtomicFlagClear\0" // IR(33842, 16)
  "ImageSparseRead\0" // IR(33858, 16)
  "SizeOf\0" // IR(33874, 7)
  "TypePipeStorage\0" // IR(33881, 16)
  "ConstantPipeStorage\0" // IR(33897, 20)
  "CreatePipeFromPipeStorage\0" // IR(33917, 26)
  "GetKernelLocalSizeForSubgroupCount\0" // IR(33943, 35)
  "GetKernelMaxNumSubgroups\0" // IR(33978, 25)
  "TypeNamedBarrier\0" // IR(34003, 17)
  "NamedBarrierInitialize\0" // IR(34020, 23)
  "MemoryNamedBarrier\0" // IR(34043, 19)
  "ModuleProcessed\0" // IR(34062, 16)
  "ExecutionModeId\0" // IR(34078, 16)
  "DecorateId\0" // IR(34094, 11)
  "GroupNonUniformElect\0" // IR(34105, 21)
  "GroupNonUniformAll\0" // IR(34126, 19)
  "GroupNonUniformAny\0" // IR(34145, 19)
  "GroupNonUniformAllEqual\0" // IR(34164, 24)
  "GroupNonUniformBroadcast\0" // IR(34188, 25)
  "GroupNonUniformBroadcastFirst\0" // IR(34213, 30)
  "GroupNonUniformInverseBallot\0" // IR(34243, 29)
  "GroupNonUniformBallotBitExtract\0" // IR(34272, 32)
  "GroupNonUniformBallotBitCount\0" // IR(34304, 30)
  "GroupNonUniformBallotFindLSB\0" // IR(34334, 29)
  "GroupNonUniformBallotFindMSB\0" // IR(34363, 29)
  "GroupNonUniformShuffleXor\0" // IR(34392, 26)
  "GroupNonUniformShuffleUp\0" // IR(34418, 25)
  "GroupNonUniformShuffleDown\0" // IR(34443, 27)
  "GroupNonUniformIAdd\0" // IR(34470, 20)
  "GroupNonUniformFAdd\0" // IR(34490, 20)
  "GroupNonUniformIMul\0" // IR(34510, 20)
  "GroupNonUniformFMul\0" // IR(34530, 20)
  "GroupNonUniformSMin\0" // IR(34550, 20)
  "GroupNonUniformUMin\0" // IR(34570, 20)
  "GroupNonUniformFMin\0" // IR(34590, 20)
  "GroupNonUniformSMax\0" // IR(34610, 20)
  "GroupNonUniformUMax\0" // IR(34630, 20)
  "GroupNonUniformFMax\0" // IR(34650, 20)
  "GroupNonUniformBitwiseAnd\0" // IR(34670, 26)
  "GroupNonUniformBitwiseOr\0" // IR(34696, 25)
  "GroupNonUniformBitwiseXor\0" // IR(34721, 26)
  "GroupNonUniformLogicalAnd\0" // IR(34747, 26)
  "GroupNonUniformLogicalOr\0" // IR(34773, 25)
  "GroupNonUniformLogicalXor\0" // IR(34798, 26)
  "GroupNonUniformQuadBroadcast\0" // IR(34824, 29)
  "GroupNonUniformQuadSwap\0" // IR(34853, 24)
  "CopyLogical\0" // IR(34877, 12)
  "PtrEqual\0" // IR(34889, 9)
  "PtrNotEqual\0" // IR(34898, 12)
  "PtrDiff\0" // IR(34910, 8)
  "ColorAttachmentReadEXT\0" // IR(34918, 23)
  "DepthAttachmentReadEXT\0" // IR(34941, 23)
  "StencilAttachmentReadEXT\0" // IR(34964, 25)
  "TypeTensorARM\0" // IR(34989, 14)
  "SPV_OPERAND_TYPE_OPTIONAL_TENSOR_OPERANDS\0" // IR(35003, 42)
  "TensorReadARM\0" // IR(35045, 14)
  "TensorWriteARM\0" // IR(35059, 15)
  "TensorQuerySizeARM\0" // IR(35074, 19)
  "GraphConstantARM\0" // IR(35093, 17)
  "GraphEntryPointARM\0" // IR(35110, 19)
  "GraphInputARM\0" // IR(35129, 14)
  "GraphSetOutputARM\0" // IR(35143, 18)
  "GraphEndARM\0" // IR(35161, 12)
  "TypeGraphARM\0" // IR(35173, 13)
  "TerminateInvocation\0" // IR(35186, 20)
  "TypeUntypedPointerKHR\0" // IR(35206, 22)
  "UntypedVariableKHR\0" // IR(35228, 19)
  "UntypedAccessChainKHR\0" // IR(35247, 22)
  "UntypedInBoundsAccessChainKHR\0" // IR(35269, 30)
  "SubgroupFirstInvocationKHR\0" // IR(35299, 27)
  "UntypedPtrAccessChainKHR\0" // IR(35326, 25)
  "UntypedInBoundsPtrAccessChainKHR\0" // IR(35351, 33)
  "UntypedArrayLengthKHR\0" // IR(35384, 22)
  "UntypedPrefetchKHR\0" // IR(35406, 19)
  "FmaKHR\0" // IR(35425, 7)
  "SubgroupAllKHR\0" // IR(35432, 15)
  "SubgroupAnyKHR\0" // IR(35447, 15)
  "SubgroupAllEqualKHR\0" // IR(35462, 20)
  "SubgroupReadInvocationKHR\0" // IR(35482, 26)
  "ExtInstWithForwardRefsKHR\0" // IR(35508, 26)
  "UntypedGroupAsyncCopyKHR\0" // IR(35534, 25)
  "TraceRayKHR\0" // IR(35559, 12)
  "ExecuteCallableKHR\0" // IR(35571, 19)
  "ConvertUToAccelerationStructureKHR\0" // IR(35590, 35)
  "IgnoreIntersectionKHR\0" // IR(35625, 22)
  "TerminateRayKHR\0" // IR(35647, 16)
  "SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT\0" // IR(35663, 47)
  "SDot\0" // IR(35710, 5)
  "SDotKHR\0" // IR(35715, 8)
  "UDot\0" // IR(35723, 5)
  "UDotKHR\0" // IR(35728, 8)
  "SUDot\0" // IR(35736, 6)
  "SUDotKHR\0" // IR(35742, 9)
  "SDotAccSat\0" // IR(35751, 11)
  "SDotAccSatKHR\0" // IR(35762, 14)
  "UDotAccSat\0" // IR(35776, 11)
  "UDotAccSatKHR\0" // IR(35787, 14)
  "SUDotAccSat\0" // IR(35801, 12)
  "SUDotAccSatKHR\0" // IR(35813, 15)
  "TypeCooperativeMatrixKHR\0" // IR(35828, 25)
  "CooperativeMatrixLoadKHR\0" // IR(35853, 25)
  "CooperativeMatrixStoreKHR\0" // IR(35878, 26)
  "SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS\0" // IR(35904, 54)
  "CooperativeMatrixMulAddKHR\0" // IR(35958, 27)
  "CooperativeMatrixLengthKHR\0" // IR(35985, 27)
  "ConstantCompositeReplicateEXT\0" // IR(36012, 30)
  "SpecConstantCompositeReplicateEXT\0" // IR(36042, 34)
  "CompositeConstructReplicateEXT\0" // IR(36076, 31)
  "TypeRayQueryKHR\0" // IR(36107, 16)
  "RayQueryInitializeKHR\0" // IR(36123, 22)
  "RayQueryTerminateKHR\0" // IR(36145, 21)
  "RayQueryGenerateIntersectionKHR\0" // IR(36166, 32)
  "RayQueryConfirmIntersectionKHR\0" // IR(36198, 31)
  "RayQueryProceedKHR\0" // IR(36229, 19)
  "RayQueryGetIntersectionTypeKHR\0" // IR(36248, 31)
  "ImageSampleWeightedQCOM\0" // IR(36279, 24)
  "ImageBoxFilterQCOM\0" // IR(36303, 19)
  "ImageBlockMatchSSDQCOM\0" // IR(36322, 23)
  "ImageBlockMatchSADQCOM\0" // IR(36345, 23)
  "BitCastArrayQCOM\0" // IR(36368, 17)
  "ImageBlockMatchWindowSSDQCOM\0" // IR(36385, 29)
  "ImageBlockMatchWindowSADQCOM\0" // IR(36414, 29)
  "ImageBlockMatchGatherSSDQCOM\0" // IR(36443, 29)
  "ImageBlockMatchGatherSADQCOM\0" // IR(36472, 29)
  "CompositeConstructCoopMatQCOM\0" // IR(36501, 30)
  "CompositeExtractCoopMatQCOM\0" // IR(36531, 28)
  "ExtractSubArrayQCOM\0" // IR(36559, 20)
  "GroupIAddNonUniformAMD\0" // IR(36579, 23)
  "GroupFAddNonUniformAMD\0" // IR(36602, 23)
  "GroupFMinNonUniformAMD\0" // IR(36625, 23)
  "GroupUMinNonUniformAMD\0" // IR(36648, 23)
  "GroupSMinNonUniformAMD\0" // IR(36671, 23)
  "GroupFMaxNonUniformAMD\0" // IR(36694, 23)
  "GroupUMaxNonUniformAMD\0" // IR(36717, 23)
  "GroupSMaxNonUniformAMD\0" // IR(36740, 23)
  "FragmentMaskFetchAMD\0" // IR(36763, 21)
  "FragmentFetchAMD\0" // IR(36784, 17)
  "ReadClockKHR\0" // IR(36801, 13)
  "AllocateNodePayloadsAMDX\0" // IR(36814, 25)
  "EnqueueNodePayloadsAMDX\0" // IR(36839, 24)
  "TypeNodePayloadArrayAMDX\0" // IR(36863, 25)
  "FinishWritingNodePayloadAMDX\0" // IR(36888, 29)
  "NodePayloadArrayLengthAMDX\0" // IR(36917, 27)
  "IsNodePayloadValidAMDX\0" // IR(36944, 23)
  "ConstantStringAMDX\0" // IR(36967, 19)
  "SpecConstantStringAMDX\0" // IR(36986, 23)
  "GroupNonUniformQuadAllKHR\0" // IR(37009, 26)
  "GroupNonUniformQuadAnyKHR\0" // IR(37035, 26)
  "TypeBufferEXT\0" // IR(37061, 14)
  "BufferPointerEXT\0" // IR(37075, 17)
  "UntypedImageTexelPointerEXT\0" // IR(37092, 28)
  "MemberDecorateIdEXT\0" // IR(37120, 20)
  "ConstantSizeOfEXT\0" // IR(37140, 18)
  "SpecConstantDataKHR\0" // IR(37158, 20)
  "PoisonKHR\0" // IR(37178, 10)
  "FreezeKHR\0" // IR(37188, 10)
  "HitObjectRecordHitMotionNV\0" // IR(37198, 27)
  "HitObjectRecordHitWithIndexMotionNV\0" // IR(37225, 36)
  "HitObjectRecordMissMotionNV\0" // IR(37261, 28)
  "HitObjectGetWorldToObjectNV\0" // IR(37289, 28)
  "HitObjectGetObjectToWorldNV\0" // IR(37317, 28)
  "HitObjectGetObjectRayDirectionNV\0" // IR(37345, 33)
  "HitObjectGetObjectRayOriginNV\0" // IR(37378, 30)
  "HitObjectTraceRayMotionNV\0" // IR(37408, 26)
  "HitObjectGetShaderRecordBufferHandleNV\0" // IR(37434, 39)
  "HitObjectGetShaderBindingTableRecordIndexNV\0" // IR(37473, 44)
  "HitObjectRecordEmptyNV\0" // IR(37517, 23)
  "HitObjectTraceRayNV\0" // IR(37540, 20)
  "HitObjectRecordHitNV\0" // IR(37560, 21)
  "HitObjectRecordHitWithIndexNV\0" // IR(37581, 30)
  "HitObjectRecordMissNV\0" // IR(37611, 22)
  "HitObjectExecuteShaderNV\0" // IR(37633, 25)
  "HitObjectGetCurrentTimeNV\0" // IR(37658, 26)
  "HitObjectGetAttributesNV\0" // IR(37684, 25)
  "HitObjectGetHitKindNV\0" // IR(37709, 22)
  "HitObjectGetPrimitiveIndexNV\0" // IR(37731, 29)
  "HitObjectGetGeometryIndexNV\0" // IR(37760, 28)
  "HitObjectGetInstanceIdNV\0" // IR(37788, 25)
  "HitObjectGetInstanceCustomIndexNV\0" // IR(37813, 34)
  "HitObjectGetWorldRayDirectionNV\0" // IR(37847, 32)
  "HitObjectGetWorldRayOriginNV\0" // IR(37879, 29)
  "HitObjectGetRayTMaxNV\0" // IR(37908, 22)
  "HitObjectGetRayTMinNV\0" // IR(37930, 22)
  "HitObjectIsEmptyNV\0" // IR(37952, 19)
  "HitObjectIsHitNV\0" // IR(37971, 17)
  "HitObjectIsMissNV\0" // IR(37988, 18)
  "ReorderThreadWithHitObjectNV\0" // IR(38006, 29)
  "ReorderThreadWithHintNV\0" // IR(38035, 24)
  "TypeHitObjectNV\0" // IR(38059, 16)
  "ImageSampleFootprintNV\0" // IR(38075, 23)
  "TypeVectorIdEXT\0" // IR(38098, 16)
  "TypeCooperativeVectorNV\0" // IR(38114, 24)
  "CooperativeVectorMatrixMulNV\0" // IR(38138, 29)
  "CooperativeVectorOuterProductAccumulateNV\0" // IR(38167, 42)
  "CooperativeVectorReduceSumAccumulateNV\0" // IR(38209, 39)
  "CooperativeVectorMatrixMulAddNV\0" // IR(38248, 32)
  "CooperativeMatrixConvertNV\0" // IR(38280, 27)
  "EmitMeshTasksEXT\0" // IR(38307, 17)
  "SetMeshOutputsEXT\0" // IR(38324, 18)
  "GroupNonUniformPartitionEXT\0" // IR(38342, 28)
  "GroupNonUniformPartitionNV\0" // IR(38370, 27)
  "WritePackedPrimitiveIndices4x8NV\0" // IR(38397, 33)
  "FetchMicroTriangleVertexPositionNV\0" // IR(38430, 35)
  "FetchMicroTriangleVertexBarycentricNV\0" // IR(38465, 38)
  "CooperativeVectorLoadNV\0" // IR(38503, 24)
  "CooperativeVectorStoreNV\0" // IR(38527, 25)
  "HitObjectRecordFromQueryEXT\0" // IR(38552, 28)
  "HitObjectRecordMissEXT\0" // IR(38580, 23)
  "HitObjectRecordMissMotionEXT\0" // IR(38603, 29)
  "HitObjectGetIntersectionTriangleVertexPositionsEXT\0" // IR(38632, 51)
  "HitObjectGetRayFlagsEXT\0" // IR(38683, 24)
  "HitObjectSetShaderBindingTableRecordIndexEXT\0" // IR(38707, 45)
  "HitObjectReorderExecuteShaderEXT\0" // IR(38752, 33)
  "HitObjectTraceReorderExecuteEXT\0" // IR(38785, 32)
  "HitObjectTraceMotionReorderExecuteEXT\0" // IR(38817, 38)
  "TypeHitObjectEXT\0" // IR(38855, 17)
  "ReorderThreadWithHintEXT\0" // IR(38872, 25)
  "ReorderThreadWithHitObjectEXT\0" // IR(38897, 30)
  "HitObjectTraceRayEXT\0" // IR(38927, 21)
  "HitObjectTraceRayMotionEXT\0" // IR(38948, 27)
  "HitObjectRecordEmptyEXT\0" // IR(38975, 24)
  "HitObjectExecuteShaderEXT\0" // IR(38999, 26)
  "HitObjectGetCurrentTimeEXT\0" // IR(39025, 27)
  "HitObjectGetAttributesEXT\0" // IR(39052, 26)
  "HitObjectGetHitKindEXT\0" // IR(39078, 23)
  "HitObjectGetPrimitiveIndexEXT\0" // IR(39101, 30)
  "HitObjectGetGeometryIndexEXT\0" // IR(39131, 29)
  "HitObjectGetInstanceIdEXT\0" // IR(39160, 26)
  "HitObjectGetInstanceCustomIndexEXT\0" // IR(39186, 35)
  "HitObjectGetObjectRayOriginEXT\0" // IR(39221, 31)
  "HitObjectGetObjectRayDirectionEXT\0" // IR(39252, 34)
  "HitObjectGetWorldRayDirectionEXT\0" // IR(39286, 33)
  "HitObjectGetWorldRayOriginEXT\0" // IR(39319, 30)
  "HitObjectGetObjectToWorldEXT\0" // IR(39349, 29)
  "HitObjectGetWorldToObjectEXT\0" // IR(39378, 29)
  "HitObjectGetRayTMaxEXT\0" // IR(39407, 23)
  "ReportIntersectionKHR\0" // IR(39430, 22)
  "ReportIntersectionNV\0" // IR(39452, 21)
  "IgnoreIntersectionNV\0" // IR(39473, 21)
  "TerminateRayNV\0" // IR(39494, 15)
  "TraceNV\0" // IR(39509, 8)
  "TraceMotionNV\0" // IR(39517, 14)
  "TraceRayMotionNV\0" // IR(39531, 17)
  "RayQueryGetIntersectionTriangleVertexPositionsKHR\0" // IR(39548, 50)
  "TypeAccelerationStructureKHR\0" // IR(39598, 29)
  "TypeAccelerationStructureNV\0" // IR(39627, 28)
  "ExecuteCallableNV\0" // IR(39655, 18)
  "RayQueryGetIntersectionClusterIdNV\0" // IR(39673, 35)
  "RayQueryGetClusterIdNV\0" // IR(39708, 23)
  "HitObjectGetClusterIdNV\0" // IR(39731, 24)
  "HitObjectGetRayTMinEXT\0" // IR(39755, 23)
  "HitObjectGetShaderBindingTableRecordIndexEXT\0" // IR(39778, 45)
  "HitObjectGetShaderRecordBufferHandleEXT\0" // IR(39823, 40)
  "HitObjectIsEmptyEXT\0" // IR(39863, 20)
  "HitObjectIsHitEXT\0" // IR(39883, 18)
  "HitObjectIsMissEXT\0" // IR(39901, 19)
  "TypeCooperativeMatrixNV\0" // IR(39920, 24)
  "CooperativeMatrixLoadNV\0" // IR(39944, 24)
  "CooperativeMatrixStoreNV\0" // IR(39968, 25)
  "CooperativeMatrixMulAddNV\0" // IR(39993, 26)
  "CooperativeMatrixLengthNV\0" // IR(40019, 26)
  "BeginInvocationInterlockEXT\0" // IR(40045, 28)
  "EndInvocationInterlockEXT\0" // IR(40073, 26)
  "SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE\0" // IR(40099, 43)
  "CooperativeMatrixReduceNV\0" // IR(40142, 26)
  "SPV_OPERAND_TYPE_MEMORY_ACCESS\0" // IR(40168, 31)
  "SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS\0" // IR(40199, 44)
  "CooperativeMatrixLoadTensorNV\0" // IR(40243, 30)
  "CooperativeMatrixStoreTensorNV\0" // IR(40273, 31)
  "CooperativeMatrixPerElementOpNV\0" // IR(40304, 32)
  "TypeTensorLayoutNV\0" // IR(40336, 19)
  "TypeTensorViewNV\0" // IR(40355, 17)
  "CreateTensorLayoutNV\0" // IR(40372, 21)
  "TensorLayoutSetDimensionNV\0" // IR(40393, 27)
  "TensorLayoutSetStrideNV\0" // IR(40420, 24)
  "TensorLayoutSliceNV\0" // IR(40444, 20)
  "TensorLayoutSetClampValueNV\0" // IR(40464, 28)
  "CreateTensorViewNV\0" // IR(40492, 19)
  "TensorViewSetDimensionNV\0" // IR(40511, 25)
  "TensorViewSetStrideNV\0" // IR(40536, 22)
  "IsHelperInvocationEXT\0" // IR(40558, 22)
  "TensorViewSetClipNV\0" // IR(40580, 20)
  "TensorLayoutSetBlockSizeNV\0" // IR(40600, 27)
  "CooperativeMatrixTransposeNV\0" // IR(40627, 29)
  "ConvertUToImageNV\0" // IR(40656, 18)
  "ConvertUToSamplerNV\0" // IR(40674, 20)
  "ConvertImageToUNV\0" // IR(40694, 18)
  "ConvertSamplerToUNV\0" // IR(40712, 20)
  "ConvertUToSampledImageNV\0" // IR(40732, 25)
  "ConvertSampledImageToUNV\0" // IR(40757, 25)
  "SamplerImageAddressingModeNV\0" // IR(40782, 29)
  "SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS\0" // IR(40811, 52)
  "RawAccessChainNV\0" // IR(40863, 17)
  "RayQueryGetIntersectionSpherePositionNV\0" // IR(40880, 40)
  "RayQueryGetIntersectionSphereRadiusNV\0" // IR(40920, 38)
  "RayQueryGetIntersectionLSSPositionsNV\0" // IR(40958, 38)
  "RayQueryGetIntersectionLSSRadiiNV\0" // IR(40996, 34)
  "RayQueryGetIntersectionLSSHitValueNV\0" // IR(41030, 37)
  "HitObjectGetSpherePositionNV\0" // IR(41067, 29)
  "HitObjectGetSphereRadiusNV\0" // IR(41096, 27)
  "HitObjectGetLSSPositionsNV\0" // IR(41123, 27)
  "HitObjectGetLSSRadiiNV\0" // IR(41150, 23)
  "HitObjectIsSphereHitNV\0" // IR(41173, 23)
  "HitObjectIsLSSHitNV\0" // IR(41196, 20)
  "RayQueryIsSphereHitNV\0" // IR(41216, 22)
  "RayQueryIsLSSHitNV\0" // IR(41238, 19)
  "SubgroupShuffleDownINTEL\0" // IR(41257, 25)
  "SubgroupShuffleUpINTEL\0" // IR(41282, 23)
  "SubgroupShuffleXorINTEL\0" // IR(41305, 24)
  "SubgroupBlockReadINTEL\0" // IR(41329, 23)
  "SubgroupBlockWriteINTEL\0" // IR(41352, 24)
  "SubgroupImageBlockReadINTEL\0" // IR(41376, 28)
  "SubgroupImageBlockWriteINTEL\0" // IR(41404, 29)
  "SubgroupImageMediaBlockReadINTEL\0" // IR(41433, 33)
  "SubgroupImageMediaBlockWriteINTEL\0" // IR(41466, 34)
  "UCountLeadingZerosINTEL\0" // IR(41500, 24)
  "UCountTrailingZerosINTEL\0" // IR(41524, 25)
  "AbsISubINTEL\0" // IR(41549, 13)
  "AbsUSubINTEL\0" // IR(41562, 13)
  "IAddSatINTEL\0" // IR(41575, 13)
  "UAddSatINTEL\0" // IR(41588, 13)
  "IAverageINTEL\0" // IR(41601, 14)
  "UAverageINTEL\0" // IR(41615, 14)
  "IAverageRoundedINTEL\0" // IR(41629, 21)
  "UAverageRoundedINTEL\0" // IR(41650, 21)
  "ISubSatINTEL\0" // IR(41671, 13)
  "USubSatINTEL\0" // IR(41684, 13)
  "IMul32x16INTEL\0" // IR(41697, 15)
  "UMul32x16INTEL\0" // IR(41712, 15)
  "ConstantFunctionPointerINTEL\0" // IR(41727, 29)
  "FunctionPointerCallINTEL\0" // IR(41756, 25)
  "AsmTargetINTEL\0" // IR(41781, 15)
  "AsmCallINTEL\0" // IR(41796, 13)
  "AtomicFMinEXT\0" // IR(41809, 14)
  "AtomicFMaxEXT\0" // IR(41823, 14)
  "AssumeTrueKHR\0" // IR(41837, 14)
  "ExpectKHR\0" // IR(41851, 10)
  "DecorateString\0" // IR(41861, 15)
  "DecorateStringGOOGLE\0" // IR(41876, 21)
  "MemberDecorateString\0" // IR(41897, 21)
  "MemberDecorateStringGOOGLE\0" // IR(41918, 27)
  "VmeImageINTEL\0" // IR(41945, 14)
  "TypeVmeImageINTEL\0" // IR(41959, 18)
  "TypeAvcImePayloadINTEL\0" // IR(41977, 23)
  "TypeAvcRefPayloadINTEL\0" // IR(42000, 23)
  "TypeAvcSicPayloadINTEL\0" // IR(42023, 23)
  "TypeAvcMcePayloadINTEL\0" // IR(42046, 23)
  "TypeAvcMceResultINTEL\0" // IR(42069, 22)
  "TypeAvcImeResultINTEL\0" // IR(42091, 22)
  "TypeAvcImeResultSingleReferenceStreamoutINTEL\0" // IR(42113, 46)
  "TypeAvcImeResultDualReferenceStreamoutINTEL\0" // IR(42159, 44)
  "TypeAvcImeSingleReferenceStreaminINTEL\0" // IR(42203, 39)
  "TypeAvcImeDualReferenceStreaminINTEL\0" // IR(42242, 37)
  "TypeAvcRefResultINTEL\0" // IR(42279, 22)
  "TypeAvcSicResultINTEL\0" // IR(42301, 22)
  "SubgroupAvcMceGetDefaultInterBaseMultiReferencePenaltyINTEL\0" // IR(42323, 60)
  "SubgroupAvcMceSetInterBaseMultiReferencePenaltyINTEL\0" // IR(42383, 53)
  "SubgroupAvcMceGetDefaultInterShapePenaltyINTEL\0" // IR(42436, 47)
  "SubgroupAvcMceSetInterShapePenaltyINTEL\0" // IR(42483, 40)
  "SubgroupAvcMceGetDefaultInterDirectionPenaltyINTEL\0" // IR(42523, 51)
  "SubgroupAvcMceSetInterDirectionPenaltyINTEL\0" // IR(42574, 44)
  "SubgroupAvcMceGetDefaultIntraLumaShapePenaltyINTEL\0" // IR(42618, 51)
  "SubgroupAvcMceGetDefaultInterMotionVectorCostTableINTEL\0" // IR(42669, 56)
  "SubgroupAvcMceGetDefaultHighPenaltyCostTableINTEL\0" // IR(42725, 50)
  "SubgroupAvcMceGetDefaultMediumPenaltyCostTableINTEL\0" // IR(42775, 52)
  "SubgroupAvcMceGetDefaultLowPenaltyCostTableINTEL\0" // IR(42827, 49)
  "SubgroupAvcMceSetMotionVectorCostFunctionINTEL\0" // IR(42876, 47)
  "SubgroupAvcMceGetDefaultIntraLumaModePenaltyINTEL\0" // IR(42923, 50)
  "SubgroupAvcMceGetDefaultNonDcLumaIntraPenaltyINTEL\0" // IR(42973, 51)
  "SubgroupAvcMceGetDefaultIntraChromaModeBasePenaltyINTEL\0" // IR(43024, 56)
  "SubgroupAvcMceSetAcOnlyHaarINTEL\0" // IR(43080, 33)
  "SubgroupAvcMceSetSourceInterlacedFieldPolarityINTEL\0" // IR(43113, 52)
  "SubgroupAvcMceSetSingleReferenceInterlacedFieldPolarityINTEL\0" // IR(43165, 61)
  "SubgroupAvcMceSetDualReferenceInterlacedFieldPolaritiesINTEL\0" // IR(43226, 61)
  "SubgroupAvcMceConvertToImePayloadINTEL\0" // IR(43287, 39)
  "SubgroupAvcMceConvertToImeResultINTEL\0" // IR(43326, 38)
  "SubgroupAvcMceConvertToRefPayloadINTEL\0" // IR(43364, 39)
  "SubgroupAvcMceConvertToRefResultINTEL\0" // IR(43403, 38)
  "SubgroupAvcMceConvertToSicPayloadINTEL\0" // IR(43441, 39)
  "SubgroupAvcMceConvertToSicResultINTEL\0" // IR(43480, 38)
  "SubgroupAvcMceGetMotionVectorsINTEL\0" // IR(43518, 36)
  "SubgroupAvcMceGetInterDistortionsINTEL\0" // IR(43554, 39)
  "SubgroupAvcMceGetBestInterDistortionsINTEL\0" // IR(43593, 43)
  "SubgroupAvcMceGetInterMajorShapeINTEL\0" // IR(43636, 38)
  "SubgroupAvcMceGetInterMinorShapeINTEL\0" // IR(43674, 38)
  "SubgroupAvcMceGetInterDirectionsINTEL\0" // IR(43712, 38)
  "SubgroupAvcMceGetInterMotionVectorCountINTEL\0" // IR(43750, 45)
  "SubgroupAvcMceGetInterReferenceIdsINTEL\0" // IR(43795, 40)
  "SubgroupAvcMceGetInterReferenceInterlacedFieldPolaritiesINTEL\0" // IR(43835, 62)
  "SubgroupAvcImeInitializeINTEL\0" // IR(43897, 30)
  "SubgroupAvcImeSetSingleReferenceINTEL\0" // IR(43927, 38)
  "SubgroupAvcImeSetDualReferenceINTEL\0" // IR(43965, 36)
  "SubgroupAvcImeRefWindowSizeINTEL\0" // IR(44001, 33)
  "SubgroupAvcImeAdjustRefOffsetINTEL\0" // IR(44034, 35)
  "SubgroupAvcImeConvertToMcePayloadINTEL\0" // IR(44069, 39)
  "SubgroupAvcImeSetMaxMotionVectorCountINTEL\0" // IR(44108, 43)
  "SubgroupAvcImeSetUnidirectionalMixDisableINTEL\0" // IR(44151, 47)
  "SubgroupAvcImeSetEarlySearchTerminationThresholdINTEL\0" // IR(44198, 54)
  "SubgroupAvcImeSetWeightedSadINTEL\0" // IR(44252, 34)
  "SubgroupAvcImeEvaluateWithSingleReferenceINTEL\0" // IR(44286, 47)
  "SubgroupAvcImeEvaluateWithDualReferenceINTEL\0" // IR(44333, 45)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreaminINTEL\0" // IR(44378, 55)
  "SubgroupAvcImeEvaluateWithDualReferenceStreaminINTEL\0" // IR(44433, 53)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreamoutINTEL\0" // IR(44486, 56)
  "SubgroupAvcImeEvaluateWithDualReferenceStreamoutINTEL\0" // IR(44542, 54)
  "SubgroupAvcImeEvaluateWithSingleReferenceStreaminoutINTEL\0" // IR(44596, 58)
  "SubgroupAvcImeEvaluateWithDualReferenceStreaminoutINTEL\0" // IR(44654, 56)
  "SubgroupAvcImeConvertToMceResultINTEL\0" // IR(44710, 38)
  "SubgroupAvcImeGetSingleReferenceStreaminINTEL\0" // IR(44748, 46)
  "SubgroupAvcImeGetDualReferenceStreaminINTEL\0" // IR(44794, 44)
  "SubgroupAvcImeStripSingleReferenceStreamoutINTEL\0" // IR(44838, 49)
  "SubgroupAvcImeStripDualReferenceStreamoutINTEL\0" // IR(44887, 47)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeMotionVectorsINTEL\0" // IR(44934, 70)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeDistortionsINTEL\0" // IR(45004, 68)
  "SubgroupAvcImeGetStreamoutSingleReferenceMajorShapeReferenceIdsINTEL\0" // IR(45072, 69)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeMotionVectorsINTEL\0" // IR(45141, 68)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeDistortionsINTEL\0" // IR(45209, 66)
  "SubgroupAvcImeGetStreamoutDualReferenceMajorShapeReferenceIdsINTEL\0" // IR(45275, 67)
  "SubgroupAvcImeGetBorderReachedINTEL\0" // IR(45342, 36)
  "SubgroupAvcImeGetTruncatedSearchIndicationINTEL\0" // IR(45378, 48)
  "SubgroupAvcImeGetUnidirectionalEarlySearchTerminationINTEL\0" // IR(45426, 59)
  "SubgroupAvcImeGetWeightingPatternMinimumMotionVectorINTEL\0" // IR(45485, 58)
  "SubgroupAvcImeGetWeightingPatternMinimumDistortionINTEL\0" // IR(45543, 56)
  "SubgroupAvcFmeInitializeINTEL\0" // IR(45599, 30)
  "SubgroupAvcBmeInitializeINTEL\0" // IR(45629, 30)
  "SubgroupAvcRefConvertToMcePayloadINTEL\0" // IR(45659, 39)
  "SubgroupAvcRefSetBidirectionalMixDisableINTEL\0" // IR(45698, 46)
  "SubgroupAvcRefSetBilinearFilterEnableINTEL\0" // IR(45744, 43)
  "SubgroupAvcRefEvaluateWithSingleReferenceINTEL\0" // IR(45787, 47)
  "SubgroupAvcRefEvaluateWithDualReferenceINTEL\0" // IR(45834, 45)
  "SubgroupAvcRefEvaluateWithMultiReferenceINTEL\0" // IR(45879, 46)
  "SubgroupAvcRefEvaluateWithMultiReferenceInterlacedINTEL\0" // IR(45925, 56)
  "SubgroupAvcRefConvertToMceResultINTEL\0" // IR(45981, 38)
  "SubgroupAvcSicInitializeINTEL\0" // IR(46019, 30)
  "SubgroupAvcSicConfigureSkcINTEL\0" // IR(46049, 32)
  "SubgroupAvcSicConfigureIpeLumaINTEL\0" // IR(46081, 36)
  "SubgroupAvcSicConfigureIpeLumaChromaINTEL\0" // IR(46117, 42)
  "SubgroupAvcSicGetMotionVectorMaskINTEL\0" // IR(46159, 39)
  "SubgroupAvcSicConvertToMcePayloadINTEL\0" // IR(46198, 39)
  "SubgroupAvcSicSetIntraLumaShapePenaltyINTEL\0" // IR(46237, 44)
  "SubgroupAvcSicSetIntraLumaModeCostFunctionINTEL\0" // IR(46281, 48)
  "SubgroupAvcSicSetIntraChromaModeCostFunctionINTEL\0" // IR(46329, 50)
  "SubgroupAvcSicSetBilinearFilterEnableINTEL\0" // IR(46379, 43)
  "SubgroupAvcSicSetSkcForwardTransformEnableINTEL\0" // IR(46422, 48)
  "SubgroupAvcSicSetBlockBasedRawSkipSadINTEL\0" // IR(46470, 43)
  "SubgroupAvcSicEvaluateIpeINTEL\0" // IR(46513, 31)
  "SubgroupAvcSicEvaluateWithSingleReferenceINTEL\0" // IR(46544, 47)
  "SubgroupAvcSicEvaluateWithDualReferenceINTEL\0" // IR(46591, 45)
  "SubgroupAvcSicEvaluateWithMultiReferenceINTEL\0" // IR(46636, 46)
  "SubgroupAvcSicEvaluateWithMultiReferenceInterlacedINTEL\0" // IR(46682, 56)
  "SubgroupAvcSicConvertToMceResultINTEL\0" // IR(46738, 38)
  "SubgroupAvcSicGetIpeLumaShapeINTEL\0" // IR(46776, 35)
  "SubgroupAvcSicGetBestIpeLumaDistortionINTEL\0" // IR(46811, 44)
  "SubgroupAvcSicGetBestIpeChromaDistortionINTEL\0" // IR(46855, 46)
  "SubgroupAvcSicGetPackedIpeLumaModesINTEL\0" // IR(46901, 41)
  "SubgroupAvcSicGetIpeChromaModeINTEL\0" // IR(46942, 36)
  "SubgroupAvcSicGetPackedSkcLumaCountThresholdINTEL\0" // IR(46978, 50)
  "SubgroupAvcSicGetPackedSkcLumaSumThresholdINTEL\0" // IR(47028, 48)
  "SubgroupAvcSicGetInterRawSadsINTEL\0" // IR(47076, 35)
  "SaveMemoryINTEL\0" // IR(47111, 16)
  "RestoreMemoryINTEL\0" // IR(47127, 19)
  "ArbitraryFloatSinCosPiALTERA\0" // IR(47146, 29)
  "ArbitraryFloatSinCosPiINTEL\0" // IR(47175, 28)
  "ArbitraryFloatCastALTERA\0" // IR(47203, 25)
  "ArbitraryFloatCastINTEL\0" // IR(47228, 24)
  "ArbitraryFloatCastFromIntALTERA\0" // IR(47252, 32)
  "ArbitraryFloatCastFromIntINTEL\0" // IR(47284, 31)
  "ArbitraryFloatCastToIntALTERA\0" // IR(47315, 30)
  "ArbitraryFloatCastToIntINTEL\0" // IR(47345, 29)
  "ArbitraryFloatAddALTERA\0" // IR(47374, 24)
  "ArbitraryFloatAddINTEL\0" // IR(47398, 23)
  "ArbitraryFloatSubALTERA\0" // IR(47421, 24)
  "ArbitraryFloatSubINTEL\0" // IR(47445, 23)
  "ArbitraryFloatMulALTERA\0" // IR(47468, 24)
  "ArbitraryFloatMulINTEL\0" // IR(47492, 23)
  "ArbitraryFloatDivALTERA\0" // IR(47515, 24)
  "ArbitraryFloatDivINTEL\0" // IR(47539, 23)
  "ArbitraryFloatGTALTERA\0" // IR(47562, 23)
  "ArbitraryFloatGTINTEL\0" // IR(47585, 22)
  "ArbitraryFloatGEALTERA\0" // IR(47607, 23)
  "ArbitraryFloatGEINTEL\0" // IR(47630, 22)
  "ArbitraryFloatLTALTERA\0" // IR(47652, 23)
  "ArbitraryFloatLTINTEL\0" // IR(47675, 22)
  "ArbitraryFloatLEALTERA\0" // IR(47697, 23)
  "ArbitraryFloatLEINTEL\0" // IR(47720, 22)
  "ArbitraryFloatEQALTERA\0" // IR(47742, 23)
  "ArbitraryFloatEQINTEL\0" // IR(47765, 22)
  "ArbitraryFloatRecipALTERA\0" // IR(47787, 26)
  "ArbitraryFloatRecipINTEL\0" // IR(47813, 25)
  "ArbitraryFloatRSqrtALTERA\0" // IR(47838, 26)
  "ArbitraryFloatRSqrtINTEL\0" // IR(47864, 25)
  "ArbitraryFloatCbrtALTERA\0" // IR(47889, 25)
  "ArbitraryFloatCbrtINTEL\0" // IR(47914, 24)
  "ArbitraryFloatHypotALTERA\0" // IR(47938, 26)
  "ArbitraryFloatHypotINTEL\0" // IR(47964, 25)
  "ArbitraryFloatSqrtALTERA\0" // IR(47989, 25)
  "ArbitraryFloatSqrtINTEL\0" // IR(48014, 24)
  "ArbitraryFloatLogINTEL\0" // IR(48038, 23)
  "ArbitraryFloatLog2INTEL\0" // IR(48061, 24)
  "ArbitraryFloatLog10INTEL\0" // IR(48085, 25)
  "ArbitraryFloatLog1pINTEL\0" // IR(48110, 25)
  "ArbitraryFloatExpINTEL\0" // IR(48135, 23)
  "ArbitraryFloatExp2INTEL\0" // IR(48158, 24)
  "ArbitraryFloatExp10INTEL\0" // IR(48182, 25)
  "ArbitraryFloatExpm1INTEL\0" // IR(48207, 25)
  "ArbitraryFloatSinINTEL\0" // IR(48232, 23)
  "ArbitraryFloatCosINTEL\0" // IR(48255, 23)
  "ArbitraryFloatSinCosINTEL\0" // IR(48278, 26)
  "ArbitraryFloatSinPiINTEL\0" // IR(48304, 25)
  "ArbitraryFloatCosPiINTEL\0" // IR(48329, 25)
  "ArbitraryFloatASinINTEL\0" // IR(48354, 24)
  "ArbitraryFloatASinPiINTEL\0" // IR(48378, 26)
  "ArbitraryFloatACosINTEL\0" // IR(48404, 24)
  "ArbitraryFloatACosPiINTEL\0" // IR(48428, 26)
  "ArbitraryFloatATanINTEL\0" // IR(48454, 24)
  "ArbitraryFloatATanPiINTEL\0" // IR(48478, 26)
  "ArbitraryFloatATan2INTEL\0" // IR(48504, 25)
  "ArbitraryFloatPowINTEL\0" // IR(48529, 23)
  "ArbitraryFloatPowRINTEL\0" // IR(48552, 24)
  "ArbitraryFloatPowNINTEL\0" // IR(48576, 24)
  "LoopControlINTEL\0" // IR(48600, 17)
  "AliasDomainDeclINTEL\0" // IR(48617, 21)
  "AliasScopeDeclINTEL\0" // IR(48638, 20)
  "AliasScopeListDeclINTEL\0" // IR(48658, 24)
  "FixedSqrtALTERA\0" // IR(48682, 16)
  "FixedSqrtINTEL\0" // IR(48698, 15)
  "FixedRecipALTERA\0" // IR(48713, 17)
  "FixedRecipINTEL\0" // IR(48730, 16)
  "FixedRsqrtALTERA\0" // IR(48746, 17)
  "FixedRsqrtINTEL\0" // IR(48763, 16)
  "FixedSinALTERA\0" // IR(48779, 15)
  "FixedSinINTEL\0" // IR(48794, 14)
  "FixedCosALTERA\0" // IR(48808, 15)
  "FixedCosINTEL\0" // IR(48823, 14)
  "FixedSinCosALTERA\0" // IR(48837, 18)
  "FixedSinCosINTEL\0" // IR(48855, 17)
  "FixedSinPiALTERA\0" // IR(48872, 17)
  "FixedSinPiINTEL\0" // IR(48889, 16)
  "FixedCosPiALTERA\0" // IR(48905, 17)
  "FixedCosPiINTEL\0" // IR(48922, 16)
  "FixedSinCosPiALTERA\0" // IR(48938, 20)
  "FixedSinCosPiINTEL\0" // IR(48958, 19)
  "FixedLogALTERA\0" // IR(48977, 15)
  "FixedLogINTEL\0" // IR(48992, 14)
  "FixedExpALTERA\0" // IR(49006, 15)
  "FixedExpINTEL\0" // IR(49021, 14)
  "PtrCastToCrossWorkgroupALTERA\0" // IR(49035, 30)
  "PtrCastToCrossWorkgroupINTEL\0" // IR(49065, 29)
  "CrossWorkgroupCastToPtrALTERA\0" // IR(49094, 30)
  "CrossWorkgroupCastToPtrINTEL\0" // IR(49124, 29)
  "ReadPipeBlockingALTERA\0" // IR(49153, 23)
  "ReadPipeBlockingINTEL\0" // IR(49176, 22)
  "WritePipeBlockingALTERA\0" // IR(49198, 24)
  "WritePipeBlockingINTEL\0" // IR(49222, 23)
  "RayQueryGetRayTMinKHR\0" // IR(49245, 22)
  "RayQueryGetRayFlagsKHR\0" // IR(49267, 23)
  "RayQueryGetIntersectionTKHR\0" // IR(49290, 28)
  "RayQueryGetIntersectionInstanceCustomIndexKHR\0" // IR(49318, 46)
  "RayQueryGetIntersectionInstanceIdKHR\0" // IR(49364, 37)
  "RayQueryGetIntersectionInstanceShaderBindingTableRecordOffsetKHR\0" // IR(49401, 65)
  "RayQueryGetIntersectionGeometryIndexKHR\0" // IR(49466, 40)
  "RayQueryGetIntersectionPrimitiveIndexKHR\0" // IR(49506, 41)
  "RayQueryGetIntersectionBarycentricsKHR\0" // IR(49547, 39)
  "RayQueryGetIntersectionFrontFaceKHR\0" // IR(49586, 36)
  "RayQueryGetIntersectionCandidateAABBOpaqueKHR\0" // IR(49622, 46)
  "RayQueryGetIntersectionObjectRayDirectionKHR\0" // IR(49668, 45)
  "RayQueryGetIntersectionObjectRayOriginKHR\0" // IR(49713, 42)
  "RayQueryGetWorldRayDirectionKHR\0" // IR(49755, 32)
  "RayQueryGetWorldRayOriginKHR\0" // IR(49787, 29)
  "RayQueryGetIntersectionObjectToWorldKHR\0" // IR(49816, 40)
  "RayQueryGetIntersectionWorldToObjectKHR\0" // IR(49856, 40)
  "AtomicFAddEXT\0" // IR(49896, 14)
  "TypeBufferSurfaceINTEL\0" // IR(49910, 23)
  "TypeStructContinuedINTEL\0" // IR(49933, 25)
  "ConstantCompositeContinuedINTEL\0" // IR(49958, 32)
  "SpecConstantCompositeContinuedINTEL\0" // IR(49990, 36)
  "CompositeConstructContinuedINTEL\0" // IR(50026, 33)
  "ConvertFToBF16INTEL\0" // IR(50059, 20)
  "ConvertBF16ToFINTEL\0" // IR(50079, 20)
  "ControlBarrierArriveINTEL\0" // IR(50099, 26)
  "ControlBarrierWaitINTEL\0" // IR(50125, 24)
  "TaskSequenceCreateALTERA\0" // IR(50149, 25)
  "TaskSequenceCreateINTEL\0" // IR(50174, 24)
  "TaskSequenceAsyncALTERA\0" // IR(50198, 24)
  "TaskSequenceAsyncINTEL\0" // IR(50222, 23)
  "TaskSequenceGetALTERA\0" // IR(50245, 22)
  "TaskSequenceGetINTEL\0" // IR(50267, 21)
  "TaskSequenceReleaseALTERA\0" // IR(50288, 26)
  "TaskSequenceReleaseINTEL\0" // IR(50314, 25)
  "TypeTaskSequenceALTERA\0" // IR(50339, 23)
  "TypeTaskSequenceINTEL\0" // IR(50362, 22)
  "SubgroupBlockPrefetchINTEL\0" // IR(50384, 27)
  "Subgroup2DBlockLoadINTEL\0" // IR(50411, 25)
  "Subgroup2DBlockLoadTransformINTEL\0" // IR(50436, 34)
  "Subgroup2DBlockLoadTransposeINTEL\0" // IR(50470, 34)
  "Subgroup2DBlockPrefetchINTEL\0" // IR(50504, 29)
  "Subgroup2DBlockStoreINTEL\0" // IR(50533, 26)
  "SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS\0" // IR(50559, 62)
  "BitwiseFunctionINTEL\0" // IR(50621, 21)
  "ConditionalExtensionINTEL\0" // IR(50642, 26)
  "ConditionalEntryPointINTEL\0" // IR(50668, 27)
  "ConditionalCapabilityINTEL\0" // IR(50695, 27)
  "SpecConstantTargetINTEL\0" // IR(50722, 24)
  "SpecConstantArchitectureINTEL\0" // IR(50746, 30)
  "SPV_OPERAND_TYPE_VARIABLE_CAPABILITY\0" // IR(50776, 37)
  "SpecConstantCapabilitiesINTEL\0" // IR(50813, 30)
  "ConditionalCopyObjectINTEL\0" // IR(50843, 27)
  "PredicatedLoadINTEL\0" // IR(50870, 20)
  "PredicatedStoreINTEL\0" // IR(50890, 21)
  "GroupIMulKHR\0" // IR(50911, 13)
  "GroupFMulKHR\0" // IR(50924, 13)
  "GroupBitwiseAndKHR\0" // IR(50937, 19)
  "GroupBitwiseOrKHR\0" // IR(50956, 18)
  "GroupBitwiseXorKHR\0" // IR(50974, 19)
  "GroupLogicalAndKHR\0" // IR(50993, 19)
  "GroupLogicalOrKHR\0" // IR(51012, 18)
  "GroupLogicalXorKHR\0" // IR(51030, 19)
  "RoundFToTF32INTEL\0" // IR(51049, 18)
  "MaskedGatherINTEL\0" // IR(51067, 18)
  "MaskedScatterINTEL\0" // IR(51085, 19)
  "ConvertHandleToImageINTEL\0" // IR(51104, 26)
  "ConvertHandleToSamplerINTEL\0" // IR(51130, 28)
  "ConvertHandleToSampledImageINTEL\0" // IR(51158, 33)
  "FDot2MixAcc32VALVE\0" // IR(51191, 19)
  "FDot2MixAcc16VALVE\0" // IR(51210, 19)
  "FDot4MixAcc32VALVE\0" // IR(51229, 19)
  "MIN_SAD\0" // IR(51248, 8)
  "MIN_SAD_COST\0" // IR(51256, 13)
  "RAW_SAD\0" // IR(51269, 8)
  "DebugInfoNone\0" // IR(51277, 14)
  "DebugCompilationUnit\0" // IR(51291, 21)
  "SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING\0" // IR(51312, 52)
  "DebugTypeBasic\0" // IR(51364, 15)
  "SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS\0" // IR(51379, 34)
  "DebugTypePointer\0" // IR(51413, 17)
  "SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER\0" // IR(51430, 38)
  "DebugTypeQualifier\0" // IR(51468, 19)
  "DebugTypeArray\0" // IR(51487, 15)
  "DebugTypeVector\0" // IR(51502, 16)
  "DebugTypedef\0" // IR(51518, 13)
  "DebugTypeFunction\0" // IR(51531, 18)
  "DebugTypeEnum\0" // IR(51549, 14)
  "SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE\0" // IR(51563, 38)
  "DebugTypeComposite\0" // IR(51601, 19)
  "DebugTypeMember\0" // IR(51620, 16)
  "DebugTypeInheritance\0" // IR(51636, 21)
  "DebugTypePtrToMember\0" // IR(51657, 21)
  "DebugTypeTemplate\0" // IR(51678, 18)
  "DebugTypeTemplateParameter\0" // IR(51696, 27)
  "DebugTypeTemplateTemplateParameter\0" // IR(51723, 35)
  "DebugTypeTemplateParameterPack\0" // IR(51758, 31)
  "DebugGlobalVariable\0" // IR(51789, 20)
  "DebugFunctionDeclaration\0" // IR(51809, 25)
  "DebugFunction\0" // IR(51834, 14)
  "DebugLexicalBlock\0" // IR(51848, 18)
  "DebugLexicalBlockDiscriminator\0" // IR(51866, 31)
  "DebugScope\0" // IR(51897, 11)
  "DebugNoScope\0" // IR(51908, 13)
  "DebugInlinedAt\0" // IR(51921, 15)
  "SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER\0" // IR(51936, 42)
  "DebugLocalVariable\0" // IR(51978, 19)
  "DebugInlinedVariable\0" // IR(51997, 21)
  "DebugDeclare\0" // IR(52018, 13)
  "DebugValue\0" // IR(52031, 11)
  "SPV_OPERAND_TYPE_DEBUG_OPERATION\0" // IR(52042, 33)
  "DebugOperation\0" // IR(52075, 15)
  "DebugExpression\0" // IR(52090, 16)
  "DebugMacroDef\0" // IR(52106, 14)
  "DebugMacroUndef\0" // IR(52120, 16)
  "Round\0" // IR(52136, 6)
  "RoundEven\0" // IR(52142, 10)
  "Trunc\0" // IR(52152, 6)
  "FAbs\0" // IR(52158, 5)
  "SAbs\0" // IR(52163, 5)
  "FSign\0" // IR(52168, 6)
  "SSign\0" // IR(52174, 6)
  "Floor\0" // IR(52180, 6)
  "Ceil\0" // IR(52186, 5)
  "Fract\0" // IR(52191, 6)
  "Radians\0" // IR(52197, 8)
  "Degrees\0" // IR(52205, 8)
  "Sin\0" // IR(52213, 4)
  "Cos\0" // IR(52217, 4)
  "Tan\0" // IR(52221, 4)
  "Asin\0" // IR(52225, 5)
  "Acos\0" // IR(52230, 5)
  "Atan\0" // IR(52235, 5)
  "Sinh\0" // IR(52240, 5)
  "Cosh\0" // IR(52245, 5)
  "Tanh\0" // IR(52250, 5)
  "Asinh\0" // IR(52255, 6)
  "Acosh\0" // IR(52261, 6)
  "Atanh\0" // IR(52267, 6)
  "Atan2\0" // IR(52273, 6)
  "Pow\0" // IR(52279, 4)
  "Exp\0" // IR(52283, 4)
  "Log\0" // IR(52287, 4)
  "Exp2\0" // IR(52291, 5)
  "Log2\0" // IR(52296, 5)
  "Sqrt\0" // IR(52301, 5)
  "InverseSqrt\0" // IR(52306, 12)
  "Determinant\0" // IR(52318, 12)
  "MatrixInverse\0" // IR(52330, 14)
  "Modf\0" // IR(52344, 5)
  "ModfStruct\0" // IR(52349, 11)
  "FMin\0" // IR(52360, 5)
  "UMin\0" // IR(52365, 5)
  "SMin\0" // IR(52370, 5)
  "FMax\0" // IR(52375, 5)
  "UMax\0" // IR(52380, 5)
  "SMax\0" // IR(52385, 5)
  "FClamp\0" // IR(52390, 7)
  "UClamp\0" // IR(52397, 7)
  "SClamp\0" // IR(52404, 7)
  "FMix\0" // IR(52411, 5)
  "IMix\0" // IR(52416, 5)
  "Step\0" // IR(52421, 5)
  "SmoothStep\0" // IR(52426, 11)
  "Fma\0" // IR(52437, 4)
  "Frexp\0" // IR(52441, 6)
  "FrexpStruct\0" // IR(52447, 12)
  "Ldexp\0" // IR(52459, 6)
  "PackSnorm4x8\0" // IR(52465, 13)
  "PackUnorm4x8\0" // IR(52478, 13)
  "PackSnorm2x16\0" // IR(52491, 14)
  "PackUnorm2x16\0" // IR(52505, 14)
  "PackHalf2x16\0" // IR(52519, 13)
  "PackDouble2x32\0" // IR(52532, 15)
  "UnpackSnorm2x16\0" // IR(52547, 16)
  "UnpackUnorm2x16\0" // IR(52563, 16)
  "UnpackHalf2x16\0" // IR(52579, 15)
  "UnpackSnorm4x8\0" // IR(52594, 15)
  "UnpackUnorm4x8\0" // IR(52609, 15)
  "UnpackDouble2x32\0" // IR(52624, 17)
  "Length\0" // IR(52641, 7)
  "Distance\0" // IR(52648, 9)
  "Cross\0" // IR(52657, 6)
  "Normalize\0" // IR(52663, 10)
  "FaceForward\0" // IR(52673, 12)
  "Reflect\0" // IR(52685, 8)
  "Refract\0" // IR(52693, 8)
  "FindILsb\0" // IR(52701, 9)
  "FindSMsb\0" // IR(52710, 9)
  "FindUMsb\0" // IR(52719, 9)
  "InterpolateAtCentroid\0" // IR(52728, 22)
  "InterpolateAtSample\0" // IR(52750, 20)
  "InterpolateAtOffset\0" // IR(52770, 20)
  "NMin\0" // IR(52790, 5)
  "NMax\0" // IR(52795, 5)
  "NClamp\0" // IR(52800, 7)
  "ArgumentInfo\0" // IR(52807, 13)
  "ArgumentStorageBuffer\0" // IR(52820, 22)
  "ArgumentUniform\0" // IR(52842, 16)
  "ArgumentPodStorageBuffer\0" // IR(52858, 25)
  "ArgumentPodUniform\0" // IR(52883, 19)
  "ArgumentPodPushConstant\0" // IR(52902, 24)
  "ArgumentSampledImage\0" // IR(52926, 21)
  "ArgumentStorageImage\0" // IR(52947, 21)
  "ArgumentSampler\0" // IR(52968, 16)
  "ArgumentWorkgroup\0" // IR(52984, 18)
  "SpecConstantWorkgroupSize\0" // IR(53002, 26)
  "SpecConstantGlobalOffset\0" // IR(53028, 25)
  "SpecConstantWorkDim\0" // IR(53053, 20)
  "PushConstantGlobalOffset\0" // IR(53073, 25)
  "PushConstantEnqueuedLocalSize\0" // IR(53098, 30)
  "PushConstantGlobalSize\0" // IR(53128, 23)
  "PushConstantRegionOffset\0" // IR(53151, 25)
  "PushConstantNumWorkgroups\0" // IR(53176, 26)
  "PushConstantRegionGroupOffset\0" // IR(53202, 30)
  "ConstantDataStorageBuffer\0" // IR(53232, 26)
  "ConstantDataUniform\0" // IR(53258, 20)
  "PropertyRequiredWorkgroupSize\0" // IR(53278, 30)
  "SpecConstantSubgroupMaxSize\0" // IR(53308, 28)
  "ArgumentPointerPushConstant\0" // IR(53336, 28)
  "ArgumentPointerUniform\0" // IR(53364, 23)
  "ProgramScopeVariablesStorageBuffer\0" // IR(53387, 35)
  "ProgramScopeVariablePointerRelocation\0" // IR(53422, 38)
  "ImageArgumentInfoChannelOrderPushConstant\0" // IR(53460, 42)
  "ImageArgumentInfoChannelDataTypePushConstant\0" // IR(53502, 45)
  "ImageArgumentInfoChannelOrderUniform\0" // IR(53547, 37)
  "ImageArgumentInfoChannelDataTypeUniform\0" // IR(53584, 40)
  "ArgumentStorageTexelBuffer\0" // IR(53624, 27)
  "ArgumentUniformTexelBuffer\0" // IR(53651, 27)
  "ConstantDataPointerPushConstant\0" // IR(53678, 32)
  "ProgramScopeVariablePointerPushConstant\0" // IR(53710, 40)
  "PrintfInfo\0" // IR(53750, 11)
  "PrintfBufferStorageBuffer\0" // IR(53761, 26)
  "PrintfBufferPointerPushConstant\0" // IR(53787, 32)
  "NormalizedSamplerMaskPushConstant\0" // IR(53819, 34)
  "WorkgroupVariableSize\0" // IR(53853, 22)
  "DebugImportedEntity\0" // IR(53875, 20)
  "DebugSource\0" // IR(53895, 12)
  "DebugFunctionDefinition\0" // IR(53907, 24)
  "DebugSourceContinued\0" // IR(53931, 21)
  "DebugLine\0" // IR(53952, 10)
  "DebugNoLine\0" // IR(53962, 12)
  "DebugBuildIdentifier\0" // IR(53974, 21)
  "DebugStoragePath\0" // IR(53995, 17)
  "DebugEntryPoint\0" // IR(54012, 16)
  "DebugTypeMatrix\0" // IR(54028, 16)
  "Configuration\0" // IR(54044, 14)
  "StartCounter\0" // IR(54058, 13)
  "StopCounter\0" // IR(54071, 12)
  "PushConstants\0" // IR(54083, 14)
  "SpecializationMapEntry\0" // IR(54097, 23)
  "DescriptorSetBuffer\0" // IR(54120, 20)
  "DescriptorSetImage\0" // IR(54140, 19)
  "DescriptorSetSampler\0" // IR(54159, 21)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING\0" // IR(54180, 63)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS\0" // IR(54243, 45)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER\0" // IR(54288, 49)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE\0" // IR(54337, 49)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION\0" // IR(54386, 44)
  "SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY\0" // IR(54430, 50)
  "DebugModuleINTEL\0" // IR(54480, 17)
  "acos\0" // IR(54497, 5)
  "acosh\0" // IR(54502, 6)
  "acospi\0" // IR(54508, 7)
  "asin\0" // IR(54515, 5)
  "asinh\0" // IR(54520, 6)
  "asinpi\0" // IR(54526, 7)
  "atan\0" // IR(54533, 5)
  "atan2\0" // IR(54538, 6)
  "atanh\0" // IR(54544, 6)
  "atanpi\0" // IR(54550, 7)
  "atan2pi\0" // IR(54557, 8)
  "cbrt\0" // IR(54565, 5)
  "ceil\0" // IR(54570, 5)
  "copysign\0" // IR(54575, 9)
  "cos\0" // IR(54584, 4)
  "cosh\0" // IR(54588, 5)
  "cospi\0" // IR(54593, 6)
  "erfc\0" // IR(54599, 5)
  "erf\0" // IR(54604, 4)
  "exp\0" // IR(54608, 4)
  "exp2\0" // IR(54612, 5)
  "exp10\0" // IR(54617, 6)
  "expm1\0" // IR(54623, 6)
  "fabs\0" // IR(54629, 5)
  "fdim\0" // IR(54634, 5)
  "floor\0" // IR(54639, 6)
  "fma\0" // IR(54645, 4)
  "fmax\0" // IR(54649, 5)
  "fmin\0" // IR(54654, 5)
  "fmod\0" // IR(54659, 5)
  "fract\0" // IR(54664, 6)
  "frexp\0" // IR(54670, 6)
  "hypot\0" // IR(54676, 6)
  "ilogb\0" // IR(54682, 6)
  "ldexp\0" // IR(54688, 6)
  "lgamma\0" // IR(54694, 7)
  "lgamma_r\0" // IR(54701, 9)
  "log\0" // IR(54710, 4)
  "log2\0" // IR(54714, 5)
  "log10\0" // IR(54719, 6)
  "log1p\0" // IR(54725, 6)
  "logb\0" // IR(54731, 5)
  "mad\0" // IR(54736, 4)
  "maxmag\0" // IR(54740, 7)
  "minmag\0" // IR(54747, 7)
  "modf\0" // IR(54754, 5)
  "nan\0" // IR(54759, 4)
  "nextafter\0" // IR(54763, 10)
  "pow\0" // IR(54773, 4)
  "pown\0" // IR(54777, 5)
  "powr\0" // IR(54782, 5)
  "remainder\0" // IR(54787, 10)
  "remquo\0" // IR(54797, 7)
  "rint\0" // IR(54804, 5)
  "rootn\0" // IR(54809, 6)
  "round\0" // IR(54815, 6)
  "rsqrt\0" // IR(54821, 6)
  "sin\0" // IR(54827, 4)
  "sincos\0" // IR(54831, 7)
  "sinh\0" // IR(54838, 5)
  "sinpi\0" // IR(54843, 6)
  "sqrt\0" // IR(54849, 5)
  "tan\0" // IR(54854, 4)
  "tanh\0" // IR(54858, 5)
  "tanpi\0" // IR(54863, 6)
  "tgamma\0" // IR(54869, 7)
  "trunc\0" // IR(54876, 6)
  "half_cos\0" // IR(54882, 9)
  "half_divide\0" // IR(54891, 12)
  "half_exp\0" // IR(54903, 9)
  "half_exp2\0" // IR(54912, 10)
  "half_exp10\0" // IR(54922, 11)
  "half_log\0" // IR(54933, 9)
  "half_log2\0" // IR(54942, 10)
  "half_log10\0" // IR(54952, 11)
  "half_powr\0" // IR(54963, 10)
  "half_recip\0" // IR(54973, 11)
  "half_rsqrt\0" // IR(54984, 11)
  "half_sin\0" // IR(54995, 9)
  "half_sqrt\0" // IR(55004, 10)
  "half_tan\0" // IR(55014, 9)
  "native_cos\0" // IR(55023, 11)
  "native_divide\0" // IR(55034, 14)
  "native_exp\0" // IR(55048, 11)
  "native_exp2\0" // IR(55059, 12)
  "native_exp10\0" // IR(55071, 13)
  "native_log\0" // IR(55084, 11)
  "native_log2\0" // IR(55095, 12)
  "native_log10\0" // IR(55107, 13)
  "native_powr\0" // IR(55120, 12)
  "native_recip\0" // IR(55132, 13)
  "native_rsqrt\0" // IR(55145, 13)
  "native_sin\0" // IR(55158, 11)
  "native_sqrt\0" // IR(55169, 12)
  "native_tan\0" // IR(55181, 11)
  "fclamp\0" // IR(55192, 7)
  "degrees\0" // IR(55199, 8)
  "fmax_common\0" // IR(55207, 12)
  "fmin_common\0" // IR(55219, 12)
  "mix\0" // IR(55231, 4)
  "radians\0" // IR(55235, 8)
  "step\0" // IR(55243, 5)
  "smoothstep\0" // IR(55248, 11)
  "sign\0" // IR(55259, 5)
  "cross\0" // IR(55264, 6)
  "distance\0" // IR(55270, 9)
  "length\0" // IR(55279, 7)
  "normalize\0" // IR(55286, 10)
  "fast_distance\0" // IR(55296, 14)
  "fast_length\0" // IR(55310, 12)
  "fast_normalize\0" // IR(55322, 15)
  "s_abs\0" // IR(55337, 6)
  "s_abs_diff\0" // IR(55343, 11)
  "s_add_sat\0" // IR(55354, 10)
  "u_add_sat\0" // IR(55364, 10)
  "s_hadd\0" // IR(55374, 7)
  "u_hadd\0" // IR(55381, 7)
  "s_rhadd\0" // IR(55388, 8)
  "u_rhadd\0" // IR(55396, 8)
  "s_clamp\0" // IR(55404, 8)
  "u_clamp\0" // IR(55412, 8)
  "clz\0" // IR(55420, 4)
  "ctz\0" // IR(55424, 4)
  "s_mad_hi\0" // IR(55428, 9)
  "u_mad_sat\0" // IR(55437, 10)
  "s_mad_sat\0" // IR(55447, 10)
  "s_max\0" // IR(55457, 6)
  "u_max\0" // IR(55463, 6)
  "s_min\0" // IR(55469, 6)
  "u_min\0" // IR(55475, 6)
  "s_mul_hi\0" // IR(55481, 9)
  "rotate\0" // IR(55490, 7)
  "s_sub_sat\0" // IR(55497, 10)
  "u_sub_sat\0" // IR(55507, 10)
  "u_upsample\0" // IR(55517, 11)
  "s_upsample\0" // IR(55528, 11)
  "popcount\0" // IR(55539, 9)
  "s_mad24\0" // IR(55548, 8)
  "u_mad24\0" // IR(55556, 8)
  "s_mul24\0" // IR(55564, 8)
  "u_mul24\0" // IR(55572, 8)
  "vloadn\0" // IR(55580, 7)
  "vstoren\0" // IR(55587, 8)
  "vload_half\0" // IR(55595, 11)
  "vload_halfn\0" // IR(55606, 12)
  "vstore_half\0" // IR(55618, 12)
  "vstore_half_r\0" // IR(55630, 14)
  "vstore_halfn\0" // IR(55644, 13)
  "vstore_halfn_r\0" // IR(55657, 15)
  "vloada_halfn\0" // IR(55672, 13)
  "vstorea_halfn\0" // IR(55685, 14)
  "vstorea_halfn_r\0" // IR(55699, 16)
  "shuffle\0" // IR(55715, 8)
  "shuffle2\0" // IR(55723, 9)
  "printf\0" // IR(55732, 7)
  "prefetch\0" // IR(55739, 9)
  "bitselect\0" // IR(55748, 10)
  "select\0" // IR(55758, 7)
  "u_abs\0" // IR(55765, 6)
  "u_abs_diff\0" // IR(55771, 11)
  "u_mul_hi\0" // IR(55782, 9)
  "u_mad_hi\0" // IR(55791, 9)
  "CubeFaceIndexAMD\0" // IR(55800, 17)
  "CubeFaceCoordAMD\0" // IR(55817, 17)
  "TimeAMD\0" // IR(55834, 8)
  "SwizzleInvocationsAMD\0" // IR(55842, 22)
  "SwizzleInvocationsMaskedAMD\0" // IR(55864, 28)
  "WriteInvocationAMD\0" // IR(55892, 19)
  "MbcntAMD\0" // IR(55911, 9)
  "InterpolateAtVertexAMD\0" // IR(55920, 23)
  "FMin3AMD\0" // IR(55943, 9)
  "UMin3AMD\0" // IR(55952, 9)
  "SMin3AMD\0" // IR(55961, 9)
  "FMax3AMD\0" // IR(55970, 9)
  "UMax3AMD\0" // IR(55979, 9)
  "SMax3AMD\0" // IR(55988, 9)
  "FMid3AMD\0" // IR(55997, 9)
  "UMid3AMD\0" // IR(56006, 9)
  "SMid3AMD\0" // IR(56015, 9)
  "ARGMAX\0" // IR(56024, 7)
  "AVG_POOL2D\0" // IR(56031, 11)
  "CONV2D\0" // IR(56042, 7)
  "CONV3D\0" // IR(56049, 7)
  "DEPTHWISE_CONV2D\0" // IR(56056, 17)
  "FFT2D\0" // IR(56073, 6)
  "MATMUL\0" // IR(56079, 7)
  "MAX_POOL2D\0" // IR(56086, 11)
  "RFFT2D\0" // IR(56097, 7)
  "TRANSPOSE_CONV2D\0" // IR(56104, 17)
  "CLAMP\0" // IR(56121, 6)
  "ERF\0" // IR(56127, 4)
  "SIGMOID\0" // IR(56131, 8)
  "TANH\0" // IR(56139, 5)
  "ADD\0" // IR(56144, 4)
  "ARITHMETIC_RIGHT_SHIFT\0" // IR(56148, 23)
  "BITWISE_AND\0" // IR(56171, 12)
  "BITWISE_OR\0" // IR(56183, 11)
  "BITWISE_XOR\0" // IR(56194, 12)
  "INTDIV\0" // IR(56206, 7)
  "LOGICAL_AND\0" // IR(56213, 12)
  "LOGICAL_LEFT_SHIFT\0" // IR(56225, 19)
  "LOGICAL_RIGHT_SHIFT\0" // IR(56244, 20)
  "LOGICAL_OR\0" // IR(56264, 11)
  "LOGICAL_XOR\0" // IR(56275, 12)
  "MAXIMUM\0" // IR(56287, 8)
  "MINIMUM\0" // IR(56295, 8)
  "MUL\0" // IR(56303, 4)
  "POW\0" // IR(56307, 4)
  "SUB\0" // IR(56311, 4)
  "TABLE\0" // IR(56315, 6)
  "ABS\0" // IR(56321, 4)
  "BITWISE_NOT\0" // IR(56325, 12)
  "CEIL\0" // IR(56337, 5)
  "CLZ\0" // IR(56342, 4)
  "COS\0" // IR(56346, 4)
  "EXP\0" // IR(56350, 4)
  "FLOOR\0" // IR(56354, 6)
  "LOG\0" // IR(56360, 4)
  "LOGICAL_NOT\0" // IR(56364, 12)
  "NEGATE\0" // IR(56376, 7)
  "RECIPROCAL\0" // IR(56383, 11)
  "RSQRT\0" // IR(56394, 6)
  "SIN\0" // IR(56400, 4)
  "SELECT\0" // IR(56404, 7)
  "EQUAL\0" // IR(56411, 6)
  "GREATER\0" // IR(56417, 8)
  "GREATER_EQUAL\0" // IR(56425, 14)
  "REDUCE_ALL\0" // IR(56439, 11)
  "REDUCE_ANY\0" // IR(56450, 11)
  "REDUCE_MAX\0" // IR(56461, 11)
  "REDUCE_MIN\0" // IR(56472, 11)
  "REDUCE_PRODUCT\0" // IR(56483, 15)
  "REDUCE_SUM\0" // IR(56498, 11)
  "CONCAT\0" // IR(56509, 7)
  "PAD\0" // IR(56516, 4)
  "RESHAPE\0" // IR(56520, 8)
  "REVERSE\0" // IR(56528, 8)
  "SLICE\0" // IR(56536, 6)
  "TILE\0" // IR(56542, 5)
  "TRANSPOSE\0" // IR(56547, 10)
  "GATHER\0" // IR(56557, 7)
  "SCATTER\0" // IR(56564, 8)
  "RESIZE\0" // IR(56572, 7)
  "CAST\0" // IR(56579, 5)
  "RESCALE\0" // IR(56584, 8)
;

// Array of IndexRanges, where each represents a string by referencing
// the kStrings table.
// This array contains all sequences of alias strings used in the grammar.
// This table is referenced by an IndexRange elsewhere, i.e. by the 'aliases'
// field of an instruction or operand description.
static const IndexRange kAliasSpans[] = {
  IR(5746, 27), // 0 PhysicalStorageBuffer64EXT
  IR(6657, 18), // 1 SubgroupEqMaskKHR
  IR(6712, 18), // 2 SubgroupGeMaskKHR
  IR(6745, 18), // 3 SubgroupGtMaskKHR
  IR(6778, 18), // 4 SubgroupLeMaskKHR
  IR(6811, 18), // 5 SubgroupLtMaskKHR
  IR(7718, 12), // 6 BaryCoordNV
  IR(7773, 19), // 7 BaryCoordNoPerspNV
  IR(7804, 15), // 8 FragmentSizeNV
  IR(7861, 22), // 9 InvocationsPerPixelNV
  IR(7989, 11), // 10 LaunchIdNV
  IR(8014, 13), // 11 LaunchSizeNV
  IR(8045, 17), // 12 WorldRayOriginNV
  IR(8083, 20), // 13 WorldRayDirectionNV
  IR(8122, 18), // 14 ObjectRayOriginNV
  IR(8162, 21), // 15 ObjectRayDirectionNV
  IR(8194, 10), // 16 RayTminNV
  IR(8215, 10), // 17 RayTmaxNV
  IR(8248, 22), // 18 InstanceCustomIndexNV
  IR(8287, 16), // 19 ObjectToWorldNV
  IR(8320, 16), // 20 WorldToObjectNV
  IR(8354, 10), // 21 HitKindNV
  IR(8585, 19), // 22 IncomingRayFlagsNV
  IR(10361, 28), // 23 StorageUniformBufferBlock16
  IR(10424, 17), // 24 StorageUniform16
  IR(11295, 27), // 25 ShaderViewportIndexLayerNV
  IR(11339, 22), // 26 FragmentBarycentricNV
  IR(11392, 30), // 27 ComputeDerivativeGroupQuadsNV
  IR(11422, 14), // 28 ShadingRateNV
  IR(11466, 29), // 29 GroupNonUniformPartitionedNV
  IR(11512, 20), // 30 ShaderNonUniformEXT
  IR(11555, 26), // 31 RuntimeDescriptorArrayEXT
  IR(11617, 39), // 32 InputAttachmentArrayDynamicIndexingEXT
  IR(11695, 42), // 33 UniformTexelBufferArrayDynamicIndexingEXT
  IR(11776, 42), // 34 StorageTexelBufferArrayDynamicIndexingEXT
  IR(11855, 40), // 35 UniformBufferArrayNonUniformIndexingEXT
  IR(11931, 39), // 36 SampledImageArrayNonUniformIndexingEXT
  IR(12007, 40), // 37 StorageBufferArrayNonUniformIndexingEXT
  IR(12083, 39), // 38 StorageImageArrayNonUniformIndexingEXT
  IR(12161, 42), // 39 InputAttachmentArrayNonUniformIndexingEXT
  IR(12245, 45), // 40 UniformTexelBufferArrayNonUniformIndexingEXT
  IR(12332, 45), // 41 StorageTexelBufferArrayNonUniformIndexingEXT
  IR(12395, 21), // 42 VulkanMemoryModelKHR
  IR(12445, 32), // 43 VulkanMemoryModelDeviceScopeKHR
  IR(12477, 34), // 44 PhysicalStorageBufferAddressesEXT
  IR(12543, 31), // 45 ComputeDerivativeGroupLinearNV
  IR(12747, 28), // 46 DemoteToHelperInvocationEXT
  IR(12827, 29), // 47 RayTracingOpacityMicromapEXT
  IR(13817, 26), // 48 FPGAMemoryAttributesINTEL
  IR(13896, 32), // 49 ArbitraryPrecisionIntegersINTEL
  IR(13966, 37), // 50 ArbitraryPrecisionFloatingPointINTEL
  IR(14056, 22), // 51 FPGALoopControlsINTEL
  IR(14151, 24), // 52 FPGAMemoryAccessesINTEL
  IR(14203, 27), // 53 FPGAClusterAttributesINTEL
  IR(14245, 14), // 54 LoopFuseINTEL
  IR(14280, 20), // 55 FPGADSPControlINTEL
  IR(14367, 40), // 56 FPGAInvocationPipeliningAttributesINTEL
  IR(14432, 24), // 57 FPGABufferLocationINTEL
  IR(14491, 34), // 58 ArbitraryPrecisionFixedPointINTEL
  IR(14549, 23), // 59 USMStorageClassesINTEL
  IR(14602, 29), // 60 RuntimeAlignedAttributeINTEL
  IR(14645, 13), // 61 IOPipesINTEL
  IR(14678, 19), // 62 BlockingPipesINTEL
  IR(14711, 13), // 63 FPGARegINTEL
  IR(14743, 22), // 64 DotProductInputAllKHR
  IR(14787, 25), // 65 DotProductInput4x8BitKHR
  IR(14840, 31), // 66 DotProductInput4x8BitPackedKHR
  IR(14882, 14), // 67 DotProductKHR
  IR(15096, 13), // 68 OptNoneINTEL
  IR(15241, 29), // 69 FPGAClusterAttributesV2INTEL
  IR(15317, 18), // 70 TaskSequenceINTEL
  IR(15376, 24), // 71 FPGALatencyControlINTEL
  IR(15429, 28), // 72 FPGAArgumentInterfacesINTEL
  IR(15523, 35), // 73 GlobalVariableFPGADecorationsINTEL
  IR(18515, 15), // 74 PerPrimitiveNV
  IR(18563, 12), // 75 PerVertexNV
  IR(18586, 14), // 76 NonUniformEXT
  IR(18616, 19), // 77 RestrictPointerEXT
  IR(18650, 18), // 78 AliasedPointerEXT
  IR(19013, 24), // 79 HlslCounterBufferGOOGLE
  IR(19050, 19), // 80 HlslSemanticGOOGLE
  IR(19180, 14), // 81 RegisterINTEL
  IR(19207, 12), // 82 MemoryINTEL
  IR(19234, 14), // 83 NumbanksINTEL
  IR(19264, 15), // 84 BankwidthINTEL
  IR(19302, 22), // 85 MaxPrivateCopiesINTEL
  IR(19341, 16), // 86 SinglepumpINTEL
  IR(19374, 16), // 87 DoublepumpINTEL
  IR(19410, 19), // 88 MaxReplicatesINTEL
  IR(19450, 20), // 89 SimpleDualPortINTEL
  IR(19482, 11), // 90 MergeINTEL
  IR(19550, 14), // 91 BankBitsINTEL
  IR(19585, 20), // 92 ForcePow2DepthINTEL
  IR(19622, 16), // 93 StridesizeINTEL
  IR(19653, 14), // 94 WordsizeINTEL
  IR(19686, 18), // 95 TrueDualPortINTEL
  IR(19724, 19), // 96 BurstCoalesceINTEL
  IR(19759, 15), // 97 CacheSizeINTEL
  IR(19803, 28), // 98 DontStaticallyCoalesceINTEL
  IR(19846, 14), // 99 PrefetchINTEL
  IR(19878, 17), // 100 StallEnableINTEL
  IR(19921, 25), // 101 FuseLoopsInFunctionINTEL
  IR(19966, 19), // 102 MathOpDSPModeINTEL
  IR(20039, 24), // 103 InitiationIntervalINTEL
  IR(20084, 20), // 104 MaxConcurrencyINTEL
  IR(20125, 20), // 105 PipelineEnableINTEL
  IR(20166, 20), // 106 BufferLocationINTEL
  IR(20206, 19), // 107 IOPipeStorageINTEL
  IR(20384, 15), // 108 StallFreeINTEL
  IR(20482, 25), // 109 LatencyControlLabelINTEL
  IR(20538, 30), // 110 LatencyControlConstraintINTEL
  IR(20596, 27), // 111 ConduitKernelArgumentINTEL
  IR(20655, 31), // 112 RegisterMapKernelArgumentINTEL
  IR(20720, 33), // 113 MMHostInterfaceAddressWidthINTEL
  IR(20784, 30), // 114 MMHostInterfaceDataWidthINTEL
  IR(20843, 28), // 115 MMHostInterfaceLatencyINTEL
  IR(20940, 34), // 116 MMHostInterfaceReadWriteModeINTEL
  IR(21004, 29), // 117 MMHostInterfaceMaxBurstINTEL
  IR(21066, 32), // 118 MMHostInterfaceWaitRequestINTEL
  IR(21125, 26), // 119 StableKernelArgumentINTEL
  IR(21268, 14), // 120 InitModeINTEL
  IR(21311, 28), // 121 ImplementInRegisterMapINTEL
  IR(22665, 14), // 122 OutputLinesNV
  IR(22699, 19), // 123 OutputPrimitivesNV
  IR(22742, 23), // 124 DerivativeGroupQuadsNV
  IR(22790, 24), // 125 DerivativeGroupLinearNV
  IR(22833, 18), // 126 OutputTrianglesNV
  IR(23602, 16), // 127 RayGenerationNV
  IR(23634, 15), // 128 IntersectionNV
  IR(23659, 9), // 129 AnyHitNV
  IR(23682, 13), // 130 ClosestHitNV
  IR(23703, 7), // 131 MissNV
  IR(23722, 11), // 132 CallableNV
  IR(23867, 23), // 133 AllowContractFastINTEL
  IR(23903, 18), // 134 AllowReassocINTEL
  IR(24129, 20), // 135 RuntimeAlignedINTEL
  IR(24221, 20), // 136 PartitionedReduceNV
  IR(24269, 27), // 137 PartitionedInclusiveScanNV
  IR(24324, 27), // 138 PartitionedExclusiveScanNV
  IR(24455, 22), // 139 MakeTexelAvailableKHR
  IR(24494, 20), // 140 MakeTexelVisibleKHR
  IR(24530, 19), // 141 NonPrivateTexelKHR
  IR(24563, 17), // 142 VolatileTexelKHR
  IR(25122, 27), // 143 InitOnDeviceReprogramINTEL
  IR(25173, 23), // 144 InitOnDeviceResetINTEL
  IR(25515, 21), // 145 DependencyArrayINTEL
  IR(25555, 18), // 146 LoopCoalesceINTEL
  IR(25595, 21), // 147 MaxInterleavingINTEL
  IR(25643, 26), // 148 SpeculatedIterationsINTEL
  IR(25684, 14), // 149 NoFusionINTEL
  IR(25714, 15), // 150 LoopCountINTEL
  IR(25756, 26), // 151 MaxReinvocationDelayINTEL
  IR(26148, 24), // 152 MakePointerAvailableKHR
  IR(26191, 22), // 153 MakePointerVisibleKHR
  IR(26231, 21), // 154 NonPrivatePointerKHR
  IR(26318, 10), // 155 VulkanKHR
  IR(16244, 5), // 156 None
  IR(26501, 16), // 157 OutputMemoryKHR
  IR(26531, 17), // 158 MakeAvailableKHR
  IR(26560, 15), // 159 MakeVisibleKHR
  IR(26636, 28), // 160 PackedVectorFormat4x8BitKHR
  IR(26951, 24), // 161 SkipBuiltinPrimitivesNV
  IR(27018, 30), // 162 ForceOpacityMicromap2StateEXT
  IR(27721, 15), // 163 QueueFamilyKHR
  IR(28092, 15), // 164 CallableDataNV
  IR(28131, 23), // 165 IncomingCallableDataNV
  IR(28168, 13), // 166 RayPayloadNV
  IR(28197, 15), // 167 HitAttributeNV
  IR(28234, 21), // 168 IncomingRayPayloadNV
  IR(28277, 21), // 169 ShaderRecordBufferNV
  IR(28320, 25), // 170 PhysicalStorageBufferEXT
  IR(28446, 16), // 171 DeviceOnlyINTEL
  IR(28477, 14), // 172 HostOnlyINTEL
  IR(35715, 8), // 173 SDotKHR
  IR(35728, 8), // 174 UDotKHR
  IR(35742, 9), // 175 SUDotKHR
  IR(35762, 14), // 176 SDotAccSatKHR
  IR(35787, 14), // 177 UDotAccSatKHR
  IR(35813, 15), // 178 SUDotAccSatKHR
  IR(38114, 24), // 179 TypeCooperativeVectorNV
  IR(38370, 27), // 180 GroupNonUniformPartitionNV
  IR(39452, 21), // 181 ReportIntersectionNV
  IR(39627, 28), // 182 TypeAccelerationStructureNV
  IR(39708, 23), // 183 RayQueryGetClusterIdNV
  IR(41876, 21), // 184 DecorateStringGOOGLE
  IR(41918, 27), // 185 MemberDecorateStringGOOGLE
  IR(47175, 28), // 186 ArbitraryFloatSinCosPiINTEL
  IR(47228, 24), // 187 ArbitraryFloatCastINTEL
  IR(47284, 31), // 188 ArbitraryFloatCastFromIntINTEL
  IR(47345, 29), // 189 ArbitraryFloatCastToIntINTEL
  IR(47398, 23), // 190 ArbitraryFloatAddINTEL
  IR(47445, 23), // 191 ArbitraryFloatSubINTEL
  IR(47492, 23), // 192 ArbitraryFloatMulINTEL
  IR(47539, 23), // 193 ArbitraryFloatDivINTEL
  IR(47585, 22), // 194 ArbitraryFloatGTINTEL
  IR(47630, 22), // 195 ArbitraryFloatGEINTEL
  IR(47675, 22), // 196 ArbitraryFloatLTINTEL
  IR(47720, 22), // 197 ArbitraryFloatLEINTEL
  IR(47765, 22), // 198 ArbitraryFloatEQINTEL
  IR(47813, 25), // 199 ArbitraryFloatRecipINTEL
  IR(47864, 25), // 200 ArbitraryFloatRSqrtINTEL
  IR(47914, 24), // 201 ArbitraryFloatCbrtINTEL
  IR(47964, 25), // 202 ArbitraryFloatHypotINTEL
  IR(48014, 24), // 203 ArbitraryFloatSqrtINTEL
  IR(48698, 15), // 204 FixedSqrtINTEL
  IR(48730, 16), // 205 FixedRecipINTEL
  IR(48763, 16), // 206 FixedRsqrtINTEL
  IR(48794, 14), // 207 FixedSinINTEL
  IR(48823, 14), // 208 FixedCosINTEL
  IR(48855, 17), // 209 FixedSinCosINTEL
  IR(48889, 16), // 210 FixedSinPiINTEL
  IR(48922, 16), // 211 FixedCosPiINTEL
  IR(48958, 19), // 212 FixedSinCosPiINTEL
  IR(48992, 14), // 213 FixedLogINTEL
  IR(49021, 14), // 214 FixedExpINTEL
  IR(49065, 29), // 215 PtrCastToCrossWorkgroupINTEL
  IR(49124, 29), // 216 CrossWorkgroupCastToPtrINTEL
  IR(49176, 22), // 217 ReadPipeBlockingINTEL
  IR(49222, 23), // 218 WritePipeBlockingINTEL
  IR(50174, 24), // 219 TaskSequenceCreateINTEL
  IR(50222, 23), // 220 TaskSequenceAsyncINTEL
  IR(50267, 21), // 221 TaskSequenceGetINTEL
  IR(50314, 25), // 222 TaskSequenceReleaseINTEL
  IR(50362, 22), // 223 TypeTaskSequenceINTEL
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
  spv::Capability::DescriptorHeapEXT, // 44
  spv::Capability::ShaderViewportMaskNV, // 45
  spv::Capability::MeshShadingNV, // 46
  spv::Capability::ShaderStereoViewNV, // 47
  spv::Capability::PerViewAttributesNV, // 48
  spv::Capability::MeshShadingNV, // 49
  spv::Capability::FragmentFullyCoveredEXT, // 50
  spv::Capability::MeshShadingNV, // 51
  spv::Capability::FragmentBarycentricKHR, // 52
  spv::Capability::FragmentDensityEXT, // 53
  spv::Capability::MeshShadingEXT, // 54
  spv::Capability::RayTracingNV, // 55
  spv::Capability::RayTracingKHR, // 56
  spv::Capability::RayTracingNV, // 57
  spv::Capability::RayTracingMotionBlurNV, // 58
  spv::Capability::RayTracingPositionFetchKHR, // 59
  spv::Capability::RayTracingDisplacementMicromapNV, // 60
  spv::Capability::RayTracingKHR, // 61
  spv::Capability::RayTracingSpheresGeometryNV, // 62
  spv::Capability::RayTracingLinearSweptSpheresGeometryNV, // 63
  spv::Capability::ShaderSMBuiltinsNV, // 64
  spv::Capability::RayTracingClusterAccelerationStructureNV, // 65
  spv::Capability::RayCullMaskKHR, // 66
  spv::Capability::Matrix, // 67
  spv::Capability::Int64, // 68
  spv::Capability::ImageBasic, // 69
  spv::Capability::Geometry, // 70
  spv::Capability::SampledCubeArray, // 71
  spv::Capability::SampledRect, // 72
  spv::Capability::Sampled1D, // 73
  spv::Capability::SampledBuffer, // 74
  spv::Capability::DeviceEnqueue, // 75
  spv::Capability::Pipes, // 76
  spv::Capability::GroupNonUniform, // 77
  spv::Capability::Float8EXT, // 78
  spv::Capability::CooperativeMatrixKHR, // 79
  spv::Capability::WorkgroupMemoryExplicitLayoutKHR, // 80
  spv::Capability::StorageBuffer16BitAccess, // 81
  spv::Capability::VariablePointersStorageBuffer, // 82
  spv::Capability::AtomicStorage, // 83
  spv::Capability::StorageBuffer8BitAccess, // 84
  spv::Capability::RayQueryKHR, // 85
  spv::Capability::RayTracingKHR, // 86
  spv::Capability::CooperativeMatrixKHR, // 87
  spv::Capability::Int4TypeINTEL, // 88
  spv::Capability::CooperativeMatrixKHR, // 89
  spv::Capability::BFloat16TypeKHR, // 90
  spv::Capability::BFloat16TypeKHR, // 91
  spv::Capability::CooperativeMatrixKHR, // 92
  spv::Capability::UntypedPointersKHR, // 93
  spv::Capability::Linkage, // 94
  spv::Capability::MultiViewport, // 95
  spv::Capability::ShaderViewportIndexLayerEXT, // 96
  spv::Capability::ShaderViewportMaskNV, // 97
  spv::Capability::InputAttachment, // 98
  spv::Capability::ImageBuffer, // 99
  spv::Capability::ShaderNonUniform, // 100
  spv::Capability::InputAttachment, // 101
  spv::Capability::ShaderNonUniform, // 102
  spv::Capability::SampledBuffer, // 103
  spv::Capability::ShaderNonUniform, // 104
  spv::Capability::ImageBuffer, // 105
  spv::Capability::ShaderNonUniform, // 106
  spv::Capability::VectorAnyINTEL, // 107
  spv::Capability::Int8, // 108
  spv::Capability::FPGAClusterAttributesALTERA, // 109
  spv::Capability::FPGAKernelAttributesINTEL, // 110
  spv::Capability::Subgroup2DBlockIOINTEL, // 111
  spv::Capability::VariableLengthArrayINTEL, // 112
  spv::Capability::UntypedPointersKHR, // 113
  spv::Capability::SpecConditionalINTEL, // 114
  spv::Capability::Float16, // 115
  spv::Capability::Float8EXT, // 116
  spv::Capability::CooperativeMatrixLayoutsARM, // 117
  spv::Capability::Shader, // 118
  spv::Capability::Kernel, // 119
  spv::Capability::Shader, // 120
  spv::Capability::UniformDecoration, // 121
  spv::Capability::GeometryStreams, // 122
  spv::Capability::TransformFeedback, // 123
  spv::Capability::Kernel, // 124
  spv::Capability::FloatControls2, // 125
  spv::Capability::ConstantDataKHR, // 126
  spv::Capability::SampleMaskOverrideCoverageNV, // 127
  spv::Capability::GeometryShaderPassthroughNV, // 128
  spv::Capability::MeshShadingNV, // 129
  spv::Capability::MeshShadingEXT, // 130
  spv::Capability::PushConstantBanksNV, // 131
  spv::Capability::ShaderInvocationReorderNV, // 132
  spv::Capability::ShaderInvocationReorderEXT, // 133
  spv::Capability::BindlessTextureNV, // 134
  spv::Capability::VectorComputeINTEL, // 135
  spv::Capability::IndirectReferencesINTEL, // 136
  spv::Capability::AsmINTEL, // 137
  spv::Capability::FunctionFloatControlINTEL, // 138
  spv::Capability::FPGAMemoryAttributesALTERA, // 139
  spv::Capability::FPGAMemoryAccessesALTERA, // 140
  spv::Capability::LoopFuseALTERA, // 141
  spv::Capability::FPGADSPControlALTERA, // 142
  spv::Capability::MemoryAccessAliasingINTEL, // 143
  spv::Capability::FPGAInvocationPipeliningAttributesALTERA, // 144
  spv::Capability::FPGABufferLocationALTERA, // 145
  spv::Capability::IOPipesALTERA, // 146
  spv::Capability::FPGAClusterAttributesV2ALTERA, // 147
  spv::Capability::FPMaxErrorINTEL, // 148
  spv::Capability::FPGALatencyControlALTERA, // 149
  spv::Capability::FPGAArgumentInterfacesALTERA, // 150
  spv::Capability::GlobalVariableHostAccessINTEL, // 151
  spv::Capability::GlobalVariableFPGADecorationsALTERA, // 152
  spv::Capability::CacheControlsINTEL, // 153
  spv::Capability::TileImageColorReadAccessEXT, // 154
  spv::Capability::Geometry, // 155
  spv::Capability::Tessellation, // 156
  spv::Capability::MeshShadingNV, // 157
  spv::Capability::MeshShadingEXT, // 158
  spv::Capability::Geometry, // 159
  spv::Capability::MeshShadingNV, // 160
  spv::Capability::MeshShadingEXT, // 161
  spv::Capability::SubgroupDispatch, // 162
  spv::Capability::TileImageDepthReadAccessEXT, // 163
  spv::Capability::TileImageStencilReadAccessEXT, // 164
  spv::Capability::SampleMaskPostDepthCoverage, // 165
  spv::Capability::DenormPreserve, // 166
  spv::Capability::DenormFlushToZero, // 167
  spv::Capability::SignedZeroInfNanPreserve, // 168
  spv::Capability::RoundingModeRTE, // 169
  spv::Capability::RoundingModeRTZ, // 170
  spv::Capability::QuadControlKHR, // 171
  spv::Capability::PoisonFreezeKHR, // 172
  spv::Capability::ComputeDerivativeGroupQuadsKHR, // 173
  spv::Capability::ComputeDerivativeGroupLinearKHR, // 174
  spv::Capability::FragmentShaderPixelInterlockEXT, // 175
  spv::Capability::FragmentShaderSampleInterlockEXT, // 176
  spv::Capability::FragmentShaderShadingRateInterlockEXT, // 177
  spv::Capability::Shader64BitIndexingEXT, // 178
  spv::Capability::RoundToInfinityINTEL, // 179
  spv::Capability::KernelAttributesINTEL, // 180
  spv::Capability::FloatControls2, // 181
  spv::Capability::RayTracingOpacityMicromapExecutionModeKHR, // 182
  spv::Capability::FPGAKernelAttributesv2INTEL, // 183
  spv::Capability::RegisterLimitsINTEL, // 184
  spv::Capability::FloatControls2, // 185
  spv::Capability::FPFastMathModeINTEL, // 186
  spv::Capability::OptNoneEXT, // 187
  spv::Capability::RuntimeAlignedAttributeALTERA, // 188
  spv::Capability::Kernel, // 189
  spv::Capability::GroupNonUniformArithmetic, // 190
  spv::Capability::GroupNonUniformBallot, // 191
  spv::Capability::GroupNonUniformClustered, // 192
  spv::Capability::GroupNonUniformPartitionedEXT, // 193
  spv::Capability::ImageGatherExtended, // 194
  spv::Capability::MinLod, // 195
  spv::Capability::VulkanMemoryModel, // 196
  spv::Capability::WeakLinkageAMD, // 197
  spv::Capability::FPGALoopControlsALTERA, // 198
  spv::Capability::ArbitraryPrecisionFixedPointALTERA, // 199
  spv::Capability::RawAccessChainsNV, // 200
  spv::Capability::RayTraversalPrimitiveCullingKHR, // 201
  spv::Capability::RayTracingOpacityMicromapKHR, // 202
  spv::Capability::RayQueryKHR, // 203
  spv::Capability::StorageImageExtendedFormats, // 204
  spv::Capability::Int64ImageEXT, // 205
  spv::Capability::Shader, // 206
  spv::Capability::VectorComputeINTEL, // 207
  spv::Capability::GenericPointer, // 208
  spv::Capability::FunctionPointersINTEL, // 209
  spv::Capability::USMStorageClassesALTERA, // 210
  spv::Capability::CooperativeMatrixTensorAddressingNV, // 211
  spv::Capability::CooperativeMatrixBlockLoadsNV, // 212
  spv::Capability::TensorsARM, // 213
  spv::Capability::Addresses, // 214
  spv::Capability::PhysicalStorageBufferAddresses, // 215
  spv::Capability::LiteralSampler, // 216
  spv::Capability::Addresses, // 217
  spv::Capability::UntypedPointersKHR, // 218
  spv::Capability::Addresses, // 219
  spv::Capability::VariablePointers, // 220
  spv::Capability::VariablePointersStorageBuffer, // 221
  spv::Capability::PhysicalStorageBufferAddresses, // 222
  spv::Capability::Kernel, // 223
  spv::Capability::ImageQuery, // 224
  spv::Capability::ImageQuery, // 225
  spv::Capability::Shader, // 226
  spv::Capability::BitInstructions, // 227
  spv::Capability::DerivativeControl, // 228
  spv::Capability::Groups, // 229
  spv::Capability::SparseResidency, // 230
  spv::Capability::PipeStorage, // 231
  spv::Capability::NamedBarrier, // 232
  spv::Capability::GroupNonUniformVote, // 233
  spv::Capability::GroupNonUniformBallot, // 234
  spv::Capability::GroupNonUniformShuffle, // 235
  spv::Capability::GroupNonUniformShuffleRelative, // 236
  spv::Capability::GroupNonUniformArithmetic, // 237
  spv::Capability::GroupNonUniformClustered, // 238
  spv::Capability::GroupNonUniformPartitionedEXT, // 239
  spv::Capability::GroupNonUniformQuad, // 240
  spv::Capability::Addresses, // 241
  spv::Capability::VariablePointers, // 242
  spv::Capability::VariablePointersStorageBuffer, // 243
  spv::Capability::GraphARM, // 244
  spv::Capability::SubgroupBallotKHR, // 245
  spv::Capability::FMAKHR, // 246
  spv::Capability::SubgroupVoteKHR, // 247
  spv::Capability::GroupNonUniformRotateKHR, // 248
  spv::Capability::RayTracingKHR, // 249
  spv::Capability::RayQueryKHR, // 250
  spv::Capability::DotProduct, // 251
  spv::Capability::ReplicatedCompositesEXT, // 252
  spv::Capability::TextureSampleWeightedQCOM, // 253
  spv::Capability::TextureBoxFilterQCOM, // 254
  spv::Capability::TextureBlockMatchQCOM, // 255
  spv::Capability::CooperativeMatrixConversionQCOM, // 256
  spv::Capability::TextureBlockMatch2QCOM, // 257
  spv::Capability::FragmentMaskAMD, // 258
  spv::Capability::ShaderClockKHR, // 259
  spv::Capability::AbortKHR, // 260
  spv::Capability::ShaderInvocationReorderNV, // 261
  spv::Capability::RayTracingMotionBlurNV, // 262
  spv::Capability::ImageFootprintNV, // 263
  spv::Capability::CooperativeVectorNV, // 264
  spv::Capability::LongVectorEXT, // 265
  spv::Capability::CooperativeVectorNV, // 266
  spv::Capability::CooperativeVectorTrainingNV, // 267
  spv::Capability::CooperativeMatrixConversionsNV, // 268
  spv::Capability::DisplacementMicromapNV, // 269
  spv::Capability::ShaderInvocationReorderEXT, // 270
  spv::Capability::RayTracingMotionBlurNV, // 271
  spv::Capability::RayQueryPositionFetchKHR, // 272
  spv::Capability::RayTracingNV, // 273
  spv::Capability::RayTracingKHR, // 274
  spv::Capability::RayQueryKHR, // 275
  spv::Capability::DisplacementMicromapNV, // 276
  spv::Capability::CooperativeMatrixNV, // 277
  spv::Capability::FragmentShaderSampleInterlockEXT, // 278
  spv::Capability::FragmentShaderPixelInterlockEXT, // 279
  spv::Capability::FragmentShaderShadingRateInterlockEXT, // 280
  spv::Capability::CooperativeMatrixReductionsNV, // 281
  spv::Capability::CooperativeMatrixPerElementOperationsNV, // 282
  spv::Capability::TensorAddressingNV, // 283
  spv::Capability::DemoteToHelperInvocation, // 284
  spv::Capability::SubgroupShuffleINTEL, // 285
  spv::Capability::SubgroupBufferBlockIOINTEL, // 286
  spv::Capability::SubgroupImageBlockIOINTEL, // 287
  spv::Capability::SubgroupImageMediaBlockIOINTEL, // 288
  spv::Capability::IntegerFunctions2INTEL, // 289
  spv::Capability::AtomicFloat16MinMaxEXT, // 290
  spv::Capability::AtomicFloat32MinMaxEXT, // 291
  spv::Capability::AtomicFloat64MinMaxEXT, // 292
  spv::Capability::AtomicFloat16VectorNV, // 293
  spv::Capability::ExpectAssumeKHR, // 294
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 295
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 296
  spv::Capability::SubgroupAvcMotionEstimationIntraINTEL, // 297
  spv::Capability::SubgroupAvcMotionEstimationINTEL, // 298
  spv::Capability::SubgroupAvcMotionEstimationChromaINTEL, // 299
  spv::Capability::VariableLengthArrayINTEL, // 300
  spv::Capability::ArbitraryPrecisionFloatingPointALTERA, // 301
  spv::Capability::UnstructuredLoopControlsINTEL, // 302
  spv::Capability::BlockingPipesALTERA, // 303
  spv::Capability::FPGARegALTERA, // 304
  spv::Capability::AtomicFloat16AddEXT, // 305
  spv::Capability::AtomicFloat32AddEXT, // 306
  spv::Capability::AtomicFloat64AddEXT, // 307
  spv::Capability::AtomicFloat16VectorNV, // 308
  spv::Capability::LongCompositesINTEL, // 309
  spv::Capability::BFloat16ConversionINTEL, // 310
  spv::Capability::SplitBarrierINTEL, // 311
  spv::Capability::ArithmeticFenceEXT, // 312
  spv::Capability::TaskSequenceALTERA, // 313
  spv::Capability::SubgroupBufferPrefetchINTEL, // 314
  spv::Capability::Subgroup2DBlockTransformINTEL, // 315
  spv::Capability::Subgroup2DBlockTransposeINTEL, // 316
  spv::Capability::SubgroupMatrixMultiplyAccumulateINTEL, // 317
  spv::Capability::TernaryBitwiseFunctionINTEL, // 318
  spv::Capability::UntypedVariableLengthArrayINTEL, // 319
  spv::Capability::FunctionVariantsINTEL, // 320
  spv::Capability::PredicatedIOINTEL, // 321
  spv::Capability::GroupUniformArithmeticKHR, // 322
  spv::Capability::TensorFloat32RoundingINTEL, // 323
  spv::Capability::MaskedGatherScatterINTEL, // 324
  spv::Capability::BindlessImagesINTEL, // 325
  spv::Capability::DotProductFloat16AccFloat32VALVE, // 326
  spv::Capability::DotProductBFloat16AccVALVE, // 327
  spv::Capability::DotProductFloat16AccFloat16VALVE, // 328
  spv::Capability::DotProductBFloat16AccVALVE, // 329
  spv::Capability::DotProductFloat8AccFloat32VALVE, // 330
  spv::Capability::Float64, // 331
  spv::Capability::InterpolationFunction, // 332
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
  spvtools::Extension::kSPV_QCOM_cooperative_matrix_conversion, // 54
  spvtools::Extension::kSPV_QCOM_image_processing2, // 55
  spvtools::Extension::kSPV_AMD_gpu_shader_half_float_fetch, // 56
  spvtools::Extension::kSPV_AMD_texture_gather_bias_lod, // 57
  spvtools::Extension::kSPV_AMD_shader_fragment_mask, // 58
  spvtools::Extension::kSPV_AMD_shader_image_load_store_lod, // 59
  spvtools::Extension::kSPV_EXT_shader_image_int64, // 60
  spvtools::Extension::kSPV_KHR_shader_clock, // 61
  spvtools::Extension::kSPV_AMDX_shader_enqueue, // 62
  spvtools::Extension::kSPV_KHR_quad_control, // 63
  spvtools::Extension::kSPV_INTEL_int4, // 64
  spvtools::Extension::kSPV_KHR_bfloat16, // 65
  spvtools::Extension::kSPV_KHR_abort, // 66
  spvtools::Extension::kSPV_EXT_descriptor_heap, // 67
  spvtools::Extension::kSPV_KHR_constant_data, // 68
  spvtools::Extension::kSPV_KHR_poison_freeze, // 69
  spvtools::Extension::kSPV_AMD_weak_linkage, // 70
  spvtools::Extension::kSPV_NV_sample_mask_override_coverage, // 71
  spvtools::Extension::kSPV_NV_geometry_shader_passthrough, // 72
  spvtools::Extension::kSPV_EXT_shader_viewport_index_layer, // 73
  spvtools::Extension::kSPV_NV_viewport_array2, // 74
  spvtools::Extension::kSPV_NV_viewport_array2, // 75
  spvtools::Extension::kSPV_NVX_multiview_per_view_attributes, // 76
  spvtools::Extension::kSPV_NV_shader_image_footprint, // 77
  spvtools::Extension::kSPV_NV_compute_shader_derivatives, // 78
  spvtools::Extension::kSPV_KHR_compute_shader_derivatives, // 79
  spvtools::Extension::kSPV_NV_shader_subgroup_partitioned, // 80
  spvtools::Extension::kSPV_EXT_shader_subgroup_partitioned, // 81
  spvtools::Extension::kSPV_EXT_descriptor_indexing, // 82
  spvtools::Extension::kSPV_KHR_ray_tracing_position_fetch, // 83
  spvtools::Extension::kSPV_KHR_vulkan_memory_model, // 84
  spvtools::Extension::kSPV_NV_cooperative_matrix, // 85
  spvtools::Extension::kSPV_EXT_fragment_shader_interlock, // 86
  spvtools::Extension::kSPV_EXT_demote_to_helper_invocation, // 87
  spvtools::Extension::kSPV_NV_displacement_micromap, // 88
  spvtools::Extension::kSPV_KHR_opacity_micromap, // 89
  spvtools::Extension::kSPV_EXT_opacity_micromap, // 90
  spvtools::Extension::kSPV_NV_shader_invocation_reorder, // 91
  spvtools::Extension::kSPV_EXT_shader_invocation_reorder, // 92
  spvtools::Extension::kSPV_NV_bindless_texture, // 93
  spvtools::Extension::kSPV_NV_cooperative_vector, // 94
  spvtools::Extension::kSPV_NV_shader_atomic_fp16_vector, // 95
  spvtools::Extension::kSPV_NV_raw_access_chains, // 96
  spvtools::Extension::kSPV_NV_push_constant_bank, // 97
  spvtools::Extension::kSPV_EXT_long_vector, // 98
  spvtools::Extension::kSPV_EXT_shader_64bit_indexing, // 99
  spvtools::Extension::kSPV_NV_cooperative_matrix2, // 100
  spvtools::Extension::kSPV_NV_tensor_addressing, // 101
  spvtools::Extension::kSPV_INTEL_subgroups, // 102
  spvtools::Extension::kSPV_INTEL_media_block_io, // 103
  spvtools::Extension::kSPV_INTEL_float_controls2, // 104
  spvtools::Extension::kSPV_INTEL_shader_integer_functions2, // 105
  spvtools::Extension::kSPV_INTEL_function_pointers, // 106
  spvtools::Extension::kSPV_INTEL_inline_assembly, // 107
  spvtools::Extension::kSPV_EXT_shader_atomic_float_min_max, // 108
  spvtools::Extension::kSPV_INTEL_vector_compute, // 109
  spvtools::Extension::kSPV_KHR_expect_assume, // 110
  spvtools::Extension::kSPV_INTEL_device_side_avc_motion_estimation, // 111
  spvtools::Extension::kSPV_INTEL_variable_length_array, // 112
  spvtools::Extension::kSPV_ALTERA_fpga_memory_attributes, // 113
  spvtools::Extension::kSPV_INTEL_fpga_memory_attributes, // 114
  spvtools::Extension::kSPV_INTEL_fp_fast_math_mode, // 115
  spvtools::Extension::kSPV_ALTERA_arbitrary_precision_integers, // 116
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_integers, // 117
  spvtools::Extension::kSPV_ALTERA_arbitrary_precision_floating_point, // 118
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_floating_point, // 119
  spvtools::Extension::kSPV_INTEL_unstructured_loop_controls, // 120
  spvtools::Extension::kSPV_ALTERA_fpga_loop_controls, // 121
  spvtools::Extension::kSPV_INTEL_fpga_loop_controls, // 122
  spvtools::Extension::kSPV_INTEL_kernel_attributes, // 123
  spvtools::Extension::kSPV_ALTERA_fpga_memory_accesses, // 124
  spvtools::Extension::kSPV_INTEL_fpga_memory_accesses, // 125
  spvtools::Extension::kSPV_ALTERA_fpga_cluster_attributes, // 126
  spvtools::Extension::kSPV_INTEL_fpga_cluster_attributes, // 127
  spvtools::Extension::kSPV_ALTERA_loop_fuse, // 128
  spvtools::Extension::kSPV_INTEL_loop_fuse, // 129
  spvtools::Extension::kSPV_ALTERA_fpga_dsp_control, // 130
  spvtools::Extension::kSPV_INTEL_fpga_dsp_control, // 131
  spvtools::Extension::kSPV_INTEL_memory_access_aliasing, // 132
  spvtools::Extension::kSPV_ALTERA_fpga_invocation_pipelining_attributes, // 133
  spvtools::Extension::kSPV_INTEL_fpga_invocation_pipelining_attributes, // 134
  spvtools::Extension::kSPV_ALTERA_fpga_buffer_location, // 135
  spvtools::Extension::kSPV_INTEL_fpga_buffer_location, // 136
  spvtools::Extension::kSPV_ALTERA_arbitrary_precision_fixed_point, // 137
  spvtools::Extension::kSPV_INTEL_arbitrary_precision_fixed_point, // 138
  spvtools::Extension::kSPV_ALTERA_usm_storage_classes, // 139
  spvtools::Extension::kSPV_INTEL_usm_storage_classes, // 140
  spvtools::Extension::kSPV_ALTERA_runtime_aligned, // 141
  spvtools::Extension::kSPV_INTEL_runtime_aligned, // 142
  spvtools::Extension::kSPV_ALTERA_io_pipes, // 143
  spvtools::Extension::kSPV_INTEL_io_pipes, // 144
  spvtools::Extension::kSPV_ALTERA_blocking_pipes, // 145
  spvtools::Extension::kSPV_INTEL_blocking_pipes, // 146
  spvtools::Extension::kSPV_ALTERA_fpga_reg, // 147
  spvtools::Extension::kSPV_INTEL_fpga_reg, // 148
  spvtools::Extension::kSPV_KHR_integer_dot_product, // 149
  spvtools::Extension::kSPV_KHR_cooperative_matrix, // 150
  spvtools::Extension::kSPV_EXT_replicated_composites, // 151
  spvtools::Extension::kSPV_KHR_bit_instructions, // 152
  spvtools::Extension::kSPV_KHR_subgroup_rotate, // 153
  spvtools::Extension::kSPV_KHR_float_controls2, // 154
  spvtools::Extension::kSPV_KHR_fma, // 155
  spvtools::Extension::kSPV_KHR_opacity_micromap, // 156
  spvtools::Extension::kSPV_EXT_shader_atomic_float_add, // 157
  spvtools::Extension::kSPV_INTEL_long_composites, // 158
  spvtools::Extension::kSPV_EXT_optnone, // 159
  spvtools::Extension::kSPV_INTEL_optnone, // 160
  spvtools::Extension::kSPV_EXT_shader_atomic_float16_add, // 161
  spvtools::Extension::kSPV_INTEL_debug_module, // 162
  spvtools::Extension::kSPV_INTEL_bfloat16_conversion, // 163
  spvtools::Extension::kSPV_INTEL_split_barrier, // 164
  spvtools::Extension::kSPV_EXT_arithmetic_fence, // 165
  spvtools::Extension::kSPV_ALTERA_task_sequence, // 166
  spvtools::Extension::kSPV_INTEL_task_sequence, // 167
  spvtools::Extension::kSPV_INTEL_fp_max_error, // 168
  spvtools::Extension::kSPV_ALTERA_fpga_latency_control, // 169
  spvtools::Extension::kSPV_INTEL_fpga_latency_control, // 170
  spvtools::Extension::kSPV_ALTERA_fpga_argument_interfaces, // 171
  spvtools::Extension::kSPV_INTEL_fpga_argument_interfaces, // 172
  spvtools::Extension::kSPV_INTEL_global_variable_host_access, // 173
  spvtools::Extension::kSPV_ALTERA_global_variable_fpga_decorations, // 174
  spvtools::Extension::kSPV_INTEL_global_variable_fpga_decorations, // 175
  spvtools::Extension::kSPV_INTEL_subgroup_buffer_prefetch, // 176
  spvtools::Extension::kSPV_INTEL_2d_block_io, // 177
  spvtools::Extension::kSPV_INTEL_subgroup_matrix_multiply_accumulate, // 178
  spvtools::Extension::kSPV_INTEL_ternary_bitwise_function, // 179
  spvtools::Extension::kSPV_INTEL_function_variants, // 180
  spvtools::Extension::kSPV_INTEL_predicated_io, // 181
  spvtools::Extension::kSPV_INTEL_rounded_divide_sqrt, // 182
  spvtools::Extension::kSPV_KHR_uniform_group_instructions, // 183
  spvtools::Extension::kSPV_INTEL_tensor_float32_conversion, // 184
  spvtools::Extension::kSPV_INTEL_masked_gather_scatter, // 185
  spvtools::Extension::kSPV_INTEL_cache_controls, // 186
  spvtools::Extension::kSPV_INTEL_maximum_registers, // 187
  spvtools::Extension::kSPV_INTEL_bindless_images, // 188
  spvtools::Extension::kSPV_VALVE_mixed_float_dot_product, // 189
  spvtools::Extension::kSPV_KHR_no_integer_wrap_decoration, // 190
  spvtools::Extension::kSPV_NV_mesh_shader, // 191
  spvtools::Extension::kSPV_EXT_mesh_shader, // 192
  spvtools::Extension::kSPV_GOOGLE_hlsl_functionality1, // 193
  spvtools::Extension::kSPV_GOOGLE_user_type, // 194
  spvtools::Extension::kSPV_KHR_subgroup_uniform_control_flow, // 195
  spvtools::Extension::kSPV_AMD_shader_early_and_late_fragment_tests, // 196
  spvtools::Extension::kSPV_AMD_shader_early_and_late_fragment_tests, // 197
  spvtools::Extension::kSPV_EXT_shader_stencil_export, // 198
  spvtools::Extension::kSPV_KHR_maximal_reconvergence, // 199
  spvtools::Extension::kSPV_KHR_linkonce_odr, // 200
  spvtools::Extension::kSPV_KHR_storage_buffer_storage_class, // 201
  spvtools::Extension::kSPV_KHR_variable_pointers, // 202
  spvtools::Extension::kSPV_KHR_terminate_invocation, // 203
  spvtools::Extension::kSPV_KHR_relaxed_extended_instruction, // 204
  spvtools::Extension::kSPV_KHR_ray_tracing, // 205
  spvtools::Extension::kSPV_KHR_ray_query, // 206
  spvtools::Extension::kSPV_NV_ray_tracing, // 207
  spvtools::Extension::kSPV_KHR_ray_tracing, // 208
  spvtools::Extension::kSPV_KHR_ray_query, // 209
  spvtools::Extension::kSPV_NV_displacement_micromap, // 210
  spvtools::Extension::kSPV_GOOGLE_decorate_string, // 211
  spvtools::Extension::kSPV_GOOGLE_hlsl_functionality1, // 212
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
  SPV_OPERAND_TYPE_TYPE_ID, // 415
  SPV_OPERAND_TYPE_RESULT_ID, // 416
  SPV_OPERAND_TYPE_ID, // 417
  SPV_OPERAND_TYPE_ID, // 418
  SPV_OPERAND_TYPE_ID, // 419
  SPV_OPERAND_TYPE_ID, // 420
  SPV_OPERAND_TYPE_ID, // 421
  SPV_OPERAND_TYPE_ID, // 422
  SPV_OPERAND_TYPE_ID, // 423
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 424
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 425
  SPV_OPERAND_TYPE_ID, // 426
  SPV_OPERAND_TYPE_ID, // 427
  SPV_OPERAND_TYPE_ID, // 428
  SPV_OPERAND_TYPE_ID, // 429
  SPV_OPERAND_TYPE_ID, // 430
  SPV_OPERAND_TYPE_ID, // 431
  SPV_OPERAND_TYPE_ID, // 432
  SPV_OPERAND_TYPE_ID, // 433
  SPV_OPERAND_TYPE_ID, // 434
  SPV_OPERAND_TYPE_ID, // 435
  SPV_OPERAND_TYPE_ID, // 436
  SPV_OPERAND_TYPE_TYPE_ID, // 437
  SPV_OPERAND_TYPE_RESULT_ID, // 438
  SPV_OPERAND_TYPE_ID, // 439
  SPV_OPERAND_TYPE_ID, // 440
  SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT, // 441
  SPV_OPERAND_TYPE_TYPE_ID, // 442
  SPV_OPERAND_TYPE_RESULT_ID, // 443
  SPV_OPERAND_TYPE_ID, // 444
  SPV_OPERAND_TYPE_ID, // 445
  SPV_OPERAND_TYPE_ID, // 446
  SPV_OPERAND_TYPE_OPTIONAL_PACKED_VECTOR_FORMAT, // 447
  SPV_OPERAND_TYPE_RESULT_ID, // 448
  SPV_OPERAND_TYPE_ID, // 449
  SPV_OPERAND_TYPE_SCOPE_ID, // 450
  SPV_OPERAND_TYPE_ID, // 451
  SPV_OPERAND_TYPE_ID, // 452
  SPV_OPERAND_TYPE_ID, // 453
  SPV_OPERAND_TYPE_TYPE_ID, // 454
  SPV_OPERAND_TYPE_RESULT_ID, // 455
  SPV_OPERAND_TYPE_ID, // 456
  SPV_OPERAND_TYPE_ID, // 457
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 458
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 459
  SPV_OPERAND_TYPE_ID, // 460
  SPV_OPERAND_TYPE_ID, // 461
  SPV_OPERAND_TYPE_ID, // 462
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 463
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 464
  SPV_OPERAND_TYPE_TYPE_ID, // 465
  SPV_OPERAND_TYPE_RESULT_ID, // 466
  SPV_OPERAND_TYPE_ID, // 467
  SPV_OPERAND_TYPE_ID, // 468
  SPV_OPERAND_TYPE_ID, // 469
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 470
  SPV_OPERAND_TYPE_ID, // 471
  SPV_OPERAND_TYPE_ID, // 472
  SPV_OPERAND_TYPE_ID, // 473
  SPV_OPERAND_TYPE_ID, // 474
  SPV_OPERAND_TYPE_ID, // 475
  SPV_OPERAND_TYPE_ID, // 476
  SPV_OPERAND_TYPE_ID, // 477
  SPV_OPERAND_TYPE_ID, // 478
  SPV_OPERAND_TYPE_TYPE_ID, // 479
  SPV_OPERAND_TYPE_RESULT_ID, // 480
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 481
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
  SPV_OPERAND_TYPE_ID, // 521
  SPV_OPERAND_TYPE_ID, // 522
  SPV_OPERAND_TYPE_ID, // 523
  SPV_OPERAND_TYPE_ID, // 524
  SPV_OPERAND_TYPE_ID, // 525
  SPV_OPERAND_TYPE_ID, // 526
  SPV_OPERAND_TYPE_ID, // 527
  SPV_OPERAND_TYPE_ID, // 528
  SPV_OPERAND_TYPE_ID, // 529
  SPV_OPERAND_TYPE_ID, // 530
  SPV_OPERAND_TYPE_ID, // 531
  SPV_OPERAND_TYPE_ID, // 532
  SPV_OPERAND_TYPE_ID, // 533
  SPV_OPERAND_TYPE_ID, // 534
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 535
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 536
  SPV_OPERAND_TYPE_TYPE_ID, // 537
  SPV_OPERAND_TYPE_RESULT_ID, // 538
  SPV_OPERAND_TYPE_ID, // 539
  SPV_OPERAND_TYPE_ID, // 540
  SPV_OPERAND_TYPE_ID, // 541
  SPV_OPERAND_TYPE_ID, // 542
  SPV_OPERAND_TYPE_OPTIONAL_IMAGE, // 543
  SPV_OPERAND_TYPE_TYPE_ID, // 544
  SPV_OPERAND_TYPE_RESULT_ID, // 545
  SPV_OPERAND_TYPE_ID, // 546
  SPV_OPERAND_TYPE_ID, // 547
  SPV_OPERAND_TYPE_ID, // 548
  SPV_OPERAND_TYPE_ID, // 549
  SPV_OPERAND_TYPE_ID, // 550
  SPV_OPERAND_TYPE_ID, // 551
  SPV_OPERAND_TYPE_ID, // 552
  SPV_OPERAND_TYPE_ID, // 553
  SPV_OPERAND_TYPE_ID, // 554
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 555
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 556
  SPV_OPERAND_TYPE_ID, // 557
  SPV_OPERAND_TYPE_ID, // 558
  SPV_OPERAND_TYPE_ID, // 559
  SPV_OPERAND_TYPE_ID, // 560
  SPV_OPERAND_TYPE_ID, // 561
  SPV_OPERAND_TYPE_ID, // 562
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 563
  SPV_OPERAND_TYPE_TYPE_ID, // 564
  SPV_OPERAND_TYPE_RESULT_ID, // 565
  SPV_OPERAND_TYPE_ID, // 566
  SPV_OPERAND_TYPE_ID, // 567
  SPV_OPERAND_TYPE_ID, // 568
  SPV_OPERAND_TYPE_ID, // 569
  SPV_OPERAND_TYPE_ID, // 570
  SPV_OPERAND_TYPE_ID, // 571
  SPV_OPERAND_TYPE_ID, // 572
  SPV_OPERAND_TYPE_ID, // 573
  SPV_OPERAND_TYPE_ID, // 574
  SPV_OPERAND_TYPE_ID, // 575
  SPV_OPERAND_TYPE_ID, // 576
  SPV_OPERAND_TYPE_ID, // 577
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 578
  SPV_OPERAND_TYPE_OPTIONAL_COOPERATIVE_MATRIX_OPERANDS, // 579
  SPV_OPERAND_TYPE_ID, // 580
  SPV_OPERAND_TYPE_ID, // 581
  SPV_OPERAND_TYPE_ID, // 582
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 583
  SPV_OPERAND_TYPE_TYPE_ID, // 584
  SPV_OPERAND_TYPE_RESULT_ID, // 585
  SPV_OPERAND_TYPE_ID, // 586
  SPV_OPERAND_TYPE_ID, // 587
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 588
  SPV_OPERAND_TYPE_ID, // 589
  SPV_OPERAND_TYPE_ID, // 590
  SPV_OPERAND_TYPE_ID, // 591
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 592
  SPV_OPERAND_TYPE_ID, // 593
  SPV_OPERAND_TYPE_ID, // 594
  SPV_OPERAND_TYPE_ID, // 595
  SPV_OPERAND_TYPE_ID, // 596
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 597
  SPV_OPERAND_TYPE_ID, // 598
  SPV_OPERAND_TYPE_ID, // 599
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 600
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 601
  SPV_OPERAND_TYPE_ID, // 602
  SPV_OPERAND_TYPE_ID, // 603
  SPV_OPERAND_TYPE_ID, // 604
  SPV_OPERAND_TYPE_ID, // 605
  SPV_OPERAND_TYPE_ID, // 606
  SPV_OPERAND_TYPE_ID, // 607
  SPV_OPERAND_TYPE_ID, // 608
  SPV_OPERAND_TYPE_ID, // 609
  SPV_OPERAND_TYPE_ID, // 610
  SPV_OPERAND_TYPE_ID, // 611
  SPV_OPERAND_TYPE_ID, // 612
  SPV_OPERAND_TYPE_ID, // 613
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 614
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 615
  SPV_OPERAND_TYPE_ID, // 616
  SPV_OPERAND_TYPE_ID, // 617
  SPV_OPERAND_TYPE_ID, // 618
  SPV_OPERAND_TYPE_ID, // 619
  SPV_OPERAND_TYPE_ID, // 620
  SPV_OPERAND_TYPE_ID, // 621
  SPV_OPERAND_TYPE_ID, // 622
  SPV_OPERAND_TYPE_ID, // 623
  SPV_OPERAND_TYPE_ID, // 624
  SPV_OPERAND_TYPE_ID, // 625
  SPV_OPERAND_TYPE_ID, // 626
  SPV_OPERAND_TYPE_ID, // 627
  SPV_OPERAND_TYPE_ID, // 628
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 629
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 630
  SPV_OPERAND_TYPE_RESULT_ID, // 631
  SPV_OPERAND_TYPE_ID, // 632
  SPV_OPERAND_TYPE_SCOPE_ID, // 633
  SPV_OPERAND_TYPE_ID, // 634
  SPV_OPERAND_TYPE_ID, // 635
  SPV_OPERAND_TYPE_TYPE_ID, // 636
  SPV_OPERAND_TYPE_RESULT_ID, // 637
  SPV_OPERAND_TYPE_ID, // 638
  SPV_OPERAND_TYPE_ID, // 639
  SPV_OPERAND_TYPE_ID, // 640
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 641
  SPV_OPERAND_TYPE_ID, // 642
  SPV_OPERAND_TYPE_ID, // 643
  SPV_OPERAND_TYPE_ID, // 644
  SPV_OPERAND_TYPE_ID, // 645
  SPV_OPERAND_TYPE_OPTIONAL_MEMORY_ACCESS, // 646
  SPV_OPERAND_TYPE_TYPE_ID, // 647
  SPV_OPERAND_TYPE_RESULT_ID, // 648
  SPV_OPERAND_TYPE_ID, // 649
  SPV_OPERAND_TYPE_COOPERATIVE_MATRIX_REDUCE, // 650
  SPV_OPERAND_TYPE_ID, // 651
  SPV_OPERAND_TYPE_TYPE_ID, // 652
  SPV_OPERAND_TYPE_RESULT_ID, // 653
  SPV_OPERAND_TYPE_ID, // 654
  SPV_OPERAND_TYPE_ID, // 655
  SPV_OPERAND_TYPE_ID, // 656
  SPV_OPERAND_TYPE_MEMORY_ACCESS, // 657
  SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS, // 658
  SPV_OPERAND_TYPE_ID, // 659
  SPV_OPERAND_TYPE_ID, // 660
  SPV_OPERAND_TYPE_ID, // 661
  SPV_OPERAND_TYPE_MEMORY_ACCESS, // 662
  SPV_OPERAND_TYPE_TENSOR_ADDRESSING_OPERANDS, // 663
  SPV_OPERAND_TYPE_RESULT_ID, // 664
  SPV_OPERAND_TYPE_ID, // 665
  SPV_OPERAND_TYPE_ID, // 666
  SPV_OPERAND_TYPE_VARIABLE_ID, // 667
  SPV_OPERAND_TYPE_TYPE_ID, // 668
  SPV_OPERAND_TYPE_RESULT_ID, // 669
  SPV_OPERAND_TYPE_ID, // 670
  SPV_OPERAND_TYPE_ID, // 671
  SPV_OPERAND_TYPE_ID, // 672
  SPV_OPERAND_TYPE_ID, // 673
  SPV_OPERAND_TYPE_OPTIONAL_RAW_ACCESS_CHAIN_OPERANDS, // 674
  SPV_OPERAND_TYPE_ID, // 675
  SPV_OPERAND_TYPE_ID, // 676
  SPV_OPERAND_TYPE_ID, // 677
  SPV_OPERAND_TYPE_ID, // 678
  SPV_OPERAND_TYPE_ID, // 679
  SPV_OPERAND_TYPE_TYPE_ID, // 680
  SPV_OPERAND_TYPE_RESULT_ID, // 681
  SPV_OPERAND_TYPE_ID, // 682
  SPV_OPERAND_TYPE_ID, // 683
  SPV_OPERAND_TYPE_LITERAL_STRING, // 684
  SPV_OPERAND_TYPE_LITERAL_STRING, // 685
  SPV_OPERAND_TYPE_TYPE_ID, // 686
  SPV_OPERAND_TYPE_RESULT_ID, // 687
  SPV_OPERAND_TYPE_ID, // 688
  SPV_OPERAND_TYPE_ID, // 689
  SPV_OPERAND_TYPE_ID, // 690
  SPV_OPERAND_TYPE_ID, // 691
  SPV_OPERAND_TYPE_ID, // 692
  SPV_OPERAND_TYPE_ID, // 693
  SPV_OPERAND_TYPE_ID, // 694
  SPV_OPERAND_TYPE_TYPE_ID, // 695
  SPV_OPERAND_TYPE_RESULT_ID, // 696
  SPV_OPERAND_TYPE_ID, // 697
  SPV_OPERAND_TYPE_ID, // 698
  SPV_OPERAND_TYPE_ID, // 699
  SPV_OPERAND_TYPE_ID, // 700
  SPV_OPERAND_TYPE_ID, // 701
  SPV_OPERAND_TYPE_ID, // 702
  SPV_OPERAND_TYPE_ID, // 703
  SPV_OPERAND_TYPE_ID, // 704
  SPV_OPERAND_TYPE_TYPE_ID, // 705
  SPV_OPERAND_TYPE_RESULT_ID, // 706
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
  SPV_OPERAND_TYPE_TYPE_ID, // 718
  SPV_OPERAND_TYPE_RESULT_ID, // 719
  SPV_OPERAND_TYPE_ID, // 720
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 721
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 722
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 723
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 724
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 725
  SPV_OPERAND_TYPE_TYPE_ID, // 726
  SPV_OPERAND_TYPE_RESULT_ID, // 727
  SPV_OPERAND_TYPE_ID, // 728
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 729
  SPV_OPERAND_TYPE_ID, // 730
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 731
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 732
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 733
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 734
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 735
  SPV_OPERAND_TYPE_TYPE_ID, // 736
  SPV_OPERAND_TYPE_RESULT_ID, // 737
  SPV_OPERAND_TYPE_ID, // 738
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 739
  SPV_OPERAND_TYPE_ID, // 740
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 741
  SPV_OPERAND_TYPE_RESULT_ID, // 742
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 743
  SPV_OPERAND_TYPE_RESULT_ID, // 744
  SPV_OPERAND_TYPE_ID, // 745
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 746
  SPV_OPERAND_TYPE_VARIABLE_ID, // 747
  SPV_OPERAND_TYPE_TYPE_ID, // 748
  SPV_OPERAND_TYPE_RESULT_ID, // 749
  SPV_OPERAND_TYPE_ID, // 750
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 751
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 752
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 753
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 754
  SPV_OPERAND_TYPE_ID, // 755
  SPV_OPERAND_TYPE_ID, // 756
  SPV_OPERAND_TYPE_ID, // 757
  SPV_OPERAND_TYPE_ID, // 758
  SPV_OPERAND_TYPE_ID, // 759
  SPV_OPERAND_TYPE_ID, // 760
  SPV_OPERAND_TYPE_ID, // 761
  SPV_OPERAND_TYPE_ID, // 762
  SPV_OPERAND_TYPE_ID, // 763
  SPV_OPERAND_TYPE_ID, // 764
  SPV_OPERAND_TYPE_ID, // 765
  SPV_OPERAND_TYPE_ID, // 766
  SPV_OPERAND_TYPE_ID, // 767
  SPV_OPERAND_TYPE_ID, // 768
  SPV_OPERAND_TYPE_ID, // 769
  SPV_OPERAND_TYPE_ID, // 770
  SPV_OPERAND_TYPE_ID, // 771
  SPV_OPERAND_TYPE_ID, // 772
  SPV_OPERAND_TYPE_ID, // 773
  SPV_OPERAND_TYPE_TYPE_ID, // 774
  SPV_OPERAND_TYPE_RESULT_ID, // 775
  SPV_OPERAND_TYPE_ID, // 776
  SPV_OPERAND_TYPE_ID, // 777
  SPV_OPERAND_TYPE_ID, // 778
  SPV_OPERAND_TYPE_ID, // 779
  SPV_OPERAND_TYPE_OPTIONAL_MATRIX_MULTIPLY_ACCUMULATE_OPERANDS, // 780
  SPV_OPERAND_TYPE_ID, // 781
  SPV_OPERAND_TYPE_EXECUTION_MODEL, // 782
  SPV_OPERAND_TYPE_ID, // 783
  SPV_OPERAND_TYPE_LITERAL_STRING, // 784
  SPV_OPERAND_TYPE_VARIABLE_ID, // 785
  SPV_OPERAND_TYPE_ID, // 786
  SPV_OPERAND_TYPE_CAPABILITY, // 787
  SPV_OPERAND_TYPE_TYPE_ID, // 788
  SPV_OPERAND_TYPE_RESULT_ID, // 789
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 790
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 791
  SPV_OPERAND_TYPE_TYPE_ID, // 792
  SPV_OPERAND_TYPE_RESULT_ID, // 793
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 794
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 795
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 796
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 797
  SPV_OPERAND_TYPE_TYPE_ID, // 798
  SPV_OPERAND_TYPE_RESULT_ID, // 799
  SPV_OPERAND_TYPE_VARIABLE_CAPABILITY, // 800
  SPV_OPERAND_TYPE_TYPE_ID, // 801
  SPV_OPERAND_TYPE_RESULT_ID, // 802
  SPV_OPERAND_TYPE_ID, // 803
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 804
  SPV_OPERAND_TYPE_ID, // 805
  SPV_OPERAND_TYPE_ID, // 806
  SPV_OPERAND_TYPE_ID, // 807
  SPV_OPERAND_TYPE_ID, // 808
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 809
  SPV_OPERAND_TYPE_ID, // 810
  SPV_OPERAND_TYPE_ID, // 811
  SPV_OPERAND_TYPE_ID, // 812
  SPV_OPERAND_TYPE_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING, // 813
  SPV_OPERAND_TYPE_ID, // 814
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 815
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 816
  SPV_OPERAND_TYPE_ID, // 817
  SPV_OPERAND_TYPE_DEBUG_TYPE_QUALIFIER, // 818
  SPV_OPERAND_TYPE_ID, // 819
  SPV_OPERAND_TYPE_ID, // 820
  SPV_OPERAND_TYPE_ID, // 821
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 822
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 823
  SPV_OPERAND_TYPE_ID, // 824
  SPV_OPERAND_TYPE_ID, // 825
  SPV_OPERAND_TYPE_ID, // 826
  SPV_OPERAND_TYPE_ID, // 827
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 828
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 829
  SPV_OPERAND_TYPE_ID, // 830
  SPV_OPERAND_TYPE_ID, // 831
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 832
  SPV_OPERAND_TYPE_VARIABLE_ID, // 833
  SPV_OPERAND_TYPE_ID, // 834
  SPV_OPERAND_TYPE_DEBUG_COMPOSITE_TYPE, // 835
  SPV_OPERAND_TYPE_ID, // 836
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 837
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 838
  SPV_OPERAND_TYPE_ID, // 839
  SPV_OPERAND_TYPE_ID, // 840
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 841
  SPV_OPERAND_TYPE_VARIABLE_ID, // 842
  SPV_OPERAND_TYPE_ID, // 843
  SPV_OPERAND_TYPE_ID, // 844
  SPV_OPERAND_TYPE_ID, // 845
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 846
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 847
  SPV_OPERAND_TYPE_ID, // 848
  SPV_OPERAND_TYPE_ID, // 849
  SPV_OPERAND_TYPE_ID, // 850
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 851
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 852
  SPV_OPERAND_TYPE_ID, // 853
  SPV_OPERAND_TYPE_ID, // 854
  SPV_OPERAND_TYPE_ID, // 855
  SPV_OPERAND_TYPE_ID, // 856
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 857
  SPV_OPERAND_TYPE_ID, // 858
  SPV_OPERAND_TYPE_ID, // 859
  SPV_OPERAND_TYPE_ID, // 860
  SPV_OPERAND_TYPE_ID, // 861
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 862
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 863
  SPV_OPERAND_TYPE_ID, // 864
  SPV_OPERAND_TYPE_ID, // 865
  SPV_OPERAND_TYPE_ID, // 866
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 867
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 868
  SPV_OPERAND_TYPE_ID, // 869
  SPV_OPERAND_TYPE_ID, // 870
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 871
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 872
  SPV_OPERAND_TYPE_VARIABLE_ID, // 873
  SPV_OPERAND_TYPE_ID, // 874
  SPV_OPERAND_TYPE_ID, // 875
  SPV_OPERAND_TYPE_ID, // 876
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 877
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 878
  SPV_OPERAND_TYPE_ID, // 879
  SPV_OPERAND_TYPE_ID, // 880
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 881
  SPV_OPERAND_TYPE_ID, // 882
  SPV_OPERAND_TYPE_ID, // 883
  SPV_OPERAND_TYPE_ID, // 884
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 885
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 886
  SPV_OPERAND_TYPE_ID, // 887
  SPV_OPERAND_TYPE_ID, // 888
  SPV_OPERAND_TYPE_DEBUG_INFO_FLAGS, // 889
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 890
  SPV_OPERAND_TYPE_ID, // 891
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 892
  SPV_OPERAND_TYPE_ID, // 893
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 894
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 895
  SPV_OPERAND_TYPE_ID, // 896
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 897
  SPV_OPERAND_TYPE_ID, // 898
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 899
  SPV_OPERAND_TYPE_ID, // 900
  SPV_OPERAND_TYPE_ID, // 901
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 902
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 903
  SPV_OPERAND_TYPE_ID, // 904
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 905
  SPV_OPERAND_TYPE_ID, // 906
  SPV_OPERAND_TYPE_ID, // 907
  SPV_OPERAND_TYPE_ID, // 908
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 909
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 910
  SPV_OPERAND_TYPE_ID, // 911
  SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER, // 912
  SPV_OPERAND_TYPE_DEBUG_OPERATION, // 913
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 914
  SPV_OPERAND_TYPE_ID, // 915
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 916
  SPV_OPERAND_TYPE_ID, // 917
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 918
  SPV_OPERAND_TYPE_ID, // 919
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 920
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 921
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 922
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 923
  SPV_OPERAND_TYPE_ID, // 924
  SPV_OPERAND_TYPE_ID, // 925
  SPV_OPERAND_TYPE_ID, // 926
  SPV_OPERAND_TYPE_ID, // 927
  SPV_OPERAND_TYPE_ID, // 928
  SPV_OPERAND_TYPE_ID, // 929
  SPV_OPERAND_TYPE_ID, // 930
  SPV_OPERAND_TYPE_ID, // 931
  SPV_OPERAND_TYPE_VARIABLE_ID, // 932
  SPV_OPERAND_TYPE_ID, // 933
  SPV_OPERAND_TYPE_ID, // 934
  SPV_OPERAND_TYPE_ID, // 935
  SPV_OPERAND_TYPE_ID, // 936
  SPV_OPERAND_TYPE_ID, // 937
  SPV_OPERAND_TYPE_ID, // 938
  SPV_OPERAND_TYPE_ID, // 939
  SPV_OPERAND_TYPE_ID, // 940
  SPV_OPERAND_TYPE_ID, // 941
  SPV_OPERAND_TYPE_VARIABLE_ID, // 942
  SPV_OPERAND_TYPE_ID, // 943
  SPV_OPERAND_TYPE_ID, // 944
  SPV_OPERAND_TYPE_ID, // 945
  SPV_OPERAND_TYPE_ID, // 946
  SPV_OPERAND_TYPE_ID, // 947
  SPV_OPERAND_TYPE_ID, // 948
  SPV_OPERAND_TYPE_ID, // 949
  SPV_OPERAND_TYPE_ID, // 950
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 951
  SPV_OPERAND_TYPE_ID, // 952
  SPV_OPERAND_TYPE_ID, // 953
  SPV_OPERAND_TYPE_ID, // 954
  SPV_OPERAND_TYPE_ID, // 955
  SPV_OPERAND_TYPE_VARIABLE_ID, // 956
  SPV_OPERAND_TYPE_ID, // 957
  SPV_OPERAND_TYPE_ID, // 958
  SPV_OPERAND_TYPE_ID, // 959
  SPV_OPERAND_TYPE_ID, // 960
  SPV_OPERAND_TYPE_ID, // 961
  SPV_OPERAND_TYPE_ID, // 962
  SPV_OPERAND_TYPE_ID, // 963
  SPV_OPERAND_TYPE_ID, // 964
  SPV_OPERAND_TYPE_ID, // 965
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 966
  SPV_OPERAND_TYPE_ID, // 967
  SPV_OPERAND_TYPE_ID, // 968
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 969
  SPV_OPERAND_TYPE_ID, // 970
  SPV_OPERAND_TYPE_ID, // 971
  SPV_OPERAND_TYPE_ID, // 972
  SPV_OPERAND_TYPE_ID, // 973
  SPV_OPERAND_TYPE_ID, // 974
  SPV_OPERAND_TYPE_ID, // 975
  SPV_OPERAND_TYPE_ID, // 976
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 977
  SPV_OPERAND_TYPE_ID, // 978
  SPV_OPERAND_TYPE_ID, // 979
  SPV_OPERAND_TYPE_ID, // 980
  SPV_OPERAND_TYPE_VARIABLE_ID, // 981
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
  SPV_OPERAND_TYPE_ID, // 1002
  SPV_OPERAND_TYPE_ID, // 1003
  SPV_OPERAND_TYPE_ID, // 1004
  SPV_OPERAND_TYPE_ID, // 1005
  SPV_OPERAND_TYPE_ID, // 1006
  SPV_OPERAND_TYPE_ID, // 1007
  SPV_OPERAND_TYPE_ID, // 1008
  SPV_OPERAND_TYPE_ID, // 1009
  SPV_OPERAND_TYPE_ID, // 1010
  SPV_OPERAND_TYPE_ID, // 1011
  SPV_OPERAND_TYPE_ID, // 1012
  SPV_OPERAND_TYPE_ID, // 1013
  SPV_OPERAND_TYPE_ID, // 1014
  SPV_OPERAND_TYPE_ID, // 1015
  SPV_OPERAND_TYPE_ID, // 1016
  SPV_OPERAND_TYPE_ID, // 1017
  SPV_OPERAND_TYPE_ID, // 1018
  SPV_OPERAND_TYPE_ID, // 1019
  SPV_OPERAND_TYPE_ID, // 1020
  SPV_OPERAND_TYPE_ID, // 1021
  SPV_OPERAND_TYPE_ID, // 1022
  SPV_OPERAND_TYPE_ID, // 1023
  SPV_OPERAND_TYPE_ID, // 1024
  SPV_OPERAND_TYPE_ID, // 1025
  SPV_OPERAND_TYPE_ID, // 1026
  SPV_OPERAND_TYPE_ID, // 1027
  SPV_OPERAND_TYPE_ID, // 1028
  SPV_OPERAND_TYPE_ID, // 1029
  SPV_OPERAND_TYPE_ID, // 1030
  SPV_OPERAND_TYPE_ID, // 1031
  SPV_OPERAND_TYPE_ID, // 1032
  SPV_OPERAND_TYPE_ID, // 1033
  SPV_OPERAND_TYPE_ID, // 1034
  SPV_OPERAND_TYPE_ID, // 1035
  SPV_OPERAND_TYPE_ID, // 1036
  SPV_OPERAND_TYPE_ID, // 1037
  SPV_OPERAND_TYPE_ID, // 1038
  SPV_OPERAND_TYPE_ID, // 1039
  SPV_OPERAND_TYPE_ID, // 1040
  SPV_OPERAND_TYPE_ID, // 1041
  SPV_OPERAND_TYPE_ID, // 1042
  SPV_OPERAND_TYPE_ID, // 1043
  SPV_OPERAND_TYPE_ID, // 1044
  SPV_OPERAND_TYPE_ID, // 1045
  SPV_OPERAND_TYPE_ID, // 1046
  SPV_OPERAND_TYPE_ID, // 1047
  SPV_OPERAND_TYPE_ID, // 1048
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1049
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1050
  SPV_OPERAND_TYPE_ID, // 1051
  SPV_OPERAND_TYPE_SOURCE_LANGUAGE, // 1052
  SPV_OPERAND_TYPE_ID, // 1053
  SPV_OPERAND_TYPE_ID, // 1054
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_BASE_TYPE_ATTRIBUTE_ENCODING, // 1055
  SPV_OPERAND_TYPE_ID, // 1056
  SPV_OPERAND_TYPE_STORAGE_CLASS, // 1057
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1058
  SPV_OPERAND_TYPE_ID, // 1059
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_TYPE_QUALIFIER, // 1060
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1061
  SPV_OPERAND_TYPE_ID, // 1062
  SPV_OPERAND_TYPE_VARIABLE_ID, // 1063
  SPV_OPERAND_TYPE_ID, // 1064
  SPV_OPERAND_TYPE_ID, // 1065
  SPV_OPERAND_TYPE_ID, // 1066
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1067
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1068
  SPV_OPERAND_TYPE_ID, // 1069
  SPV_OPERAND_TYPE_ID, // 1070
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1071
  SPV_OPERAND_TYPE_VARIABLE_ID, // 1072
  SPV_OPERAND_TYPE_ID, // 1073
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_COMPOSITE_TYPE, // 1074
  SPV_OPERAND_TYPE_ID, // 1075
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1076
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1077
  SPV_OPERAND_TYPE_ID, // 1078
  SPV_OPERAND_TYPE_ID, // 1079
  SPV_OPERAND_TYPE_ID, // 1080
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1081
  SPV_OPERAND_TYPE_VARIABLE_ID, // 1082
  SPV_OPERAND_TYPE_ID, // 1083
  SPV_OPERAND_TYPE_ID, // 1084
  SPV_OPERAND_TYPE_ID, // 1085
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1086
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1087
  SPV_OPERAND_TYPE_ID, // 1088
  SPV_OPERAND_TYPE_ID, // 1089
  SPV_OPERAND_TYPE_ID, // 1090
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1091
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 1092
  SPV_OPERAND_TYPE_ID, // 1093
  SPV_OPERAND_TYPE_ID, // 1094
  SPV_OPERAND_TYPE_ID, // 1095
  SPV_OPERAND_TYPE_ID, // 1096
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1097
  SPV_OPERAND_TYPE_ID, // 1098
  SPV_OPERAND_TYPE_ID, // 1099
  SPV_OPERAND_TYPE_ID, // 1100
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1101
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1102
  SPV_OPERAND_TYPE_ID, // 1103
  SPV_OPERAND_TYPE_ID, // 1104
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1105
  SPV_OPERAND_TYPE_ID, // 1106
  SPV_OPERAND_TYPE_ID, // 1107
  SPV_OPERAND_TYPE_ID, // 1108
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1109
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1110
  SPV_OPERAND_TYPE_ID, // 1111
  SPV_OPERAND_TYPE_ID, // 1112
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1113
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1114
  SPV_OPERAND_TYPE_ID, // 1115
  SPV_OPERAND_TYPE_OPTIONAL_ID, // 1116
  SPV_OPERAND_TYPE_ID, // 1117
  SPV_OPERAND_TYPE_ID, // 1118
  SPV_OPERAND_TYPE_ID, // 1119
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1120
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1121
  SPV_OPERAND_TYPE_ID, // 1122
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_INFO_FLAGS, // 1123
  SPV_OPERAND_TYPE_OPTIONAL_LITERAL_INTEGER, // 1124
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_OPERATION, // 1125
  SPV_OPERAND_TYPE_VARIABLE_LITERAL_INTEGER, // 1126
  SPV_OPERAND_TYPE_ID, // 1127
  SPV_OPERAND_TYPE_CLDEBUG100_DEBUG_IMPORTED_ENTITY, // 1128
  SPV_OPERAND_TYPE_ID, // 1129
  SPV_OPERAND_TYPE_ID, // 1130
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1131
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1132
  SPV_OPERAND_TYPE_ID, // 1133
  SPV_OPERAND_TYPE_ID, // 1134
  SPV_OPERAND_TYPE_ID, // 1135
  SPV_OPERAND_TYPE_ID, // 1136
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1137
  SPV_OPERAND_TYPE_ID, // 1138
  SPV_OPERAND_TYPE_ID, // 1139
  SPV_OPERAND_TYPE_ID, // 1140
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1141
  SPV_OPERAND_TYPE_ID, // 1142
  SPV_OPERAND_TYPE_ID, // 1143
  SPV_OPERAND_TYPE_LITERAL_INTEGER, // 1144
  SPV_OPERAND_TYPE_ID, // 1145
  SPV_OPERAND_TYPE_ID, // 1146
  SPV_OPERAND_TYPE_ID, // 1147
  SPV_OPERAND_TYPE_FP_ROUNDING_MODE, // 1148
};
