project(greeter)

file(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}" "*.c")
add_executable(${PROJECT_NAME} ${SOURCE_FILES})