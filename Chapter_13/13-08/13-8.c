// 请参考代码清单13-7编写一个程序，在界面上显示文件内容的同时执行复制操作。
#include <stdio.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX]; /* 源文件名 */
    char dname[FILENAME_MAX]; /* 目标文件名 */

    printf("源文件名：");
    scanf("%s", sname);
    printf("目标文件名：");
    scanf("%s", dname);

    if ((sfp = fopen(sname, "r")) == NULL)
        printf("\a无法打开源文件。\n");
    else
    {
        if ((dfp = fopen(dname, "w")) == NULL)
            printf("\a无法打开目标文件。\n");
        else
        {
            while ((ch = fgetc(sfp)) != EOF)
            {
                putchar(ch);
                fputc(ch, dfp);
            }
            fclose(dfp);
        }
        fclose(sfp);
    }
}