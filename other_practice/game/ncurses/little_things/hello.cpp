#include <ncurses.h>

int main()
{
    // initializes the screen
    // sets up memory and clears the screen
    initscr();

    int x, y;
    x = y = 10;

    // moves the cursor to the specified location
    move(y, x);

    // prints a string(const char *) to a window
    printw("Hello World!");

    // whats for user input, returns int value of that key
    int c = getch();
    clear();

    move(20, 0);
    printw("%d", c);
    refresh();
    getch();

    endwin();
    // deallocates memory and ends ncurses
    return 0;
}