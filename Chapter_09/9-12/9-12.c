//编写如下函数，将所接受的字符串数组中存储的n个字符串的字符逆向显示。
// void rev_string(char s[][128], int n)
//例如，如s中接收的是{"SEC", "ABC"}，则更新为{"CES", "CBA"}。
#include <stdio.h>

#define NUMBER 50
#define LEN 128

void rev_string(char s[][LEN], int n) //逆向保存原字符串数组
{
    int i, j;

    for (i = 0; i < n; i++)
    {
        int len = 0;
        while (s[i][len])
            len++;

        for (j = 0; j < len / 2; j++)
        {
            char temp = s[i][j];
            s[i][j] = s[i][len - j - 1];
            s[i][len - j - 1] = temp;
        }
    }
}

void put_strary2(const char s[][LEN], int n) //显示字符串数组
{
    int i;

    for (i = 0; i < n; i++)
    {
        int j = 0;

        if (s[i][j] == '$' && s[i][j + 1] == '$' && s[i][j + 2] == '$' && s[i][j + 3] == '$' && s[i][j + 4] == '$')
            break;

        printf("s[%d] = \"", i);
        while (s[i][j])
            putchar(s[i][j++]);

        puts("\"");
    }
}

void get_strary2(char s[][LEN], int n) //读取字符串数组
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$')
            break;
    }
}

int main(void)
{
    char s[NUMBER][LEN];

    get_strary2(s, NUMBER);
    rev_string(s, NUMBER);
    put_strary2(s, NUMBER);

    return 0;
}