#include <stdio.h>
#define length 7

int main(void) {
    int i;
    int x[length];

    for (i = 0; i < length; i++) {
        printf("x[%d]:", i);
        scanf("%d", &x[i]);
    }

    for (i = 0; i < length/2; i++) {
        int temp = x[i];
        x[i]  = x[length-1 - i];
        x[length-1 - i] = temp;
    }

    puts("倒序排列来。");

    for (i = 0; i < length; i++) {
        printf("x[%d]=%d\n", i, x[i]);
    }

    return 0;


}