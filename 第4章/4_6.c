#include <stdio.h>
int a, n, i;
int result = 1;

int main()
{
	scanf("%d %d", &a, &n);
	for(i = 1; i <= n; i++)
	{
		result = result * a;
	}
	printf("%d", result);

	return 0;
}
