//定义一个函数式宏swap(type,a,b)以type型的两值互换。
//例如：假设int型变量x、y的值分别为5、10，那么调用swap（int,x,y)后，x、y中应分别10、5。
#include <stdio.h>

#define swap(int, x, y) \
    {                   \
        int t = x;      \
        x = y;          \
        y = t;          \
    }

int main(void)
{
    int x, y;
    puts("请输入两个整数。");
    printf("整数x：");
    scanf("%d", &x);
    printf("整数y：");
    scanf("%d", &y);

    printf("x = %d, y = %d\n", x, y);
    swap(int, x, y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}