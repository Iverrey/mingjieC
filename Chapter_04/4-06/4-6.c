//��дһ�γ��򣬰���������ʾ��С������ֵ��������ż����
#include <stdio.h>
int main(void)
{
    int i, no;

    printf("������һ����������");
    scanf("%d", &no);

    if (no > 0)
    {
        i = 2;
        while (i <= no)
        {
            printf("%d ", i);
            i += 2;
        }
        printf("\n");
    }

    return 0;
}