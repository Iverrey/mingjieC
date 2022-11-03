//创建一个程序，使用sizeof运算符显示三种浮点型的长度。
#include <stdio.h>

int main(void)
{
    printf("float型的长度为%u。\n", (unsigned)sizeof(float));
    printf("double型的长度为%u。\n", (unsigned)sizeof(double));
    printf("long double型的长度为%u。\n", (unsigned)sizeof(long double));

    return 0;
}