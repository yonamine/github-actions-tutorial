cmake_minimum_required(VERSION 3.20)

project(HelloWorld LANGUAGES CXX VERSION 1.0.0 DESCRIPTION "Hello World for Github Actions")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(a.out "src/main.cpp")
