//编写如下函数，使字符串s显示n次。
#include <stdio.h>

void put_stringn(const char s[], int n)
{
    while (n > 0)
    {
        printf("%s", s);
        n--;
    }
}

int main(void)
{
    char s[128];
    int n;

    printf("请输入字符串s：");
    scanf("%s", s);

    printf("请输入整数n：");
    scanf("%d", &n);

    put_stringn(s, n);

    return 0;
}