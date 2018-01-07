#pragma once

#include "ncurses.h"

#define MAZE_NUM_COLUMNS 20
#define MAZE_NUM_ROWS 20

void draw_maze(WINDOW* win, size_t startx, size_t starty, size_t tile_width);
