/*
汽车行驶
*/
#include <stdio.h>
#include <math.h>

#define sqr(n) ((n)*(n))/*计算平方*/

/*表示点的坐标的结构体*/
typedef struct {
    double x; /*X坐标*/
    double y; /*Y坐标*/
} Point;

/*表示汽车的结构体*/
typedef struct {
    Point pt;    /*当前位置*/
    double fuel; /*剩余燃料*/
} Car;

/*返回点pa和点pb之间的距离*/
double distance_of(Point pa, Point pb) {
    return sqrt(sqr(pa.x - pb.x) + sqr(pa.y - pb.y));
}


void set_dest(Point *point, Car car) {
    int choose;
    double x;
    double y;

    do {
        puts("请选择定义目标点方式:1-坐标;2-行驶距离");
        scanf("%d", &choose);

        while (getchar() != '\n');

        if (choose != 1 && choose != 2) {
            puts("输入不合法,请重新输入:");
        }
    } while (choose != 1 && choose != 2);




    if (choose == 1) {
        puts("请输入x,y的坐标:");
        printf("x1:");
        scanf("%lf", &x);
        while (getchar() != '\n');
        printf("x2:");
        scanf("%lf", &y);
        while (getchar() != '\n');
        point->x = x;
        point->y = y;
    } else {
        puts("请输入x,y的偏移量:");
        printf("x1:");
        scanf("%lf", &x);
        while (getchar() != '\n');
        printf("x2:");
        scanf("%lf", &y);
        while (getchar() != '\n');
        point->x = car.pt.x + x;
        point->y = car.pt.y + y;
    }
}

/*显示汽车的当前位置和剩余燃料*/
void put_info(Car c) {
    printf("当前位置:(%.2f,%.2f)\n", c.pt.x, c.pt.y);
    printf("剩余燃料:%.2f\n", c.fuel);
}

/*使c指向的汽车向目标坐标dest行驶*/
int move(Car *c, Point dest) {
    double d = distance_of(c->pt, dest);

    if (d > c->fuel) {
        return 0;
    }

    c->pt = dest;
    c->fuel -= d;
    return 1;
}

int main(void) {
    Car mycar = {{0.0, 0.0}, 90.0};

    while (1) {
        int select;
        Point dest;
        put_info(mycar);
        printf("开动汽车吗【YES---1/NO--0】：");
        scanf("%d", &select);

        if (select != 1) { break; }

        set_dest(&dest, mycar);

        if (!move(&mycar, dest)) {
            puts("\a燃料不足无法行驶。");
        }
    }

    return 0;
}

