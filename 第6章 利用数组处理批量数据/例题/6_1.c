/*


*/
#include <stdio.h>
int main()
{
	int arr[10];
	int i;
	for(i=0; i < 10; i++)
	{
		arr[i] = i;
	}
	printf("\n");
	for(i = 9; i >= 0; i--)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
