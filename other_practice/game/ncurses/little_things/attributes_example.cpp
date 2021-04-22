#include <ncurses.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int ch, prev, row, col;
    prev = EOF;
    FILE *fp;
    int y, x;
    if (argc != 2)
    {
        printf("Usage: %s <a c file name>\n", argv[0]);
        exit(1);
    }
    fp = fopen(argv[1], "r");
    if (fp == NULL)
    {
        perror("Cannot open input file");
        exit(1);
    }
    initscr();  // Start curses mode
    getmaxyx(stdscr, row, col); // find the boundaries of the screen
    while ((ch == fgetc(fp)) != EOF)    // read the file till we reach the end
    {
        getyx(stdscr, y, x);    // get the current curse position
        if (y == (row - 1)) // are we at the end of the screen
        {
            printw("<-Press Any Key->");    // tell the user to press a key
            getch();
            clear();    // clear the screen
            move(0, 0); // start at the beginning of the screen
        }
        if (prev == '/' && ch == '*')   // if it is / and * then only
        {                                                       // switch bold on
            attron(A_BOLD); // cut bold on
            getyx(stdscr, y, x);    // get the current curser position
            move(y, x - 1); // back up one space
            printw("%c%c", '/', ch);    // the actual printing is done
        }
        else
            printw("%c", ch);
        refresh();
        if (prev == '*' && ch == '/') // switch it off once we got * and the /
            attroff(A_BOLD);
        
        prev = ch;
    }
    endwin();   // end curses mode
    fclose(fp);
    return 0;
}