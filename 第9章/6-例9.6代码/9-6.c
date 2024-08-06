#include<stdio.h>

char *stringcopy(char *strDest, char *strSrc){
      char *p= NULL;
      if(strDest == NULL || strSrc == NULL){
           return NULL;
      }
      p = strDest;
      while(*strSrc != '\0'){
           *strDest = *strSrc;
            strDest++;
            strSrc++;
      }
      *strDest = '\0';
      return p;
}
int main(){
   char password[12];
   char newPassword[12];
   printf("«Î ‰»Î–¬√‹¬Î:\n");
   gets(newPassword);
   stringcopy (password, newPassword);

   printf("%s", password);

   return 0;
}
