//��ʹ���±����������д���º�������ʾ�ַ���s��
// void put_string(const char *s){/*---*/}
#include <stdio.h>

void put_string(const char *s)
{
    while (*s)
        putchar(*s++);
}

int main(void)
{
    char str[128];

    printf("�������ַ�����");
    scanf("%s", str);

    printf("�ַ���Ϊ��");
    put_string(str);

    return 0;
}