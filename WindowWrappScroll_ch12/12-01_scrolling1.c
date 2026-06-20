#include <ncurses.h>

int main() 
{
	char text[] = "This needs to undergo wrapping... ";
	
	initscr();

	for (int i = 0; i < 100; i++) 
	{
		addstr(text);
		napms(100);
		refresh();
	}
	getch();

	endwin();
	return 0;
}
