//�붨��һ������ʽ��diff(x,y)������x��y��ֵ֮�
#include <stdio.h>

#define diff(x, y) ((x) > (y) ? (x) - (y) : (y) - (x))

int main(void)
{
    int a, b;

    puts("����������������");
    printf("����a:");
    scanf("%d", &a);
    printf("����b:");
    scanf("%d", &b);

    printf("���ǵĲ���%d��\n", diff(a, b));

    return 0;
}