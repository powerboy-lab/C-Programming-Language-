#include <stdio.h>
#include <math.h>


int main() {
	
	float a, b, c , p, s;
	
	printf("请分别输入三角形的三条边:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	p = 1.0 / 2 *( a + b + c);
	
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	
	printf("s = %f \n", s);
	
	
	return 0;
}
