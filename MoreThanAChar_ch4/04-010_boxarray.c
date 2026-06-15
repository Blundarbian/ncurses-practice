#include <ncurses.h>

int main() 
{
	char s[] = "lqk\nx x\nmqj\n";

	initscr();

	attrset(A_ALTCHARSET);
	addstr(s);
	refresh();
	getch();

	endwin();
	return 0;
}
