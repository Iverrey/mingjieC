//����һ����������һ��ʵ����Ϊ����������Ϊ��ʵ���������εı߳���
#include <stdio.h>
#include <math.h>

int main(void)
{
    double area, side;

    printf("�����������");
    scanf("%lf", &area);

    side = sqrt(area);

    printf("�߳�Ϊ%f��\n", side);

    return 0;
}