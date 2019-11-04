#include<stdio.h>
#include<math.h>
#include<string.h>
void concat(char *a, char *b, char *target) {
    int lengtha = strlen(a);
    int lengthb = strlen(b);

    for (int i = 0; i < lengtha; i++) {
        *(target + i) = *(a + i);
    }

    for (int i = 0; i < lengthb; i++) {
        *(target + lengtha + i) = *(b + i);
    }
}

int main(void) {
    char *a = "1234";
    char *b = "5678";
    char c[10] = {0};
    concat(a, b, c);
    printf("%s\n", c);
}