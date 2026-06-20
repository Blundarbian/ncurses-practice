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

	wbkgd(red, COLOR_PAIR(1));
	wbkgd(blue, COLOR_PAIR(2));
	for (int i = 0; i < 34; i++) 
	{
		waddstr(red, "red   ");
		waddstr(blue, "   blue");
	}
	wrefresh(red);
	wrefresh(blue);
	getch();

	copywin(red, blue, 0, 0, 1, 4, 5, 10, TRUE);
	wrefresh(blue);
	getch();

	endwin();
	return 0;
}
