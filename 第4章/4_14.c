#include <stdio.h>
/*
	需求：将一个整数X，进行反转
	举例：
	123 ----> 321
	
	思路：从右边开始，依次获取每一位数字，再次拼接起来 
*/
int main()
{
	//1. 定义两个变量 
	int num;
	int rev = 0;	
	scanf("%d", &num);
	
	//循环结束条件： num == 0
	//小括号：循环要继续执行 
	while(num != 0)
	{
		//获取number右边的第一位数字 
		int temp = num % 10;
		//去掉刚刚获取的数字 
		num = num / 10;
		//把刚刚获取的数字拼接给rev变量当中 
		rev = rev * 10 + temp;		
	}
	//3.打印 
	printf("%d\n",rev);

	return 0;
} 
