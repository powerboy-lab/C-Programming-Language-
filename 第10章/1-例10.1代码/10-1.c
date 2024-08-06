
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("demo.txt", "r");
    char ch;
    if (fp != NULL){
            if( (ch = fgetc(fp)) != EOF)
                printf("%c", ch);
    }
    else{
            printf("Fail to open the file\n");
            exit(0);
    }
    fclose(fp);
    return 0;
}
