add_executable(caesar_tests test_caesar.c)

target_link_libraries(caesar_tests gpencl)

target_include_directories(caesar_tests PUBLIC "../include")

add_test(NAME CaesarTests COMMAND caesar_tests)