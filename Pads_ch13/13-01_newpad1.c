#include <ncurses.h>

int main() 
{
	WINDOW *p;

	initscr();

	if((p = newpad(50, 100)) == NULL)
	{
		endwin();
		fprintf(stderr, "error: unable to create pad");
		return 1;
	}

	addstr("New pad created");
	refresh();
	getch();

	endwin();
	return 0;
}
