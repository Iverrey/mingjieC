//��д���º��������ַ���s�к����ַ�c�������ж�������ȳ��ֵ�Ϊ׼�����򷵻ظ�Ԫ�ص��±�ֵ�����򷵻�-1��
#include <stdio.h>

int str_char(const char s[], int c)
{
    int i = 0;
    while (s[i] != '\0')
    {
        if ((int)s[i] == c)
        {
            return i;
        }
        i++;
    }
    return -1;
}

int main(void)
{
    char s[128];
    int c;

    printf("�������ַ���s��");
    scanf("%s", s);

    printf("�������ַ�c��");
    getchar();
    c = getchar();
    /*
    printf("s = \"%s\"\n", s);
    putchar(c);
    putchar('\n');
    */
    printf("str_char(s, c) = %d\n", str_char(s, c));

    return 0;
}