//创建一个函数，返回元素个数为n的int型数组v中的最小值。
#include <stdio.h>

#define NUMBER 5

int min_of(const int v[], int n)
{
    int i;
    int min = v[0];

    for (i = 1; i < n; i++)
        if (v[i] < min)
            min = v[i];

    return min;
}

int main(void)
{
    int i;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vx[i]);
    }

    printf("最小值为%d。\n", min_of(vx, NUMBER));

    return 0;
}