#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct node {
    int data;
    struct node *next;
} node;

typedef struct linkedL {
    node *head;
    int size;
} linkedL;

void Create_LL(linkedL *ll);
void InsertAtBeg_LL(linkedL *ll, int data);
void InsertAtPos_LL(linkedL *ll, int pos, int data);
void DeleteAtBeg_LL(linkedL *ll);
void DeleteAtPos_LL(linkedL *ll, int pos);
void Print_LL(linkedL *ll);

#endif