#ifndef DLL_H
#define DLL_H

typedef struct node {
    int data;
    struct node *prev;
    struct node *next;
} Node;

void insertAtBeginning(int data);
void insertAtEnd(int data);
void insertAtPos(int data, int pos);
void deleteFromBeginning();
void deleteFromEnd();
void deleteAtPos(int pos);
void display();

#endif