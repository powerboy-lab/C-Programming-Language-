#include <stdio.h>
const int SIZE = 9;
//# define SIZE 9
int main()
{
	int i;
	int j;
	int product;
	
	for(i = 1; i <= SIZE; i++)
	{
		for(j = 1; j <= i; j++)
		{
			product = i * j;
			printf("%d¡Á%d=%d\t", j, i, product);
		}
		printf("\n");
	}
	return 0;
}
