//
// Created by captain_cat on 2019/11/6.
//

#include"queue.h"
#include"intList.h"

void seqQueueOffer(IntList *list, int a) {
    intListAdd(list, a);
}

int seqQueuePoll(IntList *list) {
    int temp = list->data[list->length - 1];
    intListDelete(list, list->length - 1);
    return temp;
}

int seqQueuePeek(IntList *list) {
    return list->data[list->length - 1];
}

int seqQueueIsEmpty(IntList *list) {
    if (list->length == 0){
        return 1;
    }else{
        return 0;
    }
}

void linkedQueueOffer(SinglyIntNode * head, int elem){
    singlyIntNodeAdd(head,elem);
}

int linkedQueuePoll(SinglyIntNode *head){
    int temp = singlyIntNodeGet(head,head->value-1);
    singlyIntNodeDelete(head,head->value-1);
}

int linkedQueuePeek(SinglyIntNode *head){
    return  singlyIntNodeGet(head,head->value-1);
}

int linkedIsEmpty(SinglyIntNode *head){
    if(head->next == NULL){
        return 1;
    } else{
        return 0;
    }
}