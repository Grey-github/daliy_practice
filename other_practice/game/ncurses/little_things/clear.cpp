#include <ncurses.h>

int main(int argc, char** argv)
{
    // Setup ncurses
    initscr();
    noecho();
    // I like to refresh stdscr at the start
    // tends to fix some upexpected display side effects
    refresh();

    printw("Fuck You");
    mvprintw(1, 0, "Fuck You");
    move(0, 1);
    getch();
    clrtoeol(); // wclrtoeol(WINDOW *)
    getch();

    mvprintw(2, 0, "Everything below this should get cleared");
    mvprintw(3, 0, "Everything below this should get cleared");
    mvprintw(6, 0, "Everything below this should get cleared");
    mvprintw(10, 0, "Everything below this should get cleared");
    move(2, 8);
    getch();
    clrtobot(); // wclrtobot(WINDOW *)
    getch();

    printw("Fuck You!");
    mvprintw(5, 5, "Fuck You!");
    mvprintw(10, 30, "Fuck You!");
    getch();
    // clear();// werase(WINDOW *)
    erase(); // werase(WINDOW *)

    // Make sure to pause before exiting
    getch();
    endwin();

    return 0;
}
