//��дһ�γ���������������ֵ�����������ǰ�ߵ�Լ��������ʾ��B��A��Լ��������������ǣ�����ʾ��B����A��Լ��������
#include <stdio.h>
int main(void)
{
    int a, b;
    puts("����������������");
    printf("����A:");
    scanf("%d", &a);
    printf("����B:");
    scanf("%d", &b);
    if (a % b)
        puts("B����A��Լ����");
    else
        puts("B��A��Լ����");

    return 0;
}