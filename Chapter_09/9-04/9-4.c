//编写一个函数，使字符串s为空字符串。
#include <stdio.h>

void null_string(char s[])
{
    s[0] = '\0';
}

int main(void)
{
    char s[128];

    printf("请输入字符串s：");
    scanf("%s", s);

    printf("s = \"%s\"\n", s);

    null_string(s);

    printf("s = \"%s\"\n", s);

    return 0;
}