cmake_minimum_required(VERSION 3.20)

project(wasm_learning)

macro(LOG_STATUS component message)
    message(STATUS "[${component}] ${message}")
endmacro()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/dist")
include_directories("${CMAKE_SOURCE_DIR}/includes")

if(EMSCRIPTEN)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Oz --profiling-funcs --no-entry -s NO_EXIT_RUNTIME=1 -s EXPORTED_RUNTIME_METHODS=[ccall]")
endif(EMSCRIPTEN)

add_subdirectory(src)
# add_subdirectory(includes)