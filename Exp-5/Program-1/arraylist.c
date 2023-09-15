#include "arraylist.h"
#include <stdio.h>
#include <stdlib.h>

void Create_AL(arrayL *al) {
    al->head = -1;
    al->size = 0;
}

void InsertAtBeg_AL(arrayL *al, int data) {
    if (al->size == MAX_SIZE) {
        printf("List is full\n");
        return;
    }
    al->arr[al->size].data = data;
    al->arr[al->size].next = al->head;
    al->head = al->size;
    al->size++;
}

void InsertAtPos_AL(arrayL *al, int pos, int data) {
    if (pos < 0 || pos > al->size) {
        printf("Invalid position\n");
        return;
    }
    if (pos == 0) {
        InsertAtBeg_AL(al, data);
        return;
    }
    if (al->size == MAX_SIZE) {
        printf("List is full\n");
        return;
    }
    int i = al->head;
    for (int j = 0; j < pos - 1; j++) {
        i = al->arr[i].next;
    }
    al->arr[al->size].data = data;
    al->arr[al->size].next = al->arr[i].next;
    al->arr[i].next = al->size;
    al->size++;
}

void DeleteAtBeg_AL(arrayL *al) {
    if (al->size == 0) {
        printf("List is empty\n");
        return;
    }
    al->head = al->arr[al->head].next;
}

void DeleteAtPos_AL(arrayL *al, int pos) {
    if (pos < 0 || pos >= al->size) {
        printf("Invalid position\n");
        return;
    }
    if (pos == 0) {
        DeleteAtBeg_AL(al);
        return;
    }
    int i = al->head;
    for (int j = 0; j < pos - 1; j++) {
        i = al->arr[i].next;
    }
    al->arr[i].next = al->arr[al->arr[i].next].next;
}

void Print_AL(arrayL *al) {
    int i = al->head;
    while (i != -1) {
        printf("%d -> ", al->arr[i].data);
        i = al->arr[i].next;
    }
    printf("NULL\n");
}
