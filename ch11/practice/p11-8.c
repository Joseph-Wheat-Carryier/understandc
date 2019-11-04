#include<stdio.h>
#include<string.h>
void del_digit(char *str) {
    int length = strlen(str);

    for (int j = 0; j < length; j++) {
        for (int i = j; i < length; i++) {
            if (*(str + i) <= 57 && *(str + i)) {
                *(str + i) = *(str + i + 1);
            }
        }
    }
}

int main(void) {
    char a[100] = "abcdeq2323fdaf";
    del_digit(a);
    printf("%s\n", a);
}