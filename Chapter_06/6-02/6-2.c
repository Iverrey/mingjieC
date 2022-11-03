//创建一个函数，返回三个int型整数中的最小值。
#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}

int main(void)
{
    int na, nb, nc;

    puts("请输入三个整数。");
    printf("整数A: ");
    scanf("%d", &na);
    printf("整数B: ");
    scanf("%d", &nb);
    printf("整数C: ");
    scanf("%d", &nc);

    printf("最小的值是%d。\n", min3(na, nb, nc));

    return 0;
}