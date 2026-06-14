#include <ncurses.h>

int main() 
{
	char text[] = "Greetings from Ncurse!";
	char *t;

	initscr();	// initilize ncurses

	t = text;	

	while (*t)
	{
		addch(*t);	// one char output
		t++;		

		refresh();	// update screen

		napms(100);	// delay 0.1 sec
	}

	getch();

	endwin();

	return 0;
}
