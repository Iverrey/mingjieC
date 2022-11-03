//读取数组中的数据个数和元素值并显示。显示时，各值之间用逗号和空格分割，并用大括号将所有值括起来。
#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int num, i;
    int a[NUMBER];

    printf("数据个数：");

    do
    {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a请输入1~%d的数：", NUMBER);
    } while (num < 1 || num > NUMBER);

    for (i = 0; i < num; i++)
    {
        printf("%d号：", i + 1);
        scanf("%d", &a[i]);
    }

    putchar('{');
    for (i = 0; i < num; i++)
    {
        printf("%d", a[i]);
        if (i < num - 1)
            printf(", ");
    }
    putchar('}');

    return 0;
}