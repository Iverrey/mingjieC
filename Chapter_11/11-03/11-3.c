//�޸Ĵ����嵥11-6�ĳ��򣬽�������ѧϰ��str_copy�����ĵ�����Ϊprintf������ʵ�Ρ�
#include <stdio.h>

char *str_copy(char *d, const char *s)
{
    char *t = d;
    while (*d++ = *s++)
        ;
    return t;
}

int main(void)
{
    char str[128] = "ABC";
    char tmp[128];

    printf("str = \"%s\"\n", str);

    printf("���Ƶ��ǣ�", tmp);
    scanf("%s", tmp);

    puts("�����ˡ�");
    printf("str = \"%s\"\n", str_copy(str, tmp));

    return 0;
}