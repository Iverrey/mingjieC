//����������嵥3-9����else��Ϊelse if (no < 0)����ᷢ��ʲô�����
#include <stdio.h>
int main(void)
{
    int no;
    printf("������һ��������");
    scanf("%d", &no);

    if (no == 0)
        puts("������Ϊ0��");
    else if (no > 0)
        puts("������Ϊ������");
    // else
    else if (no < 0)
        puts("������Ϊ������");

    return 0;
}