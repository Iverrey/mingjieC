//编写如下函数，逆向显示字符串s的字符。
// void rev_string(char s[])
//例如，若s中接收的是“
#include <stdio.h>

void re_string(char s[])
{
    int len = 0;
    while (s[len])
        len++;
    for (int i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

int main(void)
{
    char s[128];

    printf("请输入字符串：");
    scanf("%s", s);

    printf("逆向输出：");
    re_string(s);
    printf("%s\n", s);

    return 0;
}