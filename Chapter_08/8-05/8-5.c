//���ڳ����ж����ʾ�Ա𡢼��ڵȵ�ö�����ͣ�����Чʹ�����ǡ�
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
        printf("�Ա�(0.Ů 1.�� 2.����): ");
        scanf("%d", &temp);
    } while (temp < female || temp > invalid_gender);

    return temp;
}

enum season getSeason(void)
{
    int temp;

    do
    {
        printf("����(0.�� 1.�� 2.�� 3.�� 4.����): ");
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
            puts("��ԫ����");
            break;
        case male:
            puts("��ҰԴ");
            break;
        }
    } while (gen != invalid_gender);

    do
    {
        switch (sea = getSeason())
        {
        case spring:
            puts("����");
            break;
        case summer:
            puts("����");
            break;
        case autumn:
            puts("����");
            break;
        case winter:
            puts("����");
            break;
        }
    } while (sea != invalid_season);

    return 0;
}