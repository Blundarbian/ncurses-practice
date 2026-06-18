#include <ncurses.h>

int main()
{
	int c;

	initscr();

	keypad(stdscr, TRUE);
	do {
		c = getch();
		switch(c)
		{
			case KEY_DOWN:
				addstr("Down\n");
				break;
			case KEY_UP:
				addstr("Up\n");
				break;
			case KEY_LEFT:
				addstr("Left\n");
				break;
			case KEY_RIGHT:
				addstr("Right\n");
				break;
			default:
				break;
		}
		refresh();

	} while (c != '\n');

	endwin();
	return 0;
}
