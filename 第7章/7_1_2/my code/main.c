#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int rows[4] = {0,0,0,1};
	int cols[4] = {3,4,5,4};
	
/*	int i = 0;
	
	for(i = 0; i < 4; i++){
//		turnOn(rows[i],cols[i]); 
		turnOn(*(rows + i),*(cols + i));
	}
*/	
	
	int *prows, *pcols;
	for( prows = rows, pcols = cols; prows < rows + 4; prows++,pcols++){
		turnOn(*prows, *pcols);
	}
	
	return 0;
}
