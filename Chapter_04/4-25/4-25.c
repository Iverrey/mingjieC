//显示输入整数层的向下的金字塔形状。第i行显示i%10的结果
#include <stdio.h>
int main(void)
{
    int i, j, k, n;
    printf("请输入一个整数：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i - 1; j++)
            printf(" ");
        for (k = 2 * (n - i); k >= 0; k--)
            printf("%d", i % 10);
        printf("\n");
    }

    return 0;
}