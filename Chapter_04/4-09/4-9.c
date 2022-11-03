//交替显示+和-，总个数等于输入的正整数值
#include <stdio.h>
int main(void)
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    if (no > 0)
    {
        i = 1;
        while (i <= no)
        {
            if (i % 2)
                putchar('+');
            else
                putchar('-');
            i++;
        }
        printf("\n");
    }

    return 0;
}