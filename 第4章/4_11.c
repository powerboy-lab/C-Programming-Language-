#include <stdio.h>
/*
	给一个整数n，请你判断该整数是否是2的幂次方举例：
		n=1 输出:yes
		n=2 输出:yes
		n=3 输出:no
*/

int main()
{
	int n;
	printf("请输入整数n:\n");
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
