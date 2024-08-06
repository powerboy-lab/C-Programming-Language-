#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row, col;
	int count = 1;
	
	row = 0;
	
	for (count = 1; count < SIZE; count++){
		clearScreen();
		for(col = 0; col <= count; col++) {
			turnOn(row,col);
		}
					
	}	
	return 0;
}
