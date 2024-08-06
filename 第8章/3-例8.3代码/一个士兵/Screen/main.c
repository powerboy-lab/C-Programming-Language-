#include"screen.h"
#define SIZE 8

struct node{
   int row;
   int col;
};

struct soldier{
   struct node pos;
   int dir;
};

int main(){
   struct soldier soldierx= {{0,0},1};
   initGame(SIZE);

   while(1){
        clearScreen();
        turnOn(soldierx.pos.row, soldierx.pos.col );
        /* 运动到边界时，改变运动方向*/

        if(soldierx.pos.row + soldierx.dir < 0 || soldierx.pos.row + soldierx.dir == SIZE){
              soldierx.dir = - soldierx.dir;
        }
        soldierx.pos.row = soldierx.pos.row + soldierx.dir;
    }

   return 0;
}

