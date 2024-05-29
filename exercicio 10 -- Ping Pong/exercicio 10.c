#include <stdio.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>

int main(void){
	int x=1, y=1, dx=-1, dy=-1, random = rand()%16, pointcolor = random;
	srand(time(NULL));

	do{

		_gotoxy(x, y);
		_textcolor(15);
		printf("O\b"); //bolinha
		_sleep(1); // cooldown		 
		_textcolor(pointcolor);
		printf("."); // rastro
		if(x==1 || x==80){
		dx= -dx;
		pointcolor = rand() %16;
			pointcolor = rand() %16;
		_textcolor(pointcolor);
			}
		if(y==1 || y==24) {
			dy= -dy;
		pointcolor = rand() %16;
			_textcolor(pointcolor);
		}
		x += dx;
		y += dy;

		} while( !_kbhit() );
	return 0;
	}
