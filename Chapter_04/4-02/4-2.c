//读取两个整数的值，然后计算它们之间所有整数的和。
#include <stdio.h>
int main(void)
{
    int a, b, min, max, sum = 0;

    puts("请输入两个整数。");
    printf("整数A:");
    scanf("%d", &a);
    printf("整数B:");
    scanf("%d", &b);

    if (a > b)
    {
        max = a;
        min = b;
        do
        {
            sum += a;
            a--;
        } while (a >= b);
    }
    else
    {
        max = b;
        min = a;
        do
        {
            sum += a;
            a++;
        } while (a <= b);
    }
    printf("大于等于%d小于等于%d的所有整数的和是%d。\n", min, max, sum);

    return 0;
}