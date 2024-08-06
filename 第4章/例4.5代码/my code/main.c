#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row, col;
	
	row = 0;
	
	while (row < SIZE) {
		 col = 0;
		 while (col < SIZE){
		 	 turnOn(row,col);
			 col++;
		 }
		 row++;
		 sleep(1);	
	}
	
	return 0;
}
