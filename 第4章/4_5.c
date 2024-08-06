#include <stdio.h>
long long a3 = 0;
long long k;
int i;

int main()
{
	printf("请输入正整数k\n");
	scanf("%d", &k);	
	
	long long a1 = 1; 
	long long a2 = 1;
	
	if (k == 1 || k == 2)
	{
		a3 = a1;
	}
	
	for( i = 0 ; i < k - 2; i++)
	{
		a3 = a1 + a2;
		a1 = a2;
		a2 = a3;
	}	
	printf("%lld", a3);

	return 0;
} 
