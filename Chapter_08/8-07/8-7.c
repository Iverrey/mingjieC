//��д���º����������n����ͬ������ȡ��r�������������C(n,r)��
// int combination(int n, int r){/*---*/}
#include <stdio.h>

int combination(int n, int r)
{
    int C;

    if (r == 0 || n == r)
        C = 1;
    else
        C = combination(n - 1, r - 1) + combination(n - 1, r);

    return C;
}

int main(void)
{
    int n, r;

    puts("����������������");

    printf("����n:");
    scanf("%d", &n);
    printf("����r:");
    scanf("%d", &r);

    printf("C(%d,%d) = %d��\n", n, r, combination(n, r));

    return 0;
}