//�������嵥��3-4�е�if����Ϊswitch���
#include <stdio.h>
int main(void)
{
    int no;

    printf("������һ��������");
    scanf("%d", &no);

    switch (no % 2)
    {
    case 0:
        puts("��������ż����");
        break;
    case 1:
        puts("��������������");
        break;
    }

    return 0;
}