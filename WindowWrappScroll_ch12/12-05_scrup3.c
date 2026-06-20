#include <ncurses.h>

int main() 
{
	initscr();

	scrollok(stdscr, TRUE);
	for (int y = 0; y <= LINES; y++)
		mvprintw(y, 0, "Line %d", y);
	refresh();
	getch();

	scrl(-3);
	refresh();
	getch();

	endwin();
	return 0;
}
