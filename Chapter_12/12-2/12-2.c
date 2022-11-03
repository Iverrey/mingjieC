//将代码清单12-5的程序改写为从键盘中读取值。
#include <stdio.h>
#define NAME_LEN 64

typedef struct student
{
    char name[NAME_LEN]; //姓名
    int height;          //身高
    float weight;        //体重
    long schols;         //奖学金
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

    printf("姓名: ");
    scanf("%s", sanaka.name);
    printf("身高: ");
    scanf("%d", &sanaka.height);
    printf("体重: ");
    scanf("%f", &sanaka.weight);
    printf("奖学金: ");
    scanf("%ld", &sanaka.schols);

    hiroko(&sanaka);

    printf("姓名 = %s\n", sanaka.name);
    printf("身高 = %d\n", sanaka.height);
    printf("体重 = %.1f\n", sanaka.weight);
    printf("奖学金 = %ld\n", sanaka.schols);

    return 0;
}