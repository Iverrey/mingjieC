//�Դ����嵥4-7�ĳ�����������޸ġ�
//- ��1��ʼ������
//- �����ֵС��0��ʱ�򲻻��С�
#include <stdio.h>
int main(void)
{
    int i, no;

    printf("������һ����������");
    scanf("%d", &no);
    /*
        i = 0;
        while (i <= no)
            printf("%d ", i++);
        printf("\n");
    */
    if (no > 0)
    {
        i = 1;
        while (i <= no)
            printf("%d ", i++);
        printf("\n");
    }

    return 0;
}
