#include <stdio.h>
/*
	��һ������n�������жϸ������Ƿ���2���ݴη�������
		n=1 ���:yes
		n=2 ���:yes
		n=3 ���:no
*/

int main()
{
	int n;
	printf("����������n:\n");
	scanf("%d", &n);
	
	int i;
	int result = 1;
	int count = 0;
	
	for(i = 1; result <= n; i++)
	{
		result = result * 2;
		if (n == 1 || n == result)
		{
			printf("yes");
		}
		else if (n != result)
		{
			count++;
		}
	}
	if(count == i - 1)
	{
		printf("no");
	}
		
	return 0;
}
