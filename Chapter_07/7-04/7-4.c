//编写set函数，返回将无符号整数x的第pos位设为1后的值。
//编写reset函数，返回将无符号整数x的第pos位设为0后的值。
//编写inverse函数，返回将无符号整数x的第pos位取反后的值。
#include <stdio.h>

unsigned set(unsigned x, int pos)
{
    return x | (1 << pos - 1);
}

unsigned reset(unsigned x, int pos)
{
    return x & ~(1 << pos - 1);
}

unsigned inverse(unsigned x, int pos)
{
    return x ^ (1 << pos - 1);
}

int main(void)
{
    unsigned x;
    int pos;

    printf("请输入一个无符号整数：");
    scanf("%u", &x);
    printf("请输入位数：");
    scanf("%d", &pos);

    printf("将第%d位设为1后的值为：%u\n", pos, set(x, pos));
    printf("将第%d位设为0后的值为：%u\n", pos, reset(x, pos));
    printf("将第%d位取反后的值为：%u\n", pos, inverse(x, pos));

    return 0;
}