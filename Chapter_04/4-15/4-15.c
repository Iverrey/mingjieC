//��ʾ����ߺͱ�׼���صĶ��ձ���ʾ����߷�Χ�ͼ���ɶ��������ֵȷ������ȷ��С�����2λ��
#include <stdio.h>
int main(void)
{
    int height1, height2;
    int d;
    int i;
    double weight;

    printf("��ʼ��ֵ��cm����");
    scanf("%d", &height1);
    printf("������ֵ��cm����");
    scanf("%d", &height2);
    printf("�����ֵ��cm����");
    scanf("%d", &d);

    for (i = height1; i <= height2; i += d)
    {
        weight = (i - 100) * 0.9;
        printf("%dcm\t%.2fkg\n", i, weight);
    }

    return 0;
}