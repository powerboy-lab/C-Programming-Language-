#include <stdio.h>
/*
	给你一个非负整数x, 计算并返回x的算术平方根结果只保留整数部分，小数部分将被舍去。
	举例：
		x = 4,  结果：2
		X = 8,  结果：2

*/
int main()
{
	//1. 定义变量 
	unsigned int x;
	scanf("%d", &x);
	
	unsigned int num = 0;
	unsigned int i = 0;
	//2. 利用循环去找平方根的整数部分 
	while(num <= x)
	{
		i++;
		num = i * i;		
	} 
	//3.循环结束之后，表示已经找到了整数部分 
	printf("%d",i-1);
	
}
