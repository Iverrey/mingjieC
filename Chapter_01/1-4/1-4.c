//如果在int型变量的声明中为变量赋一个实数值的初值（如3.14或5.7），会发生什么情况？
#include <stdio.h>
int main(void)
{
    int x = 3.14;
    printf("x的值为%d", x);

    return 0;
}