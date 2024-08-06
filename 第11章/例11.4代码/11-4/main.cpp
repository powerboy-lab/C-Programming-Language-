#include <graphics.h>
int main()
{

        PIMAGE pimg;     //声明一个img图片对象
        initgraph(600, 480);

        /*用newimage在initgraph后创建这个对象。
        但记得要在不使用的时候delimage*/
        pimg = newimage();

        /*导入对应的图像文件*/
        getimage(pimg, "res/bg.png");

        /*把img图像画在指定的坐标上，左上角对齐这个坐标*/
        putimage(0, 0, pimg);

        getch();
        delimage(pimg); // 销毁图像，释放内存
        closegraph();
        return 0;
}

