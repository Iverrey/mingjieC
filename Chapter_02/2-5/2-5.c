//��дһ�γ��򣬶�ȡ����������ֵ�������ǰ���Ǻ��ߵİٷ�֮��������ʵ����������
#include <stdio.h>
int main(void)
{
    int a, b;
    puts("����������������");
    printf("����a��");
    scanf("%d", &a);
    printf("����b��");
    scanf("%d", &b);
    printf("a��b��%f%%��\n", (double)a / b * 100);

    return 0;
}