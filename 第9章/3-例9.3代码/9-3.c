#include<stdio.h>
#include<string.h>
int main(){
   char userName[100];

   char content[100] ="，欢迎参加人工智能研讨会，会议地点在学校\
图书馆报告厅，时间是明天上午9:00。";
   printf("请输入用户名:\n");
   gets(userName);
   strcat(userName,content);
   puts(userName);
   return 0;
}
