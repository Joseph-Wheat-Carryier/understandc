#include<stdio.h>

int indexOf(char *target, char *check) {
    int i = 0;
    while (*(target + i) != '\0') {

        if (*(target + i) == *check) {
            int j = 0;
            while (*(check + j) != '\0') {
                if (*(target + i + j) != *(check + j)) {

                    break;
                }
                j++;
                if (*(check + j) == '\0') {
                    return i;
                }
            }
        }
        i++;
    }

    return -1;
}