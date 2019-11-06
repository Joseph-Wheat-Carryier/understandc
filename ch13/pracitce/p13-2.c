#include<stdio.h>

int main(void) {
    char *str;
    printf("请输入文件名:");
    scanf("%s", str);
    FILE *fp = fopen(str, "w");

    if (fp == NULL) {
        printf("str:%s\n", str);
        printf("\a该文件不存在。\n");
    } else {
        printf("\a内容消除成功！\n");
        fclose(fp);
    }

    return 0;

}