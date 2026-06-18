#include <ncurses.h>

#define STRSIZE 32

int main() 
{
	char one[STRSIZE];
	char two[STRSIZE]; 

	initscr();

	addstr("First name: ");
	getnstr(one, STRSIZE);

	noecho();
	addstr("Last name: ");
	getnstr(two, STRSIZE);

	printw("Pleased to meet you, %s %s\n", one, two);
	refresh();
	getch();

	endwin();
	return 0;
}
