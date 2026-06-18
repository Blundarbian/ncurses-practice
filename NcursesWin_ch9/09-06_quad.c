#include <ncurses.h>

int main() 
{
	WINDOW *quad[4];
	
	initscr();
	start_color();

	init_pair(1, COLOR_WHITE, COLOR_MAGENTA);
	init_pair(2, COLOR_WHITE, COLOR_GREEN);
	init_pair(3, COLOR_WHITE, COLOR_RED);
	init_pair(4, COLOR_WHITE, COLOR_YELLOW);

	quad[0] = newwin(LINES / 2, COLS / 2, 0, 0);
	quad[1] = newwin(LINES / 2, COLS / 2, 0, COLS / 2);
	quad[2] = newwin(LINES / 2, COLS / 2, LINES / 2, 0);
	quad[3] = newwin(LINES / 2, COLS / 2, LINES / 2, COLS / 2);

	if (!quad[0] || !quad[1] || !quad[2] || !quad[3])
	{
		endwin();
		puts("Unable to create window");
		return 1;
	}

	refresh();
	for (int i = 0; i < 4; i++)
	{
		wbkgd(quad[i], COLOR_PAIR(i + 1));
		waddstr(quad[i], "This is a 1/4 window\n");
		wrefresh(quad[i]);
		getch();
	}
	endwin();
	return 0;
}
