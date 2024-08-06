#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int i,j;
	int sum = 0;
	
	for( i = 1; i <=n; i++)
	{
		int result = 1;
		for( j = 1; j <= i; j++)
		{	
			result = result * j;
		}
			sum = sum + result;	
	}
	printf("%d", sum); 

	return 0;
}
