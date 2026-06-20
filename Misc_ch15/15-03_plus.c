#include <ncurses.h>

int main() 
{
	int maxy, maxx, qx, qy;

	initscr();
	curs_set(0);

	getmaxyx(stdscr, maxy, maxx);
	qx = maxx / 2;
	qy = maxy / 2;

	move(qy, qx / 2);
	hline(0, qx);

	move(qy / 2, qx);
	vline(0, qy);



	refresh();
	getch();

	endwin();
	return 0;
}
