#include <ncurses.h>

int main() 
{
	initscr();

	attrset(A_STANDOUT);
	addstr("This is standout\n");

	attrset(A_UNDERLINE);
	addstr("This is underline\n");

	attrset(A_REVERSE);
	addstr("This is reverse\n");

	attrset(A_BLINK);
	addstr("This is Blink\n");

	attrset(A_DIM);
	addstr("This is dim\n");

	attrset(A_BOLD);
	addstr("This is bold\n");

	attrset(A_ALTCHARSET);
	addstr("This is altcharset\n");

	attrset(A_INVIS);
	addstr("This is invis\n");

	attrset(A_PROTECT);
	addstr("This is protect\n");

	attrset(A_HORIZONTAL);
	addstr("This is horizontal\n");

	attrset(A_LEFT);
	addstr("This is left\n");

	attrset(A_LOW);
	addstr("This is low\n");

	attrset(A_RIGHT);
	addstr("This is right\n");

	attrset(A_TOP);
	addstr("This is top\n");

	attrset(A_VERTICAL);
	addstr("This is vertical\n");

	refresh();
	getch();

	endwin();
	return 0;
}
