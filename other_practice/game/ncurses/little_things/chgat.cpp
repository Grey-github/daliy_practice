#include <ncurses.h>

int main(int argc, char** argv)
{
    initscr();

    if (!has_colors())
    {
        return -1;
    }
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLUE);
    init_pair(2, COLOR_WHITE, COLOR_RED);

    // int chgat(int n, attr_t attr, short color, const void * opts)
    // chgat, mvchgat, wchgat, mvchgat

    move(0, 5);
    printw("Fuck You");
    mvchgat(0, 5, 5, A_STANDOUT, 0, NULL); 

    getch();
    endwin();

    return 0;
}