#include <stdio.h>
#include <limits.h>

int main()
{
    int a = 1000000000; // һ���Ǹ�����
    int b = 2000000000; // ��һ���Ǹ�����
    if (b > INT_MAX - a) // �ж��Ƿ�����
    {
        printf("a + b will overflow\n"); // �����ʾ��Ϣ
    }
    else
    {
        printf("a + b will not overflow\n"); // �����ʾ��Ϣ
        printf("a + b = %d\n", a + b); // �����ȷ�Ľ��
    }
    return 0;
}
