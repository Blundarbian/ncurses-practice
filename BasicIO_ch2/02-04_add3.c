#include <ncurses.h>

int main() 
{
	char t1[] = "Shall I compare thee";
	char t2[] = " to a summer's day?";

	initscr();
	addstr(t1);
	addstr(t2);

	move(2, 0);	// move cursor to row 3 col 1 
	addstr("Though art more lovely...");

	refresh();
	getch();

	endwin();
	return 0;
}


