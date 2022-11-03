// ��д�����嵥13-4�ĳ��򣬽����ں�ʱ����Ϊstruct tm�͵�ֱֵ����������ļ����ж�д������
#include <stdio.h>
#include <time.h>

char data_file[] = "datetime.bin";

void get_data(void)
{
    FILE *fp;

    if ((fp = fopen(data_file, "rb")) == NULL)
        printf("�������һ�����С�\n");
    else
    {
        int year, month, day, h, m, s;
        fread(&year, sizeof(int), 1, fp);
        fread(&month, sizeof(int), 1, fp);
        fread(&day, sizeof(int), 1, fp);
        fread(&h, sizeof(int), 1, fp);
        fread(&m, sizeof(int), 1, fp);
        fread(&s, sizeof(int), 1, fp);
        printf("�ϴ����е�ʱ����%d��%d��%d��%dʱ%d��%d�롣\n",
               year, month, day, h, m, s);
        fclose(fp);
    }
}

void put_data(void)
{
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);

    if ((fp = fopen(data_file, "wb")) == NULL)
        printf("\a�ļ���ʧ�ܡ�\n");
    else
    {
        fwrite(&timer->tm_year, sizeof(int), 1, fp);
        fwrite(&timer->tm_mon, sizeof(int), 1, fp);
        fwrite(&timer->tm_mday, sizeof(int), 1, fp);
        fwrite(&timer->tm_hour, sizeof(int), 1, fp);
        fwrite(&timer->tm_min, sizeof(int), 1, fp);
        fwrite(&timer->tm_sec, sizeof(int), 1, fp);
        fclose(fp);
    }
}

int main(void)
{
    get_data();

    put_data();

    return 0;
}