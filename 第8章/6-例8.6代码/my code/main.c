#include<stdio.h>
#include"screen.h"

#define SIZE 8

struct node{
	int row;
	int col;
	struct node *next;
};

int main()
{
	initGame(SIZE);
	
	struct node * head;
	struct node * pnode;								
	
	pnode = (struct node *)malloc(sizeof(struct node));			//����һ���µĽڵ� 
	head = pnode;												//ͷָ��ָ���һ��Ԫ�� 
	
	pnode -> row = 4;
	pnode -> col = 4;
	pnode -> next = NULL;
	
	turnOn(pnode -> row, pnode -> col);
	free(pnode);												//�ͷŸýڵ㣬��ֹ�ڴ�й¶ 
	head = NULL;												//ͷָ��ָ�� 

	return 0;
}
