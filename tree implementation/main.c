#include<stdlib.h>
#include<stdio.h>
#include "tree.h"

int main() {
    struct TreeNode* root = newNode(1);
    insertChild(root, 2);
    insertChild(root, 3);
    insertChild(root->firstChild, 4);
    insertChild(root->firstChild, 5);
    insertChild(root->firstChild->nextSibling, 6);

    printf("Tree Traversal: ");
    traverseTree(root);
    printf("\n");

    return 0;
}
