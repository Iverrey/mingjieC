//��1��n�ĺ͡�n��ֵ�Ӽ������롣
#include <stdio.h>
int main(void)
{
    int i, n;
    int sum = 0;

    printf("������һ����������");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        sum += i;

    printf("1��%d�ĺ���%d��\n", n, sum);

    return 0;
}