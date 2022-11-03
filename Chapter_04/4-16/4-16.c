//输入一个整数值，显示该整数值以下的所有奇数。
#include <stdio.h>
int main(void)
{
    int no;
    int i;

    printf("整数值：");
    scanf("%d", &no);

    for (i = 1; i <= no; i += 2)
        printf("%d ", i);

    return 0;
}