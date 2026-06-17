#include <ncurses.h>
#include <string.h>

int main() 
{
	char text[] = "Walking on the moon!";
	int len = strlen(text);
	char *t = text;

	initscr();

	while (len--)
	{
	move(5,5);		// insert same spot 
	insch(*(t + len - 1)); // work backwards
	refresh();
	napms(100);
	}

	getch();

	endwin();
	return 0;
}
