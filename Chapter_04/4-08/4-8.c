//��д�����嵥4-8�ĳ��򣬵�����С��1ʱ�����뻻�з���
#include <stdio.h>
int main(void)
{
    int no;

    printf("��������");
    scanf("%d", &no);
    /*
        while (no-- > 0)
            putchar('*');
        putchar('\n');
    */
    if (no > 0)
    {
        while (no-- > 0)
            putchar('*');
        putchar('\n');
    }

    return 0;
}