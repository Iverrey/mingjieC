//读取一个正整数，显示其位数。
#include <stdio.h>
int main(void)
{
    int no;
    int temp;
    int digits = 0;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    temp = no;

    while (no > 0)
    {
        no /= 10;
        digits++;
    }

    printf("%d的位数是%d。\n", temp, digits);

    return 0;
}