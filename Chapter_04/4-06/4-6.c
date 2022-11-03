//编写一段程序，按照升序显示出小于输入值的所有正偶数。
#include <stdio.h>
int main(void)
{
    int i, no;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    if (no > 0)
    {
        i = 2;
        while (i <= no)
        {
            printf("%d ", i);
            i += 2;
        }
        printf("\n");
    }

    return 0;
}