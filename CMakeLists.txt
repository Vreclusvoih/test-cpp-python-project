cmake_minimum_required(VERSION 3.10)
project(test)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(BIN_DIR ${CMAKE_SOURCE_DIR}/bin)
set(
    SOURCES
    src/main.cpp
    src/hello.cpp
)

add_executable(
    test
    ${SOURCES}
)