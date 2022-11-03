//将代码清单中3-4中的if语句改为switch语句
#include <stdio.h>
int main(void)
{
    int no;

    printf("请输入一个整数：");
    scanf("%d", &no);

    switch (no % 2)
    {
    case 0:
        puts("该整数是偶数。");
        break;
    case 1:
        puts("该整数是奇数。");
        break;
    }

    return 0;
}