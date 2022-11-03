//编写一段程序，显示读取的实数的值。
#include <stdio.h>
int main(void)
{
    printf("请输入一个实数：");
    double x;
    scanf("%lf", &x);
    printf("你输入的是%.6f。", x);

    return 0;
}