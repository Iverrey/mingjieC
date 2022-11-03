//输入6名学生2门课程（语文、数学）的分数，显示各门课程的总分和平均分，以及各个学生的总分和平均分。
#include <stdio.h>
int main(void)
{
    int i, j;
    int tensu[6][2];
    int sum[6] = {0};
    int sum1 = 0, sum2 = 0;
    int ave[6] = {0};
    int ave1 = 0, ave2 = 0;
    puts("请输入6名学生2门课程（语文、数学）的分数。");
    for (i = 0; i < 6; i++)
    {
        printf("%d号学生的语文分数：", i + 1);
        scanf("%d", &tensu[i][0]);
        printf("%d号学生的数学分数：", i + 1);
        scanf("%d", &tensu[i][1]);
    }
    puts("No.语文 数学");
    puts("-------------");
    for (i = 0; i < 6; i++)
    {
        printf("%2d%5d%5d\n", i + 1, tensu[i][0], tensu[i][1]);
        sum[i] = tensu[i][0] + tensu[i][1];
        ave[i] = sum[i] / 2;
    }
    puts("-------------");
    for (i = 0; i < 6; i++)
    {
        sum1 += tensu[i][0];
        sum2 += tensu[i][1];
    }
    ave1 = sum1 / 6;
    ave2 = sum2 / 6;
    printf("语文总分：%d，平均分：%d\n", sum1, ave1);
    printf("数学总分：%d，平均分：%d\n", sum2, ave2);
    puts("No.总分 平均分");
    puts("-------------");
    for (i = 0; i < 6; i++)
    {
        printf("%2d%5d%5d\n", i + 1, sum[i], ave[i]);
    }

    return 0;
}