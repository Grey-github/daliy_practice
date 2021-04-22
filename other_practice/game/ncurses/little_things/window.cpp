#include <ncurses.h>

int main()
{
    // initializes the screen
    // sets up memory and clears the screen
    initscr();
    cbreak();
    noecho();
    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 10;

    WINDOW* win = newwin(height, width, start_y, start_x);
    refresh();

    char c = '+';
    char space = ' ';
    // box(win, 103, 104);
    int left, right, top, bottom, tlc, trc, blc, brc;
    left = right = 103;
    top = 104;
    bottom = blc = brc = (int)space;
    tlc = trc = (int)c;

    wborder(win, left, right, top, bottom, tlc, trc, blc, brc);
    mvwprintw(win, 1, 1, "Fuck you, bitch!");
    wrefresh(win);

    getch();
    getch();

    endwin();
    // deallocates memory and ends ncurses

    return 0;
}