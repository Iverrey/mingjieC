//对代码清单5-5中的程序进行修改，从头开始依次使用5、4、3、2、1进行初始化。
#include <stdio.h>
int main(void)
{
    int i;
    int v[5] = {5, 4, 3, 2, 1};

    for (i = 0; i < 5; i++)
        printf("v[%d] = %d\n", i, v[i]);

    return 0;
}