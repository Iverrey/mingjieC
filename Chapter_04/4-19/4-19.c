//对代码清单4-15修改，在显示所输入的整数值的所有约数之后，显示约数的个数
#include <stdio.h>
int main(void)
{
    int i, n;

    printf("整数值：");
    scanf("%d", &n);
    /*
        for (i = 1; i <= n; i++)
            if (n % i == 0)
                printf("%d ", i);
        putchar('\n');
    */
    int count = 0;

    for (i = 1; i <= n; i++)
        if (n % i == 0)
        {
            printf("%d\n", i);
            count++;
        }
    printf("约数有%d个。", count);
    return 0;
}