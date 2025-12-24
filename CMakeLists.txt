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

include_directories(src/include)

add_executable(
    test
    ${SOURCES}
)
if (CMAKE_EXPORT_COMPILE_COMMANDS)
  add_custom_target(update_compile_commands ALL
    COMMAND ${CMAKE_COMMAND} -E create_symlink
            ${CMAKE_BINARY_DIR}/compile_commands.json
            ${CMAKE_SOURCE_DIR}/build/compile_commands.json
    COMMENT "Updating active compile_commands.json for clangd"
  )
endif()
