#include"screen.h"
#define SIZE 8
struct node{
   int row;
   int col;
};

int main(){
   struct node snake[4] = {{0,3},{0,2},{0,1},{0,0}};
   initGame(SIZE);
   int i = 0;
   for(i = 0; i < 4; i++){
      turnOn(snake[i].row, snake[i].col);
   }
   return 0;
}
