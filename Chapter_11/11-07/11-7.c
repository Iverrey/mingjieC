//��ʹ���±��������ʵ�ִ����嵥9-11��str_toupper������str_tolower������
#include <stdio.h>
#include <ctype.h>

void str_toupper(char *s)
{
    while (*s)
    {
        *s = toupper(*s);
        s++;
    }
}

void str_tolower(char *s)
{
    while (*s)
    {
        *s = tolower(*s);
        s++;
    }
}

int main(void)
{
    char str[128];

    printf("������һ���ַ�����");
    scanf("%s", str);

    str_toupper(str);
    printf("ת��Ϊ��д����ַ����ǣ�%s\n", str);

    str_tolower(str);
    printf("ת��ΪСд����ַ����ǣ�%s\n", str);

    return 0;
}