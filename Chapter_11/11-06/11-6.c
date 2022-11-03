//不使用下标运算符，编写如下函数，若字符串s中含有字符c（若含有多个，以先出现的为准），则返回指向该字符的指针，否则返回空指针。
// char *str_chr(const char *s, int c){/*---*/}
#include <stdio.h>

char *str_chr(const char *s, int c)
{
    while (*s++)
        if (((int)*s) == c)   //将*s的字符类型转换为int类型，与c比较
            return (char *)s; //返回指向该字符的指针

    return NULL;
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

    printf("字符串中字符%c的指针为：%p\n", ch, str_chr(str, ch)); //%p输出指针
    putchar(*(str_chr(str, ch) + 1));                             //输出指指针指向的后一个字符来检测指针是否正确

    return 0;
}