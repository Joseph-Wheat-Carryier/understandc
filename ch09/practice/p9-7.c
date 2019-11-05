#include<stdio.h>
#include<string.h>

void put_stringn(const char s[], int n) {
    int length = strlen(s);
    char temp[100] = {0};

    for (int i = 0; i < n * length; i++) {
        temp[i] = s [i % 3];
    }

    printf("%s\n", temp);
    printf("%lu\n", strlen(temp));
}

int main(void) {
    char s[] = "abc";
    put_stringn(s, 3);
}