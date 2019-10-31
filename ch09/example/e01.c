#include<stdio.h>

char toUp(char a) {
    if (a <= 'z' && a >= 'a') {
        return a + ('A' - 'a');
    } else {
        return a;
    }
}

char toDown(char a) {
    if (a <= 'Z' && a >= 'A') {
        return a - ('A' - 'a');
    } else {
        return a;
    }
}

int main(void) {
    char a = 'a';
    printf("%c\n", toDown(a));
}