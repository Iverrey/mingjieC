//编写如下函数，实现字符串的逆向输出。
// void put_stringr(const char s[]){/*---*/}
#include <stdio.h>

void put_stringr(const char s[])
{
    int len = 0;
    while (s[len])
        len++;
    while (len >= 0)
        putchar(s[len--]);
}

int main(void)
{
    char s[128];

    printf("请输入字符串：");
    scanf("%s", s);

    printf("逆向输出：");
    put_stringr(s);
    putchar('\n');

    return 0;
}