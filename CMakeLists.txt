cmake_minimum_required(VERSION 3.20)

project(hello_world VERSION 0.1.0 LANGUAGES C)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/dist")
include_directories("${CMAKE_SOURCE_DIR}/includes")

if(EMSCRIPTEN)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -v -s EXIT_RUNTIME=0 -s EXPORTED_RUNTIME_METHODS=[ccall]")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -v -s EXIT_RUNTIME=0 -s EXPORTED_RUNTIME_METHODS=[ccall]")
endif(EMSCRIPTEN)


add_executable(${PROJECT_NAME} src/app.c src/check.c)
