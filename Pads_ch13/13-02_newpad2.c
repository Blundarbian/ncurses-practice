#include <ncurses.h>

int main() 
{
	WINDOW *p;
	
	initscr();

	if((p = newpad(50, 100)) == NULL)
	{
		endwin();
		fprintf(stderr, "error: unable to create pad");
		return 1;
	}

	for (int i = 0; i < 500; i++)	// fill pad
		wprintw(p, "%4d", i);

	addstr("Press Enter to update");
	refresh();
	getch();

	prefresh(p, 0, 0, 5, 5, 16, 45);
	getch();

	endwin();
	return 0;
}

