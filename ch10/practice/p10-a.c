#include <stdio.h>
#include "ch10.h"
#include <string.h>

int main(void) {
    char target[100] = {0};
    char old[] = "iu";
    char source[] = "abcd";
    char str[100] = "jliuliuliuliuliug";
    char a = '0';
    double b = 32323.141522;
    /*doubleToStr(target,b);
    */	//printf("%c\n",51 );
    splitFirst(str, old);
    printf("%s\n", str);
}