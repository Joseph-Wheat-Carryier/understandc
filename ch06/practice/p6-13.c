#include<stdio.h>
void mat_add(const int a[4][3], const int b[4][3], int c[3][4][3]) {
    for (int k = 0; k < 3; k++) {
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 3; j++) {
                if (k == 0) {
                    c[k][i][j] = a[i][j];
                } else if (k == 1) {
                    c[k][i][j] = b[i][j];
                } else {
                    c[k][i][j] = a[i][j] + b[i][j];
                }

            }
        }
    }
}

void mat_print(int index,int m[3][4][3]) {

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\t%d", m[index - 1][i][j]);
        }

        printf("\n");
    }

    printf("\n");

}



int main(void) {
    int score1[4][3] = {{91, 63, 78}, {67, 72, 46}, {89, 34, 53}, {32, 54, 34}};
    int score2[4][3] = {{97, 67, 82}, {73, 43, 46}, {97, 56, 21}, {85, 46, 35}};

    int mat_sum[3][4][3];

    mat_add(score1,score2,mat_sum);

    puts("第一次考试的分数");  mat_print(1, mat_sum);
    puts("第二次考试的分数");  mat_print(2, mat_sum);
    puts("总分");            mat_print(3, mat_sum);

    return 0;

}