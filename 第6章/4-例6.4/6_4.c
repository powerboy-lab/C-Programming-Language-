#include <stdio.h>
#include <math.h>


int main() {
	
	float a, b, c , p, s;
	
	printf("��ֱ����������ε�������:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	p = 1.0 / 2 *( a + b + c);
	
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	
	printf("s = %f \n", s);
	
	
	return 0;
}
