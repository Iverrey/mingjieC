//��4��3������ʽ�����3��4������ʽ����ĳ˻���������Ԫ�ص�ֵ�Ӽ������롣
#include <stdio.h>
int main(void)
{
    int i, j, k;
    int mat1[4][3];
    int mat2[3][4];
    int mat[4][4] = {0};

    puts("������4��3�о����ֵ��");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("mat1[%d][%d]:", i + 1, j + 1);
            scanf("%d", &mat1[i][j]);
        }
    }
    puts("������3��4�о����ֵ��");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("mat2[%d][%d]:", i + 1, j + 1);
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
            {
                mat[i][j] += mat1[j][k] * mat2[k][j];
            }
        }
    }

    printf("{ ");
    for (i = 0; i < 4; i++)
    {
        putchar('{');
        for (j = 0; j < 4; j++)
        {
            printf("%d", mat[i][j]);
            if (j < 3)
                printf(", ");
        }
        putchar('}');
        if (i < 3)
            printf(", ");
    }
    printf(" }");

    return 0;
}