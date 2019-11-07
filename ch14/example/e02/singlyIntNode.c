#include "singlyIntNode.h"

SinglyIntNode *singlyIntNodeCreate() {
    SinglyIntNode *head = (SinglyIntNode *) malloc(sizeof(SinglyIntNode));
    head->next = NULL;
    head->value = 0;
    return head;
}

void singlyIntNodeAdd(SinglyIntNode *head, int elem) {
    if (head == NULL) {
        printf("不合法的head");
        return;
    }

    SinglyIntNode *curNode = head;

    while (curNode->next != NULL) {
        curNode = curNode->next;
    }

    SinglyIntNode *newNode = singlyIntNodeCreate();
    newNode->value = elem;
    curNode->next = newNode;
    head->value++;

}

void singlyIntNodeDisplay(const SinglyIntNode *head) {
    if (head == NULL) {
        printf("不合法的head");
        return;
    }

    SinglyIntNode *curNode = head->next;

    int index = 0;
    while (curNode != NULL) {
        printf("[%d]=%d ", index++, curNode->value);
        if ((index + 1) % 10 == 0) {
            printf("\n");
        }
        curNode = curNode->next;
    }
}

int singlyIntNodeDelete(SinglyIntNode *list, int index) {
    if (list == NULL || index >= list->value) {
        printf("不合法!\n");
        return 0;
    }
    SinglyIntNode *temp = list;
    int count = 0;
    while (count < index) {
        temp = temp->next;
        count++;
    }

    if (count == index) {
        SinglyIntNode *node = temp->next;
        temp->next = temp->next->next;
        free(node);
    } else {
        return 0;
    }

    list->value--;
    return 1;
}

int singlyIntNodeDeleteElem(SinglyIntNode *list, int elem) {
    if (list == NULL) {
        printf("不合法!\n");
        return 0;
    }
    SinglyIntNode *temp = list;
    while (temp->next->value != elem && temp->next->next != NULL) {
        temp = temp->next;
    }

    if (temp->next->next != NULL) {
        temp->next = temp->next->next;
        free(temp->next);
    } else {
        if (temp->next->value == elem) {
            temp->next = NULL;
            free(temp->next);
        } else {
            return 0;
        }
    }
    list->value--;
}

void singlyIntNodeRevert(SinglyIntNode *list) {

    if (list == NULL) {
        printf("输入不合法!");
    }
    SinglyIntNode *curNode1 = list->next;
    SinglyIntNode *curNode2 = singlyIntNodeCreate();
    while (curNode1 != NULL) {
        singlyIntNodeAdd(curNode2, curNode1->value);
        curNode1 = curNode1->next;
    }
    int length = list->value;
    list = list->next;
    for (int i = length - 1; i >= 0; i--) {
        curNode1 = curNode2;
        for (int j = 0; j <= i; j++) {
            curNode1 = curNode1->next;
        }
        list->value = curNode1->value;
        list = list->next;
    }


}

int singlyIntNodeGet(SinglyIntNode *list, int index) {
    if (list == NULL || index >= list->value) {
        printf("输入不合法!");
        return 0;
    }
    SinglyIntNode *curNode = list->next;
    int count = 0;
    while (count != index) {
        curNode = curNode->next;
        count++;
    }

    return curNode->value;
}

int singlyIntNodeInsert(SinglyIntNode *list, int index, int elem) {
    if (list == NULL || index >= list->value) {
        printf("输入不合法!");
        return 0;
    }
    int count = 0;
    SinglyIntNode *newNode = singlyIntNodeCreate();
    newNode->value = elem;
    SinglyIntNode *curNode = list->next;
    SinglyIntNode *preNode = list;
    while (count < index) {
        curNode = curNode->next;
        preNode = preNode->next;
        count++;
    }
    preNode->next = newNode;
    preNode->next->next = curNode;

    list->value++;
    return 1;
}

int singlyIntNodeGetElem(SinglyIntNode *list, int elem) {
    if (list->next == NULL) {
        printf("输入错误!");
        return -1;
    }
    int index = 0;
    SinglyIntNode *curNode = list->next->next;
    while (curNode->value != elem) {
        index++;
        if (curNode->next == NULL) {
            return -1;
        } else {
            curNode = curNode->next;
        }
    }

    return index;
}


int singlyIntNodeGetElemReverse(SinglyIntNode *list, int elem) {
    SinglyIntNode *curNode = list;
    SinglyIntNode *temp = singlyIntNodeCreate();
    while (curNode->next != NULL) {
        singlyIntNodeAdd(temp, list->value);
        curNode = curNode->next;
    }
    singlyIntNodeRevert(temp);
    int index = singlyIntNodeDeleteElem(temp, elem);
    if (index == -1) {
        return index;
    } else {
        return list->value - index;
    }
}