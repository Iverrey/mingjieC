//��д���º�������n1��n2��n3ָ�������int���������������С�
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
    puts("��������������");
    printf("n1: ");
    scanf("%d", &n1);
    printf("n2: ");
    scanf("%d", &n2);
    printf("n3: ");
    scanf("%d", &n3);
    sort3(&n1, &n2, &n3);
    printf("������������ %d, %d, %d.\n", n1, n2, n3);
    return 0;
}