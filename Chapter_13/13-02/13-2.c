// ��д���򣬴Ӽ��̶����ļ�������ȥ�����Ƶ��ļ������ݡ�
#include <stdio.h>

#define Length 20

int main(void)
{
    FILE *fp;

    char filename[20];

    printf("�������ļ�����");

    scanf("%s", filename);

    if ((fp = fopen(filename, "w")) == NULL)
        printf("���ļ������ڡ�\n");
    else
    {
        printf("���ļ����ڡ�\n");
        fclose(fp);
    }

    return 0;
}