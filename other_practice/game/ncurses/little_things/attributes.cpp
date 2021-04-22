#include <ncurses.h>

int main()
{
    // NCURSES START
    // start_ncurses(true, true);
    if (!has_colors())
    {
      printw("Teminal does not support color");
      getch();
      return -1;
    }

    /*
      * A_NORMAL
      * A_STANDOUT 
      * A_REVERSE
      * A_BLINK
      * A_DIM
      * A_BOLD
      * A_PROTECT
      * A_INVIS
      * A_ALTCHARSET
      * A_CHARTEXT
      */
    attron(A_BOLD);
    printw("FUCK YOU");
    attroff(A_BOLD);

    //init_pair(1, COLOR_CYAN, COLOR_WHITE);
    /*
      * COLOR_PAIR(n)
      * COLOR_BLACK     0
      * COLOR_RED          1
      * COLOR_GREEN    2
      * COLOR_YELLOW 3 
      * COLOR_BLUE       4 
      * COLOR_MAGENTA 5
      * COLOR_CYAN       6
      * COLOR_WHITE    7
      */
    return 0;
}