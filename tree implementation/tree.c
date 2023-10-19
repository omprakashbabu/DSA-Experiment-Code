#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

struct TreeNode* newNode(int data) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->data = data;
    node->firstChild = NULL;
    node->nextSibling = NULL;
    return node;
}

void insertChild(struct TreeNode* parent, int data) {
    struct TreeNode* child = newNode(data);
    if (parent->firstChild == NULL) {
        parent->firstChild = child;
    } else {
        struct TreeNode* sibling = parent->firstChild;
        while (sibling->nextSibling != NULL) {
            sibling = sibling->nextSibling;
        }
        sibling->nextSibling = child;
    }
}

void traverseTree(struct TreeNode* node) {
    if (node == NULL) {
        return;
    }
    printf("%d ", node->data);
    traverseTree(node->firstChild);
    traverseTree(node->nextSibling);
}
