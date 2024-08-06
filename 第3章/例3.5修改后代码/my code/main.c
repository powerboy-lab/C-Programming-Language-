#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row = 4;
	int col = 4;
	
	turnOn(row,col);
	
	char ch = getch();
	
	switch (ch) {
		case 'w':
		case 'i':
	 		 	 row = row - 1;
	 			 break;
	 			 
		case 's':
		case 'k':
	 		 	 row = row + 1;
	 			 break;
	 			 
		case 'a':
		case 'j':
	 		 	 col = col - 1;
	 			 break;
	 			 
		case 'd':
		case 'l':
	 		 	 col = col + 1;
 	 
	}
	
	clearScreen();
	turnOn(row,col);
	
	return 0;
}
