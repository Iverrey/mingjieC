//��дһ��������ʹ�ַ���sΪ���ַ�����
#include <stdio.h>

void null_string(char s[])
{
    s[0] = '\0';
}

int main(void)
{
    char s[128];

    printf("�������ַ���s��");
    scanf("%s", s);

    printf("s = \"%s\"\n", s);

    null_string(s);

    printf("s = \"%s\"\n", s);

    return 0;
}