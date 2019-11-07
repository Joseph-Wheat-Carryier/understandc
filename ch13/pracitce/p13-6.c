#include<stdio.h>

int countNum(char *fileName) {
    int count = 0;
    FILE *fp;
    fp = fopen(fileName, "r");

    if (fp == NULL) {
        printf("文件读取错误\n");
    } else {
        char c = fgetc(fp);

        while (c != EOF) {
            if (c == '\n') {
                count++;
            }

            c = fgetc(fp);
        }
    }
    fclose(fp);

    return count;
}

int main(void){
	char *fileName = "hw.dat";
	printf("共有%d行。\n", countNum(fileName));
}