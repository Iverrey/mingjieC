// ��ο������嵥13-7��дһ�����򣬽�����Ӣ����ĸת��Ϊ��д��ĸ��ͬʱִ�и��Ʋ�����
#include <stdio.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX]; /* Դ�ļ��� */
    char dname[FILENAME_MAX]; /* Ŀ���ļ��� */

    printf("Դ�ļ�����");
    scanf("%s", sname);
    printf("Ŀ���ļ�����");
    scanf("%s", dname);

    if ((sfp = fopen(sname, "r")) == NULL)
        printf("\a�޷���Դ�ļ���\n");
    else
    {
        if ((dfp = fopen(dname, "w")) == NULL)
            printf("\a�޷���Ŀ���ļ���\n");
        else
        {
            while ((ch = fgetc(sfp)) != EOF)
            {
                if (ch >= 'a' && ch <= 'z')
                    ch -= 32;
                putchar(ch);
                fputc(ch, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
}