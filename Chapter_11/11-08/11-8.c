//��д���º�����ɾ���ַ���str�ڵ����������ַ���
// void del_digit(char *str){/*---*/}
#include <stdio.h>

void del_digit(char *str)
{
    char *p = str; // pָ��str�ĵ�һ���ַ�
    while (*str)
    {
        if (*str < '0' || *str > '9') //���strָ����ַ���������
        {
            *p = *str; //��strָ����ַ����Ƶ�pָ���λ��
            p++;
        }
        str++;
    }
    *p = '\0'; //��pָ���λ������ַ���������
}

int main(void)
{
    char str[128];

    printf("������һ���ַ�����");
    scanf("%s", str);

    del_digit(str);
    printf("ɾ�����ֺ���ַ����ǣ�%s\n", str);

    return 0;
}