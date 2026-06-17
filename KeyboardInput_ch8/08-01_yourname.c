#include <ncurses.h>
#define SIZENAME 32

int main() 
{
	int c;
	char name[SIZENAME];

	initscr();

	do {
		clear();
		addstr("Enter your name: ");
		getnstr(name, SIZENAME);
		move(1, 0);
		printw("Your name is %s. ", name);
		printw("Is this correct? ");

	} while ((c = getch()) && c != 'y');

	move(2, 0);
	printw("Pleased to meet you, %s\n",name);
	getch();

	endwin();
	return 0;
}
