//�Դ����嵥5-3�еĳ�������޸ģ���ͷ˳��Ϊ�����е�Ԫ�ظ�ֵ5��4��3��2��1.
#include <stdio.h>
int main(void)
{
    int i;
    int v[5];

    for (i = 0; i < 5; i++)
        v[i] = 5 - i;

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}