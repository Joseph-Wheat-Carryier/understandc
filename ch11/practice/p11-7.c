#include<stdio.h>
#include<ctype.h>

void str_toupper(char *s) {
    do {
        if (*s != '\0') {
            *s = toupper(*s);
        }
    } while (*s++);
}

void str_tolower(char *s) {
    while (*s++) {
        *s = tolower(*s);
    }
}


int main(void) {
    char a[100] = "juliuming";
    str_toupper(a);
    printf("%s\n", a);
}