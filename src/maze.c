#include "stdlib.h"
#include "ncurses.h"

#include "maze.h"

void draw_maze(WINDOW* win, size_t startx, size_t starty, size_t tile_width) {
  size_t endx = COLS - tile_width;
  size_t endy = LINES - tile_width;

  for(size_t i = starty; i <= endy; i++) {
    for(size_t j = startx; j <= endx; j++) {
      mvwaddch(win, i, j, '#');
    }
  }
  mvwaddch(win, 20, 20, '#');

  char temp = (mvwinch(win, 20, 20) & A_CHARTEXT);
  mvwaddch(win, endy - 1, endx - 2, temp);

  wrefresh(win);
}
