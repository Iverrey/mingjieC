//�Դ����嵥4-5�еĳ�������޸ģ��������ֵΪ������ʱ��ִ�л��в�����
#include <stdio.h>
int main(void)
{
    int no;

    printf("������һ����������");
    scanf("%d", &no);
    /*
        while (no >= 0)
        {
            printf("%d", no);
            no--;
        }
        printf("\n");
    */
    if (no >= 0)
    {
        while (no >= 0)
            printf("%d ", no--);
        printf("\n");
    }

    return 0;
}