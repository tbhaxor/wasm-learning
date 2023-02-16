cmake_minimum_required(VERSION 3.20)

project(hello_world VERSION 0.1.0 LANGUAGES C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/dist")
include_directories("${CMAKE_SOURCE_DIR}/includes")

add_executable(${PROJECT_NAME} src/app.c src/check.c)
target_link_options(${PROJECT_NAME} PRIVATE "-sFORCE_FILESYSTEM -sEXIT_RUNTIME=0")