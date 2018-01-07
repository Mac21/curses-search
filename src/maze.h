#pragma once

#include "ncurses.h"

void draw_maze(WINDOW* win, size_t startx, size_t starty, size_t tile_width);
