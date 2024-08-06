#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);
	
	int rows[4] = {0,2,4,6};
	int cols[4] = {0,3,5,7};
	int drows[4] = {1,1,1,1};
	int dcols[4] = {1,1,1,1};
	
	int i;	

 	while(1){
 		clearScreen();
 		
	 	for(i = 0; i < 4; i++){
 			turnOn(rows[i],cols[i]); 			
	    }
 		
		 
	    for(i = 0; i < 4; i++){
		 	if(cols[i] + dcols[i] < 0 || cols[i] + dcols[i] > SIZE - 1){
		 		dcols[i] = -dcols[i];
		 	}
	    }

	    for(i = 0; i < 4; i++){
		 	cols[i] = cols[i] + dcols[i];
        }		 			 
		 
    }	
	
	return 0;
} 
