#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int value[SIZE][SIZE] = {
		{0,0,0,0,0,0,0,0},
		{0,0,1,1,1,1,0,0},		
		{0,0,1,0,0,1,0,0},	
		{0,0,1,1,1,1,0,0},	
		{0,0,0,0,0,1,0,0},
		{0,0,1,1,1,1,0,0},
		{0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0},							
	};
	
	int row,col;
	
	for(row = 0; row < SIZE; row++){
	    for(col = 0; col < SIZE; col++)	{
	    	if(*(*(value + row) + col) == 1){
	    		turnOn(row,col);
			}	    	
		}
	}
	
	return 0;
}
