#include <stdio.h>
/*
	��1~200֮���ż���� 
*/
int main()
{
	//1. ������� 
	int i;
	int sum = 0;
	
	//2. ��ȡ1-200֮���ÿһ������ 
	for(i = 1; i <= 200; i++)
	{
		//�ж��Ƿ�Ϊż�� 
		if((i % 2) == 0)
		{
			sum = sum + i;	
		}
	}
	printf("%d", sum);	
	return 0;
}
