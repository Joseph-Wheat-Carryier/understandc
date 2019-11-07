//
// Created by 李熠 on 2019/11/7.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rdm(int min, int max) {
    int no;
    srand((unsigned)time(NULL));
    no = (rand() % (max - min + 1) + min);
    return no;
}


void unsort(int a[], int length) {
    for (int i = 0; i < length; i++) {
        int x = rdm(i, length-1);
        int temp = a[i];
        a[i] = a[x];
        a[x] = temp;
    }
}

int main(void) {
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    unsort(a, 9);

    for (int i = 0; i < 9; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}