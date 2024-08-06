#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE); 					//��ʼ����Ϸ 
 	
 	int row = 0;  						//���յ�������� 
    int col = 0;  						//���յ�������� 
 	
	/*����Ļ����ʾ4��С����*/ 
	turnOn(0 + row,3 + col);
	turnOn(0 + row,4 + col);
	turnOn(0 + row,5 + col);
	turnOn(1 + row,4 + col);
	
	char ch = getch();
	
	if( ch == 'w') {  					//�ж��Ƿ�����Ļ����� 
		if (row > 0){
			row = row - 1;
		}
	}
	
		if( ch == 's') { 				//�ж��������С�����Ƿ�����Ļ����׶� 
		if (row + 1 < SIZE - 1){
			row = row + 1;
		}
	}
	
	    if( ch == 'a') {				//�ж������ߵ�С�����Ƿ�����Ļ������� 
		if (3 + col > 0){
			col = col - 1;
		}
	}
	
 	 	if( ch == 'd') {				//�ж������ߵ�С�����Ƿ�����Ļ�����Ҷ�
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
