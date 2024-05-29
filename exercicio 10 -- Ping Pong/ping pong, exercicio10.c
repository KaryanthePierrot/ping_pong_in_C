#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


int main(void ){
	int x=1, y=1, dx=-1, dy=-1;
		
	do {
		gotoxy(x, y);
		printf("O\b");
		Sleep(2); //pause em segundos 
		 printf(".");
		if( x==1 || x==80) dx= -dx;
		if( y==1 || y==24) dy= -dy;
		x += dx;
		y += dy;
		} while( !_kbhit() );
	 return 0;
	}

