#include <stdio.h>
/*
	����һ���Ǹ�����x, ���㲢����x������ƽ�������ֻ�����������֣�С�����ֽ�����ȥ��
	������
		x = 4,  �����2
		X = 8,  �����2

*/
int main()
{
	//1. ������� 
	unsigned int x;
	scanf("%d", &x);
	
	unsigned int num = 0;
	unsigned int i = 0;
	//2. ����ѭ��ȥ��ƽ�������������� 
	while(num <= x)
	{
		i++;
		num = i * i;		
	} 
	//3.ѭ������֮�󣬱�ʾ�Ѿ��ҵ����������� 
	printf("%d",i-1);
	
}
