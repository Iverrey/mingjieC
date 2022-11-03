//编写一段程序，读取两个整数，然后输出它们的和以及积。
#include <stdio.h>
int main(void)
{
    puts("请输入两个整数。");
    printf("整数a：");
    int a;
    scanf("%d", &a);
    printf("整数b：");
    int b;
    scanf("%d", &b);
    printf("它们的和是%d，积是%d。", a + b, a * b);

    return 0;
}