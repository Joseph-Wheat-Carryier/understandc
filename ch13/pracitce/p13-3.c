#include<stdio.h>

typedef struct student{
    char name[100];
    double height, weight;
} Student;



int main(void) {
    FILE *fp;
    int  renshu = 0;
    Student student[100];
    Student temp;
    double hsum = 0.0;
    double wsum = 0.0;

    if ((fp = fopen("hw.dat", "r")) == NULL) {
        printf("\a文件打开失败。\n");
    } else {
        for (int i = 0; i < 100; i++) {
            if (fscanf(fp, "%s%lf%lf", student[i].name, &student[i].height, &student[i].weight) == 3) {
                renshu++;
                hsum += student[i].height;
                wsum += student[i].weight;
            } else {
                break;
            }
        }

        for (int j = 0; j <renshu; j++) {
            for (int k = 0; k <= j-1; k++) {
                if(student[k].height>student[k+1].height){
                	temp = student[k];
                	student[k] = student [k+1];
                	student[k+1] = temp;
                }
            }
        }

        for(int j=0;j<renshu;j++){
        	printf("%-10s  %5.1f  %5.1f\n", student[j].name,student[j].height, student[j].weight);
        }

        printf("-----------------------------\n");
        printf("平均        %5.1f  %5.1f\n", hsum / renshu, wsum / renshu);
        fclose(fp);
    }

    return 0;
}