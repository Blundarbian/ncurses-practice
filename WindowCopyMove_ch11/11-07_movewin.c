#include <ncurses.h>

int main() 
{
	WINDOW *a;
	
	initscr();
	refresh();

	start_color();
	init_pair(1, COLOR_WHITE, COLOR_GREEN);
	
	a = newwin(7, 20, 3, 10);
	if (a == NULL) return 1;

	wbkgd(a, COLOR_PAIR(1));
	mvwaddstr(a, 1, 2, "Window alpha");
	wrefresh(a);
	getch();

	touchwin(stdscr);
	refresh();

	mvwin(a, 10, 43);
	mvwaddstr(a, 2, 2, "Moved!");
	wrefresh(a);
	getch();

	endwin();
	return 0;
}
