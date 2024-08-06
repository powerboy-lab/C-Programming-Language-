#include"screen.h"
#define SIZE 8
struct node{
   int row;
   int col;
};

int main(){
   struct node food= {4,4};
   initGame(SIZE);
   turnOn(food.row,food.col);
   return 0;
}
