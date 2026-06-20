#include <ncurses.h>

int main()
{
	WINDOW *f, *b;

	initscr();
	refresh();

	f = newwin(0, 0, 0, 0);
	waddstr(f, "This is f.\n");
	wrefresh(f);
	getch();

	b = dupwin(f);
	waddstr(b, "This is b.\n");
	wrefresh(b);
	getch();

	waddstr(f, "Nice to meet you!\n");
	wrefresh(f);
	getch();

	waddstr(b, "You too!\n");
	touchwin(b);
	wrefresh(b);
	getch();

	endwin();
	return 0;
}
