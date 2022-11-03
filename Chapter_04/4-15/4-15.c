//显示出身高和标准体重的对照表。显示的身高范围和间隔由读入的整数值确定。精确到小数点后2位。
#include <stdio.h>
int main(void)
{
    int height1, height2;
    int d;
    int i;
    double weight;

    printf("开始数值（cm）：");
    scanf("%d", &height1);
    printf("结束数值（cm）：");
    scanf("%d", &height2);
    printf("间隔数值（cm）：");
    scanf("%d", &d);

    for (i = height1; i <= height2; i += d)
    {
        weight = (i - 100) * 0.9;
        printf("%dcm\t%.2fkg\n", i, weight);
    }

    return 0;
}