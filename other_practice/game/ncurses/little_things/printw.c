#include <ncurses.h> //ncurses.h includes stdio.h
#include <string.h>

int main()
{
    char mesg[] = "Just a string"; //message to be appeared on the screnn
    int row, col; //to store the number of rows and columns of the screnn

    initscr(); //strat the curses mode
    getmaxyx(stdscr, row, col); //get the number of rows and columns
    //print the message at the center of the screen
    mvprintw(row/2, (col-strlen(mesg))/2, "%s", mesg);
    mvprintw(row-2, 0, "This screen has %d rows and %d columns\n", row, col);
    printw("Try resizing you window(if possible) and then run this program again");
    refresh();
    getch();
    endwin();

    return 0;
}
