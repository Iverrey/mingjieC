//创建一个函数，对元素个数为n的int型数组v2进行倒序排列，并将其结果保存在数组v1中。
#include <stdio.h>

#define NUMBER 5

void intary_rcpy(int v1[], const int v2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        v1[i] = v2[n - i - 1];
}

int main(void)
{
    int i;
    int vx[NUMBER];
    int vy[NUMBER];

    for (i = 0; i < NUMBER; i++)
    {
        printf("v2[%d] = ", i);
        scanf("%d", &vy[i]);
    }

    intary_rcpy(vx, vy, NUMBER);

    puts("倒序排列了。");
    for (i = 0; i < NUMBER; i++)
        printf("v1[%d] = %d\n", i, vx[i]);

    return 0;
}