//��ʹ���±����������д���º��������ַ���s�к����ַ�c�������ж�������ȳ��ֵ�Ϊ׼�����򷵻�ָ����ַ���ָ�룬���򷵻ؿ�ָ�롣
// char *str_chr(const char *s, int c){/*---*/}
#include <stdio.h>

char *str_chr(const char *s, int c)
{
    while (*s++)
        if (((int)*s) == c)   //��*s���ַ�����ת��Ϊint���ͣ���c�Ƚ�
            return (char *)s; //����ָ����ַ���ָ��

    return NULL;
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

    printf("�ַ������ַ�%c��ָ��Ϊ��%p\n", ch, str_chr(str, ch)); //%p���ָ��
    putchar(*(str_chr(str, ch) + 1));                             //���ָָ��ָ��ĺ�һ���ַ������ָ���Ƿ���ȷ

    return 0;
}