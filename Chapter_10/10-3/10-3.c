//编写如下函数，将n1、n2、n3指向的三个int型整数按升序排列。
// void sort3(int *n1, int *n2, int *n3){/*---*/}
#include <stdio.h>

void sort3(int *n1, int *n2, int *n3)
{
    int temp;
    *n1 > *n2 ? (temp = *n1, *n1 = *n2, *n2 = temp) : 0;
    *n2 > *n3 ? (temp = *n2, *n2 = *n3, *n3 = temp) : 0;
    *n1 > *n2 ? (temp = *n1, *n1 = *n2, *n2 = temp) : 0;
}

int main(void)
{
    int n1, n2, n3;
    puts("输入三个整数。");
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("n3: ");
    scanf("%d", &n3);
    sort3(&n1, &n2, &n3);
    printf("按升序排列是 %d, %d, %d.\n", n1, n2, n3);
    return 0;
}