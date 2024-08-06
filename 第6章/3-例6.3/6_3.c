#include <stdio.h>

int n;

int main() {
	
	printf("ÇëÊäÈëÆÁÄ»´óĞ¡£º\n");
	scanf("%d", &n);
	
	int i = 0;
	int j = 0;
	for( i = 0; i < n; i++){
		for( j = 0; j < n; j++){
			printf("¡õ");
		}
		printf("\n") ;
	}
	
	return 0;
}
