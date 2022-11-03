// ��д�����嵥13-2�еĳ��򣬽����ļ�����ĸ�����Ϣ������������ʾ��
#include <stdio.h>

#define Length 20
#define Number 20

typedef struct
{
    char name[Length];
    double height;
    double weight;
} Person;

void bsort(Person a[], int n)
{
    int i, j;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (a[j + 1].height > a[j].height)
            {
                Person temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    FILE *fp;
    Person people[Number];
    int i = 0;

    char filename[Length];

    printf("�������ļ�����");

    scanf("%s", filename);

    if ((fp = fopen(filename, "r")) == NULL)
        printf("���ļ������ڡ�\n");
    else
    {
        printf("���ļ����ڡ�\n");
        while (fscanf(fp, "%s %lf %lf", people[i].name, &people[i].height, &people[i].weight) != EOF)
            i++;
        fclose(fp);
    }

    bsort(people, i);

    puts("���������С�");
    for (int j = 0; j < i; j++)
        printf("%2d�ţ�%s %5.1f %5.1f\n", j + 1, people[j].name, people[j].height, people[j].weight);

    return 0;
}