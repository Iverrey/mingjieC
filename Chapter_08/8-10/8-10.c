//改写代码清单8-10的程序，将数字字符的出现次数用并排的*表示。注意和代码清单5-12以及练习5-9的显示一样
#include <stdio.h>

int main(void)
{
    int i, j, ch;
    int cnt[10] = {0};

    while ((ch = getchar()) != EOF)
    {
        if (ch >= '0' && ch <= '9')
            cnt[ch - '0']++;
    }

    int max = 0;

    for (i = 0; i < 10; i++)
        if (max < cnt[i])
            max = cnt[i];

    printf("max = %d\n", max);
    puts("纵向显示数字字符的出现次数。");

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < 10; j++)
        {
            if (cnt[j] >= max - i)
                printf("   *");
            else
                printf("    ");
        }
        putchar('\n');
    }
    puts("----------------------------------------");
    puts("   0   1   2   3   4   5   6   7   8   9");

    puts("横向显示数字字符的出现次数。");
    for (i = 0; i < 10; i++)
    {
        printf("'%d':", i);
        while (cnt[i]-- > 0)
            putchar('*');
        putchar('\n');
    }

    return 0;
}