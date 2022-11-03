//编写一段程序，像右面那样读取表示身高的整数值，然后显示出标准体重的实数值。
#include <stdio.h>
int main(void)
{
    int height;
    printf("请输入您的身高：");
    scanf("%d", &height);
    printf("您的标准体重是%.1f公斤。\n", (height - 100) * 0.9);

    return 0;
}