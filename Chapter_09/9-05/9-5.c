//编写如下函数，若字符串s中含有字符c（若含有多个，以先出现的为准），则返回该元素的下标值，否则返回-1。
#include <stdio.h>

int str_char(const char s[], int c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if ((int)s[i] == c)
        {
            return i;
        }
        i++;
    }
    return -1;
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
    printf("str_char(s, c) = %d\n", str_char(s, c));

    return 0;
}