#include <ncurses.h>
#include <string.h>

int main() 
{
	int y, x, max;
	char groundword[] = "blah ";

	initscr();

	getmaxyx(stdscr, y, x);
	max = (x * y) / (strlen(groundword) - 1);
	for (int i = 0; i < max; i++)
		addstr(groundword);
	refresh();
	getch();

	move(5, 20); 	// setup cursor
	clrtobot();

	refresh();
	getch();

	endwin();
	return 0;
}
