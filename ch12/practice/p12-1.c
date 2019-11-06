#include<stdio.h>
#include<string.h>

#define NAME_LEN   64


struct student {
    char name[NAME_LEN];
    int height;
    float weight;
    long schols;
};

int main(void) {
    struct student takao = {"takao",178,70.5,73000};

    

    printf("姓名 = %p\n", takao.name);
    printf("身高 = %p\n", takao.height);
    printf("体重 = %p\n", takao.weight);
    printf("奖学金 = %p\n", takao.schols);

    return 0;
}