//�ڴ����嵥12-3�Ļ����ϣ���д��ʾ����takao����Ա��ַ�ĳ���
#include <stdio.h>

#define NAME_LEN 64

struct student
{
    char name[NAME_LEN]; //����
    int height;          //���
    float weight;        //����
    long schols;         //��ѧ��
};

int main(void)
{
    struct student takao = {"Takao", 173, 86.2};

    printf("���� = %s\n", takao.name);
    printf("��� = %d\n", takao.height);
    printf("���� = %.1f\n", takao.weight);
    printf("��ѧ�� = %ld\n", takao.schols);

    printf("�����ĵ�ַ = %p\n", &takao.name);
    printf("��ߵĵ�ַ = %p\n", &takao.height);
    printf("���صĵ�ַ = %p\n", &takao.weight);
    printf("��ѧ��ĵ�ַ = %p\n", &takao.schols);

    return 0;
}