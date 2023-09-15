#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#define MAX_SIZE 100

typedef struct node {
    int data;
    int next;
} node;

typedef struct arrayL {
    node arr[MAX_SIZE];
    int head;
    int size;
} arrayL;

void Create_AL(arrayL *al);
void InsertAtBeg_AL(arrayL *al, int data);
void InsertAtPos_AL(arrayL *al, int pos, int data);
void DeleteAtBeg_AL(arrayL *al);
void DeleteAtPos_AL(arrayL *al, int pos);
void Print_AL(arrayL *al);

#endif