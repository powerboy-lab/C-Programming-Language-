#include<stdio.h>
#include<string.h>
int main(){
   char password[20] = "000000";
   char newpwd[20];
   printf("������������:\n");
   gets(newpwd);
   strcpy(password,newpwd);
   printf("�����޸ĳɹ�:\n");
   printf("������Ϊ��%s",password);

   return 0;
}
