#include"screen.h"
#define SIZE 5

int main(){
   initGame(SIZE);
   int row = 2;
   int col = 0;

   int drow = 1;
   int dcol = 1;

   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;

   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;
   drow = -drow;
   dcol = dcol;

   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;

   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;

   drow = drow;
   dcol = -dcol;

   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;

   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;

   drow = -drow;
   dcol = dcol;

   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;

   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;


   clearScreen();
   turnOn(row,col);
   row = row + drow;
   col = col + dcol;
   
   return 0; 
}


