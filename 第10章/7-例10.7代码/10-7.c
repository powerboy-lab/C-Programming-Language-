#include<stdio.h>
#include<stdlib.h>

struct user{
   char userName[20];
   char password[20];
};
int main(){
    struct user ur;
    FILE *fp = fopen("demo.txt", "rb");
    if (fp != NULL){
      fseek(fp,1L*sizeof(struct user), SEEK_SET);
      if(fread(&ur,sizeof(struct user), 1 ,fp) != 1){
         printf("Fail to write the file!\n");
    }
      else{
         printf("%s,%s\n",ur.userName,ur.password);
      }
    }
    else{
    printf("Fail to open the file\n");
         exit(0);
    }
    fclose(fp);
    return 0;
}
