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
   struct soldier soldiers[4]= {{{0,0},1},{{2,3},1},{{4,5},1},{{6,7},1}};
   initGame(SIZE);
   int i;
   while(1){
        clearScreen();
        for(i = 0; i < 4; i++){
         turnOn(soldiers[i].pos.row, soldiers[i].pos.col );
        }



       /* 运动到边界时，改变运动方向*/
       for(i = 0; i < 4; i++){
            if(soldiers[i].pos.row + soldiers[i].dir < 0 ||
               soldiers[i].pos.row + soldiers[i].dir == SIZE){
                 soldiers[i].dir = -soldiers[i].dir;
            }
       }
       for(i = 0; i < 4; i++){
            soldiers[i].pos.row = soldiers[i].pos.row + soldiers[i].dir;
       }
    }

   return 0;
}
