//编写一段程序，对代码清单9-7进行如下改写。
//将字符串的个数3改为更大的数，将其值定义为对象式宏。
//在最初的for语句读取"$$$$$"时停止读取操作。
//第二个for语句显示"$$$$$"前输入的所有字符串。
#include <stdio.h>

#define NUMBER 50

int main(void)
{
    int i;
    char s[NUMBER][128];

    for (i = 0; i < NUMBER; i++)
    {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$')
            break;
    }

    for (i = 0; i < NUMBER; i++)
    {

        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$')
            break;
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}