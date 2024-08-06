#include <stdio.h>
int main()
{
	int number;
	
	printf("ÇëÊäÈëÕûÊınumber\n");
	scanf("%d",&number);
	
	int sum,remainder,quotient ;
	int i;

//	for(i = 0; i <= number; i++)
//	{
//		sum = i%10 + i/10%10 + i/100%10 + i/1000 %10;
//		if (sum == 15)
//		{
//			printf("%d\n",i);
//		}
//	}
	
	for(i = 0; i <= number; i++)
	{
		quotient = i;
		sum = 0;	
		while(quotient != 0)
		{
			remainder = quotient % 10;
			sum = sum + remainder;		
			quotient  = quotient /10;
		}

		if (sum == 15)
		{
			printf("%d\n",i);
		}		
	}
	return 0;
}
