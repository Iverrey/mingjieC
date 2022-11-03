//编写程序确认对无符号整数执行算术运算不会发生数据溢出。
#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned x = 0;
    unsigned y = 0;
    unsigned z = 0;

    printf("请输入一个无符号整数：");
    scanf("%u", &x);
    printf("请输入一个无符号整数：");
    scanf("%u", &y);

    z = x + y;

    signed a = 3000000000, b = 3000000000;

    printf("x + y = %u\n", z);
    printf("a + b = %d\n", a + b);

    return 0;
}