#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);			//��ʼ����Ϸ������8x8�������Ļ 
	int row = 4;
	int col = 4;
	turnOn(row,col);		//������4�е�4��λ�õĵ� 
	
	char ch = getch();		//��ð����˰�����ֵ 
	
	if (ch == 'w' || ch =='W')	//�ж��Ƿ����˰���w ��ֹͻȻ���´�Сд�� 
	{
		clearScreen();		//���� 
		
		row = row - 1;		//�����˶�1�� 
		turnOn(row,col);	//������3�е�4�е�λ�õĵ� 
	}
	
	
	return 0;
}
