#ifndef STACK_LL
#define STACK_LL
struct Node
{
    int data;
    struct Node *next;
};
struct Node* newNode(int data);
int isEmpty(struct Node* root);
void push(struct Node** root, int data);
int pop(struct Node** root);
int peek(struct Node* root);
#endif