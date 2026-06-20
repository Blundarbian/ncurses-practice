#include <ncurses.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	char word[7];
	word[6] = '\0';
	srandom((unsigned)time(NULL));

	initscr();

	for(int i = 0; i < 200; i++)
	{
		for (int j = 0; j < 6; j++)
			word[j] = (random() % 26) + 'a';

		printw("%s\t", word);
	}
	addstr("\n Press Enter to dump the screen \n");
	refresh();
	getch();

	int r = scr_dump("dump.win");
	if (r == ERR)
		addstr("error: file cannot be written");
	else
		addstr("File written: press Enter");

	refresh();
	getch();

	endwin();
	return 0;
}
