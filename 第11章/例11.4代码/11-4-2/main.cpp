#include <graphics.h>

int main()
{

        PIMAGE pimg;     //声明一个背景图片对象
        PIMAGE pBirdimg;  //声明一个小鸟图片对象

        initgraph(600, 480);

        pimg = newimage();
        pBirdimg = newimage();

        getimage(pimg, "res/bg.png");  // 导入背景图片
        getimage(pBirdimg, "res/bird.png");   // 导入小鸟图片

        putimage(0, 0, pimg);   // 显示背景图
        putimage_withalpha(NULL, pBirdimg,0,150);

        getch();
        delimage(pimg);       // 销毁背景图片
        delimage(pBirdimg);    // 销毁小鸟图片

        closegraph();
        return 0;
}

