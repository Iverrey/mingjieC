//����һ�����򣬷ֱ�Դ����嵥7-11�ʹ����嵥7-12���и�д����0.0������1.0��ÿ�ε���0.01��������������ֵ���ۼơ�ע��Աȴ˶��ߵ����н����
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