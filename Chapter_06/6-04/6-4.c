//ʹ�ô����嵥6-3�е�sqr����������һ������������int���������Ĵ��ݡ�
#include <stdio.h>

int sqr(int n)
{
    return n * n;
}

int pow4(int n)
{
    return sqr(n) * sqr(n);
}

int main(void)
{
    int nx;

    printf("������һ������: ");
    scanf("%d", &nx);

    printf("���������Ĵ�����%d��\n", pow4(nx));

    return 0;
}
