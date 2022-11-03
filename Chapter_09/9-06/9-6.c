//编写如下函数，返回字符串中字符c的个数（没有则返回0）。
#include <stdio.h>

int str_chnum(const char s[], int c)
{
    int i = 0;
    int count = 0;
    while (s[i])
    {
        if ((int)s[i] == c)
        {
            count++;
        }
        i++;
    }
    return count;
}

int main(void)
{
    char s[128];
    int c;

    printf("请输入字符串s：");
    scanf("%s", s);

    printf("请输入字符c：");
    getchar();
    c = getchar();
    /*
    printf("s = \"%s\"\n", s);
    putchar(c);
    putchar('\n');
    */
    printf("str_chnum(s, c) = %d\n", str_chnum(s, c));

    return 0;
}