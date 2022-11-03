//请在程序中定义表示性别、季节等的枚举类型，并有效使用它们。
#include <stdio.h>

enum gender
{
    female,
    male,
    invalid_gender
};

enum season
{
    spring,
    summer,
    autumn,
    winter,
    invalid_season
};

enum gender getGender(void)
{
    int temp;

    do
    {
        printf("性别(0.女 1.男 2.结束): ");
        scanf("%d", &temp);
    } while (temp < female || temp > invalid_gender);

    return temp;
}

enum season getSeason(void)
{
    int temp;

    do
    {
        printf("季节(0.春 1.夏 2.秋 3.冬 4.结束): ");
        scanf("%d", &temp);
    } while (temp < spring || temp > invalid_season);

    return temp;
}

int main(void)
{
    enum gender gen;
    enum season sea;

    do
    {
        switch (gen = getGender())
        {
        case female:
            puts("新垣结衣");
            break;
        case male:
            puts("星野源");
            break;
        }
    } while (gen != invalid_gender);

    do
    {
        switch (sea = getSeason())
        {
        case spring:
            puts("春天");
            break;
        case summer:
            puts("夏天");
            break;
        case autumn:
            puts("秋天");
            break;
        case winter:
            puts("冬天");
            break;
        }
    } while (sea != invalid_season);

    return 0;
}