//对代码清单5-8中的程序进行修改，改为用对象式宏来定义元素个数。
#include <stdio.h>

#define NUMBER 7

int main(void)
{
    int i;
    int x[NUMBER];

    for (i = 0; i < NUMBER; i++)
    {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < NUMBER / 2; i++)
    {
        int temp = x[i];
        x[i] = x[NUMBER - i - 1];
        x[NUMBER - i - 1] = temp;
    }

    puts("倒序排列了。");
    for (i = 0; i < NUMBER; i++)
        printf("x[%d] = %d\n", i, x[i]);

    return 0;
}