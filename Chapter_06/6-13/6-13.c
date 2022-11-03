//改写代码清单6-16的程序，将两次考试的分数存储在三维数组中。
#include <stdio.h>

void mat_add(const int a[2][4][3], int b[4][3])
{
    int i, j, k;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 3; j++)
            for (k = 0; k < 2; k++)
                b[i][j] += a[k][i][j];
}

void mat_print(const int m[4][3])
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%4d", m[i][j]);
        putchar('\n');
    }
}

int main(void)
{
    int tensu1[2][4][3] = {
        {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}},
        {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};
    int sum[4][3] = {0};

    mat_add(tensu1, sum);

    puts("第一次考试的分数");
    mat_print(tensu1[0]);
    puts("第二次考试的分数");
    mat_print(tensu1[1]);
    puts("总分");
    mat_print(sum);

    return 0;
}
