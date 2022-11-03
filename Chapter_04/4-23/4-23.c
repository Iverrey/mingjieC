//对代码清单4-18和代码清单4-19中的程序进行修改，分别显示出直角在左上方和右上方的等腰直角三角形。
#include <stdio.h>
int main(void)
{
    int i, j, n;

    printf("短边：");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 5; j >= i; j--)
            putchar('*');
        putchar('\n');
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < i - 1; j++)
            putchar(' ');
        for (j = 5; j >= i; j--)
            putchar('*');
        putchar('\n');
    }

    return 0;
}