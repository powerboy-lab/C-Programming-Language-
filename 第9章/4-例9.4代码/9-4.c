#include<stdio.h>
#include<string.h>
int main(){
   char password[20] = "000000";
   char newpwd[20];
   printf("请输入新密码:\n");
   gets(newpwd);
   strcpy(password,newpwd);
   printf("密码修改成功:\n");
   printf("新密码为：%s",password);

   return 0;
}
