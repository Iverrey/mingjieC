//编写一段程序，对代码清单9-12进行如下改写。
//将字符串的个数3改为更大的数，将其值定义为对象式宏。
//将字符串的字符数6改为128，将其值也定义为对象式宏。
//生成读取字符串数组的函数。在读取"$$$$$"时停止读取操作。
//显示"$$$$$"之前读取的字符串。
#include <stdio.h>

#define NUMBER 50
#define LEN 128

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
    put_strary2(s, NUMBER);

    return 0;
}