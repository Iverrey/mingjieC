//���һ�������ľ���ֵ
#include <stdio.h>
int main(void)
{
    int no;
    printf("������һ��������");
    scanf("%d", &no);

    if (no >= 0)
        printf("����ֵ�ǣ�%d\n", no);
    else
        printf("����ֵ�ǣ�%d\n", -no);

    return 0;
}