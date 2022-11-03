//创建一个程序，横向显示代码清单7-11中以0.01为单位将flat型变量由0.0递增到1.0的过程，以及代码清单7-12中将int型变量由0递增到100，并求其除以100.0后所得值的过程。
#include <stdio.h>

int main(void)
{
    int i;
    float x1 = 0.0, x2;

    for (i = 0; i <= 100; i++, x1 += 0.01)
    {
        x2 = i / 100.0;
        printf("x = %f ", x1);
        printf("x = %f \n", x2);
    }

    return 0;
}