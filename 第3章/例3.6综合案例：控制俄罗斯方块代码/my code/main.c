#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE); 					//初始化游戏 
 	
 	int row = 0;  						//参照点的行坐标 
    int col = 0;  						//参照点的列坐标 
 	
	/*在屏幕上显示4个小方块*/ 
	turnOn(0 + row,3 + col);
	turnOn(0 + row,4 + col);
	turnOn(0 + row,5 + col);
	turnOn(1 + row,4 + col);
	
	char ch = getch();
	
	if( ch == 'w') {  					//判断是否到了屏幕的最顶端 
		if (row > 0){
			row = row - 1;
		}
	}
	
		if( ch == 's') { 				//判断最下面的小方块是否到了屏幕的最底端 
		if (row + 1 < SIZE - 1){
			row = row + 1;
		}
	}
	
	    if( ch == 'a') {				//判断最坐边的小方块是否到了屏幕的最左端 
		if (3 + col > 0){
			col = col - 1;
		}
	}
	
 	 	if( ch == 'd') {				//判断最坐边的小方块是否到了屏幕的最右端
		if (5 + col < SIZE-1){
			col = col + 1;
		}
	}
	
	clearScreen();
	turnOn(0 + row,3 + col);
	turnOn(0 + row,4 + col);
	turnOn(0 + row,5 + col);
	turnOn(1 + row,4 + col);
		
	
	
	return 0;
}
