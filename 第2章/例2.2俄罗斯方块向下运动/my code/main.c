#include"screen.h"
# define SIZE 8

int main(){
    initGame(SIZE);

    int row = 0;          //�����˶�0��
    turnOn(0 + row,3);
    turnOn(0 + row,4);
    turnOn(0 + row,5);
    turnOn(1 + row,4);
    clearScreen();

    row = row + 1;    //�����˶�1��
    turnOn(0 + row,3);
    turnOn(0 + row,4);
    turnOn(0 + row,5);
    turnOn(1 + row,4);
    clearScreen();
    
    row = row + 1;     //�����˶�2��
    turnOn(0 + row,3);
    turnOn(0 + row,4);
    turnOn(0 + row,5);
    turnOn(1 + row,4);
    return 0;
}

