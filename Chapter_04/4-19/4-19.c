//�Դ����嵥4-15�޸ģ�����ʾ�����������ֵ������Լ��֮����ʾԼ���ĸ���
#include <stdio.h>
int main(void)
{
    int i, n;

    printf("����ֵ��");
    scanf("%d", &n);
    /*
        for (i = 1; i <= n; i++)
            if (n % i == 0)
                printf("%d ", i);
        putchar('\n');
    */
    int count = 0;

    for (i = 1; i <= n; i++)
        if (n % i == 0)
        {
            printf("%d\n", i);
            count++;
        }
    printf("Լ����%d����", count);
    return 0;
}