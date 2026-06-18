#include <ncurses.h>

int main()
{
	char buf[32];

	initscr();

	addstr("Type. I'll wait..\n");
	refresh();
	napms(5000);

	addstr("Flush\n");
	flushinp();
	addstr("Here is what you typed:\n");
	getnstr(buf, 32);
	
	endwin();
	return 0;
}
