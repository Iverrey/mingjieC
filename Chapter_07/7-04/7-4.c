//��дset���������ؽ��޷�������x�ĵ�posλ��Ϊ1���ֵ��
//��дreset���������ؽ��޷�������x�ĵ�posλ��Ϊ0���ֵ��
//��дinverse���������ؽ��޷�������x�ĵ�posλȡ�����ֵ��
#include <stdio.h>

unsigned set(unsigned x, int pos)
{
    return x | (1 << pos - 1);
}

unsigned reset(unsigned x, int pos)
{
    return x & ~(1 << pos - 1);
}

unsigned inverse(unsigned x, int pos)
{
    return x ^ (1 << pos - 1);
}

int main(void)
{
    unsigned x;
    int pos;

    printf("������һ���޷���������");
    scanf("%u", &x);
    printf("������λ����");
    scanf("%d", &pos);

    printf("����%dλ��Ϊ1���ֵΪ��%u\n", pos, set(x, pos));
    printf("����%dλ��Ϊ0���ֵΪ��%u\n", pos, reset(x, pos));
    printf("����%dλȡ�����ֵΪ��%u\n", pos, inverse(x, pos));

    return 0;
}