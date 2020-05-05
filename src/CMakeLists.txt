cmake_minimum_required(VERSION 3.0)
project(theonum)

set(CMAKE_CXX_FLAGS "-std=c++11 -g -o0 ${CMAKE_CXX_FLAGS}")

add_library(theonum STATIC
    lib/division.hpp
    lib/division.cpp
)

target_include_directories(theonum PUBLIC ${CMAKE_CURRENT_LIST_DIR}/lib)
set_target_properties(theonum PROPERTIES LINKER_LANGUAGE CXX)

add_executable(theonum_test
    spec/catch.hpp
    spec/division_spec.cpp
    spec/test_main.cpp
)

target_include_directories(theonum_test PRIVATE ${CMAKE_CURRENT_LIST_DIR}/spec)
target_link_libraries(theonum_test theonum)
