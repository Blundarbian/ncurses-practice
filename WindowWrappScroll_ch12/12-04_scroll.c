#include <ncurses.h>

int main() 
{
	initscr();

	scrollok(stdscr, TRUE);	// enable scrolling
	
	for (int y = 0; y < LINES; y++)
		mvprintw(y, 0, "%2d", y);
	refresh();
	getch();

	scroll(stdscr); 	// scroll up one line
	refresh();
	getch();

	endwin();
	return 0;
}
