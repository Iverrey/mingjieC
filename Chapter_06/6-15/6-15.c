//��������put_count����ʾ�����õĴ���
#include <stdio.h>

void put_count(void)
{
    static int count = 0;
    printf("put_count����%d�Ρ�\n", ++count);
}

int main(void)
{
    int i;

    for (i = 0; i < 5; i++)
        put_count();

    return 0;
}
