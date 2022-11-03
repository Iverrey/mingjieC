//对代码清单4-17中的程序进行修改，显示出一个横向较长的长方形。
#include <stdio.h>
int main(void)
{
    int i, j, c1, c2;

    puts("让我们来画一个长方形");
    printf("一边：");
    scanf("%d", &c1);
    printf("另一边：");
    scanf("%d", &c2);

    if (c1 > c2)
    {
        int temp = c1;
        c1 = c2;
        c2 = temp;
    }

    for (i = 1; i <= c1; i++)
    {
        for (j = 1; j <= c2; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}