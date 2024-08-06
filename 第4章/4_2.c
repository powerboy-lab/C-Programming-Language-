#include <stdio.h>
int main()
{
	int n;
	int i,j;
	int countA = 0;	
	printf("请输入整数n\n");
	scanf("%d",&n);	
	for(i = 2; i < n; i++)
	{
		int count = 0;
		for(j = 2; j < i; j++)
		{
			if ((i%j) == 0)
			{
				count++;
				break;
			}	
		}
		if(count == 0)
		{
		countA++;
		}	
	}
	printf("%d个质数\n", countA);
	return 0;
}
