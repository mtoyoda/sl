cmake_minimum_required(VERSION 3.20)

project(li)

set(SOURCE_FILES
  src/sl.c
)

add_executable(${PROJECT_NAME} ${SOURCE_FILES})
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(${PROJECT_NAME} ncurses)

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/bin)
