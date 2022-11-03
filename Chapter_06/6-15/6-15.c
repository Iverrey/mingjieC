//创建函数put_count，显示被调用的次数
#include <stdio.h>

void put_count(void)
{
    static int count = 0;
    printf("put_count：第%d次。\n", ++count);
}

int main(void)
{
    int i;

    for (i = 0; i < 5; i++)
        put_count();

    return 0;
}
