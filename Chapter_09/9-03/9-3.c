//��дһ�γ��򣬶Դ����嵥9-7�������¸�д��
//���ַ����ĸ���3��Ϊ�������������ֵ����Ϊ����ʽ�ꡣ
//�������for����ȡ"$$$$$"ʱֹͣ��ȡ������
//�ڶ���for�����ʾ"$$$$$"ǰ����������ַ�����
#include <stdio.h>

#define NUMBER 50

int main(void)
{
    int i;
    char s[NUMBER][128];

    for (i = 0; i < NUMBER; i++)
    {
        printf("s[%d] : ", i);
        scanf("%s", s[i]);
        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$')
            break;
    }

    for (i = 0; i < NUMBER; i++)
    {

        if (s[i][0] == '$' && s[i][1] == '$' && s[i][2] == '$' && s[i][3] == '$' && s[i][4] == '$')
            break;
        printf("s[%d] = \"%s\"\n", i, s[i]);
    }

    return 0;
}