#include <ncurses.h>

int main(int argc, char** argv)
{
    // Start ncurses
    initscr();
    noecho();

    // Input modes
    cbreak();
    // halfdelay(5);
    // nodelay(stdscr, true);
    timeout(-1);

    int c;
    while ((c=getch()) != 'x')
    {
        printw("%d\n", c);
    }

    endwin();
    // End ncurses

    return 0;
}