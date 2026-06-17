#include <ncurses.h>

int main() 
{
	int c;
	unsigned val = 0;

	initscr();

	addstr("Press any key to begin:\n");
	refresh();
	getch();

	// turn off getch wait 
	nodelay(stdscr, TRUE);
	addstr("Press any key to stop the loop!\n");
	
	while ((c = getch()) != ' ')
	{
		printw("%d\r", val++);
		refresh();
	}

	endwin();
	return 0;
}
