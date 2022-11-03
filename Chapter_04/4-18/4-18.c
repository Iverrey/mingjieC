//输入一个整数值，显示该整数值个'*'。每显示5个就换行。
#include <stdio.h>
int main(void)
{
    int no;
    int i;

    printf("整数值：");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {
        printf("*");
        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}