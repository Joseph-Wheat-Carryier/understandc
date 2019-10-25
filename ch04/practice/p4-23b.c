# include<stdio.h>
int main(void) {
    int len;

    puts("生成直角在左上方的等腰直角三角形");
    printf("短边:");
    scanf("%d", &len);

    for (int i = len; i >= 1; i--) {
        for (int j = 1; j <= len; j++) {
            if (j <= len - i) {
                printf(" ");
            } else if (j > len - i && j % len != 0) {

                printf("*");
            } else {
                printf("*\n");
            }
        }
    }

    return 0;
}