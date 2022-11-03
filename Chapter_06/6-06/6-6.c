//创建一个函数，连续发出b次响铃。
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

    printf("请输入一个整数: ");
    scanf("%d", &nx);

    alert(nx);

    return 0;
}