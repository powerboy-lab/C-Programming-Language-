#include <stdio.h>
#include "screen.h"

#define SIZE 8

int main() {
	
	initGame(SIZE);				//��ʼ����Ϸ������8x8�������Ļ 
	int row = 4;
	int col = 4;
	turnOn(row,col);			//������4�е�4��λ�õĵ� 
	
	char ch = getch();			//��ð����˰�����ֵ 
	
	
	if (ch == 'w' || ch =='W')	//�ж��Ƿ����˰���w ��ֹͻȻ���´�Сд�� 
	{
	    row = row - 1;			//���������˶�1�� 
	}
	else
	{
		row = row + 1;			//���������˶�1�� 
	} 
	 	
    //ch == 'w' || ch == 'W' ? (row = row - 1) : (row = row + 1);   //�������ʽ 
		
		clearScreen();			//���� 
		turnOn(row,col);		 
		
	
	return 0;
}
