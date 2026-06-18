#include <ncurses.h>

int main() 
{
	WINDOW *sub;
	int i;

	initscr();
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_BLUE);

	sub = subwin(stdscr, LINES - 10, COLS - 10, 4, 5);

	if (!sub)
	{
		endwin();
		puts("Unable to create subwindow");
		return 1;
	}

	for (i = 0; i < 500; i++)
		addstr("standard screen ");
	wbkgd(sub, COLOR_PAIR(1));
	for (i = 0; i < 500; i++)
		waddstr(sub, " sub ");

	refresh();
	wrefresh(sub);
	getch();

	delwin(sub);
	mvaddstr(0, 0, "Subwindow deleted ");
	refresh();
	getch();

	endwin();
	return 0;
}

