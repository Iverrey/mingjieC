//���������������ж�����֮���С��ϵ
#include <stdio.h>
int main(void)
{
    int a, b;

    puts("����������������");
    printf("����A��");
    scanf("%d", &a);
    printf("����B��");
    scanf("%d", &b);

    if (a == b)
        puts("A��B��ȡ�");
    else if (a > b)
        puts("A����B��");
    else
        puts("AС��B��");

    return 0;
}