#include <graphics.h>

int main()
{
        initgraph(600, 480);
        line(100, 100, 200, 100);  //画一直线，从(100,100)到(200,100)

        getch();
        closegraph();
        return 0;
}

