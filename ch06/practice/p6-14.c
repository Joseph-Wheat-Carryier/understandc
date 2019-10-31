#include<stdio.h>

int main(void) {
	static double a[4];
    for (int i = 0; i < 4; i++) {
        printf("%lf\n", a[i]);
    }

    printf("\n");
}