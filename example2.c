#include <ncurses.h>
#include <string.h>

int main()
{
    char message[] = "Just a string";
    int row, col;

    initscr();

    getmaxyx(stdscr, row, col);
    mvprintw(row / 2, 0, "This screen has %d rows and %d columns", row, col);
    mvprintw(0, 0, "Try resizing your window and run again");

    refresh();
    getch();
    endwin();

    return 0;
}
