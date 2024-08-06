#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int row = 0;
	int col = 4;
	
	int *prow = &row;
	int *pcol = &col;
	
	turnOn(*prow,*pcol);
	
	
	return 0;
}
