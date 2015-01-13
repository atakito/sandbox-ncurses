#include <ncurses.h>

int main()
{
    initscr();                    // start curses mode
    printw("Hello World !!!");    // print message on invisible screen
    refresh();                    // print message on visible screen
    getch();                      // wait for user input
    endwin();                     // end curses mode

    return 0;
}
