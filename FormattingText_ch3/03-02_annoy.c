#include <ncurses.h>

#define COUNT 5

int main() 
{
	int a, b;
	char text[COUNT][10] = { "Do", "you", "find", "this", "silly?" };

	initscr();

	for (a = 0; a < COUNT; a++)
	{
		for (b = 0; b < COUNT; b++) 
		{
			if (b == a) attrset(A_BOLD | A_UNDERLINE);

			printw ("%s", text[b]);
			
			if (b == a) attroff(A_BOLD | A_UNDERLINE);

			addch(' ');
		}
		addstr("\b\n");
	}
	refresh();
	getch();

	endwin();
	return 0;
}
