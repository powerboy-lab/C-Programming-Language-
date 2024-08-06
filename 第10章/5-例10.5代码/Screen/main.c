#include"screen.h"
#include<stdio.h>
#include<stdlib.h>
#define SIZE 8
int main(){
    initGame(SIZE);
    int value[SIZE][SIZE] ={0};
    int row,col;
    FILE *fp = fopen("demo.txt", "r");
    if (fp != NULL){
      for( row = 0; row < SIZE; row++){
         for(col = 0; col < SIZE; col++){
            fscanf(fp, "%d", &value[row][col]);
         }

      }
    }
    else{
    printf("Fail to open the file\n");
         exit(0);
    }
    fclose(fp);
    for( row = 0; row < SIZE; row++){
         for(col = 0; col < SIZE; col++){
            if(value[row][col] == 1){
                turnOn(row,col);
            }
         }
    }

    return 0;
}
