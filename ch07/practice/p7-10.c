#include<stdio.h>

int main(void) {
    float x;
    float y;
    int j = 0;

    for (x = 0.0; x <= 1.0;x+=0.01) {
             printf("x=%f   ", x);

        do {
            y = j / 100.0;
            printf("x=%f\n", y);
            j++;
        }while(0);
    }

    return 0;
}