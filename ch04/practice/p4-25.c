#include<stdio.h>
int main(void) {
    int no;
    printf("金字塔有几层:");
    scanf("%d", &no);

    for (int i = no; i >= 1; i--) {
        for (int j = 0; j <= no - i + 1; j++) {
            printf(" ");
        }

        for (int k = 1; k <= (i - 1) * 2 + 1; k++) {
            if (k % ((i - 1) * 2 + 1) == 0) {
                printf("%d\n",(no-i+1)%10);
            }else{
            	printf("%d",(no-i+1)%10 );
            }
        }
    }
}
