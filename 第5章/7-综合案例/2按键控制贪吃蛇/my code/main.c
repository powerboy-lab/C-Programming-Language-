#include <stdio.h>
#include "screen.h"

#define SIZE 16

int main(){
	
	initGame(SIZE);
	
	int foodRow = 4;
	int foodCol = 4;
	
	int snakeRows[100] = {0,0,0,0};
	int snakeCols[100] = {1,2,3,4};
	int len = 4;
		
	int i;
	char ch;
	int dir = 2;							// 初始方向向下 
	
	while(1){
		 /*屏幕上显示贪吃蛇和食物*/	
		clearScreen();
		for(i = 0; i < len; i++){
			turnOn(snakeRows[i],snakeCols[i]);
		}
		turnOn(foodRow,foodCol);
		
		 /*屏按键方向控制“贪吃蛇”运动方向*/	
		ch = getKey();
		
		if(ch == 'w') {
			dir = 1;
		}
		
		if(ch == 's') {
			dir = 2;
		}
		
		if(ch == 'a') {
			dir = 3;
		}

		if(ch == 'd') {
			dir = 4;
		}
		
		/*蛇身变化*/
		for(i = 3; i > 0; i--){
			snakeRows[i] = snakeRows[i-1];
			snakeCols[i] = snakeCols[i-1];			
		} 
		
		if( dir == 1 ){
			snakeRows[0] = snakeRows[0] - 1;
		}
		
		if( dir == 2 ){
			snakeRows[0] = snakeRows[0] + 1;
		}
		
		if( dir == 3){
			snakeCols[0] = snakeCols[0] - 1;
		}
		if( dir == 4){
			snakeCols[0] = snakeCols[0] + 1;
		}
		
		if( snakeRows[i] < 0 || snakeRows[i] > SIZE - 1 || snakeCols[i] < 0 || snakeCols[i] > SIZE - 1){
			break;
		}		

	}
	
	return 0;
}
