#include"intList.h"
#include"stack.h"
#include"singlyIntNode.h"

int seqStackPop(IntList *list){
    int temp = list->data[list->length-1];
    intListDelete(list,list->length-1);
    return temp;
}

int seqStackPush(IntList *list, int elem){
    intListInsert(list,0,elem);
    return elem;
}

int seqStackIsEmpty(IntList *list){
    return list->length == 0 ? 1 : 0;
}

int seqStackPeek(IntList *list){
    return list->data[list->length-1];
}

int seqStackSearch(IntList *list, int elem){
    int index =list->length-1 - intListGetElem(list,elem);
    return index;
}

int linkedStackPop(SinglyIntNode *list) {
    int temp = list->next->value;
    singlyIntNodeDelete(list, 0);
    return temp;
}

int linkedStackPush(SinglyIntNode *list, int elem){
    singlyIntNodeInsert(list,0,elem);
    return elem;
}

int linkedStackIsEmpty(SinglyIntNode *list){
    if(list->next==NULL){
        return 1;
    }else{
        return 0;
    }
}

int linkedStackPeek(SinglyIntNode *list){
    return list->next->value;
}

int linkedStackSearch(SinglyIntNode *list, int elem){
    if(singlyIntNodeGetElemReverse(list,elem)==-1){
        return -1;
    } else{
        return list->value-1-elem;
    }
}


