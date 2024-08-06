#include <stdio.h>
int main()
{
	int number;
	printf("请输入正整数number\n");
	scanf("%d", &number);

	long long sum;
	int i, j;

	for(i = 1; i<= number; i++)
	{
		long long pow = 1;
		for(j = 1; j <= i; j++)
		{
			pow = pow * i;
		}
		sum = sum + pow;	
	}
		printf("%lld\n",sum);
	return 0;
}
