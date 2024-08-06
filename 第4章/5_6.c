#include <stdio.h>
int main()
{
	int i;
	int j;
	for (i = 1; i <= 4 ; i++)
	{
		for(j = 1; j <= 5; j++)
		{
			if( i == 3 && j == 1) 
			continue;
			printf("%d\t", i * j);
		}
		printf("\n");
	}
	
	return 0;
}
