//��ʹ���±����������д���º����������ַ���s���ַ�c�ĸ������������ڣ���Ϊ0����
// int str_chnum(const char *s, int c){/*---*/}
#include <stdio.h>

int str_chnum(const char *s, int c)
{
    int count = 0;
    while (*s++)
        if (((int)*s) == c) //��*s���ַ�����ת��Ϊint���ͣ���c�Ƚ�
            count++;

    return count;
}

int main(void)
{
    char str[128];
    int ch;

    printf("�������ַ�����");
    scanf("%s", str);

    printf("�������ַ���");
    getchar();      //���ջس���
    ch = getchar(); // getchar()������ʹch�����ַ�

    printf("�ַ������ַ�%c�ĸ���Ϊ��%d\n", ch, str_chnum(str, ch)); //%c����ַ�

    return 0;
}