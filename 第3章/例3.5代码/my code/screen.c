#include"screen.h"


#define true 1
#define screenMaxsize 24




/*
  Analog electronic screen project
  Created by xushu on 2021/7/30

*/


int screensize = 8;

char screenValue[screenMaxsize][screenMaxsize];

/*���ô���λ�úʹ�С*/
void console()
{
    SetConsoleTitle("Screen");
    HANDLE hConsole  = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO bInfo;
    GetConsoleScreenBufferInfo(hConsole , &bInfo );// ��ȡ���ڻ�������Ϣ
    COORD size = {80, 40};
    SetConsoleScreenBufferSize(hConsole ,size); // ���û�������С
    SMALL_RECT rect = {0,0, 120, 60};
    SetConsoleWindowInfo(hConsole ,1 ,&rect);// ���ô��ڴ�С��λ��
    CONSOLE_CURSOR_INFO cursorInfo = {1, 0};
    SetConsoleCursorInfo(hConsole , &cursorInfo);
}



/*���ù��λ��*/
void gotoxy(int x,int y)
{
    COORD  pos = {x,y};
    HANDLE handle;
    handle=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(handle,pos);


    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible = 0;
    cursor.dwSize = sizeof(cursor);
    SetConsoleCursorInfo(handle, &cursor);
}

/*��ʼ����Ļ*/
void initScreen(){

    int i ,j = 0;

    for(i = 0; i < screenMaxsize; i++){
        for(j = 0 ; j < screenMaxsize; j++){
            screenValue[i][j]  = 0;

        }

    }

}

/*����ĳ��ĳ�еĵ�*/
void turnOn(int row, int col){

     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_INTENSITY);
     gotoxy(2 + 2 * col, 1 + row);
     printf("��");
     screenValue[row][col] = 1;

     gotoxy(20,1 + screenMaxsize);

}

/*�ر�ĳ��ĳ�еĵ�*/
void turnOff(int row, int col){
     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
     gotoxy(2 + 2 * col, 1 + row);
     screenValue[row][col] = 0;
     printf("��");
     gotoxy(20, 1+ screenMaxsize);


}

/*��ʾ��Ļ*/
void showScreen(){
    gotoxy(0,0);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);
    int i ,j = 0;
    printf("  ");
    for(i = 0; i < screensize; i++){
       if(i < 10)
            printf("%d ",i);
       else{
            printf("%d",i);
       }

    }

    printf("\n");
    for(i = 0; i < screensize; i++){

        printf("%d\n",i);

    }


    printf("\n");

    for( i = 0; i < screensize; i++){
        for(j = 0; j < screensize;j++)
        if(screenValue[i][j]  != 0){

           turnOn(i,j);

        }
        else{
           turnOff(i, j);
        }
    }
     printf("\n");

}


/*��ʼ����Ļ*/
void initGame(int n){
    system("cls");
    console();
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED|FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_INTENSITY);

    if(n < screenMaxsize)
        screensize = n;
    else{
         screensize = screenMaxsize;
    }
    initScreen();
    showScreen();



}



/*����*/

void clearScreen(){

    int i = 0;
    int j = 0;


    Sleep(500);






    for( i = 0; i < screensize; i++){
        for(j = 0; j < screensize;j++)
        if(screenValue[i][j] != 0){
           turnOff(i, j);
        }

    }
    initScreen();





}




/*��ü�ֵ*/

char getKey(){
    char key = 0;

    if (kbhit()) //��⣬����а�����ִ��if�����
    {
        key = getch();//���񰴼�

    }

    return key;

}
