#include <ncurses.h>
#include <string>

int main()
{
    // NCURSES START
    initscr();
    noecho();
    cbreak();

    int y, x, yBeg, xBeg, yMax, xMax;

    WINDOW* win = newwin(10, 20, 10, 10);

    getyx(stdscr, y, x);
    getbegyx(win, yBeg, xBeg);
    getmaxyx(stdscr, yMax, xMax);

    mvprintw(yMax / 2, xMax/2, "%d %d", yBeg, xBeg);

    // make sure program waits before exiting...
    getch();
    endwin();
    // NCURSES END

    return 0;
}