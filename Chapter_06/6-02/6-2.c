//����һ����������������int�������е���Сֵ��
#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;
    if (b < min)
        min = b;
    if (c < min)
        min = c;
    return min;
}

int main(void)
{
    int na, nb, nc;

    puts("����������������");
    printf("����A: ");
    scanf("%d", &na);
    printf("����B: ");
    scanf("%d", &nb);
    printf("����C: ");
    scanf("%d", &nc);

    printf("��С��ֵ��%d��\n", min3(na, nb, nc));

    return 0;
}