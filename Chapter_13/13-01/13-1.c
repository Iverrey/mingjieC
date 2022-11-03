// 代码清单13-1中的程序只能打开名为“abc”的文件。请将程序改为从键盘读入文件名，如果存在该名称的文件，就显示“该文件存在。”，否则显示“该文件不存在。”。
#include <stdio.h>

#define Length 20

int main(void)
{
    FILE *fp;

    char filename[20];

    printf("请输入文件名：");

    scanf("%s", filename);

    if ((fp = fopen(filename, "r")) == NULL)
        printf("该文件不存在。\n");
    else
    {
        printf("该文件存在。\n");
        fclose(fp);
    }

    return 0;
}