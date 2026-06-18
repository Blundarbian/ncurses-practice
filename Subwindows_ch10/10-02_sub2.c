#include <ncurses.h>

int main() 
{
	WINDOW *sub;

	initscr();

	int len, width; 
	len = LINES / 4;
	width = COLS / 4;

	sub = subwin(stdscr, len, width, (LINES / 2) - len / 2, (COLS / 2) - width / 2);
	if (!sub)
	{
		endwin();
		puts("error: cannot create subwindow");
		return 1;
	}

	box(sub, 0, 0);
	wmove(sub, 1, 1);
	waddstr(sub, "I'm the subwindow.");
	addstr("I'm the parent");
	refresh();
	getch();

	endwin();
	return 0;
}
