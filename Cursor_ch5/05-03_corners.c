#include <ncurses.h>

int main() 
{
	int lines, cols;

	initscr();
	getmaxyx(stdscr, lines, cols);

	mvaddch(0, 0, '*');
	refresh();
	napms(500);

	mvaddch(0, cols - 1, '*');
	refresh();
	napms(500);

	mvaddch(lines - 1, 0, '*');
	refresh();
	napms(500);

	mvaddch(lines - 1, cols - 1, '*');
	refresh();
	getch();

	endwin();
	return 0;
}

