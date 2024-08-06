/*
   例5.10  求100~200之间全部素数
   输出：一行十个素数 
*/

#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	int n1;
	int m = 0;
	for(num = 100;num <= 200; num = num + 1)
	{
		int i;
		n1 = sqrt(num);
		for(i = 2; i < n1; i++)
		{
			if (num % i == 0)
				break;
		}

		if (i == n1)
		{
			printf("%d ", num);
			m++;
			if (m % 10 == 0)
			printf("\n");
		}

	}
	return 0;
}
