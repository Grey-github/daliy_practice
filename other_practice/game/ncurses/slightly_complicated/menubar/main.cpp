#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <ncurses.h>
#include "menu.h"

int main(int argc, char** argv)
{
    initscr();
    noecho();
    curs_set(0);

    // [4] Start color, and create a color pair
    if (!has_colors())
    {
        return -1;
    }
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_BLUE);

    int yMax, xMax;
    getmaxyx(stdscr, yMax, xMax);

    WINDOW* win = newwin(yMax / 2, xMax / 2, yMax / 4, xMax / 4);
    box(win, 0, 0);

    // [5] Create some string arrays to act at "menu items"
    std::string menu1[] = {"New", "Open", "Save", "Exit"};
    std::string menu2[] = {"Copy", "Cut", "Paste"};
    std::string menu3[] = {"Sidebar", "Terminal"};
    Menu menus[3]  = {
        Menu("File", 'f', menu1, 4),
        Menu("Edit", 'e', menu2, 3),
        Menu("View", 'v', menu3, 2),
    };

    MenuBar menubar = MenuBar(win, menus, 3);
    menubar.draw();

    char ch;
    while (ch = wgetch(win))
    {
       menubar.handleTrigger(ch);
       menubar.draw(); 
    }

    endwin();
    return 0;
}