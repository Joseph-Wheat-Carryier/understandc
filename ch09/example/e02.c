#include<stdio.h>

void delNo(int index, char v[], int length , char aim) {
    if (v[index] == aim) {
        for (int i = index; i < length - 1; i++) {
            v[i] = v[i + 1];
            v[length - 1] = 0;
        }
    }

    index++;

    if (index == length) {
        return;
    }

    delNo(index, v, length, aim);
}

void delblk(char str[]) {
    int length = 1;

    while (str[length - 1]) {
        length++;
    }

    delNo(0, str, length, ' ');
}

void delblk2(char str[]) {
    int length = 1;

    while (str[length - 1]) {
        length++;
    }

    printf("%d\n",length );

    for (int i = length - 2; i >= 0; i--) {
        if (str[i] == ' ') {
            str[i - 2] = '\0';
        } else {
            break;
        }
    }

    while (str[0] == ' ') {
        for (int i = 0; i < length - 2; i++) {
            str[i] = str[i + 1];
            str[length - 2] = '\0';
        }
    }
}

int main(void) {
    char str[100];
    char str2[100];
    puts("请输入字符串:");
    scanf("%[^\n]", str);
    /*printf("%s\n",str );*/
    puts("去空格后:");
    delblk(str);
    printf("%s\n", str);


    puts("请输入字符串:");

    while (getchar() != '\n');

    printf("scanf=%d", scanf("%[^\n]", str2));
    /*printf("%s\n",str );*/
    puts("去前后空格后:");
    delblk2(str2);
    printf("%s\n", str2);



}