//确认相等运算符和关系运算符的运算结果是1和0。
#include <stdio.h>
int main(void)
{
    printf("当左右两边相等时，相等运算符的运算结果是%d。\n", 5 == 5);
    printf("当左右两边不相等时，相等运算符的运算结果是%d。\n\n", 5 == 3);

    printf("当左边大于右边时，大于运算符的运算结果是%d。\n", 5 > 3);
    printf("当右边大于左边时，大于运算符的运算结果是%d。\n", 3 > 5);
    printf("当左右两边相等时，大于运算符的运算结果是%d。\n\n", 5 > 5);

    printf("当左边大于等于右边时，大于等于运算符的运算结果是%d。\n", 5 >= 3);
    printf("当右边大于等于左边时，大于等于运算符的运算结果是%d。\n", 3 >= 5);
    printf("当左右两边相等时，大于等于运算符的运算结果是%d。\n\n", 5 >= 5);

    printf("当左边小于右边时，小于运算符的运算结果是%d。\n", 3 < 5);
    printf("当右边小于左边时，小于运算符的运算结果是%d。\n", 5 < 3);
    printf("当左右两边相等时，小于运算符的运算结果是%d。\n\n", 5 < 5);

    printf("当左边小于等于右边时，小于等于运算符的运算结果是%d。\n", 3 <= 5);
    printf("当右边小于等于左边时，小于等于运算符的运算结果是%d。\n", 5 <= 3);
    printf("当左右两边相等时，小于等于运算符的运算结果是%d。\n\n", 5 <= 5);

    return 0;
}