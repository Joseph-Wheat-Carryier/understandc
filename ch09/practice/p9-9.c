#include<stdio.h>
#include<string.h>

void put_stringr(char s[]) {
    int length = strlen(s);
    int temp;

    for (int i = 0; i <= (length - 1) / 2; i++) {
        temp = s[i];
        s[i] = s[length - 1 - i];
        s[length - 1 - i] = temp;
    }
}

int main(void) {
    char s[] = "abcdefg";
    put_stringr(s);
    printf("%s\n", s);
}