#include <ncurses.h>

int main() 
{
	initscr();
	
	border('l', 'r', 't', 'b', '*', '*', '*', '*'); // wtf
	move(1, 1);
	addstr("Now that's a border!");
	refresh();
	getch();

	endwin();
	return 0;
}
