// ��ο������嵥13-7��дһ�����򣬽�����Ӣ����ĸת��ΪСд��ĸ��ͬʱִ�и��Ʋ�����
#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp1, *fp2;
    char fname1[FILENAME_MAX], fname2[FILENAME_MAX];

    printf("������Դ�ļ�����");
    scanf("%s", fname1);
    printf("������Ŀ���ļ�����");
    scanf("%s", fname2);

    if ((fp1 = fopen(fname1, "r")) == NULL)
        printf("\a�޷����ļ���\n");
    else
    {
        if ((fp2 = fopen(fname2, "w")) == NULL)
            printf("\a�޷������ļ���\n");
        else
        {
            while ((ch = fgetc(fp1)) != EOF)
            {
                if (ch >= 'A' && ch <= 'Z')
                    ch += 'a' - 'A';
                putchar(ch);
                fputc(ch, fp2);
            }
            fclose(fp2);
        }
        fclose(fp1);
    }

    return 0;
}