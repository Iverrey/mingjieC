//编写一段程序，显示读取到的两个整数的乘积。
#include <stdio.h>
int main(void)
{
    puts("请输入两个整数。");
    printf("整数1：");
    int a;
    scanf("%d", &a);
    printf("整数2：");
    int b;
    scanf("%d", &b);
    printf("它们的积是%d。", a * b);

    return 0;
}