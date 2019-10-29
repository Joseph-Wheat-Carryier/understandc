#include <stdio.h>
#define length 12

int main(void) {
    int i;
    int x[length];
    int fmt[11] = {0};
    int temp;

    for (i = 0; i < length; i++) {
        do {
            puts("请输入0-100的数:");
            printf("x[%d]:", i);
            scanf("%d", &x[i]);
        } while (x[i] < 0 || x[i] > 100);
    }

    for (i = 0; i < length; i++) {
        if (x[i] % 10 != 0) {
            fmt[x[i] / 10 + 1]++;
        } else {
            fmt[x[i] / 10]++;
        }
    }

    temp = fmt[0];

    for (i = 0; i < 11; i++) {
        if (fmt[i] > temp) {
            temp = fmt[i];
        }
    }


    puts("---------分布图---------");


    for (i = temp; i >= 1; i--) {
        for (int j = 0; j <= 10; j++) {
            if (j != 10) {
                if (fmt[j] < i) {
                    printf("\t%s", " ");
                } else {
                    printf("\t%s", "*");
                }
            } else {
                if (fmt[10] < i) {
                    printf("\t%s\n", " ");
                } else {
                    printf("\t%s\n", "*");
                }
            }
        }
    }


    printf("-------------------------------------------------------------------------------------------\n");

/*for(int i=0;i<11;i++){
    printf("%d", fmt[i]);
}*/

    for (i = 0; i <= 10; i++) {
        if (i != 10) {
            printf("\t%d ", i * 10);
        } else {
            printf("\t%d\n", i * 10);
        }
    }



    return 0;


}