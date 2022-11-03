//编写o一段程序，读取两个整数，然后显示前者是后者的百分之几。
#include <stdio.h>
int main(void)
{
    puts("请输入两个整数。");
    printf("整数x：");
    int x;
    scanf("%d", &x);
    printf("整数y：");
    int y;
    scanf("%d", &y);
    printf("前者是后者的%d%%。", x * 100 / y);

    return 0;
}