//����6��ѧ��2�ſγ̣����ġ���ѧ���ķ�������ʾ���ſγ̵��ֺܷ�ƽ���֣��Լ�����ѧ�����ֺܷ�ƽ���֡�
#include <stdio.h>
int main(void)
{
    int i, j;
    int tensu[6][2];
    int sum[6] = {0};
    int sum1 = 0, sum2 = 0;
    int ave[6] = {0};
    int ave1 = 0, ave2 = 0;
    puts("������6��ѧ��2�ſγ̣����ġ���ѧ���ķ�����");
    for (i = 0; i < 6; i++)
    {
        printf("%d��ѧ�������ķ�����", i + 1);
        scanf("%d", &tensu[i][0]);
        printf("%d��ѧ������ѧ������", i + 1);
        scanf("%d", &tensu[i][1]);
    }
    puts("No.���� ��ѧ");
    puts("-------------");
    for (i = 0; i < 6; i++)
    {
        printf("%2d%5d%5d\n", i + 1, tensu[i][0], tensu[i][1]);
        sum[i] = tensu[i][0] + tensu[i][1];
        ave[i] = sum[i] / 2;
    }
    puts("-------------");
    for (i = 0; i < 6; i++)
    {
        sum1 += tensu[i][0];
        sum2 += tensu[i][1];
    }
    ave1 = sum1 / 6;
    ave2 = sum2 / 6;
    printf("�����ܷ֣�%d��ƽ���֣�%d\n", sum1, ave1);
    printf("��ѧ�ܷ֣�%d��ƽ���֣�%d\n", sum2, ave2);
    puts("No.�ܷ� ƽ����");
    puts("-------------");
    for (i = 0; i < 6; i++)
    {
        printf("%2d%5d%5d\n", i + 1, sum[i], ave[i]);
    }

    return 0;
}