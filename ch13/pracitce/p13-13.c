#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void) {
    char ch[10];
    FILE *sfp;/*原文件*/
    FILE *dfp;/*目标文件*/
    char sname[FILENAME_MAX];/*原文件名*/
    char dname[FILENAME_MAX];/*目标文件名*/

    printf("打开原文件:"); scanf("%s", sname);
    printf("打开目标文件:"); scanf("%s", dname);

    if ((sfp = fopen(sname, "rb")) == NULL) { /*打开原文件*/
        printf("原文件打开失败\n");
    } else {
        if ((dfp = fopen(dname, "wb")) == NULL) { /*打开目标文件*/
            printf("目标文件打开失败\n");
        } else {
            int exit = 10;

            while (exit == 10) {
                exit = fread(ch, sizeof(char), 10, sfp);
                fwrite(ch, sizeof(char), 10, dfp);
            }

            fclose(dfp);/*关闭目标文件*/
        }

        fclose(sfp);/*关闭原文件*/
    }

    return 0;
}