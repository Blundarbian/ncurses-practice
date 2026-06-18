#include <ncurses.h>

int main() 
{
	WINDOW *one, *two, *three;
	int gl, gc;

	initscr();
	refresh();	// update stdscr
	
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	init_pair(2, COLOR_RED, COLOR_YELLOW);
	init_pair(3, COLOR_BLACK, COLOR_GREEN);

	one = newwin(LINES - 4, COLS - 10, 2 , 5);
	getmaxyx(one, gl, gc);
	two = derwin(one, gl/2, gc, gl/2, 0);
	three = derwin(two, gl/2, 3, 0, (gc-4)/2);

	wbkgd(one, COLOR_PAIR(1)); 
	waddstr(one, "I am one\n");

	wbkgd(two, COLOR_PAIR(2)); 
	waddstr(two, "I am two\n");
	wclrtobot(two);

	wbkgd(three, COLOR_PAIR(3)); 
	waddstr(three, "I am three\n");
	wrefresh(one);
	getch();

	endwin();
	return 0;
}
