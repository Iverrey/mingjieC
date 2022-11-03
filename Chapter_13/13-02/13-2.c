// 编写程序，从键盘读入文件名，消去该名称的文件的内容。
#include <stdio.h>

#define Length 20

int main(void)
{
    FILE *fp;

    char filename[20];

    printf("请输入文件名：");

    scanf("%s", filename);

    if ((fp = fopen(filename, "w")) == NULL)
        printf("该文件不存在。\n");
    else
    {
        printf("该文件存在。\n");
        fclose(fp);
    }

    return 0;
}