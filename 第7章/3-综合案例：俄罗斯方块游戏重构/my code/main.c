#include <stdio.h>
#include "screen.h"

#define SIZE 8

void showArray(int * rows, int * cols, int len){
	int i = 0;
	
	for(i = 0; i < len; i++){
		turnOn(*(rows + i), *(cols + i));
	}
	
}

void updateArray(int * rows, int * cols, int len, char key){
	int i;
	for(i = 0; i < len; i++){
		if ( key == 'a'){
			cols[i] = cols[i] - 1;
		}
		
		if ( key == 'd'){
			cols[i] = cols[i] + 1;
		}		
		
		if ( key == 'w'){
			rows[i] = rows[i] - 1;
		}
		
		if ( key == 's'){
			rows[i] = rows[i] + 1;
		}				
	}
} 


int main() {
	
	initGame(SIZE);
	
	int tertisRows[4] = {0,0,0,1};
	int tertisCols[4] = {3,4,5,4};
	int len = 4;
	
	char key;
	
	while(1){
		clearScreen();
		showArray(tertisRows,tertisCols,len);
		
		key = getKey();
		updateArray(tertisRows, tertisCols, len, key);
	}
	
	
	
	return 0;
}
