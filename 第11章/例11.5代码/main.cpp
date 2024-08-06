#include <graphics.h>
#define PIPINTERVALWIDTH 120
int main()
{
       //声明一个img图片对象
       PIMAGE pimg;
       PIMAGE pPipimg;

       initgraph(600, 480);

       //用newimage在initgraph后创建这个对象。但记得要在不使用的时候delimage
       pimg = newimage();
       pPipimg = newimage();
       getimage(pimg, "res/bg.png ");
       getimage(pPipimg, "res/pipe_up.png ");

       //把img整个，画在指定的坐标上，左上角对齐这个坐标
       putimage(0, 0, pimg);
       int y[5] = {-40, -50,-80,-30,-10};

       int i;
       for( i = 0; i < 5; i++){
            putimage_withalpha(NULL, pPipimg, PIPINTERVALWIDTH * i,y[i]);
       }
       getch();
       delimage(pimg);
       delimage(pPipimg);
       closegraph();
       return 0;
}

