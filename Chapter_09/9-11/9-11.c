//��дһ�γ��򣬶Դ����嵥9-12�������¸�д��
//���ַ����ĸ���3��Ϊ�������������ֵ����Ϊ����ʽ�ꡣ
//���ַ������ַ���6��Ϊ128������ֵҲ����Ϊ����ʽ�ꡣ
//���ɶ�ȡ�ַ�������ĺ������ڶ�ȡ"$$$$$"ʱֹͣ��ȡ������
//��ʾ"$$$$$"֮ǰ��ȡ���ַ�����
#include <stdio.h>

#define NUMBER 50
#define LEN 128

void put_strary2(const char s[][LEN], int n) //��ʾ�ַ�������
{
    int i;

    for (i = 0; i < n; i++)
    {
        int j = 0;

        if (s[i][j] == '$' && s[i][j + 1] == '$' && s[i][j + 2] == '$' && s[i][j + 3] == '$' && s[i][j + 4] == '$')
            break;

        printf("s[%d] = \"", i);
        while (s[i][j])
            putchar(s[i][j++]);

        puts("\"");
    }
}

void get_strary2(char s[][LEN], int n) //��ȡ�ַ�������
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$')
            break;
    }
}

int main(void)
{
    char s[NUMBER][LEN];

    get_strary2(s, NUMBER);
    put_strary2(s, NUMBER);

    return 0;
}