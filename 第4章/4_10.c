#include <stdio.h>
/*
	���󣺼���¼���������֣���ʾһ����Χ��
	ͳ�������Χ��
	���ܱ�6���������ܱ�8���������ж��ٸ���
	
	ͳ��˼�룺����һ���������ں��ʵ�ʱ���������� 
*/ 

int main()
{
	//1. ����¼���������� 
	int n1, n2;
	printf("����¼����������:\n");
	scanf("%d %d", &n1, &n2);
	//printf("%d %d\n",n1,n2) ;   //��֤�Ƿ�¼��ɹ� 
	
	//�ж�n1��n2˭��˭С 
	int min, max;
	min = n1 < n2 ? n1 : n2;
	max = n1 > n2 ? n1 : n2; 
	
	//3. ��ȡ��Χ�е�ÿһ������ 
	int i;
	int count = 0;
	for(i = min; i <= max; i++)
	{
		if(i % 6 == 0 && i % 8 == 0)
		{
			count++;
			printf("i = %d\n", i);
		}

	} 
	//4. ��ӡ 
	printf("count = %d", count);
	return 0;
}

