// ��д����ʵ�ִӼ��̶����ļ�����������ļ������������з��ĸ���������ʾ�ڽ����ϡ�
#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX]; /* �ļ��� */

    printf("�ļ�����");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL)
        printf("\a�޷����ļ���\n");
    else
    {
        int count = 0;
        while ((ch = fgetc(fp)) != EOF)
            if (ch == '\n')
                count++;
        fclose(fp);
        printf("�ļ�%s������Ϊ%d��\n", fname, count);
    }

    return 0;
}