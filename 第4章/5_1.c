#include <stdio.h>
/*
	用while语句求1～100的累计和。 	
*/

int main()
{
	int n = 1;
	int sum = 0;
	scanf("%d", &n);
	
//	while(n <= 100)
//	{
//		sum = sum + n;
//		n++;
//	}
//	printf("sum = %d\n", sum);
//	printf("n = %d\n", n);

//	do
//	{
//		sum = sum + n;
//		n++;
//	}
//	while (n <= 100);
//	printf("sum = %d\n", sum);
//	printf("n = %d", n);	
	
//	for(n = 1; n <= 100; n++)
	for(n = 100; n >= 1; n--)
	{
		sum = sum + n;
	}
	printf("sum = %d\n", sum);
	printf("n = %d", n);

	return 0;
}
