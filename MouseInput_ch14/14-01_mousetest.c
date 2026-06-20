#include <ncurses.h>

int main() 
{
	initscr();

	if (NCURSES_MOUSE_VERSION > 0) 
	{
		puts("error: no mouse support");
		endwin();
		return 1;
	}

	addstr("Mouse functions avalible\n");
	mousemask(ALL_MOUSE_EVENTS, NULL);
	addstr("Mouse active");
	refresh();
	getch();

	endwin();
	return 0;
}
