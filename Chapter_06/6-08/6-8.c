//����һ������������Ԫ�ظ���Ϊn��int������v�е���Сֵ��
#include <stdio.h>

#define NUMBER 5

int min_of(const int v[], int n)
{
    int i;
    int min = v[0];

    for (i = 1; i < n; i++)
        if (v[i] < min)
            min = v[i];

    return min;
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

    printf("��СֵΪ%d��\n", min_of(vx, NUMBER));

    return 0;
}