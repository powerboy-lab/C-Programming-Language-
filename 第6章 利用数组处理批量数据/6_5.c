/*
	需求：键盘录入5个数据并存入数组，完成以下需求
	1）遍历数组
	2）反转数组
*/
#include <stdio.h>
int main()
{
	int arr[5] = {0};
	int len = sizeof(arr)/sizeof(int);
	
	int i;
	for(i = 0; i < len; i++)
		scanf("%d", &arr[i]);
	
	for(i = 0; i < len; i++)
		printf("%d ", arr[i]);
	printf("\n");
	
	i = 0;
	int j = len - 1;
	while(i < j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		
		i++;
		j--;	
	}
	
	for(i = 0; i < len;i ++)
		printf("arr[%d] = %d\n", i, arr[i]);

	return 0;
}
