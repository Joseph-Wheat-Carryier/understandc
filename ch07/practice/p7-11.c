#include<stdio.h>

int main(void) {
    float x;
    float y;
    int j = 0;

    float result1;
    float result2;

    for (x = 0.0; x <= 1.0;x+=0.01) {
        printf("x=%f   ", x);
        result1 += x;

        do {
            y = j / 100.0;
            printf("x=%f\n", y);
            result2 += y;

            j++;
        }while(0);
    }

    printf("%f   ",result1 );
    printf("%f   ",result2 );

    return 0;
}