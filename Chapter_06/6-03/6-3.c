//����һ������������int��������������
#include <stdio.h>

int cube(int n)
{
    return n * n * n;
}

int main(void)
{
    int nx;

    printf("������һ������: ");
    scanf("%d", &nx);

    printf("��������������%d��\n", cube(nx));

    return 0;
}