//����һ����������Ԫ�ظ���Ϊn��int������v���е������С�
#include <stdio.h>

#define NUMBER 5

void rev_intary(int v[], int n)
{
    int i;
    int temp;

    for (i = 0; i < n / 2; i++)
    {
        temp = v[i];
        v[i] = v[n - i - 1];
        v[n - i - 1] = temp;
    }
}

int main(void)
{
    int i;
    int vx[NUMBER];

    for (i = 0; i < NUMBER; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &vx[i]);
    }

    rev_intary(vx, NUMBER);

    puts("���������ˡ�");
    for (i = 0; i < NUMBER; i++)
        printf("v[%d] = %d\n", i, vx[i]);

    return 0;
}