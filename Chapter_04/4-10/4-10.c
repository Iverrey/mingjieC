//������ʾ*\n���ܸ������������������ֵ����������ֵС�ڵ���0����ʲôҲ����ʾ��
#include <stdio.h>
int main(void)
{
    int i, no;

    printf("������һ����������");
    scanf("%d", &no);

    if (no > 0)
    {
        i = 1;
        while (i <= no)
        {
            putchar('*');
            putchar('\n');
            i++;
        }
    }

    return 0;
}