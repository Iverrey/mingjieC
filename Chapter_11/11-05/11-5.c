//不使用下标运算符，编写如下函数，返回字符串s中字符c的个数（若不存在，则为0）。
// int str_chnum(const char *s, int c){/*---*/}
#include <stdio.h>

int str_chnum(const char *s, int c)
{
    int count = 0;
    while (*s++)
        if (((int)*s) == c) //将*s的字符类型转换为int类型，与c比较
            count++;

    return count;
}

int main(void)
{
    char str[128];
    int ch;

    printf("请输入字符串：");
    scanf("%s", str);

    printf("请输入字符：");
    getchar();      //吸收回车符
    ch = getchar(); // getchar()函数来使ch接收字符

    printf("字符串中字符%c的个数为：%d\n", ch, str_chnum(str, ch)); //%c输出字符

    return 0;
}