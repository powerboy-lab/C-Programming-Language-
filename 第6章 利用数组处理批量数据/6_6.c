/*
	���󣺶���һ�����飬����1~5��Ҫ������������������ݵ�˳��
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//1. �������� 
	int arr[] = {44, 55, 22, 33, 5};
	int len = sizeof(arr)/sizeof(int);
	//�������� 
	srand(time(NULL));
	int i;
	for(i = 0; i < len; i ++)
	{
		// ��ȡһ��������� 
		int index = rand() % len;
		printf("%d\n", index);
		//����iָ���Ԫ�أ���Indexָ���Ԫ�ؽ��н��� 
		int temp = arr[i];
		arr[i] = arr[index];
		arr[index]= temp;		
	}	
	//3. �������� 
	for(i = 0; i < len; i++)
		printf("%d ", arr[i]);
 		
	
	return 0;
} 
