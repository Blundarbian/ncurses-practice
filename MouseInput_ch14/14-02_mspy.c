#include <ncurses.h>

int main() 
{
	int c;
	MEVENT mort;

	initscr();
	noecho();
	
	keypad(stdscr, TRUE);

	mousemask(ALL_MOUSE_EVENTS, NULL);
	while (1)
	{
		c = getch();
		if (c == KEY_MOUSE) 
		{
			getmouse(&mort);
			move(0, 0);
			clrtoeol();
			printw("%d\t%d", mort.y, mort.x);
			refresh();
			continue;
		}
		if (c == '\n')
			break;
	}
	endwin();
	return 0;
}
