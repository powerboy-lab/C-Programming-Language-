#include <stdio.h>
#include <math.h>

int main()
{
	double pi = 0.0;
	double term = 1.0;
	double n1 = 1.0;
	double n2 = 1.0;
	
	while(fabs(term) >= 1e-8)
	{
		pi = pi + term;
		n2 = n2 + 2;
		n1 = -n1;
		term = n1/n2;
	}
	pi = pi * 4;
	printf("%10.8f\n", pi);
	return 0;
}
