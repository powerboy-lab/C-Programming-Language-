/*【例6_5】编写程序，实现产生“贪吃蛇”游戏中的“食物”，“食物”随机出现在屏幕上任何位置。*/



#include <stdio.h>
#include <stdlib.h>
#include "screen.h"

#define SIZE 8

int main(){
	
	initGame(SIZE);
	
	int foodRow = rand() % SIZE;
	int foodCol = rand() % SIZE;
	
	while(1) {
		clearScreen();
		
		turnOn(foodRow,foodCol);
		
		foodRow = rand() % SIZE;
		foodCol = rand() % SIZE;
	}
	
	return 0;
}

