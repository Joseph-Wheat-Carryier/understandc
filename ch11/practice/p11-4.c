# include<stdio.h>

void put_string(const char *s) {
    printf("%s\n", s);
}

int main(void) {
    char *s = "adcd";
    put_string(s);
}