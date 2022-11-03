//不使用下标运算符，编写如下函数，显示字符串s。
// void put_string(const char *s){/*---*/}
#include <stdio.h>

void put_string(const char *s)
{
    while (*s)
        putchar(*s++);
}

int main(void)
{
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    printf("字符串为：");
    put_string(str);

    return 0;
}