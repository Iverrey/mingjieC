//�ֶ������º���ʽ�꣬�书��Ϊ����x��y�нϴ��ֵ��
#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main(void)
{
    int a, b;

    puts("����������������");
    printf("����a:");
    scanf("%d", &a);
    printf("����b:");
    scanf("%d", &b);

    printf("�ϴ��ֵ��%d��\n", max(a, b));

    return 0;
}