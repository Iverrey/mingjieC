// 改写代码清单13-2中的程序，将从文件读入的个人信息按身高排序后显示。
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

    printf("请输入文件名：");

    scanf("%s", filename);

    if ((fp = fopen(filename, "r")) == NULL)
        printf("该文件不存在。\n");
    else
    {
        printf("该文件存在。\n");
        while (fscanf(fp, "%s %lf %lf", people[i].name, &people[i].height, &people[i].weight) != EOF)
            i++;
        fclose(fp);
    }

    bsort(people, i);

    puts("按降序排列。");
    for (int j = 0; j < i; j++)
        printf("%2d号：%s %5.1f %5.1f\n", j + 1, people[j].name, people[j].height, people[j].weight);

    return 0;
}