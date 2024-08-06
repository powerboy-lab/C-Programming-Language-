#include"screen.h"

int main(){
    initGame(8);

    turnOn(0,3);
    turnOn(0,4);
    turnOn(0,5);
    turnOn(1,4);
    clearScreen();

    turnOn(1,3);
    turnOn(1,4);
    turnOn(1,5);
    turnOn(2,4);
    clearScreen();

    turnOn(2,3);
    turnOn(2,4);
    turnOn(2,5);
    turnOn(3,4);


    return 0;
}
