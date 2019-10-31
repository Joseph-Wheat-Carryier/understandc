#include<stdio.h>
int main(void) {
	int i=0;
    char a[][5] = {"LISP", "C", "Ada"};
    char *p[] = {"PAUL", "dX", "MAC"};


    int length1 = sizeof(a) / 5;
    int length2 = sizeof(p) / 8;

    printf("%d****%d\n",length1,length2 );

    for (i = 0; i < length1; i++) {
        printf("a[%d]=\"%s\"\n", i, a[i]);
    }

    for (i = 0; i < 3; i++) {
        printf("p[%d]=\"%s\"\n", i, p[i]);
    }


}
