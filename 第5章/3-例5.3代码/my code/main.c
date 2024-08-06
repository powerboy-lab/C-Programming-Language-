#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int rows[] = {2,2,2,3};
	int cols[] = {2,3,4,4};
	
	int i;
	char ch;
	
	while(1){
		clearScreen();
		for(i = 0; i < 4; i++){
			turnOn(rows[i],cols[i]);
		}	 
	

		ch = getch();
		
		/*蛇身运动变化*/ 
		if(ch == 'w' || ch == 's'||ch == 'a' || ch == 'd'){
			for(i = 3; i > 0; i--) {
				rows[i] = rows[i-1];
				cols[i] = cols[i-1];
			}	
		}
		
		/*蛇头运动变化*/ 		

		if(ch == 'w'){									
			rows[0] = rows[0] - 1;
		}
		
		if(ch == 's'){
			rows[0] = rows[0] + 1;
		}
		
		if(ch == 'a'){
			cols[0] = cols[0] - 1;
		}
		
		if(ch == 'd'){
			cols[0] = cols[0] + 1;
		}
	
	}
	
	return 0;
}
