#include<stdio.h>
#include<string.h>
int main(){
   char number[12];
   char encryptNumber[12];
   printf("�������ֻ�����:\n");
   gets(number);
   strcpy(encryptNumber,number);
   char * p = encryptNumber;
   int i = 0;
   for( i = 4; i < 8; i++){
     *(p+i) = '*';
   }

  printf("��ϵ��ʽΪ��%s", encryptNumber);

   return 0;
}
