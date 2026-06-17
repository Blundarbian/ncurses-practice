#include <ncurses.h>
#include <string.h>

int main() 
{
	char text[] = "Armstrong walks on the moon!";
	char *t = text;
	int len = strlen(text);
	char a;

	initscr();

	move(5, 0);
	for (a = 'A'; a < 'Z' + 1; a++) 
	{
		addch(a);
		addstr("  ");
	}

	while (len--)
	{
		move(5, 5);
		insch(*(t + len - 1));

		refresh();
		napms(100);
	}
	getch();

	endwin();
	return 0;
}
