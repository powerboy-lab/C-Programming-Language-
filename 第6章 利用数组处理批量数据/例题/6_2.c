#include <stdio.h>

int main() 
{
	int i;
	int F[20];
	for(i = 0; i < 20; i++)
	{
		if(i == 0 || i == 1)
			F[i] = 1;
		else
		{
			F[i] = F[i-2] + F[i-1];
		}
		if(i % 5 == 0)
			printf("\n");
		printf("%d\t", F[i]);

					
	}
	
	

	
	return 0;
}
