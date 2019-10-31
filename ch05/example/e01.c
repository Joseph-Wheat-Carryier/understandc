#include<stdio.h>

#define ARRAY_SIZE 5
int main(void) {
    int arr[ARRAY_SIZE] = {1, 2, 3, 4, 5};
    int temp;

    /*for (int j = 5; j > 0; j--) {
        temp[5 - j] = arr[j - 1];
    }


    for (int i = 0; i < 5; i++) {

        arr[i] = temp[i];
        printf("%d\n", arr[i]);
    }*/

    for (int i = 0; i < ARRAY_SIZE/2; i++) {
        temp = arr[i];
        arr[i] = arr[ARRAY_SIZE-1-i];
        arr[ARRAY_SIZE-1-i] = temp;
    }

    for (int i=0; i<ARRAY_SIZE ; i++){
    	printf("%d\n",arr[i] );
    }

}