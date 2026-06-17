#include <ncurses.h>

int main() 
{
	int y, x, cmax;

	initscr();

	getmaxyx(stdscr, y, x);
	cmax = (x * y) / 5;
	
	for (int i = 0; i < cmax; i++)
		addstr("blah ");
	refresh();
	getch();

	clear();
	refresh();
	getch();

	endwin();
	return 0;
}
