#include "ncurses.h"

#include "app.h"
#include "maze.h"

void run() {
  WINDOW* win = initscr();
  cbreak();

  int done = 0;
  while(!done) {
    refresh();
    box(win, ACS_PLUS, ACS_PLUS);
  }

  endwin();
}
