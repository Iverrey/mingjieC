//编写一段程序，显示读取到的三个整数的和。
#include <stdio.h>
int main(void)
{
    puts("请输入三个整数。");
    printf("整数1：");
    int a;
    scanf("%d", &a);
    printf("整数2：");
    int b;
    scanf("%d", &b);
    printf("整数3：");
    int c;
    scanf("%d", &c);
    printf("它们的和是%d。", a + b + c);

    return 0;
}