#include <stdio.h>
int main(void) {
    char k;
    int a = 0; int A = 0; int n = 0; int c = 0;

    do {
        k = getchar();

        if (k >= 'a' && k <= 'z') {
            a++;
        } else if (k >= 'A' && k <= 'Z') {
            A++;
        } else if (k >= '0' && k <= '9') {
            n++;
        } else {
            c++;
        }
    } while (k != '\n');

    printf("%d个小写字母,%d个大写字母%d个数字%d个字符\n", a, A, n, c);

}