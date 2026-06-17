#include <ncurses.h>

// check keyboard queue
int kbhit()
{
	int c, r;

	// turn off blocking and echo
	nodelay(stdscr, TRUE);
	noecho();

	c = getch();
	if (c == ERR) 	
		r = FALSE;
	else 
	{		
		r = TRUE;
		ungetch(c);
	}

	// restore block and echo
	echo();
	nodelay(stdscr, FALSE);
	return r;
}

int main() 
{
	initscr();

	addstr("Tap a key while I count...\n");
	for (int i = 0; i < 21; i++) 
	{
		printw("%2d ", i);
		refresh();
		napms(500);
		if (kbhit())
			break;
	}
	addstr("\nDone!\n");
	printf("You pressed the '%c' key\n", getch());
	refresh();
	getch();

	endwin();
	return 0;
}
