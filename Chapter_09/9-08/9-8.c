//��д���º�����ʵ���ַ��������������
// void put_stringr(const char s[]){/*---*/}
#include <stdio.h>

void put_stringr(const char s[])
{
    int len = 0;
    while (s[len])
        len++;
    while (len >= 0)
        putchar(s[len--]);
}

int main(void)
{
    char s[128];

    printf("�������ַ�����");
    scanf("%s", s);

    printf("���������");
    put_stringr(s);
    putchar('\n');

    return 0;
}