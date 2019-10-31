#include<stdio.h>
#include<stdlib.h>
enum triagnle {NORMAL, ISOTRIANGLE, EQLTRIANGLE, NOT};

void normal(void) {
    puts("普通三角形");
}

void isotriangle(void) {
    puts("等腰三角形");
}

void eqltriangle(void) {
    puts("等边三角形");
}

void not(void) {
    puts("不是三角形");
}

enum triagnle judgeTriangle(int a, int b, int c) {
    if (a + b > c && abs(a - b) < c && a != b && b != c) {
        return NORMAL;
    } else if (a + b > c && abs(a - b) < c && ((a == b && b != c) || (a != b && b == c) || (a == c && a != b))) {
        return ISOTRIANGLE;
    } else if (a == b && b == c) {
        return EQLTRIANGLE;
    } else {
        return NOT;
    }
}

int main(void) {
    int a, b, c;
    puts("输入三角形的三个边:");


    printf("边a:");
    scanf("%d", &a);

    printf("边b:");
    scanf("%d", &b);

    printf("边b:");
    scanf("%d", &c);

    printf("%d",judgeTriangle(a,b,c));

    switch(judgeTriangle(a,b,c)){
    	case NORMAL:
    	normal();
    	break;

    	case ISOTRIANGLE:
    	isotriangle();
    	break;

    	case EQLTRIANGLE:
    	eqltriangle();
    	break;

    	case NOT:
    	not();
    	break;

    	default:
    	break;

    }


}

