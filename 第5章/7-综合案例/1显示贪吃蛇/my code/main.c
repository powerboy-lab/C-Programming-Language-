#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int foodRow = 4;
	int foodCol = 4;
	
	int snakeRows[100] = {0,0,0,0};
	int snakeCols[100] = {1,2,3,4};
	int len = 4;
	
	int i;
	
	while(1){
		for(i = 0; i < len; i++){
			turnOn(snakeRows[i],snakeCols[i]);
		}
		turnOn(foodRow,foodCol);
	}
	
	
	return 0;
}
