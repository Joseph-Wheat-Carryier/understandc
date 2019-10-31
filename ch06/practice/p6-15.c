#include<stdio.h>
int count = 0;
void put_count(void) {
    printf("我被调了%d次\n", ++count);
}

int main(void) {
    for (int i = 0; i < 10; i++) {
        put_count();
    }
}