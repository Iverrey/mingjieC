//编写一段程序，读取两个整数的值，计算出前者是后者的百分之几，并用实数输出结果。
#include <stdio.h>
int main(void)
{
    int a, b;
    puts("请输入两个整数：");
    printf("整数a：");
    scanf("%d", &a);
    printf("整数b：");
    scanf("%d", &b);
    printf("a是b的%f%%。\n", (double)a / b * 100);

    return 0;
}