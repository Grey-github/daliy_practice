#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define ctrl(x) (x & 0xlf)

int main(int argc, char** argv)
{
    initscr();
    noecho();
    char ch;
    while (ch = getch())
    {
        mvprintw(1, 0, "KEY NAME : %s ~ 0x%02x\n", keyname(ch), ch);
        if (ch == ('a' & 0x1F))
            mvprintw(0, 0, "Detected Ctrl+a!");
    }
    endwin();
}