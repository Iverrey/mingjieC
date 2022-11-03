//创建一个函数，返回int型整数的立方。
#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

int main(void)
{
    int nx;

    printf("请输入一个整数: ");
    scanf("%d", &nx);

    printf("该整数的立方是%d。\n", cube(nx));

    return 0;
}