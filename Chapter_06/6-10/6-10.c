//����һ����������Ԫ�ظ���Ϊn��int������v2���е������У�������������������v1�С�
#include <stdio.h>

#define NUMBER 5

void intary_rcpy(int v1[], const int v2[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        v1[i] = v2[n - i - 1];
}

int main(void)
{
    int i;
    int vx[NUMBER];
    int vy[NUMBER];

    for (i = 0; i < NUMBER; i++)
    {
        printf("v2[%d] = ", i);
        scanf("%d", &vy[i]);
    }

    intary_rcpy(vx, vy, NUMBER);

    puts("���������ˡ�");
    for (i = 0; i < NUMBER; i++)
        printf("v1[%d] = %d\n", i, vx[i]);

    return 0;
}