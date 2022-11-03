//用条件运算符替换练习3-6中的if语句，实现同样的功能。
#include <stdio.h>
int main(void)
{
    int a, b, c;

    puts("请输入三个整数。");
    scanf("%d%d%d", &a, &b, &c);

    int min;

    min = (a < b) ? a : b;
    min = (c < min) ? c : min;

    printf("最小值为%d。\n", min);

    return 0;
}