#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row = 0;
	int col = 1;
	int dcol = 1;;
	
	while(1){
		if(col == 0 || col == SIZE-1){
			   dcol  = -dcol;
		}

		clearScreen();
		turnOn(row,col);
		col = col + dcol;
	}
	
	return 0;
} 
