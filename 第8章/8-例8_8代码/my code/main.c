#include"screen.h"
#define SIZE 8
struct node{
   int row;
   int col;
   struct node * next;
};

struct node * insert(struct node * head, struct node * pnode){
     struct node * pcurrent = head;
          	
     if (pcurrent == NULL)
     { 
     	head = pnode;
     	pnode -> next = NULL;
     	return head;
	}
	 
	 
	 while(pcurrent -> next != NULL)
     {
     	pcurrent = pcurrent -> next;
	 }
	 
  	 pcurrent -> next = pnode;
    pnode -> next = NULL;

     return head;
}

struct node * creatList(){
    struct node *head = NULL, *pnew = NULL, *pcurrent = NULL;
    int i = 0;
    for(i = 0; i < 4; i++){
            pnew = (struct node*) malloc(sizeof(struct node));
            pnew->row = 0;
            pnew->col = i;
            pnew->next = NULL;
            if( head == NULL){
                    head = pnew;
                    pcurrent = pnew;
            }
            else{
                    pcurrent->next = pnew;
                    pcurrent = pnew;
            }
   }
   return head;

}

void showList(struct node *head){
    struct node * pcurrent;
    pcurrent = head;

    while(pcurrent != NULL){
            turnOn(pcurrent->row, pcurrent->col);
            pcurrent = pcurrent->next;
    }

}

int main(){
    initGame(SIZE);
    struct node *head = NULL;
    head = creatList();
    showList(head);

    struct node *pnew;
    pnew =  (struct node*) malloc(sizeof(struct node));
    pnew->row = 1;
    pnew->col = 0;
    pnew->next = NULL;
    head = insert(head,pnew);
    clearScreen();
    showList(head);
    return 0;

}

