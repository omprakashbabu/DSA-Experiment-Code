#ifndef TREE_H
#define TREE_H

struct TreeNode {
    int data;
    struct TreeNode *firstChild;
    struct TreeNode *nextSibling;
};

struct TreeNode* newNode(int data);
void insertChild(struct TreeNode* parent, int data);
void traverseTree(struct TreeNode* node);

#endif
