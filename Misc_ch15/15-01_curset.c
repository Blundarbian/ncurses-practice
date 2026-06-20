#include <ncurses.h>

int main() 
{
	initscr();
	
	curs_set(0);
	addstr(" <- The cursor is off");
	move(0, 0);
	refresh();
	getch();

	curs_set(1);
	addstr("\n <- The cursor is visible");
	move(1, 0);
	refresh();
	getch();

	curs_set(2);
	addstr("\n <- The cursor is very visible");
	move(2, 0);
	refresh();
	getch();

	endwin();
	return 0;
}

