//��ȡһ������������ʾ��λ����
#include <stdio.h>
int main(void)
{
    int no;
    int temp;
    int digits = 0;

    printf("������һ����������");
    scanf("%d", &no);

    temp = no;

    while (no > 0)
    {
        no /= 10;
        digits++;
    }

    printf("%d��λ����%d��\n", temp, digits);

    return 0;
}