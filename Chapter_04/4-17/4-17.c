//��ʾ1��n������ֵ�Ķ��η�
#include <stdio.h>
int main(void)
{
    int n;
    int i;

    printf("n��ֵ��");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        printf("%d�Ķ��η���%d��\n", i, i * i);

    return 0;
}