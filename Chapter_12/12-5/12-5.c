//��д�����嵥12-9�ĳ���ʹ���ܹ�ѡ�����ַ�����������Ŀ�ĵ�����ķ����Լ�����X�����Y������ƶ�����ķ�����
#include <math.h>
#include <stdio.h>

#define sqr(n) ((n) * (n))

typedef struct
{
    double x;
    double y;
} Point;

typedef struct
{
    Point pt;
    double fuel;
} Car;

double distance_of(Point pa, Point pb)
{
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}

void put_info(Car c)
{
    printf("��ǰλ��:(%.2f, %.2f)\n", c.pt.x, c.pt.y);
    printf("ʣ��ȼ��:%.2f��\n", c.fuel);
}

int move1(Car *c, Point dest)
{
    double d = distance_of(c->pt, dest);
    if (d > c->fuel)
        return 0;
    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int move2(Car *c, double dx, double dy)
{
    Point dest = {c->pt.x + dx, c->pt.y + dy};
    double d = distance_of(c->pt, dest);
    if (d > c->fuel)
        return 0;
    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int main(void)
{
    Car mycar = {{0.0, 0.0}, 90.0};
    int select;
    Point dest;
    double dx, dy;

    while (1)
    {
        put_info(mycar);
        printf("��ѡ���ƶ���ʽ(1.����Ŀ�ĵ����� 2.����X�����Y������ƶ�����):");
        scanf("%d", &select);
        if (select == 1)
        {
            puts("Ŀ�ĵ����ꡣ");
            printf("X:");
            scanf("%lf", &dest.x);
            printf("Y:");
            scanf("%lf", &dest.y);
            if (!move1(&mycar, dest))
                break;
        }
        else if (select == 2)
        {
            puts("X�����Y������ƶ����롣");
            printf("X����:");
            scanf("%lf", &dx);
            printf("Y����:");
            scanf("%lf", &dy);
            if (!move2(&mycar, dx, dy))
                break;
        }
        else
            break;
    }
    printf("ȼ�ϲ��㣬�޷��ƶ���ָ��λ�á�\n");
    return 0;
}