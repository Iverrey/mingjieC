//编写如下函数，实现与库函数atoi、atol、atof功能相同的功能。
// int strtoi(const char *str){/*---*/}
// long strtol(const char *str){/*---*/}
// double strtof(const char *str){/*---*/}
#include <stdio.h>

int strtoi(const char *str)
{
    int n = 0;
    while (*str >= '0' && *str <= '9')
    {
        n = n * 10 + *str - '0';
        str++;
    }
    return n;
}

long strtol(const char *str)
{
    long n = 0;
    while (*str >= '0' && *str <= '9')
    {
        n = n * 10 + *str - '0';
        str++;
    }
    return n;
}

double strtof(const char *str)
{
    double n = 0;
    while (*str >= '0' && *str <= '9')
    {
        n = n * 10 + *str - '0';
        str++;
    }
    return n;
}

int main(void)
{
    char str[128];

    printf("请输入一个字符串：");
    scanf("%s", str);

    printf("字符串转换为整数后的值是：%d\n", strtoi(str));
    printf("字符串转换为长整数后的值是：%ld\n", strtol(str));
    printf("字符串转换为双精度浮点数后的值是：%f\n", strtof(str));

    return 0;
}