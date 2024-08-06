#include <graphics.h>

int main()
{
        initgraph(600, 480);

        int i  = 0;

        for(i = 0; i < 10; i++){
            line(100, 100 + 40 * i, 460, 100 + 40 * i); // ºáÏß
            line(100 + 40 * i, 100, 100 + 40 * i,460); // ÊúÏß
        }
        getch();
        closegraph();
        return 0;
}

