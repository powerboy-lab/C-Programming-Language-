#include <stdio.h>
#include <stdlib.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	srand(time(NULL));				// 设定随机序列种子 
	
	int foodRow, foodCol;
	
	while(1){
		clearScreen();
		turnOn(foodRow,foodCol);
		
		foodRow = rand() % SIZE;
		foodCol = rand() % SIZE;
	}

	return 0;
} 
