#Licensed under the MIT license. See LICENSE file in the project root for full license information.

set(clds_sorted_list_perf_h_files
    clds_sorted_list_perf.h
)

set(clds_sorted_list_perf_c_files
    main.c
    clds_sorted_list_perf.c
)

set(clds_sorted_list_perf_rc_files
    ${LOGGING_RC_FILE}
)

add_executable(clds_sorted_list_perf ${clds_sorted_list_perf_h_files} ${clds_sorted_list_perf_c_files} ${clds_sorted_list_perf_rc_files})

target_link_libraries(clds_sorted_list_perf clds c_logging)
