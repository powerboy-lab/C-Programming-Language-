#include <graphics.h>
int main()
{

        PIMAGE pimg;     //����һ��imgͼƬ����
        initgraph(600, 480);

        /*��newimage��initgraph�󴴽��������
        ���ǵ�Ҫ�ڲ�ʹ�õ�ʱ��delimage*/
        pimg = newimage();

        /*�����Ӧ��ͼ���ļ�*/
        getimage(pimg, "res/bg.png");

        /*��imgͼ����ָ���������ϣ����ϽǶ����������*/
        putimage(0, 0, pimg);

        getch();
        delimage(pimg); // ����ͼ���ͷ��ڴ�
        closegraph();
        return 0;
}

