//������ʾ+��-���ܸ������������������ֵ
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
            if (i % 2)
                putchar('+');
            else
                putchar('-');
            i++;
        }
        printf("\n");
    }

    return 0;
}