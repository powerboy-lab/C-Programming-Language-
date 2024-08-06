#include "screen.h"
#define SIZE 10
int main()
{
	initGame(SIZE);
	int row = 0;
	int col;
	int count;
	for(col = 0; col < SIZE; col++)
	{
		clearScreen();
		for(count = 0; count <= col; count++)
		{
			turnOn(row,count);
		}
	}
	return 0;
}


