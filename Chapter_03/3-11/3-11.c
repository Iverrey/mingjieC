//�����������������֮��Ĳ�ֵ�Ƿ���ڵ���11����С�ڵ���10.
#include <stdio.h>
int main(void)
{
    int a, b;
    puts("����������������");
    printf("����A:");
    scanf("%d", &a);
    printf("����B:");
    scanf("%d", &b);
    if (a - b <= 10 && a - b >= -10)
        puts("���ǵĲ�С�ڵ���10��");
    else
        puts("���ǵĲ���ڵ���11��");

    return 0;
}