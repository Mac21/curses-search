#include "ncurses.h"

#include "app.h"
#include "maze.h"

void run() {
  initscr();
  cbreak();
  noecho();
  box(stdscr, ACS_VLINE, ACS_HLINE);

  int done = 0;
  while(!done) {
    refresh();
    draw_maze(stdscr, 1, 1, 2);
  }

  endwin();
}
