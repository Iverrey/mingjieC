//�ڴ����嵥11-4�У���������ַ�������3����Ϊ����Ƕ�ڳ���for���Ŀ��Ʊ��ʽ���еġ����дһ�γ��򣬽����дΪͨ�����������
#include <stdio.h>

int main(void)
{
    int i;
    char s[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "X", "MAC"};

    for (i = 0; i < sizeof(s) / sizeof(s[0]); i++)
        printf("s[%d] = \"%s\"\n", i, s[i]);

    for (i = 0; i < sizeof(p) / sizeof(p[0]); i++)
        printf("p[%d] = \"%s\"\n", i, p[i]);

    return 0;
}