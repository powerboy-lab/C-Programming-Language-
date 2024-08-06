/*	
	需求：生成10个1~100之间的随机数存入数组
	1）求出所有数据的和
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//1.定义数组 
	int arr[10] = {0};
	int len = sizeof(arr)/sizeof(int);
	
	//2.数组赋值。生成10个1~100之间的随机数存入数组 	
	srand(time(NULL));
	int i;
	int sum;
	for(i = 0; i < len; i++)
	{	
		arr[i] = rand() % 100 + 1;
		sum = sum + arr[i];				//3.利用累加思想求数组中所有数据的和
		printf("%d ",arr[i]);			//4.输出
	}

	printf("\n"); 
	printf("%d",sum); 					//4.输出
} 
