/*
	���󣺼���¼��5�����ݲ��������飬�����������
	1����������
	2����ת����
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
