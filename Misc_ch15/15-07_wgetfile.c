#include <ncurses.h>

int main() 
{
	FILE *wfile;
	WINDOW *win;

	initscr();
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_RED);
	refresh();

	if ((wfile = fopen("window.win", "r")) == NULL) 
	{
		endwin();
		puts("error: file creation");
		return 1;
	}

	win = getwin(wfile);
	fclose(wfile);
	wrefresh(win);
	getch();

	endwin();
	return 0;
}
