#include<stdio.h>
#include<string.h>
int main(){
   char userName[100];

   char content[100] ="����ӭ�μ��˹��������ֻᣬ����ص���ѧУ\
ͼ��ݱ�������ʱ������������9:00��";
   printf("�������û���:\n");
   gets(userName);
   strcat(userName,content);
   puts(userName);
   return 0;
}
