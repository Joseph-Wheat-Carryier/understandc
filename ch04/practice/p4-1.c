#include<stdio.h>

int main(void) {
    int no;
    int key;

    do {
        printf("请输入一个整数:");
        scanf("%d", &no);

        if (no == 0) {
            puts("该整数为0。");
        } else if (no > 0) {
            puts("该整数为正数。");
        } else {
            puts("该整数为负数。");
        }
        puts("输入任意数字继续,输入0退出。");
        scanf("%d",&key);
    } while (key);

    return 0;
}