//编写一个程序，确认只要没有发生高位溢出，则
//无符号整数位左移后的值等于其乘以2的指数幂后的值。
//无符号整数位右移后的值等于其除以2的指数幂后的值。
#include <stdio.h>
int main(void)
{
    unsigned int i, j, k;

    printf("请输入一个整数：");
    scanf("%u", &i);

    printf("请输入左移位数：");
    scanf("%u", &j);

    printf("请输入右移位数：");
    scanf("%u", &k);

    printf("左移后的值为：%u\n", i << j);
    printf("右移后的值为：%u\n", i >> k);
    printf("乘以2的指数幂后的值为：%u\n", i * (1 << j));
    printf("除以2的指数幂后的值为：%u\n", i / (1 << k));

    return 0;
}