#include <stdio.h>
/*
	有两个整数，被除数 dividend 和除数divisor。
	将两数相除，要求不使用乘法、除法和取余运算。
	返回被除数 dividend 除以除数 divisor 得到的商和余数。
	比如说：两个整数11、3
	输出结果：商：3   余：2
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
	printf("商:%d\n 余:%d\n", count, dividend);
	
	return 0;
}
