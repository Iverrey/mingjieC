//现定义如下函数式宏，其功能为返回x、y中较大的值。
#include <stdio.h>

#define max(x, y) ((x) > (y) ? (x) : (y))

int main(void)
{
    int a, b;

    puts("请输入两个整数。");
    printf("整数a:");
    scanf("%d", &a);
    printf("整数b:");
    scanf("%d", &b);

    printf("较大的值是%d。\n", max(a, b));

    return 0;
}