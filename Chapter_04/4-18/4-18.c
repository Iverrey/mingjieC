//����һ������ֵ����ʾ������ֵ��'*'��ÿ��ʾ5���ͻ��С�
#include <stdio.h>
int main(void)
{
    int no;
    int i;

    printf("����ֵ��");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
    {
        printf("*");
        if (i % 5 == 0)
            printf("\n");
    }

    return 0;
}