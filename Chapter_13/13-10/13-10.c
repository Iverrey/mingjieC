// 请参考代码清单13-7编写一个程序，将所有英文字母转换为小写字母的同时执行复制操作。
#include <stdio.h>

int main(void)
{
    int ch;
    FILE *fp1, *fp2;
    char fname1[FILENAME_MAX], fname2[FILENAME_MAX];

    printf("请输入源文件名：");
    scanf("%s", fname1);
    printf("请输入目标文件名：");
    scanf("%s", fname2);

    if ((fp1 = fopen(fname1, "r")) == NULL)
        printf("\a无法打开文件。\n");
    else
    {
        if ((fp2 = fopen(fname2, "w")) == NULL)
            printf("\a无法创建文件。\n");
        else
        {
            while ((ch = fgetc(fp1)) != EOF)
            {
                if (ch >= 'A' && ch <= 'Z')
                    ch += 'a' - 'A';
                putchar(ch);
                fputc(ch, fp2);
            }
            fclose(fp2);
        }
        fclose(fp1);
    }

    return 0;
}