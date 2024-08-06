#include"screen.h"
#define SIZE 8

struct food{
   int row;
   int col;
};


struct node{
   int row;
   int col;
   struct node * next;
};


struct snake{
    struct node *head;
    int len;
    int dir;
};


void initFood(struct food * pfood){
    pfood ->row = rand() % SIZE;
    pfood ->col = rand() % SIZE;
}


struct node * creatList(int len){
    struct node *head = NULL, *pnew = NULL, *pcurrent = NULL;
    int i ;
    for(i = 0; i < len; i++){
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

void initSnake(struct snake * psnake){
      psnake->len = 4;
      psnake->dir = 2;
      psnake->head = creatList(psnake->len);
}

void showFood(struct food *pfood){
    turnOn(pfood ->row, pfood ->col);
}


void showList(struct node *head){
    struct node * pcurrent;
    pcurrent = head;
    while(pcurrent != NULL){
            turnOn(pcurrent->row, pcurrent->col);
            pcurrent = pcurrent->next;
    }
}



void showSnake(struct snake * psnake){
    showList(psnake ->head);
}


struct node * insert(struct node * head, struct node * pnode){
     struct node * pcurrent = head;
     pnode->next = pcurrent;
     return pnode;
}

struct node * deleteTail(struct node * head){
     struct node * pcurrent, *pnext;
     pcurrent = head;
     if(pcurrent  != NULL && pcurrent->next != NULL){
        pnext = pcurrent->next;
     }
             else{
                 return head;
             }
     while(pnext->next != NULL){
         pcurrent = pcurrent -> next;
         pnext = pcurrent->next;
     }

     pcurrent->next = NULL;
     free(pnext);
     return head;
}


int eatFood(struct snake *psnake, struct food *pfood){
   struct node *head = psnake->head;

   if(psnake->dir == 1){
      if(head->row - 1 == pfood ->row && head->col == pfood ->col){
       return 1;
      }
   }

   if(psnake ->dir == 2){
      if(head->row + 1 == pfood ->row && head->col == pfood ->col){
       return 1;
      }
   }


   if(psnake ->dir == 3){
        if(head->row == pfood ->row && head->col - 1 == pfood ->col){
            return 1;
        }
   }

   if(psnake ->dir == 4){
      if(head->row == pfood ->row && head->col + 1 == pfood ->col){
       return 1;
      }
   }
   return 0;
}

void updateFood(struct snake * psnake, struct food *pfood){
    if(eatFood(psnake, pfood)){
            struct node * pnew = NULL;
            pnew =  (struct node*) malloc(sizeof(struct node));
            pnew->row = pfood->row;
            pnew->col = pfood->col;
            pnew->next = NULL;
            psnake ->head = insert(psnake ->head,pnew);
            initFood(pfood);
    }
}


void updateDirection(struct snake * psnake, char key){
      if(key == 'w'){
        psnake ->dir = 1;
      }

      if(key == 's'){
        psnake ->dir = 2;
      }

      if(key == 'a'){
         psnake ->dir = 3;
      }

      if(key == 'd'){
         psnake ->dir = 4;
      }

}

void updateSnake(struct snake * psnake){
      struct node * pnew = NULL;
      struct node * head = psnake ->head;

      if(psnake ->dir == 1 && head->row > 0){
            pnew =  (struct node*) malloc(sizeof(struct node));
            pnew->row = head->row - 1;
            pnew->col = head->col;
            pnew->next = NULL;
            psnake ->head = insert(head,pnew);
            deleteTail(psnake ->head);
      }

      if(psnake ->dir == 2 && head->row  < SIZE - 1){
            pnew =  (struct node*) malloc(sizeof(struct node));
            pnew->row = head->row + 1;
            pnew->col = head->col;
            pnew->next = NULL;
            psnake ->head = insert(head,pnew);
            deleteTail(psnake ->head);
       }

       if(psnake ->dir == 3 && head->col > 0){
            pnew =  (struct node*) malloc(sizeof(struct node));
            pnew->row = head->row;
            pnew->col = head->col - 1;
            pnew->next = NULL;
            psnake ->head =insert(head,pnew);
            deleteTail(psnake ->head);
       }

       if(psnake ->dir == 4 && head->col < SIZE - 1){
            pnew =  (struct node*) malloc(sizeof(struct node));
            pnew->row = head->row;
            pnew->col = head->col + 1;
            pnew->next = NULL;
            psnake ->head = insert(head,pnew);
            deleteTail(psnake ->head);
       }

}

int main(){
    initGame(SIZE);
    struct snake sk;
    struct food fd;
    initFood(&fd);
    initSnake(&sk);

    char key;
    while(1){
            clearScreen();
            showFood(&fd);
            showSnake(&sk);

            key = getKey();
            updateDirection(&sk,key);
            updateFood(&sk,&fd);
            updateSnake(&sk);
     }

    return 0;

}

