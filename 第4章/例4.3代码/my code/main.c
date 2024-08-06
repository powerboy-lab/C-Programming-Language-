#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row = 0;
	
	do {
		clearScreen();
		turnOn(0 + row,3);
		turnOn(0 + row,4);
		turnOn(0 + row,5);
		turnOn(1 + row,4);
		row++;
	
	}while(row + 1 < SIZE);
	
	return 0;
}
