//�Դ����嵥4-6�еĳ�������޸ģ�ʹ��
//- �ݼ���1���ǵݼ���0
//- �������ֵС��0ʱ�����л���
#include <stdio.h>
int main(void)
{
    int no;

    printf("������һ����������");
    scanf("%d", &no);
    /*
        while (no >= 0)
            printf("%d ", no--);

        printf("\n");
    */
    if (no > 0)
    {
        while (no >= 1)
            printf("%d ", no--);
        printf("\n");
    }

    return 0;
}