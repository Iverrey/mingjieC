//����һ������ʹ��sizeof�������ʾ���ָ����͵ĳ��ȡ�
#include <stdio.h>

int main(void)
{
    printf("float�͵ĳ���Ϊ%u��\n", (unsigned)sizeof(float));
    printf("double�͵ĳ���Ϊ%u��\n", (unsigned)sizeof(double));
    printf("long double�͵ĳ���Ϊ%u��\n", (unsigned)sizeof(long double));

    return 0;
}