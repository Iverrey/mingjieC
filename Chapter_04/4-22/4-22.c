//�Դ����嵥4-17�еĳ�������޸ģ���ʾ��һ������ϳ��ĳ����Ρ�
#include <stdio.h>
int main(void)
{
    int i, j, c1, c2;

    puts("����������һ��������");
    printf("һ�ߣ�");
    scanf("%d", &c1);
    printf("��һ�ߣ�");
    scanf("%d", &c2);

    if (c1 > c2)
    {
        int temp = c1;
        c1 = c2;
        c2 = temp;
    }

    for (i = 1; i <= c1; i++)
    {
        for (j = 1; j <= c2; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}