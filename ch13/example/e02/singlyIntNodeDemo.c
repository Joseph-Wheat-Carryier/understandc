#include "singlyIntNode.h"

int main(void) {

    SinglyIntNode *head = singlyIntNodeCreate();

    for (int i = 0; i < 15; ++i) {
        singlyIntNodeAdd(head, i + 1);
    }

    /*singlyIntNodeRevert(head);*/

    singlyIntNodeDelete(head,1);
    singlyIntNodeInsert(head,13,100);
    singlyIntNodeDisplay(head);
    singlyIntNodeGetElemReverse(head,100);
    singlyIntNodeDisplay(head);



    return 0;
}

