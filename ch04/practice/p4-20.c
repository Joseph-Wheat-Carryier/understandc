#include<stdio.h>
int main(void) {
    for (int j = -1; j <= 9; j++) {
        if (j == -1) {
            for (int i = 0; i <= 9 ; i++) {
                if (i == 0) {
                    printf("%3s", "    |");
                } else if (i != 0 && i % 9 != 0) {
                    printf("%3d  ", i);
                } else {
                    printf("%3d\n", i);
                }
            }
        } else if (j > 0) {
            for (int i = 0; i <= 9 ; i++) {
                if (i == 0) {
                    printf("%3d |", j);
                } else if (i != 0 && i % 9 != 0) {
                    printf("%3d  ", i * j);
                } else {
                    printf("%3d\n", i * j);
                }
            }
        } else {

            for (int i = 1; i <= 10; i++) {

                if (i % 10 != 0) {
                    printf("%3s", " - - ");
                } else {
                    printf("%3s\n", " - - ");
                }

            }
        }
    }

    return 0;
}
