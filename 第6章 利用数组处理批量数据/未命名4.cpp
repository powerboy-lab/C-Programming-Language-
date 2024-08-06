#include <stdio.h>
#include <limits.h>

int main()
{
    int a = 1000000000; // 一个非负整数
    int b = 2000000000; // 另一个非负整数
    if (b > INT_MAX - a) // 判断是否会溢出
    {
        printf("a + b will overflow\n"); // 输出提示信息
    }
    else
    {
        printf("a + b will not overflow\n"); // 输出提示信息
        printf("a + b = %d\n", a + b); // 输出正确的结果
    }
    return 0;
}
