//显示以所输入整数为边长的正方形
#include <stdio.h>
int main(void)
{
    int i, j, n;

    printf("正方形有几层：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("*");
        putchar('\n');
    }

    return 0;
}