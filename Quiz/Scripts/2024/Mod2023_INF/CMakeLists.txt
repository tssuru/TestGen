cmake_minimum_required(VERSION 3.8.0)
project(lecture8 VERSION 0.1.0 LANGUAGES C CXX)

if (MSVC)
    add_compile_options(/W3)
    add_compile_options(/std:c++20)
    add_compile_options(/EHsc)
else()
    add_compile_options(-Wall)
    add_compile_options(-std=c++20)
    add_compile_options(-fexceptions)
    add_compile_options(-O0)
endif()

add_compile_definitions(DEBUG)

add_executable(p8
all.cpp
)

