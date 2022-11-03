//不使用递归调用的方式来实现函数factorial。
#include <stdio.h>

int factorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main(void)
{
    int n;

    printf("请输入一个整数：");
    scanf("%d", &n);
    printf("%d的阶乘是%d。\n", n, factorial(n));

    return 0;
}