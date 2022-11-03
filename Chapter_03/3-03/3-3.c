//输出一个整数的绝对值
#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数：");
    scanf("%d", &no);

    if (no >= 0)
        printf("绝对值是：%d\n", no);
    else
        printf("绝对值是：%d\n", -no);

    return 0;
}