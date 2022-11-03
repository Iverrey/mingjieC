//请定义一个函数式宏diff(x,y)，返回x、y二值之差。
#include <stdio.h>

#define diff(x, y) ((x) > (y) ? (x) - (y) : (y) - (x))

int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    printf("整数a:");
    scanf("%d", &a);
    printf("整数b:");
    scanf("%d", &b);

    printf("它们的差是%d。\n", diff(a, b));

    return 0;
}