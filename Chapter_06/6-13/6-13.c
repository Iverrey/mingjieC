//��д�����嵥6-16�ĳ��򣬽����ο��Եķ����洢����ά�����С�
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

    puts("��һ�ο��Եķ���");
    mat_print(tensu1[0]);
    puts("�ڶ��ο��Եķ���");
    mat_print(tensu1[1]);
    puts("�ܷ�");
    mat_print(sum);

    return 0;
}
