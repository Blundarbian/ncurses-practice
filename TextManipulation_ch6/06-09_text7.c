#include <ncurses.h>

int main() 
{
	initscr();

	addstr("This is the first line\n");
	addstr("Line two here\n");
	addstr("Third line is next\n");
	addstr("Fourth line now\n");
	addstr("Fifth and final line\n");
	refresh();
	getch();

	move(3, 7);
	for (int i = 0; i < 5; i++) 
	{
		delch();
		refresh();
		napms(250);
	}
	getch();

	endwin();
	return 0;
}
