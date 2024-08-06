#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);			//初始化游戏，设置8x8矩阵的屏幕 
	int row = 4;
	int col = 4;
	turnOn(row,col);		//点亮第4行第4列位置的灯 
	
	char ch = getch();		//获得按下了按键的值 
	
	if (ch == 'w' || ch =='W')	//判断是否按下了按键w 防止突然按下大小写键 
	{
		clearScreen();		//清屏 
		
		row = row - 1;		//向上运动1行 
		turnOn(row,col);	//点亮第3行第4列的位置的灯 
	}
	
	
	return 0;
}
