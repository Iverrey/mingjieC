// 编写一个从键盘读取姓名、身高和体重，并将这些数据写入文件的程序。
#include <stdio.h>

int main(void)
{
    FILE *fp;
    char name[20];
    double height, weight;

    if ((fp = fopen("dt_dat", "r")) == NULL)
        printf("\a文件打开失败。\n");
    else
    {
        printf("请输入姓名、身高和体重。\n");
        printf("姓名：");
        scanf("%s", name);
        printf("身高：");
        scanf("%lf", &height);
        printf("体重：");
        scanf("%lf", &weight);

        fprintf(fp, "%s %.1f %.1f\n", name, height, weight);
        fclose(fp);
    }

    return 0;
}