//不使用下标运算符，实现代码清单9-11的str_toupper函数和str_tolower函数。
#include <stdio.h>
#include <ctype.h>

void str_toupper(char *s)
{
    while (*s)
    {
        *s = toupper(*s);
        s++;
    }
}

void str_tolower(char *s)
{
    while (*s)
    {
        *s = tolower(*s);
        s++;
    }
}

int main(void)
{
    char str[128];

    printf("请输入一个字符串：");
    scanf("%s", str);

    str_toupper(str);
    printf("转换为大写后的字符串是：%s\n", str);

    str_tolower(str);
    printf("转换为小写后的字符串是：%s\n", str);

    return 0;
}