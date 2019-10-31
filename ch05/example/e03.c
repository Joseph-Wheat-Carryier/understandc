
#include<stdio.h>
void insert(int arr[], int index, int element, int length) {

    if (index <= length - 1) {
        for (int i = length - 1; i >index; i--) {
            arr[i] = arr[i-1];
        }

        arr[index] = element;
    } /*else {
        arr[length - 1] = element;
    }*/
}

int main(int argc, char const *argv[]) {
    int arr[5] = {0, 1, 2, 3, 4};
    int index;
    int element;

    printf("输入序号:");
    scanf("%d", &index);
    printf("输入元素:");
    scanf("%d", &element);
    insert(arr, index, element, 5);

    for (int i = 0; i < 5; i++) {
        if (i != 4)

        {
            printf("%d  ", arr[i]);
        } else {

            printf("%d\n", arr[i]);
        }
    }

    return 0;
}