#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("demo.txt", "r");
    char ch;
    if (fp != NULL){
       while( !feof(fp) )  // 判断文件是否结束
            printf("%c", fgetc(fp));     //从文件中读取字符并显示在屏幕上
    }
    else{
         printf("Fail to open the file\n");
         exit(0);
    }
    fclose(fp);
    return 0;
}
