#include <ncurses.h>

int main() 
{
	WINDOW *sub;

	initscr();
	
	sub = derwin(stdscr, LINES - 2, COLS - 2, 1, 1);
	if (!sub)
	{
		endwin();
		puts("error: cannot create subwindow");
		return 1;
	}

	box(stdscr, 0, 0);
	addstr("I'm writing text\n");
	addstr("to the standard screen\n");
	waddstr(sub, "I'm the subwindow.\n");
	refresh();
	getch();

	wclear(sub);
	wrefresh(sub);
	getch();

	endwin();
	return 0;
}
