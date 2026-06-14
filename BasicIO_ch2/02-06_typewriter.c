#include <ncurses.h>

int main() 
{
	int c;

	initscr();
	addstr("Type a few lines of text\n");
	addstr("Press ~ to quit\n");
	refresh();

	while ((c = getch()) != '~')
		;

	endwin();
	return 0;
}
