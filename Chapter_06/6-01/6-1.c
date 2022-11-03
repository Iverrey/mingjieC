//创建一个函数，返回两个int型整数中较小一数的值。
#include <stdio.h>

int min2(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main(void)
{
    int na, nb;

    puts("请输入两个整数。");
    printf("整数A: ");
    scanf("%d", &na);
    printf("整数B: ");
    scanf("%d", &nb);

    printf("较小的值是%d。\n", min2(na, nb));

    return 0;
}