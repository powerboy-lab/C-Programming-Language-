#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row = 1;
	int col = 4;
	
	turnOn(row,col);
	
	char ch = getch();
	
	if (( ch == 'w' || ch =='W') && row > 0){			//向上运动判断方块是否在屏幕最顶部 
			row = row - 1;
	}
	
	if ( ch != 'w' && ch != 'W' && row < SIZE - 1){			   		//向上下运动判断方块是否在屏幕最底部 
		 	row = row + 1;
	}
	
	clearScreen();
	turnOn(row,col);
	return 0;
}


