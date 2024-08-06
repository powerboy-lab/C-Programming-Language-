#include<stdio.h>
#include<stdlib.h>

struct user{
   char userName[20];
   char password[20];
};
int main(){
    struct user ur;
    char uname[20];
    char pword[20];
    printf("Input userName and password:\n");
    scanf("%s%s", uname, pword);
    FILE *fp = fopen("demo.txt", "rb");
    if (fp != NULL){
        while(fread(&ur,sizeof(struct user), 1 ,fp)){
                if(strcmp(ur.userName , uname) == 0
                &&  strcmp(ur.password , pword) == 0){
                    printf("Login succeed!");
                }
        }

    }
    else{
        printf("Fail to open the file\n");
        exit(0);
    }
    fclose(fp);
    return 0;
}
