#include <graphics.h>

int main()
{
    initgraph(600, 480); //初始化为600*480大小

    //等待用户按键
    getch();

    //关闭图形界面
    closegraph();


    return 0;
}

