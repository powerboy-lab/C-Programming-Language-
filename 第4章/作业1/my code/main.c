#include "screen.h"
#define SIZE 10
int main()
{
	initGame(SIZE);
	int i,j;
	for(i = 0; i < SIZE; i++)
	{
		for(j = 0; j <= i; j++)
		{
			turnOn(i,j);
		}
	}
	return 0;
}
