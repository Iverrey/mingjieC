// ��дһ�����򣬶�ȡ����10��double��Ԫ�ص����������Ԫ��ֵ��
#include <stdio.h>

int main(void)
{
    FILE *fp;
    double d[10];
    int i;

    if ((fp = fopen("source.bin", "wb")) == NULL)
        printf("\a�ļ���ʧ�ܡ�\n");
    else
    {
        printf("������10��double��Ԫ�ص�ֵ��\n");
        for (i = 0; i < 10; i++)
            scanf("%lf", &d[i]);
        fwrite(d, sizeof(double), 10, fp);
        fclose(fp);
    }

    if ((fp = fopen("source.bin", "rb")) == NULL)
        printf("\a�ļ���ʧ�ܡ�\n");
    else
    {
        fread(d, sizeof(double), 10, fp);
        for (i = 0; i < 10; i++)
            printf("%f\n", d[i]);
        fclose(fp);
    }

    return (0);
}