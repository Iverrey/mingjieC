//������������������е���Сֵ��
#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("����������������");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
        if (a < c)
            printf("��Сֵ�ǣ�%d\n", a);
        else
            printf("��Сֵ�ǣ�%d\n", c);
    else if (b < c)
        printf("��Сֵ�ǣ�%d\n", b);
    else
        printf("��Сֵ�ǣ�%d\n", c);

    return 0;
}