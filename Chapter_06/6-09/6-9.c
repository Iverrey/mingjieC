//创建一个函数，对元素个数为n的int型数组v进行倒序排列。
#include <stdio.h>

#define NUMBER 5

void rev_intary(int v[], int n)
{
    int i;
    int temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
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

    rev_intary(vx, NUMBER);

    puts("倒序排列了。");
    for (i = 0; i < NUMBER; i++)
        printf("v[%d] = %d\n", i, vx[i]);

    return 0;
}