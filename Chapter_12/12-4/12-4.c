//对代码清单12-7的程序进行改写。
//不将姓名、身高等数据作为初始值，而是从键盘输入。
//可以选择按身高进行升序排列，或者按照姓名的顺序排列。
#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct student
{
    char name[NAME_LEN]; //姓名
    int height;          //身高
    float weight;        //体重
    long schols;         //奖学金
} Student;

void scan_Student(Student *std)
{
    printf("姓名: ");
    scanf("%s", std->name);
    printf("身高: ");
    scanf("%d", &std->height);
    printf("体重: ");
    scanf("%f", &std->weight);
    printf("奖学金: ");
    scanf("%ld", &std->schols);
}

void swap_Student(Student *std1, Student *std2)
{
    Student temp = *std1;
    *std1 = *std2;
    *std2 = temp;
}

void sort_by_height(Student std[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (std[j - 1].height > std[j].height)
            {
                swap_Student(&std[j - 1], &std[j]);
            }
        }
    }
}

void sort_by_name(Student std[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = n - 1; j > i; j--)
        {
            if (strcmp(std[j - 1].name, std[j].name) > 0)
            {
                swap_Student(&std[j - 1], &std[j]);
            }
        }
    }
}

void print_Student(Student std[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%-10s %6d %6.1f %6ld\n", std[i].name, std[i].height, std[i].weight, std[i].schols);
    }
}

int main(void)
{
    int i, mark;
    Student std[NUMBER];
    for (i = 0; i < NUMBER; i++)
    {
        scan_Student(&std[i]);
    }
    printf("按身高排序(0)还是按姓名排序(1): ");
    scanf("%d", &mark);

    if (mark == 0)
        sort_by_height(std, NUMBER);
    else
        sort_by_name(std, NUMBER);

    print_Student(std, NUMBER);
    return 0;
}