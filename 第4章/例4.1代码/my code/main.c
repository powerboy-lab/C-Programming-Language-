#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row = 4;
	int col = 4;
	
	turnOn(row,col);
	
	char ch;
	
	while (1){							//�ж�������ԶΪ�棬�������һֱִ����ȥ 
		ch = getch();
		
		if( ch == 'w' && row > 0 ){
			row = row - 1;

		}
		
		clearScreen();
		turnOn(row,col);

	}
	
	return 0;
}
