//计算输入的三个整数中的最小值。
#include <stdio.h>
int main(void)
{
    int a, b, c;
    printf("请输入三个整数：");
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
        if (a < c)
            printf("最小值是：%d\n", a);
        else
            printf("最小值是：%d\n", c);
    else if (b < c)
        printf("最小值是：%d\n", b);
    else
        printf("最小值是：%d\n", c);

    return 0;
}