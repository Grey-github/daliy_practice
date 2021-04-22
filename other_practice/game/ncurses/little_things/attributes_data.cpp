#include <ncurses.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    initscr();
    if (has_colors() == FALSE)
    {
        endwin();
        printw("Your terminal does not support color\n");
        exit(1);
    }
        start_color();
    
    // Define 2 color pairs
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_RED, COLOR_BLACK);

    attr_t emphasis = A_REVERSE | COLOR_PAIR(1);
    attron(emphasis);
    mvaddch(5, 5, 'a');
    mvaddch(5, 6, 'a');
    mvaddch(5, 7, 'a');

    attron(A_REVERSE | COLOR_PAIR(2));
    mvaddch(7, 5, 'a');
    mvaddch(7, 6, 'a');
    mvaddch(7, 7, 'a');

    chtype c = 'a' | A_REVERSE | COLOR_PAIR(1);

    mvaddch(9, 5, c);

    // wait for input, then exit
    getch();
    endwin();

    return 0;
}