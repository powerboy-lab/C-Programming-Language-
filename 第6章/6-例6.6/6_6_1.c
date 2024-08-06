#include <stdio.h>
#include <math.h>

float area (float a, float b, float c){
	
	float p = (a + b + c)/2;
	float s;
	s = sqrt( p * (p - a) * (p - b) * (p - c) );
	return s;
}


int main(){
	float a1, a2, a3;
	
	printf("请输入三角形的三条边：\n");
	scanf("%f %f %f", &a1, &a2, &a3);
	
	float s = area (a1, a2, a3);
	printf("%f\n", s);
	
	return 0;
}
