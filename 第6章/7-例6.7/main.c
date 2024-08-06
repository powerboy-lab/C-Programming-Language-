#include <stdio.h>
#include "math.h"

#define SIZE 8


int isInEdge(int trow, int tcol){
	int r;
	if(trow >= 0 && trow <= SIZE && tcol >= 0 && tcol <= SIZE){
		r = 0;
	}
	else{
		r = 1;
	}
}


int main(){
	
	initGame(SIZE); 
	
	int row = 4; 
	int col = 4;
	
	char ch;
	
	while(1){
		
		clearScreen();
		turnOn(row,col);
		
		ch = getch();
		
		if(ch == 'w'){
			if(isInEdge( row - 1, col)){
			row = row - 1;
			}
		}
		
		if(ch == 's'){
			if(isInEdge( row + 1, col)){
			row = row + 1;
			}
		}
		
		if(ch == 'a'){
			if(isInEdge( row, col - 1)){
				col = col - 1;
			}
		}
		if(ch == 'd'){
			if(isInEdge( row, col + 1)){
				col = col + 1;		 
			}	
		}
	}
}
