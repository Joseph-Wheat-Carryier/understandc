#include<stdio.h>
int main(void) {
    int money = 150;
    int a = 1;
    int b = 2;
    int c = 5;
    int an, bn, cn, count;
    an = 0, bn = 0 , cn = 0, count = 0;
    int money1 = 150;

    for (int i = a; i < money1; i = i + a) {

        an += 1;

        for (int j = b, bn = 0; j <= money1 - i ; j = j + b) {
            bn += 1;

            for (int z = c, cn = 0; z <= money1 - i - j ; z = z + c) {

                cn += 1;

                if (z == money1 - i - j && an + bn + cn ==100 ) {
                    printf("%d个一分%d个2分+%d个5分\n", an, bn, cn);
                    count = count + 1;
                }

            }


        }

    }


    printf("共有%d种组合\n", count);
}