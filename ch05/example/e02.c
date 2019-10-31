#include<stdio.h>
int main(void) {
    int arr[10] = {0, 0, 0, 0, 1, 2, 3, 4, 5, 6};
    int no;

    do {
        printf("插入一个数字:");
        scanf("%d", &no);

        for (int i = 0; i < 10; i++) {
            if ((arr[i] <= no && arr[i + 1] >= no && i <= 8) || (arr[9] <= no && i == 9)) {
                for (int j = 0; j <= i - 1; j++) {
                    /*temp = arr[j + 1];*/
                    arr[j] = arr[j + 1];
                }


                arr[i] = no;
                break;
            }
        }

        for (int i = 0; i < 10; i++) {
            if (i != 9) {
                printf("%d ", arr[i]);
            } else {
                printf("%d\n", arr[i]);
            }
        }
    } while (no != 0);

}