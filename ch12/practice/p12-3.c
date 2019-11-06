#include <stdio.h>
typedef struct xyz {
    int x;
    long y;
    double z;
} XYZ;

struct xyz scan_xyz() {
	XYZ xyz;
    printf("输入一个int型:");
    scanf("%d", &xyz.x);
    printf("输入一个long型:");
    scanf("%ld", &xyz.y);
    printf("输入一个double型:");
    scanf("%lf", &xyz.z);
    return xyz;
}

int main(void) {
    XYZ xyz = scan_xyz();
    printf("%d\n", xyz.x);
    printf("%ld\n", xyz.y);
    printf("%lf\n", xyz.z);
}