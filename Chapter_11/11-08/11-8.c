//编写如下函数，删除字符串str内的所有数字字符。
// void del_digit(char *str){/*---*/}
#include <stdio.h>

void del_digit(char *str)
{
    char *p = str; // p指向str的第一个字符
    while (*str)
    {
        if (*str < '0' || *str > '9') //如果str指向的字符不是数字
        {
            *p = *str; //将str指向的字符复制到p指向的位置
            p++;
        }
        str++;
    }
    *p = '\0'; //在p指向的位置添加字符串结束符
}

int main(void)
{
    char str[128];

    printf("请输入一个字符串：");
    scanf("%s", str);

    del_digit(str);
    printf("删除数字后的字符串是：%s\n", str);

    return 0;
}