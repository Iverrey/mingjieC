//创建一个程序，从键盘输入float型、double型、long double型的变量，并显示其值。注意试着输入各种各样的值，并验证其动作。
#include <stdio.h>

int main(void)
{
    float f;
    double d;
    long double ld;

    printf("请输入float型变量：");
    scanf("%f", &f);
    printf("请输入double型变量：");
    scanf("%lf", &d);
    printf("请输入long double型变量：");
    scanf("%lf", &ld);

    printf("float型变量的值为%f。\n", f);
    printf("double型变量的值为%f。\n", d);
    printf("long double型变量的值为%lf。\n", ld);

    return 0;
}