//�����嵥3-9���ж������������ֵ�ķ��ŵĳ����뽫���дΪ���Խ����롤��ʾ��һ����ѭ������Ρ�
#include <stdio.h>
int main(void)
{
    int no, i;
    do
    {
        printf("������һ��������");
        scanf("%d", &no);

        if (no == 0)
            puts("������Ϊ0��");
        else if (no > 0)
            puts("������Ϊ������");
        else
            puts("������Ϊ������");

        printf("�Ƿ��������Yes...0/No...9����");
        scanf("%d", &i);
    } while (!i);

    return 0;
}