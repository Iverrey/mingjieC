//�������嵥9-3������str��������Ϊ�����������鿴��������н����
// char str[] = "ABC\0DEF"
#include <stdio.h>

int main(void)
{
    char str[] = "ABC\0DEF";

    printf("str = \"%s\"\n", str);

    return 0;
}