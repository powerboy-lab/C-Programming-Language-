#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int rows[4] = {0,0,0,1};
	int cols[4] = {3,4,5,4};
	
	int i;
	
	for(i=0; i<4; i++){
			turnOn(rows[i],cols[i]);
	}
	
	return 0;
}
