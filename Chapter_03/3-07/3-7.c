//计算输入的四个整数中的最大值并显示。
#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    puts("请输入四个整数。");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int max;
    if (a > b)
        max = a;
    else
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;

    printf("它们中的最大值是%d。", max);

    return 0;
}