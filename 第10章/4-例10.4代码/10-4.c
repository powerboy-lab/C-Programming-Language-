#include<stdio.h>
#include<stdlib.h>
int main(){
    int bestScore = 100;
    FILE *fp = fopen("demo.txt", "w");
    if (fp != NULL){
         fprintf(fp,"%d", bestScore);
    }
    else{
         printf("Fail to open the file\n");
         exit(0);
    }
    fclose(fp);
    return 0;
}
