//����һ����������������b�����塣
#include <stdio.h>

void alert(int n)
{
    int i;
    for (i = 1; i <= n; i++)
        putchar('\a');
}

int main(void)
{
    int nx;

    printf("������һ������: ");
    scanf("%d", &nx);

    alert(nx);

    return 0;
}