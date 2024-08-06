#include <stdio.h>
#include"screen.h"

#define SIZE 8

void moveTetris(int *rows,int *cols,int n){
	int i = 0;
	char ch = getch();
	for(i = 0;i < n; i++){

		if(ch == 'a'){
			cols[i] = cols[i] - 1;	
		}
		
		if(ch == 'd'){
			cols[i] = cols[i] + 1;	
		}
    }
}

void showArray(int *rows,int *cols,int n){
	int i = 0;
	for(i = 0; i < n; i++){
		turnOn(rows[i],cols[i]);
	}	
}

int main() {
	initGame(SIZE);
	
	int tetrisRows[4] = {0,0,0,1};
	int tetrisCols[4] = {3,4,5,4};
	
	int len = 4;
	
	while(1){
		clearScreen();
		showArray(tetrisRows,tetrisCols,len);
		moveTetris(tetrisRows,tetrisCols,len);
	}	
	return 0;
}
