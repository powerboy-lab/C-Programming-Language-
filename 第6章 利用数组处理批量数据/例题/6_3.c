/*
	冒泡排序：
	1.相邻的元素两两比较，大的放右边，小的放左边。
	2.第一轮比较完毕之后，最大值就已经确定，第二轮可以少循环一次，后面以此类睢。
	3.如果数组中有n个数，总共我们只要执行n-1轮的代码就可以。
*/
#include <stdio.h>
int main()
{
	//1. 定义数组，存储数据 
	int arr[10];
	int i;
	for(i = 0; i < 10; i++)
		scanf("%d",&arr[i]);
	
	for(i = 0; i < 10; i++)	
		printf("%d  ", arr[i]);
		
	printf("\n");
	
	//2. 利用冒泡排序，将数组中的数据按照升序排列	
	int j;
	int temp;
	for(i = 0; i < 9; i++)
	{
		//相邻的元素两两比较，小的在前面，大的后面 
		for(j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;	
			}
			
		}		
	}
	//3.遍历 
	for(i = 0; i < 10; i++)
		printf("%d  ", arr[i]);
	
	
	
	return 0;
}
