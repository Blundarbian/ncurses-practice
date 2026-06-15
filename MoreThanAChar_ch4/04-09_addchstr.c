#include <ncurses.h>

int main() 
{
	chtype s[] = { 'H' | A_BOLD, 'e', 'l' | A_REVERSE, 'l' | A_REVERSE, 'o', '!' | A_UNDERLINE, 'o' };

	initscr();

	addchstr(s);
	refresh();
	getch();

	endwin();
	return 0;
}
