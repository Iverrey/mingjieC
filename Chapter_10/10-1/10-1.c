//��д����adjust_point�����nָ���ֵС��0�������Ϊ0���������100�������Ϊ100�����಻�䣩��
#include <stdio.h>

void adjust_point(int *n)
{
    if (*n < 0)
        *n = 0;
    else if (*n > 100)
        *n = 100;
}

int main(void)
{
    int n;

    printf("������һ��������");
    scanf("%d", &n);

    adjust_point(&n);

    printf("�������ֵΪ%d��\n", n);

    return 0;
}