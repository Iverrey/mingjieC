//����������ĸ������е����ֵ����ʾ��
#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    puts("�������ĸ�������");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    int max;
    if (a > b)
        max = a;
    else
        max = b;
    if (max < c)
        max = c;
    if (max < d)
        max = d;

    printf("�����е����ֵ��%d��", max);

    return 0;
}