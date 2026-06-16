#include <ncurses.h>

int main() 
{
	int row, col;
	char c = '\0';

	initscr();
	addstr("Type some text; '~' to end:\n");
	refresh();

	while ((c = getch()) != '~')
		;

	getyx(stdscr, row, col);
	printw("\n\nThe cursor was at pos %d, %d ", row, col);
	printw("When you stoped typing.");
	refresh();
	getch();

	endwin();
	return 0;
}
