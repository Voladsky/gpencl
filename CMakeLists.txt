cmake_minimum_required(VERSION 3.29)
project(gpencl VERSION 0.0.1 LANGUAGES C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build tests" ON)
option(BUILD_BENCHMARKS "Build benchmarks" ON)

file(GLOB_RECURSE GPENCL_LIB_SOURCES 
	${PROJECT_SOURCE_DIR}/*.c
	${PROJECT_SOURCE_DIR}/*.cpp)
	
add_library(gpencl STATIC ${GPENCL_LIB_SOURCES})

target_include_directories(gpencl PUBLIC "include")
target_include_directories(gpencl PRIVATE "lib")

if (BUILD_TESTS)
	enable_testing()
	add_subdirectory(tests)
endif()

if (BUILD_BENCHMARKS)
	add_subdirectory(benchmarks)
endif()