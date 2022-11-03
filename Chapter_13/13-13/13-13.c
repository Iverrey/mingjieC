// 改写代码清单13-7的程序，将文件作为二进制文件进行复制。注意读写时使用fread函数和fwrite函数。
#include <stdio.h>

int main(void)
{
    int ch;
    FILE *sfp;
    FILE *dfp;
    char sname[FILENAME_MAX];
    char dname[FILENAME_MAX];

    printf("打开原文件:");
    scanf("%s", sname);
    printf("打开目标文件:");
    scanf("%s", dname);

    if ((sfp = fopen(sname, "rb")) == NULL)
        printf("\a原文件打开失败。\n");
    else
    {
        if ((dfp = fopen(dname, "wb")) == NULL)
            printf("\a目标文件打开失败。\n");
        else
        {
            while ((fread(&ch, sizeof(char), 1, sfp)) != 0)
                fwrite(&ch, sizeof(char), 1, dfp);
            fclose(dfp);
        }
        fclose(sfp);
    }

    return 0;
}