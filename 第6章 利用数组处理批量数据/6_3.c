/*	
	��������10��1~10֮����������������,Ҫ�����ݲ����ظ� 
	1)����������ݵĺ�
	2)���������ݵ�ƽ����
	3)ͳ���ж��ٸ����ݱ�ƽ��ֵС 
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	//1.�������� 
	int arr[10] = {0};
	int len = sizeof(arr)/sizeof(int);
	
	//2.���鸳ֵ������10��1~100֮���������������� 	
	//�������� 
	srand(time(NULL));
	int i;
	int sum;
	for(i = 0; i < len; )
	{	
		//��������� 
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
			sum = sum + arr[i];				//3.�����ۼ�˼�����������������ݵĺ�
			printf("%d ",arr[i]);
			i++;
		}									//4.���
	}

	printf("\n"); 
	printf("sum = %d\n",sum); 					//4.���
	
	//5.��ƽ���� 
	int ave = sum / len;
	printf("ave = %d\n", ave);
	
	//6. ͳ���ж��ٸ����ֱ�ƽ����ҪС 
	int count = 0;
	for(i = 0; i < len; i++)
	{
		if(arr[i] < ave)
			count++;
	}
	printf("count = %d\n", count);
	
	return 0;
} 
