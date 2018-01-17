#include "stdlib.h"
#include "ncurses.h"

#include "app.h"
#include "maze.h"

char** load_maze(char* path) {
  char** maze = calloc(COLS, sizeof(char*));
  char* line = calloc(LINES, sizeof(char));

  FILE* file = fopen(path, "r");
  for(size_t i = 0; i < sizeof(maze); i++) {
    fgets(line, sizeof line, file);
    if (line == NULL) {
      break;
    }
    *(maze+i) = line;
  }
  free(file);

  return maze;
}

void run() {
  initscr();
  cbreak();
  noecho();
  box(stdscr, ACS_VLINE, ACS_HLINE);

  char** maze = load_maze("./maze.txt");

  int done = 0;
  //while(!done) {
  for (size_t i = 0; i < sizeof(maze); i++) {
    waddstr(stdscr, *(maze + i));
    refresh();
  }

  while(!done) {
    refresh();
  }
    //draw_maze(stdscr, 1, 1, 2);
  //}

  free(maze);
  endwin();
}
