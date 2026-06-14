#include <ncurses.h>

int main() 
{
	initscr();

	// test for color in terminal 
	if (!has_colors())
	{
		endwin();	// exit Ncurses
		puts("Terminal cannot do colos");
		return 1;
	}

	// initialize ncurses colos
	if (start_color() != OK)
	{
		endwin();
		puts("Unable to start colors.");
		return 1;
	}

	// colors possible
	printw("Colors initialized\n");
	printw("%d colors available.\n", COLORS);
	printw("%d color pair.", COLOR_PAIRS);
	refresh();
	getch();

	endwin();
	return 0;
}
