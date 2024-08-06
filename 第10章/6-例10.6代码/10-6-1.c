#include<stdio.h>
#include<stdlib.h>

struct user{
   char userName[20];
   char password[20];
};
int main(){
    struct user ur;
    printf("Input userName and password:\n");
    scanf("%s%s",ur.userName, ur.password);
    FILE *fp = fopen("demo.txt", "ab");
    if (fp != NULL){
            if(fwrite(&ur,sizeof(struct user), 1 ,fp) != 1)
                printf("Fail to write the file!\n");
    }
    else{
            printf("Fail to open the file\n");
            exit(0);
    }
    fclose(fp);
    return 0;
}
