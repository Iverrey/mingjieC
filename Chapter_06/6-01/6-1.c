//����һ����������������int�������н�Сһ����ֵ��
#include <stdio.h>

int min2(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

int main(void)
{
    int na, nb;

    puts("����������������");
    printf("����A: ");
    scanf("%d", &na);
    printf("����B: ");
    scanf("%d", &nb);

    printf("��С��ֵ��%d��\n", min2(na, nb));

    return 0;
}