//如果将代码清单3-9最后的else变为else if (no < 0)，则会发生什么情况？
#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no == 0)
        puts("该整数为0。");
    else if (no > 0)
        puts("该整数为正数。");
    // else
    else if (no < 0)
        puts("该整数为负数。");

    return 0;
}