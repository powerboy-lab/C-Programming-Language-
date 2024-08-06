#include <stdio.h>
/*
	需求：键盘录入两个数字，表示一个范围。
	统计这个范围中
	既能被6整除，又能被8整除数字有多少个？
	
	统计思想：定义一个变量，在合适的时候自增即可 
*/ 

int main()
{
	//1. 键盘录入两个数字 
	int n1, n2;
	printf("键盘录入两个数字:\n");
	scanf("%d %d", &n1, &n2);
	//printf("%d %d\n",n1,n2) ;   //验证是否录入成功 
	
	//判断n1和n2谁大，谁小 
	int min, max;
	min = n1 < n2 ? n1 : n2;
	max = n1 > n2 ? n1 : n2; 
	
	//3. 获取范围中的每一个数字 
	int i;
	int count = 0;
	for(i = min; i <= max; i++)
	{
		if(i % 6 == 0 && i % 8 == 0)
		{
			count++;
			printf("i = %d\n", i);
		}

	} 
	//4. 打印 
	printf("count = %d", count);
	return 0;
}

