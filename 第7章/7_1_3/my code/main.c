#include <stdio.h>
#include "screen.h"

#define SIZE 8

void showArray(int *rows,int *cols,int n){
	int i = 0;
	for(i = 0; i < n; i++){
		turnOn(rows[i],cols[i]);
	}
	
}

int main() {
	
	initGame(SIZE);
	
	int enemyRow[4] = {0,0,0,1};
	int enemyCol[4] = {3,4,5,4};
	
	showArray(enemyRow,enemyCol,4);
	
	return 0;
} 
