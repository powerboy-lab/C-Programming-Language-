/*
	需求：定义一个数组，存入1~5。要求打乱数组中所有数据的顺序
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//1. 定义数组 
	int arr[] = {44, 55, 22, 33, 5};
	int len = sizeof(arr)/sizeof(int);
	//设置种子 
	srand(time(NULL));
	int i;
	for(i = 0; i < len; i ++)
	{
		// 获取一个随机索引 
		int index = rand() % len;
		printf("%d\n", index);
		//拿着i指向的元素，跟Index指向的元素进行交换 
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index]= temp;		
	}	
	//3. 遍历数组 
	for(i = 0; i < len; i++)
		printf("%d ", arr[i]);
 		
	
	return 0;
} 
