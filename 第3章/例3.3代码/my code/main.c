#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame (SIZE);
	
	int row = 4;								//��ʼ����Ϸ������8x8�������Ļ 
	int col = 4;
	
	turnOn(row,col);
	
	char ch = getch();							//��ð����ļ�ֵ 

	if ( ch == 'w' || ch == 'W') {
		row = row - 1;
	}
	
	if ( ch == 's' || ch =='S') {
		row = row + 1;
	}
	
	if ( ch != 'w' && ch != 'W' && ch != 's' && ch !='S' ){
	    row = row + 1;
		col = col + 1; 
	}
	
	clearScreen();
	turnOn(row,col); 
	
	return 0;
}
