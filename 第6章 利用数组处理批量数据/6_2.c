/*	
	��������10��1~100֮����������������
	1������������ݵĺ�
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//1.�������� 
	int arr[10] = {0};
	int len = sizeof(arr)/sizeof(int);
	
	//2.���鸳ֵ������10��1~100֮���������������� 	
	srand(time(NULL));
	int i;
	int sum;
	for(i = 0; i < len; i++)
	{	
		arr[i] = rand() % 100 + 1;
		sum = sum + arr[i];				//3.�����ۼ�˼�����������������ݵĺ�
		printf("%d ",arr[i]);			//4.���
	}

	printf("\n"); 
	printf("%d",sum); 					//4.���
} 
