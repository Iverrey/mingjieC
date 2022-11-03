//创建一个程序，输入一个实数作为面积，求面积为该实数的正方形的边长。
#include <stdio.h>
#include <math.h>

int main(void)
{
    double area, side;

    printf("请输入面积：");
    scanf("%lf", &area);

    side = sqrt(area);

    printf("边长为%f。\n", side);

    return 0;
}