//��д���º��������ַ���s�е������ַ�ȫ��ɾ����
// void del_digit(char s[]){/*---*/}
//���磬�ַ����е�"AB5C12D7E"���"ABCDE"��
#include <stdio.h>

void del_digit(char s[])
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] < '0' || s[i] > '9') //������������ַ�
            s[j++] = s[i];            //�����е����ڻ��ǰ��λ��
    s[j] = '\0';
}

int main(void)
{
    char str[128];

    printf("�������ַ�����");
    scanf("%s", str);

    del_digit(str);

    printf("ɾ�����ֺ���ַ����ǣ�%s��\n", str);

    return 0;
}