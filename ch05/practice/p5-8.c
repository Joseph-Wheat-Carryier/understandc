#include<stdio.h>
#define NUMBER 80
int main(void) {
    int i, j;
    int num;
    int score[NUMBER];
    int bunpu[11] = {0};

    printf("请输入学生人数:");

    do {
        scanf("%d", &num);

        if (num < 1 || num > NUMBER) {
            printf("\a 请输入1～%d的数\n", NUMBER);
        }
    } while (num < 1 || num > NUMBER);


    printf("请输入%d人的分数。\n", num);

    for (i = 0; i < num; i++) {
        printf("%2d号:", i + 1);

        do {
            scanf("%d", &score[i]);

            if (score[i] < 0 || score[i] > 100) {
                printf("\a请输入1～100的数:\n");
            }
        } while (score[i] < 0 || score[i] > 100);

        bunpu[score[i] / 10]++;
    }


    puts("\n---分布图---");


    putchar('\n');

    for (i = 0; i <= 9; i++) {
        printf("%3d - %3d: ", i * 10, i * 10 + 9);

        for (j = 0; j < bunpu[i]; j++) {
            putchar('*');
        }

        putchar('\n');
    }

    printf("      100:");

    for (j = 0; j < bunpu[10]; j++) {
        printf("*\n");
    }

    return 0;
}