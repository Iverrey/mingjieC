//连续显示*\n，总个数等于所输入的整数值。如果输入的值小于等于0，则什么也不显示。
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
            putchar('*');
            putchar('\n');
            i++;
        }
    }

    return 0;
}