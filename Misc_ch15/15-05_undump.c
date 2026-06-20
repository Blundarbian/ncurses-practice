#include <ncurses.h>

int main() 
{
	initscr();

	addstr("Press Enter to restore the screen");
	refresh();
	getch();

	int r = scr_restore("dump.win");
	if (r == ERR)
		addstr("error: window cannot be read");
	
	refresh();
	getch();

	endwin();
	return 0;
}
