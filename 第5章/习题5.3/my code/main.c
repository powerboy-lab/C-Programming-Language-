#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int rows[8] = {4,5,5,5,6,7,7,7};
	int cols[8] = {4,3,4,5,4,3,4,5};
	
	
	int i;
	char ch;
	
	for(i = 0; i < 8; i++){
	turnOn(rows[i],cols[i]);
	}
	
	while(1) {
		ch = getch();
		
		if(ch == 'w'){
	        clearScreen();
			for(i = 0; i < 8; i++){
				turnOn(rows[i] - 1,cols[i]);
			}
		}
		
		if(ch == 's'){
	        clearScreen();
			for(i = 0; i < 8; i++){
				turnOn(rows[i] + 1,cols[i]);
			}
		}
		
		if(ch == 'a'){
	        clearScreen();
			for(i = 0; i < 8; i++){
				turnOn(rows[i] ,cols[i] - 1);
			}
	    }
			
		if(ch == 'd'){
	        clearScreen();
			for(i = 0; i < 8; i++){
				turnOn(rows[i] ,cols[i] + 1);
			}
		}
	}
		


		

	
	return 0;
}
