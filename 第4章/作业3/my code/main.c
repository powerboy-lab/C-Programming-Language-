#include "screen.h"
#define SIZE 10
int main()
{
	initGame(SIZE);
	int i,j;
	for(i = SIZE - 1; i >= 0; i--)
	{
		for(j = SIZE - 1 -i; j <= SIZE-1; j++)
		{
			turnOn(i,j);
		}
	}
	return 0;
}
