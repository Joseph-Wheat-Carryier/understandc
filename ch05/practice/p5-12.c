#include<stdio.h>
int main(void){
    int tensu[2][4][3] = {{{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}}, {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}}};

    printf("第一次考试的分数\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\t%d", tensu[0][i][j]);
        }

        printf("\n");
    }

    printf("第二次考试的分数\n" );

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\t%d", tensu[1][i][j]);
        }

        printf("\n");
    }

    printf("总分\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\t%d", tensu[0][i][j]+tensu[1][i][j]);
        }

        printf("\n");
    }

}