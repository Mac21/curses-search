cmake_minimum_required(VERSION 2.9)
project(graphs)

file(GLOB SOURCES
  "src/*.c"
  "src/*.h"
)

find_library(NCURSES "ncurses" "/usr/lib")
add_library(${NCURSES} SHARED IMPORTED)

add_executable(graphs ${SOURCES})
target_link_libraries(graphs ncurses)
