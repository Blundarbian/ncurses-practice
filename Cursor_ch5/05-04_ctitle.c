#include <ncurses.h>
#include <string.h>

void center(int, char *);

int main()
{
	initscr();

	center(1, "Penguin Soccer FInals");
	center(5, "Cows from Temecula");
	center(7, "Catatonic Theater");
	center(9, "The Sky is falling!");
	getch();

	endwin();
	return 0;
}

void center(int row, char *title) 
{
	int len, indent, y, width;
	getmaxyx(stdscr, y, width);

	len = strlen(title);
	indent = (width - len) / 2;

	mvaddstr(row, indent, title);
	refresh();
}

