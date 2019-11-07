#include<stdio.h>

void readArrBinary(char *fileName) {
    FILE *fp;
    char arr[10];
    fp = fopen(fileName, "rb");
    fread(arr, sizeof(char), 10, fp);
    printf("%s\n", arr);
    fclose(fp);
}

void writeArrBinary(char *fileName) {
    FILE *fp;
    char arr[10] = "abcdefghi";
    fp = fopen(fileName, "wb");
    fwrite(arr, sizeof(char), 10, fp);
    fclose(fp);
}

int main(void) {
    char doc[100];
    puts("输入文件名:");
    scanf("%s", doc);

    writeArrBinary(doc);
    readArrBinary(doc);
}