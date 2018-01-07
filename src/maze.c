#include "stdlib.h"
#include "ncurses.h"

#include "maze.h"

void draw_maze(WINDOW* win, size_t startx, size_t starty, size_t tile_width) {
  size_t endx = LINES - tile_width;
  size_t endy = COLS - tile_width;

  for(size_t i = startx; i <= endx; i++) {
    for(size_t j = starty; j <= endy; j++) {
      mvwaddch(win, i, j, '#');
    }
  }

  wrefresh(win);
}
