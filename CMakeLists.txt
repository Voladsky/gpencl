cmake_minimum_required(VERSION 3.29)
project(gpencl VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

option(BUILD_TESTS "Build tests" ON)
option(BUILD_BENCHMARKS "Build benchmarks" ON)
option(BUILD_FRONTEND "Build frontend" ON)

aux_source_directory("." GPENCL_LIB_SOURCES)
aux_source_directory("lib" GPENCL_LIB_SOURCES)

add_library(gpencl STATIC ${GPENCL_LIB_SOURCES})

target_include_directories(gpencl PUBLIC "include")
target_include_directories(gpencl PRIVATE "lib")

find_package(Vulkan REQUIRED)
target_link_libraries(gpencl PRIVATE Vulkan::Vulkan)

if (BUILD_FRONTEND)
	add_subdirectory(frontend)
endif()

if (BUILD_TESTS)
	enable_testing()
	add_subdirectory(tests)
endif()

if (BUILD_BENCHMARKS)
	add_subdirectory(benchmarks)
endif()
