//��д��������γ����������ͳ�����int�ͱ�����double�ͱ������мӼ��˳����㡣
#include <stdio.h>
int main(void)
{
    int a = 1, b = 2;
    double c = 1.0, d = 2.0;

    printf("���γ���1+2=%d\n");                      //���γ���1+2=3
    printf("�����ͳ���1.0+2.0=%f\n");                //�����ͳ���1.0+2.0=3.000000
    printf("int�ͱ���a+b=%d\n", a + b);              // int�ͱ���a+b=3
    printf("double�ͱ���c+d=%f\n", c + d);           // double�ͱ���c+d=3.000000
    printf("int�ͱ�����double�ͱ���=%f\n\n", a + c); // int�ͱ�����double�ͱ���=2.000000

    printf("���γ���1-2=%d\n");                      //���γ���1-2=-1
    printf("�����ͳ���1.0-2.0=%f\n");                //�����ͳ���1.0-2.0=-1.000000
    printf("int�ͱ���a-b=%d\n", a - b);              // int�ͱ���a-b=-1
    printf("double�ͱ���c-d=%f\n", c - d);           // double�ͱ���c-d=-1.000000
    printf("int�ͱ�����double�ͱ���=%f\n\n", a - c); // int�ͱ�����double�ͱ���=0.000000

    printf("���γ���1*2=%d\n");                      //���γ���1*2=2
    printf("�����ͳ���1.0*2.0=%f\n");                //�����ͳ���1.0*2.0=2.000000
    printf("int�ͱ���a*b=%d\n", a * b);              // int�ͱ���a*b=2
    printf("double�ͱ���c*d=%f\n", c * d);           // double�ͱ���c*d=2.000000
    printf("int�ͱ�����double�ͱ���=%f\n\n", a * c); // int�ͱ�����double�ͱ���=1.000000

    printf("���γ���1/2=%d\n");                      //���γ���1/2=0
    printf("�����ͳ���1.0/2.0=%f\n");                //�����ͳ���1.0/2.0=0.500000
    printf("int�ͱ���a/b=%d\n", a / b);              // int�ͱ���a/b=0
    printf("double�ͱ���c/d=%f\n", c / d);           // double�ͱ���c/d=0.500000
    printf("int�ͱ�����double�ͱ���=%f\n\n", a / c); // int�ͱ�����double�ͱ���=1.000000

    return 0;
}