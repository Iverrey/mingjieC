//��д���º�����ʹ�ַ���s��ʾn�Ρ�
#include <stdio.h>

void put_stringn(const char s[], int n)
{
    while (n > 0)
    {
        printf("%s", s);
        n--;
    }
}

int main(void)
{
    char s[128];
    int n;

    printf("�������ַ���s��");
    scanf("%s", s);

    printf("����������n��");
    scanf("%d", &n);

    put_stringn(s, n);

    return 0;
}