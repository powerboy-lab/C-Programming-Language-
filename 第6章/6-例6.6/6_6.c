#include <stdio.h>

void initGameNew(int n){
	
	int i,j;
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("��");
		}
		printf("\n");
	}
}

int main() {
	
	int SIZE;
	printf("��������Ļ�Ĵ�С��\n");
	scanf("%d",&SIZE);
	initGameNew(SIZE);
	return 0;
}





