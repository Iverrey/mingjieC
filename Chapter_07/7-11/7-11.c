//创建一个程序，分别对代码清单7-11和代码清单7-12进行改写，从0.0递增到1.0，每次递增0.01，求递增后的所有值的累计。注意对比此二者的运行结果。
#include <stdio.h>

int main(void)
{
    int i;
    float x1 = 0.0, x2;
    float sum1 = 0.0, sum2 = 0.0;

    for (i = 0; i <= 100; i++, x1 += 0.01, sum1 += x1, sum2 += x2)
    {
        x2 = i / 100.0;
        printf("x = %f ", x1);
        printf("x = %f \n", x2);
    }

    printf("sum1 = %f ", sum1);
    printf("sum2 = %f \n", sum2);

    return 0;
}