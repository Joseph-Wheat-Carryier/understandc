//
// Created by captain_cat on 2019/11/7.
//

#include "biTreeNode.h"

void printBiTreeElement(BiTreeElement elem) {
    printf("%s", elem);
}

BiTreeNodeAddr biTreeCreate(BiTreeElement elem) {
    BiTreeNodeAddr node = (BiTreeNodeAddr) malloc(sizeof(BiTreeNode));
    node->element = elem;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int biTreePutLeaf(BiTreeNodeAddr node, BiTreeElement elem_l, BiTreeElement elem_r) {
    if (node == NULL) {
        printf("输入不合法");
        return 0;
    }

    if (elem_l != NULL||elem_r!=NULL) {
        node->left = biTreeCreate(elem_l);
        node->right = biTreeCreate(elem_r);
    } else {
        return 0;
    }


    return 1;
}

void biTreePreOrder(BiTreeNodeAddr node) {
    if (node == NULL) {
        return;
    }

    printBiTreeElement(node->element);
    if (node->left != NULL) {
        biTreePreOrder(node->left);
    }
    if (node->right != NULL) {
        biTreePreOrder(node->right);
    }
}

void biTreeInOrder(BiTreeNodeAddr node) {
    if (node == NULL) {
        return;
    }

    biTreeInOrder(node->left);

    printBiTreeElement(node->element);

    biTreeInOrder(node->right);

}

void biTreePostOrder(BiTreeNodeAddr node) {
    if (node == NULL) {
        return;
    }

    biTreePostOrder(node->left);

    biTreePostOrder(node->right);

    printBiTreeElement(node->element);

}

void biTreeLeaf(BiTreeNodeAddr node) {
    if (node->left == NULL && node->right == NULL) {
        printBiTreeElement(node->element);
    } else {
        if (node->left != NULL && node->right == NULL) {
            biTreeLeaf(node->left);
        } else if (node->right != NULL && node->left == NULL) {
            biTreeLeaf(node->right);
        } else {
            biTreeLeaf(node->left);
            biTreeLeaf(node->right);
        }
    }
}

int biTreeGetLeafNum(BiTreeNodeAddr node) {
    int count = 0;
    if (node->left == NULL && node->right == NULL) {
        return count;
    } else {
        if (node->left != NULL && node->right == NULL) {
            count = count + 1;
            return count + biTreeGetLeafNum(node->left);
        } else if (node->right != NULL && node->left == NULL) {
            count++;
            return count + biTreeGetLeafNum(node->right);
        } else {
            count += 2;
            return count + biTreeGetLeafNum(node->left) + biTreeGetLeafNum(node->right);
        }
    }
}

int compare(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int biTreeGetHeight(BiTreeNodeAddr node) {
    int count1 = 1;
    int count2 = 1;
    if (node->left == NULL && node->right == NULL) {
        return 1;
    } else {
        if (node->left != NULL && node->right == NULL) {
            count1+=biTreeGetHeight(node->left);

        } else if (node->right != NULL && node->left == NULL) {
            count2+=biTreeGetHeight(node->right);
        } else {
            count1+=biTreeGetHeight(node->left);
            count2+=biTreeGetHeight(node->right);
        }
    }

    return compare(count1,count2);
}