//��дһ�γ���Ϊdouble�����������Ԫ�ط��侲̬�洢�ڣ���ȷ�����Ƕ�����ʼ��Ϊ0.0
#include <stdio.h>

double sa[5];

int main(void)
{
    int i;
    double sb[5];

    for (i = 0; i < 5; i++)
    {
        printf("sa[%d] = %f\n", i, sa[i]);
        printf("sb[%d] = %f\n", i, sb[i]);
    }

    return 0;
}