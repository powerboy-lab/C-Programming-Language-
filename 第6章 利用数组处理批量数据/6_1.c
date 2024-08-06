/*
	需求：已知数组元素为 {33, 5, 22, 44, 55}
			请找出数组中最大值并打印在控制台
			
	思考一
		循环是不是一定要从0索引开始？
		
	思考二
		max的默认值是否可以写为0？
*/

#include <stdio.h>
int main()
{
	//1.定义数组 
	int arr[] = {33, 5, 22, 44, 55};
	int len = sizeof(arr)/sizeof(int);
	//2.定义变量max，记录数组的最大值 
	int max = arr[0];
	//3.遍历
	int i; 
	for(i = 1; i < len; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}			
	}
	//4.输出max 
	printf("%d", max);
}
