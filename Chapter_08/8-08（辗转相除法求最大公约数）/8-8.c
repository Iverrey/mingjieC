//����һ��������ʹ��շת���������������ֵx��y�����Լ����
// int gcd(int x, int y){/*---*/}
#include <stdio.h>

int gcd(int x, int y)
{
    int len;
    int wei;
    int temp;

    (x > y) ? (len = x, wei = y) : (len = y, wei = x);
    (len % wei == 0) ? (temp = wei) : (temp = gcd(wei, len % wei));

    return temp;
}

int main(void)
{
    int x, y;

    puts("����������������");
    printf("����x:");
    scanf("%d", &x);
    printf("����y:");
    scanf("%d", &y);

    printf("���Լ����%d��\n", gcd(x, y));

    return 0;
}