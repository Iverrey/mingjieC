// �����嵥13-1�еĳ���ֻ�ܴ���Ϊ��abc�����ļ����뽫�����Ϊ�Ӽ��̶����ļ�����������ڸ����Ƶ��ļ�������ʾ�����ļ����ڡ�����������ʾ�����ļ������ڡ�����
#include <stdio.h>

#define Length 20

int main(void)
{
    FILE *fp;

    char filename[20];

    printf("�������ļ�����");

    scanf("%s", filename);

    if ((fp = fopen(filename, "r")) == NULL)
        printf("���ļ������ڡ�\n");
    else
    {
        printf("���ļ����ڡ�\n");
        fclose(fp);
    }

    return 0;
}