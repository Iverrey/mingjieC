//����һ������search_idx��������n��Ԫ�ص�����v�е�key��ȵ�����Ԫ�ص��±�洢������idx�У����غ�key��ȵ�Ԫ�صĸ�����
#include <stdio.h>

#define NUMBER 7

int search_idx(const int v[], int idx[], int key, int n)
{
    int i, j = 0;

    for (i = 0; i < n; i++)
    {
        if (v[i] == key)
        {
            idx[j] = i + 1;
            j++;
        }
    }

    return j;
}

int main(void)
{
    int i, ky, idx[NUMBER], sc;

    for (i = 0; i < NUMBER; i++)
    {
        printf("v[%d] = ", i);
        scanf("%d", &idx[i]);
    }

    printf("Ҫ���ҵ�ֵ��");
    scanf("%d", &ky);

    sc = search_idx(idx, idx, ky, NUMBER);

    if (sc == 0)
        puts("û���ҵ���");
    else
    {
        printf("�ҵ�%d����\n", sc);
        for (i = 0; i < sc; i++)
            printf("idx[%d] = %d\n", i, idx[i]);
    }

    return 0;
}
