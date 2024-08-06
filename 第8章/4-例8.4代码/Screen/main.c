#include"screen.h"
#define SIZE 8
struct node{
   int row;
   int col;
};

int main(){
   struct node snake[4] = {{0,3},{0,2},{0,1},{0,0}};
   initGame(SIZE);
   struct node *pnode;

   for(pnode = snake; pnode < snake + 4; pnode++){
      turnOn(pnode->row, pnode->col);
   }
   return 0;
}
