//对代码清单4-10的程序进行修改，使其显示结果的同时显示原整数值。
#include <stdio.h>
int main(void)
{
    int no;

    do
    {
        printf("请输入一个正整数：");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a请不要输入非正整数。");
    } while (no <= 0);

    int temp = no;

    printf("%d逆向显示的结果是", temp);
    while (no > 0)
    {
        printf("%d", no % 10);
        no /= 10;
    }
    puts("。");

    return 0;
}