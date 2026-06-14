#include <ncurses.h>

//obligatory scanf/scanw program
int main() 
{
	int p;
	const float uni = 4.5;

	initscr();

	addstr("SUSHI BAR");
	move(2, 0);

	printw("We have Uni today for $%.2f.\n", uni);
	addstr("How many pieces would you like? ");
	refresh();

	scanw("%d", &p);
	printw("You want %d pieces?\n", p);
	printw("That wil be $%.2f!", uni);
	refresh();

	getch();
	endwin();
	return 0;
}
