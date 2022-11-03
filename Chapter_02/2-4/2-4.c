//编写程序对整形常量、浮点型常量、int型变量和double型变量进行加减乘除运算。
#include <stdio.h>
int main(void)
{
    int a = 1, b = 2;
    double c = 1.0, d = 2.0;

    printf("整形常量1+2=%d\n");                      //整形常量1+2=3
    printf("浮点型常量1.0+2.0=%f\n");                //浮点型常量1.0+2.0=3.000000
    printf("int型变量a+b=%d\n", a + b);              // int型变量a+b=3
    printf("double型变量c+d=%f\n", c + d);           // double型变量c+d=3.000000
    printf("int型变量加double型变量=%f\n\n", a + c); // int型变量加double型变量=2.000000

    printf("整形常量1-2=%d\n");                      //整形常量1-2=-1
    printf("浮点型常量1.0-2.0=%f\n");                //浮点型常量1.0-2.0=-1.000000
    printf("int型变量a-b=%d\n", a - b);              // int型变量a-b=-1
    printf("double型变量c-d=%f\n", c - d);           // double型变量c-d=-1.000000
    printf("int型变量减double型变量=%f\n\n", a - c); // int型变量减double型变量=0.000000

    printf("整形常量1*2=%d\n");                      //整形常量1*2=2
    printf("浮点型常量1.0*2.0=%f\n");                //浮点型常量1.0*2.0=2.000000
    printf("int型变量a*b=%d\n", a * b);              // int型变量a*b=2
    printf("double型变量c*d=%f\n", c * d);           // double型变量c*d=2.000000
    printf("int型变量乘double型变量=%f\n\n", a * c); // int型变量乘double型变量=1.000000

    printf("整形常量1/2=%d\n");                      //整形常量1/2=0
    printf("浮点型常量1.0/2.0=%f\n");                //浮点型常量1.0/2.0=0.500000
    printf("int型变量a/b=%d\n", a / b);              // int型变量a/b=0
    printf("double型变量c/d=%f\n", c / d);           // double型变量c/d=0.500000
    printf("int型变量除double型变量=%f\n\n", a / c); // int型变量除double型变量=1.000000

    return 0;
}