//����һ������ʽ��swap(type,a,b)��type�͵���ֵ������
//���磺����int�ͱ���x��y��ֵ�ֱ�Ϊ5��10����ô����swap��int,x,y)��x��y��Ӧ�ֱ�10��5��
#include <stdio.h>

#define swap(int, x, y) \
    {                   \
        int t = x;      \
        x = y;          \
        y = t;          \
    }

int main(void)
{
    int x, y;
    puts("����������������");
    printf("����x��");
    scanf("%d", &x);
    printf("����y��");
    scanf("%d", &y);

    printf("x = %d, y = %d\n", x, y);
    swap(int, x, y);
    printf("x = %d, y = %d\n", x, y);

    return 0;
}