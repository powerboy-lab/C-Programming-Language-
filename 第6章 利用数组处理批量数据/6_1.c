/*
	������֪����Ԫ��Ϊ {33, 5, 22, 44, 55}
			���ҳ����������ֵ����ӡ�ڿ���̨
			
	˼��һ
		ѭ���ǲ���һ��Ҫ��0������ʼ��
		
	˼����
		max��Ĭ��ֵ�Ƿ����дΪ0��
*/

#include <stdio.h>
int main()
{
	//1.�������� 
	int arr[] = {33, 5, 22, 44, 55};
	int len = sizeof(arr)/sizeof(int);
	//2.�������max����¼��������ֵ 
	int max = arr[0];
	//3.����
	int i; 
	for(i = 1; i < len; i++)
	{
		if(max < arr[i])
		{
			max = arr[i];
		}			
	}
	//4.���max 
	printf("%d", max);
}
