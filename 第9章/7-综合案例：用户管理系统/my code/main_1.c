#include"screen.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct tagUser{
    char userName[20];
    char password[20];
    struct tagUser *next;
} user;


user  *pData; // 用户信息链表


/* 判断新注册的用户名是否已被使用*/
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


/* 新建用户结点*/
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
    puser->next = NULL;

    return puser;

}


/* 将新用户结点新增到链表之中*/
int addUser(user *pUser){
    user *p = pData;
    if(pUser == NULL){
        printf("注册失败！\n");
        return 0;
    }

    if(p == NULL){
        pData = pUser;
        printf("注册成功！\n");
        return 1;
    }

    while(p->next != NULL){
        p = p->next;
    }
    p->next = pUser;

    return 1;
}

/* 注册功能*/
void registerUser(){
    user *puser = creatUser();
    addUser(puser);
}

/*登录功能*/
int login(){
    char uname[20],pword[20];
    printf("请输入用户名:\n");
    scanf("%s",uname);
    printf("请输入密码:\n");
    scanf("%s",pword);
    user *p = pData;
    while(p != NULL){
        if(strcmp(p->userName,uname)== 0 &&
strcmp(p->password,pword)== 0){
            return 1;
        }

        p = p->next;
    }
    printf("登录失败，请重新登录!\n");
    return 0;

}

/* 登录系统界面*/
void ShowMenu(){
         printf("--------------------------登录系统--------------------------------\n");
         printf("1.注册   2.登录");
         printf("\n--------------------------------------------------------------------\n");
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
    initGame(8);

}

