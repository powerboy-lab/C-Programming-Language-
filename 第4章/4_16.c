#include <stdio.h> 
/*
	�ж�һ�������Ƿ�Ϊ������
	��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������
	���磺121 �ǻ��ģ��� 123 ���ǡ�
*/
int main()
{
	int num;
	scanf("%d", &num);
	int rev;
	int n2 = num;
	while(n2 != 0)
	{
		int n1 = n2 % 10;
		n2 = n2 / 10;
		rev = rev * 10 + n1;
	}
	
	if(num == rev)
	{
		printf("%d�ǻ���", num);
	}
	else if(num != rev)
	{
		printf("%d���ǻ���", num);
	}

	return 0;
}
