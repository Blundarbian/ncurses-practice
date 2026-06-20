#include <ncurses.h>

int main() 
{
	WINDOW *p, *s;

	initscr();

	if ((p = newpad(50, 50)) == NULL) 
	{
		endwin();
		fprintf(stderr, "error: unable to create pad");
		return 1;
	}

	for (int i = 0; i < 50; i++)
		waddstr(p, "Hello ");

	if ((s = subpad(p, 10, 10, 0, 0)) == NULL)
	{
		endwin();
		fprintf(stderr, "error: unable to create subpad");
		return 1;
	}

	addstr("Press Enter to update");
	refresh();
	getch();
		
	prefresh(s, 0, 0, 5, 5, 15, 15);
	getch();

	endwin();
	return 0;
}


