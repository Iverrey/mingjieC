//��д���º�����ʵ����⺯��atoi��atol��atof������ͬ�Ĺ��ܡ�
// int strtoi(const char *str){/*---*/}
// long strtol(const char *str){/*---*/}
// double strtof(const char *str){/*---*/}
#include <stdio.h>

int strtoi(const char *str)
{
    int n = 0;
    while (*str >= '0' && *str <= '9')
    {
        n = n * 10 + *str - '0';
        str++;
    }
    return n;
}

long strtol(const char *str)
{
    long n = 0;
    while (*str >= '0' && *str <= '9')
    {
        n = n * 10 + *str - '0';
        str++;
    }
    return n;
}

double strtof(const char *str)
{
    double n = 0;
    while (*str >= '0' && *str <= '9')
    {
        n = n * 10 + *str - '0';
        str++;
    }
    return n;
}

int main(void)
{
    char str[128];

    printf("������һ���ַ�����");
    scanf("%s", str);

    printf("�ַ���ת��Ϊ�������ֵ�ǣ�%d\n", strtoi(str));
    printf("�ַ���ת��Ϊ���������ֵ�ǣ�%ld\n", strtol(str));
    printf("�ַ���ת��Ϊ˫���ȸ��������ֵ�ǣ�%f\n", strtof(str));

    return 0;
}