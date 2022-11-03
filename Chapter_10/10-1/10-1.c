//编写函数adjust_point，如果n指向的值小于0，则将其改为0；如果大于100，则将其改为100（其余不变）。
#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0)
        *n = 0;
    else if (*n > 100)
        *n = 100;
}

int main(void)
{
    int n;

    printf("请输入一个整数：");
    scanf("%d", &n);

    adjust_point(&n);

    printf("调整后的值为%d。\n", n);

    return 0;
}