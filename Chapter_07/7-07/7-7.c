//����һ�����򣬴Ӽ�������float�͡�double�͡�long double�͵ı���������ʾ��ֵ��ע������������ָ�����ֵ������֤�䶯����
#include <stdio.h>

int main(void)
{
    float f;
    double d;
    long double ld;

    printf("������float�ͱ�����");
    scanf("%f", &f);
    printf("������double�ͱ�����");
    scanf("%lf", &d);
    printf("������long double�ͱ�����");
    scanf("%lf", &ld);

    printf("float�ͱ�����ֵΪ%f��\n", f);
    printf("double�ͱ�����ֵΪ%f��\n", d);
    printf("long double�ͱ�����ֵΪ%lf��\n", ld);

    return 0;
}