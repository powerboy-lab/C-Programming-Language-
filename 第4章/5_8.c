#include <stdio.h>

int main()
{
	int n;
	int F1 = 1;
	int F2 = 1;
	int Fn = 0;
	
	for(n = 1; n <= 40; n++)
	{
		if(n==1 || n==2)
		{
			Fn = 1;
			printf("F(%d)=%d\n",n,Fn);		
		}
		else 
		{
			Fn = F1 + F2;
			F1 = F2;
			F2 = Fn;
			printf("F(%d)=%d\n",n,Fn);	
		}	
	}
	return 0;
}
