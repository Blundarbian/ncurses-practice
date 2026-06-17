#include <ncurses.h>
#include <string.h>

int main()
{
	initscr();

	addstr("Where did that silly cat go?");
	char rep[] = "fat ";

	refresh();
	getch();

	move(0, 15);
	for (int i = 0; i < 6; i++) {
		delch();
		refresh();
		napms(250);
	}
	getch();

	move (0, 15);
	for (int i = 3; i >= 0; i--) {
		insch(rep[i]);
		refresh();
		napms(250);

	}
	getch();

	endwin();
	return 0;
}
