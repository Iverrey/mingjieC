//��ȡ�����е����ݸ�����Ԫ��ֵ����ʾ����ʾʱ����ֵ֮���ö��źͿո�ָ���ô����Ž�����ֵ��������
#include <stdio.h>

#define NUMBER 80

int main(void)
{
    int num, i;
    int a[NUMBER];

    printf("���ݸ�����");

    do
    {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
            printf("\a������1~%d������", NUMBER);
    } while (num < 1 || num > NUMBER);

    for (i = 0; i < num; i++)
    {
        printf("%d�ţ�", i + 1);
        scanf("%d", &a[i]);
    }

    putchar('{');
    for (i = 0; i < num; i++)
    {
        printf("%d", a[i]);
        if (i < num - 1)
            printf(", ");
    }
    putchar('}');

    return 0;
}