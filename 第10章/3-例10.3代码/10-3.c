#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("demo.txt", "w");
    if (fp != NULL){
       fputs("hello,world!\n",fp);
    }
    else{
    printf("Fail to open the file\n");
         exit(0);
    }
    fclose(fp);
    return 0;
}
