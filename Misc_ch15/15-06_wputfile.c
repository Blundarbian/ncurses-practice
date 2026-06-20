#include <ncurses.h>

int main() 
{
	FILE *wfile;
	WINDOW *win;
	int r;

	initscr();
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	refresh();

	win = newwin(3, 10, 7, 30);
	wbkgd(win, COLOR_PAIR(1));
	box(win, 0, 0);
	mvwaddstr(win, 1, 2, "Window");
	wrefresh(win);
	getch();

	if ((wfile = fopen("window.win", "w")) == NULL) 
	{
		endwin();
		puts("error: file creation");
		return 1;
	}

	r = putwin(win, wfile);
	fclose(wfile);
	addstr("Window data written");
	refresh();
	getch();

	endwin();
	return 0;
}
