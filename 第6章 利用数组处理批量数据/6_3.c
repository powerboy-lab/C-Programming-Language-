/*	
	需求：生成10个1~10之间的随机数存入数组,要求数据不能重复 
	1)求出所有数据的和
	2)求所有数据的平均数
	3)统计有多少个数据比平均值小 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//1.定义数组 
	int arr[10] = {0};
	int len = sizeof(arr)/sizeof(int);
	
	//2.数组赋值。生成10个1~100之间的随机数存入数组 	
	//设置种子 
	srand(time(NULL));
	int i;
	int sum;
	for(i = 0; i < len; )
	{	
		//生成随机数 
		int num = rand() % 10 + 1;
		int j;
		for(j = 0; j < len; j++)
		{
			if (num == arr[j])
					break;
		}
		if (j == len)
		{
			arr[i] = num;
			sum = sum + arr[i];				//3.利用累加思想求数组中所有数据的和
			printf("%d ",arr[i]);
			i++;
		}									//4.输出
	}

	printf("\n"); 
	printf("sum = %d\n",sum); 					//4.输出
	
	//5.求平均数 
	int ave = sum / len;
	printf("ave = %d\n", ave);
	
	//6. 统计有多少个数字比平均数要小 
	int count = 0;
	for(i = 0; i < len; i++)
	{
		if(arr[i] < ave)
			count++;
	}
	printf("count = %d\n", count);
	
	return 0;
} 
