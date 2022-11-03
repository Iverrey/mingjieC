//如何让下述初始化赋值得到的字符串s变成空字符串？请编程实现。
// char s[] = "ABC";
#include <stdio.h>

int main(void)
{
    char s[] = "ABC";

    printf("s = \"%s\"\n", s);

    s[0] = '\0';

    printf("s = \"%s\"\n", s);

    return 0;
}