//输入一个整数，显示出输入整数层的金字塔形状。
#include <stdio.h>
int main(void)
{
    int i, j, k, n;
    printf("请输入一个整数：");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf(" ");
        for (k = 1; k <= 2 * i - 1; k++)
            printf("*");
        printf("\n");
    }
    return 0;
}