//修改代码清单5-13中的程序，将两次考试的分数存储在三维数组tensu中。
#include <stdio.h>
int main(void)
{
    int i, j, k;
    int tensu[2][4][3] = {
        {{91, 63, 78},
         {67, 72, 46},
         {89, 34, 53},
         {32, 54, 34}},
        {{97, 67, 82},
         {73, 43, 46},
         {97, 56, 21},
         {85, 46, 35}}};
    int sum[4][3] = {0};

    for (j = 0; j < 4; j++)
    {
        for (k = 0; k < 3; k++)
        {
            for (i = 0; i < 2; i++)
            {
                sum[j][k] += tensu[i][j][k];
            }
        }
    }

    for (i = 0; i < 2; i++)
    {
        printf("第%d次考试的分数\n", i + 1);
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%4d", tensu[i][j][k]);
            }
            putchar('\n');
        }
    }

    puts("总分");
    for (j = 0; j < 4; j++)
    {
        for (k = 0; k < 3; k++)
        {
            printf("%4d", sum[j][k]);
        }
        putchar('\n');
    }

    return 0;
}