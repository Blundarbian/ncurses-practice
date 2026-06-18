#include <ncurses.h>

int main() 
{
	WINDOW *sub;

	initscr();
	
	sub = subwin(stdscr, LINES - 2, COLS - 2, 1, 1);
	if (!sub)
	{
		endwin();
		puts("error: cannot create subwindow");
		return 1;
	}

	box(stdscr, 0, 0);
	waddstr(sub, "I'm the subwindow.\n");
	refresh();
	getch();

	endwin();
	return 0;
}
