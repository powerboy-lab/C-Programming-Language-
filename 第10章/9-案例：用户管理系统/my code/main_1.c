#include"screen.h"
#include<stdio.h>
#include<stdlib.h>
#define SIZE 8

typedef struct tagUser{
    char userName[20];
    char password[20];
    struct tagUser *next;

} user;


user  *pData;


int isSameName(char * uname){
    FILE *fp = fopen("student.dat", "rb");
    user ur;
    while(fread(&ur,sizeof(user), 1 ,fp)){
      if(strcmp(ur.userName , uname) == 0){
          return 1;    }
   }
   fclose(fp);

    return 0;

}

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

    return puser;

}

int addUser(user *pUser){
    FILE *fp = fopen("student.dat", "ab");
    if(fp == NULL || pUser == NULL){
        printf("ע��ʧ�ܣ�\n");
        return 0;
    }

    fwrite(pUser,sizeof(user),1,fp);
    printf("ע�ᣡ\n");

    fclose(fp);

    return 1;
}

void registerUser(){
    user *puser = creatUser();
    addUser(puser);


}


int login(){
    FILE *fp = fopen("student.dat", "rb");
    user ur;
    char uname[20],pword[20];
    printf("�������û���:\n");
    scanf("%s",uname);
    printf("����������:\n");
    scanf("%s",pword);
    user *p = pData;
    while(fread(&ur,sizeof(user), 1 ,fp)){
      if(strcmp(ur.userName , uname) == 0
            &&  strcmp(ur.password , pword) == 0){
          printf("��¼�ɹ���");
          return 1;    }
}

    printf("��¼ʧ�ܣ������µ�¼!\n");
    return 0;

}


void ShowMenu(){
         //system("cls");
         printf("-----------------------------��¼ϵͳ--------------------------------\n");
         printf("1.ע��   2.��¼");
         printf("\n-------------------------------------------------------------------------\n");
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
    initGame(SIZE);

}

