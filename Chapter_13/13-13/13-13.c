// ��д�����嵥13-7�ĳ��򣬽��ļ���Ϊ�������ļ����и��ơ�ע���дʱʹ��fread������fwrite������
#include <stdio.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("��ԭ�ļ�:");
    scanf("%s", sname);
    printf("��Ŀ���ļ�:");
    scanf("%s", dname);

    if ((sfp = fopen(sname, "rb")) == NULL)
        printf("\aԭ�ļ���ʧ�ܡ�\n");
    else
    {
        if ((dfp = fopen(dname, "wb")) == NULL)
            printf("\aĿ���ļ���ʧ�ܡ�\n");
        else
        {
            while ((fread(&ch, sizeof(char), 1, sfp)) != 0)
                fwrite(&ch, sizeof(char), 1, dfp);
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;
}