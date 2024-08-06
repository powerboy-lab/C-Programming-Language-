#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main () {
	
	initGame(SIZE);
	
	int row = 4;
	int col = 4;
	
	turnOn(row,col);
	
	char ch = getch();
	
	switch(ch){
		case 'w':
  			 	 row = row - 1;				//����break�����һֱִ�������Ž��� 
  			 	 break;							
	    case 's':
	    	 	 row = row + 1;
	    	 	 break;
        case 'a':
        	     col = col - 1;
        	     break;
        case 'd':
        	     col = col + 1;
        	     break;
	}
	
	clearScreen();
	turnOn(row,col);
	
	return 0;
}
