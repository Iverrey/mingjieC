//ѭ����ʾ1234567890����ʾ��λ�������������ֵ��ȡ�
#include <stdio.h>
int main(void)
{
    int no;
    int i;

    printf("������һ����������");
    scanf("%d", &no);

    for (i = 1; i <= no; i++)
        printf("%d", i % 10);

    return 0;
}