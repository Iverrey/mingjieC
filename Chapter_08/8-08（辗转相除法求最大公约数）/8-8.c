//创建一个函数，使用辗转相除法求两个整数值x和y的最大公约数。
// int gcd(int x, int y){/*---*/}
#include <stdio.h>

int gcd(int x, int y)
{
    int len;
    int wei;
    int temp;

    (x > y) ? (len = x, wei = y) : (len = y, wei = x);
    (len % wei == 0) ? (temp = wei) : (temp = gcd(wei, len % wei));

    return temp;
}

int main(void)
{
    int x, y;

    puts("请输入两个整数。");
    printf("整数x:");
    scanf("%d", &x);
    printf("整数y:");
    scanf("%d", &y);

    printf("最大公约数是%d。\n", gcd(x, y));

    return 0;
}