//
// Created by 李熠 on 2019/11/5.
//

#include "intList.h"

IntList *intListNew(int initSize) {
    IntList *rlt = (IntList *) malloc(sizeof(IntList));
    rlt->length = 0;
    rlt->size = initSize;
    rlt->data = malloc(initSize * sizeof(int));
    return rlt;
}

int intListDestroy(IntList *list) {
    free(list->data);
    free(list);
    return 1;
}

int intListAdd(IntList *list, int elem) {
    if (list->length >= list->size) {
        int *p = (int *) realloc(list->data, (list->size + SIZE_STEP) * sizeof(int));
        if (p == NULL) {
            printf("获取内存空间失败");
            return 0;
        }
        list->data = p;
        list->size += SIZE_STEP;
    }
    list->data[list->length] = elem;
    list->length++;
    return 1;
}

void intListDisplay(IntList *list) {
    for (int i = 0; i < list->length; ++i) {
        printf("[%d]=%d ", i, list->data[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}

int intListUpdate(IntList *list, int index, int elem) {
    while (index > list->length) {
        printf("越界，请输入正确的值！");
    }

    list->data[index] = elem;

    return 1;
}

int intListInsert(IntList *list, int index, int elem) {
    if (index > list->length) {
        printf("越界，请输入正确的值！");
    }

    if (list->length < list->size) {
        if (index != list->length - 1) {
            for (int i = 0; i < list->length - index; i++) {
                list->data[list->length - i] = list->data[list->length - 1 - i];
            }
            list->data[index] = elem;
            list->length++;
        } else {
            intListAdd(list, elem);
        }

    } else if (list->length == list->size) {
        int *p = (int *) realloc(list->data, sizeof(int) * (list->size + SIZE_STEP));
        if (p == NULL) {
            printf("获取内存空间失败");
            return 0;
        }
        list->data = p;
        list->size += SIZE_STEP;
        for (int i = 0; i < list->length - index; i++) {
            list->data[list->length - i] = list->data[list->length - 1 - i];
        }
        list->data[index] = elem;
        list->length++;
    }


    return 1;
}

int intListDeleteByElem(IntList *list, int elem) {
    for (int i = 0; i < list->length; i++) {
        if (list->data[i] == elem) {
            for (int j = 0; j < list->length - i; j++) {
                list->data[i + j] = list->data[i + j + 1];
            }
            list->length--;
        }
    }

    return 1;
}

int intListDelete(IntList *list, int index) {
    for (int i = 0; i < list->length - index; i++) {
        list->data[index + i] = list->data[index + i + 1];
    }
    list->length--;
}

int intListGet(IntList *list, int index) {
    return (list->data[index]);
}

void serialize(IntList *list, FILE *file) {
    /*file = fopen("./data","w");*/
    fprintf(file, "%d ", list->length);

    for (int i = 0; i < list->length; i++) {
        fprintf(file, "%d ", list->data[i]);
    }
    fclose(file);
}

IntList *deserialize(FILE *file) {
    IntList *list = intListNew(20);
    fscanf(file, "%d ",&list->length);
    for(int i=0;i<list->length;i++){
        fscanf(file,"%d ",&list->data[i]);
    }
    fclose(file);
    return list;
}

int intListGetElem(IntList *list,int elem){
    for(int i=0;i<list->length;i++){
        if(list->data[i]==elem){
            return i;
        }
    }
    return 0;
}

int intListGetElemReverse(IntList *list,int elem){
    for(int i=list->length-1;i<list->=0;i--){
        if(list->data[i]==elem){
            return i;
        }
    }
    return 0;
}

