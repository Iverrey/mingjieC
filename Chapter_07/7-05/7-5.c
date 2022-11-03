//��дset_n�����������޷�������x��posλ����pos+n-1λ��nλ��Ϊ1���ֵ��
//��дreset_n�����������޷�������x��posλ����nλ��Ϊ0���ֵ��
//��дinverse_n�����������޷�������x��posλ����nλȡ�����ֵ��
#include <stdio.h>

unsigned set_n(unsigned x, int pos, int n)
{
    return x | (~(~0 << n) << pos - 1);
}

unsigned reset_n(unsigned x, int pos, int n)
{
    return x & ~((~(~0 << n) << pos - 1));
}

unsigned inverse_n(unsigned x, int pos, int n)
{
    return x ^ (~(~0 << n) << pos - 1); //���ʵ��λȡ��
}

int main(void)
{
    unsigned x;
    int pos, n;

    printf("������һ���޷���������");
    scanf("%u", &x);
    printf("������λ����");
    scanf("%d", &pos);
    printf("������λ����");
    scanf("%d", &n);

    printf("����%dλ����%dλ��Ϊ1���ֵΪ��%u\n", pos, pos + n - 1, set_n(x, pos, n));
    printf("����%dλ����%dλ��Ϊ0���ֵΪ��%u\n", pos, pos + n - 1, reset_n(x, pos, n));
    printf("����%dλ����%dλȡ�����ֵΪ��%u\n", pos, pos + n - 1, inverse_n(x, pos, n));

    return 0;
}