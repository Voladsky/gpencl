add_executable(caesar_benchs bench_caesar.c)

target_link_libraries(caesar_benchs gpencl)

target_include_directories(caesar_benchs PUBLIC "../include")