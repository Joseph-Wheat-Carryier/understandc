# include<stdio.h>
int main(void) {
    int len;

    puts("生成直角在左上方的等腰直角三角形");
    printf("短边:");
    scanf("%d", &len);

    for (int i = len; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            if (j == 1) {
                printf("*\n");
            } else {
                printf("*");
            }
        }
    }

    return 0;
}