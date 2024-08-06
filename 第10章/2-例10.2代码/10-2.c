#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("demo.txt", "w");
    char ch;
    if (fp != NULL){
    while( (ch = getchar()) != '#')
        fputc(ch, fp);
    }
    else{
        printf("Fail to open the file\n");
        exit(0);
    }
    fclose(fp);
    return 0;
}
