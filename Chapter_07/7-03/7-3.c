//编写rrotate函数，返回无符号整数x右移n位后的值。
//编写lrotate函数，返回无符号整数x左移n位后的值。
#include <stdio.h>

int rrotate(unsigned x, int n)
{
    return (x >> n) | (x << (32 - n));
}

int lrotate(unsigned x, int n)
{
    return (x << n) | (x >> (32 - n));
}

int main(void)
{
    unsigned x;
    int n;

    printf("请输入一个无符号整数：");
    scanf("%u", &x);
    printf("请输入移动位数：");
    scanf("%d", &n);

    printf("右移%d位后的值为：%u\n", n, rrotate(x, n));
    printf("左移%d位后的值为：%u\n", n, lrotate(x, n));

    return 0;
}