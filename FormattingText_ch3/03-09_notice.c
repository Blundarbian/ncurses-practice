#include <ncurses.h>

int main() 
{
	initscr();

	addstr("Attention!\n");
	beep();
	refresh();
	getch();

	addstr("I said, Attention!!\n");
	flash();
	refresh();
	getch();

	endwin();
	return 0;
}
