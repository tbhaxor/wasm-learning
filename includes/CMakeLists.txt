
file(GLOB DIRS RELATIVE "${CMAKE_CURRENT_SOURCE_DIR}" "*")

foreach(DIR ${DIRS})
  if(IS_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/${DIR}")
      message(STATUS "Including ${CMAKE_CURRENT_SOURCE_DIR}/${DIR}")
  endif()
endforeach()
