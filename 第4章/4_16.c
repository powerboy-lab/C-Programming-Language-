#include <stdio.h> 
/*
	判断一个整数是否为回文数
	回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。
	例如：121 是回文，而 123 不是。
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
		printf("%d是回文", num);
	}
	else if(num != rev)
	{
		printf("%d不是回文", num);
	}

	return 0;
}
