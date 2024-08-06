#include <stdio.h>

int main()
{
	int i, j;
	for(i = 1; i <= 7; i++)
	{
		for(j = 7 - i + 1; j <= i + 3; j++)
		{
			printf("*");
		}
		printf("\n");	
	}
	
	
	
	return 0;
}
