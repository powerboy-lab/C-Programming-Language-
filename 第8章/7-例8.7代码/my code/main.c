#include<stdio.h>
#include"screen.h"

#define SIZE 8

struct node{
	int row;
	int col;
	struct node * next;
};

int main()
{
	initGame(SIZE);
	
	struct node * head;
	struct node * p1;
	struct node * p2;
	
	p1 = (struct node *)malloc(sizeof(struct node));
	head = p1;
	p1 -> row = 0;
	p1 -> col = 0;
	p1 -> next = NULL;
	
	p2 = (struct node *)malloc(sizeof(struct node));
	p2 -> row = 0;
	p2 -> col = 1;
	p2 -> next = NULL;
	
	p1 -> next = p2;
	
	turnOn(p2 -> row,p2 -> col);
	turnOn(p1 -> row,p1 -> col);
	
	free(p1);
	free(p2);
	head = NULL;
	
	return 0;
}
