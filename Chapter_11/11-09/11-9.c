//ʹ�ñ�����ѧϰ�Ŀ⺯����strlen������strcpy������strncpy������strcat������strncat������strcmp������strncmp��������д����
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[128];
    char str2[128];
    char str3[128];

    printf("������һ���ַ�����");
    scanf("%s", str1);

    printf("��������һ���ַ�����");
    scanf("%s", str2);

    printf("�ַ���str1�ĳ����ǣ�%d\n", strlen(str1));
    printf("�ַ���str2�ĳ����ǣ�%d\n", strlen(str2));

    strcpy(str3, str1);

    strcpy(str1, str2);
    printf("��str2���Ƶ�str1��str1��ֵ�ǣ�%s\n", str1);

    strcpy(str1, str3);

    strncpy(str1, str2, 3);
    printf("��str2��ǰ3���ַ����Ƶ�str1��str1��ֵ�ǣ�%s\n", str1);

    strcpy(str1, str3);

    strcat(str1, str2);
    printf("��str2���ӵ�str1��str1��ֵ�ǣ�%s\n", str1);

    strcpy(str1, str3);

    strncat(str1, str2, 3);
    printf("��str2��ǰ3���ַ����ӵ�str1��str1��ֵ�ǣ�%s\n", str1);

    strcpy(str1, str3);

    printf("��str1��str2�ȽϺ�str1��ֵ�ǣ�%d\n", strcmp(str1, str2));
    printf("��str1��str2��ǰ3���ַ��ȽϺ�str1��ֵ�ǣ�%d\n", strncmp(str1, str2, 3));

    return 0;
}