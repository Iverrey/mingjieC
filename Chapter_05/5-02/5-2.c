//对代码清单5-3中的程序进行修改，从头顺次为数组中的元素赋值5、4、3、2、1.
#include <stdio.h>
int main(void)
{
    int i;
    int v[5];

    for (i = 0; i < 5; i++)
        v[i] = 5 - i;

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}