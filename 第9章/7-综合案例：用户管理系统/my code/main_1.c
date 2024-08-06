#include"screen.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct tagUser{
    char userName[20];
    char password[20];
    struct tagUser *next;
} user;


user  *pData; // �û���Ϣ����


/* �ж���ע����û����Ƿ��ѱ�ʹ��*/
int isSameName(char * name){
    user *pUser = pData;
    while(pUser != NULL){
        if(strcmp(pUser->userName,name) == 0){
            return 1;
        }
        pUser = pUser->next;
    }

    return 0;

}


/* �½��û����*/
user * creatUser(){

    user *puser = (user *)malloc(sizeof(user));
    if(puser == NULL){
        printf("�ڴ�����ʧ��!\n");
        return NULL;
    }


    printf("�������û���:\n");
    scanf("%s",puser->userName);
    while(isSameName(puser->userName)){
        printf("�û����Ѵ��ڣ������������û���:\n");
        scanf("%s",puser->userName);

    }
    printf("����������:\n");
    scanf("%s",puser->password);
    puser->next = NULL;

    return puser;

}


/* �����û��������������֮��*/
int addUser(user *pUser){
    user *p = pData;
    if(pUser == NULL){
        printf("ע��ʧ�ܣ�\n");
        return 0;
    }

    if(p == NULL){
        pData = pUser;
        printf("ע��ɹ���\n");
        return 1;
    }

    while(p->next != NULL){
        p = p->next;
    }
    p->next = pUser;

    return 1;
}

/* ע�Ṧ��*/
void registerUser(){
    user *puser = creatUser();
    addUser(puser);
}

/*��¼����*/
int login(){
    char uname[20],pword[20];
    printf("�������û���:\n");
    scanf("%s",uname);
    printf("����������:\n");
    scanf("%s",pword);
    user *p = pData;
    while(p != NULL){
        if(strcmp(p->userName,uname)== 0 &&
strcmp(p->password,pword)== 0){
            return 1;
        }

        p = p->next;
    }
    printf("��¼ʧ�ܣ������µ�¼!\n");
    return 0;

}

/* ��¼ϵͳ����*/
void ShowMenu(){
         printf("--------------------------��¼ϵͳ--------------------------------\n");
         printf("1.ע��   2.��¼");
         printf("\n--------------------------------------------------------------------\n");
}




int main(){
    //register();
    int mode;
    int islogin = 0;
    while(islogin == 0){
        ShowMenu();
        printf("��ѡ����Ҫ�Ĳ�����\n");
        scanf("%d",&mode);
        if(mode == 1){
            registerUser();
        }

        if(mode == 2){
            if(login() == 1){
                islogin = 1;
            }
        }

        if(mode != 1 && mode != 2){
            printf("ѡ���������������ѡ��\n");
        }
    }
    initGame(8);

}

