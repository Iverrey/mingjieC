//�Դ����嵥4-18�ʹ����嵥4-19�еĳ�������޸ģ��ֱ���ʾ��ֱ�������Ϸ������Ϸ��ĵ���ֱ�������Ρ�
#include <stdio.h>
int main(void)
{
    int i, j, n;

    printf("�̱ߣ�");
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