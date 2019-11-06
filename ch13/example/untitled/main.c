#include <stdio.h>

int main(void) {
    FILE *file = fopen("./data","w");

    fprintf(file,"%s\n","你好");

    fprintf(file,"%s\n","中国");

    fclose(file);

    file = fopen("./data","r");
    char *p;
    fscanf(file,"%s",p);
    printf("%s\n",p);
}