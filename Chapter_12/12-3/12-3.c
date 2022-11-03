//编写如下函数，从键盘输入int型、long型和double型的值，将这些值作为xyz结构体的成员，返回该结构体的值。
// struct xyz scan_xyz(void){/*---*/}
#include <stdio.h>

struct xyz
{
    int x;
    long y;
    double z;
};

struct xyz scan_xyz(void)
{
    struct xyz temp;
    printf("x: ");
    scanf("%d", &temp.x);
    printf("y: ");
    scanf("%ld", &temp.y);
    printf("z: ");
    scanf("%lf", &temp.z);
    return temp;
}

int main(void)
{
    struct xyz temp = scan_xyz();
    printf("x = %d\n", temp.x);
    printf("y = %ld\n", temp.y);
    printf("z = %f\n", temp.z);
    return 0;
}