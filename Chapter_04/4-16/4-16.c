//����һ������ֵ����ʾ������ֵ���µ�����������
#include <stdio.h>
int main(void)
{
    int no;
    int i;

    printf("����ֵ��");
    scanf("%d", &no);

    for (i = 1; i <= no; i += 2)
        printf("%d ", i);

    return 0;
}