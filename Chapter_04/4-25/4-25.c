//��ʾ��������������µĽ�������״����i����ʾi%10�Ľ��
#include <stdio.h>
int main(void)
{
    int i, j, k, n;
    printf("������һ��������");
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