//�������嵥12-5�ĳ����дΪ�Ӽ����ж�ȡֵ��
#include <stdio.h>
#define NAME_LEN 64

typedef struct student
{
    char name[NAME_LEN]; //����
    int height;          //���
    float weight;        //����
    long schols;         //��ѧ��
} Student;

void hiroko(Student *std)
{
    if (std->height < 180)
        std->height = 180;
    if (std->weight > 80)
        std->weight = 80;
}

int main(void)
{
    Student sanaka;

    printf("����: ");
    scanf("%s", sanaka.name);
    printf("���: ");
    scanf("%d", &sanaka.height);
    printf("����: ");
    scanf("%f", &sanaka.weight);
    printf("��ѧ��: ");
    scanf("%ld", &sanaka.schols);

    hiroko(&sanaka);

    printf("���� = %s\n", sanaka.name);
    printf("��� = %d\n", sanaka.height);
    printf("���� = %.1f\n", sanaka.weight);
    printf("��ѧ�� = %ld\n", sanaka.schols);

    return 0;
}