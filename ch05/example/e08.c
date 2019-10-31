#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void difrdm(int shuzu[4]) {
    static int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int a = 0, temp = 0;

    for (int i = 0; i < 4; i++) {
    	srand((unsigned)time(NULL));
        a = rand() % 10;
        temp = arr[9 - i];
        arr[9 - i] = arr[a];
        arr[a] = temp;
    }

    for (int i = 9; i > 5; i--) {
        shuzu[9 - i] = arr[i];
    }
}


int judge(int no, int shuzu[4]) {
    int no1 = no;
    int temp[4];
    int a = 0; //正确的数字
    int b = 0; //位置正确

    for (int i = 0; i < 4; i++) {
        temp[i] = no1 % 10;
        no1 = no1 / 10;
    }

    if (no / 1000 < 1 || no / 1000 > 10) {
        printf("不合法！请出入4个不重复的数\n");
        return 0;
    } else {
        for (int i = 0; i < 4; i++) {
            for (int j = i + 1; j < 4; j++) {
                if (temp[i] == temp[j]) {
                    printf("不合法！请出入4个不重复的数\n");
                    return 0;
                }
            }
        }
    }


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {

            if (temp[i] == shuzu[j]) {
                if (i == j) {
                    a++;
                    b++;
                } else {
                    a++;
                }
            }
        }
    }

    if (b != 4) {
        printf("包含了%d个正确的数字\n", a);
        printf("%d个数字的位置正确\n", b);
        return 0;
    } else {
        printf("答对了！\n");
        return 1;
    }

    return 1;
}

int main(void) {
    int guess;
    int shuzu[4] = {0};
    difrdm(shuzu);

    for (int i = 0; i < 4; i++) {
        printf("%d\n", shuzu[i]);
    }

    printf("猜一猜4个不重复的数字,");

    do {

        printf("请输入4个数字:\n");

        scanf("%d", &guess);

    } while (!judge(guess, shuzu));


}