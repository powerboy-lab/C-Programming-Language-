#include <stdio.h>
#include "screen.h"

#define SIZE 8
#define IMAGENUM 9

int main() {
	
	initGame(SIZE);
	
	int value [IMAGENUM][SIZE][SIZE] = {
		{{0,0,0,0,0,0,0,0},
		{0,0,1,1,1,1,0,0},	
		{0,0,1,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},	
		
		{{0,0,0,0,0,0,0,0},
		{0,0,1,1,1,1,0,0},	
		{0,0,1,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,1,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},

		{{0,0,0,0,0,0,0,0},
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},		

		{{0,0,0,0,0,0,0,0},
		{0,0,1,1,1,1,0,0},	
		{0,0,1,0,0,0,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,1,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},
			
		{{0,0,0,0,0,0,0,0},
		{0,0,1,1,1,1,0,0},	
		{0,0,1,0,0,0,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},		

		{{0,0,0,0,0,0,0,0},
		{0,0,1,0,0,1,0,0},	
		{0,0,1,0,0,0,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},		

		{{0,0,0,0,0,0,0,0},
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},		
	
		{{0,0,0,0,0,0,0,0},
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,1,0,0,0,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},
	
		{{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,1,0,0},	
		{0,0,0,0,0,0,0,0},	
		{0,0,0,0,0,0,0,0}},
		
	};
	
	
	int row, col;
	int index;
	
	for(index = 0; index < IMAGENUM; index++){
		clearScreen();	  
		for(row = 0; row < SIZE; row++){
			for (col = 0; col < SIZE; col++){
				if(value[index][row][col] == 1){
					turnOn(row,col);
				}
			}
		}
	
	}
	
	return 0;
}
