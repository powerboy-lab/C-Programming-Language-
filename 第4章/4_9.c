#include <stdio.h>
/*
	求1~200之间的偶数和 
*/
int main()
{
	//1. 定义变量 
	int i;
	int sum = 0;
	
	//2. 获取1-200之间的每一个数字 
	for(i = 1; i <= 200; i++)
	{
		//判断是否为偶数 
		if((i % 2) == 0)
		{
			sum = sum + i;	
		}
	}
	printf("%d", sum);	
	return 0;
}
