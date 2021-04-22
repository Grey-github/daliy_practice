#include <ncurses.h>

int main()
{
    initscr(); //Start curses mode
    printw("Hello Ncurses!!!"); //Printf Hello Ncureses
    refresh(); //Print it on to the real screeen
    getch(); //Wait for user input
    endwin(); //End curses mode

    return 0;
}
