//������ʾ��ϰ5-8�еõ��ķֲ�ͼ��
#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = {0};

    printf("������ѧ��������");

    do
    {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a������1~%d������", NUMBER);
    } while (num < 1 || num > NUMBER);

    printf("������%d�˵ķ�����\n", num);

    for (i = 0; i < num; i++)
    {
        printf("%2d��:", i + 1);
        do
        {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
                printf("\a������1~100������");
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }

    int max = 0;
    for (i = 0; i < 11; i++)
    {
        if (max < bunpu[i])
        {
            max = bunpu[i]; //�ҳ��������ķ�������Ϊ����
        }
    }

    for (i = 0; i < max; i++)
    {
        for (j = 0; j < 11; j++)
        {
            if (bunpu[j] >= max - i)
                printf("   *");
            else
                printf("    ");
        }
        putchar('\n');
    }
    puts("------------------------------------------------");
    puts("   0  10  20  30  40  50  60  70  80  90  100");

    return 0;
}