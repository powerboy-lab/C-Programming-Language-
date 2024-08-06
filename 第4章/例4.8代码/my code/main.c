#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row, col;
	
	row = 0;
	col = 4;
	
	char ch;
	
	while(1) {
		
		ch = getch();
	
		if (ch == 'p'){

		   for(row = 0; row < SIZE; row++){
		   clearScreen();
		   turnOn(row, col);
		   }
	   }
	}
	return 0;
} 
