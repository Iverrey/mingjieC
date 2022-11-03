//创建一个函数search_idx，将和有n个元素的数组v中的key相等的所有元素的下标存储在数组idx中，返回和key相等的元素的个数。
#include <stdio.h>

#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n)
{
    int i, j = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            idx[j] = i + 1;
            j++;
        }
    }

    return j;
}

int main(void)
{
    int i, ky, idx[NUMBER], sc;

    for (i = 0; i < NUMBER; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &idx[i]);
    }

    printf("要查找的值：");
    scanf("%d", &ky);

    sc = search_idx(idx, idx, ky, NUMBER);

    if (sc == 0)
        puts("没有找到。");
    else
    {
        printf("找到%d个。\n", sc);
        for (i = 0; i < sc; i++)
            printf("idx[%d] = %d\n", i, idx[i]);
    }

    return 0;
}
