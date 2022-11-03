// 编写一个程序，读取含有10个double型元素的数组的所有元素值。
#include <stdio.h>

int main(void)
{
    FILE *fp;
    double d[10];
    int i;

    if ((fp = fopen("source.bin", "wb")) == NULL)
        printf("\a文件打开失败。\n");
    else
    {
        printf("请输入10个double型元素的值：\n");
        for (i = 0; i < 10; i++)
            scanf("%lf", &d[i]);
        fwrite(d, sizeof(double), 10, fp);
        fclose(fp);
    }

    if ((fp = fopen("source.bin", "rb")) == NULL)
        printf("\a文件打开失败。\n");
    else
    {
        fread(d, sizeof(double), 10, fp);
        for (i = 0; i < 10; i++)
            printf("%f\n", d[i]);
        fclose(fp);
    }

    return (0);
}