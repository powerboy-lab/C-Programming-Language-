#include"screen.h"
# define SIZE 8

int main(){
    initGame(SIZE);

    int row = 0;          //向下运动0行
    turnOn(0 + row,3);
    turnOn(0 + row,4);
    turnOn(0 + row,5);
    turnOn(1 + row,4);
    clearScreen();

    row = row + 1;    //向下运动1行
    turnOn(0 + row,3);
    turnOn(0 + row,4);
    turnOn(0 + row,5);
    turnOn(1 + row,4);
    clearScreen();
    
    row = row + 1;     //向下运动2行
    turnOn(0 + row,3);
    turnOn(0 + row,4);
    turnOn(0 + row,5);
    turnOn(1 + row,4);
    return 0;
}

