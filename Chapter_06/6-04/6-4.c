//使用代码清单6-3中的sqr函数创建另一个函数，返回int型整数的四次幂。
#include <stdio.h>

int sqr(int n)
{
    return n * n;
}

int pow4(int n)
{
    return sqr(n) * sqr(n);
}

int main(void)
{
    int nx;

    printf("请输入一个整数: ");
    scanf("%d", &nx);

    printf("该整数的四次幂是%d。\n", pow4(nx));

    return 0;
}
