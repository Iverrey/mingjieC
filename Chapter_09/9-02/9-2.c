//�����������ʼ����ֵ�õ����ַ���s��ɿ��ַ���������ʵ�֡�
// char s[] = "ABC";
#include <stdio.h>

int main(void)
{
    char s[] = "ABC";

    printf("s = \"%s\"\n", s);

    s[0] = '\0';

    printf("s = \"%s\"\n", s);

    return 0;
}