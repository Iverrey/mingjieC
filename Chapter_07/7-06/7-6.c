//��д����ȷ�϶��޷�������ִ���������㲻�ᷢ�����������
#include <stdio.h>
#include <limits.h>

int main(void)
{
    unsigned x = 0;
    unsigned y = 0;
    unsigned z = 0;

    printf("������һ���޷���������");
    scanf("%u", &x);
    printf("������һ���޷���������");
    scanf("%u", &y);

    z = x + y;

    signed a = 3000000000, b = 3000000000;

    printf("x + y = %u\n", z);
    printf("a + b = %d\n", a + b);

    return 0;
}