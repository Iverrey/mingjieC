//��д���º�����������ʾ�ַ���s���ַ���
// void rev_string(char s[])
//���磬��s�н��յ��ǡ�
#include <stdio.h>

void re_string(char s[])
{
    int len = 0;
    while (s[len])
        len++;
    for (int i = 0; i < len / 2; i++)
    {
        char temp = s[i];
        s[i] = s[len - i - 1];
        s[len - i - 1] = temp;
    }
}

int main(void)
{
    char s[128];

    printf("�������ַ�����");
    scanf("%s", s);

    printf("���������");
    re_string(s);
    printf("%s\n", s);

    return 0;
}