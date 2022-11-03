//�Դ����嵥12-7�ĳ�����и�д��
//������������ߵ�������Ϊ��ʼֵ�����ǴӼ������롣
//����ѡ����߽����������У����߰���������˳�����С�
#include <stdio.h>
#include <string.h>

#define NUMBER 5
#define NAME_LEN 64

typedef struct student
{
    char name[NAME_LEN]; //����
    int height;          //���
    float weight;        //����
    long schols;         //��ѧ��
} Student;

void scan_Student(Student *std)
{
    printf("����: ");
    scanf("%s", std->name);
    printf("���: ");
    scanf("%d", &std->height);
    printf("����: ");
    scanf("%f", &std->weight);
    printf("��ѧ��: ");
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
    printf("���������(0)���ǰ���������(1): ");
    scanf("%d", &mark);

    if (mark == 0)
        sort_by_height(std, NUMBER);
    else
        sort_by_name(std, NUMBER);

    print_Student(std, NUMBER);
    return 0;
}