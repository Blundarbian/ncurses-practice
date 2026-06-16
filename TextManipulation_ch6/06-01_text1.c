#include <ncurses.h>

int main() 
{
	char t1[] = "This is the first line\n";
	char t2[] = "Line two here\n";
	char t3[] = "Third line is next\n";
	char t4[] = "Fourth line now\n";
	char t5[] = "Fifth and final line\n";

	initscr();

	addstr(t1);
	addstr(t3);
	addstr(t5);
	refresh();
	getch();

	endwin();
	return 0;
}
