#include "stdlib.h"
#include "ncurses.h"

#include "maze.h"

void draw_maze(WINDOW* win, size_t startx, size_t starty, size_t tile_width) {
  printw("%d", WINT_MAX);
  size_t endx = startx + tile_width * MAZE_NUM_ROWS;
  size_t endy = starty + tile_width * MAZE_NUM_COLUMNS;
  // Draw maze corners.
  mvwaddch(win, starty, startx, ACS_ULCORNER);
  mvwaddch(win, starty, endx, ACS_URCORNER);
  mvwaddch(win, endy, startx, ACS_LLCORNER);
  mvwaddch(win, endy, endx, ACS_LRCORNER);

  for(size_t i = startx; i <= MAZE_NUM_ROWS; i++) {
    for(size_t j = starty; j <= MAZE_NUM_COLUMNS; j++) {
    }
  }

  wrefresh(win);
}
