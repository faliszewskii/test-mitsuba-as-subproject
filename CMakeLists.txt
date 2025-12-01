cmake_minimum_required(VERSION 3.5)
project(test_mitsuba)
set(CMAKE_CXX_STANDARD 17)
add_subdirectory(external/mitsuba3)
include_directories(
	${CMAKE_SOURCE_DIR}/external/mitsuba3/ext/drjit/ext/nanobind/include
        ${CMAKE_SOURCE_DIR}/external/mitsuba3/ext/nanobind/ext/robin_map/include
)
add_executable(test_mitsuba main.cpp)
target_link_libraries(test_mitsuba mitsuba-core mitsuba-render)
