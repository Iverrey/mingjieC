//�Դ����嵥4-10�ĳ�������޸ģ�ʹ����ʾ�����ͬʱ��ʾԭ����ֵ��
#include <stdio.h>
int main(void)
{
    int no;

    do
    {
        printf("������һ����������");
        scanf("%d", &no);
        if (no <= 0)
            puts("\a�벻Ҫ�������������");
    } while (no <= 0);

    int temp = no;

    printf("%d������ʾ�Ľ����", temp);
    while (no > 0)
    {
        printf("%d", no % 10);
        no /= 10;
    }
    puts("��");

    return 0;
}