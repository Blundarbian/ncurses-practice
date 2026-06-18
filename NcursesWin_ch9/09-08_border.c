#include <ncurses.h>

int main() 
{
	initscr();
	
	border(0, 0, 0, 0, 0, 0, 0, 0); // wtf
	move(1, 1);
	addstr("Now that's a border!");
	refresh();
	getch();

	endwin();
	return 0;
}
