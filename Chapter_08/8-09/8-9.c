//计算标准输入中出现的行数。
#include <stdio.h>

int main(void)
{
    int ch;
    int count = 0;

    while ((ch = getchar()) != EOF)
        if (ch == '\n')
            count++;
    printf("行数：%d\n", count);

    return (0);
}