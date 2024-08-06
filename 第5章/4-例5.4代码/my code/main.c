#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	/*二维数组存储7种形状*/ 
	int rows[7][4] = {{0,0,1,2},{0,0,1,1},{0,0,1,1},{0,0,1,1},{0,0,1,2},{0,1,1,1},{0,0,0,0}};
	int cols[7][4] = {{4,3,3,3},{4,3,4,3},{4,3,5,4},{4,3,3,2},{4,3,4,4},{4,3,4,5},{2,3,4,5}};
	
	int i;
	int index = 0;
	char ch;
	
	while(1){
		
		clearScreen();
		
		for(i = 0; i < 4; i++){
			turnOn(rows[index][i], cols[index][i]);
		}
		
		ch = getch();
		if(ch == 'k'){
			index = (index + 1) % 7;				//更新形状，按7次后恢复 
		}
	}

	return 0;
}
