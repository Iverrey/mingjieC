//ʹ��if����滻�����嵥3-15�����е������������ʵ��ͬ���Ĺ��ܡ�
#include <stdio.h>
int main(void)
{
    int n1, n2;

    puts("����������������");
    printf("����1��");
    scanf("%d", &n1);
    printf("����2��");
    scanf("%d", &n2);

    // printf("���ǵĲ���%d��\n", (n1 > n2) ? n1 - n2 : n2 - n1);

    if (n1 > n2)
        printf("���ǵĲ���%d��\n", n1 - n2);
    else
        printf("���ǵĲ���%d��\n", n2 - n1);

    return 0;
}