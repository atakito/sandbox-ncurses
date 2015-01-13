#include <ncurses.h>

int main()
{
    int ch;

    initscr();                                           // start curses mode
    raw();                                               // line buffering disabled
    keypad(stdscr, TRUE);                                // gets f1, f2, etc
    noecho();                                            // don't echo() while doing getch

    printw("Type any character to see it in bold\n");
    ch = getch();                                        // if raw() wasn't called, this would
                                                         // have required the enter key too

    if (ch == KEY_F(1)) {                                // requires keypad()
        printw("F1 key pressed");
    } else {
        printw("The pressed key is ");
        attron(A_BOLD);
        printw("%c", ch);
        attroff(A_BOLD);
    }

    refresh();                                            // print to visible screen
    getch();                                              // wait for input
    endwin();                                             // end curses mode

    return 0;
}
