// ��дһ���Ӽ��̶�ȡ��������ߺ����أ�������Щ����д���ļ��ĳ���
#include <stdio.h>

int main(void)
{
    FILE *fp;
    char name[20];
    double height, weight;

    if ((fp = fopen("dt_dat", "r")) == NULL)
        printf("\a�ļ���ʧ�ܡ�\n");
    else
    {
        printf("��������������ߺ����ء�\n");
        printf("������");
        scanf("%s", name);
        printf("��ߣ�");
        scanf("%lf", &height);
        printf("���أ�");
        scanf("%lf", &weight);

        fprintf(fp, "%s %.1f %.1f\n", name, height, weight);
        fclose(fp);
    }

    return 0;
}