//编写如下函数，将字符串s中的数字字符全部删除。
// void del_digit(char s[]){/*---*/}
//例如，字符串中的"AB5C12D7E"变成"ABCDE"。
#include <stdio.h>

void del_digit(char s[])
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] < '0' || s[i] > '9') //如果不是数字字符
            s[j++] = s[i];            //就排列到现在或较前的位置
    s[j] = '\0';
}

int main(void)
{
    char str[128];

    printf("请输入字符串：");
    scanf("%s", str);

    del_digit(str);

    printf("删除数字后的字符串是：%s。\n", str);

    return 0;
}