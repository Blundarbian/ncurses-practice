#include <ncurses.h>

int main()
{
	int k1, k2;

	initscr();

	addstr("Type a key: ");
	refresh();
	k1 = getch();
	clear();

	addstr("Type the same key: ");
	noecho();
	k2 = getch();
	
	move(1, 0);
	if (k1 == k2)	addstr("The keys match");
	else	addstr("The keys don't match");

	getch();
	refresh();

	endwin();
	return 0;
}
