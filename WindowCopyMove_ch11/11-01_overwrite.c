#include <ncurses.h>

int main()
{
	WINDOW *red, *blue;

	initscr();
	refresh();

	start_color();
	init_pair(1, COLOR_WHITE, COLOR_RED);
	init_pair(2, COLOR_WHITE, COLOR_BLUE);

	red = newwin(10, 20, 2, 22);
	blue = newwin(10, 20, 5, 32);

	if (!red || !blue)
	{
		endwin();
		puts("error: unable to create window");
		return 1;
	}

	wbkgd(red, COLOR_PAIR(1) | 'r');
	wbkgd(blue, COLOR_PAIR(2) | 'b');
	wrefresh(red);
	wrefresh(blue);
	getch();

	overwrite(red, blue);
	wrefresh(blue);
	getch();

	endwin();
	return 0;
}
