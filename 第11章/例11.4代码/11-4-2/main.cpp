#include <graphics.h>

int main()
{

        PIMAGE pimg;     //����һ������ͼƬ����
        PIMAGE pBirdimg;  //����һ��С��ͼƬ����

        initgraph(600, 480);

        pimg = newimage();
        pBirdimg = newimage();

        getimage(pimg, "res/bg.png");  // ���뱳��ͼƬ
        getimage(pBirdimg, "res/bird.png");   // ����С��ͼƬ

        putimage(0, 0, pimg);   // ��ʾ����ͼ
        putimage_withalpha(NULL, pBirdimg,0,150);

        getch();
        delimage(pimg);       // ���ٱ���ͼƬ
        delimage(pBirdimg);    // ����С��ͼƬ

        closegraph();
        return 0;
}

