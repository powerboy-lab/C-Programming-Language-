/*
   例5.9  输入n，判断是否为素数 
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
		printf("%d不是素数\n", num);
	}
	else
	{
		printf("%d是素数\n", num);	
	}
	return 0;
}
