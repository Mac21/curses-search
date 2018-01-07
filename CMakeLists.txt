cmake_minimum_required(VERSION 2.9)
project(main)

file(GLOB SOURCES
  "src/*.c"
  "src/*.h"
)

find_library(NCURSES "ncurses" "/usr/lib")
add_library(${NCURSES} SHARED IMPORTED)

add_executable(main ${SOURCES})
target_link_libraries(main ncurses)
