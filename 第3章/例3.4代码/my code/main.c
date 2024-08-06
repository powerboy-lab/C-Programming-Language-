#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row = 1;
	int col = 4;
	
	turnOn(row,col);
	
	char ch = getch();
	
	if (( ch == 'w' || ch =='W') && row > 0){			//�����˶��жϷ����Ƿ�����Ļ��� 
			row = row - 1;
	}
	
	if ( ch != 'w' && ch != 'W' && row < SIZE - 1){			   		//�������˶��жϷ����Ƿ�����Ļ��ײ� 
		 	row = row + 1;
	}
	
	clearScreen();
	turnOn(row,col);
	return 0;
}


