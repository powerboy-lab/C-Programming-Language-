#include<stdio.h>
#include<string.h>
int main(){
   char password[20];
   int len;
   printf("����������:\n");
   gets(password);
   len = strlen(password);
   if(len != 6){
     printf("���볤�Ȳ���6���ַ�!\n");
   }
   return 0;
}
