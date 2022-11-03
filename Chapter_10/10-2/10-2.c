//��д���º�������*y��*m��*d�յ����ڣ��޸�Ϊ��ǰһ����һ������ڡ�
// void decrement_date(int *y, int *m, int *d){/*...*/}
// void increment_date(int *y, int *m, int *d){/*...*/}
#include <stdio.h>

void decrement_date(int *y, int *m, int *d)
{
    switch (*m)
    {
    case 1:
        if (*d == 1)
        {
            *y -= 1;
            *m = 12;
            *d = 31;
        }
        else
            *d -= 1;
        break;
    case 3:
        if (*y % 4)
        {
            if (*d == 1)
            {
                *m = 2;
                *d = 28;
            }
            else
                *d -= 1;
            break;
        }
        else
        {
            if (*d == 1)
            {
                *m = 2;
                *d = 29;
            }
        }
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if (*d == 1)
        {
            *m -= 1;
            *d = 31;
        }
        else
            *d -= 1;
        break;
    default:
        if (*d == 1)
        {
            *m -= 1;
            *d = 30;
        }
        else
            *d -= 1;
        break;
    }
}

void increment_date(int *y, int *m, int *d)
{
    switch (*m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
        if (*d == 31)
        {
            *m += 1;
            *d = 1;
        }
        else
            *d += 1;
        break;
    case 12:
        if (*d == 31)
        {
            *y += 1;
            *m = 1;
            *d = 1;
        }
        else
            *d += 1;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        if (*d == 30)
        {
            *m += 1;
            *d = 1;
        }
        else
            *d += 1;
        break;
    case 2:
        if (*y % 4)
        {
            if (*d == 28)
            {
                *m += 1;
                *d = 1;
            }
            else
                *d += 1;
            break;
        }
        else
        {
            if (*d == 29)
            {
                *m += 1;
                *d = 1;
            }
            else
                *d += 1;
        }
    }
}

int main(void)
{
    int y, m, d;

    puts("�����������ա�");

    printf("�꣺");
    scanf("%d", &y);
    printf("�£�");
    do
    {
        scanf("%d", &m);
        if (m < 1 || m > 12)
            printf("�·�����������������룺");
    } while (m < 1 || m > 12);
    printf("�գ�");
    int mark;
    do
    {
        scanf("%d", &d);
        if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
        {
            if (d >= 1 && d <= 31)
                mark = 1;
            else
                mark = 0;
        }
        else if (m == 4 || m == 6 || m == 9 || m == 11)
        {
            if (d >= 1 && d <= 30)
                mark = 1;
            else
                mark = 0;
        }
        else if (m == 2)
        {
            if (y % 4)
            {
                if (d >= 1 && d <= 28)
                    mark = 1;
                else
                    mark = 0;
            }
            else
            {
                if (d >= 1 && d <= 29)
                    mark = 1;
                else
                    mark = 0;
            }
        }
    } while (puts("��������ȷ����ֵ��"), mark == 0);

    decrement_date(&y, &m, &d);
    printf("ǰһ����%d��%d��%d�ա�\n", y, m, d);
    increment_date(&y, &m, &d);
    increment_date(&y, &m, &d);
    printf("��һ����%d��%d��%d�ա�\n", y, m, d);

    return 0;
}