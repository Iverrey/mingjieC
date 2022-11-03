// �ڴ����嵥13-4�ĳ����м��ϱ�ʾ��ǰ�����顱���ַ�����
#include <time.h>
#include <stdio.h>

char data_file[] = "datetime.dat";

void get_data(void)
{
    FILE *fp;

    if ((fp = fopen(data_file, "r")) == NULL)
        printf("�������һ�����С�\n");
    else
    {
        int year, month, day, h, m, s;
        char mood[80];
        fscanf(fp, "%d %d %d %d %d %d %s", &year, &month, &day, &h, &m, &s, mood);
        printf("������%d��%d��%d��%dʱ%d��%d�룬����%s\n", year, month, day, h, m, s, mood);
        fclose(fp);
    }
}

void put_data(void)
{
    FILE *fp;
    time_t current = time(NULL);
    struct tm *timer = localtime(&current);
    char mood[80];

    if ((fp = fopen(data_file, "w")) == NULL)
        printf("\a�ļ���ʧ�ܡ�\n");
    else
    {
        printf("��ǰ�����飺");
        scanf("%s", mood);

        fprintf(fp, "%d %d %d %d %d %d %s",
                timer->tm_year + 1900,
                timer->tm_mon + 1,
                timer->tm_mday,
                timer->tm_hour,
                timer->tm_min,
                timer->tm_sec,
                mood);
        fclose(fp);
    }
}

int main(void)
{
    get_data();

    put_data();

    return 0;
}