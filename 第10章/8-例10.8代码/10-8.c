#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("demo.txt", "r");
    char ch;
    if (fp != NULL){
       while( !feof(fp) )  // �ж��ļ��Ƿ����
            printf("%c", fgetc(fp));     //���ļ��ж�ȡ�ַ�����ʾ����Ļ��
    }
    else{
         printf("Fail to open the file\n");
         exit(0);
    }
    fclose(fp);
    return 0;
}
