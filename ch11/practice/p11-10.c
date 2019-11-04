#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int strtoi(const char *nptr) {
    int temp[100] = {0};
    int result = 0;
    int length = strlen(nptr);

    for (int i = 0; i < length; i++) {


        if (nptr[i] <= 57 && nptr[i] >= 48) {
            temp[i] = nptr[i] - 48;
        } else {
            printf("不合法\n");
            return -1;
        }
    }



    for (int j = 0; j < length; j++) {
        result += temp[j] * (int)pow(10, length - 1 - j);
    }

    return result;

}

int main(void) {
    char strNo[100] = "1234567";
    printf("%d\n", strtoi(strNo));
}