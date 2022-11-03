//创建一个函数，将4行3列矩阵a和3行4列矩阵b的乘积，存储在4行4列矩阵c中。
#include <stdio.h>

void mat_mul(const int a[4][3], const int b[3][4], int c[4][4])
{
    int i, j, k;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 3; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main(void)
{
    int i, j;
    int a[4][3], b[3][4], c[4][4];

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    mat_mul(a, b, c);

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d", c[i][j]);
        putchar('\n');
    }

    return 0;
}