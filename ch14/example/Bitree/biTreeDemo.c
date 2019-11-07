# include<stdio.h>
# include"biTreeNode.h"

int main(void) {
    BiTreeNodeAddr node = biTreeCreate("a");
    biTreePutLeaf(node, "b", "c");
    biTreePutLeaf(node->left, "d", "e");
    biTreePutLeaf(node->right, "f", "g");
    biTreePutLeaf(node->left->left, "h", NULL);
    biTreePutLeaf(node->left->right, NULL, "i");
    biTreePutLeaf(node->left->right->right, "j", NULL);
    biTreePutLeaf(node->left->right->right->left,"k","l");
    biTreePutLeaf(node->left->right->right->left->right, "m", NULL);
    biTreePutLeaf(node->right->left, "n", "o");
    biTreePutLeaf(node->right->right, "p", NULL);
    int a = biTreeGetHeight(node);
    printf("%d\n", a);
    biTreeLeaf(node);
}