//��ʾ������������Ϊ�߳���������
#include <stdio.h>
int main(void)
{
    int i, j, n;

    printf("�������м��㣺");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            printf("*");
        putchar('\n');
    }

    return 0;
}