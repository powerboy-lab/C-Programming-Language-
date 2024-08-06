#include"screen.h"
#define SIZE 8

struct node{
     int row;
     int col;
};

struct snake{
     struct node pos[100];
     int len;
     int dir;
};

void initFood(struct node *pfood){
    pfood->row = rand() % SIZE;
    pfood->col = rand() % SIZE;
}

void initSnake(struct snake * psnake){
    psnake ->len = 4;  // 贪吃蛇初始长度为4
    psnake -> dir = 2;  // 贪吃蛇初始运动方向为向下

    int i = 0;
    for( i = 0; i  < psnake ->len;  i++){
        psnake ->pos[i].row = 0;
        psnake ->pos[i].col = 3 - i;
    }
}

void showFood(struct node *pfood){
    turnOn(pfood ->row, pfood->col);
}

void showSnake(struct snake * psnake){
    int i = 0;
    for(i = 0; i < psnake ->len; i++){
            turnOn(psnake ->pos[i].row, psnake ->pos[i].col);
    }
}

int isEatFood(struct snake * psnake,struct node *pfood){
   if(psnake ->pos[0].row == pfood->row && psnake ->pos[0].col ==pfood->col){
       return 1;
   }
   else{
       return 0;
   }
}

void updateFood(struct snake * psnake,struct node *pfood){
    if(isEatFood(psnake,pfood)){
      psnake->len = psnake->len + 1;
      initFood(pfood);
    }
}

void updateDirection(struct snake * psnake){
    char key;

    key = getKey();

    if(key == 'w'){
        psnake ->dir = 1;
    }

    if(key == 's'){
        psnake ->dir = 2;
    }

    if(key == 'a'){
        psnake ->dir = 3;
    }

    if(key == 'd'){
        psnake ->dir = 4;
    }


}

void updateSnake(struct snake *psnake){
     int i;
     updateDirection(psnake);
     for( i = psnake ->len - 1; i > 0; i--){
                psnake ->pos[i].row = psnake ->pos[i - 1].row;
                psnake ->pos[i].col = psnake ->pos[i - 1].col;
     }

     if(psnake->dir == 1){
        psnake ->pos[0].row = psnake->pos[0].row - 1;
     }

     if(psnake ->dir == 2){
        psnake ->pos[0].row = psnake ->pos[0].row + 1;
     }

     if(psnake->dir == 3){
        psnake ->pos[0].col = psnake ->pos[0].col - 1;
     }

     if(psnake->dir == 4){
        psnake ->pos[0].col = psnake ->pos[0].col + 1;
     }

}

int main(){
    initGame(SIZE);
    struct node food;
    struct snake sk;

    initFood(&food);
    initSnake(&sk);

    while(1){
            clearScreen();

            showFood(&food);
            showSnake(&sk);

            updateFood(&sk,&food);
            updateSnake(&sk);
    }


}
