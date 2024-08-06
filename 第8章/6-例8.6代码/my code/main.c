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
	
	pnode = (struct node *)malloc(sizeof(struct node));			//开辟一个新的节点 
	head = pnode;												//头指针指向第一个元素 
	
	pnode -> row = 4;
	pnode -> col = 4;
	pnode -> next = NULL;
	
	turnOn(pnode -> row, pnode -> col);
	free(pnode);												//释放该节点，防止内存泄露 
	head = NULL;												//头指针指空 

	return 0;
}
