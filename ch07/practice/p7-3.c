#include<stdio.h>
unsigned rrotate(unsigned x, int n) {
    x >>= n;
    return x;
}

unsigned lrotate(unsigned x, int n) {
    x <<= n;
    return x;
}

int main(void) {
    unsigned no = 4;
    printf("右移1位:%d\n",rrotate(no, 1));
    printf("左移1位:%d\n",lrotate(no, 1));
}