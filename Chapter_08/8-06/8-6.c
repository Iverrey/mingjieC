//��ʹ�õݹ���õķ�ʽ��ʵ�ֺ���factorial��
#include <stdio.h>

int factorial(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main(void)
{
    int n;

    printf("������һ��������");
    scanf("%d", &n);
    printf("%d�Ľ׳���%d��\n", n, factorial(n));

    return 0;
}