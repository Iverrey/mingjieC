//������������滻��ϰ3-6�е�if��䣬ʵ��ͬ���Ĺ��ܡ�
#include <stdio.h>
int main(void)
{
    int a, b, c;

    puts("����������������");
    scanf("%d%d%d", &a, &b, &c);

    int min;

    min = (a < b) ? a : b;
    min = (c < min) ? c : min;

    printf("��СֵΪ%d��\n", min);

    return 0;
}