//��ȡ����������ֵ��Ȼ���������֮�����������ĺ͡�
#include <stdio.h>
int main(void)
{
    int a, b, min, max, sum = 0;

    puts("����������������");
    printf("����A:");
    scanf("%d", &a);
    printf("����B:");
    scanf("%d", &b);

    if (a > b)
    {
        max = a;
        min = b;
        do
        {
            sum += a;
            a--;
        } while (a >= b);
    }
    else
    {
        max = b;
        min = a;
        do
        {
            sum += a;
            a++;
        } while (a <= b);
    }
    printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d��\n", min, max, sum);

    return 0;
}