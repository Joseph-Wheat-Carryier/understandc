#include <stdio.h>

#include "intList.h"

int main() {

    IntList *pList = intListNew(10);


    for (int i = 0; i < 10; ++i) {
        intListAdd(pList, i + 1);
    }

    /*intListUpdate(pList,0,1111);
*/
    /*  intListInsert(pList,12,1111);

      intListInsert(pList,12,1111);

      intListInsert(pList,12,1111);

      intListInsert(pList,12,1111);*/

    FILE *file = fopen("./data", "w");

    serialize(pList, file);

    file = fopen("./data", "r");


    IntList *temp = deserialize(file);


    /*intListDeleteByElem(pList, 15);

    intListDelete(pList, 15);

    printf("查询:%d\n", intListGet(pList,6));*/

    intListDisplay(temp);

    printf("length:%d", temp->length);


    intListDestroy(pList);

    int index = intListGetElem(pList,7);

    printf("index:%d",index);
    return 0;
}