//循环显示1234567890，显示的位数和输入的整数值相等。
#include <stdio.h>
int main(void)
{
    int no;
    int i;

    printf("请输入一个正整数：");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
        printf("%d", i % 10);

    return 0;
}