#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row = 4; 
	int col = 4;
	turnOn(row,col);
	
	char ch;
	
	while (1) {
		ch = getch();
		
		if (ch == 'w' && row > 0){
			row = row - 1;
		}
		
		if (ch == 's' && row < SIZE-1){
			row = row + 1;
		}
		
		if (ch == 'k'){
			break;
		}
		
		clearScreen();
		turnOn(row,col);
		
	}
	
	
	return 0;
}
