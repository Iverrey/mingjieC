// 编写程序实现从键盘读入文件名，计算该文件的行数（换行符的个数）并显示在界面上。
#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp;
    char fname[FILENAME_MAX]; /* 文件名 */

    printf("文件名：");
    scanf("%s", fname);

    if ((fp = fopen(fname, "r")) == NULL)
        printf("\a无法打开文件。\n");
    else
    {
        int count = 0;
        while ((ch = fgetc(fp)) != EOF)
            if (ch == '\n')
                count++;
        fclose(fp);
        printf("文件%s的行数为%d。\n", fname, count);
    }

    return 0;
}