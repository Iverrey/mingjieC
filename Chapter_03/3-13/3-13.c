//对代码清单3-17中的程序进行修改，不使用if语句，而是使用switch语句来实现。
#include <stdio.h>
int main(void)
{
    int month;

    printf("请输入月份：");
    scanf("%d", &month);

    switch (month)
    {
    case 3:
    case 4:
    case 5:
        puts("春天。");
        break;
    case 6:
    case 7:
    case 8:
        puts("夏天。");
        break;
    case 9:
    case 10:
    case 11:
        puts("秋天。");
        break;
    case 12:
    case 1:
    case 2:
        puts("冬天。");
        break;
    default:
        puts("输入的月份不正确。");
        break;
    }
    return 0;
}