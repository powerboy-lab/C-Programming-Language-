/*����6_5����д����ʵ�ֲ�����̰���ߡ���Ϸ�еġ�ʳ�����ʳ������������Ļ���κ�λ�á�*/



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

