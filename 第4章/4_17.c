#include <stdio.h>
/*
	������������������ dividend �ͳ���divisor��
	�����������Ҫ��ʹ�ó˷���������ȡ�����㡣
	���ر����� dividend ���Գ��� divisor �õ����̺�������
	����˵����������11��3
	���������̣�3   �ࣺ2
*/
int main()
{
	int dividend, divisor;
	scanf("%d %d",&dividend, &divisor);
	int count = 0;
	while(dividend >= divisor)
	{
		dividend = dividend - divisor;
		count++;
	}
	printf("��:%d\n ��:%d\n", count, dividend);
	
	return 0;
}
