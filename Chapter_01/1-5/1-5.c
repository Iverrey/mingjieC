//编写一方人程序，读取一个整数并显示该整数加上12之后的结果
#include <stdio.h>
int main(void)
{
    int no;
    printf("请输入一个整数:");
    scanf("%d", &no);
    printf("该整数加上12的结果是%d", no + 12);

    return 0;
}