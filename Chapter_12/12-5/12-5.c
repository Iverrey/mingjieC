//改写代码清单12-9的程序，使其能够选择两种方法——输入目的地坐标的方法以及输入X方向和Y方向的移动距离的方法。
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
    printf("当前位置:(%.2f, %.2f)\n", c.pt.x, c.pt.y);
    printf("剩余燃料:%.2f升\n", c.fuel);
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
        printf("请选择移动方式(1.输入目的地坐标 2.输入X方向和Y方向的移动距离):");
        scanf("%d", &select);
        if (select == 1)
        {
            puts("目的地坐标。");
            printf("X:");
            scanf("%lf", &dest.x);
            printf("Y:");
            scanf("%lf", &dest.y);
            if (!move1(&mycar, dest))
                break;
        }
        else if (select == 2)
        {
            puts("X方向和Y方向的移动距离。");
            printf("X方向:");
            scanf("%lf", &dx);
            printf("Y方向:");
            scanf("%lf", &dy);
            if (!move2(&mycar, dx, dy))
                break;
        }
        else
            break;
    }
    printf("燃料不足，无法移动到指定位置。\n");
    return 0;
}