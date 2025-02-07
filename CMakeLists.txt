cmake_minimum_required(VERSION 3.2)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# enable clangd for zed editor
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

Project("AnandKiTodoList")

# source
set(SOURCE_DIR "${CMAKE_SOURCE_DIR}/src")

# includes
set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/include")

add_executable(todo ${SOURCE_DIR}/main.cpp ${SOURCE_DIR}/operations.cpp )
target_include_directories(todo PUBLIC ${INCLUDE_DIR} )
