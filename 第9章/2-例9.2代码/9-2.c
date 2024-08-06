#include<stdio.h>
#include<string.h>
int main(){
   char password[20];
   int len;
   printf("请输入密码:\n");
   gets(password);
   len = strlen(password);
   if(len != 6){
     printf("密码长度不是6个字符!\n");
   }
   return 0;
}
