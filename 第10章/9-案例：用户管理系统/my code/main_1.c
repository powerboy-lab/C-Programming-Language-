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
        printf("内存申请失败!\n");
        return NULL;
    }


    printf("请输入用户名:\n");
    scanf("%s",puser->userName);
    while(isSameName(puser->userName)){
        printf("用户名已存在，请重新输入用户名:\n");
        scanf("%s",puser->userName);

    }
    printf("请输入密码:\n");
    scanf("%s",puser->password);

    return puser;

}

int addUser(user *pUser){
    FILE *fp = fopen("student.dat", "ab");
    if(fp == NULL || pUser == NULL){
        printf("注册失败！\n");
        return 0;
    }

    fwrite(pUser,sizeof(user),1,fp);
    printf("注册！\n");

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
    printf("请输入用户名:\n");
    scanf("%s",uname);
    printf("请输入密码:\n");
    scanf("%s",pword);
    user *p = pData;
    while(fread(&ur,sizeof(user), 1 ,fp)){
      if(strcmp(ur.userName , uname) == 0
            &&  strcmp(ur.password , pword) == 0){
          printf("登录成功！");
          return 1;    }
}

    printf("登录失败，请重新登录!\n");
    return 0;

}


void ShowMenu(){
         //system("cls");
         printf("-----------------------------登录系统--------------------------------\n");
         printf("1.注册   2.登录");
         printf("\n-------------------------------------------------------------------------\n");
}




int main(){
    //register();
    int mode;
    int islogin = 0;
    while(islogin == 0){
        ShowMenu();
        printf("请选择需要的操作：\n");
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
            printf("选择操作错误，请重新选择：\n");
        }
    }
    initGame(SIZE);

}

