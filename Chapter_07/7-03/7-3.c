//��дrrotate�����������޷�������x����nλ���ֵ��
//��дlrotate�����������޷�������x����nλ���ֵ��
#include <stdio.h>

int rrotate(unsigned x, int n)
{
    return (x >> n) | (x << (32 - n));
}

int lrotate(unsigned x, int n)
{
    return (x << n) | (x >> (32 - n));
}

int main(void)
{
    unsigned x;
    int n;

    printf("������һ���޷���������");
    scanf("%u", &x);
    printf("�������ƶ�λ����");
    scanf("%d", &n);

    printf("����%dλ���ֵΪ��%u\n", n, rrotate(x, n));
    printf("����%dλ���ֵΪ��%u\n", n, lrotate(x, n));

    return 0;
}