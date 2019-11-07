#include<stdio.h>

int main(void) {
    FILE *fp;
    int ninzu = 0;           /*人数*/
    char name[100];          /*姓名*/
    double height, weight;   /*身高、体重*/
    double hsum = 0.0;       /*身高合计*/
    double wsum = 0.0;       /*体重合计*/


    if ((fp = fopen("hw2.dat", "w")) == NULL) { /*打开文件*/
        printf("\a文件打开失败！！！\n");
    } else {
        printf("任意键开始\n");

        do {

            while (getchar() != '\n');

            printf("输入姓名:");
            scanf("%s", name);

            while (getchar() != '\n');

            printf("输入身高:");
            scanf("%lf", &height);

            while (getchar() != '\n');

            printf("输入体重:");
            scanf("%lf", &weight);

            while (getchar() != '\n');

            printf("是否继续？任意键继续,0完成。\n");

            fprintf(fp, "%-10s  %5.1f  %5.1f\n", name, height, weight);
            ninzu++;
            hsum += height;
            wsum += weight;

        } while (getchar() != '0');

        fprintf(fp, "------------------------------\n");
        fprintf(fp, "平均        %5.1lf  %5.1lf\n", hsum / ninzu, wsum / ninzu);
        fclose(fp); /*关闭文件*/
    }

    return 0;
}