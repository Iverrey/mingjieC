//����һ������������1��n֮�����������ĺ͡�
#include <stdio.h>

int sumup(int n)
{
    int i;
    int sum = 0;
    for (i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main(void)
{
    int nx;

    printf("������һ������: ");
    scanf("%d", &nx);

    printf("1��%d֮�����������ĺ���%d��\n", nx, sumup(nx));

    return 0;
}