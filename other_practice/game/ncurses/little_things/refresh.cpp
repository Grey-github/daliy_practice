#include <ncurses.h>

int main(int argc, char** argv)
{
    // Initializes ncurses
    initscr();

    WINDOW* win = newwin(10, 30, 0, 0);
    box(win, 0, 0);
    refresh();
    wrefresh(win);

    getch();
    endwin();
    // Ends ncurses

    return 0;
}