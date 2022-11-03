//使用本节中学习的库函数（strlen函数、strcpy函数、strncpy函数、strcat函数、strncat函数、strcmp函数、strncmp函数）编写程序。
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[128];
    char str2[128];
    char str3[128];

    printf("请输入一个字符串：");
    scanf("%s", str1);

    printf("请输入另一个字符串：");
    scanf("%s", str2);

    printf("字符串str1的长度是：%d\n", strlen(str1));
    printf("字符串str2的长度是：%d\n", strlen(str2));

    strcpy(str3, str1);

    strcpy(str1, str2);
    printf("将str2复制到str1后，str1的值是：%s\n", str1);

    strcpy(str1, str3);

    strncpy(str1, str2, 3);
    printf("将str2的前3个字符复制到str1后，str1的值是：%s\n", str1);

    strcpy(str1, str3);

    strcat(str1, str2);
    printf("将str2连接到str1后，str1的值是：%s\n", str1);

    strcpy(str1, str3);

    strncat(str1, str2, 3);
    printf("将str2的前3个字符连接到str1后，str1的值是：%s\n", str1);

    strcpy(str1, str3);

    printf("将str1和str2比较后，str1的值是：%d\n", strcmp(str1, str2));
    printf("将str1和str2的前3个字符比较后，str1的值是：%d\n", strncmp(str1, str2, 3));

    return 0;
}