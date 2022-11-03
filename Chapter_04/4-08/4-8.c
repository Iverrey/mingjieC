//改写代码清单4-8的程序，当输入小于1时不输入换行符。
#include <stdio.h>
int main(void)
{
    int no;

    printf("正整数：");
    scanf("%d", &no);
    /*
        while (no-- > 0)
            putchar('*');
        putchar('\n');
    */
    if (no > 0)
    {
        while (no-- > 0)
            putchar('*');
        putchar('\n');
    }

    return 0;
}