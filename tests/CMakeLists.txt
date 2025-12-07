add_executable(caesar_tests test_caesar.cpp)

target_link_libraries(caesar_tests gpencl)

add_test(NAME CaesarTests COMMAND caesar_tests)
