//编写如下函数，求出从n个不同整数中取出r个整数的组合数C(n,r)。
// int combination(int n, int r){/*---*/}
#include <stdio.h>

int combination(int n, int r)
{
    int C;

    if (r == 0 || n == r)
        C = 1;
    else
        C = combination(n - 1, r - 1) + combination(n - 1, r);

    return C;
}

int main(void)
{
    int n, r;

    puts("请输入两个整数。");

    printf("整数n:");
    scanf("%d", &n);
    printf("整数r:");
    scanf("%d", &r);

    printf("C(%d,%d) = %d。\n", n, r, combination(n, r));

    return 0;
}