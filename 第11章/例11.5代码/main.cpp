#include <graphics.h>
#define PIPINTERVALWIDTH 120
int main()
{
       //����һ��imgͼƬ����
       PIMAGE pimg;
       PIMAGE pPipimg;

       initgraph(600, 480);

       //��newimage��initgraph�󴴽�������󡣵��ǵ�Ҫ�ڲ�ʹ�õ�ʱ��delimage
       pimg = newimage();
       pPipimg = newimage();
       getimage(pimg, "res/bg.png ");
       getimage(pPipimg, "res/pipe_up.png ");

       //��img����������ָ���������ϣ����ϽǶ����������
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

