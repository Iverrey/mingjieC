//ȷ�����������͹�ϵ���������������1��0��
#include <stdio.h>
int main(void)
{
    printf("�������������ʱ��������������������%d��\n", 5 == 5);
    printf("���������߲����ʱ��������������������%d��\n\n", 5 == 3);

    printf("����ߴ����ұ�ʱ���������������������%d��\n", 5 > 3);
    printf("���ұߴ������ʱ���������������������%d��\n", 3 > 5);
    printf("�������������ʱ���������������������%d��\n\n", 5 > 5);

    printf("����ߴ��ڵ����ұ�ʱ�����ڵ������������������%d��\n", 5 >= 3);
    printf("���ұߴ��ڵ������ʱ�����ڵ������������������%d��\n", 3 >= 5);
    printf("�������������ʱ�����ڵ������������������%d��\n\n", 5 >= 5);

    printf("�����С���ұ�ʱ��С�����������������%d��\n", 3 < 5);
    printf("���ұ�С�����ʱ��С�����������������%d��\n", 5 < 3);
    printf("�������������ʱ��С�����������������%d��\n\n", 5 < 5);

    printf("�����С�ڵ����ұ�ʱ��С�ڵ������������������%d��\n", 3 <= 5);
    printf("���ұ�С�ڵ������ʱ��С�ڵ������������������%d��\n", 5 <= 3);
    printf("�������������ʱ��С�ڵ������������������%d��\n\n", 5 <= 5);

    return 0;
}