/*
   ��5.9  ����n���ж��Ƿ�Ϊ���� 
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	scanf("%d",&num);
	
	int n1;
	n1 = sqrt(num);
	int i;
	for(i = 2; i < n1; i++)
	{
		if ( n1 % i == 0) 
		{		
			break;
		}
	}
	if(i != n1)
	{
		printf("%d��������\n", num);
	}
	else
	{
		printf("%d������\n", num);	
	}
	return 0;
}
