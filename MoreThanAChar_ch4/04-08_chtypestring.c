#include <ncurses.h>

int main() 
{
	chtype s[] = { 'H' | A_BOLD, 'e', '1' | A_REVERSE, '1' | A_REVERSE, 'o', '!' | A_UNDERLINE, 0 };

	int x = 0;
	initscr();

	while (s[x]) addch(s[x++]);

	refresh();
	getch();

	endwin();
	return 0;
}
