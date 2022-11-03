//编写set_n函数，返回无符号整数x的pos位到第pos+n-1位的n位设为1后的值。
//编写reset_n函数，返回无符号整数x的pos位到第n位设为0后的值。
//编写inverse_n函数，返回无符号整数x的pos位到第n位取反后的值。
#include <stdio.h>

unsigned set_n(unsigned x, int pos, int n)
{
    return x | (~(~0 << n) << pos - 1);
}

unsigned reset_n(unsigned x, int pos, int n)
{
    return x & ~((~(~0 << n) << pos - 1));
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    return x ^ (~(~0 << n) << pos - 1); //异或实现位取反
}

int main(void)
{
    unsigned x;
    int pos, n;

    printf("请输入一个无符号整数：");
    scanf("%u", &x);
    printf("请输入位数：");
    scanf("%d", &pos);
    printf("请输入位数：");
    scanf("%d", &n);

    printf("将第%d位到第%d位设为1后的值为：%u\n", pos, pos + n - 1, set_n(x, pos, n));
    printf("将第%d位到第%d位设为0后的值为：%u\n", pos, pos + n - 1, reset_n(x, pos, n));
    printf("将第%d位到第%d位取反后的值为：%u\n", pos, pos + n - 1, inverse_n(x, pos, n));

    return 0;
}